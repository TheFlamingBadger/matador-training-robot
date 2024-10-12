// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimage_processor_tb.h for the primary calling header

#include "Vimage_processor_tb__pch.h"
#include "Vimage_processor_tb___024root.h"

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_static__TOP(Vimage_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_static(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vimage_processor_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_static__TOP(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.image_processor_tb__DOT__dut__DOT__col = 0U;
    vlSelfRef.image_processor_tb__DOT__dut__DOT__col_old = 0U;
    vlSelfRef.image_processor_tb__DOT__dut__DOT__row = 0U;
    vlSelfRef.image_processor_tb__DOT__dut__DOT__row_old = 0U;
}

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_final(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__stl(Vimage_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vimage_processor_tb___024root___eval_phase__stl(Vimage_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_settle(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_settle\n"); );
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
            Vimage_processor_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("image_processor_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vimage_processor_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__stl(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vimage_processor_tb___024root___stl_sequent__TOP__0(Vimage_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_stl(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vimage_processor_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vimage_processor_tb___024root___stl_sequent__TOP__0(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x18U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x18U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x17U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x17U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x16U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x16U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x15U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x15U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x14U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x14U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x13U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x13U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x12U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x12U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x11U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x11U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0x10U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0x10U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xfU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xfU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xeU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xeU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xdU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xdU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xcU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xcU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xbU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xbU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0xaU] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0xaU];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[9U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [9U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[8U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [8U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[7U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [7U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[6U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [6U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[5U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [5U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[4U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [4U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[3U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [3U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[2U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [2U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[1U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [1U];
    vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0U] 
        = vlSelfRef.image_processor_tb__DOT__curr_kernel
        [0U];
}

VL_ATTR_COLD void Vimage_processor_tb___024root___eval_triggers__stl(Vimage_processor_tb___024root* vlSelf);

VL_ATTR_COLD bool Vimage_processor_tb___024root___eval_phase__stl(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vimage_processor_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vimage_processor_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__act(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge image_processor_tb.clk_25_vga)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__nba(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge image_processor_tb.clk_25_vga)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vimage_processor_tb___024root___ctor_var_reset(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->image_processor_tb__DOT__clk_25_vga = VL_RAND_RESET_I(1);
    vlSelf->image_processor_tb__DOT__resend = VL_RAND_RESET_I(1);
    vlSelf->image_processor_tb__DOT__vga_ready = VL_RAND_RESET_I(1);
    vlSelf->image_processor_tb__DOT__rddata = VL_RAND_RESET_I(12);
    vlSelf->image_processor_tb__DOT__r_mod = VL_RAND_RESET_I(6);
    vlSelf->image_processor_tb__DOT__g_mod = VL_RAND_RESET_I(6);
    vlSelf->image_processor_tb__DOT__b_mod = VL_RAND_RESET_I(6);
    vlSelf->image_processor_tb__DOT__div_flag = VL_RAND_RESET_I(1);
    vlSelf->image_processor_tb__DOT__rdaddress = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__curr_kernel[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->image_processor_tb__DOT__prev_address = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT____Vcellinp__dut__curr_kernel[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->image_processor_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__col = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__col_old = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__row = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__row_old = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 320; ++__Vi1) {
            vlSelf->image_processor_tb__DOT__dut__DOT__row_lsfr[__Vi0][__Vi1] = VL_RAND_RESET_I(12);
        }
    }
    vlSelf->image_processor_tb__DOT__dut__DOT__row_address = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__kernel_values[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->image_processor_tb__DOT__dut__DOT__kernel_sum = VL_RAND_RESET_I(12);
    vlSelf->image_processor_tb__DOT__dut__DOT__processed_data = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_products[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_products[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_products[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_row_l[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_row_l[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_row_l[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_total_indexed[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_total_indexed[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_total_indexed[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_total_i2[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_total_i2[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_total_i2[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_total_i3[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_total_i3[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_total_i3[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_total_i4[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_total_i4[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_total_i4[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_total_i5[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_total_i5[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_total_i5[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->image_processor_tb__DOT__dut__DOT__r_total_f = VL_RAND_RESET_I(17);
    vlSelf->image_processor_tb__DOT__dut__DOT__g_total_f = VL_RAND_RESET_I(17);
    vlSelf->image_processor_tb__DOT__dut__DOT__b_total_f = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__r_subtotals[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__g_subtotals[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->image_processor_tb__DOT__dut__DOT__b_subtotals[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->image_processor_tb__DOT__dut__DOT__r_total = VL_RAND_RESET_I(17);
    vlSelf->image_processor_tb__DOT__dut__DOT__g_total = VL_RAND_RESET_I(17);
    vlSelf->image_processor_tb__DOT__dut__DOT__b_total = VL_RAND_RESET_I(17);
    vlSelf->image_processor_tb__DOT__dut__DOT__r_norm = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT__g_norm = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT__b_norm = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT__r_out = VL_RAND_RESET_I(4);
    vlSelf->image_processor_tb__DOT__dut__DOT__g_out = VL_RAND_RESET_I(4);
    vlSelf->image_processor_tb__DOT__dut__DOT__b_out = VL_RAND_RESET_I(4);
    vlSelf->image_processor_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hc38d7be4__0 = VL_RAND_RESET_I(5);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h45361261__0 = VL_RAND_RESET_I(5);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h1a443aeb__0 = VL_RAND_RESET_I(5);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hbf167d76__0 = VL_RAND_RESET_I(12);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h467b6c63__0 = VL_RAND_RESET_I(12);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h525641c6__0 = VL_RAND_RESET_I(12);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hd07652d5__0 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hdf38932d__0 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h0fbecb6e__0 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hd07652d5__1 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_hdf38932d__1 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h0fbecb6e__1 = VL_RAND_RESET_I(13);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h723c879e__0 = VL_RAND_RESET_I(14);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h6cccdc90__0 = VL_RAND_RESET_I(14);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_had089f91__0 = VL_RAND_RESET_I(14);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h723c879e__1 = VL_RAND_RESET_I(14);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_h6cccdc90__1 = VL_RAND_RESET_I(14);
    vlSelf->image_processor_tb__DOT__dut__DOT____Vlvbound_had089f91__1 = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__image_processor_tb__DOT__dut__DOT__col = 0;
    vlSelf->__Vdly__image_processor_tb__DOT__dut__DOT__row = 0;
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__image_processor_tb__DOT__dut__DOT__r_total_i5__v0 = 0;
    vlSelf->__VdlySet__image_processor_tb__DOT__dut__DOT__g_total_i5__v0 = 0;
    vlSelf->__VdlySet__image_processor_tb__DOT__dut__DOT__b_total_i5__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__image_processor_tb__DOT__clk_25_vga__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
