#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc top.sv \
            regfile.sv \
            instruction_memory.sv \
            data_memory.sv \
            program_counter.sv \
            signExtend.sv \
            alu.sv \
            controlUnit.sv \
            ALUDecoder.sv \
            --exe ../pdfgen_tb.cpp \
            --prefix "Vtop" \
            -o Vtop

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vtop.mk

# Run executable simulation file
./obj_dir/Vtop
