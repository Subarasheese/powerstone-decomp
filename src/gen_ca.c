/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c03d2fc(int, int, int);
int FUN_0c03d33e(int, int);
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c04bef2(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0529f0(void);
int FUN_0c059330(int, int, int);
int FUN_0c0597ce(void);
int FUN_0c05986c(int, int);
int FUN_0c059934(int, int);
int FUN_0c05a138(void);
int FUN_0c05f2d4(int, int);
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c0993e4(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a36b8(int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a37da(int, int, int);
int FUN_0c0a3824(int);
float FUN_0c0df340(float);
int FUN_0c0e6fe8(int, int, int, float);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c052b9e(void);
int FUN_0c03d3a4(int a4);
int FUN_0c06d140(int a4);
int kmiProcessVertex_13(int a4);
int FUN_0c08c864(int a4, int a5, int a6, int a7);
int FUN_0c053910(void);
int FUN_0c068466(int a4, int a5, int a6, int a7);

int FUN_0c052b9e(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = 0x0;
    for (;;) {
        FUN_0c0993e4(t2);
        t3 = ((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t3 + 0x1)) = 0x0;
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    FUN_0c05a138();
    if ((*(signed char *)0xC7F2F03) == 0) {
        t2 = 0xB;
        if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && ((t0 = *(signed char *)0xC7F3051, t0 == 1) && (t1 = *(signed char *)0xC7F2F10, t1 == 0))) {
        } else {
            t2 = (*(signed char *)0xC7F3051);
        }
        FUN_0c0a36b8(t2);
    }
    (((struct oA_uchar *)0xC7F304B)->v) = 0x0;
    t0 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
            (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F15) + 0x1);
        } else {
            (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F14) + 0x1);
        }
    } else {
        (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F15) + 0x1);
    }
    (((struct o0_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o5_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o9_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o8_uchar *)0xC7F304B)->v) = 0x0;
    (((struct oC_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o2C_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o2D_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o2_ushort *)0xC7F3192)->v) = 0x0;
    (((struct o2_uchar *)0xC7F304B)->v) = (*(int *)((((*(signed char *)0xC7F2F18) << 2) + 0xC14AC34)));
    (((struct o3_uchar *)0xC7F304B)->v) = 0x3C;
    (((struct o4_uchar *)0xC7F3192)->v) = 0x0;
    (((struct oA_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o9_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o8_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o7_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o6_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o35_uchar *)0xC7F304B)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o4F_uchar *)(((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
        t1 = ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0);
        t2 = (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x4)) = 0x0;
        *(unsigned char *)((t2 + 0x3)) = 0x0;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        *(unsigned char *)((t2 + 0x1)) = 0x0;
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t1 + 0x18)) = 0x0;
        *(unsigned short *)((t1 + 0x1A)) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        (((struct o46_uchar *)(t1))->v) = 0x0;
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    (((struct o28_uchar *)0xC7F304B)->v) = (*(signed char *)0xC7F3071);
    FUN_0c05f2d4(0x2, (*(signed char *)0xC7F3051));
    if ((*(signed char *)0xC7F2F03) != 0) {
        *(unsigned char *)0xC7F2E46 = 0x7;
        *(unsigned char *)0xC7F2EBE = 0x7;
    }
    t0 = *(signed char *)0xC7F3073;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
        } else {
            if ((*(signed char *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x4D))) != 0) {
                FUN_0c059934(((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0), ((unsigned char)t0 - 1));
            } else {
                if ((*(signed char *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) == 0) {
                    FUN_0c0597ce();
                } else {
                    FUN_0c05986c(((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0), ((unsigned char)t0 - 1));
                }
            }
        }
    }
    return FUN_0c0529f0();
}

