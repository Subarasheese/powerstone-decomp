/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_float { char p[0xF0]; float v; };
int FUN_0c02828e(void);
int FUN_0c02d420(void);
int FUN_0c02d458(void);
int FUN_0c031388(void);
int FUN_0c03bdb2(int);
int FUN_0c042222(int, int);
int FUN_0c042256(int, int, int);
int FUN_0c0422b8(int, int);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c06b5fe(int);
int FUN_0c08a7d4(int, int);
int FUN_0c097eb6(int);
int FUN_0c097fc4(int);
int FUN_0c098026(int);
int FUN_0c09a910(int);
int FUN_0c09ddfe(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0aa266(int);
int FUN_0c0aa464(int);
int FUN_0c0c99c0(int, int, int, float);
int FUN_0c0c9a4c(int, int);
int FUN_0c0c9d18(int);
int FUN_0c0c9eb8(int);
int FUN_0c0ca050(int);
int FUN_0c0dca60(int, int, int, int, int);
int FUN_0c0dcac0(int, int);
int FUN_0c0de280(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int FUN_0c0e2110(float, float, float);
int FUN_0c0e2790(int, float, float, float);
int FUN_0c0e6fe8(void);
int buCalcCRC(int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c062242(int);
int FUN_0c02d4a4(void);
float FUN_0c097c26(int a4);
int FUN_0c0c9b08(int a4);
int FUN_0c042304(int a4, int a5, int a6, int a7);
int FUN_0c0aa078(int a4, int a5, int a6, int a7);
int FUN_0c03921c(int a4, int a5, int a6, int a7);
int FUN_0c03be40(int a4, int a5, int a6, int a7);
int FUN_0c0f3ad4(int a4, int a5, int a6, int a7);
int FUN_0c10cc84(void);
int FUN_0c06b816(int a4, int a5, int a6, int a7);

int FUN_0c02d4a4(void)
{
    register int t0;
    int t1;
    register int t2;

    t2 = FUN_0c02d458();
    if (t2 != 0) {
        return FUN_0c02828e();
    }
    if ((*(signed char *)0xC7F31D0) != 0) {
        if (((*(signed char *)0xC7F300B) == 0) && ((t0 = *(signed char *)0xC7F300E, t0 == 0) && (t1 = *(signed char *)0xC494D20, t1 == 0))) {
            (((struct o15_uchar *)0xC7F31BC)->v) = ((*(signed char *)0xC7F31D1) - 1);
        }
        t0 = *(signed char *)0xC7F31D0;
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                FUN_0c0de280(0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            }
        } else {
            FUN_0c0de280(0xFFC0C0C0, 0xFFC0C0C0, 0xFFC0C0C0);
        }
        if ((int)(*(signed char *)0xC7F31D1) > 0) {
        } else {
            (((struct o15_uchar *)0xC7F31BC)->v) = 0x0;
            (((struct o14_uchar *)0xC7F31BC)->v) = 0x0;
        }
    } else {
        FUN_0c0de280(((((struct o0_int *)0xC7F31BC)->v)), ((((struct o4_int *)0xC7F31BC)->v)), ((((struct o8_int *)0xC7F31BC)->v)));
        if ((*(signed char *)0xC7F319E) == 0) {
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2790(0x1D28, 1.33333325f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            FUN_0c02d420();
        } else {
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(-0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2A24);
            *(unsigned int *)0xC321190 = 0x2;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x2);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            FUN_0c0e1550(0x3);
            nlUnitMatrix();
            FUN_0c0e2110(0.5f, 0.0f, 0.0f);
            FUN_0c0e2790(0x1D28, 2.66666651f, 0.299999982f, 12000.0f);
            FUN_0c0e1550(0x2);
            FUN_0c0e1240(0xC7F2C20);
            *(unsigned int *)0xC321190 = 0x3;
            FUN_0c02d420();
            FUN_0c0dcac0(0xF, 0x3);
            FUN_0c0dca60(0x0, 0x0, 0x9, 0xE, 0x5);
            *(unsigned int *)0xC321190 = 0x0;
            FUN_0c031388();
            FUN_0c0dcac0(0xF, 0x0);
        }
    }
    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
        if ((int)(*(signed char *)0xC7F302C) >= (int)0x1) {
            if ((*(signed char *)0xC7F2F03) == 0) {
                *(volatile signed char *)0xC7F300B;
                return ((int (*)(void))(0xC02D6AC))();
            }
            return ((int (*)(void))(0xC02D6C4))();
        }
        return ((int (*)(void))(0xC02D6C4))();
    }
    return ((int (*)(void))(0xC02D6C4))();
}

float FUN_0c097c26(int a4)
{
    int stk[4];

    register int R2;
    register int R6;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = (signed char)(FUN_0c097fc4(v0_1)) == 0;
    v0_2 = (0xC0A2E26);
    v0_0 = (v0_1);
    if (v0_3) goto L_C097C44;
    FUN_0c0a2e26(v0_0, 0xB, 0x0, 0x0);
    v0_2 = (0x0);
    L_C097C58:;
    (((struct o7206_uchar *)(v0_0))->v) = v0_2;
    v0_1 = (0x7206);
    L_C097E1A:;
    return F0;
    L_C097C44:;
    v0_1 = (signed char)(FUN_0c098026(v0_0)) == 0;
    if (v0_1) goto L_C097C5E;
    FUN_0c0a2e26(v0_0, 0xB, 0x0, 0x0);
    v0_2 = (0x1);
    goto L_C097C58;
    L_C097C5E:;
    FUN_0c097eb6(v0_0);
    (((struct o7248_uint *)(v0_0))->v) = (unsigned short)((FUN_0c09ddfe(v0_0)) + (*(short *)0xC7F31E0));
    v0_3 = *(int *)((v0_0 + 0x30));
    v0_4 = (((struct o7248_short *)(v0_0))->v);
    v0_2 = (0x5B);
    v0_1 = ((unsigned short)(v0_4 - v0_3));
    if (((0x8000 & (unsigned short)(v0_4 - v0_3)) == 0)) goto L_C097C8C;
    v0_1 = ((v0_1 | 0xFFFF0000));
    L_C097C8C:;
    if (((int)v0_1 < (int)v0_2)) goto L_C097CB4;
    v0_2 = (((*(int *)((v0_0 + 0x30))) + 0x5B));
    L_C097CC0:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)v0_2;
    L_C097CCE:;
    if (((((((struct o2DC_int *)(v0_0))->v)) & 240) == 0)) goto L_C097D1E;
    v0_2 = ((unsigned short)v0_1);
    if (((int)(unsigned short)v0_1 < (int)0x4000)) goto L_C097CE4;
    if (((int)v0_2 <= (int)0xC000)) goto L_C097D26;
    L_C097CE4:;
    *(int *)((int)stk + 0) = (v0_0 + 0x20);
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + 4.0f * (FUN_0c0dfa50((*(int *)((v0_0 + 0x30)))));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_0 = ((((struct o28_float *)(v0_0))->v));
    w0_0 = w0_0 + 4.0f * (FUN_0c0df4d0((*(int *)((v0_0 + 0x30)))));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    L_C097D26:;
    FUN_0c09a910(v0_0);
    v0_1 = (0x20);
    w0_0 = (-950.0f);
    if ((!(-950.0f > ((((struct o20_float *)(v0_0))->v))))) goto L_C097D3A;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C097D3A:;
    v0_1 = (0x20);
    w0_1 = (950.0f);
    if ((!(((((struct o20_float *)(v0_0))->v)) > 950.0f))) goto L_C097D48;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C097D48:;
    v0_1 = (0x28);
    if ((!(w0_0 > ((((struct o28_float *)(v0_0))->v))))) goto L_C097D52;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C097D52:;
    if ((!((*(float *)((v0_0 + v0_1))) > w0_1))) goto L_C097D5A;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C097D5A:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_3 = *(signed char *)((v0_0 + 0x7237));
    v0_1 = (v0_3);
    v0_2 = (0xC08A7D4);
    if ((v0_3 == 0)) goto L_C097DA4;
    if ((v0_1 == 1)) goto L_C097DCE;
    if ((v0_1 == 2)) goto L_C097DEE;
    goto L_C097E1A;
    L_C097DEE:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 31)) goto L_C097DFC;
    FUN_0c08a7d4(v0_0, 0x1);
    L_C097DFC:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 36)) goto L_C097E0A;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097E0A:;
    v0_1 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) <= (int)0x31)) goto L_C097E1A;
    L_C097E14:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    v0_1 = (0xEC);
    goto L_C097E1A;
    L_C097DCE:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 27)) goto L_C097DDC;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097DDC:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 31)) goto L_C097E0A;
    FUN_0c08a7d4(v0_0, 0x1);
    goto L_C097E0A;
    L_C097DA4:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 65)) goto L_C097DB2;
    FUN_0c08a7d4(v0_0, 0x0);
    L_C097DB2:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 75)) goto L_C097DC0;
    FUN_0c08a7d4(v0_0, 0x1);
    L_C097DC0:;
    v0_1 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) > (int)0x63)) goto L_C097E14;
    goto L_C097E1A;
    L_C097D1E:;
    FUN_0c0a2e26(v0_0, 0x0, 0x0, 0x0);
    goto L_C097D26;
    L_C097CB4:;
    if (((int)v0_1 > (int)0xFFFFFFA5)) goto L_C097CC6;
    v0_2 = (((*(int *)((v0_0 + 0x30))) + 0xFFA5));
    goto L_C097CC0;
    L_C097CC6:;
    *(unsigned int *)((v0_0 + 0x30)) = (unsigned short)((*(int *)((v0_0 + 0x30))) + v0_1);
    goto L_C097CCE;
}


