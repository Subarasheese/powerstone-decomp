/* system.c: Katana's system layer (sy*), as far as the game sees it: the hardware set-up has nothing to set up on the
   host, the clock is the host's, the console's config (sound mode) lives in the port. The library's C for these talks
   to registers and console-only code; these host functions take their places. */
#include <stdint.h>
#include <string.h>
#include <time.h>

#include "port.h"

#define NOOP(sym, fn)                                                                                                  \
    int32_t fn(void) __asm__(sym);                                                                                     \
    int32_t fn(void) { return 0; }

NOOP("syHwInit", sy_hw_init)
NOOP("syHwInit2", sy_hw_init2)
NOOP("syRtcInit", sy_rtc_init)
NOOP("syRtcFinish", sy_rtc_finish)
NOOP("syRtcExecServer", sy_rtc_exec_server)
NOOP("syRtcSetServerMode", sy_rtc_set_server_mode)
NOOP("syCfgInit", sy_cfg_init)
NOOP("syCfgExit", sy_cfg_exit)
NOOP("gfx_set_border_color", gfx_set_border_color_host)

/* Kamui's device set-up (0x0C108B64, no C yet): of what it does, the host needs only the system block, the static at
   0x0C816FC0 its pointer 0x0C347628 names, cleared. The kmSet*Callback functions (FUN_0c0fb042) store into its callback
   table at +0x230; the rest of the set-up is the PowerVR's, which the host renderer replaces. */
int32_t km_device_init(void) __asm__("FUN_0c108b64");
int32_t km_device_init(void)
{
    if (*(volatile uint32_t *)0x0C347628 == 0) {
        *(volatile uint32_t *)0x0C347628 = 0x0C816FC0;
        memset((void *)0x0C816FC0, 0, 0x4D0);
    }
    return 0;
}

/* Kamui's PowerVR set-up and display mode (src/lib/katana/kamui_init.c has their proven C). On the host the PowerVR's
   registers are plain memory (they read 0, so kmi_init_pvr_hw would take the chip for an unknown one and stop in its trap)
   and the host renderer does the display: these keep only what they leave in RAM for the rest of Kamui and the game, as
   the console's retail chip does, and skip the register writes, the VRAM clear and the calls that only program the
   video hardware. kmi_init_vram_layout (RAM and one register) runs its own C. */
#define KW(a) (*(volatile uint32_t *)(uintptr_t)(a))

int32_t kmi_init_pvr_hw(void) __asm__("kmi_init_pvr_hw");
int32_t kmi_init_pvr_hw(void)
{
    KW(0x0C816FC4) = 6;               /* the retail chip (id 0x17FD11DB, revision 17 on): Kamui's model 6 */
    KW(0x0C8172CC) = 0x00800408;
    switch (KW(0xA05F689C)) {         /* the cable bits, as the console reports them */
    case 0: KW(0x0C816FC8) = 0; break;
    case 1: KW(0x0C816FC8) = 1; break;
    case 2: KW(0x0C816FC8) = 3; break;
    case 4: case 5: case 6: KW(0x0C816FC8) = 127; break;
    case 8: KW(0x0C816FC8) = 31; break;
    default: KW(0x0C816FC8) = 15; break;
    }
    return 1;
}

int32_t FUN_0c110320(int32_t a4);
/* the console's callers pass the configuration word as their first stack word (the four register arguments go unused);
   their generated C (gen_ab, gen_dm, gen_dr, gen_fk: "kmi_set_system_config(int, ...)") passes it as the only argument, so
   on the host it comes first */
int32_t kmi_set_system_config(uint32_t cfg) __asm__("kmi_set_system_config");
int32_t kmi_set_system_config(uint32_t cfg)
{
    KW(0x0C817028) = cfg;
    KW(0x0C817464) = (cfg & 0x00010000) >> 16;
    KW(0x0C817468) = (cfg & 0x00060000) >> 17;
    KW(0x0C81746C) = (cfg & 0x00180000) >> 19;
    KW(0x0C817470) = (cfg & 0x00600000) >> 21;
    KW(0x0C817474) = (cfg & 0x01800000) >> 23;
    KW(0x0C817478) = (cfg & 0x06000000) >> 25;
    KW(0x0C817404) = (KW(0x0C817410) >> 2) * 3;
    uint32_t prod = (uint32_t)((int32_t)KW(0x0C817418) * (int32_t)KW(0x0C817414));
    uint32_t gap = (uint32_t)FUN_0c110320((int32_t)prod);
    for (int i = 0; i < 2; i++) {     /* the two vertex buffers' areas, as kamui_init.c lays them out */
        uint32_t b = 0x0C817424 + 32 * i;
        KW(b + 4) = KW(b) + KW(0x0C817410);
        if (KW(0x0C816FC8) & 32)
            KW(b + 4) = KW(0x0C81741C) ? KW(b + 4) - 68 - prod * 96 : KW(b + 4) - prod * 48;
        else
            KW(b + 4) = KW(b + 4) - prod * 24;
        if (KW(0x0C817464) == 0) {
            KW(b + 12) = (KW(b) + KW(0x0C817404)) & ~31u;
            KW(b + 16) = (KW(b + 4) - gap) & ~127u;
            KW(b + 20) = KW(b + 12) + gap;
        } else {
            KW(b + 12) = (KW(b + 4) - gap) & ~127u;
            KW(b + 16) = (KW(b) + KW(0x0C817404)) & ~31u;
            KW(b + 20) = KW(b + 12);
        }
        KW(b + 24) = KW(b);
        KW(b + 28) = KW(b) + KW(0x0C817404) - 256;
    }
    return 0;                         /* the registration with the video hardware (FUN_0c1104c8) is the host renderer's */
}

