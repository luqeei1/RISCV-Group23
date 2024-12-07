// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cache_FSM__DOT__next_state),32);
        bufp->chgQData(oldp+1,(vlSelfRef.cache_FSM__DOT__next_cpu_resp),33);
        bufp->chgWData(oldp+3,(vlSelfRef.cache_FSM__DOT__next_mem_req),70);
        bufp->chgWData(oldp+6,(vlSelfRef.cache_FSM__DOT__cache_line),87);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_FSM__DOT__current_addr),32);
    }
    bufp->chgBit(oldp+10,(vlSelfRef.clk));
    bufp->chgBit(oldp+11,(vlSelfRef.rst));
    bufp->chgWData(oldp+12,(vlSelfRef.cpu_req),70);
    bufp->chgQData(oldp+15,(vlSelfRef.cpu_resp),33);
    bufp->chgQData(oldp+17,(vlSelfRef.mem_resp),33);
    bufp->chgWData(oldp+19,(vlSelfRef.mem_req),70);
    bufp->chgIData(oldp+22,(vlSelfRef.cpu_req_addr),32);
    bufp->chgIData(oldp+23,(vlSelfRef.cpu_req_data),32);
    bufp->chgCData(oldp+24,(vlSelfRef.cpu_req_op),2);
    bufp->chgCData(oldp+25,(vlSelfRef.cpu_req_mode_addr),4);
    bufp->chgBit(oldp+26,(vlSelfRef.cpu_req_valid));
    bufp->chgIData(oldp+27,(vlSelfRef.cpu_resp_data),32);
    bufp->chgBit(oldp+28,(vlSelfRef.cpu_resp_ready));
    bufp->chgIData(oldp+29,(vlSelfRef.mem_resp_data),32);
    bufp->chgBit(oldp+30,(vlSelfRef.mem_resp_ready));
    bufp->chgBit(oldp+31,((1U & vlSelfRef.cpu_req[0U])));
    bufp->chgIData(oldp+32,(vlSelfRef.cache_FSM__DOT__current_state),32);
    bufp->chgCData(oldp+33,((0xffU & (vlSelfRef.cpu_req[1U] 
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