int FUN_0c03d3a4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_4 = *(signed char *)((v0_3 + 0x8));
    v0_2 = (v0_4);
    v0_1 = (0xC3217C0);
    v0_0 = (v0_3);
    w0_0 = (2.0f);
    w0_1 = (1.0f);
    if ((v0_4 == 0)) goto L_C03D3D2;
    if ((v0_2 == 1)) goto L_C03D438;
    if ((v0_2 != 2)) goto L_C03D3CE;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C03D55C;
    if ((v0_2 == 1)) goto L_C03D590;
    L_C03D5E4:;
    return v0_2;
    L_C03D590:;
    (((struct o60_float *)(v0_0))->v) = (((((struct o60_float *)(v0_0))->v)) + -0.25f);
    (((struct o64_float *)(v0_0))->v) = (((((struct o64_float *)(v0_0))->v)) + -0.25f);
    (((struct o68_float *)(v0_0))->v) = (((((struct o68_float *)(v0_0))->v)) + -0.25f);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0xEC);
    if (((short)(v0_1 - 1) != 0)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    (((struct o64_float *)(v0_0))->v) = 0.0f;
    (((struct o68_float *)(v0_0))->v) = 0.0f;
    v0_2 = (0x68);
    goto L_C03D5E4;
    L_C03D55C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    FUN_0c03d2fc(v0_0, v0_1, 0x1);
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = 0.099999994f;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x6)) = 0x200;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o68_float *)(v0_0))->v) = w0_1;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C03D590;
    L_C03D3CE:;
    return FUN_0c059330(v0_0, R5, R6);
    L_C03D438:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    FUN_0c03d33e(v0_0, v0_1);
    if (((*(signed char *)((v0_0 + 0x4))) != 0)) goto L_C03D486;
    v0_1 = *(int *)((v0_0 + 0x1C));
    v0_2 = *(signed char *)((v0_1 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
    v0_3 = ((*(int *)(((0x72BC + v0_1) + 0x8))));
    L_C03D496:;
    v0_3 = ((v0_3 + 0x308));
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C03D4A8;
    if (!(((*(signed char *)((v0_3 + 0x0))) != 0))) goto L_C03D4A8;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C03D4F6;
    if ((v0_2 == 1)) goto L_C03D514;
    goto L_C03D5E4;
    L_C03D4A8:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = 0x0;
    v0_2 = (0x0);
    goto L_C03D5E4;
    L_C03D514:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + -0.099999994f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + -0.099999994f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + -0.099999994f);
    v0_2 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0x121)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    v0_2 = (0x58);
    goto L_C03D5E4;
    L_C03D4F6:;
    v0_2 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0x12B)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    v0_2 = (0x50);
    goto L_C03D5E4;
    L_C03D486:;
    FUN_0c0e6fe8((*(int *)((v0_0 + 0x1C))), R5, R6, F4);
    goto L_C03D496;
    L_C03D3D2:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x12C;
    if (((*(signed char *)((v0_0 + 0x4))) != 0)) goto L_C03D412;
    v0_2 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) - 16384);
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)((v0_2 + 0x30)));
    v0_3 = ((0x2E0 + v0_0));
    R5 = (0x0);
    R6 = (0x2);
    F4 = (10.0f);
    L_C03D402:;
    (((struct o8_float *)((*(int *)((v0_3 + 0x0)))))->v) = F4;
    v0_2 = (int)(R5 + 0x1) < (int)R6;
    v0_3 = ((v0_3 + 0x4));
    R5 = ((R5 + 0x1));
    if (v0_2) goto L_C03D402;
    L_C03D420:;
    FUN_0c03d2fc(v0_0, v0_1, 0x0);
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o54_float *)(v0_0))->v) = 0.099999994f;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    goto L_C03D438;
    L_C03D412:;
    v0_2 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x4000);
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)((v0_2 + 0x30)));
    v0_3 = (v0_2);
    goto L_C03D420;
}

