// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcached_datamem__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcached_datamem::Vcached_datamem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcached_datamem__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , WE{vlSymsp->TOP.WE}
    , RE{vlSymsp->TOP.RE}
    , modeAddr{vlSymsp->TOP.modeAddr}
    , miss_stall{vlSymsp->TOP.miss_stall}
    , addr{vlSymsp->TOP.addr}
    , write_data{vlSymsp->TOP.write_data}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcached_datamem::Vcached_datamem(const char* _vcname__)
    : Vcached_datamem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcached_datamem::~Vcached_datamem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcached_datamem___024root___eval_debug_assertions(Vcached_datamem___024root* vlSelf);
#endif  // VL_DEBUG
void Vcached_datamem___024root___eval_static(Vcached_datamem___024root* vlSelf);
void Vcached_datamem___024root___eval_initial(Vcached_datamem___024root* vlSelf);
void Vcached_datamem___024root___eval_settle(Vcached_datamem___024root* vlSelf);
void Vcached_datamem___024root___eval(Vcached_datamem___024root* vlSelf);

void Vcached_datamem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcached_datamem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcached_datamem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcached_datamem___024root___eval_static(&(vlSymsp->TOP));
        Vcached_datamem___024root___eval_initial(&(vlSymsp->TOP));
        Vcached_datamem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcached_datamem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcached_datamem::eventsPending() { return false; }

uint64_t Vcached_datamem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcached_datamem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcached_datamem___024root___eval_final(Vcached_datamem___024root* vlSelf);

VL_ATTR_COLD void Vcached_datamem::final() {
    Vcached_datamem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcached_datamem::hierName() const { return vlSymsp->name(); }
const char* Vcached_datamem::modelName() const { return "Vcached_datamem"; }
unsigned Vcached_datamem::threads() const { return 1; }
void Vcached_datamem::prepareClone() const { contextp()->prepareClone(); }
void Vcached_datamem::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcached_datamem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcached_datamem___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcached_datamem___024root__trace_init_top(Vcached_datamem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcached_datamem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcached_datamem___024root*>(voidSelf);
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcached_datamem___024root__trace_decl_types(tracep);
    Vcached_datamem___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcached_datamem___024root__trace_register(Vcached_datamem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcached_datamem::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcached_datamem::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcached_datamem___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
