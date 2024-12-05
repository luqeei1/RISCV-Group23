// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"a0", false,-1, 31,0);
    tracep->declBus(c+67,"a1", false,-1, 31,0);
    tracep->declBus(c+68,"a7", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+71,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"a0", false,-1, 31,0);
    tracep->declBus(c+67,"a1", false,-1, 31,0);
    tracep->declBus(c+68,"a7", false,-1, 31,0);
    tracep->declBus(c+3,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+4,"ExtImm", false,-1, 31,0);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+5,"addr", false,-1, 31,0);
    tracep->declBus(c+6,"instr", false,-1, 31,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+8,"A1", false,-1, 4,0);
    tracep->declBus(c+9,"A2", false,-1, 4,0);
    tracep->declBus(c+10,"A3", false,-1, 4,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+12,"RD1", false,-1, 31,0);
    tracep->declBus(c+13,"RD2", false,-1, 31,0);
    tracep->declBus(c+14,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBus(c+16,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declBus(c+18,"modeBU", false,-1, 2,0);
    tracep->declBus(c+19,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->declBus(c+12,"SrcA", false,-1, 31,0);
    tracep->declBus(c+21,"SrcB", false,-1, 31,0);
    tracep->declBus(c+69,"RD", false,-1, 31,0);
    tracep->declBus(c+70,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+72,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"SrcA", false,-1, 31,0);
    tracep->declBus(c+21,"SrcB", false,-1, 31,0);
    tracep->declBus(c+14,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+19,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"Instr", false,-1, 31,0);
    tracep->declBus(c+3,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+16,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declBus(c+14,"ALUCtrl", false,-1, 3,0);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+18,"modeBU", false,-1, 2,0);
    tracep->declBus(c+22,"op", false,-1, 6,0);
    tracep->declBus(c+23,"funct3", false,-1, 14,12);
    tracep->declBit(c+24,"funct7", false,-1);
    tracep->declBus(c+25,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+26,"Store", false,-1);
    tracep->declBit(c+27,"Load", false,-1);
    tracep->pushNamePrefix("alu_decoder ");
    tracep->declBus(c+25,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+28,"op", false,-1);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBit(c+24,"funct7", false,-1);
    tracep->declBus(c+14,"ALUCtrl", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+71,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"modeBU", false,-1, 2,0);
    tracep->declBus(c+16,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBus(c+19,"A", false,-1, 31,0);
    tracep->declBus(c+13,"WD", false,-1, 31,0);
    tracep->declBit(c+17,"WE", false,-1);
    tracep->declBus(c+69,"RD", false,-1, 31,0);
    tracep->declBus(c+70,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBus(c+71,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"addr", false,-1, 31,0);
    tracep->declBus(c+6,"instr", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+71,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+3,"PCSrc", false,-1, 1,0);
    tracep->declBit(c+20,"ZeroE", false,-1);
    tracep->declBus(c+29,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+19,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+30,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+5,"PCF", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+73,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBus(c+8,"AD1", false,-1, 4,0);
    tracep->declBus(c+9,"AD2", false,-1, 4,0);
    tracep->declBus(c+10,"AD3", false,-1, 4,0);
    tracep->declBit(c+11,"WE3", false,-1);
    tracep->declBus(c+70,"WD3", false,-1, 31,0);
    tracep->declBus(c+12,"RD1", false,-1, 31,0);
    tracep->declBus(c+13,"RD2", false,-1, 31,0);
    tracep->declBus(c+66,"a0", false,-1, 31,0);
    tracep->declBus(c+67,"a1", false,-1, 31,0);
    tracep->declBus(c+68,"a7", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,"registerfile_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_mux ");
    tracep->declBus(c+71,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"sel", false,-1, 1,0);
    tracep->declBus(c+19,"in0", false,-1, 31,0);
    tracep->declBus(c+69,"in1", false,-1, 31,0);
    tracep->declBus(c+29,"in2", false,-1, 31,0);
    tracep->declBus(c+70,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+71,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+6,"ImmInput", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__instruction_memory__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__instruction_memory__DOT__rom_array[1]),32);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__PCSrc),2);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__ExtImm),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__instr),32);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__RegWrite));
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__RD2),32);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__ALUctrl),4);
    bufp->fullBit(oldp+15,((1U & ((0x40U & vlSelf->top__DOT__instr)
                                   ? (1U & ((0x20U 
                                             != (0x30U 
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
                                              != (0x3fU 
                                                  & vlSelf->top__DOT__instr)))))));
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__ResultSrc),2);
    bufp->fullBit(oldp+17,((IData)((0x23U == (0x7fU 
                                              & vlSelf->top__DOT__instr)))));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__modeBU),3);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullBit(oldp+20,((((IData)(vlSelf->top__DOT__ALUctrl) 
                             >> 3U) & ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   >= vlSelf->top__DOT__SrcB)
                                                : (vlSelf->top__DOT__RD1 
                                                   < vlSelf->top__DOT__SrcB))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                : VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                        : (((IData)(vlSelf->top__DOT__ALUctrl) 
                                            >> 1U) 
                                           & ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                               ? (vlSelf->top__DOT__RD1 
                                                  != vlSelf->top__DOT__SrcB)
                                               : (vlSelf->top__DOT__RD1 
                                                  == vlSelf->top__DOT__SrcB)))))));
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__SrcB),32);
    bufp->fullCData(oldp+22,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+23,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+24,((1U & (vlSelf->top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__control_unit__DOT__Store));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__control_unit__DOT__Load));
    bufp->fullBit(oldp+28,((1U & (vlSelf->top__DOT__instr 
                                  >> 5U))));
    bufp->fullIData(oldp+29,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT____Vcellinp__pc__PCTarget),32);
    bufp->fullIData(oldp+31,(((2U & (IData)(vlSelf->top__DOT__PCSrc))
                               ? ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                   ? vlSelf->top__DOT__ALUResult
                                   : ((((IData)(vlSelf->top__DOT__ALUctrl) 
                                        >> 3U) & ((4U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->top__DOT__RD1 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     : 
                                                    (vlSelf->top__DOT__RD1 
                                                     < vlSelf->top__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__ALUctrl) 
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
                                   : ((IData)(4U) + vlSelf->top__DOT__PC)))),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__regfile__DOT__registerfile_array[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__regfile__DOT__registerfile_array[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__regfile__DOT__registerfile_array[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__regfile__DOT__registerfile_array[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__regfile__DOT__registerfile_array[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__regfile__DOT__registerfile_array[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__regfile__DOT__registerfile_array[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__regfile__DOT__registerfile_array[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__regfile__DOT__registerfile_array[8]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__regfile__DOT__registerfile_array[9]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__regfile__DOT__registerfile_array[10]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__regfile__DOT__registerfile_array[11]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__regfile__DOT__registerfile_array[12]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__regfile__DOT__registerfile_array[13]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__regfile__DOT__registerfile_array[14]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__regfile__DOT__registerfile_array[15]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__regfile__DOT__registerfile_array[16]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__regfile__DOT__registerfile_array[17]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__regfile__DOT__registerfile_array[18]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__regfile__DOT__registerfile_array[19]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__regfile__DOT__registerfile_array[20]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__regfile__DOT__registerfile_array[21]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__regfile__DOT__registerfile_array[22]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__regfile__DOT__registerfile_array[23]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__regfile__DOT__registerfile_array[24]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__regfile__DOT__registerfile_array[25]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__regfile__DOT__registerfile_array[26]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__regfile__DOT__registerfile_array[27]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__regfile__DOT__registerfile_array[28]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__regfile__DOT__registerfile_array[29]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__regfile__DOT__registerfile_array[30]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__regfile__DOT__registerfile_array[31]),32);
    bufp->fullBit(oldp+64,(vlSelf->clk));
    bufp->fullBit(oldp+65,(vlSelf->rst));
    bufp->fullIData(oldp+66,(vlSelf->a0),32);
    bufp->fullIData(oldp+67,(vlSelf->a1),32);
    bufp->fullIData(oldp+68,(vlSelf->a7),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__RD),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__Result),32);
    bufp->fullIData(oldp+71,(0x20U),32);
    bufp->fullIData(oldp+72,(4U),32);
    bufp->fullIData(oldp+73,(5U),32);
}
