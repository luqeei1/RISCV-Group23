#include "gtest/gtest.h"
#include "VBPU.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class BPUTest : public ::testing::Test
{
public:

protected:
    VBPU* dut; 

    virtual void SetUp() override {
        dut = new VBPU;
    }

    virtual void TearDown() override {
        delete dut;
    }
    
    void clockTick() {
        dut->clk = 1;
        evaluate();
        dut->clk = 0;
        evaluate();
    }

    void evaluate() {
        dut->eval(); 
    }
};