#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc cached_datamem.sv \
            --exe cached_datamem_tb.cpp \
            --prefix "Vcached_datamem" \
            -o Vcached_datamem \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vcached_datamem.mk

# Run executable simulation file
./obj_dir/Vcached_datamem
