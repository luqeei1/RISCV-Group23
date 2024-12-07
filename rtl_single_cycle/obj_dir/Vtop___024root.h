// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    CData/*1:0*/ top__DOT__PCSrc;
    CData/*2:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*3:0*/ top__DOT__ALUctrl;
    CData/*1:0*/ top__DOT__ResultSrc;
    CData/*2:0*/ top__DOT__modeBU;
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
    IData/*31:0*/ top__DOT__ExtImm;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__RD2;
    IData/*31:0*/ top__DOT__ALUResult;
    IData/*31:0*/ top__DOT__SrcB;
    IData/*31:0*/ top__DOT__RD;
    IData/*31:0*/ top__DOT__Result;
    IData/*31:0*/ top__DOT____Vcellinp__pc__PCTarget;
    IData/*31:0*/ top__DOT__pc__DOT__out;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__RD;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__registerfile_array;
    VlUnpacked<CData/*7:0*/, 65536> top__DOT__instruction_memory__DOT__rom_array;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__data_memory__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
