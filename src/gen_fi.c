/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };
struct o7298_float { char p[0x7298]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c026554(int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c05ae26(int);
int FUN_0c05aeca(int);
int FUN_0c05b090(int);
int FUN_0c05b538(int);
int FUN_0c05c6e0(int);
int FUN_0c09ac70(int, int);
int FUN_0c09ad94(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0b6a9c(int, int);
int FUN_0c0c07bc(int, int, int, int, float);
int FUN_0c0dcd20(float, float, float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e1550(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6fdc(int);
extern int FUN_0c0e6fe8();
int nlObjPutTrnsl(int, float);
int nlUnitMatrix(void);
int thunk_FUN_0c062242(int);
int FUN_0c0314e4(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c036248(int a4);
int FUN_0c05c728(int a4);
int FUN_0c09a94c(int a4, int a5, int a6, int a7);

int FUN_0c0314e4(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    FUN_0c0e1550(0x1);
    nlUnitMatrix();
    t3 = *(signed char *)0xC7F31CB;
    if (t3 == 0) {
        return t3;
    }
    t3 = *(signed char *)0xC7F31CA;
    t4 = *(signed char *)0xC7F31C8;
    if (t4 != 0) {
        if (t4 == 1) {
            if ((*(signed char *)0xC7F31C9) == 0) {
                u0 = ((float)(*(signed char *)0xC7F31CB) / (float)(signed char)t3);
            } else {
                u1 = ((float)((*(signed char *)0xC7F31CB) - 1) / (float)(signed char)t3);
                u1 = -u1;
                u0 = (u1 + 1.0f);
            }
            (((struct oC_float *)0xC366F00)->v) = -320.0f;
            (((struct o0_float *)0xC366F00)->v) = -320.0f;
            (((struct o24_float *)0xC366F00)->v) = 320.0f;
            (((struct o18_float *)0xC366F00)->v) = 320.0f;
            (((struct o2C_float *)0xC366F00)->v) = -100.0f;
            (((struct o20_float *)0xC366F00)->v) = -100.0f;
            (((struct o14_float *)0xC366F00)->v) = -100.0f;
            (((struct o8_float *)0xC366F00)->v) = -100.0f;
            (((struct o0_uint *)0xC366F00)->v) = (((((struct o0_int *)0xC366F00)->v)) | 0x1);
            (((struct oC_uint *)0xC366F00)->v) = (((((struct oC_int *)0xC366F00)->v)) | 0x1);
            (((struct o18_uint *)0xC366F00)->v) = (((((struct o18_int *)0xC366F00)->v)) | 0x1);
            (((struct o24_uint *)0xC366F00)->v) = (((((struct o24_int *)0xC366F00)->v)) | 0x1);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)((unsigned int)(t5 & 0xFF0000) >> 16);
            if ((int)((unsigned int)(t5 & 0xFF0000) >> 16) < 0) {
                u1 = ((float)((unsigned int)(t5 & 0xFF0000) >> 16) + 4.2949673e+09f);
            }
            (((struct o34_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)((unsigned int)(t5 & 0xFF00) >> 8);
            if ((int)((unsigned int)(t5 & 0xFF00) >> 8) < 0) {
                u1 = ((float)((unsigned int)(t5 & 0xFF00) >> 8) + 4.2949673e+09f);
            }
            (((struct o38_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)(unsigned char)t5;
            if ((int)(unsigned char)t5 < 0) {
                u1 = ((float)(unsigned char)t5 + 4.2949673e+09f);
            }
            (((struct o3C_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c0e6fdc))(0xC366F30, 0xC366F00, 0xC366F18, 0xC366F0C, 255.0f, 640.0f, 320.0f, -320.0f);
            (((struct o0_float *)0xC32124C)->v) = f5;
            (((struct o20_float *)0xC32124C)->v) = f5;
            FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
            if (0x1 != 0) {
                u1 = (u0 * 3.125f);
                (((struct o1C_float *)0xC366F00)->v) = -37.5f;
                (((struct o4_float *)0xC366F00)->v) = -37.5f;
                (((struct o28_float *)0xC366F00)->v) = (u1 + -37.5f);
                (((struct o10_float *)0xC366F00)->v) = (u1 + -37.5f);
                t5 = ((int (*)(void))(FUN_0c0e6fe8))();
                t5 = ((int (*)(void))(FUN_0c0e6fe8))();
                return (((int (*)(void))(FUN_0c0e6fe8))());
            }
            return ((int (*)(void))(0xC031884))();
        }
        if (t4 == 2) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC031880))(0xC366F30, t3, 0xC366F00, a7, 255.0f, 640.0f, 320.0f, -320.0f);
        }
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC031884))(0xC366F30, t3, 0xC366F00, a7, 255.0f, 640.0f, 320.0f, -320.0f);
    }
    if ((*(signed char *)0xC7F31C9) == 0) {
        u0 = ((float)(*(signed char *)0xC7F31CB) / (float)(signed char)t3);
    } else {
        u1 = ((float)((*(signed char *)0xC7F31CB) - 1) / (float)(signed char)t3);
        u1 = -u1;
        u0 = (u1 + 1.0f);
    }
    (((struct oC_float *)0xC366F00)->v) = -320.0f;
    (((struct o0_float *)0xC366F00)->v) = -320.0f;
    (((struct o24_float *)0xC366F00)->v) = 320.0f;
    (((struct o18_float *)0xC366F00)->v) = 320.0f;
    (((struct o1C_float *)0xC366F00)->v) = -240.0f;
    (((struct o4_float *)0xC366F00)->v) = -240.0f;
    (((struct o28_float *)0xC366F00)->v) = 240.0f;
    (((struct o10_float *)0xC366F00)->v) = 240.0f;
    (((struct o2C_float *)0xC366F00)->v) = -1.0f;
    (((struct o20_float *)0xC366F00)->v) = -1.0f;
    (((struct o14_float *)0xC366F00)->v) = -1.0f;
    (((struct o8_float *)0xC366F00)->v) = -1.0f;
    (((struct o0_uint *)0xC366F00)->v) = (((((struct o0_int *)0xC366F00)->v)) | 0x1);
    (((struct oC_uint *)0xC366F00)->v) = (((((struct oC_int *)0xC366F00)->v)) | 0x1);
    (((struct o18_uint *)0xC366F00)->v) = (((((struct o18_int *)0xC366F00)->v)) | 0x1);
    (((struct o24_uint *)0xC366F00)->v) = (((((struct o24_int *)0xC366F00)->v)) | 0x1);
    t3 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c0e6fe8))(0xC366F30, 0xC366F00, 0xC366F18, 0xC366F0C, 255.0f, 640.0f, 320.0f, -320.0f);
    t3 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, 0x0, t0);
    t0 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, t1);
    t0 = ((int (*)(void))(FUN_0c0e6fe8))();
    t0 = *(int *)0xC7F31CC;
    u1 = (float)((unsigned int)(t0 & 0xFF0000) >> 16);
    if ((int)((unsigned int)(t0 & 0xFF0000) >> 16) < 0) {
        u1 = ((float)((unsigned int)(t0 & 0xFF0000) >> 16) + 4.2949673e+09f);
    }
    (((struct o4_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    t0 = *(int *)0xC7F31CC;
    u1 = (float)((unsigned int)(t0 & 0xFF00) >> 8);
    if ((int)((unsigned int)(t0 & 0xFF00) >> 8) < 0) {
        u1 = ((float)((unsigned int)(t0 & 0xFF00) >> 8) + 4.2949673e+09f);
    }
    (((struct o8_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    t0 = *(int *)0xC7F31CC;
    u1 = (float)(unsigned char)t0;
    if ((int)(unsigned char)t0 < 0) {
        u1 = ((float)(unsigned char)t0 + 4.2949673e+09f);
    }
    (((struct oC_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    *(float *)((t2 + 0x0)) = 1.0f;
    t0 = ((int (*)(int, float, float, float))(FUN_0c0e6fdc))(t2, f4, 0.0f, 0.75f);
    (((struct o0_float *)0xC32124C)->v) = f5;
    (((struct o20_float *)0xC32124C)->v) = f5;
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    nlObjPutTrnsl(0xC321238, u0);
    return ((int (*)(void))(0xC031884))();
}

int FUN_0c036248(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
                (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 6553.59961f) / 360.0f));
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 65536.0f) / 360.0f));
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 32768.0f) / 360.0f));
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o50_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0dfa50(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                u1 = (u0 * (FUN_0c0df4d0(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
                (((struct o4_float *)(t1))->v) = (-(u1 * 50.0f));
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o54_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0df4d0(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                (((struct o8_float *)(t1))->v) = (u0 * 50.0f);
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = (((((struct o58_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0dfa50(((-(*(int *)((t1 + 0x10)))) + 0x14000))));
                u1 = (u0 * (FUN_0c0dfa50(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
                (((struct oC_float *)(t1))->v) = (-(u1 * 50.0f));
                if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xEC;
                if ((short)(t1 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                return t2;
            }
            if (t0 == 3) {
                return FUN_0c059330(a4);
            }
            if (t0 == 4) {
                return FUN_0c059330(a4);
            }
            return t0;
        }
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.099999994f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.099999994f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 2.0f;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 6553.59961f) / 360.0f));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (int)(((float)((((struct oF2_short *)(a4))->v)) * 32768.0f) / 360.0f));
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00499999989f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00499999989f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + (((float)((((struct oF2_short *)(a4))->v)) / 100.0f) + 0.099999994f));
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o50_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0dfa50(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    u1 = (u0 * (FUN_0c0df4d0(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
    (((struct o4_float *)(t0))->v) = (-(u1 * 50.0f));
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o54_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0df4d0(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    (((struct o8_float *)(t0))->v) = (u0 * 50.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct o58_float *)((*(int *)((a4 + 0x1C)))))->v)) * (FUN_0c0dfa50(((-(*(int *)((t0 + 0x10)))) + 0x14000))));
    u1 = (u0 * (FUN_0c0dfa50(((-(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)))) + 0x14000))));
    (((struct oC_float *)(t0))->v) = (-(u1 * 50.0f));
    t0 = (((struct o2DC_int *)((*(int *)(((*(int *)(((*(int *)((a4 + 0x1C))) + 0x1C))) + 0x1C)))))->v);
    t1 = t0;
    if ((t0 & 0x400) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c05c728(int a4)
{
    int stk[18];
    register int t0;
    register int t8;
    register int t11;
    register int t13;
    register int t17;
    register int t18;
    register int t19;
    register float u21;
    register int t22;
    register int t26;
    register int t37;
    register float u39;
    register int t40;
    register float u43;
    register float u44;
    register float u45;
    register float u47;
    register float u50;
    register float u51;
    register float u52;
    register int t53;
    register int t54;
    register int t58;
    register int t59;
    register int t31;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return FUN_0c059330(a4);
    }
    if ((*(signed char *)((a4 + 0xB))) == 0) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t8 = *(signed char *)((a4 + 0x30D));
    if (t8 != 0) {
        if (t8 != 4) {
            if (t8 != 5) {
                if (t8 != 15) {
                    if (t8 == 16) {
                        FUN_0c05ae26(a4);
                        return FUN_0c05c6e0(a4);
                    }
                    return FUN_0c059330(a4);
                }
                FUN_0c05c6e0(a4);
                t11 = *(signed char *)((a4 + 0x8));
                if (t11 != 0) {
                    if (t11 != 1) {
                        if (t11 != 2) {
                            return t11;
                        }
                        return FUN_0c059330(a4);
                    }
                    *(int *)((int)stk + 68) = a4;
                    FUN_0c0e6fdc(a4);
                    t13 = FUN_0c026554(a4);
                    if ((signed char)t13 != 0) {
                        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x1E);
                        FUN_0c0b6a9c((a4 + 0x20), 0x3);
                        t17 = ((int)stk + 0);
                        t18 = 0x0;
                        for (;;) {
                            t19 = ((int (*)(void))(FUN_0c0e6fe8))();
                            u21 = *(float *)((t17 + 0x0));
                            t22 = (0x4 + t17);
                            t17 = (t17 + 0x8);
                            (((struct o20_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(((int)stk + 0)))->v)) + u21);
                            (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) + (*(float *)((t22 + 0x0))));
                            FUN_0c0b6a9c((a4 + 0x20), 0x0);
                            t18 = (t18 + 0x1);
                            if ((int)t18 >= (int)0x4) {
                                break;
                            }
                        }
                        t26 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t26 + 0x1);
                        t31 = (t26 + 0x1);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
                        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                        t31 = (FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44)));
                    }
                    return t31;
                }
                *(int *)((int)stk + 68) = a4;
                t37 = *(int *)((a4 + 0x1C));
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o101_uchar *)(a4))->v) = 0x0;
                (((struct o102_uchar *)(a4))->v) = 0x9;
                (((struct o107_uchar *)(a4))->v) = 0x0;
                (((struct o118_uint *)(a4))->v) = 0x0;
                u39 = (((struct o7298_float *)(t37))->v);
                t40 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
                *(int *)((int)stk + 16) = (a4 + 0x20);
                u43 = (((struct o20_float *)(a4))->v);
                u44 = ((FUN_0c0df4d0(((-(*(int *)((t37 + 0x30)))) + 0x14000))) * u39);
                u45 = u43;
                u45 = u45 + 100.0f * u44;
                (((struct o20_float *)(a4))->v) = u45;
                u47 = ((((struct o24_float *)(a4))->v));
                u47 = u47 + 180.0f * u39;
                (((struct o24_float *)(a4))->v) = u47;
                *(int *)((int)stk + 16) = (a4 + 0x28);
                u50 = (((struct o28_float *)(a4))->v);
                u51 = ((FUN_0c0dfa50(((-(*(int *)((t37 + 0x30)))) + 0x14000))) * u39);
                u52 = u50;
                u52 = u52 + 100.0f * u51;
                (((struct o28_float *)(a4))->v) = u52;
                t53 = ((int (*)(void))(FUN_0c0e6fe8))();
                t54 = *(signed char *)((t37 + 0x4));
                *(float *)(((int)stk + 20)) = (*(float *)((0xC33C05C + ((((t54 << 1) + t54) << 2) << 1))));
                t58 = ((int (*)(void))(FUN_0c0e6fe8))();
                t59 = *(signed char *)((t37 + 0x3));
                *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
                FUN_0c0c07bc((a4 + 0x38), (((int)stk + 20) + 0x14), (((int)stk + 20) + 0x8), (*(int *)((t37 + 0x30))), (*(float *)(((int)stk + 20))));
                return (((int (*)(void))(FUN_0c0e6fe8))());
            }
            FUN_0c05c6e0(a4);
            return FUN_0c05b090(a4);
        }
        FUN_0c05c6e0(a4);
        return FUN_0c05b538(a4);
    }
    FUN_0c05aeca(a4);
    return FUN_0c05c6e0(a4);
}

