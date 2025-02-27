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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__ReadDataM),32);
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__Zero));
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__WriteDataE),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__ALUResultE),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__PC),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__SrcAE),32);
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__miss_stall));
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT____Vcellinp__alu__SrcB),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache),32);
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__flush));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__flushDE));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__stall));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__flushBranch));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__BPU_Src));
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__PC_predict),32);
        bufp->chgWData(oldp+17,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch),66);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+20,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch),66);
        bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
        bufp->chgCData(oldp+24,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__InstrD),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__InstrF),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__RD1E),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__RD2E),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__PCE),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__PCPlus4E),32);
        bufp->chgBit(oldp+63,(vlSelfRef.top__DOT__RegWriteE));
        bufp->chgBit(oldp+64,(vlSelfRef.top__DOT__ALUSrcE));
        bufp->chgBit(oldp+65,(vlSelfRef.top__DOT__MemWriteE));
        bufp->chgCData(oldp+66,(vlSelfRef.top__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+67,(vlSelfRef.top__DOT__modeAddrE),3);
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__JALRE));
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__RegWriteM));
        bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__MemWriteM));
        bufp->chgCData(oldp+71,(vlSelfRef.top__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__modeAddrM),3);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__ReadDataW),32);
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__RegWriteW));
        bufp->chgCData(oldp+75,(vlSelfRef.top__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__ExtImmD),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__ExtImmE),32);
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__ImmSrc),3);
        bufp->chgBit(oldp+80,(vlSelfRef.top__DOT__RegWriteD));
        bufp->chgCData(oldp+81,(vlSelfRef.top__DOT__ALUControlD),4);
        bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__ALUControlE),4);
        bufp->chgBit(oldp+83,(((0x40U & vlSelfRef.top__DOT__InstrD)
                                ? ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                             >> 5U))) 
                                   || ((1U & (vlSelfRef.top__DOT__InstrD 
                                              >> 4U)) 
                                       || ((8U & vlSelfRef.top__DOT__InstrD)
                                            ? ((1U 
                                                & (~ 
                                                   (vlSelfRef.top__DOT__InstrD 
                                                    >> 2U))) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__InstrD 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__InstrD))))
                                            : ((4U 
                                                & vlSelfRef.top__DOT__InstrD)
                                                ? (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__InstrD 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__InstrD)))
                                                : (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__InstrD 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__InstrD)))))))
                                : ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                             >> 5U))) 
                                   || ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                 >> 4U))) 
                                       || ((1U & (vlSelfRef.top__DOT__InstrD 
                                                  >> 3U)) 
                                           || ((1U 
                                                & (vlSelfRef.top__DOT__InstrD 
                                                   >> 2U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__InstrD 
                                                        >> 1U))) 
                                                   || (1U 
                                                       & (~ vlSelfRef.top__DOT__InstrD))))))))));
        bufp->chgCData(oldp+84,(vlSelfRef.top__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+85,(((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top__DOT__InstrD 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__InstrD 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__InstrD 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__InstrD 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__InstrD 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgCData(oldp+86,(vlSelfRef.top__DOT__modeAddrD),3);
        bufp->chgBit(oldp+87,(((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__InstrD 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__MemReadE));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__MemReadM));
        bufp->chgBit(oldp+90,(((1U & (vlSelfRef.top__DOT__InstrD 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__InstrD 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.top__DOT__InstrD)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__InstrD 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__InstrD 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__InstrD)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__InstrD 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__InstrD 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+91,(vlSelfRef.top__DOT__JumpE));
        bufp->chgBit(oldp+92,(((1U & (vlSelfRef.top__DOT__InstrD 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__InstrD 
                                                           >> 4U))) 
                                                      && ((1U 
                                                           & (~ 
                                                              (vlSelfRef.top__DOT__InstrD 
                                                               >> 3U))) 
                                                          && ((4U 
                                                               & vlSelfRef.top__DOT__InstrD)
                                                               ? 
                                                              ((1U 
                                                                & (vlSelfRef.top__DOT__InstrD 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__InstrD))
                                                               : 
                                                              ((1U 
                                                                & (vlSelfRef.top__DOT__InstrD 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+93,(vlSelfRef.top__DOT__BranchE));
        bufp->chgBit(oldp+94,(((1U & (vlSelfRef.top__DOT__InstrD 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__InstrD 
                                                           >> 4U))) 
                                                      && ((1U 
                                                           & (~ 
                                                              (vlSelfRef.top__DOT__InstrD 
                                                               >> 3U))) 
                                                          && ((1U 
                                                               & (vlSelfRef.top__DOT__InstrD 
                                                                  >> 2U)) 
                                                              && ((1U 
                                                                   & (vlSelfRef.top__DOT__InstrD 
                                                                      >> 1U)) 
                                                                  && (1U 
                                                                      & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__WriteDataM),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__ALUResultM),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__ALUResultW),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__PCF),32);
        bufp->chgIData(oldp+99,(((IData)(4U) + vlSelfRef.top__DOT__PCF)),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__PCPlus4D),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__PCD),32);
        bufp->chgCData(oldp+103,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+104,(vlSelfRef.top__DOT__Rs1E),5);
        bufp->chgCData(oldp+105,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+106,(vlSelfRef.top__DOT__Rs2E),5);
        bufp->chgCData(oldp+107,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                           >> 7U))),5);
        bufp->chgCData(oldp+108,(vlSelfRef.top__DOT__RdE),5);
        bufp->chgCData(oldp+109,(vlSelfRef.top__DOT__RdM),5);
        bufp->chgCData(oldp+110,(vlSelfRef.top__DOT__RdW),5);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__ResultW),32);
        bufp->chgCData(oldp+112,(vlSelfRef.top__DOT__ForwardAE),2);
        bufp->chgCData(oldp+113,(vlSelfRef.top__DOT__ForwardBE),2);
        bufp->chgIData(oldp+114,((vlSelfRef.top__DOT__ExtImmE 
                                  + vlSelfRef.top__DOT__PCE)),32);
        bufp->chgCData(oldp+115,((0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                           >> 3U))),8);
        bufp->chgBit(oldp+116,(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit));
        bufp->chgCData(oldp+117,((0x7fU & vlSelfRef.top__DOT__InstrD)),7);
        bufp->chgCData(oldp+118,((7U & (vlSelfRef.top__DOT__InstrD 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.top__DOT__InstrD 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+120,(vlSelfRef.top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+121,(vlSelfRef.top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+122,(vlSelfRef.top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.top__DOT__InstrD 
                                      >> 5U))));
    }
    bufp->chgBit(oldp+124,(vlSelfRef.clk));
    bufp->chgBit(oldp+125,(vlSelfRef.rst));
    bufp->chgBit(oldp+126,(vlSelfRef.trigger));
    bufp->chgIData(oldp+127,(vlSelfRef.a0),32);
    bufp->chgIData(oldp+128,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+129,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+130,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+131,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+132,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+133,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+134,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+135,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+136,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+137,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+138,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+139,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+140,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+141,(vlSelfRef.t6),32);
    bufp->chgIData(oldp+142,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+143,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+144,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+145,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+146,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+147,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+148,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+149,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+150,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+151,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+152,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+153,(vlSelfRef.s11),32);
    bufp->chgIData(oldp+154,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelfRef.top__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelfRef.top__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+156,(((IData)(vlSelfRef.top__DOT__BPU_Src)
                               ? vlSelfRef.top__DOT__PC_predict
                               : vlSelfRef.top__DOT__PC)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
