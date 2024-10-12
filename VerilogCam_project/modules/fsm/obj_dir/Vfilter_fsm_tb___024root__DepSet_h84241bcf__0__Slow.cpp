// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfilter_fsm_tb.h for the primary calling header

#include "Vfilter_fsm_tb__pch.h"
#include "Vfilter_fsm_tb___024root.h"

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_static__TOP(Vfilter_fsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_static(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfilter_fsm_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_static__TOP(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state = 0U;
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_final(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__stl(Vfilter_fsm_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfilter_fsm_tb___024root___eval_phase__stl(Vfilter_fsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_settle(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_settle\n"); );
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
            Vfilter_fsm_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("filter_fsm_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfilter_fsm_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__stl(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vfilter_fsm_tb___024root___stl_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf);

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_stl(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfilter_fsm_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vfilter_fsm_tb__ConstPool__TABLE_hb14e552a_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vfilter_fsm_tb__ConstPool__TABLE_h850271f5_0;

VL_ATTR_COLD void Vfilter_fsm_tb___024root___stl_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state;
    if (Vfilter_fsm_tb__ConstPool__TABLE_hb14e552a_0
        [__Vtableidx1]) {
        vlSelfRef.filter_fsm_tb__DOT__filter_number 
            = Vfilter_fsm_tb__ConstPool__TABLE_h850271f5_0
            [__Vtableidx1];
    }
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge 
        = ((IData)(vlSelfRef.filter_fsm_tb__DOT__next_button) 
           > (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_q));
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge 
        = ((IData)(vlSelfRef.filter_fsm_tb__DOT__prev_button) 
           > (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_q));
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_state 
        = ((8U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
            ? 0U : ((4U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                     ? ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                         ? 0U : ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                  ? 0U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                           ? 0U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                    ? 3U
                                                    : 4U))))
                     : ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                         ? ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                             ? ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                 ? 4U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                          ? 2U : 3U))
                             : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                 ? 3U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                          ? 1U : 2U)))
                         : ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                             ? ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                 ? 2U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                          ? 0U : 1U))
                             : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                 ? 1U : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                          ? 4U : 0U))))));
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root___eval_triggers__stl(Vfilter_fsm_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfilter_fsm_tb___024root___eval_phase__stl(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfilter_fsm_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfilter_fsm_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__act(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge filter_fsm_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__nba(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge filter_fsm_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfilter_fsm_tb___024root___ctor_var_reset(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->filter_fsm_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__next_button = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__prev_button = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__filter_number = VL_RAND_RESET_I(3);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__next_button_q = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__prev_button_q = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__next_button_edge = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__prev_button_edge = VL_RAND_RESET_I(1);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->filter_fsm_tb__DOT__dut__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__filter_fsm_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
