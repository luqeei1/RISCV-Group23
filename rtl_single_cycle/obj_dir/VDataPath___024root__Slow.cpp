// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataPath.h for the primary calling header

#include "verilated.h"

#include "VDataPath__Syms.h"
#include "VDataPath___024root.h"

void VDataPath___024root___ctor_var_reset(VDataPath___024root* vlSelf);

VDataPath___024root::VDataPath___024root(VDataPath__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDataPath___024root___ctor_var_reset(this);
}

void VDataPath___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDataPath___024root::~VDataPath___024root() {
}
