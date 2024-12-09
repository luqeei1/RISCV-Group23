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
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__PCSrc),2);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__ExtImm),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__PC),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__instr),32);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__ImmSrc),3);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelfRef.top__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+7,((0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                         >> 7U))),5);
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__RegWrite));
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__RD1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__RD2),32);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__ALUctrl),4);
        bufp->chgBit(oldp+12,(((0x40U & vlSelfRef.top__DOT__instr)
                                ? ((1U & (~ (vlSelfRef.top__DOT__instr 
                                             >> 5U))) 
                                   || ((1U & (vlSelfRef.top__DOT__instr 
                                              >> 4U)) 
                                       || ((8U & vlSelfRef.top__DOT__instr)
                                            ? ((1U 
                                                & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 2U))) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__instr 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__instr))))
                                            : ((1U 
                                                & (vlSelfRef.top__DOT__instr 
                                                   >> 2U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__instr 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__instr)))))))
                                : ((1U & (~ (vlSelfRef.top__DOT__instr 
                                             >> 5U))) 
                                   || ((1U & (~ (vlSelfRef.top__DOT__instr 
                                                 >> 4U))) 
                                       || ((1U & (vlSelfRef.top__DOT__instr 
                                                  >> 3U)) 
                                           || ((1U 
                                                & (vlSelfRef.top__DOT__instr 
                                                   >> 2U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__instr 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__instr))))))))));
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__ResultSrc),2);
        bufp->chgBit(oldp+14,(((1U & (~ (vlSelfRef.top__DOT__instr 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top__DOT__instr 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__instr 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__instr 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__instr 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__instr 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__instr)))))))));
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__modeBU),3);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__ALUResult),32);
        bufp->chgBit(oldp+17,(((1U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                      >> 3U)) && ((4U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelfRef.top__DOT__RD1 
                                                     >= vlSelfRef.top__DOT__SrcB)
                                                     : 
                                                    (vlSelfRef.top__DOT__RD1 
                                                     < vlSelfRef.top__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                       >> 1U)) 
                                                   && ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                        ? 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        != vlSelfRef.top__DOT__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        == vlSelfRef.top__DOT__SrcB)))))));
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__SrcB),32);
        bufp->chgCData(oldp+19,((0x7fU & vlSelfRef.top__DOT__instr)),7);
        bufp->chgCData(oldp+20,((7U & (vlSelfRef.top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.top__DOT__instr 
                                     >> 5U))));
        bufp->chgIData(oldp+26,(((IData)(4U) + vlSelfRef.top__DOT__PC)),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT____Vcellinp__pc__PCTarget),32);
        bufp->chgIData(oldp+28,(((2U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                  ? ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                      ? vlSelfRef.top__DOT__ALUResult
                                      : (((1U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                 >> 3U)) 
                                          && ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   (vlSelfRef.top__DOT__RD1 
                                                    >= vlSelfRef.top__DOT__SrcB)
                                                    : 
                                                   (vlSelfRef.top__DOT__RD1 
                                                    < vlSelfRef.top__DOT__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   VL_GTES_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                    : 
                                                   VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)))
                                               : ((1U 
                                                   & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                       ? 
                                                      (vlSelfRef.top__DOT__RD1 
                                                       != vlSelfRef.top__DOT__SrcB)
                                                       : 
                                                      (vlSelfRef.top__DOT__RD1 
                                                       == vlSelfRef.top__DOT__SrcB)))))
                                          ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                          : ((IData)(4U) 
                                             + vlSelfRef.top__DOT__PC)))
                                  : ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                      ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                      : ((IData)(4U) 
                                         + vlSelfRef.top__DOT__PC)))),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    bufp->chgBit(oldp+61,(vlSelfRef.clk));
    bufp->chgBit(oldp+62,(vlSelfRef.rst));
    bufp->chgBit(oldp+63,(vlSelfRef.trigger));
    bufp->chgIData(oldp+64,(vlSelfRef.a0),32);
    bufp->chgIData(oldp+65,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+66,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+67,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+68,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+69,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+70,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+71,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+72,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+73,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+74,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+75,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+76,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+77,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+78,(vlSelfRef.t6),32);
    bufp->chgIData(oldp+79,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+80,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+81,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+82,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+83,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+84,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+85,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+86,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+87,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+88,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+89,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+90,(vlSelfRef.s11),32);
    bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__RD),32);
    bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__Result),32);
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
