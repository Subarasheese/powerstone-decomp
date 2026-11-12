/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71F8_uint { char p[0x71F8]; unsigned int v; };
struct o71FC_uint { char p[0x71FC]; unsigned int v; };
struct o720C_short { char p[0x720C]; short v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7215_uchar { char p[0x7215]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_short { char p[0x7228]; short v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7241_uchar { char p[0x7241]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0446ce(int);
int FUN_0c0447bc(int);
int FUN_0c044868(int, int);
int FUN_0c0448f6(int);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08a6e4(int);
int FUN_0c092894(int);
int FUN_0c097b10(int);
extern int FUN_0c098b44();
extern int FUN_0c098b9c();
int FUN_0c099a88(int);
int FUN_0c099a92(int);
int FUN_0c099ac6(int);
int FUN_0c099ae4(int);
int FUN_0c099afe(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c7be(int, int);
int FUN_0c09c894(int);
int FUN_0c09d2f2(int, int, float);
int FUN_0c09d8ec(int);
int FUN_0c09e7b8(int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(void);
int FUN_0c10b7b0(int, int, int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c06358e(int a4);
int FUN_0c09788c(int a4);
int FUN_0c115d7c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int kmiProcessVertex_08(int a4);
int kmiProcessVertex_14(int a4);
int FUN_0c034eb0(int a4, int a5, int a6, int a7);
int FUN_0c10d240(int a4, int a5, int a6, int a7);
int FUN_0c04492c(int a4);
int FUN_0c06c5ae(int a4, int a5, int a6, int a7);

int FUN_0c06358e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = FUN_0c09a910(a4);
                if ((signed char)t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                t2 = t1;
            } else {
                t1 = t0;
                if (t0 == 3) {
                    FUN_0c09a910(a4);
                    *(volatile float *)((a4 + 0x3C));
                    t1 = 0x3C;
                }
                t2 = t1;
            }
            return t2;
        }
        FUN_0c09a910(a4);
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 == 0) {
            t1 = FUN_0c09d2f2(a4, (0x7254 + a4), 60.0f);
            if ((signed char)t1 == 1) {
                FUN_0c09a808(a4, 0x2, 0xCD);
                (((struct oEC_ushort *)(a4))->v) = 0x9;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                FUN_0c09a808(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o3C_float *)(a4))->v) = 14.0f;
                (((struct o48_float *)(a4))->v) = -2.5f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = FUN_0c09e7b8(a4);
            if ((signed char)t1 == 0) {
                return ((int (*)(void))(0xC0637E8))();
            }
            return ((int (*)(void))(0xC0637D0))();
        }
        if ((signed char)t0 == 2) {
            FUN_0c09a808(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o3C_float *)(a4))->v) = 14.0f;
            (((struct o48_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 == 0) {
            return ((int (*)(void))(0xC0637E8))();
        }
        return ((int (*)(void))(0xC0637D0))();
    }
    FUN_0c09a910(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -17.5f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 17.5f * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 17.5f * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
            (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c09788c(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t29;
    register int t55;
    register int t67;
    register int t93;
    register int t94;
    register int t97;
    register int t121;
    register int t139;
    register int t165;
    register int t177;
    register int t203;
    register int t204;
    register int t207;
    int t25;
    int t54;
    int t135;
    int t164;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)0xC7F3192) == 0) {
            if (((((struct o720C_short *)(a4))->v)) != 0) {
                (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
            }
            if ((*(signed char *)((a4 + 0x7215))) != 0) {
                t8 = *(signed char *)((a4 + 0x7215));
                (((struct o7215_uchar *)(a4))->v) = (t8 - 1);
                if ((unsigned char)(t8 - 1) == 0) {
                    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                }
            }
        }
        if ((((((struct o7228_short *)(a4))->v)) == 0) && (t25 = *(signed char *)((a4 + 0x7226)), t25 == 0)) {
            FUN_0c099a88(a4);
        } else {
            t29 = *(signed char *)((a4 + 0x7226));
            switch (t29) {
            case 32:
                FUN_0c099a92(a4);
                FUN_0c09c7be(a4, ((0x723E + a4) + 0x2));
                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t54 = (((struct o7228_short *)(a4))->v), (int)t54 > 0)) {
                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                    t55 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t55 - 30);
                    if ((int)(short)(t55 - 30) <= 0) {
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                    }
                }
                break;
            case 64:
                FUN_0c099ac6(a4);
                break;
            case 96:
                FUN_0c099afe(a4);
                break;
            case 0x80:
                FUN_0c099ae4(a4);
                break;
            }
            t67 = (((struct o7228_short *)(a4))->v);
            (((struct o7228_ushort *)(a4))->v) = (t67 - 1);
            if ((int)(short)(t67 - 1) <= 0) {
                (((struct o7226_uchar *)(a4))->v) = 0x0;
                (((struct o7228_ushort *)(a4))->v) = 0x0;
            }
        }
        FUN_0c09d8ec(a4);
        FUN_0c0e6fe8();
        if ((*(signed char *)((a4 + 0x105))) != 0) {
            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
        }
        if ((*(signed char *)((a4 + 0x106))) != 0) {
            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
        }
        if ((*(signed char *)((a4 + 0x107))) != 0) {
            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
        }
        if ((*(signed char *)((a4 + 0x7241))) != 0) {
            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
        }
        (((struct o2D9_uchar *)(a4))->v) = 0x0;
        FUN_0c08a6e4(a4);
        t93 = *(signed char *)((a4 + 0x9));
        switch (t93) {
        case 0:
            FUN_0c097b10(a4);
            break;
        case 1:
            FUN_0c092894(a4);
            break;
        case 2:
            t97 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(FUN_0c098b44))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
            break;
        case 3:
            t94 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c098b9c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            break;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o71BA_uchar *)(a4))->v) = 0x0;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        FUN_0c09a808(a4, 0x0, 0x0);
        (((struct o7194_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
        (((struct o7190_uint *)(a4))->v) = ((((struct o718C_int *)(a4))->v));
        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        *(int *)((int)stk + 8) = a4;
        if ((*(signed char *)0xC7F3192) == 0) {
            if (((((struct o720C_short *)(a4))->v)) != 0) {
                (((struct o720C_ushort *)(a4))->v) = (((((struct o720C_short *)(a4))->v)) - 1);
            }
            if ((*(signed char *)((a4 + 0x7215))) != 0) {
                t121 = *(signed char *)((a4 + 0x7215));
                (((struct o7215_uchar *)(a4))->v) = (t121 - 1);
                if ((unsigned char)(t121 - 1) == 0) {
                    (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
                }
            }
        }
        if ((((((struct o7228_short *)(a4))->v)) == 0) && (t135 = *(signed char *)((a4 + 0x7226)), t135 == 0)) {
            FUN_0c099a88(a4);
        } else {
            t139 = *(signed char *)((a4 + 0x7226));
            switch (t139) {
            case 32:
                FUN_0c099a92(a4);
                FUN_0c09c7be(a4, ((0x723E + a4) + 0x2));
                if (((*(signed char *)((a4 + 0x7240))) == 0) && (t164 = (((struct o7228_short *)(a4))->v), (int)t164 > 0)) {
                    (((struct o7240_uchar *)(a4))->v) = 0x14;
                    t165 = (((struct o7228_short *)(a4))->v);
                    (((struct o7228_ushort *)(a4))->v) = (t165 - 30);
                    if ((int)(short)(t165 - 30) <= 0) {
                        (((struct o7228_ushort *)(a4))->v) = 0x0;
                    }
                }
                break;
            case 64:
                FUN_0c099ac6(a4);
                break;
            case 96:
                FUN_0c099afe(a4);
                break;
            case 0x80:
                FUN_0c099ae4(a4);
                break;
            }
            t177 = (((struct o7228_short *)(a4))->v);
            (((struct o7228_ushort *)(a4))->v) = (t177 - 1);
            if ((int)(short)(t177 - 1) <= 0) {
                (((struct o7226_uchar *)(a4))->v) = 0x0;
                (((struct o7228_ushort *)(a4))->v) = 0x0;
            }
        }
        FUN_0c09d8ec(a4);
        FUN_0c0e6fe8();
        if ((*(signed char *)((a4 + 0x105))) != 0) {
            (((struct o105_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x105))) - 1);
        }
        if ((*(signed char *)((a4 + 0x106))) != 0) {
            (((struct o106_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x106))) - 1);
        }
        if ((*(signed char *)((a4 + 0x107))) != 0) {
            (((struct o107_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x107))) - 1);
        }
        if ((*(signed char *)((a4 + 0x7241))) != 0) {
            (((struct o7241_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7241))) - 1);
        }
        (((struct o2D9_uchar *)(a4))->v) = 0x0;
        FUN_0c08a6e4(a4);
        t203 = *(signed char *)((a4 + 0x9));
        switch (t203) {
        case 0:
            FUN_0c097b10(a4);
            break;
        case 1:
            FUN_0c092894(a4);
            break;
        case 2:
            t207 = ((int (*)(int, int, int, int, int))(FUN_0c098b44))(a4, 0x0, 0x0, 0x0, a4);
            break;
        case 3:
            t204 = ((int (*)(int, int, int, int, int))(FUN_0c098b9c))(a4, 0x0, 0x0, 0x0, a4);
            break;
        }
    }
    (((struct o71FC_uint *)(a4))->v) = ((((struct o71F8_int *)(a4))->v));
    (((struct o71F8_uint *)(a4))->v) = ((((struct o2E4_int *)(a4))->v));
    (((struct o71CC_uint *)(a4))->v) = 0x0;
    return ((int (*)(void))(0xC097ABC))();
}

