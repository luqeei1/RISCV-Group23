#include "gtest/gtest.h"
#include "Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class AluTest : public ::testing::Test {
protected:
    Valu* dut;
    VerilatedVcdC* tfp;

    virtual void SetUp() override {
        dut = new Valu;
        
        // Optional: Trace generation
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("alu.vcd");
    }

    virtual void TearDown() override {
        tfp->close();
        delete tfp;
        delete dut;
    }

    void evaluate() {
        dut->eval();
    }
};

TEST_F(AluTest, ArithmeticOperations) {
    // ADD
    dut->SrcA = 5;
    dut->SrcB = 3;
    dut->ALUctrl = 0x0;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 8);
    EXPECT_EQ(dut->Zero, 0);

    // SUB
    dut->ALUctrl = 0x1;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 2);
    EXPECT_EQ(dut->Zero, 0);
}

TEST_F(AluTest, LogicalOperations) {
    // XOR
    dut->SrcA = 0xFF00;
    dut->SrcB = 0x0FF0;
    dut->ALUctrl = 0x2;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0xF0F0);
    EXPECT_EQ(dut->Zero, 0);

    // OR
    dut->ALUctrl = 0x3;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0xFFF0);
    EXPECT_EQ(dut->Zero, 0);

    // AND
    dut->ALUctrl = 0x4;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x0F00);
    EXPECT_EQ(dut->Zero, 0);
}

TEST_F(AluTest, ShiftOperations) {
    // SLL
    dut->SrcA = 0x1;
    dut->SrcB = 0x4;
    dut->ALUctrl = 0x5;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x10);
    EXPECT_EQ(dut->Zero, 0);

    // SRL
    dut->SrcA = 0x10;
    dut->SrcB = 0x2;
    dut->ALUctrl = 0x6;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x4);
    EXPECT_EQ(dut->Zero, 0);

    // SRA
    dut->SrcA = 0x80000000;
    dut->SrcB = 0x1;
    dut->ALUctrl = 0x7;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0xC0000000);
    EXPECT_EQ(dut->Zero, 0);
}

TEST_F(AluTest, BranchConditions) {
    // BEQ
    dut->SrcA = 5;
    dut->SrcB = 5;
    dut->ALUctrl = 0xA;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0);
    EXPECT_EQ(dut->Zero, 1);

    // BNE
    dut->SrcA = 5;
    dut->SrcB = 6;
    dut->ALUctrl = 0xB;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 1);
    EXPECT_EQ(dut->Zero, 0);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
