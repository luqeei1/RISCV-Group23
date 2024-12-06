#include <cstdlib>
#include <utility>

#include "cpu_testbench.h"

#define NAME "program_counter"

class CacheFSMTestBench : public CpuTestbench {
    void initializeInputs() override{
        top->clk = 1;
        top->rst= 1;
        top->cpu_req = {0,0,0,0,0};
        top->mem_resp{0,0};
    }
};

TEST_F(CacheFSMTestBench, CacheHitRead){
    setupTest("cache_hit_read");
    initSimulation();

    top->cache_mem[0].valid = 1;
    top->cache_mem[0].tag = 0x10;
    top->cache_mem[0].data = 0xABABABABCDCDCDCD;

    top->cpu_req = {0x1010, 0, 0b00, 0, 1}; // addr: 0x1010, read operation

    runSimulation(1);

    EXPECT_EQ(top->cpu_resp.data, 0xABABABAB); //expect word 1
    EXPECT_EQ(top->cpu_resp.ready, 1u);
}

TEST_f(CacheFSMTestBench, CacheHitWrite){
    setupTest("cache_hit_write");
    initSimulation();

    top->cache_mem[1].valid = 1;
    top->cache_mem[1].tag = 0x20;

    top->cpu_req = {0x2020, 0xDDDDDDDD, 0b01, 0, 1} // write DDDDDDDD to 0x2020
    runSimulation(1);

    EXPECT_EQ(top->cache_mem[1].data, 0xDDDDDDDD);
    EXPECT_EQ(top->cache_mem[1].dirty, 1u);
}

TEST_F(CacheFSMTestBench, CacheMissAllocate){
    setupTest("cache_miss_allocate");
    initSimulation();

    top->cache_mem[2].valid = 0;
    top->cpu_req = {0x3030,0,0b00,0,1};

    runSimulation(1);

    top->mem_resp = {0xAAAAAAAABBBBBBBB,1};
    runSimulation(1);

    EXPECT_EQ(top->cache_mem[2].data,0xAAAAAAAABBBBBBBB);
    EXPECT_EQ(top->cache_mem[2].valid, 1u);
}

TEST_F(CacheFSMTestBench, CacheMissWriteBack) {
    setupTest("cache_miss_write_back");
    initSimulation();

    // Set up a dirty cache line
    top->cache_mem[3].valid = 1;
    top->cache_mem[3].dirty = 1;
    top->cache_mem[3].tag = 0x30;
    top->cache_mem[3].data = 0xCAFEBABEDEADC0DE;

    // Set up CPU request
    top->cpu_req = {0x4040, 0, 0b00, 0, 1};  // addr: 0x4040, op: read

    runSimulation(1);

    // Check FSM state transitions
    EXPECT_EQ(top->current_state, top->WRITE_BACK);
    runSimulation(1);

    // Simulate memory write completion
    top->mem_resp = {0, 1};  // Memory write-back complete
    runSimulation(1);

    EXPECT_EQ(top->current_state, top->ALLOCATE);
}

// Main Entry Point
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
