/* sound_api.c: library calls around sound that the port answers itself. The AICA driver interface (0c0e4000-0c0e6000)
   runs as the library's C against the emulated AICA (aica.c); CRI's ADX player is the host's (adx.c). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "port.h"

/* the vibration pack (Puru Puru) over the Maple bus: none yet (vib_port_has_vibration answers that no port has one) */
#define QUIET(sym)                                                                                                     \
    int32_t quiet_##sym(void) __asm__(#sym);                                                                           \
    int32_t quiet_##sym(void) { return 0; }


/* exit to the console's menu (the BIOS vector at 0x8C0000E0) */
void bios_exit(void) __asm__("sys_exit_to_bios");
void bios_exit(void)
{
    extern void exit(int);
    exit(0);
}

/* snd_driver_upload(image, mode): the AICA driver's upload and start, as the console does it: the memory mode, the ARM held
   in reset, the driver copied to sound RAM, the mailbox's mode and empty bank slots, the reset released; then the wait
   for the driver's ready flag (the ARM runs on the sound thread, aica.c). The SH-4 side's pointers into sound RAM go
   where the library keeps them (0x0C7FD0E0 the command ring, 0x0C7FD0E4 the bank area, 0x0C7FD0E8) */
#include <string.h>
#include <time.h>
int32_t aica_upload(uint32_t image, int32_t mode) __asm__("snd_driver_upload");
int32_t aica_upload(uint32_t image, int32_t mode)
{
    volatile uint32_t *regs = (volatile uint32_t *)(uintptr_t)0xA0700000u;
    uint8_t *ram = (uint8_t *)(uintptr_t)0xA0800000u;
    uint32_t size = *(uint32_t *)(uintptr_t)(image + 0x54);
    regs[0x2800 / 4] = (uint32_t)mode;
    regs[0x2C00 / 4] |= 1;
    memcpy(ram, (void *)(uintptr_t)image, size);
    *(volatile uint32_t *)(ram + 0x50) = (uint32_t)mode;
    for (int i = 0; i < 8; i++)
        *(volatile uint32_t *)(ram + 0x60 + 4 * i) = 0xFFFFFFFFu;
    *(volatile uint32_t *)(ram + 0x5C) = 0;
    *(uint32_t *)(uintptr_t)0x0C7FD0E4u = 0xA0800000u + *(uint32_t *)(uintptr_t)(image + 0x84);
    *(uint32_t *)(uintptr_t)0x0C7FD0E8u = 0xA0800010u + *(uint32_t *)(uintptr_t)(image + 0x80);
    *(uint32_t *)(uintptr_t)0x0C7FD0E0u = 0xA0800400u;
    regs[0x2C00 / 4] &= ~1u;
    for (int i = 0; i < 2000 && *(volatile uint32_t *)(ram + 0x5C) == 0; i++) {
        struct timespec ts = {0, 1000000};
        nanosleep(&ts, 0);
    }
    if (*(volatile uint32_t *)(ram + 0x5C) == 0)
        fprintf(stderr, "powerstone: the sound driver did not start\n");
    return 0;
}

/* --- sound banks: snd_bank_load (load) and snd_bank_unload (unload) -------------------------------------------------------
   The driver keeps the banks (DTPK) end to end from 0x10000 in sound RAM, in slot order; the mailbox's slot words
   (0x60 + 4 slot) hold each bank's id, -1 when empty. A change goes through the driver's lock: command 0x18A0, then the
   driver sets 0xB4; banks that move go by its memmove (0x90 source, 0x94 destination, 0x98 length, command 0x2000A0,
   done when 0x98 is back to 0); the new bank is copied, then 0xB0 = 1 until the driver clears 0xB4. */

#define SRAM ((volatile uint8_t *)(uintptr_t)0xA0800000u)
#define MB(off) (*(volatile uint32_t *)(SRAM + (off)))
#define BANK_BASE 0x10000u

static struct { uint32_t offset, size; } bank[8];

static int wait_for(uint32_t off, int nonzero)
{
    for (int i = 0; i < 2000; i++) {
        if ((MB(off) != 0) == nonzero)
            return 1;
        struct timespec ts = {0, 500000};
        nanosleep(&ts, 0);
    }
    fprintf(stderr, "powerstone: the sound driver did not answer (mailbox 0x%X)\n", off);
    return 0;
}

/* the command ring (snd_send_command's): a 64-word ring at 0x400, the driver clears each word it takes */
static int send_command(uint32_t word)
{
    uint32_t *wp = (uint32_t *)(uintptr_t)0x0C7FD0E0u;
    for (int i = 0; i < 2000; i++) {
        if (*(volatile uint32_t *)(uintptr_t)*wp == 0) {
            *(volatile uint32_t *)(uintptr_t)*wp = word;
            *wp += 4;
            if (*wp == 0xA0800500u)
                *wp = 0xA0800400u;
            return 0;
        }
        struct timespec ts = {0, 500000};
        nanosleep(&ts, 0);
    }
    return -1;
}

/* the library's record of the banks, as its own snd_bank_load keeps it: per slot {id or -1, SH-4 address, size} at
   0x0C7FD1D0, and the bytes in use at 0x0C7FD0F0 */
