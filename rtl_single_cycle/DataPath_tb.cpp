#include "gtest/gtest.h"
#include "VDataMemory.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class DataMemWriteTest : public ::testing::Test
{
public:

protected:
    VDataMemory* dut; 

    virtual void SetUp() override {
        dut = new VDataMemory;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval(); 
    }
};

TEST_F(DataMemWriteTest, WriteEnableIsZeroAndResultSrcIsZero) {
    dut->ResultSrc = 0b0;   
    dut->A = 0x00000020;
    dut->WE = 0b0;
    evaluate();
    EXPECT_EQ(dut->Result, 0x0000000A); 
    
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
