/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
extern int FUN_0c011150();
extern int FUN_0c011c4a();
int FUN_0c01f0a8(int);
int FUN_0c01f19e(int);
int FUN_0c01f248(int, int, int, int);
int FUN_0c01f28e(int, int, int, int);
int FUN_0c01f4c8(int);
int FUN_0c01fa70(int);
int FUN_0c01fdc8(void);
int FUN_0c023524(int, int);
int FUN_0c025f7a(int, int, int, int);
int FUN_0c026076(int, int, int, int, int);
int FUN_0c0527a2(int, int);
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c063812(int);
int FUN_0c063cb2(int);
int FUN_0c063eac(int, int, int, int);
int FUN_0c064152(int);
int FUN_0c064744(int);
int FUN_0c064d74(int);
int FUN_0c0652c4(int, int, int, int);
int FUN_0c065310(int);
int FUN_0c065468(int);
int FUN_0c065694(int);
int FUN_0c06585e(int);
int FUN_0c0658b8(int, int, int);
int FUN_0c087fba(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0d54ac(void);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
int FUN_0c0b8ddc(int a4, int a5);
int FUN_0c09cd32(int a4);
int FUN_0c087d60(int a4, int a5, int a6, int a7);
int FUN_0c01ed94(int a4, int a5, int a6, int a7);
int FUN_0c0d4f2c(void);
int FUN_0c01f436(int a4, int a5, int a6, int a7);
int FUN_0c01f1f6(int a4, int a5, int a6, int a7);
int FUN_0c083166(int a4, int a5, int a6, int a7);
int FUN_0c095452(int a4, int a5, int a6, int a7);

int FUN_0c0b8ddc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B8F9A;
        t2 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x30)) = ((*(int *)((t0 + 0x30))) + (*(int *)(((a5 << 2) + 0xC33C300))));
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) + (*(int *)(((a5 << 2) + 0xC33C314))));
        (((struct o38_float *)(t0))->v) = ((FUN_0c0df4d0(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 15.0f);
        (((struct o40_float *)(t0))->v) = ((FUN_0c0dfa50(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 15.0f);
        (((struct o3C_float *)(t0))->v) = ((FUN_0c0dfa50((-(*(int *)((t0 + 0x2C)))))) * 15.0f);
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 15.0f;
        (((struct o101_uchar *)(t0))->v) = 0x8;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        FUN_0c0a1d88(t0, 0x79);
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0x2E0 + t0));
            t3 = (*(int *)((t3 + 0x0)));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x2)) = 0x1F;
            t4 = *(signed char *)((a4 + 0x3));
            t5 = 0xC06233A;
            FUN_0c06233a(t3, ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x10);
            (((struct o24_float *)(t3))->v) = 0.599999964f;
            (((struct o20_float *)(t3))->v) = 0.599999964f;
            (((struct o1C_float *)(t3))->v) = 0.599999964f;
            if ((a5 & 0x1) != 0) {
                t4 = 0x2000;
                *(unsigned int *)((t3 + 0x18)) = t4;
                t6 = t4;
            } else {
                t5 = 0xFFFFE000;
                *(unsigned int *)((t3 + 0x18)) = t5;
                t3 = t5;
            }
            t4 = t6;
            t5 = t3;
            t2 = (t2 + 0x1);
        }
        t1 = 0x2DC;
    }
    return t1;
}

