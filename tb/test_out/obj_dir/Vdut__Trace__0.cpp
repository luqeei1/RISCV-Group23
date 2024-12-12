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
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2164__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1e26__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1deb__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc20a8__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2065__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2135__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc20f8__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b7b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b76__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc2034__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1ff1__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc52b2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc5277__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1b33__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1aee__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8dc1dad__0;
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
        __Vtemp_ha8dc2164__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0U][0U];
        __Vtemp_ha8dc2164__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0U][1U];
        __Vtemp_ha8dc2164__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0U][2U];
        bufp->chgWData(oldp+61,(__Vtemp_ha8dc2164__0),66);
        __Vtemp_ha8dc1e26__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [1U][0U];
        __Vtemp_ha8dc1e26__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [1U][1U];
        __Vtemp_ha8dc1e26__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [1U][2U];
        bufp->chgWData(oldp+64,(__Vtemp_ha8dc1e26__0),66);
        __Vtemp_ha8dc1deb__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [2U][0U];
        __Vtemp_ha8dc1deb__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [2U][1U];
        __Vtemp_ha8dc1deb__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [2U][2U];
        bufp->chgWData(oldp+67,(__Vtemp_ha8dc1deb__0),66);
        __Vtemp_ha8dc20a8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [3U][0U];
        __Vtemp_ha8dc20a8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [3U][1U];
        __Vtemp_ha8dc20a8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [3U][2U];
        bufp->chgWData(oldp+70,(__Vtemp_ha8dc20a8__0),66);
        __Vtemp_ha8dc2065__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [4U][0U];
        __Vtemp_ha8dc2065__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [4U][1U];
        __Vtemp_ha8dc2065__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [4U][2U];
        bufp->chgWData(oldp+73,(__Vtemp_ha8dc2065__0),66);
        __Vtemp_ha8dc2135__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [5U][0U];
        __Vtemp_ha8dc2135__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [5U][1U];
        __Vtemp_ha8dc2135__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [5U][2U];
        bufp->chgWData(oldp+76,(__Vtemp_ha8dc2135__0),66);
        __Vtemp_ha8dc20f8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [6U][0U];
        __Vtemp_ha8dc20f8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [6U][1U];
        __Vtemp_ha8dc20f8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [6U][2U];
        bufp->chgWData(oldp+79,(__Vtemp_ha8dc20f8__0),66);
        __Vtemp_ha8dc1b7b__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [7U][0U];
        __Vtemp_ha8dc1b7b__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [7U][1U];
        __Vtemp_ha8dc1b7b__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [7U][2U];
        bufp->chgWData(oldp+82,(__Vtemp_ha8dc1b7b__0),66);
        __Vtemp_ha8dc1b76__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [8U][0U];
        __Vtemp_ha8dc1b76__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [8U][1U];
        __Vtemp_ha8dc1b76__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [8U][2U];
        bufp->chgWData(oldp+85,(__Vtemp_ha8dc1b76__0),66);
        __Vtemp_ha8dc2034__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [9U][0U];
        __Vtemp_ha8dc2034__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [9U][1U];
        __Vtemp_ha8dc2034__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [9U][2U];
        bufp->chgWData(oldp+88,(__Vtemp_ha8dc2034__0),66);
        __Vtemp_ha8dc1ff1__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xaU][0U];
        __Vtemp_ha8dc1ff1__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xaU][1U];
        __Vtemp_ha8dc1ff1__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xaU][2U];
        bufp->chgWData(oldp+91,(__Vtemp_ha8dc1ff1__0),66);
        __Vtemp_ha8dc52b2__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xbU][0U];
        __Vtemp_ha8dc52b2__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xbU][1U];
        __Vtemp_ha8dc52b2__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xbU][2U];
        bufp->chgWData(oldp+94,(__Vtemp_ha8dc52b2__0),66);
        __Vtemp_ha8dc5277__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xcU][0U];
        __Vtemp_ha8dc5277__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xcU][1U];
        __Vtemp_ha8dc5277__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xcU][2U];
        bufp->chgWData(oldp+97,(__Vtemp_ha8dc5277__0),66);
        __Vtemp_ha8dc1b33__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xdU][0U];
        __Vtemp_ha8dc1b33__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xdU][1U];
        __Vtemp_ha8dc1b33__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xdU][2U];
        bufp->chgWData(oldp+100,(__Vtemp_ha8dc1b33__0),66);
        __Vtemp_ha8dc1aee__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xeU][0U];
        __Vtemp_ha8dc1aee__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xeU][1U];
        __Vtemp_ha8dc1aee__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xeU][2U];
        bufp->chgWData(oldp+103,(__Vtemp_ha8dc1aee__0),66);
        __Vtemp_ha8dc1dad__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xfU][0U];
        __Vtemp_ha8dc1dad__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xfU][1U];
        __Vtemp_ha8dc1dad__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [0xfU][2U];
        bufp->chgWData(oldp+106,(__Vtemp_ha8dc1dad__0),66);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front),4);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back),4);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count),5);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
        bufp->chgCData(oldp+114,((0x7fU & vlSelf->top__DOT__InstrD)),7);
        bufp->chgCData(oldp+115,((7U & (vlSelf->top__DOT__InstrD 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__InstrD 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__control_unit__DOT__Store));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__control_unit__DOT__Load));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__InstrD 
                                      >> 5U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__ReadDataM),32);
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__Zero));
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__WriteDataE),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__ALUResultE),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__SrcAE),32);
        bufp->chgBit(oldp+159,(vlSelf->top__DOT__flush));
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__flushDE));
        bufp->chgBit(oldp+161,(vlSelf->top__DOT__stall));
        bufp->chgBit(oldp+162,(vlSelf->top__DOT__flushBranch));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__BPU_Src));
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__PC_predict),32);
        bufp->chgIData(oldp+165,(((IData)(vlSelf->top__DOT__BPU_Src)
                                   ? vlSelf->top__DOT__PC_predict
                                   : vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT____Vcellinp__alu__SrcB),32);
        bufp->chgWData(oldp+167,(vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch),66);
    }
    bufp->chgBit(oldp+170,(vlSelf->clk));
    bufp->chgBit(oldp+171,(vlSelf->rst));
    bufp->chgBit(oldp+172,(vlSelf->trigger));
    bufp->chgIData(oldp+173,(vlSelf->a0),32);
    bufp->chgIData(oldp+174,(vlSelf->a1),32);
    bufp->chgIData(oldp+175,(vlSelf->a2),32);
    bufp->chgIData(oldp+176,(vlSelf->a3),32);
    bufp->chgIData(oldp+177,(vlSelf->a4),32);
    bufp->chgIData(oldp+178,(vlSelf->a5),32);
    bufp->chgIData(oldp+179,(vlSelf->a6),32);
    bufp->chgIData(oldp+180,(vlSelf->a7),32);
    bufp->chgIData(oldp+181,(vlSelf->t0),32);
    bufp->chgIData(oldp+182,(vlSelf->t1),32);
    bufp->chgIData(oldp+183,(vlSelf->t2),32);
    bufp->chgIData(oldp+184,(vlSelf->t3),32);
    bufp->chgIData(oldp+185,(vlSelf->t4),32);
    bufp->chgIData(oldp+186,(vlSelf->t5),32);
    bufp->chgIData(oldp+187,(vlSelf->t6),32);
    bufp->chgIData(oldp+188,(vlSelf->s0),32);
    bufp->chgIData(oldp+189,(vlSelf->s1),32);
    bufp->chgIData(oldp+190,(vlSelf->s2),32);
    bufp->chgIData(oldp+191,(vlSelf->s3),32);
    bufp->chgIData(oldp+192,(vlSelf->s4),32);
    bufp->chgIData(oldp+193,(vlSelf->s5),32);
    bufp->chgIData(oldp+194,(vlSelf->s6),32);
    bufp->chgIData(oldp+195,(vlSelf->s7),32);
    bufp->chgIData(oldp+196,(vlSelf->s8),32);
    bufp->chgIData(oldp+197,(vlSelf->s9),32);
    bufp->chgIData(oldp+198,(vlSelf->s10),32);
    bufp->chgIData(oldp+199,(vlSelf->s11),32);
    bufp->chgIData(oldp+200,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+201,(vlSelf->top__DOT__regfile__DOT__registerfile_array
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->chgWData(oldp+202,(vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch),66);
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
