// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"


class Vdut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(cpu_req_op,1,0);
    VL_OUT8(cpu_req_mode_addr,3,0);
    VL_OUT8(cpu_req_valid,0,0);
    VL_OUT8(cpu_resp_ready,0,0);
    VL_OUT8(mem_resp_ready,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(cpu_req_addr,31,0);
    VL_OUT(cpu_req_data,31,0);
    VL_OUT(cpu_resp_data,31,0);
    VL_OUT(mem_resp_data,31,0);
    IData/*31:0*/ cache_FSM__DOT__current_state;
    IData/*31:0*/ cache_FSM__DOT__next_state;
    IData/*31:0*/ cache_FSM__DOT__current_addr;
    IData/*31:0*/ __VactIterCount;
    VL_INW(cpu_req,69,0,3);
    VL_OUT64(cpu_resp,32,0);
    VL_IN64(mem_resp,32,0);
    VL_OUTW(mem_req,69,0,3);
    QData/*32:0*/ cache_FSM__DOT__next_cpu_resp;
    VlWide<3>/*69:0*/ cache_FSM__DOT__next_mem_req;
    VlWide<3>/*86:0*/ cache_FSM__DOT__cache_line;
    VL_OUT(cache_mem_tag[256],31,11);
    VL_OUT8(cache_mem_dirty[256],0,0);
    VL_OUT8(cache_mem_valid[256],0,0);
    VL_OUT64(cache_mem_data[256],63,0);
    VlUnpacked<VlWide<3>/*86:0*/, 256> cache_FSM__DOT__cache_mem;
    VlUnpacked<VlWide<3>/*86:0*/, 256> __Vtrigprevexpr___TOP__cache_FSM__DOT__cache_mem__0;
    VlUnpacked<VlWide<3>/*86:0*/, 256> __Vtrigprevexpr___TOP__cache_FSM__DOT__cache_mem__1;
    VlUnpacked<VlWide<3>/*86:0*/, 256> __Vtrigprevexpr___TOP__cache_FSM__DOT__cache_mem__2;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* v__name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
