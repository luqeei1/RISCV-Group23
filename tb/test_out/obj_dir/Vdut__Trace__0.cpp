// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cache_FSM__DOT__next_state),32);
        bufp->chgQData(oldp+1,(vlSelf->cache_FSM__DOT__next_cpu_resp),33);
        bufp->chgWData(oldp+3,(vlSelf->cache_FSM__DOT__next_mem_req),70);
        bufp->chgWData(oldp+6,(vlSelf->cache_FSM__DOT__cache_line),87);
        bufp->chgIData(oldp+9,(vlSelf->cache_FSM__DOT__current_addr),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->clk));
    bufp->chgBit(oldp+11,(vlSelf->rst));
    bufp->chgWData(oldp+12,(vlSelf->cpu_req),70);
    bufp->chgQData(oldp+15,(vlSelf->cpu_resp),33);
    bufp->chgQData(oldp+17,(vlSelf->mem_resp),33);
    bufp->chgWData(oldp+19,(vlSelf->mem_req),70);
    bufp->chgIData(oldp+22,(vlSelf->cache_FSM__DOT__current_state),32);
    bufp->chgCData(oldp+23,((0xffU & (vlSelf->cpu_req[1U] 
                                      >> 9U))),8);
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
