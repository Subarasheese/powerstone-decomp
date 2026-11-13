/* vmu.c: the memory card (VMU) as a folder of files. The game uses Katana's backup library (bu*): it initialises it
   with a callback (FUN_0c0f2e9c, buInit), which registers the game's event handler (vmu_event_handler, through
   buSetCompleteCallback), then reacts to the events the
   library sends: a card connected (18), mounted (1), and the end of each asynchronous operation (9 defragment,
   11 load, 12 save, 13 save executable, 14 load part, 20 rewrite part). These host functions take the library's place
   for one card in port A's first socket (drive 0); its files live in --vmu DIR (default
   $XDG_DATA_HOME/powerstone/vmu or ~/.local/share/powerstone/vmu). Events reach the game at the next frame end, from
   the game's thread, as the library's callbacks do from its server. */
#define _GNU_SOURCE
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "port.h"

#define BUD_ERR_OK 0
#define BUD_ERR_FILE_NOT_FOUND ((int32_t)0xFFFFFF05)
#define BUD_ERR_GENERIC ((int32_t)0xFFFFFF00)
#define BLOCK 512
#define USER_BLOCKS 200
#define DRIVE 0

const char *port_vmu_dir;
static char dir[1024];
static uint32_t handler;      /* the game's event handler */
static int mounted;

static struct { int32_t drive, op, stat, param; } events[32];
static int nevents;

static void post(int32_t drive, int32_t op, int32_t stat, int32_t param)
{
    if (nevents < 32)
        events[nevents++] = (typeof(events[0])){drive, op, stat, param};
}

/* the events waiting for the game, from port_frame_end */
void port_vmu_deliver(void)
{
    int n = nevents;
    nevents = 0;
    for (int i = 0; i < n && handler; i++)
        ((int32_t(*)(int32_t, int32_t, int32_t, int32_t))(uintptr_t)handler)(events[i].drive, events[i].op, events[i].stat,
                                                                           events[i].param);
}

static void make_dir(void)
{
    if (dir[0])
        return;
    if (port_vmu_dir)
        snprintf(dir, sizeof dir, "%s", port_vmu_dir);
    else if (getenv("XDG_DATA_HOME"))
        snprintf(dir, sizeof dir, "%s/powerstone/vmu", getenv("XDG_DATA_HOME"));
    else
        snprintf(dir, sizeof dir, "%s/.local/share/powerstone/vmu", getenv("HOME") ? getenv("HOME") : ".");
    char tmp[1024];
    snprintf(tmp, sizeof tmp, "%s", dir);
    for (char *p = tmp + 1; *p; p++)
        if (*p == '/') {
            *p = 0;
            mkdir(tmp, 0755);
            *p = '/';
        }
    mkdir(tmp, 0755);
}

/* a file's path from the game's 12-character name */
static void path_of(uint32_t name, char *out, size_t size)
{
    char n[13];
    memcpy(n, (const void *)(uintptr_t)name, 12);
    n[12] = 0;
    for (int i = 0; i < 12; i++)
        if (n[i] == ' ' || (unsigned char)n[i] < 0x20)
            n[i] = n[i] ? '_' : 0;
    make_dir();
    snprintf(out, size, "%s/%s", dir, n);
}

static long file_size(uint32_t name)
{
    char p[1100];
    struct stat st;
    path_of(name, p, sizeof p);
    return stat(p, &st) == 0 ? (long)st.st_size : -1;
}

static int used_blocks(void)
{
    make_dir();
    DIR *d = opendir(dir);
    struct dirent *e;
    int used = 0;
    if (!d)
        return 0;
    while ((e = readdir(d)))
        if (e->d_name[0] != '.') {
            char p[1100];
            struct stat st;
            snprintf(p, sizeof p, "%s/%s", dir, e->d_name);
            if (stat(p, &st) == 0)
                used += (int)((st.st_size + BLOCK - 1) / BLOCK);
        }
    closedir(d);
    return used;
}

