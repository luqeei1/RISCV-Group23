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
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__Zero));
        bufp->chgIData(oldp+1,(((0U == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                 ? vlSelfRef.top__DOT__RD2E
                                 : ((1U == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                     ? vlSelfRef.top__DOT__ResultW
                                     : ((2U == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                         ? vlSelfRef.top__DOT__ALUResultM
                                         : vlSelfRef.top__DOT__RD2E)))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__ALUResultE),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__PC),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__RD),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__ResultW),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__SrcAE),32);
        bufp->chgIData(oldp+7,(((IData)(vlSelfRef.top__DOT__BPU_Src)
                                 ? vlSelfRef.top__DOT__PC_predict
                                 : vlSelfRef.top__DOT__PC)),32);
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelfRef.top__DOT__BPU_Src)
                                     ? vlSelfRef.top__DOT__PC_predict
                                     : vlSelfRef.top__DOT__PC))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__InstrD),32);
        bufp->chgIData(oldp+10,((((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                   [(0xffffU & ((IData)(3U) 
                                                + vlSelfRef.top__DOT__PCF))] 
                                   << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                [(0xffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.top__DOT__PCF))] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__PCF))] 
                                     << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & vlSelfRef.top__DOT__PCF)]))),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__RD1E),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__RD2E),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__PCE),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__PCPlus4E),32);
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__RegWriteE));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__ALUSrcE));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__MemWriteE));
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__modeAddrE),3);
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__RegWriteM));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__MemWriteM));
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__modeAddrM),3);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__ReadDataW),32);
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__RegWriteW));
        bufp->chgCData(oldp+26,(vlSelfRef.top__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__ExtImmD),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__ExtImmE),32);
        bufp->chgCData(oldp+30,(vlSelfRef.top__DOT__ImmSrc),3);
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__RegWriteD));
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__ALUControlD),4);
        bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__ALUControlE),4);
        bufp->chgBit(oldp+34,(((0x40U & vlSelfRef.top__DOT__InstrD)
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
        bufp->chgCData(oldp+35,(vlSelfRef.top__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+36,(((1U & (~ (vlSelfRef.top__DOT__InstrD 
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
        bufp->chgCData(oldp+37,(vlSelfRef.top__DOT__modeAddrD),3);
        bufp->chgBit(oldp+38,(((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                          >> 5U))) 
                                && ((0x10U & vlSelfRef.top__DOT__InstrD)
                                     ? ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__InstrD 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__InstrD))))
                                     : ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__InstrD 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__MemReadE));
        bufp->chgBit(oldp+40,(((1U & (vlSelfRef.top__DOT__InstrD 
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
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__JumpE));
        bufp->chgBit(oldp+42,(((1U & (vlSelfRef.top__DOT__InstrD 
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
                                                               & (~ 
                                                                  (vlSelfRef.top__DOT__InstrD 
                                                                   >> 2U))) 
                                                              && ((1U 
                                                                   & (vlSelfRef.top__DOT__InstrD 
                                                                      >> 1U)) 
                                                                  && (1U 
                                                                      & vlSelfRef.top__DOT__InstrD)))))))));
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__BranchE));
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__WriteDataM),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__ALUResultM),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__ALUResultW),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__PCF),32);
        bufp->chgIData(oldp+48,(((IData)(4U) + vlSelfRef.top__DOT__PCF)),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__PCPlus4D),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__PCD),32);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,(vlSelfRef.top__DOT__Rs1E),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+55,(vlSelfRef.top__DOT__Rs2E),5);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelfRef.top__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgCData(oldp+57,(vlSelfRef.top__DOT__RdE),5);
        bufp->chgCData(oldp+58,(vlSelfRef.top__DOT__RdM),5);
        bufp->chgCData(oldp+59,(vlSelfRef.top__DOT__RdW),5);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array
                                [(0x1fU & (vlSelfRef.top__DOT__InstrD 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array
                                [(0x1fU & (vlSelfRef.top__DOT__InstrD 
                                           >> 0x14U))]),32);
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__ForwardAE),2);
        bufp->chgCData(oldp+63,(vlSelfRef.top__DOT__ForwardBE),2);
        bufp->chgBit(oldp+64,(vlSelfRef.top__DOT__flush));
        bufp->chgBit(oldp+65,(vlSelfRef.top__DOT__stall));
        bufp->chgBit(oldp+66,(vlSelfRef.top__DOT__flushBranch));
        bufp->chgBit(oldp+67,(vlSelfRef.top__DOT__BPU_Src));
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__PC_predict),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT____Vcellinp__PC_mux__PCTarget),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT____Vcellinp__alu__SrcB),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch
                                .__PVT__branchAddr),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch
                                .__PVT__targetAddr),32);
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch
                              .__PVT__direction));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch
                              .__PVT__prediction));
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                                .__PVT__branchAddr),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                                .__PVT__targetAddr),32);
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                              .__PVT__direction));
        bufp->chgBit(oldp+78,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                              .__PVT__prediction));
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
        bufp->chgCData(oldp+80,(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
        bufp->chgCData(oldp+81,((0x7fU & vlSelfRef.top__DOT__InstrD)),7);
        bufp->chgCData(oldp+82,((7U & (vlSelfRef.top__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.top__DOT__InstrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+84,(vlSelfRef.top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.top__DOT__InstrD 
                                     >> 5U))));
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    bufp->chgBit(oldp+120,(vlSelfRef.clk));
    bufp->chgBit(oldp+121,(vlSelfRef.rst));
    bufp->chgBit(oldp+122,(vlSelfRef.trigger));
    bufp->chgIData(oldp+123,(vlSelfRef.a0),32);
    bufp->chgIData(oldp+124,(vlSelfRef.a1),32);
    bufp->chgIData(oldp+125,(vlSelfRef.a2),32);
    bufp->chgIData(oldp+126,(vlSelfRef.a3),32);
    bufp->chgIData(oldp+127,(vlSelfRef.a4),32);
    bufp->chgIData(oldp+128,(vlSelfRef.a5),32);
    bufp->chgIData(oldp+129,(vlSelfRef.a6),32);
    bufp->chgIData(oldp+130,(vlSelfRef.a7),32);
    bufp->chgIData(oldp+131,(vlSelfRef.t0),32);
    bufp->chgIData(oldp+132,(vlSelfRef.t1),32);
    bufp->chgIData(oldp+133,(vlSelfRef.t2),32);
    bufp->chgIData(oldp+134,(vlSelfRef.t3),32);
    bufp->chgIData(oldp+135,(vlSelfRef.t4),32);
    bufp->chgIData(oldp+136,(vlSelfRef.t5),32);
    bufp->chgIData(oldp+137,(vlSelfRef.t6),32);
    bufp->chgIData(oldp+138,(vlSelfRef.s0),32);
    bufp->chgIData(oldp+139,(vlSelfRef.s1),32);
    bufp->chgIData(oldp+140,(vlSelfRef.s2),32);
    bufp->chgIData(oldp+141,(vlSelfRef.s3),32);
    bufp->chgIData(oldp+142,(vlSelfRef.s4),32);
    bufp->chgIData(oldp+143,(vlSelfRef.s5),32);
    bufp->chgIData(oldp+144,(vlSelfRef.s6),32);
    bufp->chgIData(oldp+145,(vlSelfRef.s7),32);
    bufp->chgIData(oldp+146,(vlSelfRef.s8),32);
    bufp->chgIData(oldp+147,(vlSelfRef.s9),32);
    bufp->chgIData(oldp+148,(vlSelfRef.s10),32);
    bufp->chgIData(oldp+149,(vlSelfRef.s11),32);
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
}
