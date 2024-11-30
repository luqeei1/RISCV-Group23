#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc alu.sv \
            --exe alu_tb.cpp \
            --prefix "Valu" \
            -o Valu \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Valu.mk

# Run executable simulation file
./obj_dir/Valu
