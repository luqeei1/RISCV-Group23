#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc controlUnit.sv \
            --exe controlUnitTest.cpp \
            --prefix "VcontrolUnit" \
            -o VcontrolUnit \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f VcontrolUnit.mk

# Run executable simulation file
./obj_dir/VcontrolUnit
