/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c0622c6(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0a77ec(int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
int FUN_0c029bc0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a6cae(int a4, int a5, int a6, int a7);
int FUN_0c0a7a2e(int a4, int a5, int a6, int a7);

int FUN_0c029bc0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t0 = 0x5A;
        if ((*(int *)0xC386830) != 0) {
            t0 = 0x4B;
        }
        (((struct oEC_ushort *)(a4))->v) = t0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 < (int)(*(signed char *)((a4 + 0x2DC)))) {
                t1 = t0;
                t1 = (t1 << 2);
                t1 = (t1 + (0x2E0 + a4));
                t1 = (*(int *)((t1 + 0x0)));
                FUN_0c0df940();
                
                t2 = FUN_0c0e6f24();
                u0 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = ((float)t2 + 4.2949673e+09f);
                }
                (((struct o4_float *)(t1))->v) = (-(u0 * 3.0f));
                FUN_0c0df940();
                
                t2 = FUN_0c0e6f24();
                u0 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = ((float)t2 + 4.2949673e+09f);
                }
                u1 = 240.0f;
                u1 = u1 + 1.5f * u0;
                (((struct o8_float *)(t1))->v) = u1;
                (((struct oC_float *)(t1))->v) = 16.0f;
                FUN_0c0df940();
                
                t2 = FUN_0c0e6f24();
                u0 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = ((float)t2 + 4.2949673e+09f);
                }
                (((struct o28_float *)(t1))->v) = ((u0 * 1.0f) / 32.0f);
                FUN_0c0df940();
                
                t2 = FUN_0c0e6f24();
                u0 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = ((float)t2 + 4.2949673e+09f);
                }
                (((struct o2C_float *)(t1))->v) = ((((-(u0 * 1.0f)) / 16.0f)) + -2.0f);
                (((struct o30_float *)(t1))->v) = 0.0f;
                FUN_0c0df940();
                
                *(unsigned int *)((t1 + 0x34)) = ((((FUN_0c0e6f24()) - 64) << 2) << 1);
                FUN_0c0df940();
                
                *(unsigned int *)((t1 + 0x38)) = ((((FUN_0c0e6f24()) - 64) << 2) << 1);
                FUN_0c0df940();
                
                t0 = (t0 + 0x1);
                *(unsigned int *)((t1 + 0x3C)) = ((((FUN_0c0e6f24()) - 64) << 2) << 1);
                continue;
            }
            break;
        }
        t0 = 0x80;
    }
    t1 = 0x0;
    t2 = t0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 + (0x2E0 + a4));
        t2 = (*(int *)((t2 + 0x0)));
        FUN_0c0622c6((t2 + 0x10), (t2 + 0x10), (t2 + 0x34));
        FUN_0c062050((t2 + 0x4), (t2 + 0x4), (t2 + 0x28));
        t1 = (t1 + 0x1);
    }
    t0 = a5;
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x14) {
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            t1 = (t1 + (0x2E0 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            t2 = (t2 + 0x1);
            u0 = ((((struct o1C_float *)(t1))->v));
            u0 = (u0 - 0.049999997f);
            (((struct o1C_float *)(t1))->v) = u0;
            u1 = u0;
            (((struct o24_float *)(t1))->v) = u1;
            (((struct o20_float *)(t1))->v) = u1;
        }
        t0 = t2;
    }
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        return FUN_0c059330(a4, t0, a6, a7);
    }
    return 0xEC;
}