int FUN_0c115d7c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[18];
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t16;
    register int t18;
    register int t19;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t33;
    register int t34;
    register int t35;
    register int t37;
    register int t38;
    register int t45;
    register int t46;
    register int t49;
    register int t54;

    *(unsigned int *)(((int)stk + 4)) = (*(short *)((a7 + 0x0)));
    *(unsigned int *)(((int)stk + 40)) = (a7 + 0x2);
    *(unsigned int *)(((int)stk + 16)) = (*(short *)(((a7 + 0x2) + 0x0)));
    t10 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 44)) = (a9 + 0x2);
    *(unsigned int *)(((int)stk + 12)) = (*(short *)(((a9 + 0x2) + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t8 = 0x0;
    t9 = a6;
    t11 = a4;
    t12 = a8;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) < (int)(*(int *)(((int)stk + 36)))) {
            t15 = *(short *)((t11 + 0x0));
            if (((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t11 = (t11 + 0x2);
            *(unsigned int *)(((int)stk + 0)) = (((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            for (;;) {
                t16 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t16;
                t8 = (*(int *)(((int)stk + 16)));
                t18 = *(int *)(((int)stk + 4));
                t19 = *(int *)(((int)stk + 0));
                if ((int)((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t9 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t9 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t9 + 0x0)) = ((((int)t16 >> 4) * t19) + ((int)(((short)((short)(a10 >> 0)) * t18) + ((short)((short)(a11 >> 0)) * t8)) >> 12));
                    }
                }
                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                t23 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                *(unsigned int *)(((int)stk + 4)) = t23;
                t8 = (*(int *)(((int)stk + 20)));
                t8 = (t8 & 0xF);
                t26 = *(int *)(((int)stk + 16));
                t27 = t8;
                t8 = 0xC15BB80;
                t28 = *(int *)(((t27 << 2) + t8));
                t29 = *(int *)(((int)stk + 0));
                if ((int)((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t9 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t9 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t9 + 0x0)) = ((t28 * t29) + ((int)(((short)((short)(a10 >> 0)) * t23) + ((short)((short)(a11 >> 0)) * t26)) >> 12));
                    }
                }
                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                t33 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                *(unsigned int *)(((int)stk + 4)) = t33;
                t34 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t34 + 0x2);
                if ((int)(t34 + 0x2) >= (int)0x20) {
                    break;
                }
            }
            t35 = *(short *)((t11 + 0x0));
            *(unsigned short *)(((int)stk + 0)) = ((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00))) != 0) {
                t8 = (*(int *)(((int)stk + 32)));
                return t8;
            }
            t11 = (t11 + 0x2);
            *(unsigned int *)(((int)stk + 8)) = (((short)((unsigned char)((int)t35 >> 8) | ((t35 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            for (;;) {
                t37 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t37;
                t38 = *(int *)(((int)stk + 12));
                t8 = (*(int *)(((int)stk + 8)));
                if ((int)((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12)) > (int)0x7FFF) {
                    *(unsigned short *)((t12 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t12 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t12 + 0x0)) = ((((int)t37 >> 4) * t8) + ((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t38)) >> 12));
                    }
                }
                t8 = (*(int *)(((int)stk + 20)));
                t45 = *(short *)((t12 + 0x0));
                t46 = t10;
                t12 = (t12 + 0x2);
                t10 = t45;
                t8 = (t8 & 0xF);
                t8 = (t8 << 2);
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((0xC15BB80 + t8)));
                t8 = (*(int *)(((int)stk + 12)));
                t49 = *(int *)(((int)stk + 8));
                if ((int)(((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49)) > (int)0x7FFF) {
                    *(unsigned short *)((t12 + 0x0)) = 0x7FFF;
                } else {
                    if ((int)(((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49)) < (int)0xFFFF8000) {
                        *(unsigned short *)((t12 + 0x0)) = 0xFFFF8000;
                    } else {
                        *(unsigned short *)((t12 + 0x0)) = (((int)(((short)((short)(a10 >> 0)) * t10) + ((short)((short)(a11 >> 0)) * t46)) >> 12) + (t8 * t49));
                    }
                }
                *(unsigned int *)(((int)stk + 12)) = t10;
                t10 = *(short *)((t12 + 0x0));
                t12 = (t12 + 0x2);
                t54 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t54 + 0x2);
                if ((int)(t54 + 0x2) >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
            *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x2);
            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x2);
            continue;
        }
        t8 = 0x50;
        *(unsigned short *)((a7 + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)(((*(int *)(((int)stk + 40))) + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned short *)(((*(int *)((((int)stk + 0) + t8))) + 0x0)) = t10;
        *(unsigned short *)(((*(int *)(((int)stk + 44))) + 0x0)) = (*(int *)(((int)stk + 12)));
        t8 = a5;
        return t8;
    }
    return (*(int *)(((int)stk + 28)));
}

int kmiProcessVertex_08(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u18;
    register int t19;
    register int t28;
    register float u30;
    register float u32;
    register int t33;
    register int t42;
    register float u44;
    register float u46;
    register int t48;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u16 = (((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    u18 = (((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    *(unsigned int *)(((t19 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u30 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    u32 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u44 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    u46 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int kmiProcessVertex_14(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u17;
    register float u19;
    register int t20;
    register int t29;
    register float u31;
    register float u33;
    register int t34;
    register int t43;
    register float u45;
    register float u47;
    register int t49;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    u16 = (((struct o18_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    u17 = *(float *)0xC1102F4;
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = ((((((int)(u16 * u17) << 16) << 8) | ((int)(u16 * u17) << 16)) | ((int)(u16 * u17) << 8)) | (int)(u16 * u17));
    u19 = (((struct o1C_float *)((*(int *)((((int)stk + 0) + 0x0)))))->v);
    t20 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u19 * u17) << 16) << 8) | ((int)(u19 * u17) << 16)) | ((int)(u19 * u17) << 8)) | (int)(u19 * u17)));
    *(unsigned int *)(((t20 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t20 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t20 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t29 = kmiBGPlanePutColor(t3, (((t20 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10))));
    u31 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t29 << 2) + 0xC817064)) = ((((((int)(u31 * u17) << 16) << 8) | ((int)(u31 * u17) << 16)) | ((int)(u31 * u17) << 8)) | (int)(u31 * u17));
    u33 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t34 = kmiBGPlanePutWord(t3, (t29 + 0x1), ((((((int)(u33 * u17) << 16) << 8) | ((int)(u33 * u17) << 16)) | ((int)(u33 * u17) << 8)) | (int)(u33 * u17)));
    *(unsigned int *)(((t34 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t34 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t34 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t43 = kmiBGPlanePutColor(t3, (((t34 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    u45 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t43 << 2) + 0xC817064)) = ((((((int)(u45 * u17) << 16) << 8) | ((int)(u45 * u17) << 16)) | ((int)(u45 * u17) << 8)) | (int)(u45 * u17));
    u47 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t43 + 0x1), ((((((int)(u47 * u17) << 16) << 8) | ((int)(u47 * u17) << 16)) | ((int)(u47 * u17) << 8)) | (int)(u47 * u17)))) << 2);
    t49 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t49, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c034eb0(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R8;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_2 = a4;
    v0_3 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((v0_2 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x9));
    v0_0 = (v0_2);
    v0_2 = (0xC7E40C4);
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C034EDA;
    if ((v0_1 != 2)) goto L_C034F22;
    L_C034EDA:;
    v0_3 = (0x72D0);
    if (((*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((v0_0 + 0x3))) * (unsigned short)0x72D0) + v0_2) + 0x9))) == 2)) goto L_C034F36;
    v0_2 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((v0_0 + 0x3))) * (unsigned short)v0_3) + v0_2) + 0x71BA));
    v0_1 = (v0_2);
    if ((v0_2 == 10)) goto L_C034F36;
    if ((v0_1 == 11)) goto L_C034F36;
    if ((v0_1 == 12)) goto L_C034F36;
    if ((v0_1 == 22)) goto L_C034F36;
    if ((v0_1 == 21)) goto L_C034F36;
    L_C034F22:;
    *(unsigned char *)((v0_0 + 0x1)) = 0x0;
    return FUN_0c059330(v0_0, v0_1, a6, a7);
    L_C034F36:;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C034F50;
    if ((v0_2 == 1)) goto L_C034F56;
    return FUN_0c059330(v0_0, v0_1, a6, a7);
    L_C034F56:;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    *(volatile int *)((v0_0 + 0x1C));
    FUN_0c0e6fe8();
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x4000);
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x1555);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) + 0xE38);
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C034FC6;
    if ((v0_2 == 1)) goto L_C034FCE;
    if ((v0_2 == 2)) goto L_C034FD8;
    if (!((v0_2 == 3))) goto L_C0350A2;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) - 0.099999994f);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    FPUL_ = (0x3DCCCCCC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C0350A2;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0350A2;
    L_C0350A2:;
    v0_1 = FUN_0c0555dc();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0350C4;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    L_C0350C4:;
    return v0_2;
    L_C034FD8:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (((struct oEE_short *)(v0_0))->v);
    (((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = (((float)((short)v0_1 - ((((struct oEC_short *)(v0_0))->v))) / (float)(short)v0_1) * 0.5f);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    w0_0 = 0.5f;
    w0_0 = w0_0 + 0.099999994f * (FUN_0c0dfa50((((((struct oEC_short *)(v0_0))->v)) << 14)));
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    w0_0 = (((struct o24_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C0350A2;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    goto L_C0350A2;
    L_C034FCE:;
    *(unsigned char *)((v0_0 + 0x1)) = 0x1;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C034FD8;
    L_C034FC6:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0350A2;
    L_C034F50:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C034F56;
}

int FUN_0c10d240(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t16;
    register int t22;
    register int t40;
    register int t43;
    register int t48;
    register int t61;
    register int t66;
    register int t82;
    register int t100;
    register int t103;
    register int t108;
    register int t121;
    register int t126;

    if (((((struct o0_int *)0xC817304)->v)) != 1) {
        return ((int (*)(int, int, int, int))(0xC10D4CA))(0x0, 0x1, 0x0, 0xA05F8144);
    }
    if ((*(int *)0xC8171CC) != 0) {
        return ((int (*)(int, int, int, int))(0xC10D4CA))(0x0, 0x1, 0x0, 0xA05F8144);
    }
    *(unsigned int *)0xC8171CC = 0x1;
    (((struct o0_uint *)0xC817304)->v) = 0x2;
    (((struct o18_uint *)0xC817304)->v) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)0xC842714 = (*(int *)0xFFD8000C);
    *(unsigned int *)0xA05F8008 = 0x1;
    *(unsigned int *)0xA05F8008 = 0x0;
    t4 = *(int *)(((int)stk + 8));
    (((struct o0_uint *)0xA05F8124)->v) = (*(int *)(((((t4 << 2) << 2) << 1) + 0xC817430)));
    (((struct o8_uint *)0xA05F8124)->v) = (*(int *)(((((t4 << 2) << 2) << 1) + 0xC817434)));
    (((struct o4_uint *)0xA05F8124)->v) = (*(int *)(((((t4 << 2) << 2) << 1) + 0xC81743C)));
    (((struct oC_uint *)0xA05F8124)->v) = (*(int *)(((((t4 << 2) << 2) << 1) + 0xC817440)));
    *(unsigned int *)0xA05F8164 = (*(int *)(((((t4 << 2) << 2) << 1) + 0xC817438)));
    (((struct o20_uint *)0xA05F8124)->v) = 0x80000000;
    *(volatile int *)0xA05F8144;
    (((struct o1C_uint *)0xC817304)->v) = 0x0;
    (((struct o20_uint *)0xC817304)->v) = 0x0;
    *(unsigned int *)0xC8426D0 = 0x0;
    if (((((struct o0_int *)0xC817388)->v)) != 0) {
        (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x1);
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t16 = FUN_0c10b7b0(0x10000000, ((((struct o34_int *)0xC817304)->v)), (((((struct o0_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
        if (t16 == 0x100) {
            return ((int (*)(int, int, int, int))(0xC10D4C6))(t16, a5, a6, a7);
        }
        if (((((struct o10_int *)0xC817388)->v)) == 0) {
            if (((((struct o20_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
                *(int *)((int)stk + 0) = ((int)stk + 4);
                t22 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
                if (t22 != 0x100) {
                    if (((((struct o30_int *)0xC817388)->v)) != 0) {
                        (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                        if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                            *(volatile int *)0xC8173F0;
                            *(volatile int *)0xC8173F0;
                            return ((int (*)(int, int, int, int))(0xC10D45A))(t22, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10D47E))(t22, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D49A))(t22, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D4C6))(t22, a5, a6, a7);
            }
            if (((((struct o30_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                    *(volatile int *)0xC8173F0;
                    *(volatile int *)0xC8173F0;
                    return ((int (*)(int, int, int, int))(0xC10D45A))(t16, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D47E))(t16, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D49A))(t16, a5, a6, a7);
        }
        (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x2);
        if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
            *(unsigned int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0))) & 0xF0FFFFFF) | 0x1000000);
            *(int *)((int)stk + 0) = ((int)stk + 4);
            t40 = FUN_0c10b7b0(0x10000000, ((((struct o4_int *)0xC8173EC)->v)), ((((struct o8_int *)0xC8173EC)->v)), 0x10, ((int)stk + 4));
            if (t40 == 0x100) {
                return ((int (*)(int, int, int, int))(0xC10D4C6))(t40, a5, a6, a7);
            }
            *(int *)((int)stk + 0) = ((int)stk + 4);
            t43 = FUN_0c10b7b0(0x10000000, ((((struct o0_int *)0xC817348)->v)), (((((struct o10_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
            if (t43 != 0x100) {
                if (((((struct o20_int *)0xC817388)->v)) != 0) {
                    (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t48 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
                    if (t48 != 0x100) {
                        if (((((struct o30_int *)0xC817388)->v)) != 0) {
                            (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                            if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                                *(volatile int *)0xC8173F0;
                                *(volatile int *)0xC8173F0;
                                return ((int (*)(int, int, int, int))(0xC10D45A))(t48, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC10D47E))(t48, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10D49A))(t48, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D4C6))(t48, a5, a6, a7);
                }
                if (((((struct o30_int *)0xC817388)->v)) != 0) {
                    (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                    if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                        *(volatile int *)0xC8173F0;
                        *(volatile int *)0xC8173F0;
                        return ((int (*)(int, int, int, int))(0xC10D45A))(t43, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D47E))(t43, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D49A))(t43, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D4C6))(t43, a5, a6, a7);
        }
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t61 = FUN_0c10b7b0(0x10000000, ((((struct o0_int *)0xC817348)->v)), (((((struct o10_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
        if (t61 != 0x100) {
            if (((((struct o20_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
                *(int *)((int)stk + 0) = ((int)stk + 4);
                t66 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
                if (t66 != 0x100) {
                    if (((((struct o30_int *)0xC817388)->v)) != 0) {
                        (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                        if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                            *(volatile int *)0xC8173F0;
                            *(volatile int *)0xC8173F0;
                            return ((int (*)(int, int, int, int))(0xC10D45A))(t66, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10D47E))(t66, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D49A))(t66, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D4C6))(t66, a5, a6, a7);
            }
            if (((((struct o30_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                    *(volatile int *)0xC8173F0;
                    *(volatile int *)0xC8173F0;
                    return ((int (*)(int, int, int, int))(0xC10D45A))(t61, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D47E))(t61, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D49A))(t61, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10D4C6))(t61, a5, a6, a7);
    }
    if (((((struct o10_int *)0xC817388)->v)) == 0) {
        if (((((struct o20_int *)0xC817388)->v)) != 0) {
            (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
            *(int *)((int)stk + 0) = ((int)stk + 4);
            t82 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
            if (t82 != 0x100) {
                if (((((struct o30_int *)0xC817388)->v)) != 0) {
                    (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                    if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                        *(volatile int *)0xC8173F0;
                        *(volatile int *)0xC8173F0;
                        return ((int (*)(int, int, int, int))(0xC10D45A))(t82, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D47E))(t82, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D49A))(t82, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D4C6))(t82, a5, a6, a7);
        }
        if (((((struct o30_int *)0xC817388)->v)) != 0) {
            (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
            if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                *(volatile int *)0xC8173F0;
                *(volatile int *)0xC8173F0;
                return ((int (*)(int, int, int, int))(0xC10D45A))(0x0, 0x1, (((t4 << 2) << 2) << 1), 0xA05F8144);
            }
            return ((int (*)(int, int, int, int))(0xC10D47E))(0x0, 0x1, (((t4 << 2) << 2) << 1), 0xA05F8144);
        }
        return ((int (*)(int, int, int, int))(0xC10D49A))(0x0, 0x1, (((t4 << 2) << 2) << 1), 0xA05F8144);
    }
    (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x2);
    if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
        *(unsigned int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC8173EC)->v)) + 0x0))) & 0xF0FFFFFF) | 0x1000000);
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t100 = FUN_0c10b7b0(0x10000000, ((((struct o4_int *)0xC8173EC)->v)), ((((struct o8_int *)0xC8173EC)->v)), 0x10, ((int)stk + 4));
        if (t100 == 0x100) {
            return ((int (*)(int, int, int, int))(0xC10D4C6))(t100, a5, a6, a7);
        }
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t103 = FUN_0c10b7b0(0x10000000, ((((struct o0_int *)0xC817348)->v)), (((((struct o10_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
        if (t103 != 0x100) {
            if (((((struct o20_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
                *(int *)((int)stk + 0) = ((int)stk + 4);
                t108 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
                if (t108 != 0x100) {
                    if (((((struct o30_int *)0xC817388)->v)) != 0) {
                        (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                        if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                            *(volatile int *)0xC8173F0;
                            *(volatile int *)0xC8173F0;
                            return ((int (*)(int, int, int, int))(0xC10D45A))(t108, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10D47E))(t108, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D49A))(t108, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D4C6))(t108, a5, a6, a7);
            }
            if (((((struct o30_int *)0xC817388)->v)) != 0) {
                (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                    *(volatile int *)0xC8173F0;
                    *(volatile int *)0xC8173F0;
                    return ((int (*)(int, int, int, int))(0xC10D45A))(t103, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D47E))(t103, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D49A))(t103, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10D4C6))(t103, a5, a6, a7);
    }
    *(int *)((int)stk + 0) = ((int)stk + 4);
    t121 = FUN_0c10b7b0(0x10000000, ((((struct o0_int *)0xC817348)->v)), (((((struct o10_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
    if (t121 != 0x100) {
        if (((((struct o20_int *)0xC817388)->v)) != 0) {
            (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x4);
            *(int *)((int)stk + 0) = ((int)stk + 4);
            t126 = FUN_0c10b7b0(0x10000000, ((((struct o10_int *)0xC817348)->v)), (((((struct o20_int *)0xC817388)->v)) + 0x20), 0x10, ((int)stk + 4));
            if (t126 != 0x100) {
                if (((((struct o30_int *)0xC817388)->v)) != 0) {
                    (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
                    if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                        *(volatile int *)0xC8173F0;
                        *(volatile int *)0xC8173F0;
                        return ((int (*)(int, int, int, int))(0xC10D45A))(t126, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10D47E))(t126, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10D49A))(t126, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D4C6))(t126, a5, a6, a7);
        }
        if (((((struct o30_int *)0xC817388)->v)) != 0) {
            (((struct o1C_uint *)0xC817304)->v) = (((((struct o1C_int *)0xC817304)->v)) | 0x8);
            if (((((struct o0_int *)0xC8173EC)->v)) == 1) {
                *(volatile int *)0xC8173F0;
                *(volatile int *)0xC8173F0;
                return ((int (*)(int, int, int, int))(0xC10D45A))(t121, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC10D47E))(t121, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10D49A))(t121, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC10D4C6))(t121, a5, a6, a7);
}

int FUN_0c04492c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c044868(a4, (0x308 + a4));
                FUN_0c0447bc(a4);
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.199999988f);
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.199999988f);
                t2 = 0x1C;
                if (!(((((struct o8_float *)0xC044B68)->v)) > ((((struct o1C_float *)(t1))->v)))) {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t1 = t2;
            } else {
                t2 = t0;
                if (t0 == 3) {
                    FUN_0c044868(a4, (0x308 + a4));
                    FUN_0c0447bc(a4);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
                    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.099999994f);
                    (((struct o44_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    (((struct o48_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    (((struct o4C_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    u0 = (((struct o5C_float *)(a4))->v);
                    (((struct o5C_float *)(a4))->v) = (u0 - 0.049999997f);
                    t0 = 0x5C;
                    if (!((u0 - 0.049999997f) > 0.0f)) {
                        *(unsigned char *)((a4 + 0x8)) = 0x2;
                        t0 = 0x2;
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            FUN_0c044868(a4, (0x308 + a4));
            FUN_0c0447bc(a4);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                t1 = (((struct o2E0_int *)(a4))->v);
                FUN_0c06233a(t1, 0xC4CFA68, 0x6E);
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                (((struct o20_float *)(t1))->v) = 1.0f;
                (((struct o24_float *)(t1))->v) = 0.199999988f;
                (((struct o1C_float *)(t1))->v) = 0.199999988f;
                *(unsigned short *)((t1 + 0x2)) = 0x1211;
                (((struct o44_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o48_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o4C_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o2C_float *)(t1))->v) = ((((struct o0_float *)0xC044B68)->v));
                (((struct o98_float *)(t1))->v) = ((((struct o4_float *)0xC044B68)->v));
                t2 = 0x98;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = (((struct o304_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.099999994f);
            if ((u0 - 0.099999994f) > 0.0f) {
                return 0x20;
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            FUN_0c0446ce(a4);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            return FUN_0c0448f6(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o3C_float *)(a4))->v) = -30.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        FUN_0c06233a(t0, 0xC4CFA68, 0x6B);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x11;
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    if (((((struct o24_float *)(a4))->v)) > ((((struct o308_float *)(a4))->v))) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o24_float *)(a4))->v) = ((((struct o308_float *)(a4))->v));
    }
    return 0x24;
}

int FUN_0c06c5ae(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06C4E0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06C3A8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C348))(a4, a5, a6, a7);
}
