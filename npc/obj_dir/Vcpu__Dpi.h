// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPU__DPI_H_
#define VERILATED_VCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at cpu.v:170:30
    extern void exit_m();
    // DPI import at design/data_mem.v:12:30
    extern void npc_host_read(int addr, int len, int* data);
    // DPI import at design/data_mem.v:13:30
    extern void npc_host_write(int addr, int len, int data);
    // DPI import at design/reg_file.v:15:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at cpu.v:171:30
    extern void set_npc_state(int halt_ret);

#ifdef __cplusplus
}
#endif

#endif  // guard