static int write_file(uint32_t name, uint32_t buf, long offset, long bytes, int truncate)
{
    char p[1100];
    path_of(name, p, sizeof p);
    FILE *f = fopen(p, truncate ? "wb" : "r+b");
    if (!f && !truncate)
        f = fopen(p, "w+b");
    if (!f)
        return BUD_ERR_GENERIC;
    fseek(f, offset, SEEK_SET);
    size_t w = fwrite((const void *)(uintptr_t)buf, 1, (size_t)bytes, f);
    fclose(f);
    return w == (size_t)bytes ? BUD_ERR_OK : BUD_ERR_GENERIC;
}

static int read_file(uint32_t name, uint32_t buf, long offset, long bytes)
{
    char p[1100];
    path_of(name, p, sizeof p);
    FILE *f = fopen(p, "rb");
    if (!f)
        return BUD_ERR_FILE_NOT_FOUND;
    fseek(f, offset, SEEK_SET);
    size_t r = fread((void *)(uintptr_t)buf, 1, (size_t)bytes, f);
    if (r < (size_t)bytes)
        memset((char *)(uintptr_t)buf + r, 0, (size_t)bytes - r);
    fclose(f);
    return BUD_ERR_OK;
}

/* buInit(capacity, drives, work, callback): the callback runs (it registers the event handler), then the card in
   drive 0 connects */
int32_t bu_init(int32_t capacity, int32_t drives, uint32_t work, uint32_t cb) __asm__("FUN_0c0f2e9c");
int32_t bu_init(int32_t capacity, int32_t drives, uint32_t work, uint32_t cb)
{
    (void)drives;
    (void)work;
    if (cb)
        ((void (*)(void))(uintptr_t)cb)();
    post(DRIVE, 18, capacity, 0);
    return BUD_ERR_OK;
}

/* buSetCompleteCallback(fn): the handler each event goes to */
int32_t bu_set_callback(uint32_t fn) __asm__("buSetCompleteCallback");
int32_t bu_set_callback(uint32_t fn)
{
    handler = fn;
    return BUD_ERR_OK;
}

int32_t bu_mount(int32_t drive, uint32_t work, int32_t size) __asm__("buMountDisk");
int32_t bu_mount(int32_t drive, uint32_t work, int32_t size)
{
    (void)work;
    (void)size;
    if (drive != DRIVE)
        return BUD_ERR_GENERIC;
    mounted = 1;
    post(drive, 1, BUD_ERR_OK, 0);
    return BUD_ERR_OK;
}

int32_t bu_unmount(int32_t drive) __asm__("buUnmount");
int32_t bu_unmount(int32_t drive)
{
    (void)drive;
    return BUD_ERR_OK;
}

/* free blocks: the user area (0) or the executable area (1) */
int32_t bu_free(int32_t drive, int32_t kind) __asm__("buGetDiskFree");
int32_t bu_free(int32_t drive, int32_t kind)
{
    (void)kind;
    if (drive != DRIVE)
        return 0;
    int f = USER_BLOCKS - used_blocks();
    return f < 0 ? 0 : f;
}

int32_t bu_exists(int32_t drive, uint32_t name) __asm__("buIsExistFile");
int32_t bu_exists(int32_t drive, uint32_t name)
{
    return drive == DRIVE && file_size(name) >= 0 ? BUD_ERR_OK : BUD_ERR_FILE_NOT_FOUND;
}

/* buFindExecFile(drive, out): the name of the card's mini-game (POWSTONE__VM), if there is one */
int32_t bu_find_exec(int32_t drive, uint32_t out) __asm__("buFindExecFile");
int32_t bu_find_exec(int32_t drive, uint32_t out)
{
    static const char name[12] = "POWSTONE__VM";
    char p[1100];
    struct stat st;
    make_dir();
    snprintf(p, sizeof p, "%s/POWSTONE__VM", dir);
    if (drive != DRIVE || stat(p, &st) != 0)
        return BUD_ERR_FILE_NOT_FOUND;
    memcpy((void *)(uintptr_t)out, name, 12);
    return BUD_ERR_OK;
}

