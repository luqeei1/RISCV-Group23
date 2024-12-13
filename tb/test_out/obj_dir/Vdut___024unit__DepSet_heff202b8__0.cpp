// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024unit.h"

std::string VL_TO_STRING(const Vdut_cache_set_type__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdut___024unit::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{way:" + VL_TO_STRING(obj.__PVT__way);
        out += "}";
    return out;
}