int FUN_0c0a6cae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = *(signed char *)0xC7F3051;
        t1 = *(signed char *)((a4 + 0x9));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    t2 = t1;
                    if (t1 == 3) {
                        t1 = *(signed char *)((a4 + 0x4));
                        t3 = t1;
                        if (t1 != (*(signed char *)((((*(signed char *)(((t0 + 0xC1525B4) + 0x0))) + 0xC15262F) + 0x0)))) {
                            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)(((t0 + 0xC1525B4) + 0x0))))));
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 - 1);
                            t3 = (t1 - 1);
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                } else {
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)(((t0 + 0xC1525B4) + 0x0))))));
                    if (((((struct oEC_short *)(a4))->v)) != (*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1))))) {
                        (((struct oEE_ushort *)(a4))->v) = ((*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1)))) - ((((struct oEC_short *)(a4))->v)));
                        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x168) {
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 0x168);
                        }
                        if ((int)((((struct oEE_short *)(a4))->v)) < 0) {
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x168);
                        }
                        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0xB4) {
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                            (((struct oF0_ushort *)(a4))->v) = 0x1;
                        } else {
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 2);
                            (((struct oF0_ushort *)(a4))->v) = 0x0;
                        }
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 0x168);
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) < 0) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x168);
                    }
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (int)(((float)((((struct oEC_short *)(a4))->v)) * ((((struct o0_float *)0xC0A6F88)->v))) / ((((struct o4_float *)0xC0A6F88)->v)));
                    t0 = (((struct o2E0_int *)(a4))->v);
                    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
                    t1 = 0x2E0;
                }
                t0 = t1;
            } else {
                t1 = *(signed char *)0xC7F2EE6;
                t2 = (unsigned char)t1;
                if ((int)(unsigned char)t1 <= 0) {
                } else {
                    t1 = *(signed char *)0xC7F2EE7;
                    t3 = (unsigned char)t1;
                    if ((int)(unsigned char)t1 <= 0) {
                    } else {
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x20);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
            t0 = *(signed char *)0xC7F2EE4;
            t2 = (unsigned char)t0;
            if ((int)(unsigned char)t0 < (int)0x3) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (int)(((float)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14))) * 360.0f) / 65536.0f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xFFFFFFFE);
                t2 = 0xEC;
            }
            t1 = t2;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, 0x1);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)0xC7F2EE4;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < (int)0x3) {
    } else {
        *(unsigned char *)((a4 + 0x9)) = 0x2;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))))));
        (((struct oEC_ushort *)(a4))->v) = (*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1))));
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (int)(((float)((((struct oEC_short *)(a4))->v)) * ((((struct o0_float *)0xC0A6F88)->v))) / ((((struct o4_float *)0xC0A6F88)->v)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        t1 = 0x2E0;
    }
    return t1;
}

int FUN_0c0a7a2e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = *(signed char *)((a4 + 0x3));
                if (t0 == 0) {
                    t1 = *(signed char *)((a4 + 0x3));
                    if (((((struct o38_float *)(a4))->v)) > (*(float *)(((0xC152878 + (signed char)(((t1 << 1) + t1) << 2)) + 0x0)))) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                } else {
                    if ((*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0))) > ((((struct o38_float *)(a4))->v))) {
                        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                }
                u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
                (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
                u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
                return 0x24;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -20.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct o38_float *)(a4))->v) = (*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2))));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
        FUN_0c0a77ec(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        } else {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
            t0 = *(signed char *)((a4 + 0x3));
            if (((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2))))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)) + 0x4)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
        }
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        break;
    case 2:
        if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)))) {
            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)));
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = *(signed char *)((a4 + 0x3));
            (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            FUN_0c0a77ec(a4);
        } else {
            t0 = *(signed char *)((a4 + 0x3));
            if (t0 == 0) {
                t1 = *(signed char *)((a4 + 0x3));
                if (((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152878 + (signed char)(((t1 << 1) + t1) << 2))))) {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 50.0f);
                } else {
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t1 = *(signed char *)((a4 + 0x3));
                    (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t1 << 1) + t1) << 2)) + 0x0)));
                    FUN_0c0a77ec(a4);
                }
            } else {
                if ((*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 50.0f);
                } else {
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = *(signed char *)((a4 + 0x3));
                    (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152878 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
                    FUN_0c0a77ec(a4);
                }
            }
        }
        break;
    }
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}
