/* shim.c: host C for console library calls the game's C makes (the Katana SDK, the NAOMI library, the C runtime).
   Each replaces the stub native_build.py would otherwise write for that name. Empty so far: the first runs list what
   the game reaches (port/README.md). */
#include "port.h"

#include <math.h>

/* SHC's intrinsics (port/runtime/prelude.h); port_sr stands for the status register */
float port_fabsf(float x) { return fabsf(x); }
float port_sqrtf(float x) { return sqrtf(x); }
int port_get_cr(void) { return port_sr; }
void port_set_cr(int v) { port_sr = v; }
void port_set_imask(int m) { port_sr = (port_sr & ~0xF0) | ((m & 15) << 4); }

/* --- controllers (Katana pd*) ---------------------------------------------------------------------------------------- */

/* PDS_PERIPHERAL, as Katana lays it out: what a port's device can do, and its buttons and axes this frame. The records
   lie in the host's static data, below 4 GB like everything the game's 32-bit pointers reach. */
struct pds_peripheral {
    uint32_t id, support, on, off, press, release;
    uint16_t r, l;
    int16_t x1, y1, x2, y2;
    uint32_t name, extend, old, info;
};
static struct pds_peripheral peripheral[4];

/* the standard controller: A B X Y Start, the pad, the triggers and the stick */
#define PAD_SUPPORT 0x000F06FEu

/* pdGetPeripheral(port): FUN_0c0f263a. Port 0 holds a standard controller; nothing is pressed yet (input comes later) */
struct pds_peripheral *pdGetPeripheral(uint32_t port) __asm__("FUN_0c0f263a");
struct pds_peripheral *pdGetPeripheral(uint32_t port)
{
    struct pds_peripheral *p = &peripheral[(port / 6) & 3];
    if (p == &peripheral[0])
        p->support = PAD_SUPPORT;
    return p;
}
