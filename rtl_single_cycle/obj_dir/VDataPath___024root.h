// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDataPath.h for the primary calling header

#ifndef VERILATED_VDATAPATH___024ROOT_H_
#define VERILATED_VDATAPATH___024ROOT_H_  // guard

#include "verilated.h"

class VDataPath__Syms;

class VDataPath___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(address_mode,1,0);
    VL_IN8(ResultSrc,1,0);
    VL_IN8(WE,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(A,31,0);
    VL_IN(WD,31,0);
    VL_OUT(Result,31,0);
    IData/*31:0*/ DataMemory__DOT__RD;
    VlUnpacked<CData/*7:0*/, 131072> DataMemory__DOT__ram_array;

    // INTERNAL VARIABLES
    VDataPath__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDataPath___024root(VDataPath__Syms* symsp, const char* name);
    ~VDataPath___024root();
    VL_UNCOPYABLE(VDataPath___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
