// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_lcd_tb.h for the primary calling header

#include "Vhello_lcd_tb__pch.h"
#include "Vhello_lcd_tb___024root.h"

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_static__TOP(Vhello_lcd_tb___024root* vlSelf);

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_static(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhello_lcd_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_static__TOP(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[0U] = 1U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[1U] = 0x146U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[2U] = 0x169U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[3U] = 0x16cU;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[4U] = 0x174U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[5U] = 0x165U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[6U] = 0x172U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[7U] = 0x13aU;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[8U] = 0x120U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[9U] = 0x123U;
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index = 0U;
}

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_final(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__stl(Vhello_lcd_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhello_lcd_tb___024root___eval_phase__stl(Vhello_lcd_tb___024root* vlSelf);

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_settle(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vhello_lcd_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hello_lcd_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhello_lcd_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__stl(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhello_lcd_tb___024root___stl_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf);

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_stl(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhello_lcd_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vhello_lcd_tb___024root___stl_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hello_lcd_tb__DOT__chipselect = (1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state));
    vlSelfRef.hello_lcd_tb__DOT__write = (1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state));
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_instruction_index 
        = ((IData)(1U) + vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index);
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
            ? (VL_GTS_III(32, 0xaU, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
                               ? (((IData)(vlSelfRef.hello_lcd_tb__DOT__waitrequest) 
                                   | VL_LTES_III(32, 9U, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index))
                                   ? 0U : 1U) : 0U));
    vlSelfRef.hello_lcd_tb__DOT__address = ((1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state)) 
                                            && (1U 
                                                & (((9U 
                                                     >= 
                                                     (0xfU 
                                                      & vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index))
                                                     ? 
                                                    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions
                                                    [
                                                    (0xfU 
                                                     & vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)]
                                                     : 0U) 
                                                   >> 8U)));
    vlSelfRef.hello_lcd_tb__DOT__writedata = ((1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
                                               ? ((9U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions
                                                   [
                                                   (0xfU 
                                                    & vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)])
                                                   : 0U)
                                               : 0U);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root___eval_triggers__stl(Vhello_lcd_tb___024root* vlSelf);

VL_ATTR_COLD bool Vhello_lcd_tb___024root___eval_phase__stl(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhello_lcd_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vhello_lcd_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__act(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hello_lcd_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__nba(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hello_lcd_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhello_lcd_tb___024root___ctor_var_reset(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->hello_lcd_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__filter_number = VL_RAND_RESET_I(3);
    vlSelf->hello_lcd_tb__DOT__address = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__chipselect = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__waitrequest = VL_RAND_RESET_I(1);
    vlSelf->hello_lcd_tb__DOT__readdata = VL_RAND_RESET_I(8);
    vlSelf->hello_lcd_tb__DOT__response = VL_RAND_RESET_I(2);
    vlSelf->hello_lcd_tb__DOT__writedata = VL_RAND_RESET_I(8);
    vlSelf->hello_lcd_tb__DOT__dut__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->hello_lcd_tb__DOT__dut__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->hello_lcd_tb__DOT__dut__DOT__instructions[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->hello_lcd_tb__DOT__dut__DOT__next_instruction_index = VL_RAND_RESET_I(32);
    vlSelf->hello_lcd_tb__DOT__dut__DOT__instruction_index = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__hello_lcd_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
