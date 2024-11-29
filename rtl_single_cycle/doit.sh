#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc DataPath.sv \
            --exe DataPathTest.cpp \
            --prefix "VDataPath" \
            -o VDataPath \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f VDataPath.mk

# Run executable simulation file
./obj_dir/VDataPath
