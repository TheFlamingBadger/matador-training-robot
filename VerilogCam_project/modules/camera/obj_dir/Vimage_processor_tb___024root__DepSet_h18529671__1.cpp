// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimage_processor_tb.h for the primary calling header

#include "Vimage_processor_tb__pch.h"
#include "Vimage_processor_tb___024root.h"

VL_INLINE_OPT void Vimage_processor_tb___024root___nba_sequent__TOP__1(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.image_processor_tb__DOT__resend) {
        vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__col = 0U;
        vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__row = 0U;
        vlSelfRef.image_processor_tb__DOT__rdaddress = 0U;
    } else if (vlSelfRef.image_processor_tb__DOT__vga_ready) {
        if (VL_LTES_III(32, 0x13fU, vlSelfRef.image_processor_tb__DOT__dut__DOT__col)) {
            vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__row 
                = (VL_LTES_III(32, 0xefU, vlSelfRef.image_processor_tb__DOT__dut__DOT__row)
                    ? 0U : ((IData)(1U) + vlSelfRef.image_processor_tb__DOT__dut__DOT__row));
            vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__col = 0U;
        } else {
            vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__col 
                = ((IData)(1U) + vlSelfRef.image_processor_tb__DOT__dut__DOT__col);
        }
        vlSelfRef.image_processor_tb__DOT__dut__DOT__row_old 
            = vlSelfRef.image_processor_tb__DOT__dut__DOT__row;
        vlSelfRef.image_processor_tb__DOT__dut__DOT__col_old 
            = vlSelfRef.image_processor_tb__DOT__dut__DOT__col;
        vlSelfRef.image_processor_tb__DOT__rdaddress 
            = (0x1ffffU & (VL_MULS_III(32, (IData)(0x140U), vlSelfRef.image_processor_tb__DOT__dut__DOT__row) 
                           + vlSelfRef.image_processor_tb__DOT__dut__DOT__col));
    }
    if (((1U < (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__row_address)) 
         & (0x140U > (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__row_address)))) {
        vlSelfRef.image_processor_tb__DOT__dut__DOT__r_out 
            = ((0xfU < (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm))
                ? 0xfU : (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm)))
                           ? 0U : (0xfU & (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm))));
        vlSelfRef.image_processor_tb__DOT__dut__DOT__g_out 
            = ((0xfU < (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm))
                ? 0xfU : (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm)))
                           ? 0U : (0xfU & (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm))));
        vlSelfRef.image_processor_tb__DOT__dut__DOT__b_out 
            = ((0xfU < (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm))
                ? 0xfU : (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm)))
                           ? 0U : (0xfU & (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm))));
        if ((0U != VL_EXTENDS_II(32,12, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_sum)))) {
            vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm 
                = (0x1fffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total, 
                                         (0x1ffffU 
                                          & VL_EXTENDS_II(17,12, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_sum)))));
            vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm 
                = (0x1fffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total, 
                                         (0x1ffffU 
                                          & VL_EXTENDS_II(17,12, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_sum)))));
            vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm 
                = (0x1fffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total, 
                                         (0x1ffffU 
                                          & VL_EXTENDS_II(17,12, (IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_sum)))));
            if (vlSelfRef.image_processor_tb__DOT__div_flag) {
                if (vlSelfRef.image_processor_tb__DOT__div_flag) {
                    vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total 
                        = (0x1ffffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_f, 
                                                  (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__r_mod)))));
                    vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total 
                        = (0x1ffffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_f, 
                                                  (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__g_mod)))));
                    vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total 
                        = (0x1ffffU & VL_DIVS_III(17, vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_f, 
                                                  (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__b_mod)))));
                }
            } else {
                vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total 
                    = (0x1ffffU & VL_MULS_III(17, (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__r_mod))), vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_f));
                vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total 
                    = (0x1ffffU & VL_MULS_III(17, (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__g_mod))), vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_f));
                vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total 
                    = (0x1ffffU & VL_MULS_III(17, (0x1ffffU 
                                                   & VL_EXTENDS_II(17,6, (IData)(vlSelfRef.image_processor_tb__DOT__b_mod))), vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_f));
            }
        } else if (((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,17, vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_f)) 
                     & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,17, vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_f))) 
                    & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,17, vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_f)))) {
            vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm = 0xfU;
            vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm = 0xfU;
            vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm = 0xfU;
        } else {
            vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm = 0U;
            vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm = 0U;
            vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm = 0U;
        }
        vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_f 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5
                                         [0U]) + VL_EXTENDS_II(17,16, 
                                                               vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5
                                                               [1U])));
        vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_f 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5
                                         [0U]) + VL_EXTENDS_II(17,16, 
                                                               vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5
                                                               [1U])));
        vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_f 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5
                                         [0U]) + VL_EXTENDS_II(17,16, 
                                                               vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5
                                                               [1U])));
    }
    vlSelfRef.image_processor_tb__DOT__dut__DOT__col 
        = vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__col;
    vlSelfRef.image_processor_tb__DOT__dut__DOT__row 
        = vlSelfRef.__Vdly__image_processor_tb__DOT__dut__DOT__row;
    if (vlSelfRef.__VdlySet__image_processor_tb__DOT__dut__DOT__r_total_i5__v0) {
        vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[0U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v0;
        vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[1U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v1;
    }
    if (vlSelfRef.__VdlySet__image_processor_tb__DOT__dut__DOT__g_total_i5__v0) {
        vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[0U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v0;
        vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[1U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v1;
    }
    if (vlSelfRef.__VdlySet__image_processor_tb__DOT__dut__DOT__b_total_i5__v0) {
        vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[0U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v0;
        vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[1U] 
            = vlSelfRef.__VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v1;
    }
}

void Vimage_processor_tb___024root___timing_resume(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vimage_processor_tb___024root___eval_triggers__act(Vimage_processor_tb___024root* vlSelf);
void Vimage_processor_tb___024root___eval_act(Vimage_processor_tb___024root* vlSelf);

bool Vimage_processor_tb___024root___eval_phase__act(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vimage_processor_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vimage_processor_tb___024root___timing_resume(vlSelf);
        Vimage_processor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vimage_processor_tb___024root___eval_nba(Vimage_processor_tb___024root* vlSelf);

bool Vimage_processor_tb___024root___eval_phase__nba(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vimage_processor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__nba(Vimage_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__act(Vimage_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimage_processor_tb___024root___eval(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval\n"); );
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
            Vimage_processor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("image_processor_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vimage_processor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("image_processor_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vimage_processor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vimage_processor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vimage_processor_tb___024root___eval_debug_assertions(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
