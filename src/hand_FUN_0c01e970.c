/* Hand-written: step function of a small state machine at 0xC362A50 (states 0, 1 and 2 run on into one another). */
int FUN_0c01fdc8(void);
int FUN_0c01f4c8(int a);
int FUN_0c01f628(int a);
signed char FUN_0c01fefc(signed char *o);
int FUN_0c01eb32(signed char *o);
int FUN_0c0d7566(signed char *o);

int FUN_0c01e970(void)
{
    signed char *o;
    signed char r;

    o = (signed char *)0xC362A50;
    switch (*o) {
    case 0:
        *o = *o + 1;
        o[1] = 0;
        *(short *)(o + 10) = 0;
        *(short *)(o + 8) = 1;
        o[47] = 99;
        o[48] = 0;
        /* fall through */
    case 1:
        *o = *o + 1;
        FUN_0c01fdc8();
        FUN_0c01f4c8(13);
        FUN_0c01f628(13);
        /* fall through */
    case 2:
        r = FUN_0c01fefc(o);
        if (r == 0) {
            *o = *o + 1;
            o[3] = 0;
            o[2] = 0;
        } else if (r == 1) {
            *o = 99;
        }
        return r;
    case 3:
        return FUN_0c01eb32(o);
    default:
        return FUN_0c0d7566(o);
    }
}
