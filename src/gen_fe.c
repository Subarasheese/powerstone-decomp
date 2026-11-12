/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c01d304(int);
int FUN_0c01d328(void);
int FUN_0c01d336(void);
int FUN_0c01d924(void);
int FUN_0c02d4a4(void);
int FUN_0c055562(void);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int FUN_0c058f4e(void);
int FUN_0c059330(int, int, int, int);
extern int FUN_0c05f952();
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c062242(int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0ccf38(int, int, int);
extern int FUN_0c0d4872();
int FUN_0c0d4886(void);
int FUN_0c0d48b2(void);
int FUN_0c0d48d6(void);
int FUN_0c0d48ea(int);
int FUN_0c0d4dee(void);
int FUN_0c0d5c7e(void);
int FUN_0c0d8348(void);
int FUN_0c0d87aa(int, int, int, int, int, int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e1550(int);
int FUN_0c0e6f24(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062d78(void);
int thunk_FUN_0c0a3180(void);
int FUN_0c0411b8(int a4);
int FUN_0c062f10(int a4, int a5, int a6, int a7);
int FUN_0c0d48fc(int a4, int a5, int a6, int a7);
int FUN_0c021238(int a4, int a5, int a6, int a7);
int FUN_0c0571a2(int a4, int a5, int a6, int a7);
int FUN_0c0ab626(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0411b8(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F0;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_5 = a4;
    v0_3 = (FUN_0c0555dc()) == 0;
    v0_1 = (0x0);
    v0_0 = (v0_5);
    v0_2 = (0x64);
    v0_4 = (0xC0DF940);
    w0_0 = (1.0f);
    w0_1 = (255.0f);
    w0_2 = (0.125f);
    if (v0_3) goto L_C0411EE;
    *(unsigned char *)((v0_0 + 0x8)) = 0x1;
    L_C0411EE:;
    v0_7 = (0xEC);
    v0_3 = ((0x308 + v0_0));
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C041200;
    *(unsigned short *)((v0_0 + v0_7)) = ((*(short *)((v0_0 + v0_7))) - 1);
    L_C041200:;
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_7 = (v0_4);
    if ((v0_4 == 0)) goto L_C041212;
    if ((v0_7 != 1)) goto L_C04120E;
    return FUN_0c059330(v0_0, R5, R6, R7);
    L_C04120E:;
    L_C041554:;
    return v0_7;
    L_C041212:;
    *(unsigned int *)(((int)stk + 0)) = 0x6;
    v0_4 = (v0_1);
    L_C041218:;
    v0_5 = (int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u));
    v0_8 = *(signed char *)(((v0_5 >> 1) + v0_3));
    v0_7 = (v0_8);
    v0_6 = ((v0_5 >> 1));
    v0_5 = ((*(int *)((((v0_4 << 2) + (0x2E0 + v0_0)) + 0x0))));
    R5 = ((*(int *)((((v0_4 << 2) + (0x2E0 + v0_0)) + 0x4))));
    if ((v0_8 == 0)) goto L_C041252;
    if ((v0_7 == 1)) goto L_C041268;
    if ((v0_7 == 2)) goto L_C041290;
    if ((v0_7 == 3)) goto L_C0412A4;
    if ((v0_7 == 4)) goto L_C0412F8;
    if ((v0_7 == 5)) goto L_C04131E;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) - 1);
    L_C041360:;
    v0_6 = (int)(v0_4 + 0x2) >= (int)0x8;
    v0_4 = ((v0_4 + 0x2));
    if (v0_6) goto L_C04136C;
    goto L_C041218;
    L_C04136C:;
    *(unsigned int *)(((int)stk + 4)) = 0x8;
    *(unsigned int *)(((int)stk + 12)) = ((0x2E0 + v0_0) + 0x20);
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    L_C04137A:;
    v0_6 = *(int *)(((int)stk + 12));
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (v0_6 + 0x4);
    v0_8 = *(signed char *)((v0_4 + (v0_3 + 0x8)));
    v0_7 = (v0_8);
    v0_4 = (v0_4);
    v0_6 = ((*(int *)((((v0_6 + 0x4) - 4) + 0x0))));
    if ((v0_8 == 0)) goto L_C0413BC;
    if ((v0_7 == 1)) goto L_C0413D2;
    if ((v0_7 == 2)) goto L_C0413E2;
    if ((v0_7 == 3)) goto L_C0413FC;
    if ((v0_7 == 4)) goto L_C041494;
    if ((v0_7 != 5)) goto L_C0413AA;
    (((struct o8_float *)(v0_6))->v) = (((((struct o8_float *)(v0_6))->v)) + ((((struct o2C_float *)(v0_6))->v)));
    (((struct o2C_float *)(v0_6))->v) = (((((struct o2C_float *)(v0_6))->v)) + ((((struct o28_float *)(v0_6))->v)));
    v0_5 = *(signed char *)((((v0_3 + 0xA) + v0_4) + 0x0));
    *(unsigned char *)((((v0_3 + 0xA) + v0_4) + 0x0)) = (v0_5 - 1);
    v0_7 = (0x2C);
    if (((signed char)(v0_5 - 1) != 0)) goto L_C041512;
    *(unsigned char *)(((v0_4 + (v0_3 + 0x8)) + 0x0)) = ((*(signed char *)(((v0_4 + (v0_3 + 0x8)) + 0x0))) + 0x1);
    *(unsigned char *)((v0_6 + 0x0)) = v0_1;
    L_C041512:;
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    v0_5 = (0xA);
    if (((int)(v0_4 + 0x1) >= (int)0xA)) goto L_C041528;
    goto L_C04137A;
    L_C041528:;
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C041554;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_7 = ((v0_1 + 0x1));
    goto L_C041554;
    L_C0413AA:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) - 1);
    goto L_C041512;
    L_C041494:;
    v0_5 = *(signed char *)((((v0_3 + 0xA) + v0_4) + 0x0));
    *(unsigned char *)((((v0_3 + 0xA) + v0_4) + 0x0)) = (v0_5 - 1);
    if (((signed char)(v0_5 - 1) != 0)) goto L_C041512;
    *(unsigned char *)((((v0_3 + 0x8) + v0_4) + 0x0)) = ((*(signed char *)((((v0_3 + 0x8) + v0_4) + 0x0))) + 0x1);
    *(unsigned char *)(((v0_4 + (v0_3 + 0xA)) + 0x0)) = v0_2;
    goto L_C041512;
    L_C0413FC:;
    (((struct o44_float *)(v0_6))->v) = (((((struct o44_float *)(v0_6))->v)) - w0_2);
    (((struct o48_float *)(v0_6))->v) = (((((struct o48_float *)(v0_6))->v)) - w0_2);
    w0_3 = (((struct o4C_float *)(v0_6))->v);
    (((struct o4C_float *)(v0_6))->v) = (w0_3 - w0_2);
    v0_7 = (0x4C);
    if (((w0_3 - w0_2) > 0.0f)) goto L_C041512;
    w0_5 = FUN_0c0df940();
    w0_3 = (2.14748365e+09f);
    w0_4 = ((w0_5 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_1))) goto L_C041430;
    w0_4 = ((w0_4 - (w0_3 + w0_3)));
    L_C041430:;
    v0_7 = FUN_0c0e6f24(v0_5);
    v0_8 = *(signed char *)((v0_0 + 0x3));
    FUN_0c06231c(v0_6, ((signed char)((((v0_8 << 1) + v0_8) << 2) << 1) + 0xC6002D0), (v0_7 + 0x1F));
    *(unsigned short *)((v0_6 + 0x2)) = 0x1F;
    *(unsigned char *)((((v0_3 + 0x8) + v0_4) + 0x0)) = ((*(signed char *)((((v0_3 + 0x8) + v0_4) + 0x0))) + 0x1);
    w0_5 = FUN_0c0df940();
    v0_4 = ((v0_4 + (v0_3 + 0xA)));
    w0_3 = (2.14748365e+09f);
    w0_4 = ((w0_5 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_1))) goto L_C041484;
    w0_4 = ((w0_4 - (w0_3 + w0_3)));
    L_C041484:;
    v0_5 = FUN_0c0e6f24(v0_5);
    *(unsigned char *)((v0_4 + 0x0)) = (v0_5 + 0x1);
    v0_7 = ((v0_5 + 0x1));
    goto L_C041512;
    L_C0413E2:;
    v0_7 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C0413EE;
    goto L_C041512;
    L_C0413EE:;
    *(unsigned char *)(((v0_4 + (v0_3 + 0x8)) + 0x0)) = ((*(signed char *)(((v0_4 + (v0_3 + 0x8)) + 0x0))) + 0x1);
    goto L_C041512;
    L_C0413D2:;
    w0_3 = (((struct o20_float *)(v0_6))->v);
    (((struct o20_float *)(v0_6))->v) = (w0_3 + w0_2);
    v0_7 = (0x20);
    if ((!(w0_0 > (w0_3 + w0_2)))) goto L_C0413EE;
    goto L_C041512;
    L_C0413BC:;
    v0_5 = *(signed char *)((((v0_3 + 0xA) + v0_4) + 0x0));
    *(unsigned char *)((((v0_3 + 0xA) + v0_4) + 0x0)) = (v0_5 - 1);
    if (((signed char)(v0_5 - 1) == 0)) goto L_C0413EE;
    goto L_C041512;
    L_C04131E:;
    (((struct o8_float *)(v0_5))->v) = (((((struct o8_float *)(v0_5))->v)) + ((((struct o2C_float *)(v0_5))->v)));
    (((struct o2C_float *)(v0_5))->v) = (((((struct o2C_float *)(v0_5))->v)) + ((((struct o28_float *)(v0_5))->v)));
    v0_7 = *(signed char *)((((v0_3 + 0x4) + v0_6) + 0x0));
    *(unsigned char *)((((v0_3 + 0x4) + v0_6) + 0x0)) = (v0_7 - 1);
    if (((signed char)(v0_7 - 1) != 0)) goto L_C041360;
    *(unsigned char *)(((v0_6 + v0_3) + 0x0)) = ((*(signed char *)(((v0_6 + v0_3) + 0x0))) + 0x1);
    *(unsigned char *)((v0_5 + 0x0)) = v0_1;
    goto L_C041360;
    L_C0412F8:;
    v0_7 = *(signed char *)((((v0_3 + 0x4) + v0_6) + 0x0));
    *(unsigned char *)((((v0_3 + 0x4) + v0_6) + 0x0)) = (v0_7 - 1);
    if (((signed char)(v0_7 - 1) != 0)) goto L_C041360;
    *(unsigned char *)(((v0_3 + v0_6) + 0x0)) = ((*(signed char *)(((v0_3 + v0_6) + 0x0))) + 0x1);
    *(unsigned char *)(((v0_6 + (v0_3 + 0x4)) + 0x0)) = v0_2;
    goto L_C041360;
    L_C0412A4:;
    (((struct o44_float *)(R5))->v) = (((((struct o44_float *)(R5))->v)) - w0_2);
    (((struct o48_float *)(R5))->v) = (((((struct o48_float *)(R5))->v)) - w0_2);
    w0_3 = (((struct o4C_float *)(R5))->v);
    (((struct o4C_float *)(R5))->v) = (w0_3 - w0_2);
    if (((w0_3 - w0_2) > 0.0f)) goto L_C041360;
    *(unsigned char *)((R5 + 0x0)) = v0_1;
    *(unsigned char *)(((v0_3 + v0_6) + 0x0)) = ((*(signed char *)(((v0_3 + v0_6) + 0x0))) + 0x1);
    w0_5 = FUN_0c0df940();
    v0_6 = ((v0_6 + (v0_3 + 0x4)));
    w0_3 = (2.14748365e+09f);
    w0_4 = ((w0_5 * w0_1));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_5 * w0_1))) goto L_C0412E8;
    w0_4 = ((w0_4 - (w0_3 + w0_3)));
    L_C0412E8:;
    *(unsigned char *)((v0_6 + 0x0)) = ((FUN_0c0e6f24(v0_5)) + 0x1);
    goto L_C041360;
    L_C041290:;
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C041360;
    L_C041298:;
    *(unsigned char *)(((v0_6 + v0_3) + 0x0)) = ((*(signed char *)(((v0_6 + v0_3) + 0x0))) + 0x1);
    goto L_C041360;
    L_C041268:;
    w0_3 = (((struct o20_float *)(v0_5))->v);
    (((struct o20_float *)(v0_5))->v) = (w0_3 + w0_2);
    if ((w0_0 > (w0_3 + w0_2))) goto L_C041360;
    goto L_C041298;
    L_C041252:;
    v0_7 = *(signed char *)((((v0_3 + 0x4) + v0_6) + 0x0));
    *(unsigned char *)((((v0_3 + 0x4) + v0_6) + 0x0)) = (v0_7 - 1);
    if (((signed char)(v0_7 - 1) == 0)) goto L_C041298;
    goto L_C041360;
}

