// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebounce_tb.h for the primary calling header

#include "Vdebounce_tb__pch.h"
#include "Vdebounce_tb___024root.h"

VL_ATTR_COLD void Vdebounce_tb___024root___eval_initial__TOP(Vdebounce_tb___024root* vlSelf);
VlCoroutine Vdebounce_tb___024root___eval_initial__TOP__Vtiming__0(Vdebounce_tb___024root* vlSelf);
VlCoroutine Vdebounce_tb___024root___eval_initial__TOP__Vtiming__1(Vdebounce_tb___024root* vlSelf);

void Vdebounce_tb___024root___eval_initial(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdebounce_tb___024root___eval_initial__TOP(vlSelf);
    Vdebounce_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdebounce_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__debounce_tb__DOT__clk__0 
        = vlSelfRef.debounce_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vdebounce_tb___024root___eval_initial__TOP__Vtiming__0(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debounce_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "debounce_tb.sv", 
                                             17);
        vlSelfRef.debounce_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.debounce_tb__DOT__clk)));
    }
}

void Vdebounce_tb___024root___eval_act(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdebounce_tb___024root___nba_sequent__TOP__0(Vdebounce_tb___024root* vlSelf);

void Vdebounce_tb___024root___eval_nba(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdebounce_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdebounce_tb___024root___nba_sequent__TOP__0(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vdly__debounce_tb__DOT__dut__DOT__count;
    __Vdly__debounce_tb__DOT__dut__DOT__count = 0;
    CData/*0:0*/ __Vdly__debounce_tb__DOT__dut__DOT__prev_button;
    __Vdly__debounce_tb__DOT__dut__DOT__prev_button = 0;
    // Body
    __Vdly__debounce_tb__DOT__dut__DOT__prev_button 
        = vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button;
    __Vdly__debounce_tb__DOT__dut__DOT__count = vlSelfRef.debounce_tb__DOT__dut__DOT__count;
    if (((IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1) 
         != (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button))) {
        __Vdly__debounce_tb__DOT__dut__DOT__prev_button 
            = vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1;
        __Vdly__debounce_tb__DOT__dut__DOT__count = 0U;
    } else {
        __Vdly__debounce_tb__DOT__dut__DOT__prev_button 
            = vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button;
        __Vdly__debounce_tb__DOT__dut__DOT__count = 
            (0xfffU & ((0x9c4U == (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__count))
                        ? (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__count)
                        : ((IData)(1U) + (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__count))));
    }
    vlSelfRef.debounce_tb__DOT__button_pressed = ((
                                                   ((IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1) 
                                                    == (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button)) 
                                                   & (0x9c4U 
                                                      == (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__count)))
                                                   ? (IData)(vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button)
                                                   : (IData)(vlSelfRef.debounce_tb__DOT__button_pressed));
    vlSelfRef.debounce_tb__DOT__dut__DOT__count = __Vdly__debounce_tb__DOT__dut__DOT__count;
    vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button 
        = __Vdly__debounce_tb__DOT__dut__DOT__prev_button;
    vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1 
        = vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q0;
    vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q0 
        = vlSelfRef.debounce_tb__DOT__button;
}

void Vdebounce_tb___024root___timing_resume(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdebounce_tb___024root___eval_triggers__act(Vdebounce_tb___024root* vlSelf);

bool Vdebounce_tb___024root___eval_phase__act(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdebounce_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdebounce_tb___024root___timing_resume(vlSelf);
        Vdebounce_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdebounce_tb___024root___eval_phase__nba(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdebounce_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebounce_tb___024root___dump_triggers__nba(Vdebounce_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebounce_tb___024root___dump_triggers__act(Vdebounce_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdebounce_tb___024root___eval(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdebounce_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("debounce_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdebounce_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("debounce_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdebounce_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdebounce_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdebounce_tb___024root___eval_debug_assertions(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
