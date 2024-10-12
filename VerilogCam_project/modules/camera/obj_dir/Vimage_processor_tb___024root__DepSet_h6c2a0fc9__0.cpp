// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimage_processor_tb.h for the primary calling header

#include "Vimage_processor_tb__pch.h"
#include "Vimage_processor_tb__Syms.h"
#include "Vimage_processor_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vimage_processor_tb___024root___eval_initial__TOP__Vtiming__1(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    __Vtemp_1[3U] = 0x615fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.image_processor_tb__DOT__resend = 0U;
    vlSelfRef.image_processor_tb__DOT__vga_ready = 1U;
    vlSelfRef.image_processor_tb__DOT__r_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__g_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__b_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__div_flag = 0U;
    vlSelfRef.image_processor_tb__DOT__rddata = 0x888U;
    vlSelfRef.image_processor_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c0aU, vlSelfRef.image_processor_tb__DOT__unnamedblk1__DOT__i)) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((vlSelfRef.image_processor_tb__DOT__rdaddress 
                             == ((IData)(1U) + vlSelfRef.image_processor_tb__DOT__prev_address)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: image_processor_tb.sv:74: Assertion failed in %Nimage_processor_tb.unnamedblk1\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("image_processor_tb.sv", 74, "");
            }
        }
        co_await vlSelfRef.__VdlySched.delay(0x28ULL, 
                                             nullptr, 
                                             "image_processor_tb.sv", 
                                             75);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.image_processor_tb__DOT__prev_address 
            = vlSelfRef.image_processor_tb__DOT__rdaddress;
        vlSelfRef.image_processor_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.image_processor_tb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.image_processor_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c0aU, vlSelfRef.image_processor_tb__DOT__unnamedblk2__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x28ULL, 
                                             nullptr, 
                                             "image_processor_tb.sv", 
                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((0x22088220U != ((0x3c000000U 
                                              & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                 << 0x12U)) 
                                             | ((0x3c00000U 
                                                 & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                    << 0xeU)) 
                                                | ((0xf0000U 
                                                    & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                       << 0xcU)) 
                                                   | ((0xf000U 
                                                       & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                          << 8U)) 
                                                      | ((0x3c0U 
                                                          & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                             << 6U)) 
                                                         | (0x3cU 
                                                            & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                               << 2U)))))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: image_processor_tb.sv:82: Assertion failed in %Nimage_processor_tb.unnamedblk2\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("image_processor_tb.sv", 82, "");
            }
        }
        vlSelfRef.image_processor_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.image_processor_tb__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.image_processor_tb__DOT__rddata = 0xfffU;
    vlSelfRef.image_processor_tb__DOT__g_mod = 0U;
    vlSelfRef.image_processor_tb__DOT__b_mod = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2eff40ULL, 
                                         nullptr, "image_processor_tb.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x3fc00000U != ((0x3c000000U 
                                          & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                             << 0x12U)) 
                                         | ((0x3c00000U 
                                             & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                << 0xeU)) 
                                            | ((0xf0000U 
                                                & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                   << 0xcU)) 
                                               | ((0xf000U 
                                                   & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                      << 8U)) 
                                                  | ((0x3c0U 
                                                      & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                         << 6U)) 
                                                     | (0x3cU 
                                                        & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                           << 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: image_processor_tb.sv:91: Assertion failed in %Nimage_processor_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("image_processor_tb.sv", 91, "");
        }
    }
    vlSelfRef.image_processor_tb__DOT__r_mod = 2U;
    vlSelfRef.image_processor_tb__DOT__g_mod = 2U;
    vlSelfRef.image_processor_tb__DOT__b_mod = 2U;
    vlSelfRef.image_processor_tb__DOT__div_flag = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2eff40ULL, 
                                         nullptr, "image_processor_tb.sv", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x1dc771dcU != ((0x3c000000U 
                                          & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                             << 0x12U)) 
                                         | ((0x3c00000U 
                                             & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                << 0xeU)) 
                                            | ((0xf0000U 
                                                & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                   << 0xcU)) 
                                               | ((0xf000U 
                                                   & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                      << 8U)) 
                                                  | ((0x3c0U 
                                                      & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                         << 6U)) 
                                                     | (0x3cU 
                                                        & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                           << 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: image_processor_tb.sv:100: Assertion failed in %Nimage_processor_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("image_processor_tb.sv", 100, "");
        }
    }
    vlSelfRef.image_processor_tb__DOT__rddata = 0x888U;
    vlSelfRef.image_processor_tb__DOT__r_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__g_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__b_mod = 1U;
    vlSelfRef.image_processor_tb__DOT__div_flag = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2eff40ULL, 
                                         nullptr, "image_processor_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.image_processor_tb__DOT__r_mod = 2U;
    vlSelfRef.image_processor_tb__DOT__g_mod = 2U;
    vlSelfRef.image_processor_tb__DOT__b_mod = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2eff40ULL, 
                                         nullptr, "image_processor_tb.sv", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x3fcff3fcU != ((0x3c000000U 
                                          & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                             << 0x12U)) 
                                         | ((0x3c00000U 
                                             & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                << 0xeU)) 
                                            | ((0xf0000U 
                                                & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                   << 0xcU)) 
                                               | ((0xf000U 
                                                   & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                      << 8U)) 
                                                  | ((0x3c0U 
                                                      & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                         << 6U)) 
                                                     | (0x3cU 
                                                        & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                           << 2U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: image_processor_tb.sv:115: Assertion failed in %Nimage_processor_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("image_processor_tb.sv", 115, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "image_processor_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("image_processor_tb.sv", 120, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimage_processor_tb___024root___dump_triggers__act(Vimage_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vimage_processor_tb___024root___eval_triggers__act(Vimage_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.image_processor_tb__DOT__clk_25_vga) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__image_processor_tb__DOT__clk_25_vga__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__image_processor_tb__DOT__clk_25_vga__0 
        = vlSelfRef.image_processor_tb__DOT__clk_25_vga;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimage_processor_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
