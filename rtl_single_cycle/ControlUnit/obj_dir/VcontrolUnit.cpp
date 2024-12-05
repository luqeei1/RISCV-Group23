// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VcontrolUnit.h"
#include "VcontrolUnit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VcontrolUnit::VcontrolUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VcontrolUnit__Syms(contextp(), _vcname__, this)}
    , PCSrc{vlSymsp->TOP.PCSrc}
    , ResultSrc{vlSymsp->TOP.ResultSrc}
    , MemWrite{vlSymsp->TOP.MemWrite}
    , ALUCtrl{vlSymsp->TOP.ALUCtrl}
    , ALUSrc{vlSymsp->TOP.ALUSrc}
    , ImmSrc{vlSymsp->TOP.ImmSrc}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , modeBU{vlSymsp->TOP.modeBU}
    , Instr{vlSymsp->TOP.Instr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VcontrolUnit::VcontrolUnit(const char* _vcname__)
    : VcontrolUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VcontrolUnit::~VcontrolUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VcontrolUnit___024root___eval_initial(VcontrolUnit___024root* vlSelf);
void VcontrolUnit___024root___eval_settle(VcontrolUnit___024root* vlSelf);
void VcontrolUnit___024root___eval(VcontrolUnit___024root* vlSelf);
#ifdef VL_DEBUG
void VcontrolUnit___024root___eval_debug_assertions(VcontrolUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VcontrolUnit___024root___final(VcontrolUnit___024root* vlSelf);

static void _eval_initial_loop(VcontrolUnit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VcontrolUnit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VcontrolUnit___024root___eval_settle(&(vlSymsp->TOP));
        VcontrolUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VcontrolUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VcontrolUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VcontrolUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VcontrolUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VcontrolUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VcontrolUnit::final() {
    VcontrolUnit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VcontrolUnit::hierName() const { return vlSymsp->name(); }
const char* VcontrolUnit::modelName() const { return "VcontrolUnit"; }
unsigned VcontrolUnit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VcontrolUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VcontrolUnit___024root__trace_init_top(VcontrolUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VcontrolUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VcontrolUnit___024root*>(voidSelf);
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VcontrolUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VcontrolUnit___024root__trace_register(VcontrolUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VcontrolUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VcontrolUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
