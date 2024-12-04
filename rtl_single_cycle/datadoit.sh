#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc data_memory.sv \
            --exe DataMemoryTest.cpp \
            --prefix "Vdata_memory" \
            -o Vdata_memory \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vdata_memory.mk

# Run executable simulation file
./obj_dir/Vdata_memory
