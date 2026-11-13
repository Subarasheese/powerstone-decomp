/* shim.c: host C for console library calls the game's C makes (the Katana SDK, the NAOMI library, the C runtime).
   Each replaces the stub native_build.py would otherwise write for that name. Empty so far: the first runs list what
   the game reaches (port/README.md). */
#include "port.h"

#include <math.h>
#include <string.h>

#include "play_math.h"

/* SHC's intrinsics (port/runtime/prelude.h); port_sr stands for the status register */
float port_fabsf(float x) { return fabsf(x); }
float port_sqrtf(float x) { return sqrtf(x); }
int port_get_cr(void) { return port_sr; }
void port_set_cr(int v) { port_sr = v; }
void port_set_imask(int m) { port_sr = (port_sr & ~0xF0) | ((m & 15) << 4); }
int port_get_imask(void) { return (port_sr >> 4) & 15; }
static int fpscr = 0x00040001;
int port_get_fpscr(void) { return fpscr; }
void port_set_fpscr(int v) { fpscr = v; }
int port_get_gbr(void) { return 0; }
int port_get_vbr(void) { return 0x8C000000; }
void port_prefetch(uint32_t p) { (void)p; } /* also the store queues' flush: the port has no tile accelerator to feed */
int port_tas(uint32_t p)
{
    unsigned char *b = (unsigned char *)(uintptr_t)p;
    int was_zero = *b == 0;
    *b |= 0x80;
    return was_zero;
}
uint32_t port_strcpy(uint32_t d, uint32_t s)
{
    strcpy((char *)(uintptr_t)d, (const char *)(uintptr_t)s);
    return d;
}

/* the FPU's back bank as the library uses it: XMTRX, the matrix FTRV applies (XF0-XF15 in the order ld_ext loads them).
   FIPR, FTRV and FSCA give the console's bits through sa_numeric */
float port_xmtrx[16];
void port_ld_ext(uint32_t m) { memcpy(port_xmtrx, (void *)(uintptr_t)m, sizeof port_xmtrx); }
void port_st_ext(uint32_t m) { memcpy((void *)(uintptr_t)m, port_xmtrx, sizeof port_xmtrx); }
void port_ftrv(uint32_t in, uint32_t out)
{
    float v[4], r[4];
    memcpy(v, (void *)(uintptr_t)in, sizeof v);
    sa_ftrv(port_xmtrx, v, r);
    memcpy((void *)(uintptr_t)out, r, sizeof r);
}
float port_fipr(uint32_t a, uint32_t b) { return sa_fipr((const float *)(uintptr_t)a, (const float *)(uintptr_t)b); }
void port_fsca(uint32_t angle, uint32_t sinv, uint32_t cosv)
{
    float sc[2];
    sa_fsca(angle, sc);
    *(float *)(uintptr_t)sinv = sc[0];
    *(float *)(uintptr_t)cosv = sc[1];
}


/* inline assembly the port has no host body for (port/tools/native_build.py) */
void port_asm_unimplemented(const char *name)
{
    port_unimplemented(name, 0);
}
