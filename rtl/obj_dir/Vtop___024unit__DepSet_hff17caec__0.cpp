// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit.h"

std::string VL_TO_STRING(const Vtop_cache_set_type__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{way:" + VL_TO_STRING(obj.__PVT__way);
        out += "}";
    return out;
}
