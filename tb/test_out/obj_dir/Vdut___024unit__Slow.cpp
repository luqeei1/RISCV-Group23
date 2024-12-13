// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut__Syms.h"
#include "Vdut___024unit.h"

void Vdut___024unit___ctor_var_reset(Vdut___024unit* vlSelf);

Vdut___024unit::Vdut___024unit(Vdut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdut___024unit___ctor_var_reset(this);
}

void Vdut___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdut___024unit::~Vdut___024unit() {
}
