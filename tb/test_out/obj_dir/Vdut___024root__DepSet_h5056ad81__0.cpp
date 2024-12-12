// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vdut__ConstPool__TABLE_h2f1e8d19_0;

VL_INLINE_OPT void Vdut___024root___sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*65:0*/ __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch;
    VlWide<3>/*65:0*/ __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch;
    CData/*6:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdly__top__DOT__branch_prediction_unit__DOT__queue_count;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__branch_prediction_unit__DOT__branch_queue__v0;
    VlWide<3>/*65:0*/ __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__branch_prediction_unit__DOT__branch_queue__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11;
    // Body
    __Vdly__top__DOT__branch_prediction_unit__DOT__queue_count 
        = vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count;
    __Vdlyvset__top__DOT__branch_prediction_unit__DOT__branch_queue__v0 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11 = 0U;
    vlSelf->top__DOT__InstrW = vlSelf->top__DOT__InstrW;
    vlSelf->top__DOT__InstrM = vlSelf->top__DOT__InstrE;
    vlSelf->top__DOT__JALRE = ((~ (IData)(vlSelf->top__DOT__flushDE)) 
                               & (0x67U == (0x7fU & vlSelf->top__DOT__InstrD)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__flushDE)))) {
        vlSelf->top__DOT__ALUControlE = vlSelf->top__DOT__ALUControlD;
        vlSelf->top__DOT__PCE = vlSelf->top__DOT__PCD;
        vlSelf->top__DOT__ExtImmE = vlSelf->top__DOT__ExtImmD;
        vlSelf->top__DOT__ALUSrcE = (1U & ((0x40U & vlSelf->top__DOT__InstrD)
                                            ? (1U & 
                                               ((0x20U 
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
                                            : (IData)(
                                                      (0x33U 
                                                       != 
                                                       (0x3fU 
                                                        & vlSelf->top__DOT__InstrD)))));
        vlSelf->top__DOT__RD1E = vlSelf->top__DOT__regfile__DOT__registerfile_array
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0xfU))];
        vlSelf->top__DOT__Rs1E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0xfU));
        vlSelf->top__DOT__RD2E = vlSelf->top__DOT__regfile__DOT__registerfile_array
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0x14U))];
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__InstrF)) 
         & (~ (IData)(vlSelf->top__DOT__JumpE)))) {
        __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[0U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U];
        __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[1U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U];
        __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[2U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[2U];
        if (VL_LIKELY((0x10U > (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)))) {
            __Vdly__top__DOT__branch_prediction_unit__DOT__queue_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)));
            __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[0U] 
                = __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[0U];
            __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[1U] 
                = __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[1U];
            __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[2U] 
                = __Vtask_top__DOT__branch_prediction_unit__DOT__enqueue__0__branch[2U];
            __Vdlyvset__top__DOT__branch_prediction_unit__DOT__branch_queue__v0 = 1U;
            __Vdlyvdim0__top__DOT__branch_prediction_unit__DOT__branch_queue__v0 
                = vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back;
            vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back)));
        } else {
            VL_WRITEF("Error: Branch queue is full\n");
        }
    }
    if (((IData)(vlSelf->top__DOT__BranchE) & (0U < (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)))) {
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
            = __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[0U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
            = __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[1U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
            = __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[2U];
        if ((2U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U])) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
                = (3U & (((IData)(vlSelf->top__DOT__Zero) 
                          == (1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                          : ((IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter) 
                             - (IData)(1U))));
        } else {
            vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
                = (3U & (((IData)(vlSelf->top__DOT__Zero) 
                          == (1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                          : ((IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter) 
                             - (IData)(1U))));
        }
        if (VL_LIKELY((0U < (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)))) {
            __Vdly__top__DOT__branch_prediction_unit__DOT__queue_count 
                = (0x1fU & ((IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count) 
                            - (IData)(1U)));
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[0U] 
                = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
                [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][0U];
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[1U] 
                = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
                [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][1U];
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[2U] 
                = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
                [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][2U];
            vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front)));
        } else {
            VL_WRITEF("Error: Branch queue is empty\n");
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[0U] = 0U;
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[1U] = 0U;
            __Vtask_top__DOT__branch_prediction_unit__DOT__dequeue__1__branch[2U] = 0U;
        }
    }
    vlSelf->top__DOT__ResultSrcW = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__MemReadM = vlSelf->top__DOT__MemReadE;
    vlSelf->top__DOT__PCPlus4W = vlSelf->top__DOT__PCPlus4M;
    vlSelf->top__DOT__ReadDataW = vlSelf->top__DOT__ReadDataM;
    vlSelf->top__DOT__RegWriteW = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__RdW = vlSelf->top__DOT__RdM;
    vlSelf->top__DOT__ALUResultW = vlSelf->top__DOT__ALUResultM;
    if (vlSelf->top__DOT__MemWriteM) {
        if ((4U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7 
                = (vlSelf->top__DOT__WriteDataM >> 0x18U);
            __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 1U;
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7 
                = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 8U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10 
                = (0xffU & vlSelf->top__DOT__WriteDataM);
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResultM));
        } else {
            __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11 = 1U;
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11 
                = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
        }
    }
    if (__Vdlyvset__top__DOT__branch_prediction_unit__DOT__branch_queue__v0) {
        vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue[__Vdlyvdim0__top__DOT__branch_prediction_unit__DOT__branch_queue__v0][0U] 
            = __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[0U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue[__Vdlyvdim0__top__DOT__branch_prediction_unit__DOT__branch_queue__v0][1U] 
            = __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[1U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue[__Vdlyvdim0__top__DOT__branch_prediction_unit__DOT__branch_queue__v0][2U] 
            = __Vdlyvval__top__DOT__branch_prediction_unit__DOT__branch_queue__v0[2U];
    }
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count 
        = __Vdly__top__DOT__branch_prediction_unit__DOT__queue_count;
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0] = 0U;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11] = 0U;
    }
    vlSelf->top__DOT__BranchE = (((~ (IData)(vlSelf->top__DOT__flushDE)) 
                                  & (0x60U == (0x78U 
                                               & vlSelf->top__DOT__InstrD))) 
                                 & ((4U & vlSelf->top__DOT__InstrD)
                                     ? ((vlSelf->top__DOT__InstrD 
                                         >> 1U) & vlSelf->top__DOT__InstrD)
                                     : ((vlSelf->top__DOT__InstrD 
                                         >> 1U) & vlSelf->top__DOT__InstrD)));
    vlSelf->top__DOT__JumpE = (((~ (IData)(vlSelf->top__DOT__flushDE)) 
                                & (0x60U == (0x70U 
                                             & vlSelf->top__DOT__InstrD))) 
                               & ((8U & vlSelf->top__DOT__InstrD)
                                   ? (IData)((7U == 
                                              (7U & vlSelf->top__DOT__InstrD)))
                                   : (IData)((7U == 
                                              (7U & vlSelf->top__DOT__InstrD)))));
    vlSelf->top__DOT__ResultSrcM = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__PCPlus4M = vlSelf->top__DOT__PCPlus4E;
    vlSelf->top__DOT__RegWriteM = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__RdM = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__ResultW = ((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PCPlus4W
                                          : vlSelf->top__DOT__ALUResultW)));
    vlSelf->top__DOT__MemWriteM = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__WriteDataM = vlSelf->top__DOT__WriteDataE;
    vlSelf->top__DOT__modeAddrM = vlSelf->top__DOT__modeAddrE;
    if ((1U & (~ (IData)(vlSelf->top__DOT__flushDE)))) {
        vlSelf->top__DOT__Rs2E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0x14U));
        vlSelf->top__DOT__InstrE = vlSelf->top__DOT__InstrD;
        vlSelf->top__DOT__MemReadE = (IData)((3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__InstrD)));
        vlSelf->top__DOT__ResultSrcE = vlSelf->top__DOT__ResultSrcD;
        vlSelf->top__DOT__PCPlus4E = vlSelf->top__DOT__PCPlus4D;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
            vlSelf->top__DOT__PCD = vlSelf->top__DOT__PCF;
            vlSelf->top__DOT__PCPlus4D = ((IData)(4U) 
                                          + vlSelf->top__DOT__PCF);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__flushDE)))) {
        vlSelf->top__DOT__RdE = (0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U));
        vlSelf->top__DOT__modeAddrE = vlSelf->top__DOT__modeAddrD;
    }
    vlSelf->top__DOT__ALUResultM = vlSelf->top__DOT__ALUResultE;
    vlSelf->top__DOT__RegWriteE = ((~ (IData)(vlSelf->top__DOT__flushDE)) 
                                   & (IData)(vlSelf->top__DOT__RegWriteD));
    vlSelf->top__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelf->top__DOT__MemReadM) & ((IData)(vlSelf->top__DOT__Rs1E) 
                                                 == (IData)(vlSelf->top__DOT__RdM))) 
         & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 3U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs1E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 2U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteW) 
                 & ((IData)(vlSelf->top__DOT__Rs1E) 
                    == (IData)(vlSelf->top__DOT__RdW))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 1U;
    }
    vlSelf->top__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelf->top__DOT__MemReadM) & ((IData)(vlSelf->top__DOT__Rs2E) 
                                                 == (IData)(vlSelf->top__DOT__RdM))) 
         & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 3U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs2E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 2U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteW) 
                 & ((IData)(vlSelf->top__DOT__Rs2E) 
                    == (IData)(vlSelf->top__DOT__RdW))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 1U;
    }
    vlSelf->top__DOT__MemWriteE = ((~ (IData)(vlSelf->top__DOT__flushDE)) 
                                   & (0x23U == (0x7fU 
                                                & vlSelf->top__DOT__InstrD)));
    if (vlSelf->top__DOT__flush) {
        vlSelf->top__DOT__InstrD = 0x7013U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
        vlSelf->top__DOT__InstrD = vlSelf->top__DOT__InstrF;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
        vlSelf->top__DOT__PCF = ((IData)(vlSelf->rst)
                                  ? 0U : ((IData)(vlSelf->top__DOT__BPU_Src)
                                           ? vlSelf->top__DOT__PC_predict
                                           : vlSelf->top__DOT__PC));
    }
    if ((0x40U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0x30U 
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
                                                                     & vlSelf->top__DOT__InstrD)))))));
        if ((0x20U & vlSelf->top__DOT__InstrD)) {
            if ((0x10U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & vlSelf->top__DOT__InstrD)) {
                if ((4U & vlSelf->top__DOT__InstrD)) {
                    if ((2U & vlSelf->top__DOT__InstrD)) {
                        if ((1U & vlSelf->top__DOT__InstrD)) {
                            vlSelf->top__DOT__ResultSrcD = 2U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelf->top__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->top__DOT__InstrD)) {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 2U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 4U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & vlSelf->top__DOT__InstrD)) {
                if ((1U & vlSelf->top__DOT__InstrD)) {
                    vlSelf->top__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 2U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x20U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    ((0x10U 
                                                      == 
                                                      (0x18U 
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
                                                         & vlSelf->top__DOT__InstrD)))));
        if ((0x10U & vlSelf->top__DOT__InstrD)) {
            if ((8U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->top__DOT__InstrD)) {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x10U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & ((~ (vlSelf->top__DOT__InstrD 
                                                 >> 3U)) 
                                             & ((4U 
                                                 & vlSelf->top__DOT__InstrD)
                                                 ? 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)
                                                 : 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD))));
        if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            if ((2U & vlSelf->top__DOT__InstrD)) {
                if ((1U & vlSelf->top__DOT__InstrD)) {
                    vlSelf->top__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    (3U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->top__DOT__InstrD))));
        if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 1U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                vlSelf->top__DOT__ImmSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    }
    vlSelf->top__DOT__modeAddrD = ((IData)(vlSelf->top__DOT__control_unit__DOT__Store)
                                    ? ((0U == (7U & 
                                               (vlSelf->top__DOT__InstrD 
                                                >> 0xcU)))
                                        ? 3U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__InstrD 
                                                     >> 0xcU)))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 0U)))
                                    : ((IData)(vlSelf->top__DOT__control_unit__DOT__Load)
                                        ? ((0x4000U 
                                            & vlSelf->top__DOT__InstrD)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__InstrD)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 4U
                                                    : 5U))
                                            : ((0x2000U 
                                                & vlSelf->top__DOT__InstrD)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 2U
                                                    : 3U)))
                                        : 0U));
    vlSelf->top__DOT__ExtImmD = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                  ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__InstrD 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->top__DOT__InstrD) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__InstrD 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->top__DOT__InstrD 
                                                              >> 0x14U)))))))
                                  : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                      ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                          ? (0xfffff000U 
                                             & vlSelf->top__DOT__InstrD)
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__InstrD 
                                                >> 0x14U)))));
    __Vtableidx1 = ((0x40U & (vlSelf->top__DOT__InstrD 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__InstrD) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__InstrD 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUControlD = Vdut__ConstPool__TABLE_h2f1e8d19_0
        [__Vtableidx1];
    vlSelf->top__DOT__InstrF = ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelf->top__DOT__PCF))] 
                                 << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->top__DOT__PCF))] 
                                               << 0x10U) 
                                              | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__PCF))] 
                                                  << 8U) 
                                                 | vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & vlSelf->top__DOT__PCF)])));
}

