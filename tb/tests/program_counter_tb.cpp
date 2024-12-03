#include <cstdlib>
#include <utility>

#include "cpu_testbench.h"

#define NAME "program_counter"

class PCTestBench : public CpuTestbench{
    void initializeInputs(){
        top->clk = 1;
        top->rst = 1;
        top->PCTarget = 0;
    }
};

TEST_F(PCTestBench, ProgramCounterReset)
{
    setupTest("rst_test");
    initSimulation();

    EXPECT_EQ(top_->PCF, 0u)
    runSimulation();

    top_->rst = 0;
    runSimulation();
    EXPECT_NE(top_->PCF, 0u);
}

TEST_F(CpuTestbench, ProgramCounterIncrement) {
    setupTest("increment_test");
    initSimulation();

    top_->PCSrc = 0b000;
    top_->PCPlus4F = 4;
    runSimulation(1);

    EXPECT_EQ(top_->PCF, 4u);
}

int main(int argc, char **argv)
{
    testing:InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}