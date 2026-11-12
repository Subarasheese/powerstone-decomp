/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0158d8(void);
int FUN_0c01a800(int);
int FUN_0c01a928(int);
int FUN_0c01aa54(int);
extern int FUN_0c01adbc();
int FUN_0c01ae1e(int);
float FUN_0c02649a(int, int);
float FUN_0c02651e(int);
int FUN_0c031496(int, int, int, int);
int FUN_0c04512c(int, int, int);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c05f2d4(int, int);
int FUN_0c060c88(int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c06233a(int, int, int);
int FUN_0c09a7b2(int);
int FUN_0c09a808(int, int, int);
int FUN_0c0a2f52(void);
int FUN_0c0a2f7a(void);
int FUN_0c0a2fd0(int, int);
int FUN_0c0a32dc(void);
int FUN_0c0a347c(void);
int FUN_0c0a3796(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0a5eba(void);
int FUN_0c0a5f94(void);
int FUN_0c0a60e4(void);
int FUN_0c0a6244(void);
int FUN_0c0a6454(void);
int FUN_0c0a66b0(void);
int FUN_0c0ac780(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d5188(void);
int FUN_0c0d8e5c(int, int);
int FUN_0c0d8e6e(int, int, int);
int FUN_0c0d8fb0(int, int, int, int);
float FUN_0c0df340(float);
int FUN_0c0df360(int, int, float);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e0ae0(int);
int FUN_0c0e1240(int, int, int, int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0c82b8(int a4, int a5);
int FUN_0c01a436(int a4, int a5, int a6, int a7);
int FUN_0c048926(int a4);
int FUN_0c0a04f4(int a4, int a5);
int kmiProcessVertex_03(int a4);
int FUN_0c0457d0(void);
int FUN_0c04fed8(int a4, int a5, float f4);
int FUN_0c0a41d4(int a4, int a5, int a6, int a7);
int FUN_0c0d3be6(void);
int FUN_0c0e12e0(int a4, int a5, float f4, float f5);
int FUN_0c091b5c(int a4);
int FUN_0c0c9394(int a4);

int FUN_0c0c82b8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t27;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    register int t19;
    register int t20;
    register int t21;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x6);
    t27 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C87B8;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o58_float *)(t0))->v) = 1.5f;
        (((struct o54_float *)(t0))->v) = 1.5f;
        (((struct o50_float *)(t0))->v) = 1.5f;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        for (;;) {
            t5 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t5 + 0x4);
            t6 = *(signed char *)((a4 + 0x3));
            t7 = *(int *)((((t5 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t7, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x1C);
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            *(unsigned short *)((t7 + 0x2)) = 0x29;
            t11 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t11 + 0x1);
            if ((int)(t11 + 0x1) >= (int)0x3) {
                break;
            }
        }
        t12 = (((struct o2EC_int *)(t0))->v);
        t13 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t12, ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), 0xC);
        *(unsigned char *)((t12 + 0x0)) = 0x0;
        *(unsigned short *)((t12 + 0x2)) = 0x23F;
        FUN_0c0e6fe8();
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t0) + 0x10);
        t18 = 0x4;
        for (;;) {
            t19 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t19 + 0x4);
            t20 = *(signed char *)((a4 + 0x3));
            t21 = *(int *)((((t19 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t21, ((signed char)((((t20 << 1) + t20) << 2) << 1) + 0xC6002D0), 0x20);
            *(unsigned char *)((t21 + 0x0)) = 0x1;
            *(unsigned short *)((t21 + 0x2)) = 0x239;
            FUN_0c0e6fe8();
            memset((t21 + 0x34), 0x0, 0xC);
            *(unsigned char *)(((t21 + 0x34) + 0xA)) = 0x1;
            *(unsigned char *)(((t21 + 0x34) + 0x8)) = 0x0;
            t18 = (t18 + 0x1);
            (((struct o34_float *)(t21))->v) = 0.0f;
            (((struct o4_float *)((t21 + 0x34)))->v) = 0.799999952f;
            if ((int)t18 >= (int)0x6) {
                break;
            }
        }
        t27 = 0x4;
    }
    return t27;
}

