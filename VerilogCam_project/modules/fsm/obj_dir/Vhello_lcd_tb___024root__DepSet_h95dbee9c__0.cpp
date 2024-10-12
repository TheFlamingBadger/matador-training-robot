// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_lcd_tb.h for the primary calling header

#include "Vhello_lcd_tb__pch.h"
#include "Vhello_lcd_tb___024root.h"

VlCoroutine Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__0(Vhello_lcd_tb___024root* vlSelf);
VlCoroutine Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__1(Vhello_lcd_tb___024root* vlSelf);

void Vhello_lcd_tb___024root___eval_initial(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__hello_lcd_tb__DOT__clk__0 
        = vlSelfRef.hello_lcd_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__0(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hello_lcd_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "hello_lcd_tb.sv", 
                                             37);
        vlSelfRef.hello_lcd_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.hello_lcd_tb__DOT__clk)));
    }
}

void Vhello_lcd_tb___024root___act_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf);

void Vhello_lcd_tb___024root___eval_act(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhello_lcd_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhello_lcd_tb___024root___act_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
            ? (VL_GTS_III(32, 0xaU, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
                               ? (((IData)(vlSelfRef.hello_lcd_tb__DOT__waitrequest) 
                                   | VL_LTES_III(32, 9U, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index))
                                   ? 0U : 1U) : 0U));
}

void Vhello_lcd_tb___024root___nba_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf);

void Vhello_lcd_tb___024root___eval_nba(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhello_lcd_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhello_lcd_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhello_lcd_tb___024root___nba_sequent__TOP__0(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9U != vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)) {
        vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[9U] 
            = ((0U == (IData)(vlSelfRef.hello_lcd_tb__DOT__filter_number))
                ? 0x130U : ((1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__filter_number))
                             ? 0x131U : ((2U == (IData)(vlSelfRef.hello_lcd_tb__DOT__filter_number))
                                          ? 0x132U : 
                                         ((3U == (IData)(vlSelfRef.hello_lcd_tb__DOT__filter_number))
                                           ? 0x133U
                                           : ((4U == (IData)(vlSelfRef.hello_lcd_tb__DOT__filter_number))
                                               ? 0x134U
                                               : 0x123U)))));
    }
    if (vlSelfRef.hello_lcd_tb__DOT__reset) {
        vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index = 0U;
        vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state = 0U;
    } else {
        if (((~ (IData)(vlSelfRef.hello_lcd_tb__DOT__waitrequest)) 
             & (1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state)))) {
            vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index 
                = vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_instruction_index;
        }
        vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state 
            = vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_state;
    }
    vlSelfRef.hello_lcd_tb__DOT__dut__DOT__next_instruction_index 
        = ((IData)(1U) + vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index);
    vlSelfRef.hello_lcd_tb__DOT__chipselect = (1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state));
    vlSelfRef.hello_lcd_tb__DOT__write = (1U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state));
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

void Vhello_lcd_tb___024root___timing_resume(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhello_lcd_tb___024root___eval_triggers__act(Vhello_lcd_tb___024root* vlSelf);

bool Vhello_lcd_tb___024root___eval_phase__act(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhello_lcd_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhello_lcd_tb___024root___timing_resume(vlSelf);
        Vhello_lcd_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhello_lcd_tb___024root___eval_phase__nba(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhello_lcd_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__nba(Vhello_lcd_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__act(Vhello_lcd_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello_lcd_tb___024root___eval(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval\n"); );
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
            Vhello_lcd_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hello_lcd_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhello_lcd_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hello_lcd_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhello_lcd_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhello_lcd_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhello_lcd_tb___024root___eval_debug_assertions(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
