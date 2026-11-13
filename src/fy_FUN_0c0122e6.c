/* Starts a request: stores the handle from FUN_0c010774 at +4 (negative: returns -1), then by the state byte +2 and the flags FUN_0c0107f4 / FUN_0c010964 / FUN_0c01086a / FUN_0c0109e4 return (stored at +12, +8, +16, +20) sets the status byte at 0xC361BCA to 6, 4, 3 or 2 (or returns 0 when the object is already in the state asked for) and clears 0xC361BCB. Returns 1 on success. */
extern int FUN_0c010774(void);
extern int FUN_0c0107f4(void);
extern int FUN_0c010964(void);
extern int FUN_0c01086a(void);
extern int FUN_0c0109e4(void);
extern void FUN_0c0122c6(unsigned char *);

int FUN_0c0122e6(unsigned char *o)
{
    unsigned char *G = (unsigned char *)0xC361BC8;
    int r;

    r = FUN_0c010774();
    *(int *)(o + 4) = r;
    if (r < 0)
        return -1;
    if (*(int *)(o + 4) == 0) {
        if ((signed char)o[2] == 2)
            return 0;
        G[2] = 2;
    } else {
        *(int *)(o + 12) = FUN_0c0107f4();
        *(int *)(o + 8) = FUN_0c010964();
        *(int *)(o + 16) = FUN_0c01086a();
        *(int *)(o + 20) = FUN_0c0109e4();
        if (*(int *)(o + 12) != 0) {
            FUN_0c0122c6(o);
            G[2] = 6;
        } else if (*(int *)(o + 8) != 0) {
            G[2] = 4;
        } else {
            if ((signed char)o[2] == 3)
                return 0;
            G[2] = 3;
        }
    }
    G[3] = 0;
    return 1;
}
