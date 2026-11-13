/* Step function of a small two-state machine: state 0 starts it (state byte at 4, field at 8, calls), state 1 runs FUN_0c01fefc and finishes by clearing the state at 0xC362A50 or the object's byte at 2. */
int FUN_0c01fdc8(void);
int FUN_0c01f4c8(int a);
int FUN_0c01f628(int a);
signed char FUN_0c01fefc(signed char *o);
void FUN_0c01f19e(signed char *o)
{
    signed char r;
    signed char *g;

    switch (o[4]) {
    case 0:
        o[4] = o[4] + 1;
        FUN_0c01fdc8();
        FUN_0c01f4c8(9);
        *(short *)(o + 8) = 1;
        FUN_0c01f628(9);
        /* fall through */
    case 1:
        r = FUN_0c01fefc(o);
        if (r == 0) {
            g = (signed char *)0xC362A50;
            g[49] = 6;
            g[4] = 0;
        } else if (r == 1) {
            o[2] = 0;
        }
        break;
    }
}
