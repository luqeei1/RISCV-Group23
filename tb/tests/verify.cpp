#include <cstdlib>
#include <utility>

#include "cpu_testbench.h"

#define CYCLES 100000

TEST_F(CpuTestbench, TestAddiBne)
{
    setupTest("1_addi_bne");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 254);
}

TEST_F(CpuTestbench, TestLiAdd)
{
    setupTest("2_li_add");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 1000);
}

TEST_F(CpuTestbench, TestLbuSb)
{
    setupTest("3_lbu_sb");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 300);
}

TEST_F(CpuTestbench, TestJalRet)
{
    setupTest("4_jal_ret");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 53);
}

TEST_F(CpuTestbench, TestPdf)
{
    setupTest("5_pdf");
    setData("reference/gaussian.mem");
    initSimulation();
    runSimulation(CYCLES * 10);
    EXPECT_EQ(top_->a0, 15363);
}

TEST_F(CpuTestbench, TestRV32I)
{
    setupTest("RV32I");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 15);
}

TEST_F(CpuTestbench, AllBranchInstructions)
{
    setupTest("AllBranch");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 6);
}

TEST_F(CpuTestbench, BinaryToDecimalConverter)
{
    setupTest("BinToDecimal");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 21852);
}

TEST_F(CpuTestbench, 30thFibonacciNumber)
{
    setupTest("Fibonacci");
    initSimulation();
    runSimulation(CYCLES);
    EXPECT_EQ(top_->a0, 832040);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