int FUN_0c062f10(int a4, int a5, int a6, int a7)
{
    int stk[31];
    register int t6;
    register int t10;
    register int t26;
    register int t32;
    register int t8;
    register int t9;

    t10 = *(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    FUN_0c0e1550(0x1);
    t6 = *(signed char *)((0xC439DE8 + ((*(signed char *)((a4 + 0x3))) << 2)));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 != 2) {
                return t6;
            }
            return ((int (*)(int, int, int, int))(0xC0632C4))(0xC439DE8, a5, a6, a7);
        }
        for (;;) {
            if ((*(signed char *)((t10 + 0x0))) == -1) {
                break;
            }
            t9 = (FUN_0c0ccf38(a4, (*(signed char *)((t10 + 0x1))), (*(short *)((t10 + 0x2)))));
            *(unsigned int *)(((int)stk + 0)) = (FUN_0c0ccf38(a4, (*(signed char *)((t9 + 0x42))), (*(signed char *)((t9 + 0x43)))));
            t8 = (*(signed char *)((t10 + 0x0)));
            if (t8 == 0) {
                FUN_0c062242(t9, (((int)stk + 0) + 0x70));
                FUN_0c062242((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x64));
                FUN_0c06206e((((int)stk + 0) + 0x70), (((int)stk + 0) + 0x70), (((int)stk + 0) + 0x64));
                t8 = 0x1;
                (((struct o4_float *)(t10))->v) = (FUN_0c0620a4((((int)stk + 0) + 0x70)));
                *(unsigned char *)((t10 + 0x0)) = t8;
            }
            t10 = (t10 + 0x10);
            (((struct o41_uchar *)(t9))->v) = (0x1);
        }
        t26 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((0xC439DE8 + (t26 << 2))) = ((*(signed char *)((0xC439DE8 + (t26 << 2)))) + 0x1);
        *(volatile int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
        return ((int (*)(int, int, int, int))(0xC0632C4))(0xC439DE8, a5, a6, a7);
    }
    t32 = *(signed char *)((a4 + 0x3));
    *(unsigned char *)(((0xC439DE8 + (t32 << 2)) + 0x0)) = ((*(signed char *)(((0xC439DE8 + (t32 << 2)) + 0x0))) + 0x1);
    return (t32 << 2);
}