int FUN_0c042304(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    u0 = *(float *)((0xC3217D0 + ((*(signed char *)((a4 + 0x4))) << 2)));
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    FUN_0c0422b8(a4, 0xC3217F0);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((-(u0 * 0.0333333313f))));
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((-(u0 * 0.0666666627f))));
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((-(u0 * 0.0333333313f))));
                    (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0333333313f);
                    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0333333313f);
                    (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0333333313f);
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        (((struct o60_float *)(a4))->v) = 0.0f;
                        (((struct o64_float *)(a4))->v) = 0.0f;
                        (((struct o68_float *)(a4))->v) = 0.0f;
                        (((struct o50_float *)(a4))->v) = (u0 * 0.5f);
                        (((struct o54_float *)(a4))->v) = (-(u0 * 2.0f));
                        (((struct o58_float *)(a4))->v) = (u0 * 0.5f);
                        t2 = 0x58;
                    }
                    return t2;
                }
                return FUN_0c059330(a4, 0xC3217F0, a6, a7);
            }
            FUN_0c0422b8(a4, 0xC3217F0);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((u0 * 0.0192307681f)));
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((-(u0 * 0.0769230723f))));
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((u0 * 0.0192307681f)));
            if ((((((struct oEC_short *)(a4))->v)) == 52) && (t0 = (((struct oEE_short *)(a4))->v), t0 != 0)) {
                FUN_0c042222((a4 + 0x20), (*(signed char *)((a4 + 0x4))));
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 30) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
                (((struct o60_float *)(a4))->v) = 1.0f;
                (((struct o64_float *)(a4))->v) = 1.0f;
                (((struct o68_float *)(a4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = (u0 * 1.5f);
                (((struct o54_float *)(a4))->v) = (u0 * 0.0f);
                (((struct o58_float *)(a4))->v) = (u0 * 1.5f);
                t1 = 0x58;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        FUN_0c042256(a4, 0xC3217F0, 0x0);
        (((struct o50_float *)(a4))->v) = (u0 * 1.0f);
        (((struct o54_float *)(a4))->v) = (u0 * 0.5f);
        (((struct o58_float *)(a4))->v) = (u0 * 1.0f);
    }
    FUN_0c0422b8(a4, 0xC3217F0);
    u1 = ((((struct o54_float *)(a4))->v));
    u1 = u1 + 0.375f * u0;
    (((struct o54_float *)(a4))->v) = u1;
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 56) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o54_float *)(a4))->v) = (u0 * 2.0f);
        t1 = 0x54;
    }
    return t1;
}

