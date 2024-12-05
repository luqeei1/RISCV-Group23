#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
<<<<<<< HEAD
            -cc DataPath.sv \
            --exe DataPathTest.cpp \
            --prefix "Valu" \
            -o Valu \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Valu.mk

# Run executable simulation file
./obj_dir/VDataPath
=======
            -cc controlUnit.sv \
            --exe controlUnitTest.cpp \
            --prefix "VcontrolUnit" \
            -o VcontrolUnit \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f VcontrolUnit.mk

# Run executable simulation file
./obj_dir/VcontrolUnit
>>>>>>> 03227522db5103bf691fa2f8bc200332e98207ae