int FUN_0c01a436(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    int t5;
    register int t11;
    int t13;
    register int t19;
    register int t21;
    register int t23;
    register int t28;
    register int t30;
    register int t32;
    register int t44;
    register int t47;
    register int t49;
    register int t60;
    register int t62;
    int t64;
    register int t70;
    int t72;
    register int t78;
    register int t80;
    register int t82;
    register int t87;
    register int t89;
    register int t91;
    register int t103;
    register int t106;
    register int t108;
    register int t8;
    register int t16;
    register int t67;
    register int t75;

    t0 = *(signed char *)0xC362338;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return ((int (*)(int, int, int, int))(0xC01A5B6))(0xC362338, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC01A5BA))(0xC362338, a5, a6, a7);
        }
        t1 = *(signed char *)0xC362339;
        if (t1 != 0) {
            if (t1 != 1) {
                return ((int (*)(int, int, int, int))(0xC01A5BA))(0xC362339, a5, a6, a7);
            }
            (((struct oA_ushort *)0xC362338)->v) = (((((struct oA_short *)0xC362338)->v)) + 0x5B0);
            t3 = FUN_0c01ae1e(0x40);
            if ((signed char)t3 != 0) {
                t5 = *(signed char *)0xC36233E;
                if ((t5 != 0) && (t5 != 6)) {
                    t8 = ((*(signed char *)0xC36233E) - 1);
                } else {
                    t8 = ((*(signed char *)0xC36233E) + 0x5);
                }
                (((struct o6_uchar *)0xC362338)->v) = t8;
            }
            t11 = FUN_0c01ae1e(0x80);
            if ((signed char)t11 != 0) {
                t13 = *(signed char *)0xC36233E;
                if ((t13 != 5) && (t13 != 11)) {
                    t16 = ((*(signed char *)0xC36233E) + 0x1);
                } else {
                    t16 = ((*(signed char *)0xC36233E) - 5);
                }
                (((struct o6_uchar *)0xC362338)->v) = t16;
            }
            t19 = FUN_0c01ae1e(0x10);
            if ((signed char)t19 != 0) {
                t21 = *(signed char *)0xC36233E;
                t23 = (t21 - 0x6);
                if ((int)t21 < (int)0x6) {
                    t23 = ((*(signed char *)0xC36233E) + 0x6);
                }
                (((struct o6_uchar *)0xC362338)->v) = t23;
            }
            t28 = FUN_0c01ae1e(0x20);
            if ((signed char)t28 != 0) {
                t30 = *(signed char *)0xC36233E;
                t32 = (t30 - 0x6);
                if ((int)t30 < (int)0x6) {
                    t32 = ((*(signed char *)0xC36233E) + 0x6);
                }
                (((struct o6_uchar *)0xC362338)->v) = t32;
            }
            if ((*(signed char *)0xC36233E) != (*(signed char *)0xC362340)) {
                FUN_0c0a3796(0x0, 0x4B);
            }
            (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
            t44 = FUN_0c01ae1e(0x4);
            if ((signed char)t44 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
                (((struct o1_uchar *)0xC362338)->v) = 0x0;
                return ((int (*)(void))(0xC01A5BA))();
            }
            t47 = FUN_0c01ae1e(0x2);
            if ((signed char)t47 != 0) {
                return ((int (*)(void))(0xC01A5A6))();
            }
            return ((int (*)(void))(0xC01A5BA))();
        }
        (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
        t49 = ((int (*)(int, int, int, int))(FUN_0c01adbc))(0x3, a5, a6, a7);
    } else {
        (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c0a2f52();
        FUN_0c0d8e6e(0x1C, 0x0, 0xF0);
        FUN_0c060c88(0xE);
        FUN_0c01aa54(0x0);
        t60 = *(signed char *)0xC362339;
        if (t60 != 0) {
            if (t60 != 1) {
                return ((int (*)(int, int, int, int))(0xC01A5BA))(0xC362339, a5, a6, a7);
            }
            (((struct oA_ushort *)0xC362338)->v) = (((((struct oA_short *)0xC362338)->v)) + 0x5B0);
            t62 = FUN_0c01ae1e(0x40);
            if ((signed char)t62 != 0) {
                t64 = *(signed char *)0xC36233E;
                if ((t64 != 0) && (t64 != 6)) {
                    t67 = ((*(signed char *)0xC36233E) - 1);
                } else {
                    t67 = ((*(signed char *)0xC36233E) + 0x5);
                }
                (((struct o6_uchar *)0xC362338)->v) = t67;
            }
            t70 = FUN_0c01ae1e(0x80);
            if ((signed char)t70 != 0) {
                t72 = *(signed char *)0xC36233E;
                if ((t72 != 5) && (t72 != 11)) {
                    t75 = ((*(signed char *)0xC36233E) + 0x1);
                } else {
                    t75 = ((*(signed char *)0xC36233E) - 5);
                }
                (((struct o6_uchar *)0xC362338)->v) = t75;
            }
            t78 = FUN_0c01ae1e(0x10);
            if ((signed char)t78 != 0) {
                t80 = *(signed char *)0xC36233E;
                t82 = (t80 - 0x6);
                if ((int)t80 < (int)0x6) {
                    t82 = ((*(signed char *)0xC36233E) + 0x6);
                }
                (((struct o6_uchar *)0xC362338)->v) = t82;
            }
            t87 = FUN_0c01ae1e(0x20);
            if ((signed char)t87 != 0) {
                t89 = *(signed char *)0xC36233E;
                t91 = (t89 - 0x6);
                if ((int)t89 < (int)0x6) {
                    t91 = ((*(signed char *)0xC36233E) + 0x6);
                }
                (((struct o6_uchar *)0xC362338)->v) = t91;
            }
            if ((*(signed char *)0xC36233E) != (*(signed char *)0xC362340)) {
                FUN_0c0a3796(0x0, 0x4B);
            }
            (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
            t103 = FUN_0c01ae1e(0x4);
            if ((signed char)t103 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362338)->v) = ((*(signed char *)0xC362338) + 0x1);
                (((struct o1_uchar *)0xC362338)->v) = 0x0;
                return ((int (*)(void))(0xC01A5BA))();
            }
            t106 = FUN_0c01ae1e(0x2);
            if ((signed char)t106 != 0) {
                return ((int (*)(void))(0xC01A5A6))();
            }
            return ((int (*)(void))(0xC01A5BA))();
        }
        (((struct o1_uchar *)0xC362338)->v) = ((*(signed char *)0xC362339) + 0x1);
        t108 = ((int (*)(int))(FUN_0c01adbc))(0x3);
    }
    FUN_0c01a800(0x1);
    FUN_0c01a928(0x1);
    (((struct o8_uchar *)0xC362338)->v) = (*(signed char *)0xC36233E);
    return ((int (*)(void))(0xC01A5BA))();
}

