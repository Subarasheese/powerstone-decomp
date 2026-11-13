/* system.c: Katana's system layer (sy*), as far as the game sees it: the hardware set-up has nothing to set up on the
   host, the clock is the host's, the console's config (sound mode) lives in the port. The library's C for these talks
   to registers and console-only code; these host functions take their places. */
#include <stdint.h>
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
NOOP("FUN_0c0f2114", pd_init_peripheral)
NOOP("FUN_0c0f250a", pd_exec_server)
NOOP("FUN_0c0f2664", pd_exit)
NOOP("FUN_0c0f283e", pd_stop)
/* the GD-ROM's error callback: no drive, no errors */
NOOP("FUN_0c0f1ffe", gd_set_error_callback)
/* Kamui's video hardware set-up (frame buffers, texture memory, the tile accelerator's buffers) */
NOOP("FUN_0c0de890", km_setup_a)
NOOP("FUN_0c0de8a0", km_setup_b)
NOOP("FUN_0c0de960", km_setup_c)
NOOP("FUN_0c0dea30", km_setup_d)
NOOP("FUN_0c0debe0", km_setup_e)

/* FUN_0c0e5126: the video standard from the BIOS (0 NTSC, 2 PAL: the main loop then runs a frame's step twice every
   fifth frame). The port runs at 60 Hz */
NOOP("FUN_0c0e5126", video_standard)
/* FUN_0c0e46c0: the interrupt handler table's reset (the port keeps its own, platform.c) */
NOOP("FUN_0c0e46c0", interrupt_table_reset)
