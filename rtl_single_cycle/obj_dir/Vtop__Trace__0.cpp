// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
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
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__ALUctrl),4);
        bufp->chgBit(oldp+10,(((0x40U & vlSelfRef.top__DOT__instr)
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
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__ResultSrc),2);
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__MemWrite));
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__modeBU),3);
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__MemRead));
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__current_state),32);
        bufp->chgWData(oldp+16,(vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__cache_line),87);
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__block));
        bufp->chgQData(oldp+20,((((QData)((IData)(vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__cache_line[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__cache_line[0U])))),64);
        bufp->chgCData(oldp+22,((0x7fU & vlSelfRef.top__DOT__instr)),7);
        bufp->chgCData(oldp+23,((7U & (vlSelfRef.top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+25,(vlSelfRef.top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.top__DOT__instr 
                                     >> 5U))));
        bufp->chgIData(oldp+29,(((IData)(4U) + vlSelfRef.top__DOT__PC)),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT____Vcellinp__pc__PCTarget),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__RD1),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__RD2),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__ALUResult),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__SrcB),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__RD),32);
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__miss_stall));
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__cached_datamem__DOT__out_cache),32);
        bufp->chgCData(oldp+70,(vlSelfRef.top__DOT__cached_datamem__DOT__byte3),8);
        bufp->chgCData(oldp+71,(vlSelfRef.top__DOT__cached_datamem__DOT__byte2),8);
        bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__cached_datamem__DOT__byte1),8);
        bufp->chgCData(oldp+73,(vlSelfRef.top__DOT__cached_datamem__DOT__byte0),8);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__cached_datamem__DOT__cache__DOT__next_state),32);
        bufp->chgCData(oldp+75,((0xffU & (vlSelfRef.top__DOT__ALUResult 
                                          >> 3U))),8);
    }
    bufp->chgBit(oldp+76,(vlSelfRef.clk));
    bufp->chgBit(oldp+77,(vlSelfRef.rst));
    bufp->chgBit(oldp+78,(vlSelfRef.trigger));
    bufp->chgIData(oldp+79,(vlSelfRef.a0),32);
    bufp->chgIData(oldp+80,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+81,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+82,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+83,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+84,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+85,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+86,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+87,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+88,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+89,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+90,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+91,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+92,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+93,(vlSelfRef.t6),32);
    bufp->chgIData(oldp+94,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+95,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+96,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+97,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+98,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+99,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+100,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+101,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+102,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+103,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+104,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+105,(vlSelfRef.s11),32);
    bufp->chgBit(oldp+106,(((1U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                   >> 3U)) && ((4U 
                                                & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (1U 
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
    bufp->chgIData(oldp+107,(((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                               ? vlSelfRef.top__DOT__ALUResult
                               : ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                   ? vlSelfRef.top__DOT__RD
                                   : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.top__DOT__PC)
                                       : vlSelfRef.top__DOT__ALUResult)))),32);
    bufp->chgIData(oldp+108,(((2U & (IData)(vlSelfRef.top__DOT__PCSrc))
                               ? ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                   ? vlSelfRef.top__DOT__ALUResult
                                   : (((1U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                              >> 3U)) 
                                       && ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   (vlSelfRef.top__DOT__RD1 
                                                    >= vlSelfRef.top__DOT__SrcB)
                                                    : 
                                                   (vlSelfRef.top__DOT__RD1 
                                                    < vlSelfRef.top__DOT__SrcB))
                                                : (
                                                   (1U 
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
                                   : ((IData)(4U) + vlSelfRef.top__DOT__PC)))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