int FUN_0c048926(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0d5188();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0xA;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4);
            }
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                t1 = t0;
                if (t0 != 1) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t1 = (FUN_0c0a2fd0((*(signed char *)((a4 + 0xF))), ((((struct oEC_short *)(a4))->v))));
                }
                t0 = t1;
            } else {
                t1 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xF0;
                if ((short)((t1 - 1) + 0x1) == 0) {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    FUN_0c0a2fd0((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                    t0 = 0xEC;
                    if (((((struct oEE_short *)(a4))->v)) == ((((struct oEC_short *)(a4))->v))) {
                        *(unsigned char *)((a4 + 0x8)) = 0xA;
                        t0 = 0xA;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                FUN_0c0a2fd0((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                t1 = 0xEC;
                if (((((struct oEE_short *)(a4))->v)) == ((((struct oEC_short *)(a4))->v))) {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t1 = 0xA;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xF0;
            if ((short)((t0 - 1) + 0x1) == 0) {
                t0 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                FUN_0c0a2fd0((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
                t0 = 0xEE;
                if (((((struct oEE_short *)(a4))->v)) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t0 = 0xA;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct oEE_ushort *)(a4))->v) = ((((struct oEC_short *)(a4))->v));
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            FUN_0c0a2fd0((*(signed char *)((a4 + 0xF))), (int)(((float)((((struct oEE_short *)(a4))->v)) / (float)((((struct oEC_short *)(a4))->v))) * 127.0f));
            t1 = 0xEE;
            if (((((struct oEE_short *)(a4))->v)) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0xA;
                t1 = 0xA;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xF0;
        if ((short)((t0 - 1) + 0x1) != 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0a04f4(int a4, int a5)
{
    int stk[7];
    register int t4;
    register int t6;
    register float t17;
    register float t18;
    register float t26;
    register float t27;

    *(unsigned char *)(((int)stk + 8)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x1A;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c09a7b2(a4);
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    if (((((struct o71C8_int *)(a4))->v)) != 0) {
        t4 = FUN_0c0ac780(((((struct o71C8_int *)(a4))->v)), 0x2, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if (t4 != 0) {
            t6 = *(int *)((((((struct o71C8_int *)(a4))->v)) + 0x30));
            *(unsigned int *)((a4 + 0x30)) = t6;
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((FUN_0c0df4d0(((-t6) + 0x14000))) * 10.0f)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v)) - (((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f)));
            t17 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
            *(float *)(((int)stk + 4)) = t17;
            t18 = FUN_0c02649a(a4, 0x0);
            if (t18 > t17) {
                (((struct o24_float *)(a4))->v) = ((*(float *)(((int)stk + 4))) - (FUN_0c02651e(a4)));
            }
            t26 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1);
            *(float *)(((int)stk + 0)) = t26;
            t27 = FUN_0c02649a(a4, 0x1);
            if (t26 > t27) {
                (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 0)));
            }
        }
    }
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 8))) == 0) {
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xE);
        FUN_0c0a3914(a4, 0xF);
        FUN_0c09a808(a4, 0x2, 0xD7);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    } else {
        FUN_0c09a808(a4, 0x2, 0xD8);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int kmiProcessVertex_03(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    *(unsigned int *)(((t16 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0457d0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = FUN_0c059132(0x5, 0x1, 0x8);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x5)) = 0x1;
        *(unsigned int *)((t2 + 0x10)) = 0xC045AAC;
        (((struct o118_uint *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        *(unsigned int *)((t2 + 0x30)) = 0x0;
        *(unsigned int *)((t2 + 0x2C)) = 0x0;
        (((struct o58_float *)(t2))->v) = 1.0f;
        (((struct o54_float *)(t2))->v) = 1.0f;
        (((struct o50_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t2 + 0x1C)) = 0x0;
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))), 0xC664A18, t4);
            *(unsigned char *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0));
            t5 = ((int (*)(int))(FUN_0c0e6fe8))((signed char)(((t4 << 1) + t4) << 2));
            *(volatile int *)((((0x2E0 + t2) + (t4 << 2)) + 0x0));
            t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        t0 = 0x6;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))), 0xC664A18, 0x3);
            *(unsigned char *)(((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c0e6fe8))((signed char)(((t0 << 1) + t0) << 2));
            *(volatile int *)((((0x2E0 + t2) + (t0 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
        }
        memset((t2 + 0x308), 0x0, 0x14);
        *(unsigned char *)(((t2 + 0x308) + 0x5)) = 0x1;
        (((struct o308_float *)(t2))->v) = 0.0f;
        t3 = 0x1;
    }
    return t3;
}

int FUN_0c04fed8(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = a5;
    if ((*(signed char *)((((((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v)) + 0x0))) != 0) {
        t1 = *(int *)((a4 + 0x1C));
        u0 = (((struct o20_float *)(a4))->v);
        u1 = (((struct o20_float *)(t1))->v);
        u2 = (((struct o28_float *)(a4))->v);
        u3 = (((struct o28_float *)(t1))->v);
        u4 = ((u2 - u3) * (u2 - u3));
        u4 = u4 + ((u0 - u1)) * ((u0 - u1));
        u0 = FUN_0c0df340(u4);
        if (u0 > 300.0f) {
            t1 = *(signed char *)0xC3673EE;
            t2 = (((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
            u0 = ((((struct o20_float *)(t2))->v));
            u0 = u0 + 10.0f * ((((struct o38_float *)(t2))->v));
            (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o64_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            t2 = (((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
            u0 = ((((struct o28_float *)(t2))->v));
            u0 = u0 + 10.0f * ((((struct o40_float *)(t2))->v));
            (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t2 = ((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40);
        } else {
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o64_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
            t1 = *(signed char *)0xC3673EE;
            u0 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v))))->v);
            (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v) = u0;
        }
        t0 = t2;
    }
    t1 = *(signed char *)0xC3673EE;
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o60_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o68_float *)(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40)))->v);
    u4 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u4 = 9.99999997e-07f;
    }
    u0 = (u3 - u2);
    u0 = -u0;
    t2 = FUN_0c0df360(((short)((short)(unsigned char)t1 * (short)0x254) + 0xC366F40), t0, (u0 / u4));
    t0 = t2;
    if (0.0f > u4) {
        t0 = (t2 + 0x8000);
    }
    return (unsigned short)(t0 + 0x4000);
}

int FUN_0c0a41d4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t0 = *(signed char *)0xC7F3071;
                if ((unsigned char)t0 != 1) {
                    if ((unsigned char)t0 != 2) {
                        if ((unsigned char)t0 != 3) {
                            return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A4340))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                    }
                    if ((0x8 & (*(int *)0xC7F321C)) != 0) {
                        return ((int (*)(int, int, int, int))(0xC0A4352))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                }
                if ((0x8 & ((((struct o3C_int *)0xC7F31BC)->v))) == 0) {
                    return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4352))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
            }
            return ((int (*)(void))(0xC0A4390))();
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c0a2f7a();
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c0158d8();
        FUN_0c060c88(0x4);
        FUN_0c0a32dc();
        FUN_0c0a347c();
        FUN_0c05f2d4(0x1, 0x0);
        (((struct o0_float *)0xC494060)->v) = 0.0f;
        (((struct o4_float *)0xC494060)->v) = 110.0f;
        (((struct o8_float *)0xC494060)->v) = 0.0f;
        (((struct oC_float *)0xC494060)->v) = 0.0f;
        (((struct o10_float *)0xC494060)->v) = 110.0f;
        (((struct o14_float *)0xC494060)->v) = 0.0f;
        FUN_0c0d8e5c(0x0, 0x40);
        FUN_0c0d8fb0(0x17, 0x40, 0xC494060, 0xC49406C);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    *(unsigned short *)0xC7F3036 = 0xB4;
    FUN_0c0a5eba();
    FUN_0c0a5f94();
    FUN_0c0a60e4();
    FUN_0c0a6244();
    FUN_0c0a6454();
    return FUN_0c0a66b0();
}

int FUN_0c0d3be6(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((unsigned char)(*(signed char *)0xC7F2EE7) != 0) {
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c0a2f52();
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        FUN_0c0158d8();
        (((struct o0_uchar *)0xC7E40C7)->v) = 0x0;
        t3 = 0xC7F314C;
        if ((*(signed char *)0xC7F3018) == 0) {
            t3 = 0xC7F3083;
        }
        (((struct o1_uchar *)0xC7E40C7)->v) = (*(signed char *)((t3 + 0x0)));
        (((struct o1_uchar *)0xC7EB2B0)->v) = 0x1;
        (((struct o0_uchar *)0xC7EB2B0)->v) = 0x1;
        (((struct o0_uchar *)0xC7EB397)->v) = 0x1;
        FUN_0c0df940();
        *(volatile float *)0xC0D3D7C;
        
        (((struct o1_uchar *)0xC7EB397)->v) = (FUN_0c0e6f24());
        (((struct o1_uchar *)0xC7F2580)->v) = 0x1;
        FUN_0c0df940();
        *(volatile float *)0xC0D3D7C;
        
        (((struct o0_uchar *)0xC7F2580)->v) = ((FUN_0c0e6f24()) + 0x1);
        *(unsigned char *)0xC7F3051 = (*(signed char *)0xC7EB398);
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x1C));
            if (((*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == (*(signed char *)((t4 + 0x4)))) && (t0 = *(signed char *)((t4 + 0x71EC)), t1 = t0, t2 = *(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC)), t2 == t1)) {
                t4 = 0x1;
                if ((*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == 1) {
                    t4 = 0x2;
                }
                (((struct o71EC_uchar *)(((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = t4;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        FUN_0c031496(0xFF000000, 0x0, 0x0, 0xF);
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c0e12e0(int a4, int a5, float f4, float f5)
{
    int stk[8];
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register float u12;
    register float u13;
    register int t18;
    register float u20;
    register int t6;
    register int t7;
    register int t10;
    register float u11;
    register int t14;
    register int t16;
    register int t17;
    register float u19;

    *(unsigned int *)(((int)stk + 12)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t2 = FUN_0c0e0ae0(0x0);
        t5 = t2;
    }
    t8 = t7;
    t9 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            t9 = 0x0;
            t18 = 0x0;
            u20 = 1.0f;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t18 = t9;
                t10 = t9;
                u13 = -1.0f;
                t10 = (t10 << 2);
                if ((int)t18 < (int)0x4) {
                    for (;;) {
                        t5 = t18;
                        t17 = (*(signed char *)((a5 + t5)));
                        t6 = t2;
                        t5 = t17;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t6);
                        u11 = (*(float *)((t10 + t5)));
                        t5 = t17;
                        t5 = (t5 << 2);
                        u19 = (*(float *)(((((int)stk + 0) + 0x10) + t5)));
                        u11 = _builtin_fabsf(u11);
                        u12 = u11;
                        u12 = (u12 * u19);
                        if (u12 > u13) {
                            t8 = t18;
                            u13 = u12;
                        }
                        t18 = (t18 + 0x1);
                        if ((int)t18 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t16 = t8;
                t16 = (t16 + a5);
                t18 = (*(signed char *)((t16 + 0x0)));
                if (t8 != t9) {
                    t17 = t9;
                    t17 = (t17 + a5);
                    t14 = (*(signed char *)((t17 + 0x0)));
                    u20 = (-u20);
                    *(unsigned char *)((t16 + 0x0)) = t14;
                    *(unsigned char *)((t17 + 0x0)) = t18;
                }
                t16 = t18;
                t16 = (t16 << 2);
                t5 = t2;
                t16 = (t16 << 2);
                t5 = (t5 + t16);
                u11 = 0.0f;
                u12 = (*(float *)((t10 + t5)));
                u20 = (u20 * u12);
                if (u12 != u11) {
                    t17 = t9;
                    t17 = (t17 + 0x1);
                    t6 = t17;
                    t6 = (t6 + a5);
                    *(unsigned int *)(((int)stk + 0)) = t17;
                    *(unsigned int *)(((int)stk + 8)) = t6;
                    for (;;) {
                        if ((int)t17 >= (int)0x4) {
                            break;
                        }
                        t8 = (*(int *)(((int)stk + 8)));
                        t5 = t2;
                        t8 = (t8 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t8;
                        t8 = (t8 - 1);
                        t8 = (*(signed char *)((t8 + 0x0)));
                        t18 = t8;
                        t18 = (t18 << 2);
                        t18 = (t18 << 2);
                        t5 = (t5 + t18);
                        u13 = (*(float *)((t10 + t5)));
                        u13 = (u13 / u12);
                        *(float *)((t10 + t5)) = u13;
                        t8 = (*(int *)(((int)stk + 0)));
                        if ((int)t8 < (int)0x4) {
                            for (;;) {
                                t14 = (t2);
                                t6 = t8;
                                t14 = (t14 + t16);
                                t6 = (t6 << 2);
                                u19 = u13;
                                t14 = (t14 + t6);
                                t5 = t2;
                                t5 = (t5 + t18);
                                *(unsigned int *)(((int)stk + 4)) = t6;
                                u11 = (*(float *)((t14 + 0x0)));
                                t5 = (t5 + t6);
                                t8 = (t8 + 0x1);
                                u19 = (u19 * u11);
                                u11 = (*(float *)((t5 + 0x0)));
                                u11 = (u11 - u19);
                                *(float *)((t5 + 0x0)) = u11;
                                if ((int)t8 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                        t17 = (t17 + 0x1);
                    }
                    t9 = (t9 + 0x1);
                    continue;
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, -1.0f, 1.0f);
            }
            if ((*(int *)(((int)stk + 12))) == 0) {
                t6 = 0xC0E1240;
                t5 = (FUN_0c0e1240(t2, 0x4, t8, t9));
                return ((int (*)(void))(0xC0E1448))();
            }
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, -1.0f, 1.0f);
        }
        t5 = t9;
        t10 = t5;
        t10 = (t10 << 2);
        t8 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u12 = 0.0f;
        t10 = (t10 << 2);
        for (;;) {
            if ((int)t8 >= (int)0x4) {
                break;
            }
            t6 = t8;
            t5 = t2;
            t6 = (t6 << 2);
            t5 = (t5 + t10);
            u11 = (*(float *)((t6 + t5)));
            u11 = _builtin_fabsf(u11);
            u13 = u11;
            t8 = (t8 + 0x1);
            if (u13 > u12) {
                u12 = u13;
            }
        }
        u11 = 0.0f;
        if (u12 == u11) {
            break;
        }
        u11 = 1.0f;
        u11 = (u11 / u12);
        t5 = t9;
        t5 = (t5 << 2);
        t9 = (t9 + 0x1);
        *(float *)(((((int)stk + 0) + 0x10) + t5)) = u11;
    }
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, 0.0f, 1.0f);
}

int FUN_0c091b5c(int a4)
{
    register int t0;
    register int t1;

    (((struct oEC_ushort *)(a4))->v) = 0x78;
    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 96) {
            if ((unsigned char)t0 != 97) {
                if ((unsigned char)t0 != 98) {
                    if ((unsigned char)t0 != 99) {
                        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                            t0 = *(signed char *)((a4 + 0x7205));
                            t1 = (*(signed char *)(((((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1) + (0xC1507CE + (signed char)((t0 << 1) + (t0 << 2)))) + 0x0)));
                        } else {
                            t0 = *(signed char *)((a4 + 0x3));
                            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                            t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
                            t1 = 0x60;
                            if ((unsigned char)t0 != 1) {
                                t1 = 0x80;
                                if ((unsigned char)t0 != 2) {
                                    t1 = 0x70;
                                    if (((unsigned char)t0 != 3) && ((unsigned char)t0 != 4)) {
                                        t1 = 0x60;
                                    }
                                }
                            }
                        }
                        FUN_0c09a808(a4, 0x2, t1);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                    } else {
                        FUN_0c09a808(a4, 0x2, 0xAF);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                        (((struct o106_uchar *)(a4))->v) = 0x1;
                    }
                } else {
                    FUN_0c09a808(a4, 0x2, 0xF);
                    (((struct o101_uchar *)(a4))->v) = 0x0;
                    (((struct o102_uchar *)(a4))->v) = 0xA;
                    *(unsigned int *)((a4 + 0x30)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
                    (((struct oEC_ushort *)(a4))->v) = 0x96;
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
            } else {
                FUN_0c09a808(a4, 0x2, 0xD);
                *(unsigned char *)((a4 + 0xB)) = 0x2;
            }
        } else {
            FUN_0c09a808(a4, 0x2, 0xF);
            *(unsigned char *)((a4 + 0xB)) = 0x2;
        }
    } else {
        FUN_0c09a808(a4, 0x2, (*(signed char *)(((*(signed char *)((a4 + 0x7205))) + 0xC1508C0))));
        (((struct o101_uchar *)(a4))->v) = 0x0;
        (((struct o102_uchar *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c0c9394(int a4)
{
    int stk[5];
    register int t4;
    register int t5;
    register int t14;
    register int t18;
    register int t21;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register float u46;
    register float u47;
    register int t58;
    register int t52;
    register int t53;
    register int t3;
    int t7;
    int t15;
    register int t16;
    int t59;
    register int t60;

    *(unsigned char *)((a4 + 0xF)) = 0x0;
    t5 = *(int *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((a4 + 0xE)));
    if ((int)(*(int *)(((int)stk + 4))) <= 0) {
        t52 = 0x0;
        t53 = t5;
    } else {
        t4 = 0x0;
        for (;;) {
            if (((*(signed char *)((t5 + 0x2D8))) == 0) && (t7 = *(signed char *)((t5 + 0x108)), t3 = t7, t3 == 0)) {
                t3 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x1);
                t5 = (*(int *)((t5 + 0x18)));
                if ((int)t4 < (int)t3) continue;
                t14 = *(signed char *)((a4 + 0xF));
                if ((t14 != 0) && (t15 = *(int *)(((int)stk + 4)), t16 = *(int *)((t5 + 0x18)), t5 = t16, (int)t4 < (int)(t15 - 1))) {
                    t3 = (*(int *)((t5 + 0x10)));
                    return t14;
                }
                return t14;
            }
            break;
        }
        *(unsigned char *)((a4 + 0xF)) = 0x1;
        t18 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x1, 0x0);
        FUN_0c06206e((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), (a4 + 0x20));
        *(int *)((int)stk + 0) = (0xF0 + a4);
        (((struct oF0_float *)(a4))->v) = (FUN_0c0620a4((((int)stk + 0) + 0x8)));
        *(unsigned char *)((a4 + 0xD)) = 0x5;
        *(unsigned char *)((a4 + 0xC)) = 0x4;
        t21 = ((int (*)(void))(FUN_0c0e6fe8))();
        u28 = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        u29 = *(float *)(((int)stk + 8));
        u30 = (u28 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u31 = u29;
        u31 = u31 + 120.0f * u30;
        *(float *)(((int)stk + 8)) = u31;
        u38 = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        u39 = *(float *)(((int)stk + 16));
        u40 = (u38 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        u41 = u39;
        u41 = u41 + 120.0f * u40;
        *(float *)(((int)stk + 16)) = u41;
        u46 = *(float *)(((int)stk + 12));
        u47 = ((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        *(float *)(((int)stk + 12)) = (u46 + ((-(u47 * 120.0f))));
        FUN_0c04512c((((int)stk + 4) + 0x4), (t5 + 0x2C), (*(signed char *)(((0x308 + a4) + 0x6))));
        *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x8;
        t52 = t4;
        t53 = t5;
    }
    t58 = *(signed char *)((a4 + 0xF));
    if ((t58 != 0) && (t59 = *(int *)(((int)stk + 4)), t60 = *(int *)((t53 + 0x18)), (int)t52 < (int)(t59 - 1))) {
        *(volatile int *)((t60 + 0x10));
    }
    return t58;
}
