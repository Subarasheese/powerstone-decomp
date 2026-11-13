/* files.c: the game's files, read from a folder of the disc's files (--data DIR). No disc image and no GD-ROM: the
   game opens files by name through CRI's ADXF (the loader in src/game/system/system_init.c), and these host functions
   take the place of ADXF's, reading whole files at once. */
#define _GNU_SOURCE
#include <ctype.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "port.h"

const char *port_data_dir = "data";

/* the path of name in the data folder, matched without regard to case (the disc's names are upper case) */
int port_data_path(const char *name, char *out, size_t size)
{
    DIR *d = opendir(port_data_dir);
    struct dirent *e;
    const char *base = strrchr(name, '/') ? strrchr(name, '/') + 1 : name;
    if (!d)
        return 0;
    while ((e = readdir(d)))
        if (!strcasecmp(e->d_name, base)) {
            snprintf(out, size, "%s/%s", port_data_dir, e->d_name);
            closedir(d);
            return 1;
        }
    closedir(d);
    return 0;
}

/* --- ADXF ------------------------------------------------------------------------------------------------------------- */

#define ADXF_STAT_STOP 1
#define ADXF_STAT_READEND 3
#define HANDLES 16

struct adxf {
    int used;
    FILE *f;
    uint32_t size;
    int stat;
    char name[64];
};
static struct adxf handles[HANDLES];

static struct adxf *handle(uint32_t h)
{
    struct adxf *a = (struct adxf *)(uintptr_t)h;
    return a >= handles && a < handles + HANDLES && a->used ? a : 0;
}

/* ADXF_Open(name, attribute): a handle, or 0 where the data folder has no such file */
uint32_t adxf_open(uint32_t name, uint32_t atr) __asm__("ADXF_Open");
uint32_t adxf_open(uint32_t name, uint32_t atr)
{
    const char *n = (const char *)(uintptr_t)name;
    char path[1024];
    (void)atr;
    if (!port_data_path(n, path, sizeof path)) {
        fprintf(stderr, "powerstone: %s is not in the data folder %s\n", n, port_data_dir);
        return 0;
    }
    for (int i = 0; i < HANDLES; i++)
        if (!handles[i].used) {
            struct adxf *a = &handles[i];
            a->f = fopen(path, "rb");
            if (!a->f)
                return 0;
            fseek(a->f, 0, SEEK_END);
            a->size = (uint32_t)ftell(a->f);
            fseek(a->f, 0, SEEK_SET);
            a->used = 1;
            a->stat = ADXF_STAT_STOP;
            snprintf(a->name, sizeof a->name, "%s", n);
            return (uint32_t)(uintptr_t)a;
        }
    return 0;
}

/* ADXF_GetNumSct: the file's length in 2048-byte sectors */
int32_t adxf_get_num_sct(uint32_t h) __asm__("ADXF_GetFsizeSct");
int32_t adxf_get_num_sct(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)((a->size + 2047) / 2048) : 0;
}

/* ADXF_GetFsizeByte */
int32_t adxf_get_fsize_byte(uint32_t h) __asm__("ADXF_GetFsizeByte");
int32_t adxf_get_fsize_byte(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)a->size : 0;
}

/* ADXF_ReadNw(handle, sectors, buffer): the read completes at once */
int32_t adxf_read_nw(uint32_t h, int32_t sectors, uint32_t buf) __asm__("ADXF_ReadNw");
int32_t adxf_read_nw(uint32_t h, int32_t sectors, uint32_t buf)
{
    struct adxf *a = handle(h);
    if (!a || sectors <= 0)
        return 0;
    size_t want = (size_t)sectors * 2048, got = fread((void *)(uintptr_t)buf, 1, want, a->f);
    if (got < want)
        memset((char *)(uintptr_t)buf + got, 0, want - got);
    a->stat = ADXF_STAT_READEND;
    return sectors;
}

/* ADXF_GetStat */
int32_t adxf_get_stat(uint32_t h) __asm__("ADXF_GetStat");
int32_t adxf_get_stat(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? a->stat : ADXF_STAT_STOP;
}

/* ADXF_Close */
void adxf_close(uint32_t h) __asm__("ADXF_Close");
void adxf_close(uint32_t h)
{
    struct adxf *a = handle(h);
    if (a) {
        fclose(a->f);
        a->used = 0;
    }
}

/* ADXF_Stop */
void adxf_stop(uint32_t h) __asm__("ADXF_Stop");
void adxf_stop(uint32_t h)
{
    struct adxf *a = handle(h);
    if (a)
        a->stat = ADXF_STAT_STOP;
}

/* --- the GD-ROM file system: nothing to do without a drive ------------------------------------------------------------ */

int32_t port_gdfs_ok(void) { return 0; }
int32_t gdfs_init(void) __asm__("gdFsInit");
int32_t gdfs_init(void) { return 0; }
int32_t gdfs_reinit(void) __asm__("gdFsReinit");
int32_t gdfs_reinit(void) { return 0; }
int32_t gdfs_finish(void) __asm__("gdFsFinish");
int32_t gdfs_finish(void) { return 0; }
uint32_t gdfs_create_dirhn(uint32_t a, uint32_t b) __asm__("gdFsCreateDirhn");
uint32_t gdfs_create_dirhn(uint32_t a, uint32_t b) { (void)b; return a ? a : 1; }
int32_t gdfs_change_dir(uint32_t d) __asm__("gdFsChangeDir");
int32_t gdfs_change_dir(uint32_t d) { (void)d; return 0; }
