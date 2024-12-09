// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__PCSrc),2);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ExtImm),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__instr),32);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ImmSrc),3);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 7U))),5);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__RegWrite));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__RD1),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__RD2),32);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__ALUctrl),4);
        bufp->chgBit(oldp+12,((1U & ((0x40U & vlSelf->top__DOT__instr)
                                      ? (1U & ((0x20U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->top__DOT__instr)) 
                                               | ((8U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? (IData)(
                                                             (7U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr)))
                                                   : (IData)(
                                                             (3U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr))))))
                                      : (IData)((0x33U 
                                                 != 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__instr)))))));
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__ResultSrc),2);
        bufp->chgBit(oldp+14,((IData)((0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__instr)))));
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__modeBU),3);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgBit(oldp+17,((((IData)(vlSelf->top__DOT__ALUctrl) 
                                >> 3U) & ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                           ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->top__DOT__RD1 
                                                   >= vlSelf->top__DOT__SrcB)
                                                   : 
                                                  (vlSelf->top__DOT__RD1 
                                                   < vlSelf->top__DOT__SrcB))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                           : (((IData)(vlSelf->top__DOT__ALUctrl) 
                                               >> 1U) 
                                              & ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelf->top__DOT__RD1 
                                                  != vlSelf->top__DOT__SrcB)
                                                  : 
                                                 (vlSelf->top__DOT__RD1 
                                                  == vlSelf->top__DOT__SrcB)))))));
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__SrcB),32);
        bufp->chgCData(oldp+19,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+20,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+21,((1U & (vlSelf->top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+25,((1U & (vlSelf->top__DOT__instr 
                                     >> 5U))));
        bufp->chgQData(oldp+26,((QData)((IData)(vlSelf->top__DOT__PC))),33);
        bufp->chgIData(oldp+28,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT____Vcellinp__pc__PCTarget),32);
        bufp->chgIData(oldp+30,(((2U & (IData)(vlSelf->top__DOT__PCSrc))
                                  ? ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                      ? vlSelf->top__DOT__ALUResult
                                      : ((((IData)(vlSelf->top__DOT__ALUctrl) 
                                           >> 3U) & 
                                          ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((2U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   (vlSelf->top__DOT__RD1 
                                                    >= vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__RD1 
                                                    < vlSelf->top__DOT__SrcB))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                            : (((IData)(vlSelf->top__DOT__ALUctrl) 
                                                >> 1U) 
                                               & ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->top__DOT__RD1 
                                                   != vlSelf->top__DOT__SrcB)
                                                   : 
                                                  (vlSelf->top__DOT__RD1 
                                                   == vlSelf->top__DOT__SrcB)))))
                                          ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__PC)))
                                  : ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                      ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__PC)))),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    bufp->chgBit(oldp+63,(vlSelf->clk));
    bufp->chgBit(oldp+64,(vlSelf->rst));
    bufp->chgBit(oldp+65,(vlSelf->trigger));
    bufp->chgIData(oldp+66,(vlSelf->a0),32);
    bufp->chgIData(oldp+67,(vlSelf->a1),32);
    bufp->chgIData(oldp+68,(vlSelf->a2),32);
    bufp->chgIData(oldp+69,(vlSelf->a3),32);
    bufp->chgIData(oldp+70,(vlSelf->a4),32);
    bufp->chgIData(oldp+71,(vlSelf->a5),32);
    bufp->chgIData(oldp+72,(vlSelf->a6),32);
    bufp->chgIData(oldp+73,(vlSelf->a7),32);
    bufp->chgIData(oldp+74,(vlSelf->t0),32);
    bufp->chgIData(oldp+75,(vlSelf->t1),32);
    bufp->chgIData(oldp+76,(vlSelf->t2),32);
    bufp->chgIData(oldp+77,(vlSelf->t3),32);
    bufp->chgIData(oldp+78,(vlSelf->t4),32);
    bufp->chgIData(oldp+79,(vlSelf->t5),32);
    bufp->chgIData(oldp+80,(vlSelf->t6),32);
    bufp->chgIData(oldp+81,(vlSelf->s0),32);
    bufp->chgIData(oldp+82,(vlSelf->s1),32);
    bufp->chgIData(oldp+83,(vlSelf->s2),32);
    bufp->chgIData(oldp+84,(vlSelf->s3),32);
    bufp->chgIData(oldp+85,(vlSelf->s4),32);
    bufp->chgIData(oldp+86,(vlSelf->s5),32);
    bufp->chgIData(oldp+87,(vlSelf->s6),32);
    bufp->chgIData(oldp+88,(vlSelf->s7),32);
    bufp->chgIData(oldp+89,(vlSelf->s8),32);
    bufp->chgIData(oldp+90,(vlSelf->s9),32);
    bufp->chgIData(oldp+91,(vlSelf->s10),32);
    bufp->chgIData(oldp+92,(vlSelf->s11),32);
    bufp->chgIData(oldp+93,(vlSelf->top__DOT__RD),32);
    bufp->chgIData(oldp+94,(vlSelf->top__DOT__Result),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