int FUN_0c0d48fc(int a4, int a5, int a6, int a7)
{
    int stk[9];
    int t1;
    register int t5;
    register int t6;
    register int t13;
    register int t24;
    register int t43;
    register int t44;
    register int t54;
    register int t63;
    register int t68;
    register int t90;
    register int t105;
    register int t110;
    register int t132;
    register int t150;
    register int t155;
    register int t174;
    register int t189;
    register int t190;
    register int t197;
    register int t202;
    register int t212;
    int t217;
    register int t220;
    int t230;
    register int t233;
    register int t253;
    register int t258;
    register int t264;
    int t269;
    register int t272;
    int t282;
    register int t285;
    register int t39;
    register int t40;
    int t69;
    int t70;
    register int t71;
    int t111;
    int t112;
    register int t113;
    int t156;
    int t157;
    register int t158;
    int t192;
    int t213;
    int t214;
    register int t215;
    int t219;
    int t232;
    int t248;
    int t265;
    int t266;
    register int t267;
    int t271;
    int t284;

    (((struct o4_uint *)0xC494AF8)->v) = ((((struct o0_int *)0xC494AF8)->v));
    t1 = FUN_0c0d4886();
    (((struct o0_uint *)0xC494AF8)->v) = t1;
    (((struct o8_uint *)0xC494AF8)->v) = ((~((((struct o4_int *)0xC494AF8)->v))) & t1);
    (((struct oC_uint *)0xC494AF8)->v) = ((~((((struct o0_int *)0xC494AF8)->v))) & ((((struct o4_int *)0xC494AF8)->v)));
    t5 = *(signed char *)0xC7F3071;
    t6 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t6 != 0) {
        if ((unsigned char)t6 != 1) {
            if ((unsigned char)t6 == 2) {
                if ((((((struct o0_int *)0xC494AF8)->v)) & (unsigned char)t5) != (unsigned char)t5) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    t39 = 0xC7F2EE1;
                    t40 = 0xC7F2EE0;
                } else {
                    if ((unsigned char)(*(signed char *)0xC7F2EE1) == 0) {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        FUN_0c0a3796(0x0, 0x4D);
                        t13 = 0x0;
                        if (((unsigned char)(*(signed char *)0xC7F2EE2) - 0x1) != 0) {
                            t13 = 0x1;
                        }
                        FUN_0c01d304(t13);
                        (((struct o0_uint *)0xC7F3028)->v) = 0x1;
                    }
                    t24 = FUN_0c01d336();
                    switch (t24) {
                    case 0:
                        break;
                    case 1:
                        (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) - 1);
                        (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                        thunk_FUN_0c0a3180();
                        FUN_0c0a3796(0x0, 0x4D);
                        break;
                    case 2:
                        FUN_0c0d48ea(0x1);
                        break;
                    }
                }
                t43 = ((int (*)(int, int))(FUN_0c05f952))(t39, t40);
                return FUN_0c02d4a4();
            }
            if ((unsigned char)t6 == 3) {
                t44 = *(signed char *)0xC7F2EE1;
                if ((unsigned char)t44 != 0) {
                    if ((unsigned char)t44 != 1) {
                        if ((unsigned char)t44 != 2) {
                            if ((((((struct o0_int *)0xC494AF8)->v)) & (unsigned char)t5) == (unsigned char)t5) {
                                (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) - 1);
                                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                                if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                                    t54 = 0x1;
                                    if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) == 3) {
                                    } else {
                                        t54 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                                    }
                                    (((struct o2_uchar *)0xC7F2EE0)->v) = t54;
                                }
                            }
                        } else {
                            t63 = (((struct o10_short *)0xC7F2EE0)->v);
                            (((struct o10_ushort *)0xC7F2EE0)->v) = (t63 + 0x1);
                            if ((int)(short)(t63 + 0x1) >= (int)0x1E) {
                                (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                            }
                            if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                                t68 = FUN_0c0555c4();
                                if ((t68 != 0) && (t69 = *(signed char *)0xC7F3071, t70 = (((struct o0_int *)0xC494AF8)->v), t71 = *(signed char *)0xC7F3071, ((unsigned char)t69 & t70) != (unsigned char)t71)) {
                                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                                }
                            }
                            if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                                t90 = 0x1;
                                if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                                    t90 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                                }
                                (((struct o2_uchar *)0xC7F2EE0)->v) = t90;
                            }
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        (((struct o10_ushort *)0xC7F2EE0)->v) = 0x0;
                        (((struct o12_ushort *)0xC7F2EE0)->v) = 0x0;
                        t105 = (((struct o10_short *)0xC7F2EE0)->v);
                        (((struct o10_ushort *)0xC7F2EE0)->v) = (t105 + 0x1);
                        if ((int)(short)(t105 + 0x1) >= (int)0x1E) {
                            (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        }
                        if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                            t110 = FUN_0c0555c4();
                            if ((t110 != 0) && (t111 = *(signed char *)0xC7F3071, t112 = (((struct o0_int *)0xC494AF8)->v), t113 = *(signed char *)0xC7F3071, ((unsigned char)t111 & t112) != (unsigned char)t113)) {
                                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                            }
                        }
                        if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                            t132 = 0x1;
                            if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                                t132 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                            }
                            (((struct o2_uchar *)0xC7F2EE0)->v) = t132;
                        }
                    }
                } else {
                    (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    FUN_0c0a3796(0x0, 0x4D);
                    FUN_0c01d328();
                    (((struct o0_uint *)0xC7F3028)->v) = 0x1;
                    (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    (((struct o10_ushort *)0xC7F2EE0)->v) = 0x0;
                    (((struct o12_ushort *)0xC7F2EE0)->v) = 0x0;
                    t150 = (((struct o10_short *)0xC7F2EE0)->v);
                    (((struct o10_ushort *)0xC7F2EE0)->v) = (t150 + 0x1);
                    if ((int)(short)(t150 + 0x1) >= (int)0x1E) {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    }
                    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                        t155 = FUN_0c0555c4();
                        if ((t155 != 0) && (t156 = *(signed char *)0xC7F3071, t157 = (((struct o0_int *)0xC494AF8)->v), t158 = *(signed char *)0xC7F3071, ((unsigned char)t156 & t157) != (unsigned char)t158)) {
                            (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                        }
                    }
                    if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                        t174 = 0x1;
                        if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                            t174 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                        }
                        (((struct o2_uchar *)0xC7F2EE0)->v) = t174;
                    }
                }
                FUN_0c01d924();
                t189 = ((int (*)(void))(FUN_0c05f952))();
                return FUN_0c02d4a4();
            }
            t190 = *(signed char *)0xC7F2EE1;
            if ((unsigned char)t190 != 0) {
                if ((unsigned char)t190 != 1) {
                    return ((int (*)(int, int, int, int))(0xC0D4C90))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0D4C6A))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0D4C62))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t192 = *(signed char *)0xC7F300E, t192 == 0)) {
            if ((*(signed char *)0xC7F301C) == 0) {
                FUN_0c0d5c7e();
            } else {
                t197 = ((int (*)(int, int, int))(FUN_0c0d4872))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8);
            }
            FUN_0c0d4dee();
            FUN_0c0d87aa(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            t202 = ((int (*)(void))(FUN_0c05f952))();
            FUN_0c055562();
        }
        (((struct o0_uint *)0xC7F3028)->v) = 0x0;
        if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
            t212 = FUN_0c0555c4();
            if ((t212 != 0) && (t213 = *(signed char *)0xC7F3071, t214 = (((struct o0_int *)0xC494AF8)->v), t215 = *(signed char *)0xC7F3071, ((unsigned char)t213 & t214) != (unsigned char)t215)) {
                (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                FUN_0c0d48d6();
            } else {
                t217 = FUN_0c0d48b2();
                if ((((unsigned char)(*(signed char *)0xC7F3071) & t217) != 0) && (t219 = *(signed char *)0xC7F2EE4, (unsigned char)t219 == 4)) {
                    t220 = FUN_0c0555c4();
                    if (t220 != 0) {
                        (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                        (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F2EE0)->v) = t217;
                        FUN_0c0d48d6();
                    }
                }
            }
        } else {
            t230 = FUN_0c0d48b2();
            if ((((unsigned char)(*(signed char *)0xC7F3071) & t230) != 0) && (t232 = *(signed char *)0xC7F2EE4, (unsigned char)t232 == 4)) {
                t233 = FUN_0c0555c4();
                if (t233 != 0) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE0)->v) = t230;
                    FUN_0c0d48d6();
                }
            }
        }
        return FUN_0c02d4a4();
    }
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
    (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)0xC7F3074)->v) = 0x0;
    (((struct o0_uchar *)0xC7F3074)->v) = 0x0;
    (((struct o29_uchar *)0xC7F3028)->v) = 0x0;
    FUN_0c058f4e();
    thunk_FUN_0c062d78();
    FUN_0c0d8348();
    *(unsigned int *)0xC33F6B8 = 0x0;
    if (((*(signed char *)0xC7F300B) == 0) && (t248 = *(signed char *)0xC7F300E, t248 == 0)) {
        if ((*(signed char *)0xC7F301C) == 0) {
            FUN_0c0d5c7e();
        } else {
            t253 = ((int (*)(void))(FUN_0c0d4872))();
        }
        FUN_0c0d4dee();
        FUN_0c0d87aa(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        t258 = ((int (*)(void))(FUN_0c05f952))();
        FUN_0c055562();
    }
    (((struct o0_uint *)0xC7F3028)->v) = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
        t264 = FUN_0c0555c4();
        if ((t264 != 0) && (t265 = *(signed char *)0xC7F3071, t266 = (((struct o0_int *)0xC494AF8)->v), t267 = *(signed char *)0xC7F3071, ((unsigned char)t265 & t266) != (unsigned char)t267)) {
            (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
            (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
            FUN_0c0d48d6();
        } else {
            t269 = FUN_0c0d48b2();
            if ((((unsigned char)(*(signed char *)0xC7F3071) & t269) != 0) && (t271 = *(signed char *)0xC7F2EE4, (unsigned char)t271 == 4)) {
                t272 = FUN_0c0555c4();
                if (t272 != 0) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE0)->v) = t269;
                    FUN_0c0d48d6();
                }
            }
        }
    } else {
        t282 = FUN_0c0d48b2();
        if ((((unsigned char)(*(signed char *)0xC7F3071) & t282) != 0) && (t284 = *(signed char *)0xC7F2EE4, (unsigned char)t284 == 4)) {
            t285 = FUN_0c0555c4();
            if (t285 != 0) {
                (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE0)->v) = t282;
                FUN_0c0d48d6();
            }
        }
    }
    return FUN_0c02d4a4();
}

