/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01f4c8(int);
int FUN_0c01f9a0(void);
int FUN_0c01fdc8(void);
int FUN_0c01fff4(int, int);
int FUN_0c01f0a8(int a4, int a5, int a6, int a7);

int FUN_0c01f0a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = FUN_0c01fff4(0x3060E, 0x0);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        FUN_0c01fdc8();
        FUN_0c01f4c8(0x8);
        FUN_0c01f9a0();
        t1 = FUN_0c01fff4(0x3060E, 0x0);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}