int FUN_0c0aa078(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((((*(signed char *)0xC7F3051) + 0xC1525B4) + 0x0)))) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) - 1);
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
                }
                t0 = *(signed char *)0xC7F2EE6;
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 == 2) {
                    t0 = *(signed char *)0xC7F2EE7;
                    t2 = (unsigned char)t0;
                    if ((unsigned char)t0 == 3) {
                        *(unsigned char *)((a4 + 0x8)) = 0x63;
                        t2 = 0x63;
                    }
                    t1 = t2;
                }
                return t1;
            }
            
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x20);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        *(volatile int *)((a4 + 0x2E0));
        FUN_0c0e6fe8();
        (((struct o24_float *)(a4))->v) = 120.0f;
        *(unsigned int *)((a4 + 0x2C)) = 0x5B0;
        FUN_0c0aa464(a4);
        FUN_0c0aa266(a4);
    }
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
    if ((int)((((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v)) < (int)0xB4) {
        t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
        (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
    } else {
        t0 = (((struct oEE_short *)((*(int *)((a4 + 0x1C)))))->v);
        (((struct oEC_ushort *)(a4))->v) = (((int)((unsigned int)((int)((unsigned int)((-t0) + 0x168) + (unsigned int)0x0)) + ((((int)0x0 > (int)((-t0) + 0x168))) ? 1u : 0u))) >> 1);
    }
    (((struct o40_float *)(a4))->v) = (((*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)))) - ((((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v))) / (float)((((struct oEC_short *)(a4))->v)));
    u0 = *(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2)));
    u1 = (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v);
    u2 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u2 = (u1 - u0);
    }
    if (u2 > ((((struct o40_float *)(a4))->v))) {
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o40_float *)(a4))->v)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((0xC152944 + ((*(signed char *)((a4 + 0x4))) << 2))));
    }
    t0 = *(signed char *)0xC7F2EE6;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        t0 = *(signed char *)0xC7F2EE7;
        t2 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0x3) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x63;
            t2 = 0x63;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c03921c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        t6 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t6 + 0x1);
        t7 = (t6 + 0x1);
    } else {
        t6 = *(signed char *)((a4 + 0x9));
        if (t6 != 0) {
            t8 = t6;
            if (t6 != 1) {
            } else {
                t9 = 0xC0392F4;
                t10 = 0x0;
                t11 = (0x2E0 + a4);
                t12 = (0x2E0 + a4);
                t13 = (0x2E0 + a4);
                t14 = (0x2E0 + a4);
                for (;;) {
                    if ((int)t10 >= (int)0xA) {
                        break;
                    }
                    t15 = 0x2E0;
                    t14 = t10;
                    t14 = (t14 << 2);
                    t15 = (t15 + a4);
                    t15 = (t15 + t14);
                    t16 = (*(int *)((t15 + 0x0)));
                    t9 = 0x44;
                    u0 = (*(float *)((t16 + t9)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t16 + t9)) = u0;
                    t9 = 0x48;
                    t16 = 0x2E0;
                    t16 = (t16 + a4);
                    t16 = (t16 + t14);
                    t15 = (*(int *)((t16 + 0x0)));
                    t16 = 0x2E0;
                    u0 = (*(float *)((t15 + t9)));
                    t16 = (t16 + a4);
                    u0 = (u0 - 0.049999997f);
                    t16 = (t16 + t14);
                    *(float *)((t15 + t9)) = u0;
                    t9 = 0x4C;
                    t15 = (*(int *)((t16 + 0x0)));
                    t16 = 0x2E0;
                    u0 = (*(float *)((t15 + t9)));
                    t16 = (t16 + a4);
                    u0 = (u0 - 0.049999997f);
                    t16 = (t16 + t14);
                    *(float *)((t15 + t9)) = u0;
                    t9 = 0x44;
                    t15 = (*(int *)((t16 + 0x0)));
                    u0 = 0.0f;
                    u1 = (*(float *)((t15 + t9)));
                    if (!(u1 > u0)) {
                        t15 = 0x2E0;
                        t15 = (t15 + a4);
                        t15 = (t15 + t14);
                        t16 = (*(int *)((t15 + 0x0)));
                        *(float *)((t16 + t9)) = 0.0f;
                    }
                    t16 = 0x2E0;
                    t9 = 0x48;
                    u0 = 0.0f;
                    t16 = (t16 + a4);
                    t16 = (t16 + t14);
                    t15 = (*(int *)((t16 + 0x0)));
                    u1 = (*(float *)((t15 + t9)));
                    if (!(u1 > u0)) {
                        t15 = (*(int *)((t11 + 0x0)));
                        *(float *)((t15 + t9)) = 0.0f;
                    }
                    t16 = (*(int *)((t12 + 0x0)));
                    t9 = 0x4C;
                    u0 = 0.0f;
                    u1 = (*(float *)((t16 + t9)));
                    t10 = (t10 + 0x1);
                    if (!(u1 > u0)) {
                        t15 = (*(int *)((t13 + 0x0)));
                        *(float *)((t15 + t9)) = 0.0f;
                    }
                    t11 = (t11 + 0x4);
                    t12 = (t12 + 0x4);
                    t13 = (t13 + 0x4);
                }
                t10 = t9;
                t9 = 0x24;
                t11 = 0x20;
                t12 = 0x9;
                t13 = t14;
                for (;;) {
                    if ((int)t12 < (int)0x1) {
                        break;
                    }
                    t13 = 0x2E0;
                    t13 = (t13 + a4);
                    t10 = t13;
                    *(volatile int *)((t11 + t10));
                    *(volatile int *)((t9 + t10));
                    t10 = 0xC;
                    t10 = (((int (*)(int, int, int, int, float, float))(FUN_0c0e6fe8))(0x1, t9, t11, t12, 0.0f, 0.049999997f));
                    t9 = (t0 - 4);
                    t11 = (t1 - 4);
                    t12 = (t2 - 1);
                }
                t0 = *(signed char *)((a4 + 0x3));
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = 0xEC;
                if ((int)(short)(t0 + 0x1) >= (int)0x14) {
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                t8 = t1;
            }
            t0 = t8;
        } else {
            t1 = t6;
            t2 = 0x24;
            t6 = 0x20;
            t8 = 0x9;
            for (;;) {
                if ((int)t8 < (int)0x1) {
                    break;
                }
                t9 = 0x2E0;
                t9 = (t9 + a4);
                t1 = t9;
                *(volatile int *)((t6 + t1));
                *(volatile int *)((t2 + t1));
                t1 = 0xC;
                t1 = (((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x1, t2, t6, t8));
                t2 = (t3 - 4);
                t6 = (t4 - 4);
                t8 = (t5 - 1);
            }
            t1 = *(signed char *)((a4 + 0x3));
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xB));
            t2 = t1;
            if (t1 == 0) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t2 = 0xEC;
            }
            t0 = t2;
        }
        t7 = t0;
    }
    return t7;
}