int FUN_0c06d140(int a4)
{
    int stk[16];
    register float u9;
    register float u10;
    register float u12;
    register float t13;
    register float u15;
    register float u21;
    register float u26;
    register int t33;
    register int t51;
    register int t79;
    register int t87;
    register int t88;
    register int t121;
    register int t129;
    register int t130;
    register int t36;
    register int t37;
    register int t131;
    register int t65;
    register int t66;
    register int t107;
    register int t108;

    FUN_0c09a910(a4);
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    *(float *)(((int)stk + 28)) = (((((struct o20_float *)(a4))->v)) - ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)));
    *(float *)(((int)stk + 36)) = (((((struct o28_float *)(a4))->v)) - ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)));
    *(float *)(((int)stk + 32)) = 0.0f;
    u9 = *(float *)(((int)stk + 28));
    *(float *)(((int)stk + 20)) = u9;
    u10 = *(float *)(((int)stk + 36));
    *(float *)(((int)stk + 16)) = u10;
    u12 = (u10 * u10);
    u12 = u12 + u9 * (*(float *)(((int)stk + 20)));
    t13 = FUN_0c0df340(u12);
    u15 = t13;
    if (t13 == 0.0f) {
        u15 = 9.99999997e-07f;
    }
    u21 = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
    u21 = u21 + 80.0f * (((*(float *)(((int)stk + 28))) / u15));
    *(float *)(((int)stk + 28)) = u21;
    u26 = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
    u26 = u26 + 80.0f * (((*(float *)(((int)stk + 36))) / u15));
    *(float *)(((int)stk + 36)) = u26;
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct oC_float *)(((int)stk + 16)))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o14_float *)(((int)stk + 16)))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    t33 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t33 + 0x1);
    if ((short)(t33 + 0x1) == 34) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EECC;
            *(int *)((int)stk + 8) = 0xC14EEC0;
            t36 = 0xC14EECC;
            t37 = 0xC14EEC0;
        } else {
            *(int *)((int)stk + 12) = 0xC14EEE4;
            *(int *)((int)stk + 8) = 0xC14EED8;
            t36 = 0xC14EEE4;
            t37 = 0xC14EED8;
        }
        *(int *)((int)stk + 4) = 0x42;
        *(int *)((int)stk + 0) = 0x64;
        FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x64, 0x42, t37, t36);
    }
    t51 = FUN_0c09e7b8(a4);
    if ((signed char)t51 == 0) {
        t131 = 0x3C;
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t131 = 0x24;
            if (((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) > ((((struct o24_float *)(a4))->v))) {
                FUN_0c09a808(a4, 0x4, 0x4);
                if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                    *(int *)((int)stk + 12) = 0xC14EECC;
                    *(int *)((int)stk + 8) = 0xC14EEC0;
                    t65 = 0xC14EECC;
                    t66 = 0xC14EEC0;
                } else {
                    *(int *)((int)stk + 12) = 0xC14EEE4;
                    *(int *)((int)stk + 8) = 0xC14EED8;
                    t65 = 0xC14EEE4;
                    t66 = 0xC14EED8;
                }
                *(int *)((int)stk + 4) = 0x42;
                *(int *)((int)stk + 0) = 0x14;
                FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x42, t66, t65);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0xA);
                FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xA);
                FUN_0c08eba8(a4, 0x31);
                FUN_0c08deec(a4, 0x31);
                t79 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t79 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                FUN_0c04bef2((((int)stk + 16) + 0xC), (a4 + 0x2C), (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x5, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                FUN_0c09a808((*(int *)((a4 + 0x1C))), 0x2, 0x83);
                t87 = *(int *)((a4 + 0x1C));
                (((struct o71A9_uchar *)(t87))->v) = 0x1;
                (((struct o71A8_uchar *)(t87))->v) = 0x1;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = -1.0f;
                t88 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t88 + 0x1);
                t131 = (t88 + 0x1);
            }
        }
    } else {
        FUN_0c09a808(a4, 0x4, 0x4);
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EECC;
            *(int *)((int)stk + 8) = 0xC14EEC0;
            t107 = 0xC14EECC;
            t108 = 0xC14EEC0;
        } else {
            *(int *)((int)stk + 12) = 0xC14EEE4;
            *(int *)((int)stk + 8) = 0xC14EED8;
            t107 = 0xC14EEE4;
            t108 = 0xC14EED8;
        }
        *(int *)((int)stk + 4) = 0x42;
        *(int *)((int)stk + 0) = 0x14;
        FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x42, t108, t107);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0xA);
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xA);
        FUN_0c08eba8(a4, 0x31);
        FUN_0c08deec(a4, 0x31);
        t121 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t121 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
        FUN_0c04bef2((((int)stk + 16) + 0xC), (a4 + 0x2C), (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), 0x5, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        FUN_0c09a808((*(int *)((a4 + 0x1C))), 0x2, 0x83);
        t129 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t129))->v) = 0x1;
        (((struct o71A8_uchar *)(t129))->v) = 0x1;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        t130 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t130 + 0x1);
        t131 = (t130 + 0x1);
    }
    return t131;
}

