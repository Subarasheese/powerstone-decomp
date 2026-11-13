/* Calls fn on every slot of the object's per-layer arrays (176-byte entries; layer counts 20, 30, 10, 10, 10) for layers first..last. */
void FUN_0c0997a2(char *o, signed char first, signed char last, int fn)
{
    signed char loc[3];     /* [0] slot counter, [1] layer, [2] slot count of the layer */
    char *p;
    int t, A, B, C;

    t = (signed char)o[0x71F1];
    A = (short)(t * 0xDC0);
    B = (short)(t * 0x14A0);
    C = (short)(t * 0x6E0);
    for (loc[1] = first; loc[1] <= last; loc[1]++) {
        switch (loc[1]) {
        case 0:
            p = o + 0x300 + A;
            loc[2] = 20;
            break;
        case 1:
            p = o + 0x1E80 + B;
            loc[2] = 30;
            break;
        case 2:
            p = o + 0x47C0 + C;
            loc[2] = 10;
            break;
        case 3:
            p = o + 0x5580 + C;
            loc[2] = 10;
            break;
        case 4:
            p = o + 0x6340 + C;
            loc[2] = 10;
            break;
        }
        for (loc[0] = 0; loc[0] < loc[2]; loc[0]++) {
            ((void (*)(char *, int, signed char *, int))fn)(p, first, loc, fn);
            p += 0xB0;
        }
    }
}
