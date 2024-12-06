#include <cstdlib>
#include <utility>
#include "cpu_testbench.h"

class CacheFSMTestBench : public CpuTestbench {
    void initializeInputs() override {
        top_->clk = 1;
        top_->rst = 1;
        top_->cpu_req = {0, 0, 0, 0, 0, 0};
        top_->mem_resp = {0, 0};
    }
};

TEST_F(CacheFSMTestBench, CacheHitRead) {
    setupTest("cache_hit_read");
    initSimulation();

    top_->cache_mem[0].valid = 1;
    top_->cache_mem[0].tag = 0x10;
    top_->cache_mem[0].data = 0xAAAAAAAABBBBBBBB;

    top_->cpu_req = {0x1010, 0, 0b00, 0, 0, 1};  // addr: 0x1010, read operation

    runSimulation(1);

    // Verify response
    EXPECT_EQ(top_->cpu_resp.data, 0xAAAAAAAA);  // Word 1
    EXPECT_EQ(top_->cpu_resp.ready, 1u);
}

TEST_F(CacheFSMTestBench, CacheHitWrite) {
    setupTest("cache_hit_write");
    initSimulation();

    // Initialize cache line
    top_->cache_mem[1].valid = 1;
    top_->cache_mem[1].tag = 0x20;

    // Issue a write request
    top_->cpu_req = {0x2020, 0xCCCCDDDD, 0b01, 0, 0, 1};  // addr: 0x2020, write CCCCDDDD

    runSimulation(1);

    // Verify cache updates
    EXPECT_EQ(top_->cache_mem[1].data, 0xCCCCDDDD);
    EXPECT_EQ(top_->cache_mem[1].dirty, 1u);
}

TEST_F(CacheFSMTestBench, CacheMissAllocate) {
    setupTest("cache_miss_allocate");
    initSimulation();

    // Set up invalid cache line
    top_->cache_mem[2].valid = 0;

    // Issue a read request
    top_->cpu_req = {0x3030, 0, 0b00, 0, 0, 1};  // addr: 0x3030, read

    runSimulation(1);

    // Simulate memory response for allocation
    top_->mem_resp = {0xAAAAAAAABBBBBBBB, 1};  // Memory fetch response
    runSimulation(1);

    // Verify cache update
    EXPECT_EQ(top_->cache_mem[2].data, 0xAAAAAAAABBBBBBBB);
    EXPECT_EQ(top_->cache_mem[2].valid, 1u);
}

TEST_F(CacheFSMTestBench, CacheMissWriteBack) {
    setupTest("cache_miss_write_back");
    initSimulation();

    // Set up a dirty cache line
    top_->cache_mem[3].valid = 1;
    top_->cache_mem[3].dirty = 1;
    top_->cache_mem[3].tag = 0x30;
    top_->cache_mem[3].data = 0xCAFEBABEDEADC0DE;

    // Issue a read request that causes a cache miss
    top_->cpu_req = {0x4040, 0, 0b00, 0, 0, 1};  // addr: 0x4040, read

    runSimulation(1);

    // Verify state transition to WRITE_BACK
    EXPECT_EQ(top_->current_state, top_->WRITE_BACK);

    // Simulate memory write completion
    top_->mem_resp = {0, 1};  // Write-back complete
    runSimulation(1);

    // Verify state transition to ALLOCATE
    EXPECT_EQ(top_->current_state, top_->ALLOCATE);
}

TEST_F(CacheFSMTestBench, PartialWrite) {
    setupTest("partial_write");
    initSimulation();

    // Set up valid cache line
    top_->cache_mem[4].valid = 1;
    top_->cache_mem[4].tag = 0x40;
    top_->cache_mem[4].data = 0xFFFFFFFFFFFFFFFF;

    // Issue a partial write request (single byte)
    top_->cpu_req = {0x4044, 0xAB, 0b01, 3'b011, 0, 1};  // addr: 0x4044, write byte AB

    runSimulation(1);

    // Verify cache update
    EXPECT_EQ(top_->cache_mem[4].data & 0x0000FF0000000000, 0x0000AB0000000000);
    EXPECT_EQ(top_->cache_mem[4].dirty, 1u);
}

TEST_F(CacheFSMTestBench, Reset) {
    setupTest("reset_test");
    initSimulation();

    // Verify initial state after reset
    EXPECT_EQ(top_->current_state, top_->IDLE);
    EXPECT_EQ(top_->cache_mem[0].valid, 0u);
    EXPECT_EQ(top_->cache_mem[0].dirty, 0u);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