int kmiProcessVertex_13(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register float u18;
    register float u20;
    register int t21;
    register int t28;
    register int t32;
    register float u34;
    register float u36;
    register int t37;
    register int t44;
    register int t48;
    register float u50;
    register float u52;
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
    u18 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t16 << 2) + 0xC817064)) = ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f));
    u20 = (((struct o1C_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)(u20 * 255.0f) << 16) << 8) | ((int)(u20 * 255.0f) << 16)) | ((int)(u20 * 255.0f) << 8)) | (int)(u20 * 255.0f)));
    *(unsigned int *)(((t21 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    u34 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    *(unsigned int *)(((t32 << 2) + 0xC817064)) = ((((((int)(u34 * 255.0f) << 16) << 8) | ((int)(u34 * 255.0f) << 16)) | ((int)(u34 * 255.0f) << 8)) | (int)(u34 * 255.0f));
    u36 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u36 * 255.0f) << 16)) | ((int)(u36 * 255.0f) << 8)) | (int)(u36 * 255.0f)));
    *(unsigned int *)(((t37 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    u50 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    *(unsigned int *)(((t48 << 2) + 0xC817064)) = ((((((int)(u50 * 255.0f) << 16) << 8) | ((int)(u50 * 255.0f) << 16)) | ((int)(u50 * 255.0f) << 8)) | (int)(u50 * 255.0f));
    u52 = (((struct o1C_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), ((((((int)(u52 * 255.0f) << 16) << 8) | ((int)(u52 * 255.0f) << 16)) | ((int)(u52 * 255.0f) << 8)) | (int)(u52 * 255.0f)))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c08c864(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x72B0));
    if (t0 == 1) {
        return t0;
    }
    FUN_0c0a3824(a4);
    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 0x100) && (((t1 << 8) + (unsigned char)t0) != 0x101)) {
        if (((t1 << 8) + (unsigned char)t0) != 0x102) {
            if (((t1 << 8) + (unsigned char)t0) != 0x103) {
                if (((t1 << 8) + (unsigned char)t0) != 0x107) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x108) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x109) {
                            if (((t1 << 8) + (unsigned char)t0) != 0x10B) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x10C) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x10D) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x10E) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x10F) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x110) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x111) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x401) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x402) {
                                                                if (((t1 << 8) + (unsigned char)t0) != 0x403) {
                                                                    if (((t1 << 8) + (unsigned char)t0) != 0x404) {
                                                                        if (((t1 << 8) + (unsigned char)t0) != 0x405) {
                                                                        } else {
                                                                            FUN_0c0a37da(a4, 0xF, 0xB);
                                                                            FUN_0c0a37da(a4, 0x64, 0xC);
                                                                        }
                                                                    } else {
                                                                        FUN_0c0a37da(a4, 0x23, 0xB);
                                                                        FUN_0c0a37da(a4, 0x3E, 0xB);
                                                                        FUN_0c0a37da(a4, 0x5E, 0xC);
                                                                    }
                                                                } else {
                                                                    FUN_0c0a37da(a4, 0x14, 0xA);
                                                                }
                                                            } else {
                                                                FUN_0c0a37da(a4, 0x14, 0xA);
                                                            }
                                                        } else {
                                                            FUN_0c0a37da(a4, 0x36, 0xB);
                                                            FUN_0c0a37da(a4, 0x72, 0xB);
                                                        }
                                                    } else {
                                                        FUN_0c0a37da(a4, 0x9, 0xC);
                                                    }
                                                } else {
                                                    FUN_0c0a37da(a4, 0x2, 0xC);
                                                }
                                            } else {
                                                FUN_0c0a37da(a4, 0x9, 0xB);
                                            }
                                        } else {
                                            FUN_0c0a37da(a4, 0x9, 0xB);
                                        }
                                    } else {
                                        FUN_0c0a37da(a4, 0x0, 0xB);
                                    }
                                } else {
                                    FUN_0c0a37da(a4, 0x0, 0xB);
                                }
                            } else {
                                FUN_0c0a37da(a4, 0x0, 0xB);
                            }
                        } else {
                            FUN_0c0a37da(a4, 0x0, 0xB);
                        }
                    } else {
                        FUN_0c0a37da(a4, 0x0, 0xB);
                    }
                } else {
                    FUN_0c0a37da(a4, 0x0, 0xB);
                }
            } else {
                FUN_0c0a37da(a4, 0x10, 0xC);
            }
        } else {
            FUN_0c0a37da(a4, 0x17, 0xC);
        }
    } else {
        FUN_0c0a37da(a4, 0x7, 0xB);
    }
    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 0x100) && (((t1 << 8) + (unsigned char)t0) != 0x101)) {
        if (((t1 << 8) + (unsigned char)t0) != 0x108) {
            if (((t1 << 8) + (unsigned char)t0) != 0x109) {
                if (((t1 << 8) + (unsigned char)t0) != 0x10B) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x10C) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x10D) {
                            if ((((t1 << 8) + (unsigned char)t0) != 0x10E) && (((t1 << 8) + (unsigned char)t0) != 0x10F)) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x160) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x163) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x166) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x400) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x401) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x402) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x403) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x404) {
                                                                if (((t1 << 8) + (unsigned char)t0) != 0x405) {
                                                                    return ((t1 << 8) + (unsigned char)t0);
                                                                }
                                                                return ((int (*)(void))(0xC08CAC0))();
                                                            }
                                                            return ((int (*)(void))(0xC08CADA))();
                                                        }
                                                        return ((int (*)(void))(0xC08CAD4))();
                                                    }
                                                    return ((int (*)(void))(0xC08CACE))();
                                                }
                                                return ((int (*)(void))(0xC08CAB2))();
                                            }
                                            return ((int (*)(void))(0xC08CAAC))();
                                        }
                                        return ((int (*)(void))(0xC08CA9E))();
                                    }
                                    return ((int (*)(void))(0xC08CA98))();
                                }
                                return ((int (*)(void))(0xC08CA92))();
                            }
                            return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x4, a7);
                        }
                        return ((int (*)(void))(0xC08CA8C))();
                    }
                    return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x4, a7);
}

