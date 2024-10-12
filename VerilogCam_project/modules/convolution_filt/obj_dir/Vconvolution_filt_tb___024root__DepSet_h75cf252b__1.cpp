// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconvolution_filt_tb.h for the primary calling header

#include "Vconvolution_filt_tb__pch.h"
#include "Vconvolution_filt_tb__Syms.h"
#include "Vconvolution_filt_tb___024root.h"

VlCoroutine Vconvolution_filt_tb___024root___eval_initial__TOP__Vtiming__1__1(Vconvolution_filt_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_sobel_kernels
                         [2U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:154: Assertion failed in %Nconvolution_filt_tb.unnamedblk11.unnamedblk12:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 154, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         158);
    vlSelfRef.convolution_filt_tb__DOT__filter_number = 3U;
    vlSelfRef.convolution_filt_tb__DOT__audio_pitch = 0xc8U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         164);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           0\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         164);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         164);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         164);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           3\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         164);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [1U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][1U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [2U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][2U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [3U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][3U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [4U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][4U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 5U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [5U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][5U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 6U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [6U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][6U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 7U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [7U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][7U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [8U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][8U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 9U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [9U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][9U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xaU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xaU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xaU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xbU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xbU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xbU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xcU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xcU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xcU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xdU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xdU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xdU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xeU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xeU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xeU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0xfU;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0xfU] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0xfU]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x10U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x10U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x10U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x11U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x11U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x11U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x12U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x12U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x12U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x13U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x13U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x13U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x14U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x14U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x14U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x15U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x15U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x15U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x16U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x16U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x16U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x17U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x17U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x17U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x18U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.convolution_filt_tb__DOT__curr_kernel
                         [0x18U] != vlSelfRef.convolution_filt_tb__DOT__expected_clarity_kernels
                         [3U][0x18U]))) {
            VL_WRITEF_NX("[%0t] %%Fatal: convolution_filt_tb.sv:166: Assertion failed in %Nconvolution_filt_tb.unnamedblk13.unnamedblk14:           4\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("convolution_filt_tb.sv", 166, "");
        }
    }
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 0x19U;
    vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "convolution_filt_tb.sv", 
                                         170);
    VL_FINISH_MT("convolution_filt_tb.sv", 171, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconvolution_filt_tb___024root___dump_triggers__act(Vconvolution_filt_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vconvolution_filt_tb___024root___eval_triggers__act(Vconvolution_filt_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.convolution_filt_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__convolution_filt_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__convolution_filt_tb__DOT__clk__0 
        = vlSelfRef.convolution_filt_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconvolution_filt_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