/* buGetFileSize(drive, name): in blocks */
int32_t bu_file_size(int32_t drive, uint32_t name) __asm__("buGetFileSize");
int32_t bu_file_size(int32_t drive, uint32_t name)
{
    long s = drive == DRIVE ? file_size(name) : -1;
    return s < 0 ? BUD_ERR_FILE_NOT_FOUND : (int32_t)((s + BLOCK - 1) / BLOCK);
}

int32_t bu_load(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks) __asm__("buLoadFile");
int32_t bu_load(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks)
{
    post(drive, 11, read_file(name, buf, 0, (long)blocks * BLOCK), 0);
    return BUD_ERR_OK;
}

int32_t bu_save(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t time, int32_t flags)
    __asm__("buSaveFile");
int32_t bu_save(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t time, int32_t flags)
{
    (void)time;
    (void)flags;
    post(drive, 12, write_file(name, buf, 0, (long)blocks * BLOCK, 1), 0);
    return BUD_ERR_OK;
}

int32_t bu_save_exec(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t time, int32_t flags)
    __asm__("buSaveExecFile");
int32_t bu_save_exec(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t time, int32_t flags)
{
    (void)time;
    (void)flags;
    post(drive, 13, write_file(name, buf, 0, (long)blocks * BLOCK, 1), 0);
    return BUD_ERR_OK;
}

/* buLoadFileEx(drive, name, buf, first block, blocks) and buRewriteExecFile(drive, name, buf, first block, blocks) */
int32_t bu_load_part(int32_t drive, uint32_t name, uint32_t buf, int32_t first, int32_t blocks) __asm__("buLoadFileEx");
int32_t bu_load_part(int32_t drive, uint32_t name, uint32_t buf, int32_t first, int32_t blocks)
{
    post(drive, 14, read_file(name, buf, (long)first * BLOCK, (long)blocks * BLOCK), 0);
    return BUD_ERR_OK;
}

int32_t bu_rewrite_part(int32_t drive, uint32_t name, uint32_t buf, int32_t first, int32_t blocks)
    __asm__("buRewriteExecFile");
int32_t bu_rewrite_part(int32_t drive, uint32_t name, uint32_t buf, int32_t first, int32_t blocks)
{
    post(drive, 20, write_file(name, buf, (long)first * BLOCK, (long)blocks * BLOCK, 0), 0);
    return BUD_ERR_OK;
}

int32_t bu_defrag(int32_t drive, uint32_t work) __asm__("buDefragDisk");
int32_t bu_defrag(int32_t drive, uint32_t work)
{
    (void)work;
    post(drive, 9, BUD_ERR_OK, 0);
    return BUD_ERR_OK;
}

/* the card's little LCD: the host has none. pdVmsLcdIsReady answers 0 (not ready), so the game draws nothing on it;
   FUN_0c0f2ccc (its orientation) and FUN_0c0f2d38 (the picture's write) are never reached, but are harmless here */
int32_t vms_lcd_ready(uint32_t port) __asm__("pdVmsLcdIsReady");
int32_t vms_lcd_ready(uint32_t port) { (void)port; return 0; }
int32_t vms_lcd_dir(uint32_t port) __asm__("FUN_0c0f2ccc");
int32_t vms_lcd_dir(uint32_t port) { (void)port; return 0; }
int32_t vms_lcd_write(uint32_t port, uint32_t image, int32_t flags) __asm__("FUN_0c0f2d38");
int32_t vms_lcd_write(uint32_t port, uint32_t image, int32_t flags) { (void)port; (void)image; (void)flags; return 0; }
