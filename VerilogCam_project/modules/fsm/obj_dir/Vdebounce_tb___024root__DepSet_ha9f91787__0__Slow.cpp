// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebounce_tb.h for the primary calling header

#include "Vdebounce_tb__pch.h"
#include "Vdebounce_tb___024root.h"

VL_ATTR_COLD void Vdebounce_tb___024root___eval_static(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdebounce_tb___024root___eval_initial__TOP(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debounce_tb__DOT__dut__DOT__count = 0U;
    vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button = 0U;
    vlSelfRef.debounce_tb__DOT__button_pressed = 0U;
}

VL_ATTR_COLD void Vdebounce_tb___024root___eval_final(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdebounce_tb___024root___eval_settle(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebounce_tb___024root___dump_triggers__act(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge debounce_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebounce_tb___024root___dump_triggers__nba(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge debounce_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdebounce_tb___024root___ctor_var_reset(Vdebounce_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->debounce_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->debounce_tb__DOT__button = VL_RAND_RESET_I(1);
    vlSelf->debounce_tb__DOT__button_pressed = VL_RAND_RESET_I(1);
    vlSelf->debounce_tb__DOT__dut__DOT__prev_button = VL_RAND_RESET_I(1);
    vlSelf->debounce_tb__DOT__dut__DOT__count = VL_RAND_RESET_I(12);
    vlSelf->debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q0 = VL_RAND_RESET_I(1);
    vlSelf->debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__debounce_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
