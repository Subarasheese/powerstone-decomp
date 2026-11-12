/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_int { char p[0x2DC]; int v; };
int FUN_0c026f36(int, int, int);
int FUN_0c026f78(int, int);
int FUN_0c027028(int, int);
int FUN_0c0270c6(int, int);
int FUN_0c027168(int, int);
int FUN_0c0271fe(int, int);
int FUN_0c0272a0(int, int);
int FUN_0c027336(int, int);
int FUN_0c0273c0(int, int);
int FUN_0c02743c(int, int);
int FUN_0c02754e(int, int);
int FUN_0c0275ac(int, int);
int FUN_0c026ce0(int a4, int a5, int a6, int a7);

int FUN_0c026ce0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t9;
    register int t4;
    register int t20;
    register int t35;
    register int t36;
    register int t37;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    register int t41;
    register int t42;
    register int t43;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(signed char *)((a4 + 0x4));
    t2 = (((struct o2DC_int *)(a4))->v);
    t9 = t2;
    if ((*(signed char *)((a4 + 0x71EE))) != 0) {
        t4 = (0x637 & t2);
        if ((t2 & 0x40) != 0) {
            t4 = ((0x637 & t2) | 0x80);
        }
        t9 = t4;
        if ((0x80 & t2) != 0) {
            t9 = (t4 | 0x40);
        }
    }
    *(unsigned short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)) = (*(short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362A90 + (((unsigned char)t0 << 2) << 1)) + 0x0)) = t9;
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x6)) = (*(short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x4) + 0x0)) = (*(short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)));
    *(unsigned short *)((((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x2) + 0x0)) = (*(short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x0)));
    *(unsigned short *)(((0xC362AA0 + (((unsigned char)t0 << 2) << 1)) + 0x0)) = t2;
    t20 = *(signed char *)(((unsigned char)t1 + 0xC321038));
    t35 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    t36 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    t37 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
    if ((int)(unsigned char)t20 > 0) {
        t21 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t22 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t23 = ((short)((short)(unsigned char)t0 * (short)0x190) + 0xC362E70);
        t24 = 0x0;
        for (;;) {
            if ((*(signed char *)((t23 + 0x4))) != 0) {
                t26 = *(short *)((t22 + 0x2));
                *(unsigned short *)((t22 + 0x2)) = (t26 - 1);
                if ((short)(t26 - 1) == 0) {
                    *(unsigned char *)((t21 + 0x4)) = 0x0;
                    *(unsigned short *)((t21 + 0x2)) = 0x0;
                    *(unsigned char *)((t21 + 0x5)) = 0x0;
                    *(unsigned short *)((t21 + 0x0)) = 0x0;
                    *(unsigned short *)((t21 + 0x6)) = 0x0;
                }
            }
            t24 = (t24 + 0x1);
            t21 = (t21 + 0xA);
            t22 = (t22 + 0xA);
            t23 = (t23 + 0xA);
            if ((int)(unsigned char)t24 >= (int)(unsigned char)t20) {
                break;
            }
        }
        t35 = t21;
        t36 = t22;
        t37 = t23;
    }
    if ((unsigned char)t20 == 0) {
        return ((int (*)(int, int, int, int))(0xC026F24))(0x0, t35, t36, t37);
    }
    t41 = *(short *)((((short)((short)(unsigned char)t0 * (short)0x1E0) + 0xC362AB0) + 0x0));
    if ((unsigned short)t41 != 0) {
        if ((unsigned short)t41 != 1) {
            if ((unsigned short)t41 != 2) {
                if ((unsigned short)t41 != 3) {
                    if ((unsigned short)t41 != 4) {
                        if ((unsigned short)t41 == 5) {
                            t42 = FUN_0c02743c(t0, 0x0);
                            if (t42 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        if ((unsigned short)t41 == 6) {
                            t43 = FUN_0c02754e(t0, 0x0);
                            if (t43 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        if ((unsigned short)t41 == 8) {
                            FUN_0c0275ac(t0, 0x0);
                            return ((int (*)(void))(0xC026F04))();
                        }
                        if ((unsigned short)t41 == 99) {
                            return ((int (*)(int, int, int, int))(0xC026F0C))(0x0, t35, t36, t37);
                        }
                        if ((unsigned short)t41 != 0xFC) {
                            if ((unsigned short)t41 != 0xFD) {
                                if ((unsigned short)t41 != 0xFE) {
                                    if ((unsigned short)t41 != 0xFF) {
                                        return ((int (*)(int, int, int, int))(0xC026F18))(0x0, t35, t36, t37);
                                    }
                                    t45 = FUN_0c027168(t0, 0x0);
                                    if (t45 != 0) {
                                        return ((int (*)(void))(0xC026F16))();
                                    }
                                    return ((int (*)(void))(0xC026F18))();
                                }
                                t46 = FUN_0c0270c6(t0, 0x0);
                                if (t46 != 0) {
                                    return ((int (*)(void))(0xC026F16))();
                                }
                                return ((int (*)(void))(0xC026F18))();
                            }
                            t47 = FUN_0c027028(t0, 0x0);
                            if (t47 != 0) {
                                return ((int (*)(void))(0xC026F16))();
                            }
                            return ((int (*)(void))(0xC026F18))();
                        }
                        t48 = FUN_0c026f78(t0, 0x0);
                        if (t48 != 0) {
                            return ((int (*)(void))(0xC026F16))();
                        }
                        return ((int (*)(void))(0xC026F18))();
                    }
                    t49 = FUN_0c0273c0(t0, 0x0);
                    if (t49 != 0) {
                        return ((int (*)(void))(0xC026F16))();
                    }
                    return ((int (*)(void))(0xC026F18))();
                }
                t50 = FUN_0c027336(t0, 0x0);
                if (t50 != 0) {
                    return ((int (*)(void))(0xC026F16))();
                }
                return ((int (*)(void))(0xC026F18))();
            }
            t51 = FUN_0c0272a0(t0, 0x0);
            if (t51 != 0) {
                return ((int (*)(void))(0xC026F16))();
            }
            return ((int (*)(void))(0xC026F18))();
        }
        t52 = FUN_0c0271fe(t0, 0x0);
        if (t52 == 0) {
            return ((int (*)(void))(0xC026F18))();
        }
        return ((int (*)(void))(0xC026F16))();
    }
    t53 = FUN_0c026f36(t0, t1, 0x0);
    if (t53 == 0) {
        return ((int (*)(void))(0xC026F18))();
    }
    return ((int (*)(void))(0xC026F16))();
}
