/* @unit 0c0f2fec-0c0f3ad4 */
typedef int Sint32; typedef unsigned Uint32; typedef unsigned short Uint16; typedef unsigned char Uint8;
extern int vmsfs_c_getstate();
extern int vmsfs_c_setfunc();
extern int vmsfs_c_setparam();
extern int vmsfs_c_setvolume();
extern int vmsfs_c_setfname();
extern int vmsfs_c_settime();
extern int vmsfs_c_setcompletecallback();
extern int vmsfs_c_setprogresscallback();
extern int vmsfs_c_setcallbackparam();
extern int vmsfs_ismount();
extern int vmsfs_unmount();
extern int FUN_0c1040be();
extern int FUN_0c102632();
extern int FUN_0c10274c();
extern int vmsfs_findfirst();
extern int vmsfs_findnext();
extern int vmsfs_findfirst_ex();
extern int vmsfs_findnext_ex();
extern int FUN_0c104006();
extern int vmsfs_fopen();
extern int vmsfs_fcreate();
extern int vmsfs_xcreate();
extern int vmsfs_fsetparam(void *, Uint16, Uint8);
extern int vmsfs_fisexist();
extern int vmsfs_fgetinfo();
extern int FUN_0c103f6c();
extern int FUN_0c101140();
extern int vmsfs_setwork();
extern int g_vms_6bec;
extern void *g_vms_print;
extern int buLastError[];
#define BUD_ERR_BUSY (-1)
#define BUD_ERR_OK 0
#define vmsfs_c_getstate vmsfs_c_getstate
#define vmsfs_c_setfunc vmsfs_c_setfunc
#define vmsfs_c_setparam vmsfs_c_setparam
#define vmsfs_c_setvolume vmsfs_c_setvolume
#define vmsfs_c_setfname vmsfs_c_setfname
#define vmsfs_c_settime vmsfs_c_settime
typedef struct { int pad[10]; int drive; } *BUFILE;

extern int g_vms_flag, g_vms_mode, g_vms_e, g_vms_f, g_vms_prev;
extern int g_vms_cur;
extern int thunk_FUN_0c112fba();
extern int vmsfs_isready();
extern int vmsfs_c_execcallback();
Sint32 buStat(Sint32 drive);
Sint32 buMount(Sint32 drive);
Sint32 buConnect(Sint32 drive);

void FUN_0c0f2fec(void)
{
 int i; int bit; int j; int mask; int (*fn)();  int diff;
 if (!g_vms_flag) return;
 {
  if (g_vms_mode) fn = buMount; else fn = buConnect;
  thunk_FUN_0c112fba();
  g_vms_prev = g_vms_cur;
  g_vms_cur = vmsfs_isready();
  mask = 0;
  for (i = 0, bit = 1; i < 8; i++, bit <<= 1) {
   mask |= (buStat(i) == 0) ? bit : 0;
  }
  diff = (g_vms_prev ^ g_vms_cur) & g_vms_cur;
  for (j = 0, bit = 1; j < 8; j++, bit <<= 1) {
   if (diff & bit) {
    if (mask & bit) { fn(j); g_vms_e &= ~bit; }
    else g_vms_e |= bit;
   }
   if (mask & bit) { if (g_vms_e & bit) { fn(j); g_vms_e &= ~bit; } }
  }
  diff = (g_vms_cur ^ g_vms_prev) & g_vms_prev;
  for (j = 0, bit = 1; j < 8; j++, bit <<= 1) {
   if (diff & bit) {
    if ((bit & mask)) { vmsfs_c_execcallback(j, 2, 0); g_vms_f &= ~bit; }
    else g_vms_f |= bit;
   }
   if ((bit & mask)) { if (g_vms_f & bit) { vmsfs_c_execcallback(j, 2, 0); g_vms_f &= ~(unsigned)bit; } }
  }
 }
}