int32_t FUN_0c10bc80(int32_t table, int32_t key, int32_t value);
int32_t kmi_set_display_mode(int32_t mode, int32_t format, int32_t dither, int32_t antialias) __asm__("kmi_set_display_mode");
int32_t kmi_set_display_mode(int32_t mode, int32_t format, int32_t dither, int32_t antialias)
{
    uint32_t m = (uint32_t)FUN_0c10bc80(0x0C15AAA0, 0x0C15AAB4, mode);
    int32_t aa = FUN_0c10bc80(0x0C15AAA0, 0x0C15AAC0, antialias);
    int32_t di = FUN_0c10bc80(0x0C15AAA0, 0x0C15AACC, dither);
    KW(0x0C816FE0) = m & 3;
    if (!(format == 0 || format == 1 || format == 3 || format == 4 || format == 5))
        return 1;
    KW(0x0C816FE4) = m;
    KW(0x0C816FE8) = (uint32_t)format;
    KW(0x0C816FEC) = di ? 1 : 0;
    KW(0x0C816FF0) = aa ? 1 : 0;
    KW(0x0C8172D8) = m == 1 ? 480 : 240;
    return (m & 3) == 3;              /* an unknown video standard: 1, as the original returns */
}

static int32_t sound_mode; /* 0 stereo, 1 mono */

int32_t sy_cfg_get_sound_mode(uint32_t out) __asm__("syCfgGetSoundMode");
int32_t sy_cfg_get_sound_mode(uint32_t out)
{
    *(int32_t *)(uintptr_t)out = sound_mode;
    return 0;
}

int32_t sy_cfg_set_sound_mode(int32_t mode) __asm__("syCfgSetSoundMode");
int32_t sy_cfg_set_sound_mode(int32_t mode)
{
    sound_mode = mode;
    return 0;
}

/* SYS_RTC_DATE: year (16 bits), month, day, hour, minute, second, day of the week */
struct sys_rtc_date {
    uint16_t year;
    uint8_t month, day, hour, minute, second, dayofweek;
};

int32_t sy_rtc_get_date(uint32_t out) __asm__("syRtcGetDate");
int32_t sy_rtc_get_date(uint32_t out)
{
    time_t now = time(0);
    struct tm tm;
    localtime_r(&now, &tm);
    struct sys_rtc_date *d = (struct sys_rtc_date *)(uintptr_t)out;
    d->year = (uint16_t)(tm.tm_year + 1900);
    d->month = (uint8_t)(tm.tm_mon + 1);
    d->day = (uint8_t)tm.tm_mday;
    d->hour = (uint8_t)tm.tm_hour;
    d->minute = (uint8_t)tm.tm_min;
    d->second = (uint8_t)tm.tm_sec;
    d->dayofweek = (uint8_t)tm.tm_wday;
    return 0;
}

/* the Maple bus (controllers): its DMA set-up and per-frame server; the port reads the controller through SDL
   (platform.c, pdGetPeripheral) */
NOOP("pdInitPeripheral", pd_init_peripheral)
NOOP("FUN_0c0f250a", pd_exec_server)
NOOP("FUN_0c0f2664", pd_exit)
NOOP("FUN_0c0f283e", pd_stop)
/* the GD-ROM's error callback: no drive, no errors */
NOOP("FUN_0c0f1ffe", gd_set_error_callback)
/* Kamui's video hardware set-up (frame buffers, texture memory, the tile accelerator's buffers) */
NOOP("gfx_set_buffer_size", km_setup_a)
NOOP("gfx_init_renderer", km_setup_b)
NOOP("gfx_set_display_mode", km_setup_c)
NOOP("gfx_set_vertex_buffer", km_setup_d)
NOOP("gfx_set_list_buffers", km_setup_e)

/* sys_get_video_standard: the video standard from the BIOS (0 NTSC, 2 PAL: the main loop then runs a frame's step twice every
   fifth frame). The port runs at 60 Hz */
NOOP("sys_get_video_standard", video_standard)
/* sys_reset_interrupt_handlers: the interrupt handler table's reset (the port keeps its own, platform.c) */
NOOP("sys_reset_interrupt_handlers", interrupt_table_reset)
