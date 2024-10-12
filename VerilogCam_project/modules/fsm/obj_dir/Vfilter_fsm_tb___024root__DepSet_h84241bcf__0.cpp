// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfilter_fsm_tb.h for the primary calling header

#include "Vfilter_fsm_tb__pch.h"
#include "Vfilter_fsm_tb___024root.h"

VlCoroutine Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__0(Vfilter_fsm_tb___024root* vlSelf);
VlCoroutine Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__1(Vfilter_fsm_tb___024root* vlSelf);

void Vfilter_fsm_tb___024root___eval_initial(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__filter_fsm_tb__DOT__clk__0 
        = vlSelfRef.filter_fsm_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__0(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.filter_fsm_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "filter_fsm_tb.sv", 
                                             27);
        vlSelfRef.filter_fsm_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.filter_fsm_tb__DOT__clk)));
    }
}

void Vfilter_fsm_tb___024root___act_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf);

void Vfilter_fsm_tb___024root___eval_act(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfilter_fsm_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfilter_fsm_tb___024root___act_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vfilter_fsm_tb___024root___nba_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf);
void Vfilter_fsm_tb___024root___nba_comb__TOP__0(Vfilter_fsm_tb___024root* vlSelf);

void Vfilter_fsm_tb___024root___eval_nba(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfilter_fsm_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfilter_fsm_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vfilter_fsm_tb__ConstPool__TABLE_hb14e552a_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vfilter_fsm_tb__ConstPool__TABLE_h850271f5_0;

VL_INLINE_OPT void Vfilter_fsm_tb___024root___nba_sequent__TOP__0(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_q 
        = vlSelfRef.filter_fsm_tb__DOT__prev_button;
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_q 
        = vlSelfRef.filter_fsm_tb__DOT__next_button;
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state 
        = vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_state;
    __Vtableidx1 = vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state;
    if (Vfilter_fsm_tb__ConstPool__TABLE_hb14e552a_0
        [__Vtableidx1]) {
        vlSelfRef.filter_fsm_tb__DOT__filter_number 
            = Vfilter_fsm_tb__ConstPool__TABLE_h850271f5_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void Vfilter_fsm_tb___024root___nba_comb__TOP__0(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge 
        = ((IData)(vlSelfRef.filter_fsm_tb__DOT__prev_button) 
           > (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_q));
    vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge 
        = ((IData)(vlSelfRef.filter_fsm_tb__DOT__next_button) 
           > (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_q));
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

void Vfilter_fsm_tb___024root___timing_resume(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfilter_fsm_tb___024root___eval_triggers__act(Vfilter_fsm_tb___024root* vlSelf);

bool Vfilter_fsm_tb___024root___eval_phase__act(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfilter_fsm_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfilter_fsm_tb___024root___timing_resume(vlSelf);
        Vfilter_fsm_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfilter_fsm_tb___024root___eval_phase__nba(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfilter_fsm_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__nba(Vfilter_fsm_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__act(Vfilter_fsm_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfilter_fsm_tb___024root___eval(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval\n"); );
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
            Vfilter_fsm_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("filter_fsm_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfilter_fsm_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("filter_fsm_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfilter_fsm_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfilter_fsm_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfilter_fsm_tb___024root___eval_debug_assertions(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
