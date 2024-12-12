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
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->trigger));
    bufp->chgIData(oldp+3,(vlSelf->a0),32);
    bufp->chgIData(oldp+4,(vlSelf->a1),32);
    bufp->chgIData(oldp+5,(vlSelf->a2),32);
    bufp->chgIData(oldp+6,(vlSelf->a3),32);
    bufp->chgIData(oldp+7,(vlSelf->a4),32);
    bufp->chgIData(oldp+8,(vlSelf->a5),32);
    bufp->chgIData(oldp+9,(vlSelf->a6),32);
    bufp->chgIData(oldp+10,(vlSelf->a7),32);
    bufp->chgIData(oldp+11,(vlSelf->t0),32);
    bufp->chgIData(oldp+12,(vlSelf->t1),32);
    bufp->chgIData(oldp+13,(vlSelf->t2),32);
    bufp->chgIData(oldp+14,(vlSelf->t3),32);
    bufp->chgIData(oldp+15,(vlSelf->t4),32);
    bufp->chgIData(oldp+16,(vlSelf->t5),32);
    bufp->chgIData(oldp+17,(vlSelf->t6),32);
    bufp->chgIData(oldp+18,(vlSelf->s0),32);
    bufp->chgIData(oldp+19,(vlSelf->s1),32);
    bufp->chgIData(oldp+20,(vlSelf->s2),32);
    bufp->chgIData(oldp+21,(vlSelf->s3),32);
    bufp->chgIData(oldp+22,(vlSelf->s4),32);
    bufp->chgIData(oldp+23,(vlSelf->s5),32);
    bufp->chgIData(oldp+24,(vlSelf->s6),32);
    bufp->chgIData(oldp+25,(vlSelf->s7),32);
    bufp->chgIData(oldp+26,(vlSelf->s8),32);
    bufp->chgIData(oldp+27,(vlSelf->s9),32);
    bufp->chgIData(oldp+28,(vlSelf->s10),32);
    bufp->chgIData(oldp+29,(vlSelf->s11),32);
    bufp->chgBit(oldp+30,(vlSelf->top__DOT__clk));
    bufp->chgBit(oldp+31,(vlSelf->top__DOT__rst));
    bufp->chgBit(oldp+32,(vlSelf->top__DOT__trigger));
    bufp->chgIData(oldp+33,(vlSelf->top__DOT__a0),32);
    bufp->chgIData(oldp+34,(vlSelf->top__DOT__a1),32);
    bufp->chgIData(oldp+35,(vlSelf->top__DOT__a2),32);
    bufp->chgIData(oldp+36,(vlSelf->top__DOT__a3),32);
    bufp->chgIData(oldp+37,(vlSelf->top__DOT__a4),32);
    bufp->chgIData(oldp+38,(vlSelf->top__DOT__a5),32);
    bufp->chgIData(oldp+39,(vlSelf->top__DOT__a6),32);
    bufp->chgIData(oldp+40,(vlSelf->top__DOT__a7),32);
    bufp->chgIData(oldp+41,(vlSelf->top__DOT__t0),32);
    bufp->chgIData(oldp+42,(vlSelf->top__DOT__t1),32);
    bufp->chgIData(oldp+43,(vlSelf->top__DOT__t2),32);
    bufp->chgIData(oldp+44,(vlSelf->top__DOT__t3),32);
    bufp->chgIData(oldp+45,(vlSelf->top__DOT__t4),32);
    bufp->chgIData(oldp+46,(vlSelf->top__DOT__t5),32);
    bufp->chgIData(oldp+47,(vlSelf->top__DOT__t6),32);
    bufp->chgIData(oldp+48,(vlSelf->top__DOT__s0),32);
    bufp->chgIData(oldp+49,(vlSelf->top__DOT__s1),32);
    bufp->chgIData(oldp+50,(vlSelf->top__DOT__s2),32);
    bufp->chgIData(oldp+51,(vlSelf->top__DOT__s3),32);
    bufp->chgIData(oldp+52,(vlSelf->top__DOT__s4),32);
    bufp->chgIData(oldp+53,(vlSelf->top__DOT__s5),32);
    bufp->chgIData(oldp+54,(vlSelf->top__DOT__s6),32);
    bufp->chgIData(oldp+55,(vlSelf->top__DOT__s7),32);
    bufp->chgIData(oldp+56,(vlSelf->top__DOT__s8),32);
    bufp->chgIData(oldp+57,(vlSelf->top__DOT__s9),32);
    bufp->chgIData(oldp+58,(vlSelf->top__DOT__s10),32);
    bufp->chgIData(oldp+59,(vlSelf->top__DOT__s11),32);
    bufp->chgIData(oldp+60,(vlSelf->top__DOT__InstrD),32);
    bufp->chgIData(oldp+61,(vlSelf->top__DOT__InstrF),32);
    bufp->chgIData(oldp+62,(vlSelf->top__DOT__InstrE),32);
    bufp->chgIData(oldp+63,(vlSelf->top__DOT__InstrM),32);
    bufp->chgIData(oldp+64,(vlSelf->top__DOT__InstrW),32);
    bufp->chgIData(oldp+65,(vlSelf->top__DOT__RD1E),32);
    bufp->chgIData(oldp+66,(vlSelf->top__DOT__RD2E),32);
    bufp->chgIData(oldp+67,(vlSelf->top__DOT__PCE),32);
    bufp->chgIData(oldp+68,(vlSelf->top__DOT__PCPlus4E),32);
    bufp->chgBit(oldp+69,(vlSelf->top__DOT__RegWriteE));
    bufp->chgBit(oldp+70,(vlSelf->top__DOT__ALUSrcE));
    bufp->chgBit(oldp+71,(vlSelf->top__DOT__MemWriteE));
    bufp->chgCData(oldp+72,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->chgCData(oldp+73,(vlSelf->top__DOT__modeAddrE),3);
    bufp->chgBit(oldp+74,(vlSelf->top__DOT__JALRE));
    bufp->chgBit(oldp+75,(vlSelf->top__DOT__RegWriteM));
    bufp->chgBit(oldp+76,(vlSelf->top__DOT__MemWriteM));
    bufp->chgCData(oldp+77,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->chgCData(oldp+78,(vlSelf->top__DOT__modeAddrM),3);
    bufp->chgIData(oldp+79,(vlSelf->top__DOT__ReadDataW),32);
    bufp->chgIData(oldp+80,(vlSelf->top__DOT__ReadDataM),32);
    bufp->chgBit(oldp+81,(vlSelf->top__DOT__RegWriteW));
    bufp->chgCData(oldp+82,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->chgIData(oldp+83,(vlSelf->top__DOT__PCPlus4W),32);
    bufp->chgIData(oldp+84,(vlSelf->top__DOT__ExtImmD),32);
    bufp->chgIData(oldp+85,(vlSelf->top__DOT__ExtImmE),32);
    bufp->chgCData(oldp+86,(vlSelf->top__DOT__ImmSrc),3);
    bufp->chgBit(oldp+87,(vlSelf->top__DOT__RegWriteD));
    bufp->chgCData(oldp+88,(vlSelf->top__DOT__ALUControlD),4);
    bufp->chgCData(oldp+89,(vlSelf->top__DOT__ALUControlE),4);
    bufp->chgBit(oldp+90,(vlSelf->top__DOT__ALUSrcD));
    bufp->chgCData(oldp+91,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->chgBit(oldp+92,(vlSelf->top__DOT__MemWriteD));
    bufp->chgCData(oldp+93,(vlSelf->top__DOT__modeAddrD),3);
    bufp->chgBit(oldp+94,(vlSelf->top__DOT__Zero));
    bufp->chgBit(oldp+95,(vlSelf->top__DOT__MemReadD));
    bufp->chgBit(oldp+96,(vlSelf->top__DOT__MemReadE));
    bufp->chgBit(oldp+97,(vlSelf->top__DOT__MemReadM));
    bufp->chgBit(oldp+98,(vlSelf->top__DOT__JumpD));
    bufp->chgBit(oldp+99,(vlSelf->top__DOT__JumpE));
    bufp->chgBit(oldp+100,(vlSelf->top__DOT__BranchD));
    bufp->chgBit(oldp+101,(vlSelf->top__DOT__BranchE));
    bufp->chgBit(oldp+102,(vlSelf->top__DOT__JALRD));
    bufp->chgIData(oldp+103,(vlSelf->top__DOT__WriteDataE),32);
    bufp->chgIData(oldp+104,(vlSelf->top__DOT__WriteDataM),32);
    bufp->chgIData(oldp+105,(vlSelf->top__DOT__ALUResultM),32);
    bufp->chgIData(oldp+106,(vlSelf->top__DOT__ALUResultE),32);
    bufp->chgIData(oldp+107,(vlSelf->top__DOT__ALUResultW),32);
    bufp->chgIData(oldp+108,(vlSelf->top__DOT__PC),32);
    bufp->chgIData(oldp+109,(vlSelf->top__DOT__PCF),32);
    bufp->chgIData(oldp+110,(vlSelf->top__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+111,(vlSelf->top__DOT__PCPlus4D),32);
    bufp->chgIData(oldp+112,(vlSelf->top__DOT__PCPlus4M),32);
    bufp->chgIData(oldp+113,(vlSelf->top__DOT__PCD),32);
    bufp->chgCData(oldp+114,(vlSelf->top__DOT__Rs1D),5);
    bufp->chgCData(oldp+115,(vlSelf->top__DOT__Rs1E),5);
    bufp->chgCData(oldp+116,(vlSelf->top__DOT__Rs2D),5);
    bufp->chgCData(oldp+117,(vlSelf->top__DOT__Rs2E),5);
    bufp->chgCData(oldp+118,(vlSelf->top__DOT__RdD),5);
    bufp->chgCData(oldp+119,(vlSelf->top__DOT__RdE),5);
    bufp->chgCData(oldp+120,(vlSelf->top__DOT__RdM),5);
    bufp->chgCData(oldp+121,(vlSelf->top__DOT__RdW),5);
    bufp->chgIData(oldp+122,(vlSelf->top__DOT__RD1),32);
    bufp->chgIData(oldp+123,(vlSelf->top__DOT__RD2),32);
    bufp->chgIData(oldp+124,(vlSelf->top__DOT__RD),32);
    bufp->chgIData(oldp+125,(vlSelf->top__DOT__ResultW),32);
    bufp->chgIData(oldp+126,(vlSelf->top__DOT__SrcAE),32);
    bufp->chgCData(oldp+127,(vlSelf->top__DOT__ForwardAE),2);
    bufp->chgCData(oldp+128,(vlSelf->top__DOT__ForwardBE),2);
    bufp->chgBit(oldp+129,(vlSelf->top__DOT__flush));
    bufp->chgBit(oldp+130,(vlSelf->top__DOT__flushDE));
    bufp->chgBit(oldp+131,(vlSelf->top__DOT__stall));
    bufp->chgBit(oldp+132,(vlSelf->top__DOT__flushBranch));
    bufp->chgBit(oldp+133,(vlSelf->top__DOT__BPU_Src));
    bufp->chgIData(oldp+134,(vlSelf->top__DOT__PC_predict),32);
    bufp->chgIData(oldp+135,(vlSelf->top__DOT__PC_next),32);
    bufp->chgBit(oldp+136,(vlSelf->top__DOT__BPU_mux__DOT__sel));
    bufp->chgIData(oldp+137,(vlSelf->top__DOT__BPU_mux__DOT__in0),32);
    bufp->chgIData(oldp+138,(vlSelf->top__DOT__BPU_mux__DOT__in1),32);
    bufp->chgIData(oldp+139,(vlSelf->top__DOT__BPU_mux__DOT__out),32);
    bufp->chgBit(oldp+140,(vlSelf->top__DOT__PC_mux__DOT__ZeroE));
    bufp->chgBit(oldp+141,(vlSelf->top__DOT__PC_mux__DOT__JumpE));
    bufp->chgBit(oldp+142,(vlSelf->top__DOT__PC_mux__DOT__BranchE));
    bufp->chgBit(oldp+143,(vlSelf->top__DOT__PC_mux__DOT__JALRE));
    bufp->chgIData(oldp+144,(vlSelf->top__DOT__PC_mux__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+145,(vlSelf->top__DOT__PC_mux__DOT__ALUResult),32);
    bufp->chgIData(oldp+146,(vlSelf->top__DOT__PC_mux__DOT__PCTarget),32);
    bufp->chgIData(oldp+147,(vlSelf->top__DOT__PC_mux__DOT__PC),32);
    bufp->chgIData(oldp+148,(vlSelf->top__DOT__alu__DOT__SrcA),32);
    bufp->chgIData(oldp+149,(vlSelf->top__DOT__alu__DOT__SrcB),32);
    bufp->chgCData(oldp+150,(vlSelf->top__DOT__alu__DOT__ALUctrl),4);
    bufp->chgIData(oldp+151,(vlSelf->top__DOT__alu__DOT__ALUResult),32);
    bufp->chgBit(oldp+152,(vlSelf->top__DOT__alu__DOT__ZeroE));
    bufp->chgBit(oldp+153,(vlSelf->top__DOT__branch_prediction_unit__DOT__clk));
    bufp->chgIData(oldp+154,(vlSelf->top__DOT__branch_prediction_unit__DOT__RD),32);
    bufp->chgIData(oldp+155,(vlSelf->top__DOT__branch_prediction_unit__DOT__PCF),32);
    bufp->chgBit(oldp+156,(vlSelf->top__DOT__branch_prediction_unit__DOT__ZeroE));
    bufp->chgBit(oldp+157,(vlSelf->top__DOT__branch_prediction_unit__DOT__JumpE));
    bufp->chgBit(oldp+158,(vlSelf->top__DOT__branch_prediction_unit__DOT__BranchE));
    bufp->chgBit(oldp+159,(vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch));
    bufp->chgIData(oldp+160,(vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU),32);
    bufp->chgBit(oldp+161,(vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc));
    __Vtemp_ha8dc2164__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][0U];
    __Vtemp_ha8dc2164__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][1U];
    __Vtemp_ha8dc2164__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0U][2U];
    bufp->chgWData(oldp+162,(__Vtemp_ha8dc2164__0),66);
    __Vtemp_ha8dc1e26__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][0U];
    __Vtemp_ha8dc1e26__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][1U];
    __Vtemp_ha8dc1e26__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [1U][2U];
    bufp->chgWData(oldp+165,(__Vtemp_ha8dc1e26__0),66);
    __Vtemp_ha8dc1deb__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][0U];
    __Vtemp_ha8dc1deb__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][1U];
    __Vtemp_ha8dc1deb__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [2U][2U];
    bufp->chgWData(oldp+168,(__Vtemp_ha8dc1deb__0),66);
    __Vtemp_ha8dc20a8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][0U];
    __Vtemp_ha8dc20a8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][1U];
    __Vtemp_ha8dc20a8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [3U][2U];
    bufp->chgWData(oldp+171,(__Vtemp_ha8dc20a8__0),66);
    __Vtemp_ha8dc2065__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][0U];
    __Vtemp_ha8dc2065__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][1U];
    __Vtemp_ha8dc2065__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [4U][2U];
    bufp->chgWData(oldp+174,(__Vtemp_ha8dc2065__0),66);
    __Vtemp_ha8dc2135__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][0U];
    __Vtemp_ha8dc2135__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][1U];
    __Vtemp_ha8dc2135__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [5U][2U];
    bufp->chgWData(oldp+177,(__Vtemp_ha8dc2135__0),66);
    __Vtemp_ha8dc20f8__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][0U];
    __Vtemp_ha8dc20f8__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][1U];
    __Vtemp_ha8dc20f8__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [6U][2U];
    bufp->chgWData(oldp+180,(__Vtemp_ha8dc20f8__0),66);
    __Vtemp_ha8dc1b7b__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][0U];
    __Vtemp_ha8dc1b7b__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][1U];
    __Vtemp_ha8dc1b7b__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [7U][2U];
    bufp->chgWData(oldp+183,(__Vtemp_ha8dc1b7b__0),66);
    __Vtemp_ha8dc1b76__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][0U];
    __Vtemp_ha8dc1b76__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][1U];
    __Vtemp_ha8dc1b76__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [8U][2U];
    bufp->chgWData(oldp+186,(__Vtemp_ha8dc1b76__0),66);
    __Vtemp_ha8dc2034__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][0U];
    __Vtemp_ha8dc2034__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][1U];
    __Vtemp_ha8dc2034__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [9U][2U];
    bufp->chgWData(oldp+189,(__Vtemp_ha8dc2034__0),66);
    __Vtemp_ha8dc1ff1__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][0U];
    __Vtemp_ha8dc1ff1__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][1U];
    __Vtemp_ha8dc1ff1__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xaU][2U];
    bufp->chgWData(oldp+192,(__Vtemp_ha8dc1ff1__0),66);
    __Vtemp_ha8dc52b2__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][0U];
    __Vtemp_ha8dc52b2__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][1U];
    __Vtemp_ha8dc52b2__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xbU][2U];
    bufp->chgWData(oldp+195,(__Vtemp_ha8dc52b2__0),66);
    __Vtemp_ha8dc5277__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][0U];
    __Vtemp_ha8dc5277__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][1U];
    __Vtemp_ha8dc5277__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xcU][2U];
    bufp->chgWData(oldp+198,(__Vtemp_ha8dc5277__0),66);
    __Vtemp_ha8dc1b33__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][0U];
    __Vtemp_ha8dc1b33__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][1U];
    __Vtemp_ha8dc1b33__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xdU][2U];
    bufp->chgWData(oldp+201,(__Vtemp_ha8dc1b33__0),66);
    __Vtemp_ha8dc1aee__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][0U];
    __Vtemp_ha8dc1aee__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][1U];
    __Vtemp_ha8dc1aee__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xeU][2U];
    bufp->chgWData(oldp+204,(__Vtemp_ha8dc1aee__0),66);
    __Vtemp_ha8dc1dad__0[0U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][0U];
    __Vtemp_ha8dc1dad__0[1U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][1U];
    __Vtemp_ha8dc1dad__0[2U] = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
        [0xfU][2U];
    bufp->chgWData(oldp+207,(__Vtemp_ha8dc1dad__0),66);
    bufp->chgCData(oldp+210,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front),4);
    bufp->chgCData(oldp+211,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back),4);
    bufp->chgCData(oldp+212,(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count),5);
    bufp->chgWData(oldp+213,(vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch),66);
    bufp->chgWData(oldp+216,(vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch),66);
    bufp->chgBit(oldp+219,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpDecisionCorrect));
    bufp->chgBit(oldp+220,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpDecisionCorrect));
    bufp->chgCData(oldp+221,(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter),2);
    bufp->chgCData(oldp+222,(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter),2);
    bufp->chgIData(oldp+223,(vlSelf->top__DOT__control_unit__DOT__InstrD),32);
    bufp->chgCData(oldp+224,(vlSelf->top__DOT__control_unit__DOT__ResultSrcD),2);
    bufp->chgBit(oldp+225,(vlSelf->top__DOT__control_unit__DOT__MemWriteD));
    bufp->chgBit(oldp+226,(vlSelf->top__DOT__control_unit__DOT__JumpD));
    bufp->chgBit(oldp+227,(vlSelf->top__DOT__control_unit__DOT__BranchD));
    bufp->chgBit(oldp+228,(vlSelf->top__DOT__control_unit__DOT__JALRD));
    bufp->chgCData(oldp+229,(vlSelf->top__DOT__control_unit__DOT__ALUControlD),4);
    bufp->chgBit(oldp+230,(vlSelf->top__DOT__control_unit__DOT__ALUSrcD));
    bufp->chgCData(oldp+231,(vlSelf->top__DOT__control_unit__DOT__ImmSrcD),3);
    bufp->chgBit(oldp+232,(vlSelf->top__DOT__control_unit__DOT__RegWriteD));
    bufp->chgCData(oldp+233,(vlSelf->top__DOT__control_unit__DOT__modeAddr),3);
    bufp->chgBit(oldp+234,(vlSelf->top__DOT__control_unit__DOT__MemReadD));
    bufp->chgCData(oldp+235,(vlSelf->top__DOT__control_unit__DOT__op),7);
    bufp->chgCData(oldp+236,(vlSelf->top__DOT__control_unit__DOT__funct3),3);
    bufp->chgBit(oldp+237,(vlSelf->top__DOT__control_unit__DOT__funct7));
    bufp->chgCData(oldp+238,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
    bufp->chgBit(oldp+239,(vlSelf->top__DOT__control_unit__DOT__Store));
    bufp->chgBit(oldp+240,(vlSelf->top__DOT__control_unit__DOT__Load));
    bufp->chgCData(oldp+241,(vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp),2);
    bufp->chgBit(oldp+242,(vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__op));
    bufp->chgCData(oldp+243,(vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct3),3);
    bufp->chgBit(oldp+244,(vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct7));
    bufp->chgCData(oldp+245,(vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl),4);
    bufp->chgCData(oldp+246,(vlSelf->top__DOT__data_memory__DOT__modeAddr),3);
    bufp->chgBit(oldp+247,(vlSelf->top__DOT__data_memory__DOT__clk));
    bufp->chgIData(oldp+248,(vlSelf->top__DOT__data_memory__DOT__A),32);
    bufp->chgIData(oldp+249,(vlSelf->top__DOT__data_memory__DOT__WD),32);
    bufp->chgBit(oldp+250,(vlSelf->top__DOT__data_memory__DOT__trigger));
    bufp->chgBit(oldp+251,(vlSelf->top__DOT__data_memory__DOT__WE));
    bufp->chgIData(oldp+252,(vlSelf->top__DOT__data_memory__DOT__RD),32);
    bufp->chgCData(oldp+253,(vlSelf->top__DOT__forwardAE_mux__DOT__sel),2);
    bufp->chgIData(oldp+254,(vlSelf->top__DOT__forwardAE_mux__DOT__in0),32);
    bufp->chgIData(oldp+255,(vlSelf->top__DOT__forwardAE_mux__DOT__in1),32);
    bufp->chgIData(oldp+256,(vlSelf->top__DOT__forwardAE_mux__DOT__in2),32);
    bufp->chgIData(oldp+257,(vlSelf->top__DOT__forwardAE_mux__DOT__in3),32);
    bufp->chgIData(oldp+258,(vlSelf->top__DOT__forwardAE_mux__DOT__out),32);
    bufp->chgCData(oldp+259,(vlSelf->top__DOT__forwardBE_mux__DOT__sel),2);
    bufp->chgIData(oldp+260,(vlSelf->top__DOT__forwardBE_mux__DOT__in0),32);
    bufp->chgIData(oldp+261,(vlSelf->top__DOT__forwardBE_mux__DOT__in1),32);
    bufp->chgIData(oldp+262,(vlSelf->top__DOT__forwardBE_mux__DOT__in2),32);
    bufp->chgIData(oldp+263,(vlSelf->top__DOT__forwardBE_mux__DOT__in3),32);
    bufp->chgIData(oldp+264,(vlSelf->top__DOT__forwardBE_mux__DOT__out),32);
    bufp->chgCData(oldp+265,(vlSelf->top__DOT__hazard_unit__DOT__RdM),5);
    bufp->chgCData(oldp+266,(vlSelf->top__DOT__hazard_unit__DOT__RdW),5);
    bufp->chgCData(oldp+267,(vlSelf->top__DOT__hazard_unit__DOT__RdE),5);
    bufp->chgCData(oldp+268,(vlSelf->top__DOT__hazard_unit__DOT__Rs1E),5);
    bufp->chgCData(oldp+269,(vlSelf->top__DOT__hazard_unit__DOT__Rs2E),5);
    bufp->chgCData(oldp+270,(vlSelf->top__DOT__hazard_unit__DOT__Rs1D),5);
    bufp->chgCData(oldp+271,(vlSelf->top__DOT__hazard_unit__DOT__Rs2D),5);
    bufp->chgBit(oldp+272,(vlSelf->top__DOT__hazard_unit__DOT__RegWriteM));
    bufp->chgBit(oldp+273,(vlSelf->top__DOT__hazard_unit__DOT__RegWriteW));
    bufp->chgBit(oldp+274,(vlSelf->top__DOT__hazard_unit__DOT__MemReadE));
    bufp->chgBit(oldp+275,(vlSelf->top__DOT__hazard_unit__DOT__JumpE));
    bufp->chgBit(oldp+276,(vlSelf->top__DOT__hazard_unit__DOT__MemReadM));
    bufp->chgBit(oldp+277,(vlSelf->top__DOT__hazard_unit__DOT__flushBranch));
    bufp->chgCData(oldp+278,(vlSelf->top__DOT__hazard_unit__DOT__ForwardAE),2);
    bufp->chgCData(oldp+279,(vlSelf->top__DOT__hazard_unit__DOT__ForwardBE),2);
    bufp->chgBit(oldp+280,(vlSelf->top__DOT__hazard_unit__DOT__stall));
    bufp->chgBit(oldp+281,(vlSelf->top__DOT__hazard_unit__DOT__flush));
    bufp->chgBit(oldp+282,(vlSelf->top__DOT__hazard_unit__DOT__flushDE));
    bufp->chgIData(oldp+283,(vlSelf->top__DOT__instruction_memory__DOT__PC),32);
    bufp->chgIData(oldp+284,(vlSelf->top__DOT__instruction_memory__DOT__instr),32);
    bufp->chgBit(oldp+285,(vlSelf->top__DOT__pipeline_DE__DOT__clk));
    bufp->chgBit(oldp+286,(vlSelf->top__DOT__pipeline_DE__DOT__flushBranch));
    bufp->chgBit(oldp+287,(vlSelf->top__DOT__pipeline_DE__DOT__MemReadD));
    bufp->chgBit(oldp+288,(vlSelf->top__DOT__pipeline_DE__DOT__MemReadE));
    bufp->chgBit(oldp+289,(vlSelf->top__DOT__pipeline_DE__DOT__RegWriteD));
    bufp->chgBit(oldp+290,(vlSelf->top__DOT__pipeline_DE__DOT__RegWriteE));
    bufp->chgCData(oldp+291,(vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcD),2);
    bufp->chgCData(oldp+292,(vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcE),2);
    bufp->chgBit(oldp+293,(vlSelf->top__DOT__pipeline_DE__DOT__MemWriteD));
    bufp->chgBit(oldp+294,(vlSelf->top__DOT__pipeline_DE__DOT__MemWriteE));
    bufp->chgBit(oldp+295,(vlSelf->top__DOT__pipeline_DE__DOT__JumpD));
    bufp->chgBit(oldp+296,(vlSelf->top__DOT__pipeline_DE__DOT__JumpE));
    bufp->chgBit(oldp+297,(vlSelf->top__DOT__pipeline_DE__DOT__BranchD));
    bufp->chgBit(oldp+298,(vlSelf->top__DOT__pipeline_DE__DOT__BranchE));
    bufp->chgBit(oldp+299,(vlSelf->top__DOT__pipeline_DE__DOT__JALRD));
    bufp->chgBit(oldp+300,(vlSelf->top__DOT__pipeline_DE__DOT__JALRE));
    bufp->chgCData(oldp+301,(vlSelf->top__DOT__pipeline_DE__DOT__ALUControlD),4);
    bufp->chgCData(oldp+302,(vlSelf->top__DOT__pipeline_DE__DOT__ALUControlE),4);
    bufp->chgBit(oldp+303,(vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcD));
    bufp->chgBit(oldp+304,(vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcE));
    bufp->chgIData(oldp+305,(vlSelf->top__DOT__pipeline_DE__DOT__RD1),32);
    bufp->chgIData(oldp+306,(vlSelf->top__DOT__pipeline_DE__DOT__RD1E),32);
    bufp->chgIData(oldp+307,(vlSelf->top__DOT__pipeline_DE__DOT__RD2),32);
    bufp->chgIData(oldp+308,(vlSelf->top__DOT__pipeline_DE__DOT__RD2E),32);
    bufp->chgIData(oldp+309,(vlSelf->top__DOT__pipeline_DE__DOT__PCD),32);
    bufp->chgIData(oldp+310,(vlSelf->top__DOT__pipeline_DE__DOT__PCE),32);
    bufp->chgCData(oldp+311,(vlSelf->top__DOT__pipeline_DE__DOT__Rs1D),5);
    bufp->chgCData(oldp+312,(vlSelf->top__DOT__pipeline_DE__DOT__Rs1E),5);
    bufp->chgCData(oldp+313,(vlSelf->top__DOT__pipeline_DE__DOT__Rs2D),5);
    bufp->chgCData(oldp+314,(vlSelf->top__DOT__pipeline_DE__DOT__Rs2E),5);
    bufp->chgCData(oldp+315,(vlSelf->top__DOT__pipeline_DE__DOT__RdD),5);
    bufp->chgCData(oldp+316,(vlSelf->top__DOT__pipeline_DE__DOT__RdE),5);
    bufp->chgIData(oldp+317,(vlSelf->top__DOT__pipeline_DE__DOT__ExtImmD),32);
    bufp->chgIData(oldp+318,(vlSelf->top__DOT__pipeline_DE__DOT__ExtImmE),32);
    bufp->chgIData(oldp+319,(vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4D),32);
    bufp->chgIData(oldp+320,(vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4E),32);
    bufp->chgCData(oldp+321,(vlSelf->top__DOT__pipeline_DE__DOT__modeAddrD),3);
    bufp->chgCData(oldp+322,(vlSelf->top__DOT__pipeline_DE__DOT__modeAddrE),3);
    bufp->chgIData(oldp+323,(vlSelf->top__DOT__pipeline_DE__DOT__InstrD),32);
    bufp->chgIData(oldp+324,(vlSelf->top__DOT__pipeline_DE__DOT__InstrE),32);
    bufp->chgBit(oldp+325,(vlSelf->top__DOT__pipeline_EM__DOT__clk));
    bufp->chgBit(oldp+326,(vlSelf->top__DOT__pipeline_EM__DOT__RegWriteE));
    bufp->chgBit(oldp+327,(vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM));
    bufp->chgCData(oldp+328,(vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcE),2);
    bufp->chgCData(oldp+329,(vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM),2);
    bufp->chgBit(oldp+330,(vlSelf->top__DOT__pipeline_EM__DOT__MemWriteE));
    bufp->chgBit(oldp+331,(vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM));
    bufp->chgIData(oldp+332,(vlSelf->top__DOT__pipeline_EM__DOT__ALUResultE),32);
    bufp->chgIData(oldp+333,(vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM),32);
    bufp->chgIData(oldp+334,(vlSelf->top__DOT__pipeline_EM__DOT__WriteDataE),32);
    bufp->chgIData(oldp+335,(vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM),32);
    bufp->chgCData(oldp+336,(vlSelf->top__DOT__pipeline_EM__DOT__RdE),5);
    bufp->chgCData(oldp+337,(vlSelf->top__DOT__pipeline_EM__DOT__RdM),5);
    bufp->chgIData(oldp+338,(vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4E),32);
    bufp->chgIData(oldp+339,(vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M),32);
    bufp->chgCData(oldp+340,(vlSelf->top__DOT__pipeline_EM__DOT__modeAddrE),3);
    bufp->chgCData(oldp+341,(vlSelf->top__DOT__pipeline_EM__DOT__modeAddrM),3);
    bufp->chgBit(oldp+342,(vlSelf->top__DOT__pipeline_EM__DOT__MemReadE));
    bufp->chgBit(oldp+343,(vlSelf->top__DOT__pipeline_EM__DOT__MemReadM));
    bufp->chgIData(oldp+344,(vlSelf->top__DOT__pipeline_EM__DOT__InstrE),32);
    bufp->chgIData(oldp+345,(vlSelf->top__DOT__pipeline_EM__DOT__InstrM),32);
    bufp->chgBit(oldp+346,(vlSelf->top__DOT__pipeline_FD__DOT__clk));
    bufp->chgBit(oldp+347,(vlSelf->top__DOT__pipeline_FD__DOT__flush));
    bufp->chgBit(oldp+348,(vlSelf->top__DOT__pipeline_FD__DOT__stall));
    bufp->chgIData(oldp+349,(vlSelf->top__DOT__pipeline_FD__DOT__RD),32);
    bufp->chgIData(oldp+350,(vlSelf->top__DOT__pipeline_FD__DOT__InstrD),32);
    bufp->chgIData(oldp+351,(vlSelf->top__DOT__pipeline_FD__DOT__PCF),32);
    bufp->chgIData(oldp+352,(vlSelf->top__DOT__pipeline_FD__DOT__PCD),32);
    bufp->chgIData(oldp+353,(vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4F),32);
    bufp->chgIData(oldp+354,(vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4D),32);
    bufp->chgBit(oldp+355,(vlSelf->top__DOT__pipeline_MW__DOT__clk));
    bufp->chgBit(oldp+356,(vlSelf->top__DOT__pipeline_MW__DOT__RegWriteM));
    bufp->chgBit(oldp+357,(vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW));
    bufp->chgCData(oldp+358,(vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcM),2);
    bufp->chgCData(oldp+359,(vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW),2);
    bufp->chgIData(oldp+360,(vlSelf->top__DOT__pipeline_MW__DOT__ALUResultM),32);
    bufp->chgIData(oldp+361,(vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW),32);
    bufp->chgIData(oldp+362,(vlSelf->top__DOT__pipeline_MW__DOT__ReadDataM),32);
    bufp->chgIData(oldp+363,(vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW),32);
    bufp->chgCData(oldp+364,(vlSelf->top__DOT__pipeline_MW__DOT__RdM),5);
    bufp->chgCData(oldp+365,(vlSelf->top__DOT__pipeline_MW__DOT__RdW),5);
    bufp->chgIData(oldp+366,(vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4M),32);
    bufp->chgIData(oldp+367,(vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W),32);
    bufp->chgIData(oldp+368,(vlSelf->top__DOT__pipeline_MW__DOT__InstrM),32);
    bufp->chgIData(oldp+369,(vlSelf->top__DOT__pipeline_MW__DOT__InstrW),32);
    bufp->chgBit(oldp+370,(vlSelf->top__DOT__program_counter__DOT__clk));
    bufp->chgBit(oldp+371,(vlSelf->top__DOT__program_counter__DOT__rst));
    bufp->chgIData(oldp+372,(vlSelf->top__DOT__program_counter__DOT__PC),32);
    bufp->chgBit(oldp+373,(vlSelf->top__DOT__program_counter__DOT__stall));
    bufp->chgIData(oldp+374,(vlSelf->top__DOT__program_counter__DOT__PCF),32);
    bufp->chgBit(oldp+375,(vlSelf->top__DOT__regfile__DOT__clk));
    bufp->chgCData(oldp+376,(vlSelf->top__DOT__regfile__DOT__AD1),5);
    bufp->chgCData(oldp+377,(vlSelf->top__DOT__regfile__DOT__AD2),5);
    bufp->chgCData(oldp+378,(vlSelf->top__DOT__regfile__DOT__AD3),5);
    bufp->chgBit(oldp+379,(vlSelf->top__DOT__regfile__DOT__WE3));
    bufp->chgIData(oldp+380,(vlSelf->top__DOT__regfile__DOT__WD3),32);
    bufp->chgIData(oldp+381,(vlSelf->top__DOT__regfile__DOT__RD1),32);
    bufp->chgIData(oldp+382,(vlSelf->top__DOT__regfile__DOT__RD2),32);
    bufp->chgIData(oldp+383,(vlSelf->top__DOT__regfile__DOT__a0),32);
    bufp->chgIData(oldp+384,(vlSelf->top__DOT__regfile__DOT__a1),32);
    bufp->chgIData(oldp+385,(vlSelf->top__DOT__regfile__DOT__a2),32);
    bufp->chgIData(oldp+386,(vlSelf->top__DOT__regfile__DOT__a3),32);
    bufp->chgIData(oldp+387,(vlSelf->top__DOT__regfile__DOT__a4),32);
    bufp->chgIData(oldp+388,(vlSelf->top__DOT__regfile__DOT__a5),32);
    bufp->chgIData(oldp+389,(vlSelf->top__DOT__regfile__DOT__a6),32);
    bufp->chgIData(oldp+390,(vlSelf->top__DOT__regfile__DOT__a7),32);
    bufp->chgIData(oldp+391,(vlSelf->top__DOT__regfile__DOT__t0),32);
    bufp->chgIData(oldp+392,(vlSelf->top__DOT__regfile__DOT__t1),32);
    bufp->chgIData(oldp+393,(vlSelf->top__DOT__regfile__DOT__t2),32);
    bufp->chgIData(oldp+394,(vlSelf->top__DOT__regfile__DOT__t3),32);
    bufp->chgIData(oldp+395,(vlSelf->top__DOT__regfile__DOT__t4),32);
    bufp->chgIData(oldp+396,(vlSelf->top__DOT__regfile__DOT__t5),32);
    bufp->chgIData(oldp+397,(vlSelf->top__DOT__regfile__DOT__t6),32);
    bufp->chgIData(oldp+398,(vlSelf->top__DOT__regfile__DOT__s0),32);
    bufp->chgIData(oldp+399,(vlSelf->top__DOT__regfile__DOT__s1),32);
    bufp->chgIData(oldp+400,(vlSelf->top__DOT__regfile__DOT__s2),32);
    bufp->chgIData(oldp+401,(vlSelf->top__DOT__regfile__DOT__s3),32);
    bufp->chgIData(oldp+402,(vlSelf->top__DOT__regfile__DOT__s4),32);
    bufp->chgIData(oldp+403,(vlSelf->top__DOT__regfile__DOT__s5),32);
    bufp->chgIData(oldp+404,(vlSelf->top__DOT__regfile__DOT__s6),32);
    bufp->chgIData(oldp+405,(vlSelf->top__DOT__regfile__DOT__s7),32);
    bufp->chgIData(oldp+406,(vlSelf->top__DOT__regfile__DOT__s8),32);
    bufp->chgIData(oldp+407,(vlSelf->top__DOT__regfile__DOT__s9),32);
    bufp->chgIData(oldp+408,(vlSelf->top__DOT__regfile__DOT__s10),32);
    bufp->chgIData(oldp+409,(vlSelf->top__DOT__regfile__DOT__s11),32);
    bufp->chgIData(oldp+410,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
    bufp->chgIData(oldp+411,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
    bufp->chgIData(oldp+412,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
    bufp->chgIData(oldp+413,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
    bufp->chgIData(oldp+414,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
    bufp->chgIData(oldp+415,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
    bufp->chgIData(oldp+416,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
    bufp->chgIData(oldp+417,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
    bufp->chgIData(oldp+418,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
    bufp->chgIData(oldp+419,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
    bufp->chgIData(oldp+420,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
    bufp->chgIData(oldp+421,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
    bufp->chgIData(oldp+422,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
    bufp->chgIData(oldp+423,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
    bufp->chgIData(oldp+424,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
    bufp->chgIData(oldp+425,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
    bufp->chgIData(oldp+426,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
    bufp->chgIData(oldp+427,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
    bufp->chgIData(oldp+428,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
    bufp->chgIData(oldp+429,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
    bufp->chgIData(oldp+430,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
    bufp->chgIData(oldp+431,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
    bufp->chgIData(oldp+432,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
    bufp->chgIData(oldp+433,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
    bufp->chgIData(oldp+434,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
    bufp->chgIData(oldp+435,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
    bufp->chgIData(oldp+436,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
    bufp->chgIData(oldp+437,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
    bufp->chgIData(oldp+438,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
    bufp->chgIData(oldp+439,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
    bufp->chgIData(oldp+440,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
    bufp->chgIData(oldp+441,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    bufp->chgCData(oldp+442,(vlSelf->top__DOT__regfile_mux__DOT__sel),2);
    bufp->chgIData(oldp+443,(vlSelf->top__DOT__regfile_mux__DOT__in0),32);
    bufp->chgIData(oldp+444,(vlSelf->top__DOT__regfile_mux__DOT__in1),32);
    bufp->chgIData(oldp+445,(vlSelf->top__DOT__regfile_mux__DOT__in2),32);
    bufp->chgIData(oldp+446,(vlSelf->top__DOT__regfile_mux__DOT__out),32);
    bufp->chgCData(oldp+447,(vlSelf->top__DOT__sign_extend__DOT__ImmSrc),3);
    bufp->chgIData(oldp+448,(vlSelf->top__DOT__sign_extend__DOT__ImmInput),32);
    bufp->chgIData(oldp+449,(vlSelf->top__DOT__sign_extend__DOT__ImmExt),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
