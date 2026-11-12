/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o274_float { char p[0x274]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555c4(void);
int FUN_0c099a24(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9e8(int);
int FUN_0c09da1c(int);
int FUN_0c09e7b8(int);
int FUN_0c0a165e(int);
int FUN_0c0954ca(int a4, int a5, int a6, int a7);

int FUN_0c0954ca(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = a4;
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0xF) {
            if ((((((struct oEE_short *)(a4))->v)) & 0x1) != 0) {
                (((struct o71F1_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o71F1_uchar *)(a4))->v) = 0x0;
            }
            FUN_0c099a24(a4);
        } else {
            t2 = a4;
        }
        t3 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t3 - 1);
        if ((short)(t3 - 1) == 0) {
            FUN_0c0a165e(a4);
            (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
            t3 = FUN_0c0555c4();
            if ((t3 != 0) && (t0 = *(signed char *)((a4 + 0x71ED)), t0 == 0)) {
                t0 = *(signed char *)((a4 + 0x4));
                *(unsigned int *)(((0xC7F2F60 + (t0 << 2)) + 0x0)) = ((*(int *)((0xC7F2F60 + (t0 << 2)))) + 0x1);
            }
        } else {
            t0 = t2;
        }
        t1 = t0;
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0xB));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    return t2;
                }
                return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
            }
            FUN_0c09d9e8(a4);
            return (FUN_0c09d990(a4));
        }
        t2 = FUN_0c09a910(a4);
        if ((signed char)t2 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return ((int (*)(void))(0xC09583E))();
        }
        return ((int (*)(void))(0xC09583E))();
    }
    if (t0 != 1) {
        if (t0 == 2) {
            t2 = *(signed char *)((a4 + 0xB));
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
                    }
                    return t2;
                }
                FUN_0c09d9e8(a4);
                FUN_0c09d990(a4);
                FUN_0c09a910(a4);
                FUN_0c09da1c(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t2 = FUN_0c09e7b8(a4);
                    if ((signed char)t2 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return FUN_0c09a808(a4, 0x3, 0xB);
                    }
                    return (signed char)t2;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t2 = FUN_0c09a910(a4);
                t3 = (signed char)t2;
                if ((signed char)t2 == 0) {
                } else {
                    FUN_0c09a808(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t3 = 0x2;
                }
                return t3;
            }
            t2 = FUN_0c09a910(a4);
            if ((signed char)t2 != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            return ((int (*)(void))(0xC09583E))();
        }
        if (t0 == 3) {
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 == 2) {
                        return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
                    }
                    return t0;
                }
                FUN_0c09d9e8(a4);
                FUN_0c09d990(a4);
                FUN_0c09a910(a4);
                FUN_0c09da1c(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t0 = FUN_0c09e7b8(a4);
                    if ((signed char)t0 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return FUN_0c09a808(a4, 0x3, 0xB);
                    }
                    return (signed char)t0;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t0 = FUN_0c09a910(a4);
                t2 = (signed char)t0;
                if ((signed char)t0 == 0) {
                } else {
                    FUN_0c09a808(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t2 = 0x2;
                }
                return t2;
            }
            t0 = FUN_0c09a910(a4);
            if ((signed char)t0 != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            return ((int (*)(void))(0xC09583E))();
        }
        
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC095830))(t1, a5, a6, a7);
            }
            FUN_0c09d9e8(a4);
            return (FUN_0c09d990(a4));
        }
        t0 = FUN_0c09a910(a4);
        if ((signed char)t0 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return ((int (*)(void))(0xC09583E))();
            }
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return ((int (*)(void))(0xC09583E))();
        }
        return ((int (*)(void))(0xC09583E))();
    }
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        t0 = FUN_0c09a910(a4);
        if ((signed char)t0 != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
        (((struct o710C_uchar *)(a4))->v) = 0x0;
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 <= (int)0x96) {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c09a910(a4);
                if ((signed char)t0 != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
                (((struct o710C_uchar *)(a4))->v) = 0x0;
                t0 = (((struct o719E_short *)(a4))->v);
                if (((int)(unsigned short)t0 >= (int)0x3) && ((int)(unsigned short)t0 <= (int)0x19)) {
                    (((struct o710C_uchar *)(a4))->v) = 0x1;
                }
                t0 = (((struct o719E_short *)(a4))->v);
                t2 = 0x719E;
                if ((int)(unsigned short)t0 < (int)0x45) {
                } else {
                    t3 = 0x719E;
                    if ((int)(unsigned short)t0 > (int)0x50) {
                    } else {
                        (((struct o710C_uchar *)(a4))->v) = 0x1;
                        t3 = 0x710C;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            return t1;
        }
        FUN_0c09d9e8(a4);
        FUN_0c09d990(a4);
        FUN_0c09a910(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = FUN_0c09e7b8(a4);
            if ((signed char)t0 != 0) {
                return ((int (*)(void))(0xC095800))();
            }
        }
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 > (int)0x96) {
            } else {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    FUN_0c09a910(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 != 30) {
    } else {
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
