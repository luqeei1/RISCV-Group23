#include "gtest/gtest.h"
#include "Vcached_datamem.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class cached_datamemTest : public ::testing::Test
{
public:

protected:
    Vcached_datamem* dut; 

    virtual void SetUp() override {
        dut = new Vcached_datamem;
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

TEST_F(CachedDataMemTest, LoadEntireWord) {
    dut->WE = 0;  // Write disable
    dut->RE = 1;  // Read enable
    dut->modeAddr = 0b001;  // Load entire word
    dut->addr = 0x00000010;  // Address
    clockTick();

    EXPECT_EQ(dut->data_out, 0xDEADBEEF);  // Expected value (mocked or preloaded memory)
}

TEST_F(CachedDataMemTest, LoadSignedByte) {
    dut->WE = 0;
    dut->RE = 1;
    dut->modeAddr = 0b011;  // Load signed byte
    dut->addr = 0x00000012;  // Address targeting byte 2
    clockTick();

    EXPECT_EQ(dut->data_out, 0xFFFFFF80);  // Expected sign-extended value
}

TEST_F(CachedDataMemTest, LoadUnsignedByte) {
    dut->WE = 0;
    dut->RE = 1;
    dut->modeAddr = 0b101;  // Load unsigned byte
    dut->addr = 0x00000013;  // Address targeting byte 3
    clockTick();

    EXPECT_EQ(dut->data_out, 0x0000007F);  // Expected zero-extended value
}

TEST_F(CachedDataMemTest, CacheMissStall) {
    dut->WE = 0;
    dut->RE = 1;
    dut->modeAddr = 0b001;
    dut->addr = 0x0000FFFF;  // Address likely to cause a cache miss
    clockTick();

    EXPECT_TRUE(dut->miss_stall);  // Ensure miss stall signal is asserted
}

TEST_F(CachedDataMemTest, WriteAndReadBack) {
    // Write data to memory
    dut->WE = 1;  // Write enable
    dut->RE = 0;  // Read disable
    dut->modeAddr = 0b001;  // Write entire word
    dut->addr = 0x00000020;  // Target address
    dut->write_data = 0xCAFEBABE;  // Data to write
    clockTick();

    // Read back data
    dut->WE = 0;
    dut->RE = 1;
    dut->addr = 0x00000020;
    clockTick();

    EXPECT_EQ(dut->data_out, 0xCAFEBABE);  // Verify written data
}

TEST_F(CachedDataMemTest, ResetFunctionality) {
    dut->rst = 1;  // Assert reset
    clockTick();
    dut->rst = 0;  // Deassert reset
    clockTick();

    EXPECT_EQ(dut->data_out, 0);  // Expect reset state
    EXPECT_FALSE(dut->miss_stall);  // Ensure no stall on reset
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}