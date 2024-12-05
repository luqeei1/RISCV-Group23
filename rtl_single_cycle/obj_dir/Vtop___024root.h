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
    SData/*11:0*/ top__DOT__instruction_memory__DOT__word_addr;
    VL_OUT(a0,31,0);
    VL_OUT(a1,31,0);
    VL_OUT(a7,31,0);
    IData/*31:0*/ top__DOT__ExtImm;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__PCnext;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__RD2;
    IData/*31:0*/ top__DOT__ALUResult;
    IData/*31:0*/ top__DOT__SrcB;
    IData/*31:0*/ top__DOT__ReadData;
    IData/*31:0*/ top__DOT__Result;
    IData/*31:0*/ top__DOT____Vcellinp__pc__PCTarget;
    IData/*24:0*/ top__DOT__sign_extend__DOT__ImmIn;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__registerfile_array;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__instruction_memory__DOT__mem;
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