int FUN_0c03be40(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_5 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_4 = *(int *)((v0_5 + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    v0_0 = (v0_5);
    if ((v0_4 != 0)) goto L_C03BE62;
    v0_7 = ((FUN_0c059330(v0_0, v0_1, v0_2, v0_3)));
    L_C03C01E:;
    return v0_7;
    L_C03BE62:;
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_7 = (v0_4);
    if ((v0_4 == 0)) goto L_C03BE70;
    if ((v0_7 == 1)) goto L_C03BE7C;
    v0_7 = ((FUN_0c059330(v0_0, v0_1, v0_2, v0_3)));
    goto L_C03C01E;
    L_C03BE7C:;
    FUN_0c03bdb2(v0_0);
    v0_4 = (0xA);
    if ((((((struct oEC_short *)(v0_0))->v)) != 20)) goto L_C03BE98;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C03BF2A:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_7 = (0xC03C014);
    v0_5 = ((0x2E0 + v0_0));
    v0_1 = (0x0);
    v0_2 = ((0x2E0 + v0_0));
    v0_3 = ((0x2E0 + v0_0));
    w0_0 = (0.049999997f);
    w0_1 = (0.0f);
    w0_2 = (2.0f);
    L_C03BF48:;
    v0_6 = ((v0_1 << 2));
    if (((*(signed char *)(((*(int *)((((0x2E0 + v0_0) + (v0_1 << 2)) + 0x0))) + 0x0))) == 0)) goto L_C03BFDC;
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o44_float *)(v0_7))->v) = (((((struct o44_float *)(v0_7))->v)) - w0_0);
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o48_float *)(v0_7))->v) = (((((struct o48_float *)(v0_7))->v)) - w0_0);
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o4C_float *)(v0_7))->v) = (((((struct o4C_float *)(v0_7))->v)) - w0_0);
    v0_7 = (0x44);
    if ((!(0.0f > ((((struct o44_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v))))) goto L_C03BFA6;
    *(float *)(((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0))) + v0_7)) = w0_1;
    L_C03BFA6:;
    v0_7 = (0x48);
    if ((!(0.0f > ((((struct o48_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v))))) goto L_C03BFC2;
    *(float *)(((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0))) + v0_7)) = w0_1;
    L_C03BFC2:;
    v0_7 = (0x4C);
    if ((!(0.0f > ((((struct o4C_float *)((*(int *)((v0_2 + 0x0)))))->v))))) goto L_C03BFD2;
    *(float *)(((*(int *)((v0_3 + 0x0))) + v0_7)) = w0_1;
    L_C03BFD2:;
    v0_6 = *(int *)((v0_5 + 0x0));
    (((struct o8_float *)(v0_6))->v) = (((((struct o8_float *)(v0_6))->v)) + w0_2);
    v0_7 = (0x8);
    L_C03BFDC:;
    v0_6 = (int)(v0_1 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x4));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x4));
    if (v0_6) goto L_C03BF48;
    goto L_C03C01E;
    L_C03BE98:;
    v0_7 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) >= (int)v0_4)) goto L_C03BF2A;
    *(unsigned char *)(((*(int *)(((((*(short *)((v0_0 + v0_7))) << 2) + (0x2E0 + v0_0)) + 0x0))) + 0x0)) = 0x1;
    v0_1 = *(int *)(((((*(short *)((v0_0 + v0_7))) << 2) + (0x2E0 + v0_0)) + 0x0));
    (((struct o24_float *)(v0_1))->v) = 0.099999994f;
    (((struct o20_float *)(v0_1))->v) = 0.099999994f;
    (((struct o1C_float *)(v0_1))->v) = 0.099999994f;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((((((struct oEC_short *)((*(int *)(((int)stk + 0)))))->v)) << 2) << 2) + 0xC1496FC))) * (short)0xB0)));
    *(volatile int *)((((((((struct oEC_short *)(v0_0))->v)) << 2) + (0x2E0 + v0_0)) + 0x0));
    FUN_0c0e6fe8();
    goto L_C03BF2A;
    L_C03BE70:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    goto L_C03BE7C;
}

