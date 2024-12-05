// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VcontrolUnit.h for the primary calling header

#ifndef VERILATED_VCONTROLUNIT___024ROOT_H_
#define VERILATED_VCONTROLUNIT___024ROOT_H_  // guard

#include "verilated.h"

class VcontrolUnit__Syms;

class VcontrolUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(PCSrc,1,0);
    VL_OUT8(ResultSrc,1,0);
    VL_OUT8(MemWrite,0,0);
    VL_OUT8(ALUCtrl,3,0);
    VL_OUT8(ALUSrc,0,0);
    VL_OUT8(ImmSrc,2,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(modeBU,2,0);
    CData/*1:0*/ controlUnit__DOT__ALUOp;
    CData/*0:0*/ controlUnit__DOT__Store;
    CData/*0:0*/ controlUnit__DOT__Load;
    VL_IN(Instr,31,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VcontrolUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VcontrolUnit___024root(VcontrolUnit__Syms* symsp, const char* name);
    ~VcontrolUnit___024root();
    VL_UNCOPYABLE(VcontrolUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
