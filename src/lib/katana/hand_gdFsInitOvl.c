/* Hand-written: stores the address of the file-system driver table and calls its init entry with the table as the fifth argument.
   The first four arguments are the caller's r4-r7, passed through untouched (gdFsInit jumps here without setting them). */
struct gd_drv { int pad[3]; int (*init)(int, int, int, int, struct gd_drv *); };

int gdFsInitOvl(int a, int b, int c, int e)
{
    struct gd_drv *d;

    d = (struct gd_drv *)0xC15A1F4;
    *(struct gd_drv **)0xC346BE4 = d;
    return d->init(a, b, c, e, d);
}