int FUN_0c09a94c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) + 0x1);
    (((struct o71A6_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A6))) - 1);
    if ((*(signed char *)((a4 + 0x71A6))) != 0) {
        return ((int (*)(int, int, int, int))(0xC09AC3A))(a4, a5, a6, a7);
    }
    if (((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)((a4 + 0x719C)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x4))) & 0xFFFFFF80) == 0) {
        t0 = *(signed char *)((a4 + 0x719C));
        if ((unsigned char)t0 != 0) {
            if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + (((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t0) - 1) << 2) << 1)) + 0x4))) & 64) != 0) {
                FUN_0c09ad94(a4, a5);
                (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                return ((int (*)(void))(0xC09AC3A))();
            }
        }
        t0 = *(signed char *)((a4 + 0x719C));
        if ((unsigned char)t0 == 0) {
            if (((unsigned char)(*(signed char *)((((*(int *)(((((((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xA1234) + ((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2)) + 0x0))) + ((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)t0) << 2) << 1)) + 0x4))) & 64) != 0) {
                FUN_0c09ac70(a4, a5);
                (((struct o71AA_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71AA))) ^ 0x40);
                (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
                (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
                (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
                (((struct o719E_ushort *)(a4))->v) = (((((struct o719E_short *)(a4))->v)) - 1);
                return ((int (*)(void))(0xC09AC3A))();
            }
        }
        FUN_0c09ac70(a4, a5);
        (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
        (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
        (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
        if (((unsigned char)(*(signed char *)((a4 + 0x71AA))) & 64) != 0) {
            *(volatile signed char *)((a4 + 0x71AA));
            return ((int (*)(void))(0xC09AC36))();
        }
        return ((int (*)(void))(0xC09AC3A))();
    }
    (((struct o719A_ushort *)(a4))->v) = ((((struct o7198_short *)(a4))->v));
    (((struct o719D_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x719C)));
    (((struct o719C_uchar *)(a4))->v) = ((unsigned int)((unsigned int)((*(int *)(((((((unsigned short)((((struct o7198_short *)(a4))->v)) + (unsigned char)(*(signed char *)(((0x719C + a4) + 0x0)))) << 2) << 1) + (*(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0)))) + 0x0))) & 0xFF000000) >> 16) >> 8);
    FUN_0c09ac70(a4, a5);
    t0 = (((struct o7198_short *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x719C));
    t2 = *(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0));
    (((struct o71A6_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)t0 + (unsigned char)t1) << 2) << 1) + t2) + 0x5)));
    t3 = *(signed char *)((a4 + 0x71A6));
    (((struct o71A7_uchar *)(a4))->v) = t3;
    (((struct o71A2_uchar *)(a4))->v) = 0x0;
    (((struct o719E_ushort *)(a4))->v) = 0x0;
    t4 = (((((unsigned short)t0 + (unsigned char)t1) << 2) << 1) + t2);
    t0 = t3;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(unsigned char)(*(signed char *)((a4 + 0x719C)))) {
            break;
        }
        t4 = 0x7198;
        t0 = 0x71A4;
        t4 = (t4 + a4);
        t0 = (t0 + a4);
        t4 = (*(short *)((t4 + 0x0)));
        t0 = (*(signed char *)((t0 + 0x0)));
        t4 = (unsigned short)t4;
        t4 = (t4 + t1);
        t2 = 0x719E;
        t0 = (t0 << 2);
        t0 = (t0 + (0xA1234 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50)));
        t0 = (*(int *)((t0 + 0x0)));
        t4 = (t4 << 2);
        t4 = (t4 << 1);
        t4 = (t4 + t0);
        t2 = (t2 + a4);
        t0 = (*(short *)((t2 + 0x0)));
        t1 = (t1 + 0x1);
        t0 = (t0 + (unsigned char)(*(signed char *)((t4 + 0x5))));
        *(unsigned short *)((t2 + 0x0)) = t0;
    }
    t0 = (((struct o719E_short *)(a4))->v);
    for (;;) {
        if ((int)((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1) >= (int)(unsigned short)t0) {
            break;
        }
        (((struct o71A2_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x71A2))) + 0x1);
    }
    (((struct o71A3_uchar *)(a4))->v) = ((*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3))) + 0x1);
    (((struct o719C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x719C))) + 0x1);
    return ((int (*)(int, int, int, int))(0xC09AC3A))((unsigned short)t0, a5, a6, a7);
}
