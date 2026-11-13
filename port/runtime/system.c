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
