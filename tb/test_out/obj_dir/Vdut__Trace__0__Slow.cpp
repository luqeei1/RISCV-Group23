// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBit(c+173,"trigger", false,-1);
    tracep->declBus(c+174,"a0", false,-1, 31,0);
    tracep->declBus(c+175,"a1", false,-1, 31,0);
    tracep->declBus(c+176,"a2", false,-1, 31,0);
    tracep->declBus(c+177,"a3", false,-1, 31,0);
    tracep->declBus(c+178,"a4", false,-1, 31,0);
    tracep->declBus(c+179,"a5", false,-1, 31,0);
    tracep->declBus(c+180,"a6", false,-1, 31,0);
    tracep->declBus(c+181,"a7", false,-1, 31,0);
    tracep->declBus(c+182,"t0", false,-1, 31,0);
    tracep->declBus(c+183,"t1", false,-1, 31,0);
    tracep->declBus(c+184,"t2", false,-1, 31,0);
    tracep->declBus(c+185,"t3", false,-1, 31,0);
    tracep->declBus(c+186,"t4", false,-1, 31,0);
    tracep->declBus(c+187,"t5", false,-1, 31,0);
    tracep->declBus(c+188,"t6", false,-1, 31,0);
    tracep->declBus(c+189,"s0", false,-1, 31,0);
    tracep->declBus(c+190,"s1", false,-1, 31,0);
    tracep->declBus(c+191,"s2", false,-1, 31,0);
    tracep->declBus(c+192,"s3", false,-1, 31,0);
    tracep->declBus(c+193,"s4", false,-1, 31,0);
    tracep->declBus(c+194,"s5", false,-1, 31,0);
    tracep->declBus(c+195,"s6", false,-1, 31,0);
    tracep->declBus(c+196,"s7", false,-1, 31,0);
    tracep->declBus(c+197,"s8", false,-1, 31,0);
    tracep->declBus(c+198,"s9", false,-1, 31,0);
    tracep->declBus(c+199,"s10", false,-1, 31,0);
    tracep->declBus(c+200,"s11", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBit(c+173,"trigger", false,-1);
    tracep->declBus(c+174,"a0", false,-1, 31,0);
    tracep->declBus(c+175,"a1", false,-1, 31,0);
    tracep->declBus(c+176,"a2", false,-1, 31,0);
    tracep->declBus(c+177,"a3", false,-1, 31,0);
    tracep->declBus(c+178,"a4", false,-1, 31,0);
    tracep->declBus(c+179,"a5", false,-1, 31,0);
    tracep->declBus(c+180,"a6", false,-1, 31,0);
    tracep->declBus(c+181,"a7", false,-1, 31,0);
    tracep->declBus(c+182,"t0", false,-1, 31,0);
    tracep->declBus(c+183,"t1", false,-1, 31,0);
    tracep->declBus(c+184,"t2", false,-1, 31,0);
    tracep->declBus(c+185,"t3", false,-1, 31,0);
    tracep->declBus(c+186,"t4", false,-1, 31,0);
    tracep->declBus(c+187,"t5", false,-1, 31,0);
    tracep->declBus(c+188,"t6", false,-1, 31,0);
    tracep->declBus(c+189,"s0", false,-1, 31,0);
    tracep->declBus(c+190,"s1", false,-1, 31,0);
    tracep->declBus(c+191,"s2", false,-1, 31,0);
    tracep->declBus(c+192,"s3", false,-1, 31,0);
    tracep->declBus(c+193,"s4", false,-1, 31,0);
    tracep->declBus(c+194,"s5", false,-1, 31,0);
    tracep->declBus(c+195,"s6", false,-1, 31,0);
    tracep->declBus(c+196,"s7", false,-1, 31,0);
    tracep->declBus(c+197,"s8", false,-1, 31,0);
    tracep->declBus(c+198,"s9", false,-1, 31,0);
    tracep->declBus(c+199,"s10", false,-1, 31,0);
    tracep->declBus(c+200,"s11", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+2,"InstrF", false,-1, 31,0);
    tracep->declBus(c+3,"InstrE", false,-1, 31,0);
    tracep->declBus(c+4,"InstrM", false,-1, 31,0);
    tracep->declBus(c+5,"InstrW", false,-1, 31,0);
    tracep->declBus(c+6,"RD1E", false,-1, 31,0);
    tracep->declBus(c+7,"RD2E", false,-1, 31,0);
    tracep->declBus(c+8,"PCE", false,-1, 31,0);
    tracep->declBus(c+9,"PCPlus4E", false,-1, 31,0);
    tracep->declBit(c+10,"RegWriteE", false,-1);
    tracep->declBit(c+11,"ALUSrcE", false,-1);
    tracep->declBit(c+12,"MemWriteE", false,-1);
    tracep->declBus(c+13,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+14,"modeAddrE", false,-1, 2,0);
    tracep->declBit(c+15,"JALRE", false,-1);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBit(c+17,"MemWriteM", false,-1);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+19,"modeAddrM", false,-1, 2,0);
    tracep->declBus(c+20,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+154,"ReadDataM", false,-1, 31,0);
    tracep->declBit(c+21,"RegWriteW", false,-1);
    tracep->declBus(c+22,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+23,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+24,"ExtImmD", false,-1, 31,0);
    tracep->declBus(c+25,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+26,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+27,"RegWriteD", false,-1);
    tracep->declBus(c+28,"ALUControlD", false,-1, 3,0);
    tracep->declBus(c+29,"ALUControlE", false,-1, 3,0);
    tracep->declBit(c+30,"ALUSrcD", false,-1);
    tracep->declBus(c+31,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+32,"MemWriteD", false,-1);
    tracep->declBus(c+33,"modeAddrD", false,-1, 2,0);
    tracep->declBit(c+155,"Zero", false,-1);
    tracep->declBit(c+34,"MemReadD", false,-1);
    tracep->declBit(c+35,"MemReadE", false,-1);
    tracep->declBit(c+36,"MemReadM", false,-1);
    tracep->declBit(c+37,"JumpD", false,-1);
    tracep->declBit(c+38,"JumpE", false,-1);
    tracep->declBit(c+39,"BranchD", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBit(c+41,"JALRD", false,-1);
    tracep->declBus(c+156,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+42,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+43,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+157,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+44,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+158,"PC", false,-1, 31,0);
    tracep->declBus(c+45,"PCF", false,-1, 31,0);
    tracep->declBus(c+46,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+48,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+49,"PCD", false,-1, 31,0);
    tracep->declBus(c+50,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+51,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+52,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+53,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+54,"RdD", false,-1, 4,0);
    tracep->declBus(c+55,"RdE", false,-1, 4,0);
    tracep->declBus(c+56,"RdM", false,-1, 4,0);
    tracep->declBus(c+57,"RdW", false,-1, 4,0);
    tracep->declBus(c+201,"RD1", false,-1, 31,0);
    tracep->declBus(c+202,"RD2", false,-1, 31,0);
    tracep->declBus(c+207,"RD", false,-1, 31,0);
    tracep->declBus(c+58,"ResultW", false,-1, 31,0);
    tracep->declBus(c+159,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+59,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+60,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+160,"flush", false,-1);
    tracep->declBit(c+161,"flushDE", false,-1);
    tracep->declBit(c+162,"stall", false,-1);
    tracep->declBit(c+163,"flushBranch", false,-1);
    tracep->declBit(c+164,"BPU_Src", false,-1);
    tracep->declBus(c+165,"PC_predict", false,-1, 31,0);
    tracep->declBus(c+166,"PC_next", false,-1, 31,0);
    tracep->pushNamePrefix("BPU_mux ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+164,"sel", false,-1);
    tracep->declBus(c+158,"in0", false,-1, 31,0);
    tracep->declBus(c+165,"in1", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_mux ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+155,"ZeroE", false,-1);
    tracep->declBit(c+38,"JumpE", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBit(c+15,"JALRE", false,-1);
    tracep->declBus(c+46,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+157,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+61,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+158,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+208,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+159,"SrcA", false,-1, 31,0);
    tracep->declBus(c+167,"SrcB", false,-1, 31,0);
    tracep->declBus(c+29,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+157,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+155,"ZeroE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_prediction_unit ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBus(c+2,"RD", false,-1, 31,0);
    tracep->declBus(c+45,"PCF", false,-1, 31,0);
    tracep->declBit(c+155,"ZeroE", false,-1);
    tracep->declBit(c+38,"JumpE", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBit(c+163,"flushBranch", false,-1);
    tracep->declBus(c+165,"PCBPU", false,-1, 31,0);
    tracep->declBit(c+164,"PCBPUSrc", false,-1);
    tracep->declBus(c+209,"QUEUE_SIZE", false,-1, 31,0);
    tracep->pushNamePrefix("branch_queue");
    tracep->declArray(c+62,"[0]", false,-1, 65,0);
    tracep->declArray(c+65,"[1]", false,-1, 65,0);
    tracep->declArray(c+68,"[2]", false,-1, 65,0);
    tracep->declArray(c+71,"[3]", false,-1, 65,0);
    tracep->declArray(c+74,"[4]", false,-1, 65,0);
    tracep->declArray(c+77,"[5]", false,-1, 65,0);
    tracep->declArray(c+80,"[6]", false,-1, 65,0);
    tracep->declArray(c+83,"[7]", false,-1, 65,0);
    tracep->declArray(c+86,"[8]", false,-1, 65,0);
    tracep->declArray(c+89,"[9]", false,-1, 65,0);
    tracep->declArray(c+92,"[10]", false,-1, 65,0);
    tracep->declArray(c+95,"[11]", false,-1, 65,0);
    tracep->declArray(c+98,"[12]", false,-1, 65,0);
    tracep->declArray(c+101,"[13]", false,-1, 65,0);
    tracep->declArray(c+104,"[14]", false,-1, 65,0);
    tracep->declArray(c+107,"[15]", false,-1, 65,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+110,"queue_front", false,-1, 3,0);
    tracep->declBus(c+111,"queue_back", false,-1, 3,0);
    tracep->declBus(c+112,"queue_count", false,-1, 4,0);
    tracep->declArray(c+168,"newBranch", false,-1, 65,0);
    tracep->declArray(c+203,"oldBranch", false,-1, 65,0);
    tracep->declBus(c+113,"forwardJumpCounter", false,-1, 1,0);
    tracep->declBus(c+114,"backwardJumpCounter", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+31,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+32,"MemWriteD", false,-1);
    tracep->declBit(c+37,"JumpD", false,-1);
    tracep->declBit(c+39,"BranchD", false,-1);
    tracep->declBit(c+41,"JALRD", false,-1);
    tracep->declBus(c+28,"ALUControlD", false,-1, 3,0);
    tracep->declBit(c+30,"ALUSrcD", false,-1);
    tracep->declBus(c+26,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+27,"RegWriteD", false,-1);
    tracep->declBus(c+33,"modeAddr", false,-1, 2,0);
    tracep->declBit(c+34,"MemReadD", false,-1);
    tracep->declBus(c+115,"op", false,-1, 6,0);
    tracep->declBus(c+116,"funct3", false,-1, 14,12);
    tracep->declBit(c+117,"funct7", false,-1);
    tracep->declBus(c+118,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+119,"Store", false,-1);
    tracep->declBit(c+120,"Load", false,-1);
    tracep->pushNamePrefix("alu_decoder ");
    tracep->declBus(c+118,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+121,"op", false,-1);
    tracep->declBus(c+116,"funct3", false,-1, 2,0);
    tracep->declBit(c+117,"funct7", false,-1);
    tracep->declBus(c+28,"ALUControl", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"modeAddr", false,-1, 2,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBus(c+43,"A", false,-1, 31,0);
    tracep->declBus(c+42,"WD", false,-1, 31,0);
    tracep->declBit(c+173,"trigger", false,-1);
    tracep->declBit(c+17,"WE", false,-1);
    tracep->declBus(c+154,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwardAE_mux ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"sel", false,-1, 1,0);
    tracep->declBus(c+6,"in0", false,-1, 31,0);
    tracep->declBus(c+58,"in1", false,-1, 31,0);
    tracep->declBus(c+43,"in2", false,-1, 31,0);
    tracep->declBus(c+154,"in3", false,-1, 31,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwardBE_mux ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"sel", false,-1, 1,0);
    tracep->declBus(c+7,"in0", false,-1, 31,0);
    tracep->declBus(c+58,"in1", false,-1, 31,0);
    tracep->declBus(c+43,"in2", false,-1, 31,0);
    tracep->declBus(c+154,"in3", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_unit ");
    tracep->declBus(c+210,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"RdM", false,-1, 4,0);
    tracep->declBus(c+57,"RdW", false,-1, 4,0);
    tracep->declBus(c+55,"RdE", false,-1, 4,0);
    tracep->declBus(c+51,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+53,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+50,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+52,"Rs2D", false,-1, 4,0);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBit(c+21,"RegWriteW", false,-1);
    tracep->declBit(c+35,"MemReadE", false,-1);
    tracep->declBit(c+38,"JumpE", false,-1);
    tracep->declBit(c+36,"MemReadM", false,-1);
    tracep->declBit(c+163,"flushBranch", false,-1);
    tracep->declBus(c+59,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+60,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+162,"stall", false,-1);
    tracep->declBit(c+160,"flush", false,-1);
    tracep->declBit(c+161,"flushDE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_DE ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+161,"flushBranch", false,-1);
    tracep->declBit(c+34,"MemReadD", false,-1);
    tracep->declBit(c+35,"MemReadE", false,-1);
    tracep->declBit(c+27,"RegWriteD", false,-1);
    tracep->declBit(c+10,"RegWriteE", false,-1);
    tracep->declBus(c+31,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+13,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+32,"MemWriteD", false,-1);
    tracep->declBit(c+12,"MemWriteE", false,-1);
    tracep->declBit(c+37,"JumpD", false,-1);
    tracep->declBit(c+38,"JumpE", false,-1);
    tracep->declBit(c+39,"BranchD", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBit(c+41,"JALRD", false,-1);
    tracep->declBit(c+15,"JALRE", false,-1);
    tracep->declBus(c+28,"ALUControlD", false,-1, 3,0);
    tracep->declBus(c+29,"ALUControlE", false,-1, 3,0);
    tracep->declBit(c+30,"ALUSrcD", false,-1);
    tracep->declBit(c+11,"ALUSrcE", false,-1);
    tracep->declBus(c+201,"RD1", false,-1, 31,0);
    tracep->declBus(c+6,"RD1E", false,-1, 31,0);
    tracep->declBus(c+202,"RD2", false,-1, 31,0);
    tracep->declBus(c+7,"RD2E", false,-1, 31,0);
    tracep->declBus(c+49,"PCD", false,-1, 31,0);
    tracep->declBus(c+8,"PCE", false,-1, 31,0);
    tracep->declBus(c+50,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+51,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+52,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+53,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+54,"RdD", false,-1, 4,0);
    tracep->declBus(c+55,"RdE", false,-1, 4,0);
    tracep->declBus(c+24,"ExtImmD", false,-1, 31,0);
    tracep->declBus(c+25,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+9,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+33,"modeAddrD", false,-1, 2,0);
    tracep->declBus(c+14,"modeAddrE", false,-1, 2,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+3,"InstrE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_EM ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+10,"RegWriteE", false,-1);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBus(c+13,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBit(c+12,"MemWriteE", false,-1);
    tracep->declBit(c+17,"MemWriteM", false,-1);
    tracep->declBus(c+157,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+43,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+156,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+42,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+55,"RdE", false,-1, 4,0);
    tracep->declBus(c+56,"RdM", false,-1, 4,0);
    tracep->declBus(c+9,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+48,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+14,"modeAddrE", false,-1, 2,0);
    tracep->declBus(c+19,"modeAddrM", false,-1, 2,0);
    tracep->declBit(c+35,"MemReadE", false,-1);
    tracep->declBit(c+36,"MemReadM", false,-1);
    tracep->declBus(c+3,"InstrE", false,-1, 31,0);
    tracep->declBus(c+4,"InstrM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_FD ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+160,"flush", false,-1);
    tracep->declBit(c+162,"stall", false,-1);
    tracep->declBus(c+2,"RD", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+45,"PCF", false,-1, 31,0);
    tracep->declBus(c+49,"PCD", false,-1, 31,0);
    tracep->declBus(c+46,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_MW ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBit(c+21,"RegWriteW", false,-1);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+22,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+43,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+44,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+154,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+20,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+56,"RdM", false,-1, 4,0);
    tracep->declBus(c+57,"RdW", false,-1, 4,0);
    tracep->declBus(c+48,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+23,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+4,"InstrM", false,-1, 31,0);
    tracep->declBus(c+5,"InstrW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("program_counter ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBus(c+166,"PC", false,-1, 31,0);
    tracep->declBit(c+162,"stall", false,-1);
    tracep->declBus(c+45,"PCF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+210,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBus(c+50,"AD1", false,-1, 4,0);
    tracep->declBus(c+52,"AD2", false,-1, 4,0);
    tracep->declBus(c+57,"AD3", false,-1, 4,0);
    tracep->declBit(c+21,"WE3", false,-1);
    tracep->declBus(c+58,"WD3", false,-1, 31,0);
    tracep->declBus(c+201,"RD1", false,-1, 31,0);
    tracep->declBus(c+202,"RD2", false,-1, 31,0);
    tracep->declBus(c+174,"a0", false,-1, 31,0);
    tracep->declBus(c+175,"a1", false,-1, 31,0);
    tracep->declBus(c+176,"a2", false,-1, 31,0);
    tracep->declBus(c+177,"a3", false,-1, 31,0);
    tracep->declBus(c+178,"a4", false,-1, 31,0);
    tracep->declBus(c+179,"a5", false,-1, 31,0);
    tracep->declBus(c+180,"a6", false,-1, 31,0);
    tracep->declBus(c+181,"a7", false,-1, 31,0);
    tracep->declBus(c+182,"t0", false,-1, 31,0);
    tracep->declBus(c+183,"t1", false,-1, 31,0);
    tracep->declBus(c+184,"t2", false,-1, 31,0);
    tracep->declBus(c+185,"t3", false,-1, 31,0);
    tracep->declBus(c+186,"t4", false,-1, 31,0);
    tracep->declBus(c+187,"t5", false,-1, 31,0);
    tracep->declBus(c+188,"t6", false,-1, 31,0);
    tracep->declBus(c+189,"s0", false,-1, 31,0);
    tracep->declBus(c+190,"s1", false,-1, 31,0);
    tracep->declBus(c+191,"s2", false,-1, 31,0);
    tracep->declBus(c+192,"s3", false,-1, 31,0);
    tracep->declBus(c+193,"s4", false,-1, 31,0);
    tracep->declBus(c+194,"s5", false,-1, 31,0);
    tracep->declBus(c+195,"s6", false,-1, 31,0);
    tracep->declBus(c+196,"s7", false,-1, 31,0);
    tracep->declBus(c+197,"s8", false,-1, 31,0);
    tracep->declBus(c+198,"s9", false,-1, 31,0);
    tracep->declBus(c+199,"s10", false,-1, 31,0);
    tracep->declBus(c+200,"s11", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+122+i*1,"registerfile_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_mux ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"sel", false,-1, 1,0);
    tracep->declBus(c+44,"in0", false,-1, 31,0);
    tracep->declBus(c+20,"in1", false,-1, 31,0);
    tracep->declBus(c+23,"in2", false,-1, 31,0);
    tracep->declBus(c+58,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+206,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+1,"ImmInput", false,-1, 31,0);
    tracep->declBus(c+24,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2164__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1e26__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1deb__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc20a8__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2065__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2135__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc20f8__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b7b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b76__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2034__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1ff1__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc52b2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc5277__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b33__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1aee__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1dad__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__InstrD),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__InstrF),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__InstrE),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__InstrM),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__InstrW),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__PCE),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__PCPlus4E),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__RegWriteE));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__ALUSrcE));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__MemWriteE));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__modeAddrE),3);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__JALRE));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__RegWriteM));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__MemWriteM));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__modeAddrM),3);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ReadDataW),32);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__RegWriteW));
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__PCPlus4W),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ExtImmD),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ExtImmE),32);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__RegWriteD));
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__ALUControlD),4);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__ALUControlE),4);
    bufp->fullBit(oldp+30,((1U & ((0x40U & vlSelf->top__DOT__InstrD)
                                   ? (1U & ((0x20U 
                                             != (0x30U 
                                                 & vlSelf->top__DOT__InstrD)) 
                                            | ((8U 
                                                & vlSelf->top__DOT__InstrD)
                                                ? (IData)(
                                                          (7U 
                                                           != 
                                                           (7U 
                                                            & vlSelf->top__DOT__InstrD)))
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? (IData)(
                                                              (3U 
                                                               != 
                                                               (3U 
                                                                & vlSelf->top__DOT__InstrD)))
                                                    : (IData)(
                                                              (3U 
                                                               != 
                                                               (3U 
                                                                & vlSelf->top__DOT__InstrD)))))))
                                   : (IData)((0x33U 
                                              != (0x3fU 
                                                  & vlSelf->top__DOT__InstrD)))))));
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->fullBit(oldp+32,((IData)((0x23U == (0x7fU 
                                              & vlSelf->top__DOT__InstrD)))));
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__modeAddrD),3);
    bufp->fullBit(oldp+34,((IData)((3U == (0x7fU & vlSelf->top__DOT__InstrD)))));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__MemReadE));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__MemReadM));
    bufp->fullBit(oldp+37,((1U & (IData)(((0x60U == 
                                           (0x70U & vlSelf->top__DOT__InstrD)) 
                                          & ((8U & vlSelf->top__DOT__InstrD)
                                              ? (IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->top__DOT__InstrD)))
                                              : (IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->top__DOT__InstrD)))))))));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__JumpE));
    bufp->fullBit(oldp+39,((1U & (IData)(((0x60U == 
                                           (0x78U & vlSelf->top__DOT__InstrD)) 
                                          & ((4U & vlSelf->top__DOT__InstrD)
                                              ? ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)
                                              : ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)))))));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__BranchE));
    bufp->fullBit(oldp+41,((IData)((0x67U == (0x7fU 
                                              & vlSelf->top__DOT__InstrD)))));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__WriteDataM),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ALUResultM),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ALUResultW),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__PCF),32);
    bufp->fullIData(oldp+46,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__PCPlus4D),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__PCPlus4M),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__PCD),32);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__Rs1E),5);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__Rs2E),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__RdE),5);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__RdM),5);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__RdW),5);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__ResultW),32);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__ForwardAE),2);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__ForwardBE),2);
    bufp->fullIData(oldp+61,((vlSelf->top__DOT__PCE 
                              + vlSelf->top__DOT__ExtImmE)),32);
    __Vtemp_ha8dc2164__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][0U];
    __Vtemp_ha8dc2164__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][1U];
    __Vtemp_ha8dc2164__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][2U];
    bufp->fullWData(oldp+62,(__Vtemp_ha8dc2164__0),66);
    __Vtemp_ha8dc1e26__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][0U];
    __Vtemp_ha8dc1e26__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][1U];
    __Vtemp_ha8dc1e26__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][2U];
    bufp->fullWData(oldp+65,(__Vtemp_ha8dc1e26__0),66);
    __Vtemp_ha8dc1deb__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][0U];
    __Vtemp_ha8dc1deb__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][1U];
    __Vtemp_ha8dc1deb__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][2U];
    bufp->fullWData(oldp+68,(__Vtemp_ha8dc1deb__0),66);
    __Vtemp_ha8dc20a8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][0U];
    __Vtemp_ha8dc20a8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][1U];
    __Vtemp_ha8dc20a8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][2U];
    bufp->fullWData(oldp+71,(__Vtemp_ha8dc20a8__0),66);
    __Vtemp_ha8dc2065__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][0U];
    __Vtemp_ha8dc2065__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][1U];
    __Vtemp_ha8dc2065__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][2U];
    bufp->fullWData(oldp+74,(__Vtemp_ha8dc2065__0),66);
    __Vtemp_ha8dc2135__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][0U];
    __Vtemp_ha8dc2135__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][1U];
    __Vtemp_ha8dc2135__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][2U];
    bufp->fullWData(oldp+77,(__Vtemp_ha8dc2135__0),66);
    __Vtemp_ha8dc20f8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][0U];
    __Vtemp_ha8dc20f8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][1U];
    __Vtemp_ha8dc20f8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][2U];
    bufp->fullWData(oldp+80,(__Vtemp_ha8dc20f8__0),66);
    __Vtemp_ha8dc1b7b__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][0U];
    __Vtemp_ha8dc1b7b__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][1U];
    __Vtemp_ha8dc1b7b__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][2U];
    bufp->fullWData(oldp+83,(__Vtemp_ha8dc1b7b__0),66);
    __Vtemp_ha8dc1b76__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][0U];
    __Vtemp_ha8dc1b76__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][1U];
    __Vtemp_ha8dc1b76__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][2U];
    bufp->fullWData(oldp+86,(__Vtemp_ha8dc1b76__0),66);
    __Vtemp_ha8dc2034__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][0U];
    __Vtemp_ha8dc2034__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][1U];
    __Vtemp_ha8dc2034__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][2U];
    bufp->fullWData(oldp+89,(__Vtemp_ha8dc2034__0),66);
    __Vtemp_ha8dc1ff1__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][0U];
    __Vtemp_ha8dc1ff1__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][1U];
    __Vtemp_ha8dc1ff1__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][2U];
    bufp->fullWData(oldp+92,(__Vtemp_ha8dc1ff1__0),66);
    __Vtemp_ha8dc52b2__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][0U];
    __Vtemp_ha8dc52b2__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][1U];
    __Vtemp_ha8dc52b2__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][2U];
    bufp->fullWData(oldp+95,(__Vtemp_ha8dc52b2__0),66);
    __Vtemp_ha8dc5277__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][0U];
    __Vtemp_ha8dc5277__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][1U];
    __Vtemp_ha8dc5277__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][2U];
    bufp->fullWData(oldp+98,(__Vtemp_ha8dc5277__0),66);
    __Vtemp_ha8dc1b33__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][0U];
    __Vtemp_ha8dc1b33__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][1U];
    __Vtemp_ha8dc1b33__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][2U];
    bufp->fullWData(oldp+101,(__Vtemp_ha8dc1b33__0),66);
    __Vtemp_ha8dc1aee__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][0U];
    __Vtemp_ha8dc1aee__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][1U];
    __Vtemp_ha8dc1aee__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][2U];
    bufp->fullWData(oldp+104,(__Vtemp_ha8dc1aee__0),66);
    __Vtemp_ha8dc1dad__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][0U];
    __Vtemp_ha8dc1dad__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][1U];
    __Vtemp_ha8dc1dad__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][2U];
    bufp->fullWData(oldp+107,(__Vtemp_ha8dc1dad__0),66);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front),4);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back),4);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count),5);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
    bufp->fullCData(oldp+115,((0x7fU & vlSelf->top__DOT__InstrD)),7);
    bufp->fullCData(oldp+116,((7U & (vlSelf->top__DOT__InstrD 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__InstrD 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__control_unit__DOT__Store));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__control_unit__DOT__Load));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__InstrD 
                                   >> 5U))));
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__ReadDataM),32);
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__Zero));
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__WriteDataE),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__ALUResultE),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__SrcAE),32);
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__flush));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__flushDE));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__stall));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__flushBranch));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__BPU_Src));
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__PC_predict),32);
    bufp->fullIData(oldp+166,(((IData)(vlSelf->top__DOT__BPU_Src)
                                ? vlSelf->top__DOT__PC_predict
                                : vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT____Vcellinp__alu__SrcB),32);
    bufp->fullWData(oldp+168,(vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch),66);
    bufp->fullBit(oldp+171,(vlSelf->clk));
    bufp->fullBit(oldp+172,(vlSelf->rst));
    bufp->fullBit(oldp+173,(vlSelf->trigger));
    bufp->fullIData(oldp+174,(vlSelf->a0),32);
    bufp->fullIData(oldp+175,(vlSelf->a1),32);
    bufp->fullIData(oldp+176,(vlSelf->a2),32);
    bufp->fullIData(oldp+177,(vlSelf->a3),32);
    bufp->fullIData(oldp+178,(vlSelf->a4),32);
    bufp->fullIData(oldp+179,(vlSelf->a5),32);
    bufp->fullIData(oldp+180,(vlSelf->a6),32);
    bufp->fullIData(oldp+181,(vlSelf->a7),32);
    bufp->fullIData(oldp+182,(vlSelf->t0),32);
    bufp->fullIData(oldp+183,(vlSelf->t1),32);
    bufp->fullIData(oldp+184,(vlSelf->t2),32);
    bufp->fullIData(oldp+185,(vlSelf->t3),32);
    bufp->fullIData(oldp+186,(vlSelf->t4),32);
    bufp->fullIData(oldp+187,(vlSelf->t5),32);
    bufp->fullIData(oldp+188,(vlSelf->t6),32);
    bufp->fullIData(oldp+189,(vlSelf->s0),32);
    bufp->fullIData(oldp+190,(vlSelf->s1),32);
    bufp->fullIData(oldp+191,(vlSelf->s2),32);
    bufp->fullIData(oldp+192,(vlSelf->s3),32);
    bufp->fullIData(oldp+193,(vlSelf->s4),32);
    bufp->fullIData(oldp+194,(vlSelf->s5),32);
    bufp->fullIData(oldp+195,(vlSelf->s6),32);
    bufp->fullIData(oldp+196,(vlSelf->s7),32);
    bufp->fullIData(oldp+197,(vlSelf->s8),32);
    bufp->fullIData(oldp+198,(vlSelf->s9),32);
    bufp->fullIData(oldp+199,(vlSelf->s10),32);
    bufp->fullIData(oldp+200,(vlSelf->s11),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0x14U))]),32);
    bufp->fullWData(oldp+203,(vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch),66);
    bufp->fullIData(oldp+206,(0x20U),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__RD),32);
    bufp->fullIData(oldp+208,(4U),32);
    bufp->fullIData(oldp+209,(0x10U),32);
    bufp->fullIData(oldp+210,(5U),32);
}
