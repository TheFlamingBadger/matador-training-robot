// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_lcd_tb.h for the primary calling header

#include "Vhello_lcd_tb__pch.h"
#include "Vhello_lcd_tb__Syms.h"
#include "Vhello_lcd_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__1(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
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
    vlSelfRef.hello_lcd_tb__DOT__reset = 1U;
    vlSelfRef.hello_lcd_tb__DOT__filter_number = 5U;
    vlSelfRef.hello_lcd_tb__DOT__waitrequest = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         53);
    vlSelfRef.hello_lcd_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         55);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x146U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:56: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 56, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         57);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x169U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:58: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 58, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         59);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x16cU != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:60: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 60, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         61);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x174U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:62: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 62, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         63);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x165U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:64: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 64, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         65);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x172U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:66: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 66, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         67);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x13aU != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:68: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 68, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         69);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x120U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:70: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 70, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         71);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x123U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:72: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 72, "");
        }
    }
    vlSelfRef.hello_lcd_tb__DOT__reset = 1U;
    vlSelfRef.hello_lcd_tb__DOT__filter_number = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         77);
    vlSelfRef.hello_lcd_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         79);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((1U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                 << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:80: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 80, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         81);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x146U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:82: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 82, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         83);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x169U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:84: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 84, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         85);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x16cU != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:86: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 86, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         87);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x174U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:88: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 88, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         89);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x165U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:90: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 90, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         91);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x172U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:92: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 92, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         93);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x13aU != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:94: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 94, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         95);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x120U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:96: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 96, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         97);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0x132U != (((IData)(vlSelfRef.hello_lcd_tb__DOT__address) 
                                     << 8U) | (IData)(vlSelfRef.hello_lcd_tb__DOT__writedata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: hello_lcd_tb.sv:98: Assertion failed in %Nhello_lcd_tb: %3#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.hello_lcd_tb__DOT__writedata));
            VL_STOP_MT("hello_lcd_tb.sv", 98, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "hello_lcd_tb.sv", 
                                         100);
    VL_FINISH_MT("hello_lcd_tb.sv", 101, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_lcd_tb___024root___dump_triggers__act(Vhello_lcd_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello_lcd_tb___024root___eval_triggers__act(Vhello_lcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.hello_lcd_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hello_lcd_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__hello_lcd_tb__DOT__clk__0 
        = vlSelfRef.hello_lcd_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello_lcd_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