int FUN_0c053910(void)
{
    int t0;
    int t1;
    register int t2;

    if (((int)(*(short *)0xC7EB298) < 0) && (t0 = *(short *)0xC7F2568, (int)t0 < 0)) {
        *(unsigned char *)((((*(signed char *)0xC7F2E3F) + 0xC7F2E40) + 0x0)) = 0x50;
        *(unsigned char *)((((*(signed char *)0xC7F2EB7) + 0xC7F2EB8) + 0x0)) = 0x50;
        *(unsigned char *)0xC7F2E3F = ((*(signed char *)0xC7F2E3F) + 0x1);
        *(unsigned char *)0xC7F2EB7 = ((*(signed char *)0xC7F2EB7) + 0x1);
        (((struct o4_uchar *)0xC7F304F)->v) = 0x13;
        (((struct o0_uchar *)0xC7F304F)->v) = 0x0;
        return ((int (*)(int, int, int, int))(0xC053B54))(0xC7F2E68, 0xC7F2DF0, 0xC7F2DF0, 0xC7F302C);
    }
    if (((int)(*(short *)0xC7EB298) >= 0) && (t1 = *(short *)0xC7F2568, (int)t1 >= 0)) {
        if ((*(short *)0xC7EB298) == (*(short *)0xC7F2568)) {
            *(unsigned char *)((((*(signed char *)0xC7F2E3F) + 0xC7F2E40) + 0x0)) = 0x50;
            *(unsigned char *)((((*(signed char *)0xC7F2EB7) + 0xC7F2EB8) + 0x0)) = 0x50;
            *(unsigned char *)0xC7F2E3F = ((*(signed char *)0xC7F2E3F) + 0x1);
            *(unsigned char *)0xC7F2EB7 = ((*(signed char *)0xC7F2EB7) + 0x1);
            (((struct o0_uchar *)0xC7F304F)->v) = 0x0;
            *(unsigned char *)0xC7E41CA = 0x7F;
            *(unsigned char *)0xC7EB49A = 0x7F;
            (((struct o4_uchar *)0xC7F304F)->v) = 0x23;
            return ((int (*)(int, int, int, int))(0xC053B54))(0xC7F2E68, 0xC7EB394, 0xC7F2DF0, 0xC7F302C);
        }
        t0 = 0x1;
        if ((int)(*(short *)0xC7EB298) > (int)(*(short *)0xC7F2568)) {
            t0 = 0x0;
        }
        if (((((struct o71D4_short *)((0xC7E40C4 + (unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0))))->v)) == 0xF0) {
            *(unsigned char *)((((*(signed char *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x4F))) + (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50)) + 0x0)) = 0x40;
            return ((int (*)(int, int, int, int))(0xC053B30))(((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0), 0xC7E40C4, 0xC7F2DF0, 0xC7F302C);
        }
        *(volatile signed char *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x4F));
        return ((int (*)(int, int, int, int))(0xC053B2E))(((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0), 0xC7E40C4, 0xC7F2DF0, 0xC7F302C);
    }
    t0 = 0x1;
    if ((int)(*(short *)0xC7EB298) > (int)(*(short *)0xC7F2568)) {
        t0 = 0x0;
    }
    (((struct o4_uchar *)0xC7F304F)->v) = (t0 + 0x1);
    if (((((struct o71D4_short *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v)) == 0xF0) {
        *(unsigned char *)((((*(signed char *)(((0x4F + ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)) + 0x0))) + (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50)) + 0x0)) = 0x40;
    } else {
        t1 = *(signed char *)((((((struct oF8_int *)(((unsigned short)((unsigned short)(0x1 - (signed char)t0) * (unsigned short)0x72D0) + 0xC7E40C4)))->v)) + 0x4));
        if (((unsigned char)t1 != 4) && ((unsigned char)t1 != 3)) {
            t1 = ((*(signed char *)(((0x4F + ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)) + 0x0))) + (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50));
            t2 = 0x10;
        } else {
            t1 = ((*(signed char *)(((0x4F + ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)) + 0x0))) + (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50));
            t2 = 0x30;
        }
        *(unsigned char *)((t1 + 0x0)) = t2;
    }
    (((struct o4F_uchar *)(((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = ((*(signed char *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x4F))) + 0x1);
    (((struct o0_uchar *)0xC7F304F)->v) = t0;
    (((struct o106_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x7F;
    return ((int (*)(int, int, int, int))(0xC053B54))(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), 0xC7E40C4, 0xC7F2DF0, 0xC7F302C);
}

int FUN_0c068466(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC068304))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC068284))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC068216))(a4, a5, a6, a7);
}
