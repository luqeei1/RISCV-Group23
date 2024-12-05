// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcontrolUnit.h for the primary calling header

#include "verilated.h"

#include "VcontrolUnit__Syms.h"
#include "VcontrolUnit___024root.h"

void VcontrolUnit___024root___ctor_var_reset(VcontrolUnit___024root* vlSelf);

VcontrolUnit___024root::VcontrolUnit___024root(VcontrolUnit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VcontrolUnit___024root___ctor_var_reset(this);
}

void VcontrolUnit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VcontrolUnit___024root::~VcontrolUnit___024root() {
}
