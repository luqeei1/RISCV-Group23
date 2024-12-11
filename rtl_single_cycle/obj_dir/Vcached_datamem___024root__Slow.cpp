// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcached_datamem.h for the primary calling header

#include "Vcached_datamem__pch.h"
#include "Vcached_datamem__Syms.h"
#include "Vcached_datamem___024root.h"

void Vcached_datamem___024root___ctor_var_reset(Vcached_datamem___024root* vlSelf);

Vcached_datamem___024root::Vcached_datamem___024root(Vcached_datamem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcached_datamem___024root___ctor_var_reset(this);
}

void Vcached_datamem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcached_datamem___024root::~Vcached_datamem___024root() {
}
