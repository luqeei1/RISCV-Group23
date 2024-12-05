// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VcontrolUnit__Syms.h"


VL_ATTR_COLD void VcontrolUnit___024root__trace_init_sub__TOP__0(VcontrolUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"Instr", false,-1, 31,0);
    tracep->declBus(c+5,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+6,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+7,"MemWrite", false,-1);
    tracep->declBus(c+8,"ALUCtrl", false,-1, 3,0);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+12,"modeBU", false,-1, 2,0);
    tracep->pushNamePrefix("controlUnit ");
    tracep->declBus(c+17,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"Instr", false,-1, 31,0);
    tracep->declBus(c+5,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+6,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+7,"MemWrite", false,-1);
    tracep->declBus(c+8,"ALUCtrl", false,-1, 3,0);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+12,"modeBU", false,-1, 2,0);
    tracep->declBus(c+13,"op", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBit(c+15,"funct7", false,-1);
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+2,"Store", false,-1);
    tracep->declBit(c+3,"Load", false,-1);
    tracep->pushNamePrefix("alu_decoder ");
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+16,"op", false,-1);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBit(c+15,"funct7", false,-1);
    tracep->declBus(c+8,"ALUCtrl", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VcontrolUnit___024root__trace_init_top(VcontrolUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_init_top\n"); );
    // Body
    VcontrolUnit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VcontrolUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VcontrolUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VcontrolUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VcontrolUnit___024root__trace_register(VcontrolUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VcontrolUnit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VcontrolUnit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VcontrolUnit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VcontrolUnit___024root__trace_full_sub_0(VcontrolUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VcontrolUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_full_top_0\n"); );
    // Init
    VcontrolUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VcontrolUnit___024root*>(voidSelf);
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VcontrolUnit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VcontrolUnit___024root__trace_full_sub_0(VcontrolUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->controlUnit__DOT__ALUOp),2);
    bufp->fullBit(oldp+2,(vlSelf->controlUnit__DOT__Store));
    bufp->fullBit(oldp+3,(vlSelf->controlUnit__DOT__Load));
    bufp->fullIData(oldp+4,(vlSelf->Instr),32);
    bufp->fullCData(oldp+5,(vlSelf->PCSrc),2);
    bufp->fullCData(oldp+6,(vlSelf->ResultSrc),2);
    bufp->fullBit(oldp+7,(vlSelf->MemWrite));
    bufp->fullCData(oldp+8,(vlSelf->ALUCtrl),4);
    bufp->fullBit(oldp+9,(vlSelf->ALUSrc));
    bufp->fullCData(oldp+10,(vlSelf->ImmSrc),3);
    bufp->fullBit(oldp+11,(vlSelf->RegWrite));
    bufp->fullCData(oldp+12,(vlSelf->modeBU),3);
    bufp->fullCData(oldp+13,((0x7fU & vlSelf->Instr)),7);
    bufp->fullCData(oldp+14,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->fullBit(oldp+15,((1U & (vlSelf->Instr >> 0x1eU))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->Instr >> 5U))));
    bufp->fullIData(oldp+17,(0x20U),32);
}
