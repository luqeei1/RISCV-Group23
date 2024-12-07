#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc top.sv \
            regfile.sv \
            instructionMemory.sv \
            data_memory.sv \
            program_counter.sv \
            ControlUnit/signExtend.sv \
            alu.sv \
            ControlUnit/controlUnit.sv \
            ControlUnit/ALUDecoder.sv \
            --exe ../Test4.cpp \
            --prefix "Vtop" \
            -o Vtop

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vtop.mk

# Run executable simulation file
./obj_dir/Vtop