// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declArray(c+13,"cpu_req", false,-1, 69,0);
    tracep->declQuad(c+16,"cpu_resp", false,-1, 32,0);
    tracep->declQuad(c+18,"mem_resp", false,-1, 32,0);
    tracep->declArray(c+20,"mem_req", false,-1, 69,0);
    tracep->pushNamePrefix("cache_FSM ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declArray(c+13,"cpu_req", false,-1, 69,0);
    tracep->declQuad(c+16,"cpu_resp", false,-1, 32,0);
    tracep->declQuad(c+18,"mem_resp", false,-1, 32,0);
    tracep->declArray(c+20,"mem_req", false,-1, 69,0);
    tracep->declBus(c+23,"current_state", false,-1, 31,0);
    tracep->declBus(c+1,"next_state", false,-1, 31,0);
    tracep->declQuad(c+2,"next_cpu_resp", false,-1, 32,0);
    tracep->declArray(c+4,"next_mem_req", false,-1, 69,0);
    tracep->declArray(c+7,"cache_line", false,-1, 86,0);
    tracep->declBus(c+24,"set", false,-1, 7,0);
    tracep->declBus(c+10,"current_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP____024unit__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+25,"TAG_MSB", false,-1, 31,0);
    tracep->declBus(c+26,"TAG_LSB", false,-1, 31,0);
    tracep->declBus(c+27,"SETS", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vdut___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cache_FSM__DOT__next_state),32);
    bufp->fullQData(oldp+2,(vlSelf->cache_FSM__DOT__next_cpu_resp),33);
    bufp->fullWData(oldp+4,(vlSelf->cache_FSM__DOT__next_mem_req),70);
    bufp->fullWData(oldp+7,(vlSelf->cache_FSM__DOT__cache_line),87);
    bufp->fullIData(oldp+10,(vlSelf->cache_FSM__DOT__current_addr),32);
    bufp->fullBit(oldp+11,(vlSelf->clk));
    bufp->fullBit(oldp+12,(vlSelf->rst));
    bufp->fullWData(oldp+13,(vlSelf->cpu_req),70);
    bufp->fullQData(oldp+16,(vlSelf->cpu_resp),33);
    bufp->fullQData(oldp+18,(vlSelf->mem_resp),33);
    bufp->fullWData(oldp+20,(vlSelf->mem_req),70);
    bufp->fullIData(oldp+23,(vlSelf->cache_FSM__DOT__current_state),32);
    bufp->fullCData(oldp+24,((0xffU & (vlSelf->cpu_req[1U] 
                                       >> 9U))),8);
    bufp->fullIData(oldp+25,(0x1fU),32);
    bufp->fullIData(oldp+26,(0xbU),32);
    bufp->fullIData(oldp+27,(0x100U),32);
}
