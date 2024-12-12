#include <cstdlib>
#include <utility>
#include "cpu_testbench.h"

class CacheFSMTestBench : public CpuTestbench {
    void initializeInputs() {
        top_->clk = 1;
        top_->rst = 0;

        // Initialize CPU request fields
        top_->cpu_req_addr = 0;
        top_->cpu_req_data = 0;
        top_->cpu_req_op = 0;
        top_->cpu_req_mode_addr = 0;
        top_->cpu_req_valid = 0;

        // Initialize memory response
        top_->mem_resp_data = 0;
        top_->mem_resp_ready = 0;
    }
};

TEST_F(CacheFSMTestBench, CacheHitRead) {
    setupTest("cache_hit_read");
    initSimulation();

    // Initialize cache state
    top_->cache_mem_valid[0] = 1;
    top_->cache_mem_tag[0] = 0x10;
    top_->cache_mem_data[0] = 0xAAAAAAAABBBBBBBB;

    // Set CPU request
    top_->cpu_req_addr = 0x1010;
    top_->cpu_req_data = 0;
    top_->cpu_req_op = 0b00; // Read operation
    top_->cpu_req_mode_addr = 0;
    top_->cpu_req_valid = 1;

    runSimulation(10000);

    // Verify response
    EXPECT_EQ(top_->cpu_resp_data, 0xAAAAAAAA);  // Word 1
    EXPECT_EQ(top_->cpu_resp_ready, 1u);
}

TEST_F(CacheFSMTestBench, CacheHitWrite) {
    setupTest("cache_hit_write");
    initSimulation();

    // Initialize cache state
    top_->cache_mem_valid[1] = 1;
    top_->cache_mem_tag[1] = 0x20;

    // Set CPU request
    top_->cpu_req_addr = 0x2020;
    top_->cpu_req_data = 0xCCCCDDDD;
    top_->cpu_req_op = 0b01; // Write operation
    top_->cpu_req_mode_addr = 0;
    top_->cpu_req_valid = 1;

    runSimulation(1);

    // Verify cache updates
    EXPECT_EQ(top_->cache_mem_data[1], 0xCCCCDDDD);
    EXPECT_EQ(top_->cache_mem_dirty[1], 1u);
}

TEST_F(CacheFSMTestBench, CacheMissAllocate) {
    setupTest("cache_miss_allocate");
    initSimulation();

    // Initialize invalid cache line
    top_->cache_mem_valid[2] = 0;

    // Set CPU request
    top_->cpu_req_addr = 0x3030;
    top_->cpu_req_data = 0;
    top_->cpu_req_op = 0b00; // Read operation
    top_->cpu_req_mode_addr = 0;
    top_->cpu_req_valid = 1;

    runSimulation(1);

    // Simulate memory response for allocation
    top_->mem_resp_data = 0xAAAAAAAABBBBBBBB;
    top_->mem_resp_ready = 1;
    runSimulation(1);

    // Verify cache update
    EXPECT_EQ(top_->cache_mem_data[2], 0xAAAAAAAABBBBBBBB);
    EXPECT_EQ(top_->cache_mem_valid[2], 1u);
}

TEST_F(CacheFSMTestBench, PartialWrite) {
    setupTest("partial_write");
    initSimulation();

    // Initialize cache state
    top_->cache_mem_valid[4] = 1;
    top_->cache_mem_tag[4] = 0x40;
    top_->cache_mem_data[4] = 0xFFFFFFFFFFFFFFFF;

    // Set CPU request for partial write (byte write)
    top_->cpu_req_addr = 0x4044;
    top_->cpu_req_data = 0xAB;  // Byte to write
    top_->cpu_req_op = 0b01;    // Write operation
    top_->cpu_req_mode_addr = 0b011; // Byte enable
    top_->cpu_req_valid = 1;

    runSimulation(1);

    // Verify cache update
    EXPECT_EQ(top_->cache_mem_data[4] & 0x0000FF0000000000, 0x0000AB0000000000);
    EXPECT_EQ(top_->cache_mem_dirty[4], 1u);
}

TEST_F(CacheFSMTestBench, Reset) {
    setupTest("reset_test");
    initSimulation();

    // Verify reset state
    EXPECT_EQ(top_->cache_mem_valid[0], 0u);
    EXPECT_EQ(top_->cache_mem_dirty[0], 0u);
}

TEST_F(CacheFSMTestBench, MinimalTest) {
    setupTest("minimal_test");
    initSimulation();

    top_->cpu_req_addr = 0x1234;
    top_->cpu_req_data = 0x5678;
    top_->cpu_req_op = 0b00;  // Read operation
    top_->cpu_req_valid = 1;

    runSimulation(1000);  // Run for more cycles

    std::cout << "cpu_req_addr: " << top_->cpu_req_addr << std::endl;
    std::cout << "cpu_req_data: " << top_->cpu_req_data << std::endl;
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
