#include "gtest/gtest.h"
#include "VcontrolUnit.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class controlUnitTest : public ::testing::Test
{
public:

protected:
    VcontrolUnit* dut; 

    virtual void SetUp() override {
        dut = new VcontrolUnit;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval(); 
    }
};

 // Test for R-type instruction
TEST_F(controlUnitTest, RTypeInstruction) {
    dut->Instr = 0b00000000000100001000000010110011;  // Example R-type instruction
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b00);
    EXPECT_EQ(dut->ResultSrc, 0b00);
    EXPECT_EQ(dut->MemWrite, 0b0);
    EXPECT_EQ(dut->ALUCtrl, 0b0000);  // Assuming ALU performs ADD operation
    EXPECT_EQ(dut->ALUSrc, 0b0);
    EXPECT_EQ(dut->ImmSrc, 0b111);
    EXPECT_EQ(dut->RegWrite, 0b1);
    EXPECT_EQ(dut->modeBU, 0b000);  // Default invalid for non-load/store
}

// Test for I-type instruction
TEST_F(controlUnitTest, ITypeInstruction) {
    dut->Instr = 0b00000000000100001000000010010011;  // Example I-type instruction
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b00);
    EXPECT_EQ(dut->ResultSrc, 0b00);
    EXPECT_EQ(dut->MemWrite, 0b0);
    EXPECT_EQ(dut->ALUCtrl, 0b0000);  // Assuming ALU performs ADDI operation
    EXPECT_EQ(dut->ALUSrc, 0b1);
    EXPECT_EQ(dut->ImmSrc, 0b000);
    EXPECT_EQ(dut->RegWrite, 0b1);
    EXPECT_EQ(dut->modeBU, 0b000);
}

// Test for Load instruction
TEST_F(controlUnitTest, LoadInstruction) {
    dut->Instr = 0b00000000000100001000000010000011;  // Example Load instruction
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b00);
    EXPECT_EQ(dut->ResultSrc, 0b01);  // Result from memory
    EXPECT_EQ(dut->MemWrite, 0b0);
    EXPECT_EQ(dut->ALUCtrl, 0b0000);  // Load doesn't affect ALU control
    EXPECT_EQ(dut->ALUSrc, 0b1);
    EXPECT_EQ(dut->ImmSrc, 0b000);
    EXPECT_EQ(dut->RegWrite, 0b1);
    EXPECT_EQ(dut->modeBU, 0b011);  // Load byte mode
}

// Test for S-type instruction
TEST_F(controlUnitTest, STypeInstruction) {
    dut->Instr = 0b00000000000100001000001010100011;  // Example Store instruction
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b00);
    EXPECT_EQ(dut->ResultSrc, 0b00);
    EXPECT_EQ(dut->MemWrite, 0b1);
    EXPECT_EQ(dut->ALUCtrl, 0b0000);  // Store doesn't affect ALU control
    EXPECT_EQ(dut->ALUSrc, 0b1);
    EXPECT_EQ(dut->ImmSrc, 0b001);
    EXPECT_EQ(dut->RegWrite, 0b0);
    EXPECT_EQ(dut->modeBU, 0b011);  // Store byte mode
}

// Test for J-type instruction
TEST_F(controlUnitTest, JTypeInstruction) {
    dut->Instr = 0b00000000000100001000000111101111; // Example JAL instruction
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01);
    EXPECT_EQ(dut->ResultSrc, 0b10);  // Result from PC+4
    EXPECT_EQ(dut->MemWrite, 0b0);
    EXPECT_EQ(dut->ALUCtrl, 0b1111);  // Doesn't use ALU
    EXPECT_EQ(dut->ALUSrc, 0b0);
    EXPECT_EQ(dut->ImmSrc, 0b100);
    EXPECT_EQ(dut->RegWrite, 0b1);
    EXPECT_EQ(dut->modeBU, 0b000);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}