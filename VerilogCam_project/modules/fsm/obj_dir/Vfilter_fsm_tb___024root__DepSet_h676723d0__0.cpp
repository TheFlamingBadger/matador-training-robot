// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfilter_fsm_tb.h for the primary calling header

#include "Vfilter_fsm_tb__pch.h"
#include "Vfilter_fsm_tb__Syms.h"
#include "Vfilter_fsm_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__1(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
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
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         37);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:40: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 40, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.filter_fsm_tb__DOT__filter_number)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:43: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 43, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__next_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         46);
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         47);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((1U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:50: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 50, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((1U != (IData)(vlSelfRef.filter_fsm_tb__DOT__filter_number)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:53: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 53, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__next_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         56);
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         57);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((2U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:60: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 60, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((2U != (IData)(vlSelfRef.filter_fsm_tb__DOT__filter_number)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:63: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 63, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__next_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         66);
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         67);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((3U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:70: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 70, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((3U != (IData)(vlSelfRef.filter_fsm_tb__DOT__filter_number)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:73: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 73, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__next_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         76);
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         77);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((4U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:80: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 80, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((4U != (IData)(vlSelfRef.filter_fsm_tb__DOT__filter_number)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:83: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 83, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__next_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         86);
    vlSelfRef.filter_fsm_tb__DOT__next_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         87);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:90: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 90, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         93);
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         94);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((4U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:97: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 97, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         100);
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         101);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((3U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:104: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 104, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         107);
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         108);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((2U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:111: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 111, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         114);
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         115);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((1U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:118: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 118, "");
        }
    }
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         121);
    vlSelfRef.filter_fsm_tb__DOT__prev_button = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         122);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: filter_fsm_tb.sv:125: Assertion failed in %Nfilter_fsm_tb\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("filter_fsm_tb.sv", 125, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "filter_fsm_tb.sv", 
                                         128);
    VL_FINISH_MT("filter_fsm_tb.sv", 129, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfilter_fsm_tb___024root___dump_triggers__act(Vfilter_fsm_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfilter_fsm_tb___024root___eval_triggers__act(Vfilter_fsm_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.filter_fsm_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__filter_fsm_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__filter_fsm_tb__DOT__clk__0 
        = vlSelfRef.filter_fsm_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfilter_fsm_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
