// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcached_datamem.h for the primary calling header

#ifndef VERILATED_VCACHED_DATAMEM___024ROOT_H_
#define VERILATED_VCACHED_DATAMEM___024ROOT_H_  // guard

#include "verilated.h"


class Vcached_datamem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcached_datamem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(WE,0,0);
    VL_IN8(RE,0,0);
    VL_IN8(modeAddr,2,0);
    VL_OUT8(miss_stall,0,0);
    CData/*7:0*/ cached_datamem__DOT__byte3;
    CData/*7:0*/ cached_datamem__DOT__byte2;
    CData/*7:0*/ cached_datamem__DOT__byte1;
    CData/*7:0*/ cached_datamem__DOT__byte0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr,31,0);
    VL_IN(write_data,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ cached_datamem__DOT__out_cache;
    IData/*31:0*/ cached_datamem__DOT__cache__DOT__current_state;
    IData/*31:0*/ cached_datamem__DOT__cache__DOT__next_state;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*86:0*/ cached_datamem__DOT__cache__DOT__cache_line;
    VlUnpacked<CData/*7:0*/, 131072> cached_datamem__DOT__cache__DOT__ram_array;
    VlUnpacked<VlWide<3>/*86:0*/, 256> cached_datamem__DOT__cache__DOT__cache_mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcached_datamem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcached_datamem___024root(Vcached_datamem__Syms* symsp, const char* v__name);
    ~Vcached_datamem___024root();
    VL_UNCOPYABLE(Vcached_datamem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
