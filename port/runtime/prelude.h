/* prelude.h: included ahead of every game source in the native build (port/tools/native_build.py).
   The game's C was written for SHC on the SH-4: int and pointers are both 32 bits there, and the code moves addresses
   through ints freely. On the host the game's memory lies below 2 GB (port/runtime/runner.c), so an address fits an int
   and comes back whole. */
#ifndef PORT_PRELUDE_H
#define PORT_PRELUDE_H
#define NATIVE_PORT 1
#endif

/* SHC's intrinsics, as host functions (port/runtime/shim.c); some sources declare them, so they are plain names */
#define _builtin_fabsf port_fabsf
#define _builtin_sqrtf port_sqrtf
#define _builtin_get_cr port_get_cr
#define _builtin_set_cr port_set_cr
#define _builtin_set_imask port_set_imask