int FUN_0c0f3ad4(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t24;
    register int t25;
    register int t27;
    register int t30;
    register int t32;
    register int t33;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t108;
    register int t109;
    int t37;
    int t43;
    register int t94;
    register int t95;

    if ((((((struct o4C_short *)(a5))->v)) != 0) && ((t1 = (((struct o4C_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = (((struct o54_short *)(a5))->v), (int)(unsigned short)t2 <= (int)0x3) && ((t3 = (((struct o44_int *)(a5))->v), t3 != 0) && ((t4 = (((struct o48_int *)(a5))->v), t4 != 0) && ((t5 = (((struct o54_short *)(a5))->v), t5 == 0) || (t6 = (((struct o50_int *)(a5))->v), t6 != 0))))))) {
        memset(a4, 0x0, 0x60);
        memset(a4, 0x20, 0x10);
        memset((a4 + 0x10), 0x20, 0x20);
        memset((a4 + 0x30), 0x0, 0x10);
        t11 = a5;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t15 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t12 = (t12 + 0x1);
                *(unsigned char *)((t13 + 0x0)) = t15;
                t13 = (t13 + 0x1);
                if ((int)t12 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t17 = (a5 + 0x12);
        t18 = 0x0;
        t19 = (a4 + 0x10);
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 0) {
                t21 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t18 = (t18 + 0x1);
                *(unsigned char *)((t19 + 0x0)) = t21;
                t19 = (t19 + 0x1);
                if ((int)t18 >= (int)0x20) {
                    break;
                }
                continue;
            }
            break;
        }
        t23 = 0x0;
        t24 = (a5 + 0x34);
        t25 = (a4 + 0x30);
        for (;;) {
            if ((*(signed char *)((t24 + 0x0))) != 0) {
                t27 = *(signed char *)((t24 + 0x0));
                t24 = (t24 + 0x1);
                t23 = (t23 + 0x1);
                *(unsigned char *)((t25 + 0x0)) = t27;
                t25 = (t25 + 0x1);
                if ((int)t23 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t30 = *(int *)(((((unsigned short)((((struct o4C_short *)(a5))->v)) & 0x3) << 2) + 0xC346BF4));
        t32 = *(int *)(((((unsigned short)((((struct o54_short *)(a5))->v)) & 0x3) << 2) + 0xC346C04));
        t33 = (((struct o5C_int *)(a5))->v);
        (((struct o42_ushort *)(a4))->v) = ((((struct o4E_short *)(a5))->v));
        (((struct o40_ushort *)(a4))->v) = ((((struct o4C_short *)(a5))->v));
        *(unsigned int *)(((int)stk + 0)) = 0x80;
        if ((((((struct o54_short *)(a5))->v)) != 0) && (t37 = (((struct o50_int *)(a5))->v), t37 != 0)) {
            (((struct o44_ushort *)(a4))->v) = ((((struct o54_short *)(a5))->v));
            *(unsigned int *)(((int)stk + 8)) = (t30 + 0x80);
        } else {
            (((struct o44_ushort *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        if ((((((struct o5C_int *)(a5))->v)) != 0) && (t43 = (((struct o58_int *)(a5))->v), t43 != 0)) {
            (((struct o48_uint *)(a4))->v) = ((((struct o5C_int *)(a5))->v));
            *(unsigned int *)(((int)stk + 4)) = ((t30 + t32) + 0x80);
            t94 = ((t30 + t32) + 0x80);
        } else {
            (((struct o48_uint *)(a4))->v) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t94 = (t30 + t32);
        }
        if (t30 != 0) {
            memcpy((a4 + 0x60), ((((struct o44_int *)(a5))->v)), 0x20);
            memcpy(((*(int *)(((int)stk + 0))) + a4), ((((struct o48_int *)(a5))->v)), t30);
        } else {
            t95 = t24;
        }
        if (t32 != 0) {
            memcpy(((*(int *)(((int)stk + 8))) + a4), ((((struct o50_int *)(a5))->v)), t32);
        } else {
        }
        if (((((struct o5C_int *)(a5))->v)) != 0) {
            memcpy(((*(int *)(((int)stk + 4))) + a4), ((((struct o58_int *)(a5))->v)), ((((struct o5C_int *)(a5))->v)));
        } else {
        }
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
        } else {
        }
        (((struct o46_ushort *)(a4))->v) = (buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80), t94, t95));
    } else {
        t108 = a4;
        t109 = a5;
    }
    return ((int (*)(int, int, int, int))(0xC0F3CBC))(t108, t109, a6, a7);
}

int FUN_0c10cc84(void)
{
    int stk[63];
    register int t1;
    register int t7;
    register int t15;
    register int t21;
    register int t27;

    *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x359;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC816FC4)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x20C;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x345;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC816FC4)->v), (t7 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x24;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x204;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 0) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 0) + 0x18)) = 0x3F;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 32) != 0) {
        (((struct o74_uint *)(((int)stk + 0)))->v) = 0x104;
    } else {
        (((struct o74_uint *)(((int)stk + 0)))->v) = 0x102;
    }
    (((struct o78_uint *)(((int)stk + 0)))->v) = 0x15;
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t15 = (((struct o20_int *)0xC816FC4)->v), (t15 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x6;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x1C)) = 0x3;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC816FC4)->v), (t21 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x16C;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x20)) = 0x319;
    }
    if (((((((struct o20_int *)0xC816FC4)->v)) & 0x1) != 1) && ((t27 = (((struct o20_int *)0xC816FC4)->v), (t27 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 0) + 0x24)) = 0x1F;
    } else {
        *(unsigned int *)((((int)stk + 0) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 0) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 0) + 0x2C)) = 0x0;
    if ((((((struct o20_int *)0xC816FC4)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
        }
    } else {
        if ((((((struct o20_int *)0xC816FC4)->v)) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 0) + 0x30)) = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 0) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 0)))->v) = 0x0;
    if (((((struct o0_int *)0xC816FC4)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 0)))->v) = 0x1F;
    }
    if ((((((struct o20_int *)0xC816FC4)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 0)))->v) = 0x1;
    }
    (((struct o48_uint *)(((int)stk + 0)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 0)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 0)))->v) = 0x0;
    return ((int (*)(int, int, int, int))(0xC10CE6A))(0x1, 0x0, 0x12, 0x1F);
}

int FUN_0c06b816(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06B630))(a4, a5, a6, a7);
    }
    return FUN_0c06b5fe(a4);
}