void buGetVersion(void) { vmsfs_c_setcompletecallback(); }
void FUN_0c0f3114(void) { vmsfs_c_setprogresscallback(); }
void FUN_0c0f311a(void) { vmsfs_c_setcallbackparam(); }
int buIsReady(void) { return g_vms_6bec; }
int FUN_0c0f3126(int a) { return vmsfs_ismount(a); }

Sint32 buMount(Sint32 drive)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 1);
    vmsfs_c_setparam(drive, drive, 0, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buConnect(Sint32 drive)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 18);
    vmsfs_c_setparam(drive, drive, 0, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buRemount(Sint32 drive)
{
    return buMount(drive);
}
Sint32 buUnmount(Sint32 drive)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_unmount(drive);
}
Sint32 buIsFormat(Sint32 drive)
{
    return FUN_0c1040be(drive);
}
Sint32 buFormatDisk(Sint32 drive, const Uint8 *volume, Sint32 icon,
                    const void *time, Uint32 flag)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 3);
    vmsfs_c_setparam(drive, drive, (Sint32)volume, icon, (Sint32)time, flag, 0);
    vmsfs_c_setvolume(drive, volume);
    vmsfs_c_settime(drive, time);
    return BUD_ERR_OK;
}
Sint32 buGetDiskInfo(Sint32 drive, void *info)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return FUN_0c102632(drive, info);
}
Sint32 buGetDiskFree(Sint32 drive, Sint32 type)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return FUN_0c10274c(drive, type);
}
Sint32 buFindFirstFile(Sint32 drive, char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_findfirst(drive, fname);
}
Sint32 buFindNextFile(Sint32 drive, char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_findnext(drive, fname);
}
Sint32 buFindFirstFileEx(Sint32 a, Sint32 b, Sint32 c)
{
    if (vmsfs_c_getstate(a)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_findfirst_ex(a, b, c);
}
Sint32 buFindNextFileEx(Sint32 a, Sint32 b, Sint32 c)
{
    if (vmsfs_c_getstate(a)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_findnext_ex(a, b, c);
}
Sint32 buFindExecFile(Sint32 drive, char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return FUN_0c104006(drive, fname);
}
Sint32 buOpenFile(Sint32 drive, const char *fname, BUFILE *file)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_fopen(drive, fname, file);
}
Sint32 buCreateFile(Sint32 a, Sint32 b, Sint32 c, Sint32 d)
{
    if (vmsfs_c_getstate(a)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_fcreate(a, b, c, d);
}
Sint32 buCreateExecFile(Sint32 a, Sint32 b, Sint32 c, Sint32 d)
{
    if (vmsfs_c_getstate(a)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_xcreate(a, b, c, d);
}
Sint32 buSetFileParam(BUFILE file, Uint16 hdrofs, Uint8 copyflag)
{
    if (vmsfs_c_getstate(file->drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_fsetparam(file, hdrofs, copyflag);
}
Sint32 buCloseFile(BUFILE file)
{
    Sint32 drive = file->drive;

    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 4);
    vmsfs_c_setparam(drive, (Sint32)file, 1, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buReadFile(BUFILE file, void *buf, Uint32 nblock)
{
    Sint32 drive = file->drive;

    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 5);
    vmsfs_c_setparam(drive, (Sint32)file, (Sint32)buf, nblock, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buWriteFile(BUFILE file, const void *buf, Uint32 nblock)
{
    Sint32 drive = file->drive;

    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 6);
    vmsfs_c_setparam(drive, (Sint32)file, (Sint32)buf, nblock, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buDeleteFile(Sint32 drive, const char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 7);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, 0, 0, 0, 0);
    vmsfs_c_setfname(drive, fname, fname);
    return BUD_ERR_OK;
}
Sint32 buDeleteFileEx(Sint32 drive, const char **fname, Sint32 nfiles)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 17);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, nfiles, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buSetFileAttr(Sint32 drive, const char *fname, Uint16 hdrofs,
                     Uint8 copyflag)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 10);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, hdrofs, copyflag, 0, 0);
    vmsfs_c_setfname(drive, fname, fname);
    return BUD_ERR_OK;
}
Sint32 buIsExistFile(Sint32 drive, const char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_fisexist(drive, fname);
}
Sint32 buGetFileInfo(Sint32 drive, const char *fname, void *finfo)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return vmsfs_fgetinfo(drive, fname, finfo);
}
Sint32 buStat(Sint32 drive)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    return 0;
}
Sint32 buGetLastError(Sint32 drive)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return buLastError[drive];
}
Sint32 buRenameFile(Sint32 drive, const char *from, const char *to)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 8);
    vmsfs_c_setparam(drive, drive, (Sint32)from, (Sint32)to, 0, 0, 0);
    vmsfs_c_setfname(drive, from, to);
    return BUD_ERR_OK;
}
Sint32 buGetFileSize(Sint32 drive, const char *fname)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    return FUN_0c103f6c(drive, fname);
}
Sint32 buDefragDisk(Sint32 drive, void *work)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 9);
    vmsfs_c_setparam(drive, drive, (Sint32)work, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buLoadFile(Sint32 drive, const char *fname, void *buf, Uint32 nblock)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 11);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, (Sint32)buf, nblock, 0, 0);
    vmsfs_c_setfname(drive, fname, fname);
    return BUD_ERR_OK;
}
Sint32 buSaveFile(Sint32 drive, const char *fname, const void *buf,
                  Uint32 nblock, void *time, Uint32 flag)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 12);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, (Sint32)buf, nblock,
                     (Sint32)time, flag);
    vmsfs_c_setfname(drive, fname, fname);
    vmsfs_c_settime(drive, time);
    return BUD_ERR_OK;
}
Sint32 buSaveExecFile(Sint32 drive, const char *fname, const void *buf,
                      Uint32 nblock, void *time, Uint32 flag)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 13);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, (Sint32)buf, nblock,
                     (Sint32)time, flag);
    vmsfs_c_setfname(drive, fname, fname);
    vmsfs_c_settime(drive, time);
    return BUD_ERR_OK;
}
Sint32 buLoadFileEx(Sint32 drive, const char *fname, void *buf, Uint32 start,
                    Uint32 nblock)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 14);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, (Sint32)buf, start, nblock,
                     0);
    vmsfs_c_setfname(drive, fname, fname);
    return BUD_ERR_OK;
}
Sint32 buRewriteExecFile(Sint32 drive, const char *fname, const void *buf,
                         Uint32 start, Uint32 nblock)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 20);
    vmsfs_c_setparam(drive, drive, (Sint32)fname, (Sint32)buf, start, nblock,
                     0);
    vmsfs_c_setfname(drive, fname, fname);
    return BUD_ERR_OK;
}
Sint32 buReadDiskImage(Sint32 drive, void *buf)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 15);
    vmsfs_c_setparam(drive, drive, (Sint32)buf, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
Sint32 buWriteDiskImage(Sint32 drive, const void *buf)
{
    if (vmsfs_c_getstate(drive)) {
        return BUD_ERR_BUSY;
    }
    vmsfs_c_setfunc(drive, 16);
    vmsfs_c_setparam(drive, drive, (Sint32)buf, 0, 0, 0, 0);
    return BUD_ERR_OK;
}
void buSetPrintFunc(void *f) { g_vms_print = f; }
void buSetRetryCount(Sint32 count) { FUN_0c101140(count); }
Sint32 buMountDisk(Sint32 drive, void *addr, Sint32 size)
{
    Sint32 result = vmsfs_setwork(drive, addr, size);
    if (result == BUD_ERR_OK) {
        buMount(drive);
    }
}
void FUN_0c0f3ab0(Sint32 drive) { buUnmount(drive); }
