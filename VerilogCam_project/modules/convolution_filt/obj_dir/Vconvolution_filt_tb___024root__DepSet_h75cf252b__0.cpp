// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconvolution_filt_tb.h for the primary calling header

#include "Vconvolution_filt_tb__pch.h"
#include "Vconvolution_filt_tb__Syms.h"
#include "Vconvolution_filt_tb___024root.h"

VlCoroutine Vconvolution_filt_tb___024root___eval_initial__TOP__Vtiming__1__0(Vconvolution_filt_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root___eval_initial__TOP__Vtiming__1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         86);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 0U;
    vlSelfRef.convolution_filt_tb__DOT__audio_pitch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           5\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           6\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           7\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           8\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           9\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          10\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          11\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          12\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          13\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          14\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          15\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          16\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          17\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          18\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          19\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          20\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          21\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          22\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          23\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          24\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           5\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           6\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           7\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           8\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           9\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          10\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          11\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          12\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          13\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          14\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          15\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          16\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          17\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          18\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          19\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          20\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          21\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          22\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          23\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          24\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           5\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           6\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           7\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           8\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           9\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          10\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          11\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          12\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          13\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          14\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          15\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          16\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          17\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          18\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          19\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          20\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          21\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          22\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          23\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          24\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 2U;
    vlSelfRef.convolution_filt_tb__DOT__audio_pitch = 0x40U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           5\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           6\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           7\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           8\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           9\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          10\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          11\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          12\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          13\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          14\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          15\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          16\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          17\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          18\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          19\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          20\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          21\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          22\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          23\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          24\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           5\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           6\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           7\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           8\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:           9\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          10\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          11\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          12\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          13\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          14\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          15\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          16\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          17\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          18\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          19\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          20\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          21\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          22\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          23\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:95: Assertion failed in %Nconvolution_filt_tb.unnamedblk1.unnamedblk2:          24\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 95, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [0U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:110: Assertion failed in %Nconvolution_filt_tb.unnamedblk3.unnamedblk4:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 110, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         114);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__audio_pitch = 0xafU;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         119);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:121: Assertion failed in %Nconvolution_filt_tb.unnamedblk5.unnamedblk6:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 121, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:132: Assertion failed in %Nconvolution_filt_tb.unnamedblk7.unnamedblk8:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 132, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         136);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [1U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:143: Assertion failed in %Nconvolution_filt_tb.unnamedblk9.unnamedblk10:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 143, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         147);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         152);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         152);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         152);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         152);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         152);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x18U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}