static void sync_library_table(void)
{
    uint32_t used = 0;
    for (int i = 0; i < 8; i++) {
        uint32_t *e = (uint32_t *)(uintptr_t)(0x0C7FD1D0u + 12u * (uint32_t)i);
        int on = MB(0x60 + 4 * i) != 0xFFFFFFFFu;
        e[0] = on ? MB(0x60 + 4 * i) : 0xFFFFFFFFu;
        e[1] = on ? 0xA0800000u + bank[i].offset : 0;
        e[2] = on ? bank[i].size : 0;
        if (on)
            used += bank[i].size;
    }
    *(uint32_t *)(uintptr_t)0x0C7FD0F0u = used;
    if (getenv("PORT_DEBUG_KEYON"))
        for (int i = 0; i < 8; i++)
            if (MB(0x60 + 4 * i) != 0xFFFFFFFFu)
                fprintf(stderr, "bank slot %d id %08X at %06X size %06X\n", i, MB(0x60 + 4 * i), bank[i].offset, bank[i].size);
}

static void driver_memmove(uint32_t src, uint32_t dst, uint32_t len)
{
    if (!len || src == dst)
        return;
    MB(0x90) = src;
    MB(0x94) = dst;
    MB(0x98) = len;
    send_command(0x002000A0u);
    wait_for(0x98, 0);
}

int32_t sound_bank_load(uint32_t src, int32_t slot) __asm__("snd_bank_load");
int32_t sound_bank_load(uint32_t src, int32_t slot)
{
    const uint8_t *d = (const uint8_t *)(uintptr_t)src;
    if (memcmp(d, "DTPK", 4) || slot < 0 || slot >= 8 || MB(0x60 + 4 * slot) != 0xFFFFFFFFu)
        return -1;
    /* the bank's own size, unrounded: the driver finds each bank by walking the headers from the first (each DTPK's
       size at +8 gives the next), so the banks lie end to end exactly as the library packs them (snd_bank_load) */
    uint32_t size = *(uint32_t *)(d + 8), used = 0;
    for (int i = 0; i < 8; i++)
        if (MB(0x60 + 4 * i) != 0xFFFFFFFFu)
            used += bank[i].size;
    if (MB(0x88) && used + size > MB(0x88))
        return -1;
    /* the place: after the highest occupied slot below this one */
    uint32_t at = BANK_BASE;
    for (int i = 0; i < slot; i++)
        if (MB(0x60 + 4 * i) != 0xFFFFFFFFu && bank[i].offset + bank[i].size > at)
            at = bank[i].offset + bank[i].size;
    /* the slot's id goes in before the lock, as the library does it: the driver takes its copy of the slot words when it
       locks (command 0x18A0) and registers the banks whose words changed when it is released (0xB0) */
    MB(0x60 + 4 * slot) = *(uint32_t *)(d + 4);
    send_command(0x000018A0u);
    wait_for(0xB4, 1);
    /* the banks above it move up by size, highest first */
    uint32_t top = at;
    for (int i = slot + 1; i < 8; i++)
        if (MB(0x60 + 4 * i) != 0xFFFFFFFFu && bank[i].offset + bank[i].size > top)
            top = bank[i].offset + bank[i].size;
    if (top > at) {
        driver_memmove(at, at + size, top - at);
        for (int i = slot + 1; i < 8; i++)
            if (MB(0x60 + 4 * i) != 0xFFFFFFFFu)
                bank[i].offset += size;
    }
    for (uint32_t i = 0; i < (size + 3) / 4; i++)
        *(volatile uint32_t *)(SRAM + at + 4 * i) = ((const uint32_t *)d)[i];
    bank[slot].offset = at;
    bank[slot].size = size;
    sync_library_table();
    MB(0xB0) = 1;
    wait_for(0xB4, 0);
    MB(0xB0) = 0;
    return 0;
}

int32_t sound_bank_unload(int32_t slot) __asm__("snd_bank_unload");
int32_t sound_bank_unload(int32_t slot)
{
    if (slot < 0 || slot >= 8 || MB(0x60 + 4 * slot) == 0xFFFFFFFFu)
        return -2;
    MB(0x60 + 4 * slot) = 0xFFFFFFFFu; /* before the lock, as for a load */
    send_command(0x000018A0u);
    wait_for(0xB4, 1);
    uint32_t at = bank[slot].offset, size = bank[slot].size, top = at + size;
    for (int i = slot + 1; i < 8; i++)
        if (MB(0x60 + 4 * i) != 0xFFFFFFFFu && bank[i].offset + bank[i].size > top)
            top = bank[i].offset + bank[i].size;
    if (top > at + size) {
        driver_memmove(at + size, at, top - at - size);
        for (int i = slot + 1; i < 8; i++)
            if (MB(0x60 + 4 * i) != 0xFFFFFFFFu)
                bank[i].offset -= size;
    }
    sync_library_table();
    MB(0xB0) = 1;
    wait_for(0xB4, 0);
    MB(0xB0) = 0;
    return 0;
}
