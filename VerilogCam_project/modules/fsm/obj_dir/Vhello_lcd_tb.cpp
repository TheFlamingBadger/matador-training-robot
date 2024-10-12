// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhello_lcd_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhello_lcd_tb::Vhello_lcd_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhello_lcd_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhello_lcd_tb::Vhello_lcd_tb(const char* _vcname__)
    : Vhello_lcd_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhello_lcd_tb::~Vhello_lcd_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhello_lcd_tb___024root___eval_debug_assertions(Vhello_lcd_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhello_lcd_tb___024root___eval_static(Vhello_lcd_tb___024root* vlSelf);
void Vhello_lcd_tb___024root___eval_initial(Vhello_lcd_tb___024root* vlSelf);
void Vhello_lcd_tb___024root___eval_settle(Vhello_lcd_tb___024root* vlSelf);
void Vhello_lcd_tb___024root___eval(Vhello_lcd_tb___024root* vlSelf);

void Vhello_lcd_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhello_lcd_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhello_lcd_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhello_lcd_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhello_lcd_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhello_lcd_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhello_lcd_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhello_lcd_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhello_lcd_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhello_lcd_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhello_lcd_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhello_lcd_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhello_lcd_tb___024root___eval_final(Vhello_lcd_tb___024root* vlSelf);

VL_ATTR_COLD void Vhello_lcd_tb::final() {
    Vhello_lcd_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhello_lcd_tb::hierName() const { return vlSymsp->name(); }
const char* Vhello_lcd_tb::modelName() const { return "Vhello_lcd_tb"; }
unsigned Vhello_lcd_tb::threads() const { return 1; }
void Vhello_lcd_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhello_lcd_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhello_lcd_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhello_lcd_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhello_lcd_tb___024root__trace_init_top(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhello_lcd_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello_lcd_tb___024root*>(voidSelf);
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhello_lcd_tb___024root__trace_decl_types(tracep);
    Vhello_lcd_tb___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_register(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhello_lcd_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhello_lcd_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhello_lcd_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
