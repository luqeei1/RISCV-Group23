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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ cache_FSM__DOT__current_state;
    IData/*31:0*/ cache_FSM__DOT__next_state;
    IData/*31:0*/ cache_FSM__DOT__current_addr;
    VL_INW(cpu_req,69,0,3);
    VL_OUT64(cpu_resp,32,0);
    VL_IN64(mem_resp,32,0);
    VL_OUTW(mem_req,69,0,3);
    QData/*32:0*/ cache_FSM__DOT__next_cpu_resp;
    VlWide<3>/*69:0*/ cache_FSM__DOT__next_mem_req;
    VlWide<3>/*86:0*/ cache_FSM__DOT__cache_line;
    VlUnpacked<VlWide<3>/*86:0*/, 256> cache_FSM__DOT__cache_mem;
    VlUnpacked<VlWide<3>/*86:0*/, 256> __Vchglast__TOP__cache_FSM__DOT__cache_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