int FUN_0c09cd32(int a4)
{
    int stk[7];
    register int t2;
    register int t4;
    register int t21;
    register int t24;
    register int t25;
    register int t29;
    register int t1;
    register int t3;
    register int t15;
    register int t16;
    register int t17;
    int t18;
    register int t19;

    FUN_0c023524(a4, ((int)stk + 4));
    t2 = t1;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        if (((*(signed char *)(((*(int *)(((0x294 + a4) + (t4 << 2)))) + 0x2))) == 2) && ((t15 = *(signed char *)((t4 + (0x2A9 + a4))), t15 == 2) && ((t16 = *(int *)((((t4 << 2) + (0x294 + a4)) + 0x0)), t17 = *(signed char *)((t16 + 0x30D)), t17 == 0) && (t18 = *(int *)(((0x294 + a4) + (t4 << 2))), t19 = *(signed char *)((0x2D9 + t18)), t19 != 2)))) {
            t3 = t4;
            t3 = (t3 << 2);
            t21 = (*(int *)((((0x294 + a4) + t3) + 0x0)));
            *(int *)((int)stk + 0) = t21;
            t2 = 0x1;
            t24 = FUN_0c026076(t2, (*(signed char *)((((0x2A9 + a4) + t4) + 0x0))), ((int)stk + 4), (*(int *)((((0x280 + a4) + t3) + 0x0))), t21);
            t2 = t24;
            if ((int)(signed char)t24 < (int)0x4) {
                t4 = (t4 + 0x1);
                continue;
            }
            return t2;
        }
        t4 = (t4 + 0x1);
    }
    t25 = 0x0;
    for (;;) {
        if ((int)t25 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t29 = FUN_0c025f7a(0x1, (*(signed char *)((((0x2B8 + a4) + t25) + 0x0))), ((int)stk + 4), (*(int *)((((t25 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t29 >= (int)0x4) {
            break;
        }
        t25 = (t25 + 0x1);
    }
    return t29;
}


int FUN_0c01ed94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return FUN_0c01f28e(a4, a5, a6, a7);
                            }
                            return FUN_0c01f248(a4, a5, a6, a7);
                        }
                        return FUN_0c01f1f6(a4, a5, a6, a7);
                    }
                    t0 = FUN_0c01fa70(a4);
                    if ((int)(signed char)t0 >= 0) {
                        return FUN_0c01f19e(a4);
                    }
                    return (signed char)t0;
                }
                (((struct o2F_uchar *)0xC362A52)->v) = 0x6;
                (((struct o2_uchar *)0xC362A52)->v) = 0x0;
                return FUN_0c01f1f6(a4, a5, a6, a7);
            }
            t0 = FUN_0c01fa70(a4);
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f0a8(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fa70(a4);
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o0_uchar *)0xC362A52)->v) = 0x2;
            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fa70(a4));
}

int FUN_0c0d4f2c(void)
{
    register int t0;

    FUN_0c0d54ac();
    if ((*(signed char *)0xC7F301C) == 0) {
        t0 = 0x0;
        if ((*(signed char *)0xC7F4768) != 0) {
            t0 = 0x1;
        }
        (((struct o0_uchar *)0xC7F319D)->v) = t0;
    } else {
        t0 = 0x0;
        if ((*(signed char *)0xC7F4769) != 0) {
            t0 = 0x1;
        }
        (((struct o1_uchar *)0xC7F319D)->v) = t0;
    }
    return FUN_0c0527a2(0xC7F302C, 0xC7F4750);
}

int FUN_0c01f436(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(int, int, int))(FUN_0c011c4a))((*(int *)((a4 + 0x20))), (*(signed char *)((a4 + 0x34))), a6);
            t2 = t0;
            if (t0 != -1) {
                if (t0 == 0) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0xF;
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0xD;
                }
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        FUN_0c01fdc8();
        FUN_0c01f4c8(0x12);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        t1 = ((int (*)(int, int))(FUN_0c011c4a))((*(int *)((a4 + 0x20))), (*(signed char *)((a4 + 0x34))));
        t2 = t1;
        if (t1 != -1) {
            if (t1 == 0) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0xF;
            } else {
                (((struct o2D_uchar *)0xC362A54)->v) = 0xD;
            }
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01f1f6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(int, int, int))(FUN_0c011150))((*(int *)((a4 + 0x20))), a5, a6);
            t2 = t0;
            if (t0 != -1) {
                if (t0 == 0) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
                } else {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
                }
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
        FUN_0c01fdc8();
        FUN_0c01f4c8(0xA);
        (((struct o32_uchar *)(a4))->v) = 0x3C;
        t1 = ((int (*)(int))(FUN_0c011150))((*(int *)((a4 + 0x20))));
        t2 = t1;
        if (t1 != -1) {
            if (t1 == 0) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x7;
            } else {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x8;
            }
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}