int FUN_0c021238(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    w0_4 = *(float *)((v0_2 + 0x0));
    w0_5 = *(float *)((v0_3 + 0x0));
    v0_4 = ((((int)stk + 0) + 0x4));
    w0_3 = (0.0f);
    w0_3 = ((((((struct oC_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_3))->v))));
    w0_0 = (w0_5);
    w0_1 = (w0_4);
    w0_2 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C02125E;
    w0_4 = ((w0_0 - w0_1));
    L_C021260:;
    *(float *)((v0_4 + 0x0)) = (w0_3 - w0_4);
    w0_4 = (((struct o4_float *)(v0_2))->v);
    w0_5 = (((struct o4_float *)(v0_3))->v);
    v0_5 = (0x4);
    w0_3 = ((((((struct o10_float *)(v0_2))->v)) + ((((struct o10_float *)(v0_3))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_1 = (w0_4);
    w0_2 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C021282;
    w0_4 = ((w0_2 - w0_1));
    L_C021284:;
    *(float *)((v0_4 + v0_5)) = (w0_3 - w0_4);
    w0_4 = (((struct o8_float *)(v0_2))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    v0_5 = (0x8);
    w0_3 = ((((((struct o14_float *)(v0_2))->v)) + ((((struct o14_float *)(v0_3))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_1 = (w0_4);
    w0_2 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0212C4;
    w0_4 = ((w0_2 - w0_1));
    L_C0212C6:;
    *(float *)((v0_4 + v0_5)) = (w0_3 - w0_4);
    w0_4 = (0.0f);
    if (!((!(0.0f > (*(float *)((v0_4 + 0x0))))))) goto L_C0215A6;
    if ((!(w0_4 > (*(float *)((v0_4 + v0_5)))))) goto L_C0212E0;
    goto L_C0215A6;
    L_C0215A6:;
    return 0x0;
    L_C0212E0:;
    if ((!(0.0f > ((((struct o4_float *)(v0_4))->v))))) goto L_C0212EE;
    goto L_C0215A6;
    L_C0212EE:;
    v0_5 = *(signed char *)((v0_0 + 0x2D9));
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    if ((v0_5 != 2)) goto L_C0212FC;
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C0212FC:;
    if (((*(signed char *)((v0_1 + 0x2D9))) != 2)) goto L_C021308;
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C021308:;
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C02131A;
    if (((*(signed char *)((v0_1 + 0x2D9))) != 1)) goto L_C02131A;
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C02131A:;
    w0_5 = *(float *)((v0_4 + 0x0));
    w0_6 = (((struct o4_float *)(v0_4))->v);
    w0_3 = (w0_5);
    w0_4 = (w0_6);
    if ((w0_5 > w0_6)) goto L_C021342;
    if ((w0_3 > ((((struct o8_float *)(v0_4))->v)))) goto L_C021342;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) != 0)) goto L_C021410;
    if (!(((*(signed char *)((v0_1 + v0_5))) == 0))) goto L_C021432;
    goto L_C02144E;
    L_C021432:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C021446;
    w0_4 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    L_C021514:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + w0_4);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C021446:;
    w0_4 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    goto L_C021514;
    L_C02144E:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_2 + 0x0)))))) goto L_C021468;
    w0_3 = (2.0f);
    w0_4 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C021474:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + (w0_4 / w0_3));
    if ((!((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C02149C;
    w0_3 = (2.0f);
    w0_4 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C0214A8:;
    *(float *)((v0_1 + v0_5)) = ((*(float *)((v0_1 + v0_5))) + (w0_4 / w0_3));
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C02149C:;
    w0_3 = (2.0f);
    w0_4 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C0214A8;
    L_C021468:;
    w0_3 = (2.0f);
    w0_4 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021474;
    L_C021410:;
    v0_5 = (0x20);
    if ((!((*(float *)((v0_2 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C021424;
    w0_4 = ((-((((struct o4_float *)(((int)stk + 0)))->v))));
    L_C0214E4:;
    *(float *)((v0_1 + v0_5)) = ((*(float *)((v0_1 + v0_5))) + w0_4);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C021424:;
    w0_4 = (((((struct o4_float *)(((int)stk + 0)))->v)));
    goto L_C0214E4;
    L_C021342:;
    w0_5 = (((struct o8_float *)(v0_4))->v);
    w0_6 = (w0_5);
    if ((!(w0_3 > w0_5))) goto L_C021368;
    if ((!(w0_4 > w0_6))) goto L_C021368;
    v0_5 = (0x2D9);
    if (!(((*(signed char *)((v0_0 + 0x2D9))) == 0))) goto L_C0214C2;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C021364;
    goto L_C0214F2;
    L_C0214C2:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C0214DE;
    w0_4 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    goto L_C0214E4;
    L_C0214DE:;
    w0_4 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    goto L_C0214E4;
    L_C0214F2:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C02150E;
    w0_4 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    goto L_C021514;
    L_C02150E:;
    w0_4 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    goto L_C021514;
    L_C021364:;
    L_C02151C:;
    v0_5 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_2))->v))))) goto L_C02153E;
    w0_3 = (2.0f);
    w0_4 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C02154A:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) + (w0_4 / w0_3));
    if ((!(((((struct o8_float *)(v0_2))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C021572;
    w0_3 = (2.0f);
    w0_4 = ((-((((struct oC_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C02157E:;
    goto L_C0215A6;
    L_C021572:;
    w0_3 = (2.0f);
    w0_4 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C02157E;
    L_C02153E:;
    w0_3 = (2.0f);
    w0_4 = (((((struct oC_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C02154A;
    L_C021368:;
    if ((!(w0_4 > w0_3))) goto L_C021370;
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C021370:;
    if ((!(w0_4 > w0_6))) goto L_C021378;
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C021378:;
    w0_0 = (5.0f);
    if ((!(((((struct o4_float *)(v0_2))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C0213F2;
    if (((*(signed char *)((v0_1 + 0x2DA))) == 0)) goto L_C0213D6;
    if ((!(w0_6 > w0_3))) goto L_C0213B4;
    if ((!(w0_3 > w0_0))) goto L_C021398;
    *(float *)((v0_4 + 0x0)) = w0_0;
    L_C021398:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) != 0)) goto L_C021410;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02144E;
    goto L_C021432;
    L_C0213B4:;
    if ((!(w0_6 > w0_0))) goto L_C0213BC;
    (((struct o8_float *)(v0_4))->v) = w0_0;
    L_C0213BC:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0213C8;
    goto L_C0214C2;
    L_C0213C8:;
    if (((*(signed char *)((v0_1 + v0_5))) != 0)) goto L_C0213D2;
    goto L_C02151C;
    L_C0213D2:;
    goto L_C0214F2;
    L_C0213D6:;
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0213E8;
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_4);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C0213E8:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + w0_4);
    return ((int (*)(int, int, int, int, float, float, float))(0xC0215A2))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C0213F2:;
    if (((*(signed char *)((v0_0 + 0x2DA))) != 0)) goto L_C0213FE;
    return ((int (*)(int, int, int, int, float, float, float))(0xC021588))(v0_0, v0_1, v0_2, v0_3, w0_0, w0_1, w0_2);
    L_C0213FE:;
    if ((!(w0_6 > w0_3))) goto L_C0214B2;
    if ((!(w0_3 > w0_0))) goto L_C021408;
    *(float *)((v0_4 + 0x0)) = w0_0;
    L_C021408:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C02142C;
    goto L_C021410;
    L_C02142C:;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02144E;
    goto L_C021432;
    L_C0214B2:;
    if ((!(w0_6 > w0_0))) goto L_C0214BA;
    (((struct o8_float *)(v0_4))->v) = w0_0;
    L_C0214BA:;
    v0_5 = (0x2D9);
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0214EC;
    goto L_C0214C2;
    L_C0214EC:;
    if (((*(signed char *)((v0_1 + v0_5))) == 0)) goto L_C02151C;
    goto L_C0214F2;
    L_C0212C4:;
    w0_4 = (w0_0);
    goto L_C0212C6;
    L_C021282:;
    w0_4 = (w0_0);
    goto L_C021284;
    L_C02125E:;
    w0_4 = (w0_2);
    goto L_C021260;
}

int FUN_0c0571a2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            t1 = *(int *)0xC386830;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 == 4) {
                                t2 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                                t3 = 0xEC;
                                if ((short)(t2 - 1) == 0) {
                                    t2 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                    t3 = (t2 + 0x1);
                                }
                                t2 = t3;
                            } else {
                                t3 = t0;
                                if (t0 == 5) {
                                    if (t1 != 0) {
                                        t0 = (((struct o2E0_int *)(a4))->v);
                                        (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.119999997f);
                                    } else {
                                        t0 = (((struct o2E0_int *)(a4))->v);
                                        (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                                    }
                                    t0 = 0x40;
                                    if (!(((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                                        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                                        t4 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                                        t0 = (t4 + 0x1);
                                    }
                                    t3 = t0;
                                }
                                t2 = t3;
                            }
                            t0 = t2;
                        } else {
                            if (t1 != 0) {
                                t2 = (((struct o2E4_int *)(a4))->v);
                                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0599999987f);
                            } else {
                                t2 = (((struct o2E4_int *)(a4))->v);
                                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.049999997f);
                            }
                            t2 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                (((struct oEC_ushort *)(a4))->v) = ((-((*(signed char *)((a4 + 0x4))) << 2)) + 0x2C);
                                if ((*(int *)0xC386830) != 0) {
                                    (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                                }
                                t3 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                                t2 = (t3 + 0x1);
                            }
                            t0 = t2;
                        }
                        t2 = t0;
                    } else {
                        if (t1 != 0) {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            t1 = t0;
                            u0 = (((((struct o24_float *)(t0))->v)) + 0.0599999987f);
                        } else {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            t1 = t0;
                            u0 = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                        }
                        (((struct o24_float *)(t1))->v) = u0;
                        t0 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                            t0 = (t1 + 0x1);
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = (((*(signed char *)((a4 + 0x4))) << 2) + 0x1);
                    if ((*(int *)0xC386830) != 0) {
                        (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            (((struct oEC_ushort *)(a4))->v) = 0x1;
                        }
                    }
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xEC;
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = *(signed char *)0xC7F2F08;
    if (t0 == 0) {
        t1 = 0xC32DE74;
        t2 = (((((struct oF2_short *)(a4))->v)) << 2);
    } else {
        t1 = 0xC32DE9C;
        t2 = (((((struct oF2_short *)(a4))->v)) << 2);
    }
    t3 = *(int *)((t2 + t1));
    t2 = t1;
    t1 = 0xC7F2F08;
    t4 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x2) {
            break;
        }
        t2 = (*(signed char *)((a4 + 0x4)));
        t5 = t0;
        t6 = ((short)t2 * (short)0x1C);
        t2 = 0x18;
        t4 = 0xC06233A;
        t5 = (t5 << 2);
        t2 = (FUN_0c06233a((*(int *)((((0x2E0 + a4) + t5) + 0x0))), 0xC4CFA80, ((*(signed char *)(((t6 + t3) + t2))) + t0)));
        t1 = 0x2E0;
        t1 = (t1 + a4);
        t1 = (t1 + t5);
        t4 = (*(int *)((t1 + 0x0)));
        t1 = 0x1C;
        *(unsigned char *)((t4 + 0x0)) = 0x0;
        t2 = (*(signed char *)((a4 + 0x4)));
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t4 = 0xC0E6FE8;
        t1 = ((short)t2 * (short)t1);
        t1 = (t1 + t3);
        t2 = 0xC;
        t2 = (FUN_0c0e6fe8());
        t2 = (*(signed char *)((a4 + 0x4)));
        t1 = 0x1C;
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t1 = ((short)t2 * (short)t1);
        t1 = (t1 + t3);
        t1 = (t1 + 0xC);
        t2 = 0xC;
        t2 = (FUN_0c0e6fe8());
        t6 = t0 == 0;
        t0 = (t0 + 0x1);
        if (t6) {
            t4 = 0x2E0;
            t2 = 0x71F;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(unsigned short *)((t1 + 0x2)) = t2;
            t2 = 0x40;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x44;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x48;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x4C;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            *(float *)((t1 + t2)) = 1.0f;
        } else {
            t1 = 0x2E0;
            t2 = 0x11F;
            t1 = (t1 + a4);
            t1 = (t1 + t5);
            t4 = (*(int *)((t1 + 0x0)));
            *(unsigned short *)((t4 + 0x2)) = t2;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    t1 = *(int *)0xC386830;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t2 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                        t3 = 0xEC;
                        if ((short)(t2 - 1) == 0) {
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t3 = (t2 + 0x1);
                        }
                        t2 = t3;
                    } else {
                        t3 = t0;
                        if (t0 == 5) {
                            if (t1 != 0) {
                                t0 = (((struct o2E0_int *)(a4))->v);
                                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.119999997f);
                            } else {
                                t0 = (((struct o2E0_int *)(a4))->v);
                                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                            }
                            t0 = 0x40;
                            if (!(((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                                t4 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                                t0 = (t4 + 0x1);
                            }
                            t3 = t0;
                        }
                        t2 = t3;
                    }
                    t0 = t2;
                } else {
                    if (t1 != 0) {
                        t2 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0599999987f);
                    } else {
                        t2 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.049999997f);
                    }
                    t2 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = ((-((*(signed char *)((a4 + 0x4))) << 2)) + 0x2C);
                        if ((*(int *)0xC386830) != 0) {
                            (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                        }
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t2 = t0;
            } else {
                if (t1 != 0) {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    t1 = t0;
                    u0 = (((((struct o24_float *)(t0))->v)) + 0.0599999987f);
                } else {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    t1 = t0;
                    u0 = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                }
                (((struct o24_float *)(t1))->v) = u0;
                t0 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t0 = (t1 + 0x1);
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = (((*(signed char *)((a4 + 0x4))) << 2) + 0x1);
            if ((*(int *)0xC386830) != 0) {
                (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                }
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) != 0) {
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ab626(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x9));
            if (t1 != 0) {
                if (t1 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t1 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                    if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct o24_float *)(a4))->v) = 0.0f;
                    }
                    t1 = 0x24;
                }
                t2 = t1;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = -100.0f;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
                if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
                } else {
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct o24_float *)(a4))->v) = 0.0f;
                }
                t2 = 0x24;
            }
            return t2;
        }
        if (t0 == 2) {
            t1 = *(signed char *)((a4 + 0x9));
            if (t1 != 0) {
                if (t1 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    *(unsigned int *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x10)) = 0xFFFFEFA5;
                    t1 = 0xF0;
                } else {
                    if ((*(signed char *)((a4 + 0x4))) == 0) {
                        *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x1;
                        t2 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
                        t2 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.099999994f);
                        if (!(((((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                            (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                        }
                        if (!(((((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                            (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                        }
                    }
                    t2 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t2 - 1);
                    t3 = 0xEE;
                    if ((int)(short)(t2 - 1) >= 0) {
                    } else {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0x1E;
                if ((*(signed char *)((a4 + 0x4))) == 0) {
                    *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x1;
                    t1 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                    (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.099999994f);
                    t1 = *(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0));
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - 0.099999994f);
                    if (!(((((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                        (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                    }
                    if (!(((((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v)) > 1.0f)) {
                        (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 1.0f;
                    }
                }
                t1 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                t3 = 0xEE;
                if ((int)(short)(t1 - 1) >= 0) {
                } else {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t2 = t3;
            }
            return t2;
        }
        if (t0 == 3) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                    t0 = 0x0;
                } else {
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 10.0f);
                    t1 = 0x24;
                    if (-100.0f > ((((struct o24_float *)(a4))->v))) {
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = *(signed char *)0xC7F2EE7;
                t2 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x4) {
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE6) != 2) {
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x4)) = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oF0_short *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t1) + 0x0))), 0xC664A78, 0x44);
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x2)) = 0x1F;
        *(volatile int *)((((0x2E0 + a4) + t1) + 0x0));
        FUN_0c0e6fe8();
        t0 = (t0 + 0x1);
    }
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        *(unsigned char *)(((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0)) = 0x0;
        (((struct o1C_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
        (((struct o20_float *)((*(int *)(((((((((struct oF0_short *)(a4))->v)) - 1) << 2) + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            t0 = 0x0;
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
            if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o24_float *)(a4))->v) = 0.0f;
            }
            t0 = 0x24;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct o24_float *)(a4))->v) = -100.0f;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 10.0f);
        if (!(((((struct o24_float *)(a4))->v)) > 0.0f)) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o24_float *)(a4))->v) = 0.0f;
        }
        t1 = 0x24;
    }
    return t1;
}
