// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"

class Vdut__Syms;

class Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(trigger,0,0);
        CData/*0:0*/ top__DOT__RegWriteE;
        CData/*0:0*/ top__DOT__ALUSrcE;
        CData/*0:0*/ top__DOT__MemWriteE;
        CData/*1:0*/ top__DOT__ResultSrcE;
        CData/*2:0*/ top__DOT__modeAddrE;
        CData/*0:0*/ top__DOT__JALRE;
        CData/*0:0*/ top__DOT__RegWriteM;
        CData/*0:0*/ top__DOT__MemWriteM;
        CData/*1:0*/ top__DOT__ResultSrcM;
        CData/*2:0*/ top__DOT__modeAddrM;
        CData/*0:0*/ top__DOT__RegWriteW;
        CData/*1:0*/ top__DOT__ResultSrcW;
        CData/*2:0*/ top__DOT__ImmSrc;
        CData/*0:0*/ top__DOT__RegWriteD;
        CData/*3:0*/ top__DOT__ALUControlD;
        CData/*3:0*/ top__DOT__ALUControlE;
        CData/*1:0*/ top__DOT__ResultSrcD;
        CData/*2:0*/ top__DOT__modeAddrD;
        CData/*0:0*/ top__DOT__Zero;
        CData/*0:0*/ top__DOT__MemReadE;
        CData/*0:0*/ top__DOT__MemReadM;
        CData/*0:0*/ top__DOT__JumpE;
        CData/*0:0*/ top__DOT__BranchE;
        CData/*4:0*/ top__DOT__Rs1E;
        CData/*4:0*/ top__DOT__Rs2E;
        CData/*4:0*/ top__DOT__RdE;
        CData/*4:0*/ top__DOT__RdM;
        CData/*4:0*/ top__DOT__RdW;
        CData/*1:0*/ top__DOT__ForwardAE;
        CData/*1:0*/ top__DOT__ForwardBE;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT__flushDE;
        CData/*0:0*/ top__DOT__stall;
        CData/*0:0*/ top__DOT__miss_stall;
        CData/*0:0*/ top__DOT__flushBranch;
        CData/*0:0*/ top__DOT__BPU_Src;
        CData/*3:0*/ top__DOT__branch_prediction_unit__DOT__queue_front;
        CData/*3:0*/ top__DOT__branch_prediction_unit__DOT__queue_back;
        CData/*4:0*/ top__DOT__branch_prediction_unit__DOT__queue_count;
        CData/*1:0*/ top__DOT__branch_prediction_unit__DOT__forwardJumpCounter;
        CData/*1:0*/ top__DOT__branch_prediction_unit__DOT__backwardJumpCounter;
        CData/*1:0*/ top__DOT__control_unit__DOT__ALUOp;
        CData/*0:0*/ top__DOT__control_unit__DOT__Store;
        CData/*0:0*/ top__DOT__control_unit__DOT__Load;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUT(a0,31,0);
        VL_OUT(a1,31,0);
        VL_OUT(a2,31,0);
        VL_OUT(a3,31,0);
        VL_OUT(a4,31,0);
        VL_OUT(a5,31,0);
        VL_OUT(a6,31,0);
        VL_OUT(a7,31,0);
        VL_OUT(t0,31,0);
        VL_OUT(t1,31,0);
        VL_OUT(t2,31,0);
        VL_OUT(t3,31,0);
        VL_OUT(t4,31,0);
        VL_OUT(t5,31,0);
        VL_OUT(t6,31,0);
        VL_OUT(s0,31,0);
    };
    struct {
        VL_OUT(s1,31,0);
        VL_OUT(s2,31,0);
        VL_OUT(s3,31,0);
        VL_OUT(s4,31,0);
        VL_OUT(s5,31,0);
        VL_OUT(s6,31,0);
        VL_OUT(s7,31,0);
        VL_OUT(s8,31,0);
        VL_OUT(s9,31,0);
        VL_OUT(s10,31,0);
        VL_OUT(s11,31,0);
        IData/*31:0*/ top__DOT__InstrD;
        IData/*31:0*/ top__DOT__InstrF;
        IData/*31:0*/ top__DOT__InstrE;
        IData/*31:0*/ top__DOT__InstrM;
        IData/*31:0*/ top__DOT__InstrW;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
        IData/*31:0*/ top__DOT__PCE;
        IData/*31:0*/ top__DOT__PCPlus4E;
        IData/*31:0*/ top__DOT__ReadDataW;
        IData/*31:0*/ top__DOT__ReadDataM;
        IData/*31:0*/ top__DOT__PCPlus4W;
        IData/*31:0*/ top__DOT__ExtImmD;
        IData/*31:0*/ top__DOT__ExtImmE;
        IData/*31:0*/ top__DOT__WriteDataE;
        IData/*31:0*/ top__DOT__WriteDataM;
        IData/*31:0*/ top__DOT__ALUResultM;
        IData/*31:0*/ top__DOT__ALUResultE;
        IData/*31:0*/ top__DOT__ALUResultW;
        IData/*31:0*/ top__DOT__PC;
        IData/*31:0*/ top__DOT__PCF;
        IData/*31:0*/ top__DOT__PCPlus4D;
        IData/*31:0*/ top__DOT__PCPlus4M;
        IData/*31:0*/ top__DOT__PCD;
        IData/*31:0*/ top__DOT__RD;
        IData/*31:0*/ top__DOT__ResultW;
        IData/*31:0*/ top__DOT__SrcAE;
        IData/*31:0*/ top__DOT__PC_predict;
        IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
        VlWide<3>/*65:0*/ top__DOT__branch_prediction_unit__DOT__newBranch;
        VlWide<3>/*65:0*/ top__DOT__branch_prediction_unit__DOT__oldBranch;
        VlUnpacked<VlWide<3>/*65:0*/, 16> top__DOT__branch_prediction_unit__DOT__branch_queue;
        VlUnpacked<CData/*7:0*/, 65536> top__DOT__instruction_memory__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__registerfile_array;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__data_memory__DOT__ram_array;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
