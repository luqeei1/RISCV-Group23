// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_memory.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY___024ROOT_H_
#define VERILATED_VDATA_MEMORY___024ROOT_H_  // guard

#include "verilated.h"

class Vdata_memory__Syms;

class Vdata_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(modeBU,2,0);
    VL_IN8(ResultSrc,1,0);
    VL_IN8(WE,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(A,31,0);
    VL_IN(WD,31,0);
    VL_OUT(RD,31,0);
    VL_OUT(Result,31,0);
    VlUnpacked<CData/*7:0*/, 131072> data_memory__DOT__ram_array;

    // INTERNAL VARIABLES
    Vdata_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_memory___024root(Vdata_memory__Syms* symsp, const char* name);
    ~Vdata_memory___024root();
    VL_UNCOPYABLE(Vdata_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
