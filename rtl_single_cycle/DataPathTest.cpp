#include "gtest/gtest.h"
#include "VDataPath.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class DataPathTest : public ::testing::Test
{
public:

protected:
    VDataPath* dut; 

    virtual void SetUp() override {
        dut = new VDataPath;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval(); 
    }
};

TEST_F(DataPathTest, WriteEnableIsZeroAndResultSrcIsZero) {
    dut->ResultSrc = 0;   
    dut->A = 0x00000020;
    dut->WE = 0b0;
    evaluate();
    EXPECT_EQ(dut->Result, 0x000000020); 
}

TEST_F(DataPathTest, WriteEnableIsZeroAndResultSrcIsOne) {
    dut->ResultSrc = 1;   
    dut->A = 0x00000020;
    dut->WE = 0b0;
    evaluate();
    EXPECT_EQ(dut->Result, 0x000000003); 
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
