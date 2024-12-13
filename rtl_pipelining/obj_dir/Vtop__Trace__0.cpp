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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__InstrD),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__InstrF),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__InstrE),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__InstrM),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__InstrW),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__RD1E),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__RD2E),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__PCE),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__PCPlus4E),32);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__RegWriteE));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__ALUSrcE));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__MemWriteE));
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__modeAddrE),3);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__JALRE));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__RegWriteM));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__MemWriteM));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__modeAddrM),3);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ReadDataW),32);
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__RegWriteW));
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ExtImmD),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ExtImmE),32);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__ImmSrc),3);
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__RegWriteD));
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__ALUControlD),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__ALUControlE),4);
        bufp->chgBit(oldp+29,((1U & ((0x40U & vlSelf->top__DOT__InstrD)
                                      ? (1U & ((0x20U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->top__DOT__InstrD)) 
                                               | ((8U 
                                                   & vlSelf->top__DOT__InstrD)
                                                   ? (IData)(
                                                             (7U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__InstrD)))
                                                   : 
                                                  ((4U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? (IData)(
                                                              (3U 
                                                               != 
                                                               (3U 
                                                                & vlSelf->top__DOT__InstrD)))
                                                    : (IData)(
                                                              (3U 
                                                               != 
                                                               (3U 
                                                                & vlSelf->top__DOT__InstrD)))))))
                                      : (IData)((0x33U 
                                                 != 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__InstrD)))))));
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+31,((IData)((0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__InstrD)))));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__modeAddrD),3);
        bufp->chgBit(oldp+33,((IData)((3U == (0x7fU 
                                              & vlSelf->top__DOT__InstrD)))));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__MemReadE));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__MemReadM));
        bufp->chgBit(oldp+36,((1U & (IData)(((0x60U 
                                              == (0x70U 
                                                  & vlSelf->top__DOT__InstrD)) 
                                             & ((8U 
                                                 & vlSelf->top__DOT__InstrD)
                                                 ? (IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->top__DOT__InstrD)))
                                                 : (IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__JumpE));
        bufp->chgBit(oldp+38,((1U & (IData)(((0x60U 
                                              == (0x78U 
                                                  & vlSelf->top__DOT__InstrD)) 
                                             & ((4U 
                                                 & vlSelf->top__DOT__InstrD)
                                                 ? 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)
                                                 : 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)))))));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__BranchE));
        bufp->chgBit(oldp+40,((IData)((0x67U == (0x7fU 
                                                 & vlSelf->top__DOT__InstrD)))));
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__WriteDataM),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__ALUResultM),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__ALUResultW),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__PCF),32);
        bufp->chgIData(oldp+45,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__PCPlus4D),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__PCD),32);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__Rs1E),5);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__Rs2E),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__RdE),5);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__RdM),5);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__RdW),5);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__ResultW),32);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__ForwardAE),2);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__ForwardBE),2);
        bufp->chgIData(oldp+60,((vlSelf->top__DOT__PCE 
                                 + vlSelf->top__DOT__ExtImmE)),32);
        bufp->chgCData(oldp+61,((0x7fU & vlSelf->top__DOT__InstrD)),7);
        bufp->chgCData(oldp+62,((7U & (vlSelf->top__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+63,((1U & (vlSelf->top__DOT__InstrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+67,((1U & (vlSelf->top__DOT__InstrD 
                                     >> 5U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+68,(vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch),66);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__ReadDataM),32);
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__Zero));
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__WriteDataE),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__ALUResultE),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__SrcAE),32);
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__flush));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__flushDE));
        bufp->chgBit(oldp+113,(vlSelf->top__DOT__stall));
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__flushBranch));
        bufp->chgBit(oldp+115,(vlSelf->top__DOT__BPU_Src));
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__PC_predict),32);
        bufp->chgIData(oldp+117,(((IData)(vlSelf->top__DOT__BPU_Src)
                                   ? vlSelf->top__DOT__PC_predict
                                   : vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT____Vcellinp__alu__SrcB),32);
        bufp->chgWData(oldp+119,(vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch),66);
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpDecisionCorrect));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpDecisionCorrect));
    }
    bufp->chgBit(oldp+124,(vlSelf->clk));
    bufp->chgBit(oldp+125,(vlSelf->rst));
    bufp->chgBit(oldp+126,(vlSelf->trigger));
    bufp->chgIData(oldp+127,(vlSelf->a0),32);
    bufp->chgIData(oldp+128,(vlSelf->a1),32);
    bufp->chgIData(oldp+129,(vlSelf->a2),32);
    bufp->chgIData(oldp+130,(vlSelf->a3),32);
    bufp->chgIData(oldp+131,(vlSelf->a4),32);
    bufp->chgIData(oldp+132,(vlSelf->a5),32);
    bufp->chgIData(oldp+133,(vlSelf->a6),32);
    bufp->chgIData(oldp+134,(vlSelf->a7),32);
    bufp->chgIData(oldp+135,(vlSelf->t0),32);
    bufp->chgIData(oldp+136,(vlSelf->t1),32);
    bufp->chgIData(oldp+137,(vlSelf->t2),32);
    bufp->chgIData(oldp+138,(vlSelf->t3),32);
    bufp->chgIData(oldp+139,(vlSelf->t4),32);
    bufp->chgIData(oldp+140,(vlSelf->t5),32);
    bufp->chgIData(oldp+141,(vlSelf->t6),32);
    bufp->chgIData(oldp+142,(vlSelf->s0),32);
    bufp->chgIData(oldp+143,(vlSelf->s1),32);
    bufp->chgIData(oldp+144,(vlSelf->s2),32);
    bufp->chgIData(oldp+145,(vlSelf->s3),32);
    bufp->chgIData(oldp+146,(vlSelf->s4),32);
    bufp->chgIData(oldp+147,(vlSelf->s5),32);
    bufp->chgIData(oldp+148,(vlSelf->s6),32);
    bufp->chgIData(oldp+149,(vlSelf->s7),32);
    bufp->chgIData(oldp+150,(vlSelf->s8),32);
    bufp->chgIData(oldp+151,(vlSelf->s9),32);
    bufp->chgIData(oldp+152,(vlSelf->s10),32);
    bufp->chgIData(oldp+153,(vlSelf->s11),32);
    bufp->chgIData(oldp+154,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+155,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0x14U))]),32);
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
