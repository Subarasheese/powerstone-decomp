/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c020cc2(int, int);
int FUN_0c020e3e(int, int);
int FUN_0c020e78(int, int);
int FUN_0c020ff2(int, int, int);
int FUN_0c021042(int, int, int);
int FUN_0c021090(int, int, int);
int FUN_0c0235ca(void);
int FUN_0c0235ce(int, int);
int FUN_0c023680(int, int);
int FUN_0c02374e(int, int);
int FUN_0c02380c(int, int);
int FUN_0c0238be(int, int);
int FUN_0c0239b6(int, int);
int FUN_0c023a52(int, int, int);
int FUN_0c023b22(int, int);
int FUN_0c026076(int a4, int a5, int a6, int a7, int a8);

int FUN_0c026076(int a4, int a5, int a6, int a7, int a8)
{
    int stk[16];
    register int t21;
    register int t19;
    register int t88;
    register int t83;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((0xF & (signed char)a5) != 0) {
        if ((0xF & (signed char)a5) != 1) {
            if ((0xF & (signed char)a5) != 2) {
                t83 = a5;
                t19 = a6;
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x18), a7);
                FUN_0c020ff2(a8, (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18));
            }
        } else {
            FUN_0c020e3e((((int)stk + 0) + 0x4), a7);
            FUN_0c021042(a8, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        }
    } else {
        FUN_0c020e78((((int)stk + 0) + 0x30), a7);
        FUN_0c021090(a8, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x30));
    }
    t21 = *(signed char *)(((int)stk + 0));
    if ((t21 & 0xF) != 0) {
        if ((t21 & 0xF) != 1) {
            t88 = t83;
            if ((t21 & 0xF) != 2) {
            } else {
                if ((0xF & (signed char)a5) != 0) {
                    if ((0xF & (signed char)a5) != 1) {
                        t88 = t83;
                        if ((0xF & (signed char)a5) != 2) {
                        } else {
                            t88 = (FUN_0c023b22(a6, (((int)stk + 0) + 0x18)));
                        }
                    } else {
                        t88 = (FUN_0c023a52(a6, (((int)stk + 0) + 0x4), t19));
                    }
                } else {
                    t88 = (FUN_0c0239b6(a6, (((int)stk + 0) + 0x30)));
                }
            }
        } else {
            if ((0xF & (signed char)a5) != 0) {
                if ((0xF & (signed char)a5) != 1) {
                    t88 = t83;
                    if ((0xF & (signed char)a5) != 2) {
                    } else {
                        t88 = (FUN_0c0238be(a6, (((int)stk + 0) + 0x18)));
                    }
                } else {
                    t88 = (FUN_0c02380c(a6, (((int)stk + 0) + 0x4)));
                }
            } else {
                t88 = (FUN_0c02374e(a6, (((int)stk + 0) + 0x30)));
            }
        }
    } else {
        if ((0xF & (signed char)a5) != 0) {
            if ((0xF & (signed char)a5) != 1) {
                if ((0xF & (signed char)a5) != 2) {
                } else {
                    t83 = (FUN_0c023680(a6, (((int)stk + 0) + 0x18)));
                }
            } else {
                t83 = (FUN_0c0235ce(a6, (((int)stk + 0) + 0x4)));
            }
        } else {
            t83 = (FUN_0c0235ca());
        }
        t88 = t83;
    }
    return t88;
}
