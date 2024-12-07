// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf);
void Vdut___024root___ico_comb__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_req_addr = ((vlSelfRef.cpu_req[2U] 
                               << 0x1aU) | (vlSelfRef.cpu_req[1U] 
                                            >> 6U));
    vlSelfRef.cpu_req_data = ((vlSelfRef.cpu_req[1U] 
                               << 0x1aU) | (vlSelfRef.cpu_req[0U] 
                                            >> 6U));
    vlSelfRef.cpu_req_op = (3U & (vlSelfRef.cpu_req[0U] 
                                  >> 4U));
    vlSelfRef.cpu_req_mode_addr = (7U & (vlSelfRef.cpu_req[0U] 
                                         >> 1U));
    vlSelfRef.mem_resp_ready = (1U & (IData)(vlSelfRef.mem_resp));
}

VL_INLINE_OPT void Vdut___024root___ico_comb__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ico_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_FSM__DOT__next_state = vlSelfRef.cache_FSM__DOT__current_state;
    vlSelfRef.cache_FSM__DOT__next_cpu_resp = 0ULL;
    vlSelfRef.cache_FSM__DOT__next_mem_req[0U] = 0U;
    vlSelfRef.cache_FSM__DOT__next_mem_req[1U] = 0U;
    vlSelfRef.cache_FSM__DOT__next_mem_req[2U] = 0U;
    vlSelfRef.cache_FSM__DOT__cache_line[0U] = vlSelfRef.cache_FSM__DOT__cache_mem
        [(0xffU & (vlSelfRef.cpu_req[1U] >> 9U))][0U];
    vlSelfRef.cache_FSM__DOT__cache_line[1U] = vlSelfRef.cache_FSM__DOT__cache_mem
        [(0xffU & (vlSelfRef.cpu_req[1U] >> 9U))][1U];
    vlSelfRef.cache_FSM__DOT__cache_line[2U] = vlSelfRef.cache_FSM__DOT__cache_mem
        [(0xffU & (vlSelfRef.cpu_req[1U] >> 9U))][2U];
    if ((0U == vlSelfRef.cache_FSM__DOT__current_state)) {
        if ((1U & vlSelfRef.cpu_req[0U])) {
            vlSelfRef.cache_FSM__DOT__next_state = 1U;
        }
    } else if ((1U == vlSelfRef.cache_FSM__DOT__current_state)) {
        if (((vlSelfRef.cache_FSM__DOT__cache_line[2U] 
              >> 0x16U) & ((0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_line[2U]) 
                           == (0x1fffffU & ((vlSelfRef.cpu_req[2U] 
                                             << 0xfU) 
                                            | (vlSelfRef.cpu_req[1U] 
                                               >> 0x11U)))))) {
            vlSelfRef.cache_FSM__DOT__next_cpu_resp 
                = (1ULL | vlSelfRef.cache_FSM__DOT__next_cpu_resp);
            vlSelfRef.cache_FSM__DOT__next_state = 0U;
            if ((0U == (3U & (vlSelfRef.cpu_req[0U] 
                              >> 4U)))) {
                vlSelfRef.cache_FSM__DOT__next_cpu_resp 
                    = ((1ULL & vlSelfRef.cache_FSM__DOT__next_cpu_resp) 
                       | ((QData)((IData)(((0x100U 
                                            & vlSelfRef.cpu_req[1U])
                                            ? vlSelfRef.cache_FSM__DOT__cache_line[1U]
                                            : vlSelfRef.cache_FSM__DOT__cache_line[0U]))) 
                          << 1U));
            } else if ((1U == (3U & (vlSelfRef.cpu_req[0U] 
                                     >> 4U)))) {
                vlSelfRef.cache_FSM__DOT__cache_line[2U] 
                    = (0x200000U | vlSelfRef.cache_FSM__DOT__cache_line[2U]);
                if (((3U == (7U & (vlSelfRef.cpu_req[0U] 
                                   >> 1U))) || (5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.cpu_req[0U] 
                                                    >> 1U))))) {
                    VL_ASSIGNSEL_WI(87,8,(0x3fU & VL_SHIFTL_III(6,32,32, 
                                                                (7U 
                                                                 & (vlSelfRef.cpu_req[1U] 
                                                                    >> 6U)), 3U)), vlSelfRef.cache_FSM__DOT__cache_line, 
                                    (0xffU & (vlSelfRef.cpu_req[0U] 
                                              >> 6U)));
                } else if ((0x100U & vlSelfRef.cpu_req[1U])) {
                    vlSelfRef.cache_FSM__DOT__cache_line[1U] 
                        = ((vlSelfRef.cpu_req[1U] << 0x1aU) 
                           | (vlSelfRef.cpu_req[0U] 
                              >> 6U));
                } else {
                    vlSelfRef.cache_FSM__DOT__cache_line[0U] 
                        = ((vlSelfRef.cpu_req[1U] << 0x1aU) 
                           | (vlSelfRef.cpu_req[0U] 
                              >> 6U));
                }
                vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                     & (vlSelfRef.cpu_req[1U] 
                                                        >> 9U))][0U] 
                    = vlSelfRef.cache_FSM__DOT__cache_line[0U];
                vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                     & (vlSelfRef.cpu_req[1U] 
                                                        >> 9U))][1U] 
                    = vlSelfRef.cache_FSM__DOT__cache_line[1U];
                vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                     & (vlSelfRef.cpu_req[1U] 
                                                        >> 9U))][2U] 
                    = vlSelfRef.cache_FSM__DOT__cache_line[2U];
            }
        } else {
            vlSelfRef.cache_FSM__DOT__current_addr 
                = (0xfffffff8U & ((vlSelfRef.cpu_req[2U] 
                                   << 0x1aU) | (0x3fffff8U 
                                                & (vlSelfRef.cpu_req[1U] 
                                                   >> 6U))));
            vlSelfRef.cache_FSM__DOT__next_mem_req[0U] = 0x23U;
            vlSelfRef.cache_FSM__DOT__next_mem_req[1U] 
                = (0xffffffc0U & vlSelfRef.cpu_req[1U]);
            vlSelfRef.cache_FSM__DOT__next_mem_req[2U] 
                = (0x3fU & vlSelfRef.cpu_req[2U]);
            vlSelfRef.cache_FSM__DOT__next_state = 
                ((IData)((0x600000U != (0x600000U & 
                                        vlSelfRef.cache_FSM__DOT__cache_line[2U])))
                  ? 2U : 3U);
        }
    } else if ((2U == vlSelfRef.cache_FSM__DOT__current_state)) {
        if ((1U & (IData)(vlSelfRef.mem_resp))) {
            vlSelfRef.cache_FSM__DOT__current_addr 
                = ((IData)(4U) + vlSelfRef.cache_FSM__DOT__current_addr);
            vlSelfRef.cache_FSM__DOT__cache_line[0U] 
                = (IData)((vlSelfRef.mem_resp >> 1U));
            vlSelfRef.cache_FSM__DOT__next_mem_req[0U] = 0x23U;
            vlSelfRef.cache_FSM__DOT__next_mem_req[1U] 
                = (vlSelfRef.cache_FSM__DOT__current_addr 
                   << 6U);
            vlSelfRef.cache_FSM__DOT__next_mem_req[2U] 
                = (vlSelfRef.cache_FSM__DOT__current_addr 
                   >> 0x1aU);
            vlSelfRef.cache_FSM__DOT__next_state = 1U;
            vlSelfRef.cache_FSM__DOT__cache_line[1U] 
                = (IData)((0x40000000000000ULL | (((QData)((IData)(
                                                                   (0x1fffffU 
                                                                    & ((vlSelfRef.cpu_req[2U] 
                                                                        << 0xfU) 
                                                                       | (vlSelfRef.cpu_req[1U] 
                                                                          >> 0x11U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelfRef.mem_resp 
                                                                     >> 1U))))));
            vlSelfRef.cache_FSM__DOT__cache_line[2U] 
                = (0x7fffffU & (IData)(((0x40000000000000ULL 
                                         | (((QData)((IData)(
                                                             (0x1fffffU 
                                                              & ((vlSelfRef.cpu_req[2U] 
                                                                  << 0xfU) 
                                                                 | (vlSelfRef.cpu_req[1U] 
                                                                    >> 0x11U))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelfRef.mem_resp 
                                                               >> 1U))))) 
                                        >> 0x20U)));
            vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                 & (vlSelfRef.cpu_req[1U] 
                                                    >> 9U))][0U] 
                = vlSelfRef.cache_FSM__DOT__cache_line[0U];
            vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                 & (vlSelfRef.cpu_req[1U] 
                                                    >> 9U))][1U] 
                = vlSelfRef.cache_FSM__DOT__cache_line[1U];
            vlSelfRef.cache_FSM__DOT__cache_mem[(0xffU 
                                                 & (vlSelfRef.cpu_req[1U] 
                                                    >> 9U))][2U] 
                = vlSelfRef.cache_FSM__DOT__cache_line[2U];
        }
    } else if ((3U == vlSelfRef.cache_FSM__DOT__current_state)) {
        if ((1U & (IData)(vlSelfRef.mem_resp))) {
            vlSelfRef.cache_FSM__DOT__next_mem_req[0U] 
                = (IData)((0x13ULL | (((QData)((IData)(
                                                       (4U 
                                                        | (0x7f8U 
                                                           & (vlSelfRef.cpu_req[1U] 
                                                              >> 6U))))) 
                                       << 0x26U) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_line[0U])) 
                                       << 6U))));
            vlSelfRef.cache_FSM__DOT__next_mem_req[1U] 
                = ((0xfffe0000U & vlSelfRef.cache_FSM__DOT__next_mem_req[1U]) 
                   | (IData)(((0x13ULL | (((QData)((IData)(
                                                           (4U 
                                                            | (0x7f8U 
                                                               & (vlSelfRef.cpu_req[1U] 
                                                                  >> 6U))))) 
                                           << 0x26U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.cache_FSM__DOT__cache_line[0U])) 
                                             << 6U))) 
                              >> 0x20U)));
            vlSelfRef.cache_FSM__DOT__next_mem_req[1U] 
                = ((0x1ffffU & vlSelfRef.cache_FSM__DOT__next_mem_req[1U]) 
                   | (vlSelfRef.cache_FSM__DOT__cache_line[2U] 
                      << 0x11U));
            vlSelfRef.cache_FSM__DOT__next_mem_req[2U] 
                = (0x3fU & (vlSelfRef.cache_FSM__DOT__cache_line[2U] 
                            >> 0xfU));
            vlSelfRef.cache_FSM__DOT__next_state = 2U;
        }
    }
    vlSelfRef.mem_req[0U] = vlSelfRef.cache_FSM__DOT__next_mem_req[0U];
    vlSelfRef.mem_req[1U] = vlSelfRef.cache_FSM__DOT__next_mem_req[1U];
    vlSelfRef.mem_req[2U] = vlSelfRef.cache_FSM__DOT__next_mem_req[2U];
    vlSelfRef.cpu_resp = vlSelfRef.cache_FSM__DOT__next_cpu_resp;
    vlSelfRef.cpu_resp_data = (IData)((vlSelfRef.cache_FSM__DOT__next_cpu_resp 
                                       >> 1U));
    vlSelfRef.cpu_resp_ready = (1U & (IData)(vlSelfRef.cache_FSM__DOT__next_cpu_resp));
    vlSelfRef.cache_mem_tag[0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [0U][2U]);
    vlSelfRef.cache_mem_tag[1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [1U][2U]);
    vlSelfRef.cache_mem_tag[2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [2U][2U]);
    vlSelfRef.cache_mem_tag[3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [3U][2U]);
    vlSelfRef.cache_mem_tag[4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [4U][2U]);
    vlSelfRef.cache_mem_tag[5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [5U][2U]);
    vlSelfRef.cache_mem_tag[6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [6U][2U]);
    vlSelfRef.cache_mem_tag[7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [7U][2U]);
    vlSelfRef.cache_mem_tag[8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [8U][2U]);
    vlSelfRef.cache_mem_tag[9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                   [9U][2U]);
    vlSelfRef.cache_mem_tag[0xaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xaU][2U]);
    vlSelfRef.cache_mem_tag[0xbU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xbU][2U]);
    vlSelfRef.cache_mem_tag[0xcU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xcU][2U]);
    vlSelfRef.cache_mem_tag[0xdU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xdU][2U]);
    vlSelfRef.cache_mem_tag[0xeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xeU][2U]);
    vlSelfRef.cache_mem_tag[0xfU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                     [0xfU][2U]);
    vlSelfRef.cache_mem_tag[0x10U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x10U][2U]);
    vlSelfRef.cache_mem_tag[0x11U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x11U][2U]);
    vlSelfRef.cache_mem_tag[0x12U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x12U][2U]);
    vlSelfRef.cache_mem_tag[0x13U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x13U][2U]);
    vlSelfRef.cache_mem_tag[0x14U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x14U][2U]);
    vlSelfRef.cache_mem_tag[0x15U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x15U][2U]);
    vlSelfRef.cache_mem_tag[0x16U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x16U][2U]);
    vlSelfRef.cache_mem_tag[0x17U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x17U][2U]);
    vlSelfRef.cache_mem_tag[0x18U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x18U][2U]);
    vlSelfRef.cache_mem_tag[0x19U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x19U][2U]);
    vlSelfRef.cache_mem_tag[0x1aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1aU][2U]);
    vlSelfRef.cache_mem_tag[0x1bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1bU][2U]);
    vlSelfRef.cache_mem_tag[0x1cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1cU][2U]);
    vlSelfRef.cache_mem_tag[0x1dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1dU][2U]);
    vlSelfRef.cache_mem_tag[0x1eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1eU][2U]);
    vlSelfRef.cache_mem_tag[0x1fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x1fU][2U]);
    vlSelfRef.cache_mem_tag[0x20U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x20U][2U]);
    vlSelfRef.cache_mem_tag[0x21U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x21U][2U]);
    vlSelfRef.cache_mem_tag[0x22U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x22U][2U]);
    vlSelfRef.cache_mem_tag[0x23U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x23U][2U]);
    vlSelfRef.cache_mem_tag[0x24U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x24U][2U]);
    vlSelfRef.cache_mem_tag[0x25U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x25U][2U]);
    vlSelfRef.cache_mem_tag[0x26U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x26U][2U]);
    vlSelfRef.cache_mem_tag[0x27U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x27U][2U]);
    vlSelfRef.cache_mem_tag[0x28U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x28U][2U]);
    vlSelfRef.cache_mem_tag[0x29U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x29U][2U]);
    vlSelfRef.cache_mem_tag[0x2aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2aU][2U]);
    vlSelfRef.cache_mem_tag[0x2bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2bU][2U]);
    vlSelfRef.cache_mem_tag[0x2cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2cU][2U]);
    vlSelfRef.cache_mem_tag[0x2dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2dU][2U]);
    vlSelfRef.cache_mem_tag[0x2eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2eU][2U]);
    vlSelfRef.cache_mem_tag[0x2fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x2fU][2U]);
    vlSelfRef.cache_mem_tag[0x30U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x30U][2U]);
    vlSelfRef.cache_mem_tag[0x31U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x31U][2U]);
    vlSelfRef.cache_mem_tag[0x32U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x32U][2U]);
    vlSelfRef.cache_mem_tag[0x33U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x33U][2U]);
    vlSelfRef.cache_mem_tag[0x34U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x34U][2U]);
    vlSelfRef.cache_mem_tag[0x35U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x35U][2U]);
    vlSelfRef.cache_mem_tag[0x36U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x36U][2U]);
    vlSelfRef.cache_mem_tag[0x37U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x37U][2U]);
    vlSelfRef.cache_mem_tag[0x38U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x38U][2U]);
    vlSelfRef.cache_mem_tag[0x39U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x39U][2U]);
    vlSelfRef.cache_mem_tag[0x3aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3aU][2U]);
    vlSelfRef.cache_mem_tag[0x3bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3bU][2U]);
    vlSelfRef.cache_mem_tag[0x3cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3cU][2U]);
    vlSelfRef.cache_mem_tag[0x3dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3dU][2U]);
    vlSelfRef.cache_mem_tag[0x3eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3eU][2U]);
    vlSelfRef.cache_mem_tag[0x3fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x3fU][2U]);
    vlSelfRef.cache_mem_tag[0x40U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x40U][2U]);
    vlSelfRef.cache_mem_tag[0x41U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x41U][2U]);
    vlSelfRef.cache_mem_tag[0x42U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x42U][2U]);
    vlSelfRef.cache_mem_tag[0x43U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x43U][2U]);
    vlSelfRef.cache_mem_tag[0x44U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x44U][2U]);
    vlSelfRef.cache_mem_tag[0x45U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x45U][2U]);
    vlSelfRef.cache_mem_tag[0x46U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x46U][2U]);
    vlSelfRef.cache_mem_tag[0x47U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x47U][2U]);
    vlSelfRef.cache_mem_tag[0x48U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x48U][2U]);
    vlSelfRef.cache_mem_tag[0x49U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x49U][2U]);
    vlSelfRef.cache_mem_tag[0x4aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4aU][2U]);
    vlSelfRef.cache_mem_tag[0x4bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4bU][2U]);
    vlSelfRef.cache_mem_tag[0x4cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4cU][2U]);
    vlSelfRef.cache_mem_tag[0x4dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4dU][2U]);
    vlSelfRef.cache_mem_tag[0x4eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4eU][2U]);
    vlSelfRef.cache_mem_tag[0x4fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x4fU][2U]);
    vlSelfRef.cache_mem_tag[0x50U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x50U][2U]);
    vlSelfRef.cache_mem_tag[0x51U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x51U][2U]);
    vlSelfRef.cache_mem_tag[0x52U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x52U][2U]);
    vlSelfRef.cache_mem_tag[0x53U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x53U][2U]);
    vlSelfRef.cache_mem_tag[0x54U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x54U][2U]);
    vlSelfRef.cache_mem_tag[0x55U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x55U][2U]);
    vlSelfRef.cache_mem_tag[0x56U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x56U][2U]);
    vlSelfRef.cache_mem_tag[0x57U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x57U][2U]);
    vlSelfRef.cache_mem_tag[0x58U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x58U][2U]);
    vlSelfRef.cache_mem_tag[0x59U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x59U][2U]);
    vlSelfRef.cache_mem_tag[0x5aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5aU][2U]);
    vlSelfRef.cache_mem_tag[0x5bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5bU][2U]);
    vlSelfRef.cache_mem_tag[0x5cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5cU][2U]);
    vlSelfRef.cache_mem_tag[0x5dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5dU][2U]);
    vlSelfRef.cache_mem_tag[0x5eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5eU][2U]);
    vlSelfRef.cache_mem_tag[0x5fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x5fU][2U]);
    vlSelfRef.cache_mem_tag[0x60U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x60U][2U]);
    vlSelfRef.cache_mem_tag[0x61U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x61U][2U]);
    vlSelfRef.cache_mem_tag[0x62U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x62U][2U]);
    vlSelfRef.cache_mem_tag[0x63U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x63U][2U]);
    vlSelfRef.cache_mem_tag[0x64U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x64U][2U]);
    vlSelfRef.cache_mem_tag[0x65U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x65U][2U]);
    vlSelfRef.cache_mem_tag[0x66U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x66U][2U]);
    vlSelfRef.cache_mem_tag[0x67U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x67U][2U]);
    vlSelfRef.cache_mem_tag[0x68U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x68U][2U]);
    vlSelfRef.cache_mem_tag[0x69U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x69U][2U]);
    vlSelfRef.cache_mem_tag[0x6aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6aU][2U]);
    vlSelfRef.cache_mem_tag[0x6bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6bU][2U]);
    vlSelfRef.cache_mem_tag[0x6cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6cU][2U]);
    vlSelfRef.cache_mem_tag[0x6dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6dU][2U]);
    vlSelfRef.cache_mem_tag[0x6eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6eU][2U]);
    vlSelfRef.cache_mem_tag[0x6fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x6fU][2U]);
    vlSelfRef.cache_mem_tag[0x70U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x70U][2U]);
    vlSelfRef.cache_mem_tag[0x71U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x71U][2U]);
    vlSelfRef.cache_mem_tag[0x72U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x72U][2U]);
    vlSelfRef.cache_mem_tag[0x73U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x73U][2U]);
    vlSelfRef.cache_mem_tag[0x74U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x74U][2U]);
    vlSelfRef.cache_mem_tag[0x75U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x75U][2U]);
    vlSelfRef.cache_mem_tag[0x76U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x76U][2U]);
    vlSelfRef.cache_mem_tag[0x77U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x77U][2U]);
    vlSelfRef.cache_mem_tag[0x78U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x78U][2U]);
    vlSelfRef.cache_mem_tag[0x79U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x79U][2U]);
    vlSelfRef.cache_mem_tag[0x7aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7aU][2U]);
    vlSelfRef.cache_mem_tag[0x7bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7bU][2U]);
    vlSelfRef.cache_mem_tag[0x7cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7cU][2U]);
    vlSelfRef.cache_mem_tag[0x7dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7dU][2U]);
    vlSelfRef.cache_mem_tag[0x7eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7eU][2U]);
    vlSelfRef.cache_mem_tag[0x7fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x7fU][2U]);
    vlSelfRef.cache_mem_tag[0x80U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x80U][2U]);
    vlSelfRef.cache_mem_tag[0x81U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x81U][2U]);
    vlSelfRef.cache_mem_tag[0x82U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x82U][2U]);
    vlSelfRef.cache_mem_tag[0x83U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x83U][2U]);
    vlSelfRef.cache_mem_tag[0x84U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x84U][2U]);
    vlSelfRef.cache_mem_tag[0x85U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x85U][2U]);
    vlSelfRef.cache_mem_tag[0x86U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x86U][2U]);
    vlSelfRef.cache_mem_tag[0x87U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x87U][2U]);
    vlSelfRef.cache_mem_tag[0x88U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x88U][2U]);
    vlSelfRef.cache_mem_tag[0x89U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x89U][2U]);
    vlSelfRef.cache_mem_tag[0x8aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8aU][2U]);
    vlSelfRef.cache_mem_tag[0x8bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8bU][2U]);
    vlSelfRef.cache_mem_tag[0x8cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8cU][2U]);
    vlSelfRef.cache_mem_tag[0x8dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8dU][2U]);
    vlSelfRef.cache_mem_tag[0x8eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8eU][2U]);
    vlSelfRef.cache_mem_tag[0x8fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x8fU][2U]);
    vlSelfRef.cache_mem_tag[0x90U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x90U][2U]);
    vlSelfRef.cache_mem_tag[0x91U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x91U][2U]);
    vlSelfRef.cache_mem_tag[0x92U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x92U][2U]);
    vlSelfRef.cache_mem_tag[0x93U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x93U][2U]);
    vlSelfRef.cache_mem_tag[0x94U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x94U][2U]);
    vlSelfRef.cache_mem_tag[0x95U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x95U][2U]);
    vlSelfRef.cache_mem_tag[0x96U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x96U][2U]);
    vlSelfRef.cache_mem_tag[0x97U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x97U][2U]);
    vlSelfRef.cache_mem_tag[0x98U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x98U][2U]);
    vlSelfRef.cache_mem_tag[0x99U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x99U][2U]);
    vlSelfRef.cache_mem_tag[0x9aU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9aU][2U]);
    vlSelfRef.cache_mem_tag[0x9bU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9bU][2U]);
    vlSelfRef.cache_mem_tag[0x9cU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9cU][2U]);
    vlSelfRef.cache_mem_tag[0x9dU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9dU][2U]);
    vlSelfRef.cache_mem_tag[0x9eU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9eU][2U]);
    vlSelfRef.cache_mem_tag[0x9fU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0x9fU][2U]);
    vlSelfRef.cache_mem_tag[0xa0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa0U][2U]);
    vlSelfRef.cache_mem_tag[0xa1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa1U][2U]);
    vlSelfRef.cache_mem_tag[0xa2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa2U][2U]);
    vlSelfRef.cache_mem_tag[0xa3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa3U][2U]);
    vlSelfRef.cache_mem_tag[0xa4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa4U][2U]);
    vlSelfRef.cache_mem_tag[0xa5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa5U][2U]);
    vlSelfRef.cache_mem_tag[0xa6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa6U][2U]);
    vlSelfRef.cache_mem_tag[0xa7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa7U][2U]);
    vlSelfRef.cache_mem_tag[0xa8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa8U][2U]);
    vlSelfRef.cache_mem_tag[0xa9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xa9U][2U]);
    vlSelfRef.cache_mem_tag[0xaaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xaaU][2U]);
    vlSelfRef.cache_mem_tag[0xabU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xabU][2U]);
    vlSelfRef.cache_mem_tag[0xacU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xacU][2U]);
    vlSelfRef.cache_mem_tag[0xadU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xadU][2U]);
    vlSelfRef.cache_mem_tag[0xaeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xaeU][2U]);
    vlSelfRef.cache_mem_tag[0xafU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xafU][2U]);
    vlSelfRef.cache_mem_tag[0xb0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb0U][2U]);
    vlSelfRef.cache_mem_tag[0xb1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb1U][2U]);
    vlSelfRef.cache_mem_tag[0xb2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb2U][2U]);
    vlSelfRef.cache_mem_tag[0xb3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb3U][2U]);
    vlSelfRef.cache_mem_tag[0xb4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb4U][2U]);
    vlSelfRef.cache_mem_tag[0xb5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb5U][2U]);
    vlSelfRef.cache_mem_tag[0xb6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb6U][2U]);
    vlSelfRef.cache_mem_tag[0xb7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb7U][2U]);
    vlSelfRef.cache_mem_tag[0xb8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb8U][2U]);
    vlSelfRef.cache_mem_tag[0xb9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xb9U][2U]);
    vlSelfRef.cache_mem_tag[0xbaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbaU][2U]);
    vlSelfRef.cache_mem_tag[0xbbU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbbU][2U]);
    vlSelfRef.cache_mem_tag[0xbcU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbcU][2U]);
    vlSelfRef.cache_mem_tag[0xbdU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbdU][2U]);
    vlSelfRef.cache_mem_tag[0xbeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbeU][2U]);
    vlSelfRef.cache_mem_tag[0xbfU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xbfU][2U]);
    vlSelfRef.cache_mem_tag[0xc0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc0U][2U]);
    vlSelfRef.cache_mem_tag[0xc1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc1U][2U]);
    vlSelfRef.cache_mem_tag[0xc2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc2U][2U]);
    vlSelfRef.cache_mem_tag[0xc3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc3U][2U]);
    vlSelfRef.cache_mem_tag[0xc4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc4U][2U]);
    vlSelfRef.cache_mem_tag[0xc5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc5U][2U]);
    vlSelfRef.cache_mem_tag[0xc6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc6U][2U]);
    vlSelfRef.cache_mem_tag[0xc7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc7U][2U]);
    vlSelfRef.cache_mem_tag[0xc8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc8U][2U]);
    vlSelfRef.cache_mem_tag[0xc9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xc9U][2U]);
    vlSelfRef.cache_mem_tag[0xcaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xcaU][2U]);
    vlSelfRef.cache_mem_tag[0xcbU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xcbU][2U]);
    vlSelfRef.cache_mem_tag[0xccU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xccU][2U]);
    vlSelfRef.cache_mem_tag[0xcdU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xcdU][2U]);
    vlSelfRef.cache_mem_tag[0xceU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xceU][2U]);
    vlSelfRef.cache_mem_tag[0xcfU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xcfU][2U]);
    vlSelfRef.cache_mem_tag[0xd0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd0U][2U]);
    vlSelfRef.cache_mem_tag[0xd1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd1U][2U]);
    vlSelfRef.cache_mem_tag[0xd2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd2U][2U]);
    vlSelfRef.cache_mem_tag[0xd3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd3U][2U]);
    vlSelfRef.cache_mem_tag[0xd4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd4U][2U]);
    vlSelfRef.cache_mem_tag[0xd5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd5U][2U]);
    vlSelfRef.cache_mem_tag[0xd6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd6U][2U]);
    vlSelfRef.cache_mem_tag[0xd7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd7U][2U]);
    vlSelfRef.cache_mem_tag[0xd8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd8U][2U]);
    vlSelfRef.cache_mem_tag[0xd9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xd9U][2U]);
    vlSelfRef.cache_mem_tag[0xdaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xdaU][2U]);
    vlSelfRef.cache_mem_tag[0xdbU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xdbU][2U]);
    vlSelfRef.cache_mem_tag[0xdcU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xdcU][2U]);
    vlSelfRef.cache_mem_tag[0xddU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xddU][2U]);
    vlSelfRef.cache_mem_tag[0xdeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xdeU][2U]);
    vlSelfRef.cache_mem_tag[0xdfU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xdfU][2U]);
    vlSelfRef.cache_mem_tag[0xe0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe0U][2U]);
    vlSelfRef.cache_mem_tag[0xe1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe1U][2U]);
    vlSelfRef.cache_mem_tag[0xe2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe2U][2U]);
    vlSelfRef.cache_mem_tag[0xe3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe3U][2U]);
    vlSelfRef.cache_mem_tag[0xe4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe4U][2U]);
    vlSelfRef.cache_mem_tag[0xe5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe5U][2U]);
    vlSelfRef.cache_mem_tag[0xe6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe6U][2U]);
    vlSelfRef.cache_mem_tag[0xe7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe7U][2U]);
    vlSelfRef.cache_mem_tag[0xe8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe8U][2U]);
    vlSelfRef.cache_mem_tag[0xe9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xe9U][2U]);
    vlSelfRef.cache_mem_tag[0xeaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xeaU][2U]);
    vlSelfRef.cache_mem_tag[0xebU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xebU][2U]);
    vlSelfRef.cache_mem_tag[0xecU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xecU][2U]);
    vlSelfRef.cache_mem_tag[0xedU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xedU][2U]);
    vlSelfRef.cache_mem_tag[0xeeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xeeU][2U]);
    vlSelfRef.cache_mem_tag[0xefU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xefU][2U]);
    vlSelfRef.cache_mem_tag[0xf0U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf0U][2U]);
    vlSelfRef.cache_mem_tag[0xf1U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf1U][2U]);
    vlSelfRef.cache_mem_tag[0xf2U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf2U][2U]);
    vlSelfRef.cache_mem_tag[0xf3U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf3U][2U]);
    vlSelfRef.cache_mem_tag[0xf4U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf4U][2U]);
    vlSelfRef.cache_mem_tag[0xf5U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf5U][2U]);
    vlSelfRef.cache_mem_tag[0xf6U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf6U][2U]);
    vlSelfRef.cache_mem_tag[0xf7U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf7U][2U]);
    vlSelfRef.cache_mem_tag[0xf8U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf8U][2U]);
    vlSelfRef.cache_mem_tag[0xf9U] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xf9U][2U]);
    vlSelfRef.cache_mem_tag[0xfaU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xfaU][2U]);
    vlSelfRef.cache_mem_tag[0xfbU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xfbU][2U]);
    vlSelfRef.cache_mem_tag[0xfcU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xfcU][2U]);
    vlSelfRef.cache_mem_tag[0xfdU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xfdU][2U]);
    vlSelfRef.cache_mem_tag[0xfeU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xfeU][2U]);
    vlSelfRef.cache_mem_tag[0xffU] = (0x1fffffU & vlSelfRef.cache_FSM__DOT__cache_mem
                                      [0xffU][2U]);
    vlSelfRef.cache_mem_dirty[0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [0U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [1U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [2U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [3U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [4U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [5U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [6U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [7U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [8U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [9U][2U] 
                                           >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xaU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xbU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xcU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xdU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xeU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xfU][2U] 
                                             >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x10U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x10U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x11U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x11U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x12U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x12U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x13U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x13U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x14U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x14U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x15U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x15U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x16U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x16U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x17U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x17U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x18U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x18U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x19U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x19U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x1fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x20U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x20U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x21U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x21U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x22U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x22U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x23U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x23U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x24U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x24U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x25U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x25U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x26U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x26U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x27U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x27U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x28U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x28U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x29U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x29U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x2fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x30U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x30U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x31U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x31U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x32U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x32U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x33U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x33U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x34U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x34U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x35U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x35U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x36U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x36U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x37U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x37U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x38U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x38U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x39U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x39U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x3fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x40U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x40U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x41U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x41U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x42U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x42U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x43U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x43U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x44U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x44U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x45U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x45U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x46U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x46U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x47U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x47U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x48U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x48U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x49U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x49U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x4fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x50U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x50U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x51U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x51U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x52U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x52U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x53U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x53U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x54U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x54U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x55U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x55U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x56U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x56U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x57U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x57U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x58U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x58U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x59U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x59U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x5fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x60U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x60U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x61U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x61U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x62U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x62U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x63U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x63U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x64U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x64U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x65U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x65U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x66U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x66U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x67U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x67U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x68U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x68U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x69U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x69U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x6fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x70U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x70U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x71U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x71U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x72U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x72U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x73U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x73U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x74U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x74U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x75U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x75U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x76U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x76U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x77U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x77U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x78U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x78U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x79U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x79U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x7fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x80U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x80U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x81U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x81U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x82U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x82U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x83U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x83U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x84U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x84U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x85U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x85U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x86U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x86U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x87U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x87U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x88U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x88U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x89U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x89U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x8fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x90U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x90U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x91U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x91U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x92U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x92U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x93U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x93U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x94U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x94U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x95U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x95U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x96U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x96U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x97U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x97U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x98U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x98U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x99U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x99U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9aU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9bU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9cU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9dU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9eU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0x9fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9fU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xa9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xaaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xaaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xabU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xabU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xacU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xacU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xadU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xadU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xaeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xaeU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xafU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xafU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xb9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbbU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbcU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbdU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbeU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xbfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbfU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xc9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xcaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xcbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcbU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xccU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xccU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xcdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcdU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xceU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xceU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xcfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcfU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xd9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdbU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdcU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xddU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xddU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdeU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xdfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdfU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xe9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xeaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xeaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xebU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xebU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xecU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xecU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xedU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xedU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xeeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xeeU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xefU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xefU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf0U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf1U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf2U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf3U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf4U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf5U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf6U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf7U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf8U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xf9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf9U][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfaU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfbU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfcU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfdU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xfeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfeU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_dirty[0xffU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xffU][2U] 
                                              >> 0x15U));
    vlSelfRef.cache_mem_valid[0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [0U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [1U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [2U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [3U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [4U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [5U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [6U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [7U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [8U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                           [9U][2U] 
                                           >> 0x16U));
    vlSelfRef.cache_mem_valid[0xaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xaU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xbU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0xcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xcU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xdU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0xeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xeU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                             [0xfU][2U] 
                                             >> 0x16U));
    vlSelfRef.cache_mem_valid[0x10U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x10U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x11U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x11U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x12U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x12U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x13U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x13U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x14U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x14U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x15U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x15U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x16U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x16U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x17U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x17U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x18U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x18U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x19U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x19U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x1fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x1fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x20U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x20U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x21U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x21U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x22U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x22U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x23U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x23U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x24U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x24U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x25U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x25U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x26U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x26U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x27U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x27U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x28U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x28U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x29U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x29U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x2fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x2fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x30U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x30U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x31U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x31U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x32U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x32U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x33U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x33U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x34U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x34U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x35U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x35U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x36U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x36U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x37U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x37U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x38U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x38U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x39U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x39U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x3fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x3fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x40U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x40U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x41U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x41U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x42U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x42U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x43U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x43U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x44U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x44U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x45U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x45U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x46U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x46U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x47U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x47U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x48U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x48U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x49U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x49U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x4fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x4fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x50U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x50U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x51U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x51U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x52U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x52U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x53U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x53U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x54U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x54U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x55U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x55U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x56U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x56U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x57U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x57U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x58U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x58U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x59U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x59U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x5fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x5fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x60U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x60U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x61U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x61U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x62U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x62U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x63U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x63U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x64U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x64U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x65U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x65U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x66U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x66U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x67U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x67U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x68U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x68U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x69U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x69U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x6fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x6fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x70U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x70U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x71U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x71U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x72U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x72U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x73U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x73U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x74U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x74U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x75U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x75U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x76U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x76U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x77U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x77U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x78U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x78U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x79U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x79U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x7fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x7fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x80U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x80U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x81U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x81U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x82U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x82U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x83U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x83U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x84U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x84U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x85U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x85U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x86U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x86U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x87U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x87U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x88U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x88U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x89U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x89U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x8fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x8fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x90U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x90U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x91U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x91U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x92U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x92U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x93U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x93U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x94U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x94U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x95U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x95U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x96U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x96U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x97U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x97U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x98U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x98U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x99U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x99U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9aU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9aU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9bU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9bU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9cU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9cU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9dU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9dU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9eU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9eU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0x9fU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0x9fU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xa9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xa9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xaaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xaaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xabU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xabU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xacU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xacU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xadU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xadU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xaeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xaeU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xafU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xafU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xb9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xb9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbbU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbcU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbdU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbeU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xbfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xbfU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xc9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xc9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xcaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xcbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcbU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xccU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xccU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xcdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcdU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xceU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xceU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xcfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xcfU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xd9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xd9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdbU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdcU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xddU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xddU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdeU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xdfU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xdfU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xe9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xe9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xeaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xeaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xebU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xebU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xecU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xecU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xedU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xedU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xeeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xeeU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xefU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xefU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf0U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf0U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf1U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf1U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf2U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf2U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf3U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf3U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf4U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf4U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf5U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf5U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf6U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf6U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf7U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf7U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf8U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf8U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xf9U] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xf9U][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfaU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfaU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfbU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfbU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfcU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfcU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfdU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfdU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xfeU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xfeU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_valid[0xffU] = (1U & (vlSelfRef.cache_FSM__DOT__cache_mem
                                              [0xffU][2U] 
                                              >> 0x16U));
    vlSelfRef.cache_mem_data[0U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [0U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [0U][0U])));
    vlSelfRef.cache_mem_data[1U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [1U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [1U][0U])));
    vlSelfRef.cache_mem_data[2U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [2U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [2U][0U])));
    vlSelfRef.cache_mem_data[3U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [3U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [3U][0U])));
    vlSelfRef.cache_mem_data[4U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [4U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [4U][0U])));
    vlSelfRef.cache_mem_data[5U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [5U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [5U][0U])));
    vlSelfRef.cache_mem_data[6U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [6U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [6U][0U])));
    vlSelfRef.cache_mem_data[7U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [7U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [7U][0U])));
    vlSelfRef.cache_mem_data[8U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [8U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [8U][0U])));
    vlSelfRef.cache_mem_data[9U] = (((QData)((IData)(
                                                     vlSelfRef.cache_FSM__DOT__cache_mem
                                                     [9U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cache_FSM__DOT__cache_mem
                                                                 [9U][0U])));
    vlSelfRef.cache_mem_data[0xaU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xaU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xaU][0U])));
    vlSelfRef.cache_mem_data[0xbU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xbU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xbU][0U])));
    vlSelfRef.cache_mem_data[0xcU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xcU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xcU][0U])));
    vlSelfRef.cache_mem_data[0xdU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xdU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xdU][0U])));
    vlSelfRef.cache_mem_data[0xeU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xeU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xeU][0U])));
    vlSelfRef.cache_mem_data[0xfU] = (((QData)((IData)(
                                                       vlSelfRef.cache_FSM__DOT__cache_mem
                                                       [0xfU][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cache_FSM__DOT__cache_mem
                                                                   [0xfU][0U])));
    vlSelfRef.cache_mem_data[0x10U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x10U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x10U][0U])));
    vlSelfRef.cache_mem_data[0x11U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x11U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x11U][0U])));
    vlSelfRef.cache_mem_data[0x12U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x12U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x12U][0U])));
    vlSelfRef.cache_mem_data[0x13U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x13U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x13U][0U])));
    vlSelfRef.cache_mem_data[0x14U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x14U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x14U][0U])));
    vlSelfRef.cache_mem_data[0x15U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x15U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x15U][0U])));
    vlSelfRef.cache_mem_data[0x16U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x16U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x16U][0U])));
    vlSelfRef.cache_mem_data[0x17U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x17U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x17U][0U])));
    vlSelfRef.cache_mem_data[0x18U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x18U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x18U][0U])));
    vlSelfRef.cache_mem_data[0x19U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x19U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x19U][0U])));
    vlSelfRef.cache_mem_data[0x1aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1aU][0U])));
    vlSelfRef.cache_mem_data[0x1bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1bU][0U])));
    vlSelfRef.cache_mem_data[0x1cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1cU][0U])));
    vlSelfRef.cache_mem_data[0x1dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1dU][0U])));
    vlSelfRef.cache_mem_data[0x1eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1eU][0U])));
    vlSelfRef.cache_mem_data[0x1fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x1fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x1fU][0U])));
    vlSelfRef.cache_mem_data[0x20U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x20U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x20U][0U])));
    vlSelfRef.cache_mem_data[0x21U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x21U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x21U][0U])));
    vlSelfRef.cache_mem_data[0x22U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x22U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x22U][0U])));
    vlSelfRef.cache_mem_data[0x23U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x23U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x23U][0U])));
    vlSelfRef.cache_mem_data[0x24U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x24U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x24U][0U])));
    vlSelfRef.cache_mem_data[0x25U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x25U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x25U][0U])));
    vlSelfRef.cache_mem_data[0x26U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x26U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x26U][0U])));
    vlSelfRef.cache_mem_data[0x27U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x27U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x27U][0U])));
    vlSelfRef.cache_mem_data[0x28U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x28U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x28U][0U])));
    vlSelfRef.cache_mem_data[0x29U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x29U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x29U][0U])));
    vlSelfRef.cache_mem_data[0x2aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2aU][0U])));
    vlSelfRef.cache_mem_data[0x2bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2bU][0U])));
    vlSelfRef.cache_mem_data[0x2cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2cU][0U])));
    vlSelfRef.cache_mem_data[0x2dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2dU][0U])));
    vlSelfRef.cache_mem_data[0x2eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2eU][0U])));
    vlSelfRef.cache_mem_data[0x2fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x2fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x2fU][0U])));
    vlSelfRef.cache_mem_data[0x30U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x30U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x30U][0U])));
    vlSelfRef.cache_mem_data[0x31U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x31U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x31U][0U])));
    vlSelfRef.cache_mem_data[0x32U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x32U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x32U][0U])));
    vlSelfRef.cache_mem_data[0x33U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x33U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x33U][0U])));
    vlSelfRef.cache_mem_data[0x34U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x34U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x34U][0U])));
    vlSelfRef.cache_mem_data[0x35U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x35U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x35U][0U])));
    vlSelfRef.cache_mem_data[0x36U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x36U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x36U][0U])));
    vlSelfRef.cache_mem_data[0x37U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x37U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x37U][0U])));
    vlSelfRef.cache_mem_data[0x38U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x38U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x38U][0U])));
    vlSelfRef.cache_mem_data[0x39U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x39U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x39U][0U])));
    vlSelfRef.cache_mem_data[0x3aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3aU][0U])));
    vlSelfRef.cache_mem_data[0x3bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3bU][0U])));
    vlSelfRef.cache_mem_data[0x3cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3cU][0U])));
    vlSelfRef.cache_mem_data[0x3dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3dU][0U])));
    vlSelfRef.cache_mem_data[0x3eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3eU][0U])));
    vlSelfRef.cache_mem_data[0x3fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x3fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x3fU][0U])));
    vlSelfRef.cache_mem_data[0x40U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x40U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x40U][0U])));
    vlSelfRef.cache_mem_data[0x41U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x41U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x41U][0U])));
    vlSelfRef.cache_mem_data[0x42U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x42U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x42U][0U])));
    vlSelfRef.cache_mem_data[0x43U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x43U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x43U][0U])));
    vlSelfRef.cache_mem_data[0x44U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x44U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x44U][0U])));
    vlSelfRef.cache_mem_data[0x45U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x45U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x45U][0U])));
    vlSelfRef.cache_mem_data[0x46U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x46U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x46U][0U])));
    vlSelfRef.cache_mem_data[0x47U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x47U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x47U][0U])));
    vlSelfRef.cache_mem_data[0x48U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x48U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x48U][0U])));
    vlSelfRef.cache_mem_data[0x49U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x49U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x49U][0U])));
    vlSelfRef.cache_mem_data[0x4aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4aU][0U])));
    vlSelfRef.cache_mem_data[0x4bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4bU][0U])));
    vlSelfRef.cache_mem_data[0x4cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4cU][0U])));
    vlSelfRef.cache_mem_data[0x4dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4dU][0U])));
    vlSelfRef.cache_mem_data[0x4eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4eU][0U])));
    vlSelfRef.cache_mem_data[0x4fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x4fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x4fU][0U])));
    vlSelfRef.cache_mem_data[0x50U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x50U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x50U][0U])));
    vlSelfRef.cache_mem_data[0x51U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x51U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x51U][0U])));
    vlSelfRef.cache_mem_data[0x52U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x52U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x52U][0U])));
    vlSelfRef.cache_mem_data[0x53U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x53U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x53U][0U])));
    vlSelfRef.cache_mem_data[0x54U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x54U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x54U][0U])));
    vlSelfRef.cache_mem_data[0x55U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x55U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x55U][0U])));
    vlSelfRef.cache_mem_data[0x56U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x56U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x56U][0U])));
    vlSelfRef.cache_mem_data[0x57U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x57U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x57U][0U])));
    vlSelfRef.cache_mem_data[0x58U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x58U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x58U][0U])));
    vlSelfRef.cache_mem_data[0x59U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x59U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x59U][0U])));
    vlSelfRef.cache_mem_data[0x5aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5aU][0U])));
    vlSelfRef.cache_mem_data[0x5bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5bU][0U])));
    vlSelfRef.cache_mem_data[0x5cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5cU][0U])));
    vlSelfRef.cache_mem_data[0x5dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5dU][0U])));
    vlSelfRef.cache_mem_data[0x5eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5eU][0U])));
    vlSelfRef.cache_mem_data[0x5fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x5fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x5fU][0U])));
    vlSelfRef.cache_mem_data[0x60U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x60U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x60U][0U])));
    vlSelfRef.cache_mem_data[0x61U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x61U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x61U][0U])));
    vlSelfRef.cache_mem_data[0x62U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x62U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x62U][0U])));
    vlSelfRef.cache_mem_data[0x63U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x63U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x63U][0U])));
    vlSelfRef.cache_mem_data[0x64U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x64U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x64U][0U])));
    vlSelfRef.cache_mem_data[0x65U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x65U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x65U][0U])));
    vlSelfRef.cache_mem_data[0x66U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x66U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x66U][0U])));
    vlSelfRef.cache_mem_data[0x67U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x67U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x67U][0U])));
    vlSelfRef.cache_mem_data[0x68U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x68U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x68U][0U])));
    vlSelfRef.cache_mem_data[0x69U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x69U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x69U][0U])));
    vlSelfRef.cache_mem_data[0x6aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6aU][0U])));
    vlSelfRef.cache_mem_data[0x6bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6bU][0U])));
    vlSelfRef.cache_mem_data[0x6cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6cU][0U])));
    vlSelfRef.cache_mem_data[0x6dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6dU][0U])));
    vlSelfRef.cache_mem_data[0x6eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6eU][0U])));
    vlSelfRef.cache_mem_data[0x6fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x6fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x6fU][0U])));
    vlSelfRef.cache_mem_data[0x70U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x70U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x70U][0U])));
    vlSelfRef.cache_mem_data[0x71U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x71U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x71U][0U])));
    vlSelfRef.cache_mem_data[0x72U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x72U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x72U][0U])));
    vlSelfRef.cache_mem_data[0x73U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x73U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x73U][0U])));
    vlSelfRef.cache_mem_data[0x74U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x74U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x74U][0U])));
    vlSelfRef.cache_mem_data[0x75U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x75U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x75U][0U])));
    vlSelfRef.cache_mem_data[0x76U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x76U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x76U][0U])));
    vlSelfRef.cache_mem_data[0x77U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x77U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x77U][0U])));
    vlSelfRef.cache_mem_data[0x78U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x78U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x78U][0U])));
    vlSelfRef.cache_mem_data[0x79U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x79U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x79U][0U])));
    vlSelfRef.cache_mem_data[0x7aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7aU][0U])));
    vlSelfRef.cache_mem_data[0x7bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7bU][0U])));
    vlSelfRef.cache_mem_data[0x7cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7cU][0U])));
    vlSelfRef.cache_mem_data[0x7dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7dU][0U])));
    vlSelfRef.cache_mem_data[0x7eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7eU][0U])));
    vlSelfRef.cache_mem_data[0x7fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x7fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x7fU][0U])));
    vlSelfRef.cache_mem_data[0x80U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x80U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x80U][0U])));
    vlSelfRef.cache_mem_data[0x81U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x81U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x81U][0U])));
    vlSelfRef.cache_mem_data[0x82U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x82U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x82U][0U])));
    vlSelfRef.cache_mem_data[0x83U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x83U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x83U][0U])));
    vlSelfRef.cache_mem_data[0x84U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x84U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x84U][0U])));
    vlSelfRef.cache_mem_data[0x85U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x85U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x85U][0U])));
    vlSelfRef.cache_mem_data[0x86U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x86U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x86U][0U])));
    vlSelfRef.cache_mem_data[0x87U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x87U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x87U][0U])));
    vlSelfRef.cache_mem_data[0x88U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x88U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x88U][0U])));
    vlSelfRef.cache_mem_data[0x89U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x89U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x89U][0U])));
    vlSelfRef.cache_mem_data[0x8aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8aU][0U])));
    vlSelfRef.cache_mem_data[0x8bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8bU][0U])));
    vlSelfRef.cache_mem_data[0x8cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8cU][0U])));
    vlSelfRef.cache_mem_data[0x8dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8dU][0U])));
    vlSelfRef.cache_mem_data[0x8eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8eU][0U])));
    vlSelfRef.cache_mem_data[0x8fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x8fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x8fU][0U])));
    vlSelfRef.cache_mem_data[0x90U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x90U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x90U][0U])));
    vlSelfRef.cache_mem_data[0x91U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x91U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x91U][0U])));
    vlSelfRef.cache_mem_data[0x92U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x92U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x92U][0U])));
    vlSelfRef.cache_mem_data[0x93U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x93U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x93U][0U])));
    vlSelfRef.cache_mem_data[0x94U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x94U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x94U][0U])));
    vlSelfRef.cache_mem_data[0x95U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x95U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x95U][0U])));
    vlSelfRef.cache_mem_data[0x96U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x96U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x96U][0U])));
    vlSelfRef.cache_mem_data[0x97U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x97U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x97U][0U])));
    vlSelfRef.cache_mem_data[0x98U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x98U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x98U][0U])));
    vlSelfRef.cache_mem_data[0x99U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x99U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x99U][0U])));
    vlSelfRef.cache_mem_data[0x9aU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9aU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9aU][0U])));
    vlSelfRef.cache_mem_data[0x9bU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9bU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9bU][0U])));
    vlSelfRef.cache_mem_data[0x9cU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9cU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9cU][0U])));
    vlSelfRef.cache_mem_data[0x9dU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9dU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9dU][0U])));
    vlSelfRef.cache_mem_data[0x9eU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9eU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9eU][0U])));
    vlSelfRef.cache_mem_data[0x9fU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0x9fU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0x9fU][0U])));
    vlSelfRef.cache_mem_data[0xa0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa0U][0U])));
    vlSelfRef.cache_mem_data[0xa1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa1U][0U])));
    vlSelfRef.cache_mem_data[0xa2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa2U][0U])));
    vlSelfRef.cache_mem_data[0xa3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa3U][0U])));
    vlSelfRef.cache_mem_data[0xa4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa4U][0U])));
    vlSelfRef.cache_mem_data[0xa5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa5U][0U])));
    vlSelfRef.cache_mem_data[0xa6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa6U][0U])));
    vlSelfRef.cache_mem_data[0xa7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa7U][0U])));
    vlSelfRef.cache_mem_data[0xa8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa8U][0U])));
    vlSelfRef.cache_mem_data[0xa9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xa9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xa9U][0U])));
    vlSelfRef.cache_mem_data[0xaaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xaaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xaaU][0U])));
    vlSelfRef.cache_mem_data[0xabU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xabU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xabU][0U])));
    vlSelfRef.cache_mem_data[0xacU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xacU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xacU][0U])));
    vlSelfRef.cache_mem_data[0xadU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xadU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xadU][0U])));
    vlSelfRef.cache_mem_data[0xaeU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xaeU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xaeU][0U])));
    vlSelfRef.cache_mem_data[0xafU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xafU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xafU][0U])));
    vlSelfRef.cache_mem_data[0xb0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb0U][0U])));
    vlSelfRef.cache_mem_data[0xb1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb1U][0U])));
    vlSelfRef.cache_mem_data[0xb2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb2U][0U])));
    vlSelfRef.cache_mem_data[0xb3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb3U][0U])));
    vlSelfRef.cache_mem_data[0xb4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb4U][0U])));
    vlSelfRef.cache_mem_data[0xb5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb5U][0U])));
    vlSelfRef.cache_mem_data[0xb6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb6U][0U])));
    vlSelfRef.cache_mem_data[0xb7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb7U][0U])));
    vlSelfRef.cache_mem_data[0xb8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb8U][0U])));
    vlSelfRef.cache_mem_data[0xb9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xb9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xb9U][0U])));
    vlSelfRef.cache_mem_data[0xbaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbaU][0U])));
    vlSelfRef.cache_mem_data[0xbbU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbbU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbbU][0U])));
    vlSelfRef.cache_mem_data[0xbcU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbcU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbcU][0U])));
    vlSelfRef.cache_mem_data[0xbdU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbdU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbdU][0U])));
    vlSelfRef.cache_mem_data[0xbeU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbeU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbeU][0U])));
    vlSelfRef.cache_mem_data[0xbfU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xbfU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xbfU][0U])));
    vlSelfRef.cache_mem_data[0xc0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc0U][0U])));
    vlSelfRef.cache_mem_data[0xc1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc1U][0U])));
    vlSelfRef.cache_mem_data[0xc2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc2U][0U])));
    vlSelfRef.cache_mem_data[0xc3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc3U][0U])));
    vlSelfRef.cache_mem_data[0xc4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc4U][0U])));
    vlSelfRef.cache_mem_data[0xc5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc5U][0U])));
    vlSelfRef.cache_mem_data[0xc6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc6U][0U])));
    vlSelfRef.cache_mem_data[0xc7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc7U][0U])));
    vlSelfRef.cache_mem_data[0xc8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc8U][0U])));
    vlSelfRef.cache_mem_data[0xc9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xc9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xc9U][0U])));
    vlSelfRef.cache_mem_data[0xcaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xcaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xcaU][0U])));
    vlSelfRef.cache_mem_data[0xcbU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xcbU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xcbU][0U])));
    vlSelfRef.cache_mem_data[0xccU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xccU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xccU][0U])));
    vlSelfRef.cache_mem_data[0xcdU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xcdU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xcdU][0U])));
    vlSelfRef.cache_mem_data[0xceU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xceU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xceU][0U])));
    vlSelfRef.cache_mem_data[0xcfU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xcfU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xcfU][0U])));
    vlSelfRef.cache_mem_data[0xd0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd0U][0U])));
    vlSelfRef.cache_mem_data[0xd1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd1U][0U])));
    vlSelfRef.cache_mem_data[0xd2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd2U][0U])));
    vlSelfRef.cache_mem_data[0xd3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd3U][0U])));
    vlSelfRef.cache_mem_data[0xd4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd4U][0U])));
    vlSelfRef.cache_mem_data[0xd5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd5U][0U])));
    vlSelfRef.cache_mem_data[0xd6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd6U][0U])));
    vlSelfRef.cache_mem_data[0xd7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd7U][0U])));
    vlSelfRef.cache_mem_data[0xd8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd8U][0U])));
    vlSelfRef.cache_mem_data[0xd9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xd9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xd9U][0U])));
    vlSelfRef.cache_mem_data[0xdaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xdaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xdaU][0U])));
    vlSelfRef.cache_mem_data[0xdbU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xdbU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xdbU][0U])));
    vlSelfRef.cache_mem_data[0xdcU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xdcU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xdcU][0U])));
    vlSelfRef.cache_mem_data[0xddU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xddU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xddU][0U])));
    vlSelfRef.cache_mem_data[0xdeU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xdeU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xdeU][0U])));
    vlSelfRef.cache_mem_data[0xdfU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xdfU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xdfU][0U])));
    vlSelfRef.cache_mem_data[0xe0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe0U][0U])));
    vlSelfRef.cache_mem_data[0xe1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe1U][0U])));
    vlSelfRef.cache_mem_data[0xe2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe2U][0U])));
    vlSelfRef.cache_mem_data[0xe3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe3U][0U])));
    vlSelfRef.cache_mem_data[0xe4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe4U][0U])));
    vlSelfRef.cache_mem_data[0xe5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe5U][0U])));
    vlSelfRef.cache_mem_data[0xe6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe6U][0U])));
    vlSelfRef.cache_mem_data[0xe7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe7U][0U])));
    vlSelfRef.cache_mem_data[0xe8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe8U][0U])));
    vlSelfRef.cache_mem_data[0xe9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xe9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xe9U][0U])));
    vlSelfRef.cache_mem_data[0xeaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xeaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xeaU][0U])));
    vlSelfRef.cache_mem_data[0xebU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xebU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xebU][0U])));
    vlSelfRef.cache_mem_data[0xecU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xecU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xecU][0U])));
    vlSelfRef.cache_mem_data[0xedU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xedU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xedU][0U])));
    vlSelfRef.cache_mem_data[0xeeU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xeeU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xeeU][0U])));
    vlSelfRef.cache_mem_data[0xefU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xefU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xefU][0U])));
    vlSelfRef.cache_mem_data[0xf0U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf0U][0U])));
    vlSelfRef.cache_mem_data[0xf1U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf1U][0U])));
    vlSelfRef.cache_mem_data[0xf2U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf2U][0U])));
    vlSelfRef.cache_mem_data[0xf3U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf3U][0U])));
    vlSelfRef.cache_mem_data[0xf4U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf4U][0U])));
    vlSelfRef.cache_mem_data[0xf5U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf5U][0U])));
    vlSelfRef.cache_mem_data[0xf6U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf6U][0U])));
    vlSelfRef.cache_mem_data[0xf7U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf7U][0U])));
    vlSelfRef.cache_mem_data[0xf8U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf8U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf8U][0U])));
    vlSelfRef.cache_mem_data[0xf9U] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xf9U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xf9U][0U])));
    vlSelfRef.cache_mem_data[0xfaU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xfaU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xfaU][0U])));
    vlSelfRef.cache_mem_data[0xfbU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xfbU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xfbU][0U])));
    vlSelfRef.cache_mem_data[0xfcU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xfcU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xfcU][0U])));
    vlSelfRef.cache_mem_data[0xfdU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xfdU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xfdU][0U])));
    vlSelfRef.cache_mem_data[0xfeU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xfeU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xfeU][0U])));
    vlSelfRef.cache_mem_data[0xffU] = (((QData)((IData)(
                                                        vlSelfRef.cache_FSM__DOT__cache_mem
                                                        [0xffU][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cache_FSM__DOT__cache_mem
                                                                    [0xffU][0U])));
}

void Vdut___024root___eval_triggers__ico(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdut___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdut___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdut___024root___eval_act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdut___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_FSM__DOT__current_state = ((IData)(vlSelfRef.rst)
                                                ? 0U
                                                : vlSelfRef.cache_FSM__DOT__next_state);
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut___024root___eval_phase__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_pipelining/cache_FSM.sv", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdut___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_pipelining/cache_FSM.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_pipelining/cache_FSM.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