VL_INLINE_OPT void Vdut___024root___sequent__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0;
    // Body
    __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    if (vlSelf->top__DOT__RegWriteW) {
        __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (IData)(vlSelf->top__DOT__RdW))
                ? 0U : vlSelf->top__DOT__ResultW);
        __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = vlSelf->top__DOT__RdW;
    }
    if (__Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    }
    vlSelf->a5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelf->a4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelf->a3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelf->a2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelf->a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->s1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelf->t2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelf->t1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelf->t0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->s2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelf->s0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelf->a6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelf->a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->s3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelf->s4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelf->s5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelf->s6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelf->s7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelf->s8 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelf->s9 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelf->s10 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelf->s11 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelf->t3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelf->t4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelf->t5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelf->t6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
}

VL_INLINE_OPT void Vdut___024root___combo__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ReadDataM = ((0x100U == vlSelf->top__DOT__ALUResultM)
                                    ? (IData)(vlSelf->trigger)
                                    : ((4U & (IData)(vlSelf->top__DOT__modeAddrM))
                                        ? ((2U & (IData)(vlSelf->top__DOT__modeAddrM))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->top__DOT__modeAddrM))
                                             ? vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1ffffU 
                                              & vlSelf->top__DOT__ALUResultM)]
                                             : ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelf->top__DOT__ALUResultM)])))
                                        : ((2U & (IData)(vlSelf->top__DOT__modeAddrM))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__modeAddrM))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                                   [
                                                                   (0x1ffffU 
                                                                    & vlSelf->top__DOT__ALUResultM)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->top__DOT__ALUResultM)])
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                                   [
                                                                   (0x1ffffU 
                                                                    & vlSelf->top__DOT__ALUResultM)] 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->top__DOT__ALUResultM))] 
                                                       << 8U) 
                                                      | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->top__DOT__ALUResultM)])))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__modeAddrM))
                                                ? (
                                                   (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->top__DOT__ALUResultM))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->top__DOT__ALUResultM))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->top__DOT__ALUResultM))] 
                                                          << 8U) 
                                                         | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & vlSelf->top__DOT__ALUResultM)])))
                                                : 0U))));
    vlSelf->top__DOT__SrcAE = ((2U & (IData)(vlSelf->top__DOT__ForwardAE))
                                ? ((1U & (IData)(vlSelf->top__DOT__ForwardAE))
                                    ? vlSelf->top__DOT__ReadDataM
                                    : vlSelf->top__DOT__ALUResultM)
                                : ((1U & (IData)(vlSelf->top__DOT__ForwardAE))
                                    ? vlSelf->top__DOT__ResultW
                                    : vlSelf->top__DOT__RD1E));
    vlSelf->top__DOT__WriteDataE = ((2U & (IData)(vlSelf->top__DOT__ForwardBE))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ReadDataM
                                         : vlSelf->top__DOT__ALUResultM)
                                     : ((1U & (IData)(vlSelf->top__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ResultW
                                         : vlSelf->top__DOT__RD2E));
    vlSelf->top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcE)
                                                ? vlSelf->top__DOT__ExtImmE
                                                : vlSelf->top__DOT__WriteDataE);
    vlSelf->top__DOT__ALUResultE = ((8U & (IData)(vlSelf->top__DOT__ALUControlE))
                                     ? ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  ((vlSelf->top__DOT__SrcAE 
                                                    < vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                    ? 1U
                                                    : 0U))))
                                     : ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                         ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__SrcAE, 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 & vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                         : ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 | vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 ^ vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 - vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 + vlSelf->top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__Zero = (((IData)(vlSelf->top__DOT__ALUControlE) 
                               >> 3U) & ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                          ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  >= vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  < vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 VL_GTES_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 VL_LTS_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                          : (((IData)(vlSelf->top__DOT__ALUControlE) 
                                              >> 1U) 
                                             & ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 != vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 == vlSelf->top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__PC = ((IData)(4U) + vlSelf->top__DOT__PCF);
    if (vlSelf->top__DOT__JumpE) {
        vlSelf->top__DOT__PC = ((IData)(vlSelf->top__DOT__JALRE)
                                 ? vlSelf->top__DOT__ALUResultE
                                 : (vlSelf->top__DOT__PCE 
                                    + vlSelf->top__DOT__ExtImmE));
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__InstrF)) 
         & (~ (IData)(vlSelf->top__DOT__JumpE)))) {
        vlSelf->top__DOT__PC_predict = (vlSelf->top__DOT__PCF 
                                        + (((- (IData)(
                                                       (vlSelf->top__DOT__InstrF 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__InstrF 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top__DOT__InstrF 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__InstrF 
                                                       >> 7U))))));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | (((IData)((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                   << 2U) | (2U & (vlSelf->top__DOT__InstrF 
                                   >> 0x1eU))));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((1U & ((IData)((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                      >> 0x1eU)) | ((2U & ((IData)(
                                                   (((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                                           >> 0x1eU)) 
                                    | ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                                >> 0x20U)) 
                                       << 2U)));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[2U] 
            = (3U & ((1U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                     >> 0x20U)) >> 0x1eU)) 
                     | (2U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                       >> 0x20U)) >> 0x1eU))));
        if ((vlSelf->top__DOT__InstrF >> 0x1fU)) {
            vlSelf->top__DOT__BPU_Src = (2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter));
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = ((0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
                   | (IData)(vlSelf->top__DOT__BPU_Src));
        } else {
            vlSelf->top__DOT__BPU_Src = (2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter));
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = ((0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
                   | (IData)(vlSelf->top__DOT__BPU_Src));
        }
    } else {
        vlSelf->top__DOT__BPU_Src = 0U;
    }
    vlSelf->top__DOT__flushBranch = 0U;
    if (((IData)(vlSelf->top__DOT__BranchE) & (0U < (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)))) {
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][0U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][1U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][2U];
        if (((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelf->top__DOT__Zero))) {
            vlSelf->top__DOT__flushBranch = 1U;
            vlSelf->top__DOT__BPU_Src = 1U;
            vlSelf->top__DOT__PC_predict = ((IData)(vlSelf->top__DOT__Zero)
                                             ? ((vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                 << 0x1eU) 
                                                | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                                   >> 2U))
                                             : ((IData)(4U) 
                                                + (
                                                   (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                      >> 2U))));
        }
    }
    vlSelf->top__DOT__flushDE = ((IData)(vlSelf->top__DOT__flushBranch) 
                                 | (IData)(vlSelf->top__DOT__JumpE));
    vlSelf->top__DOT__stall = ((IData)(vlSelf->top__DOT__MemReadE) 
                               & (((IData)(vlSelf->top__DOT__RdE) 
                                   == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                >> 0xfU))) 
                                  | ((IData)(vlSelf->top__DOT__RdE) 
                                     == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                  >> 0x14U)))));
    vlSelf->top__DOT__flush = (((IData)(vlSelf->top__DOT__stall) 
                                | (IData)(vlSelf->top__DOT__flushBranch)) 
                               | (IData)(vlSelf->top__DOT__JumpE));
}

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdut___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vdut___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vdut___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
