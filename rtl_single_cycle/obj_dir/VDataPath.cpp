// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDataPath.h"
#include "VDataPath__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDataPath::VDataPath(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDataPath__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , address_mode{vlSymsp->TOP.address_mode}
    , ResultSrc{vlSymsp->TOP.ResultSrc}
    , WE{vlSymsp->TOP.WE}
    , A{vlSymsp->TOP.A}
    , WD{vlSymsp->TOP.WD}
    , Result{vlSymsp->TOP.Result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDataPath::VDataPath(const char* _vcname__)
    : VDataPath(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDataPath::~VDataPath() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDataPath___024root___eval_initial(VDataPath___024root* vlSelf);
void VDataPath___024root___eval_settle(VDataPath___024root* vlSelf);
void VDataPath___024root___eval(VDataPath___024root* vlSelf);
#ifdef VL_DEBUG
void VDataPath___024root___eval_debug_assertions(VDataPath___024root* vlSelf);
#endif  // VL_DEBUG
void VDataPath___024root___final(VDataPath___024root* vlSelf);

static void _eval_initial_loop(VDataPath__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDataPath___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDataPath___024root___eval_settle(&(vlSymsp->TOP));
        VDataPath___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDataPath::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDataPath::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDataPath___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDataPath___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VDataPath::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDataPath::final() {
    VDataPath___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDataPath::hierName() const { return vlSymsp->name(); }
const char* VDataPath::modelName() const { return "VDataPath"; }
unsigned VDataPath::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VDataPath::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDataPath___024root__trace_init_top(VDataPath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDataPath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataPath___024root*>(voidSelf);
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDataPath___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDataPath___024root__trace_register(VDataPath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDataPath::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDataPath___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
