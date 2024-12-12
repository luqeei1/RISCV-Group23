# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            --public-flat-rw \
            -cc top.sv \
            -top-module top \
            regfile.sv \
            instruction_memory.sv \
            cached_datamem.sv \
            program_counter.sv \
            signExtend.sv \
            alu.sv \
            BPU.sv \
            FF_DE.sv \
            FF_EM.sv \
            FF_MW.sv \
            FF_FD.sv \
            hazard_unit.sv \
            mux2.sv \
            mux3.sv \
            mux4.sv \
            PC_mux.sv \
            controlUnit.sv \
            ALUDecoder.sv \
            --exe ../Test3.cpp \
            --prefix "Vtop" \
            -o Vtop

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vtop.mk

# Run executable simulation file
./obj_dir/Vtop