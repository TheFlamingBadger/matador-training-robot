// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebounce_tb.h for the primary calling header

#include "Vdebounce_tb__pch.h"
#include "Vdebounce_tb__Syms.h"
#include "Vdebounce_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdebounce_tb___024root___eval_initial__TOP__Vtiming__1(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.debounce_tb__DOT__button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         28);
    vlSelfRef.debounce_tb__DOT__button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         29);
    vlSelfRef.debounce_tb__DOT__button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         30);
    vlSelfRef.debounce_tb__DOT__button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         31);
    VL_WRITEF_NX("button_pressed: %b\n",0,1,vlSelfRef.debounce_tb__DOT__button_pressed);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "debounce_tb.sv", 
                                         37);
    VL_WRITEF_NX("Time waited = 5000 ns\nbutton_pressed: %b\n",0,
                 1,vlSelfRef.debounce_tb__DOT__button_pressed);
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         42);
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         43);
    vlSelfRef.debounce_tb__DOT__button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         44);
    vlSelfRef.debounce_tb__DOT__button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "debounce_tb.sv", 
                                         45);
    vlSelfRef.debounce_tb__DOT__button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "debounce_tb.sv", 
                                         46);
    VL_WRITEF_NX("Time waited = 5000 ns\nbutton_pressed: %b\n",0,
                 1,vlSelfRef.debounce_tb__DOT__button_pressed);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "debounce_tb.sv", 
                                         51);
    VL_FINISH_MT("debounce_tb.sv", 53, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebounce_tb___024root___dump_triggers__act(Vdebounce_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdebounce_tb___024root___eval_triggers__act(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.debounce_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debounce_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__debounce_tb__DOT__clk__0 
        = vlSelfRef.debounce_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdebounce_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
