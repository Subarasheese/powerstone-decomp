/* Straight-line functions with calls and guards (batch gen_dg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0210f4(int, int, int);
int FUN_0c022952(int, int, int, int);
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c02d844(void);
int FUN_0c042d68(int, int, float, float);
int FUN_0c04cdf2(void);
int FUN_0c04fed8(int, float);
int FUN_0c050180(int);
int FUN_0c0555c4(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c06eeb4(int);
int FUN_0c06efec(int);
int FUN_0c06f036(int);
int FUN_0c096484(int);
int FUN_0c09657c(int);
int FUN_0c096750(int);
int FUN_0c0967a0(int);
int FUN_0c09ddfe(int);
int FUN_0c09e768(int);
int FUN_0c09e7a6(int);
int FUN_0c0a00e4(int);
int FUN_0c0a022e(int, float);
int FUN_0c0a1e0a(int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a3ebc(int, int, int);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(int);
int FUN_0c0e6fe8(int, int, int, int);
int FUN_0c0ead50(int, int, int, int);
int FUN_0c0eae20(int, int);
int FUN_0c0eaef0(int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int FUN_0c0968a0(int a4);
int kmiProcessVertex_02(int a4);
int FUN_0c039548(int a4, int a5, int a6, int a7);
float FUN_0c020a80(int a4, float f4);
float FUN_0c052150(int a4, float f4);
int FUN_0c01371a(int a4, int a5, int a6);
int FUN_0c04fc9e(int a4);
int FUN_0c0b271c(int a4, int a5, int a6, int a7);
int FUN_0c06f058(int a4);
int FUN_0c08e704(int a4, int a5, int a6, int a7);
int FUN_0c048314(int a4, int a5);
int FUN_0c049d14(int a4, int a5, int a6, int a7);
int FUN_0c0e41bc(int a4, int a5, int a6, int a7);

int FUN_0c0968a0(int a4)
{
    int stk[4];
    register int t0;
    register float u23;
    register float u27;
    register int t29;
    register int t33;
    register int t35;
    register int t45;
    register int t51;
    register int t47;
    register int t53;
    register int t63;
    register int t69;
    register int t65;

    t0 = FUN_0c09e7a6(a4);
    if (t0 != 0) {
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            (((struct o7248_uint *)(a4))->v) = ((FUN_0c09ddfe(a4)) + (*(int *)0xC7F31E0));
        } else {
            if ((*(signed char *)((a4 + 0x71EE))) != 0) {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0x4000);
            } else {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0xC000);
            }
        }
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) & 0xFFFF);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u23 = ((((struct o20_float *)(a4))->v));
        u23 = u23 + 50.0f * (FUN_0c0df4d0(((-((((struct o7248_int *)(a4))->v))) + 0x5000)));
        (((struct o20_float *)(a4))->v) = u23;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u27 = ((((struct o28_float *)(a4))->v));
        u27 = u27 + 50.0f * (FUN_0c0dfa50(((-((((struct o7248_int *)(a4))->v))) + 0x14000)));
        (((struct o28_float *)(a4))->v) = u27;
        return (FUN_0c0a2e26(a4, 0x5, 0x0, 0x0));
    }
    t29 = FUN_0c09e768(a4);
    if ((signed char)t29 != 0) {
        return (FUN_0c0a2e26(a4, 0xA, 0x7, 0x0));
    }
    if ((((((struct o2E4_int *)(a4))->v)) & 192) != 0) {
        t33 = FUN_0c0a00e4(a4);
        if ((signed char)t33 != 0) {
            FUN_0c0a2e26(a4, 0x27, 0x0, 0x0);
            return FUN_0c0967a0(a4);
        }
        t35 = *(signed char *)((a4 + 0xA));
        switch (t35) {
        case 0:
            FUN_0c096484(a4);
            break;
        case 1:
            FUN_0c09657c(a4);
            break;
        case 2:
            FUN_0c096750(a4);
            break;
        }
        t45 = *(signed char *)((a4 + 0x71BA));
        t51 = t45;
        if (t45 == 34) {
            t47 = FUN_0c0a022e(a4, (*(float *)0xC096AE4));
            t51 = (signed char)t47;
            if ((signed char)t47 != 0) {
                t51 = (FUN_0c0a2e26(a4, 0xE, 0x0, 0x0));
            }
        }
        return t51;
    }
    t53 = *(signed char *)((a4 + 0xA));
    switch (t53) {
    case 0:
        FUN_0c096484(a4);
        break;
    case 1:
        FUN_0c09657c(a4);
        break;
    case 2:
        FUN_0c096750(a4);
        break;
    }
    t63 = *(signed char *)((a4 + 0x71BA));
    t69 = t63;
    if (t63 == 34) {
        t65 = FUN_0c0a022e(a4, (*(float *)0xC096AE4));
        t69 = (signed char)t65;
        if ((signed char)t65 != 0) {
            t69 = (FUN_0c0a2e26(a4, 0xE, 0x0, 0x0));
        }
    }
    return t69;
}

int kmiProcessVertex_02(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u15;
    register float u23;
    register float u31;
    register int t32;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC81715C)->v));
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    u14 = *(float *)0xC10EB90;
    u15 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    (((struct o18_uint *)0xC817064)->v) = ((((((int)(u15 * u14) << 16) << 8) | ((int)(u15 * u14) << 16)) | ((int)(u15 * u14) << 8)) | (int)(u15 * u14));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    u23 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    (((struct o28_uint *)0xC817064)->v) = ((((((int)(u23 * u14) << 16) << 8) | ((int)(u23 * u14) << 16)) | ((int)(u23 * u14) << 8)) | (int)(u23 * u14));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    u31 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o38_uint *)0xC817064)->v) = ((((((int)(u31 * u14) << 16) << 8) | ((int)(u31 * u14) << 16)) | ((int)(u31 * u14) << 8)) | (int)(u31 * u14));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t32 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t32, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c039548(int a4, int a5, int a6, int a7)
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

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        t5 = 0x0;
        t6 = (0x2E0 + a4);
        t7 = (0x2E0 + a4);
        t8 = (0x2E0 + a4);
        for (;;) {
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o44_float *)(t9))->v) = (((((struct o44_float *)(t9))->v)) - 0.049999997f);
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o48_float *)(t9))->v) = (((((struct o48_float *)(t9))->v)) - 0.049999997f);
            t9 = *(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
            (((struct o4C_float *)(t9))->v) = (((((struct o4C_float *)(t9))->v)) - 0.049999997f);
            if (!(((((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o44_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0)))))->v)) > 0.0f)) {
                (((struct o48_float *)((*(int *)((t6 + 0x0)))))->v) = 0.0f;
            }
            t5 = (t5 + 0x1);
            if (!(((((struct o4C_float *)((*(int *)((t7 + 0x0)))))->v)) > 0.0f)) {
                (((struct o4C_float *)((*(int *)((t8 + 0x0)))))->v) = 0.0f;
            }
            t7 = (t7 + 0x4);
            t8 = (t8 + 0x4);
            t6 = (t6 + 0x4);
            if ((int)t5 >= (int)0xA) {
                break;
            }
        }
        t5 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t5 + 0x1);
        t6 = 0xEC;
        if ((int)(short)(t5 + 0x1) >= (int)0x14) {
            t5 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t5 + 0x1);
            t6 = (t5 + 0x1);
        }
        return t6;
    }
    t5 = 0x24;
    t6 = 0x20;
    t7 = 0x9;
    for (;;) {
        *(volatile int *)((t6 + (0x2E0 + a4)));
        *(volatile int *)((t5 + (0x2E0 + a4)));
        FUN_0c0e6fe8(a4, t5, t6, t7);
        t7 = (t0 - 1);
        t6 = (t1 - 4);
        t5 = (t2 - 4);
        if ((int)t7 < (int)0x1) {
            break;
        }
    }
    *(volatile int *)((t3 + 0x1C));
    *(volatile int *)((t3 + 0x2E0));
    FUN_0c0e6fe8(t3, t5, t6, t7);
    t0 = *(signed char *)(((*(int *)((t4 + 0x1C))) + 0x8));
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t4 + 0x8)) = ((*(signed char *)((t4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        t1 = 0xEC;
    }
    return t1;
}

float FUN_0c020a80(int a4, float f4)
{
    int stk[17];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u18;
    register float u21;
    register float t22;
    register float u23;
    register float u24;
    register float u25;
    register float u28;
    register float u31;
    register float u36;
    register float u39;
    register float u41;
    register float u42;
    register float u43;
    register float u46;
    register float u49;
    register float u54;
    register float u57;
    register float u63;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c022952(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0));
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c022952(t1, 0x1, (*(signed char *)((t1 + 0x102))), 0x0));
    FUN_0c0210f4(a4, (((int)stk + 8) + 0x28), (*(int *)(((int)stk + 8))));
    FUN_0c0210f4(t1, (((int)stk + 8) + 0x14), (*(int *)(((int)stk + 12))));
    u9 = *(float *)(((int)stk + 40));
    u10 = *(float *)(((int)stk + 28));
    u11 = *(float *)(((int)stk + 48));
    *(float *)(((int)stk + 20)) = (u11 - u10);
    u12 = *(float *)(((int)stk + 32));
    u13 = *(float *)(((int)stk + 52));
    *(float *)(((int)stk + 16)) = (u13 - u12);
    u14 = *(float *)(((int)stk + 36));
    u15 = *(float *)(((int)stk + 56));
    u18 = ((u13 - u12) * (u13 - u12));
    u18 = u18 + ((u11 - u10)) * ((u11 - u10));
    u21 = u18;
    u21 = u21 + ((u15 - u14)) * ((u15 - u14));
    *(float *)(((int)stk + 24)) = (u15 - u14);
    t22 = FUN_0c0df340(u21);
    if (0.0f > ((f4 + u9) - t22)) {
        u23 = *(float *)(((int)stk + 40));
        *(float *)(((int)stk + 4)) = ((-f4) - u23);
        u24 = *(float *)(((int)stk + 36));
        u25 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 0)) = (u25 - u24);
        u28 = *(float *)(((int)stk + 28));
        u31 = *(float *)(((int)stk + 32));
        u36 = (((*(float *)(((int)stk + 52))) - u31) * ((*(float *)(((int)stk + 52))) - u31));
        u36 = u36 + (((*(float *)(((int)stk + 48))) - u28)) * (((*(float *)(((int)stk + 48))) - u28));
        u39 = u36;
        u39 = u39 + (((*(float *)(((int)stk + 56))) - (*(float *)(((int)stk + 36))))) * ((u25 - u24));
        u63 = (((-f4) - u23) + (FUN_0c0df340(u39)));
    } else {
        u41 = *(float *)(((int)stk + 40));
        *(float *)(((int)stk + 4)) = (f4 + u41);
        u42 = *(float *)(((int)stk + 36));
        u43 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 0)) = (u43 - u42);
        u46 = *(float *)(((int)stk + 28));
        u49 = *(float *)(((int)stk + 32));
        u54 = (((*(float *)(((int)stk + 52))) - u49) * ((*(float *)(((int)stk + 52))) - u49));
        u54 = u54 + (((*(float *)(((int)stk + 48))) - u46)) * (((*(float *)(((int)stk + 48))) - u46));
        u57 = u54;
        u57 = u57 + (((*(float *)(((int)stk + 56))) - (*(float *)(((int)stk + 36))))) * ((u43 - u42));
        u63 = ((f4 + u41) - (FUN_0c0df340(u57)));
    }
    return u63;
}

float FUN_0c052150(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
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
    v0_3 = a4;
    v0_0 = FUN_0c04fed8(v0_3, f4);
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c050180((0x4000 + v0_0)));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c050180((0xFFFFC000 + v0_0)));
    v0_7 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    v0_8 = ((unsigned char)v0_7);
    v0_4 = (0x0);
    v0_1 = (v0_3);
    v0_5 = (0xC3673EC);
    v0_0 = (0xC366F40);
    v0_2 = (0xC3673EE);
    v0_6 = (0x254);
    if (((unsigned char)v0_7 == 0)) goto L_C0521AE;
    if ((v0_8 == 1)) goto L_C052204;
    if ((v0_8 == 2)) goto L_C052200;
    if ((v0_8 == 3)) goto L_C052204;
    if ((v0_8 == 4)) goto L_C052280;
    L_C05229C:;
    return F0;
    L_C052280:;
    *(unsigned short *)((v0_5 + 0x0)) = 0x1;
    FUN_0c04cdf2();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)0xC3673E8);
    v0_8 = (0xC3673E8);
    goto L_C05229C;
    L_C052204:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_4;
    if ((((((struct o2A_short *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0)))->v)) == 0)) goto L_C05222A;
    (((struct o2DC_uint *)(v0_1))->v) = (((((struct o2DC_int *)(v0_1))->v)) | (unsigned short)(*(short *)(((int)stk + 0))));
    v0_8 = (0x2DC);
    L_C05223A:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C05229C;
    L_C05222A:;
    v0_3 = *(short *)(((int)stk + 4));
    (((struct o2DC_uint *)(v0_1))->v) = (((((struct o2DC_int *)(v0_1))->v)) | (unsigned short)v0_3);
    v0_8 = ((unsigned short)v0_3);
    goto L_C05223A;
    L_C052200:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_4;
    goto L_C05223A;
    L_C0521AE:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_4;
    v0_7 = *(signed char *)((v0_2 + 0x0));
    w0_0 = FUN_0c0df940();
    v0_6 = ((((short)((short)(unsigned char)v0_7 * (short)v0_6) + v0_0) + 0x2A));
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_0 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_0 * 255.0f))) goto L_C0521DC;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C0521DC:;
    *(unsigned short *)((v0_6 + 0x0)) = (FUN_0c0e6f24(v0_3));
    v0_3 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C052204;
}

int FUN_0c01371a(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R12;
    register float F2;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_1);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_1 == 0)) goto L_C01372C;
    if ((v0_2 == 1)) goto L_C013776;
    return FUN_0c059330(v0_0, R5, a6, R7);
    L_C013776:;
    w0_3 = *(float *)0xC361C60;
    R5 = (0xC361C60);
    w0_2 = (w0_3);
    if ((w0_3 == w0_0)) goto L_C0137AC;
    (((struct o60_float *)(v0_0))->v) = w0_2;
    (((struct o64_float *)(v0_0))->v) = (*(float *)((R5 + 0x0)));
    (((struct o68_float *)(v0_0))->v) = (*(float *)((R5 + 0x0)));
    L_C01381E:;
    if (((*(signed char *)((v0_0 + 0x4))) == 11)) goto L_C013836;
    R5 = (0xC7F3036);
    if ((((((struct o0_short *)0xC7F3040)->v)) != 0)) goto L_C01384E;
    if (((*(short *)((R5 + 0xC))) == 0)) goto L_C013854;
    L_C01384E:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C013854:;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) - 91);
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) & 0xFFFF);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_2 = (0xEC);
    return v0_2;
    L_C013836:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    FPUL_ = (v0_1);
    if ((!(((((struct o8_float *)0xC0138A4)->v)) > (float)v0_1))) goto L_C01384E;
    if ((((((struct o2_short *)0xC7F3040)->v)) == 0)) goto L_C013854;
    goto L_C01384E;
    L_C0137AC:;
    (((struct o60_float *)(v0_0))->v) = (((((struct o60_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o64_float *)(v0_0))->v) = (((((struct o64_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o68_float *)(v0_0))->v) = (((((struct o68_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    w0_3 = (0.0f);
    w0_2 = (((((struct o0_float *)0xC0138A4)->v)));
    if ((!(0.0f > ((((struct o38_float *)(v0_0))->v))))) goto L_C013802;
    if ((((((struct o60_float *)(v0_0))->v)) > w0_3)) goto L_C01381E;
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) * w0_2);
    (((struct o68_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    goto L_C01381E;
    L_C013802:;
    if ((w0_0 > ((((struct o60_float *)(v0_0))->v)))) goto L_C01381E;
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) * w0_2);
    (((struct o68_float *)(v0_0))->v) = w0_0;
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o60_float *)(v0_0))->v) = w0_0;
    goto L_C01381E;
    L_C01372C:;
    (((struct o20_float *)(v0_0))->v) = (*(float *)((0xC1165A0 + (((*(signed char *)((v0_0 + 0x4))) << 2) << 1))));
    (((struct o24_float *)(v0_0))->v) = ((((struct o4_float *)((0xC1165A0 + (((*(signed char *)((v0_0 + 0x4))) << 2) << 1))))->v));
    (((struct o28_float *)(v0_0))->v) = -14.3099995f;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct o68_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    (((struct o38_float *)(v0_0))->v) = 0.0249999985f;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C013776;
}

int FUN_0c04fc9e(int a4)
{
    register int t43;

    if (400.0f > ((((struct o24_float *)(a4))->v))) {
        if (((((struct o20_float *)(a4))->v)) > ((-((((struct o28_float *)(a4))->v))) + -100.0f)) {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o20_float *)(a4))->v));
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 300.0f;
        } else {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = -550.0f;
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o28_float *)(a4))->v));
        }
    } else {
        if (((((struct o20_float *)(a4))->v)) > ((-((((struct o28_float *)(a4))->v))) + -100.0f)) {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o20_float *)(a4))->v));
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = -100.0f;
        } else {
            (((struct o60_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = (*(float *)0xC04FEA8);
            (((struct o64_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = 0.0f;
            (((struct o68_float *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = ((((struct o28_float *)(a4))->v));
        }
    }
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t43 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t43;
}

int FUN_0c0b271c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c059330(a4, a5, a6, a7);
                }
                (((struct o105_uchar *)(a4))->v) = 0x1;
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 8.0f);
                if (!(((float)t0 / 8.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                return 0xEC;
            }
            (((struct o105_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x8;
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        u0 = (((struct o38_float *)(a4))->v);
        (((struct o38_float *)(a4))->v) = (u0 + 24.0f);
        *(unsigned int *)((a4 + 0x2C)) = (int)((float)(*(int *)((a4 + 0x2C))) - (u0 + 24.0f));
        t0 = *(int *)((a4 + 0x2C));
        *(unsigned int *)((a4 + 0x2C)) = (t0 & 0xFFFF);
        t1 = 0x38;
        if ((int)(t0 & 0xFFFF) <= (int)0xC000) {
            (((struct o105_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x2C)) = 0xC000;
            FUN_0c042d68((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 2.0f, 300.0f);
            FUN_0c0a3ebc((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x2);
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) > (int)0x3C) {
        return 0xEC;
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A6A4))));
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        return 0xEC;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    return FUN_0c0a1e0a(a4, 0x35);
}

int FUN_0c06f058(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c06f036(a4);
        }
        return FUN_0c06efec(a4);
    }
    return FUN_0c06eeb4(a4);
}

int FUN_0c08e704(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    int t4;

    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x0))) == 23) {
        return ((int (*)(int, int, int, int))(0xC08E894))(a4, a5, a6, a7);
    }
    if ((int)((((struct o71D4_short *)(a4))->v)) < 0) {
        (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
        return ((int (*)(int, int, int, int))(0xC08E85E))(a4, a5, 0x1, a7);
    }
    t4 = *(signed char *)((a4 + 0x71BC));
    if ((t4 != 0) && (t4 != 1)) {
        if (t4 != 2) {
            if (t4 != 3) {
            } else {
                (((struct o71DD_uchar *)(a4))->v) = 0xD;
            }
        } else {
            t4 = *(signed char *)((a4 + 0x71DD));
            if ((unsigned int)t4 < (unsigned int)0x19) {
                switch ((t4 << 1)) {
                    case 0:
                    case 8:
                    case 16:
                    case 18:
                    case 20:
                    case 22:
                    case 24:
                    case 26:
                    case 28:
                    case 30:
                    case 34:
                    case 36:
                    {
                        if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x4))) == 0) {
                            (((struct o71DD_uchar *)(a4))->v) = 0x1;
                        } else {
                            (((struct o71DD_uchar *)(a4))->v) = 0x2;
                        }
                    }
                        break;
                    case 2:
                    case 4:
                    case 6:
                    case 10:
                    case 12:
                    case 14:
                    case 32:
                    case 38:
                    case 40:
                    case 42:
                    case 44:
                    case 46:
                    {
                    }
                        break;
                    default:
                    {
                        (((struct o71DD_uchar *)(a4))->v) = 0x3;
                    }
                        break;
                }
            }
        }
    } else {
        if (((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xB))) == 3) && (t0 = *(signed char *)((a4 + 0x71BB)), t0 == 9)) {
            (((struct o71DD_uchar *)(a4))->v) = 0x11;
        }
    }
    if ((*(signed char *)((a4 + 0x71BB))) == 7) {
        (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
        (((struct o71DD_uchar *)(a4))->v) = 0x3;
    }
    if ((*(signed char *)((a4 + 0x71BB))) == 34) {
        (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
        (((struct o71DD_uchar *)(a4))->v) = 0x13;
    }
    if ((*(signed char *)((a4 + 0x71BB))) == 36) {
        (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
        (((struct o71DD_uchar *)(a4))->v) = 0x14;
    }
    if (((*(signed char *)((a4 + 0x71BB))) == 27) && ((t1 = *(signed char *)((a4 + 0x71DE)), t1 == 11) || ((t2 = *(signed char *)((a4 + 0x71BB)), t2 == 27) && (t3 = *(signed char *)((a4 + 0x71DE)), t3 == 7)))) {
        (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
        return ((int (*)(int, int, int, int))(0xC08E85E))(a4, 0x2, 0x1, 0x3);
    }
    if (((unsigned char)(*(signed char *)((0x11 + ((((struct oF8_int *)(a4))->v))))) & 0xE0) == 0x80) {
        *(volatile signed char *)((a4 + 0x71DD));
        return ((int (*)(int, int, int, int))(0xC08E85A))(a4, 0x2, 0x7, 0x3);
    }
    return ((int (*)(int, int, int, int))(0xC08E862))(a4, 0x2, 0x7, 0x3);
}

int FUN_0c048314(int a4, int a5)
{
    int stk[17];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t17;
    register float u23;
    register float u25;
    register float u27;
    register float u36;
    register int t41;
    register int t43;
    register int t46;
    register int t56;

    t0 = 0xC048470;
    t1 = a5;
    t2 = (a5 + 0x4);
    t3 = (a5 + 0xC);
    t4 = (a5 + 0x4);
    t5 = 0x0;
    for (;;) {
        if ((*(signed char *)(((*(int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0))) + 0x0))) != 0) {
            t0 = 0x4;
            t8 = *(int *)((((t5 << 2) + (0x2E0 + a4)) + 0x0));
            t1 = t8;
            *(unsigned int *)(((int)stk + 8)) = t8;
            *(float *)((t1 + t0)) = ((*(float *)((t1 + t0))) + ((((struct o28_float *)(t1))->v)));
            t0 = 0x8;
            *(float *)((t1 + t0)) = ((*(float *)((t1 + t0))) + ((((struct o2C_float *)(t1))->v)));
            t0 = (*(signed char *)((a4 + 0x3)));
            t0 = (t0 << 1);
            t0 = (-t0);
            t0 = (t0 + 0x1);
            t0 = (t0 << 8);
            t0 = (t0 << 2);
            t0 = (t0 << 1);
            t0 = (t0 + (*(int *)((t1 + 0x18))));
            *(unsigned int *)((t1 + 0x18)) = t0;
            t17 = *(signed char *)((((a5 + 0xC) + t5) + 0x0));
            *(unsigned char *)((((a5 + 0xC) + t5) + 0x0)) = (t17 - 1);
            if ((signed char)(t17 - 1) == 0) {
                *(unsigned char *)((t3 + 0x0)) = 0x2;
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 ^ 0x1);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t0 = 0x4;
            *(unsigned int *)(((int)stk + 12)) = (*(short *)0xC17FDB2);
            *(unsigned int *)(((int)stk + 64)) = 0xA;
            u23 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0x8;
            *(float *)((((int)stk + 8) + t0)) = u23;
            t0 = 0x8;
            u25 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0xC;
            *(float *)((((int)stk + 8) + t0)) = u25;
            t0 = 0xC;
            u27 = *(float *)(((*(int *)(((int)stk + 8))) + t0));
            t0 = 0x10;
            *(float *)((((int)stk + 8) + t0)) = u27;
            *(unsigned int *)(((int)stk + 52)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x18)));
            t0 = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
            t0 = ((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u)));
            t0 = (t0 >> 1);
            u36 = ((-(float)t0) + 6.0f);
            t0 = 0x30;
            t1 = 0xC17FDB0;
            *(float *)((((int)stk + 8) + t0)) = (u36 / 6.0f);
            t0 = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
            t41 = t0;
            t0 = 0x18;
            *(float *)((((int)stk + 8) + t0)) = ((float)t41 / 12.0f);
            t0 = 0x14;
            *(float *)((((int)stk + 8) + t0)) = ((float)t41 / 12.0f);
            *(int *)((int)stk + 4) = 0x0;
            t0 = (*(signed char *)((a4 + 0x3)));
            t43 = t0;
            *(int *)((int)stk + 0) = t43;
            t0 = (FUN_0c027fa4((((int)stk + 0) + 0xC), t1, 0x4, ((*(signed char *)((t4 + 0x0))) + 0x2), t43, 0x0));
            t46 = *(int *)(((int)stk + 8));
            t0 = (*(signed char *)((t46 + 0x1)));
            t0 = (t0 - 1);
            *(unsigned char *)((t46 + 0x1)) = t0;
            t0 = (signed char)t0;
            if (t0 == 0) {
                *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
                t0 = (*(signed char *)((a5 + 0x1)));
                t0 = (t0 - 1);
                *(unsigned char *)((a5 + 0x1)) = t0;
            }
        } else {
            t56 = t1;
        }
        t1 = t56;
        t5 = (t5 + 0x1);
        t4 = (t4 + 0x1);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x1);
        if ((int)t5 < (int)0x8) continue;
        break;
    }
    return t0;
}

int FUN_0c049d14(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 != 3) {
                    return t4;
                }
                return FUN_0c059330(a4, a5, a6, a7);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return FUN_0c059330(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x34)) = ((-(*(int *)0xC7F2B0C)) + 0x10000);
        t4 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
        if ((short)(t4 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        }
        (((struct o308_uint *)(a4))->v) = 0x0;
        t4 = 0x0;
        for (;;) {
            t5 = 0x0;
            if (0.0f > ((((struct o20_float *)(((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t5 = 0x2;
            }
            t6 = t5;
            if (0.0f > ((((struct o28_float *)(((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t6 = (t5 + 0x1);
            }
            *(unsigned char *)(((((0x308 + a4) + 0x4) + t4) + 0x0)) = t6;
            t5 = ((int)0x1 << (int)t4);
            t4 = (t4 + 0x1);
            *(unsigned char *)((((0x308 + a4) + t6) + 0x0)) = ((*(signed char *)((((0x308 + a4) + t6) + 0x0))) | t5);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t4 = 0x0;
        t5 = 0x4;
        for (;;) {
            *(volatile int *)(((0x2E0 + a4) + 0x0));
            *(volatile signed char *)(((0x308 + a4) + 0x0));
            FUN_0c0e6fe8(((0x2E0 + a4) + 0x4), ((0x308 + a4) + 0x1), t4, t5);
            t4 = (t0 + 0x1);
            t5 = t1;
            if ((int)t4 >= (int)t1) {
                break;
            }
        }
        t0 = FUN_0c02d844();
        t1 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = FUN_0c0555c4();
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = ((-(*(int *)0xC7F2B0C)) + 0x10000);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        }
        (((struct o308_uint *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            t4 = 0x0;
            if (0.0f > ((((struct o20_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t4 = 0x2;
            }
            t5 = t4;
            if (0.0f > ((((struct o28_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
                t5 = (t4 + 0x1);
            }
            *(unsigned char *)(((((0x308 + a4) + 0x4) + t0) + 0x0)) = t5;
            t4 = ((int)0x1 << (int)t0);
            t0 = (t0 + 0x1);
            *(unsigned char *)((((0x308 + a4) + t5) + 0x0)) = ((*(signed char *)((((0x308 + a4) + t5) + 0x0))) | t4);
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t0 = 0x0;
        t4 = 0x4;
        for (;;) {
            *(volatile int *)(((0x2E0 + a4) + 0x0));
            *(volatile signed char *)(((0x308 + a4) + 0x0));
            FUN_0c0e6fe8(((0x2E0 + a4) + 0x4), ((0x308 + a4) + 0x1), t0, t4);
            t0 = (t2 + 0x1);
            t4 = t3;
            if ((int)t0 >= (int)t3) {
                break;
            }
        }
        t0 = FUN_0c02d844();
        t2 = (signed char)t0;
        if ((signed char)t0 == 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0e41bc(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t13;
    register int t25;
    register int t28;
    register int t30;
    register int t32;
    register int t50;
    register int t56;
    register int t58;
    register int t59;
    register int t66;
    register int t69;
    register int t71;
    register int t73;
    register int t91;
    register int t97;
    register int t99;
    register int t100;

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = a5;
    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 44)) = a7;
    if ((*(int *)(((int)stk + 52))) == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)(((int)stk + 40)) = (*(int *)(((int)stk + 48)));
    t2 = *(int *)(((int)stk + 48));
    t3 = *(int *)0xC7FD490;
    *(unsigned int *)(((int)stk + 36)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 48)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 32)) = (short)(*(short *)((((*(int *)(((int)stk + 36))) << 1) + ((((struct o0_int *)0xC7FD044)->v)))));
    t10 = *(int *)((((*(int *)(((int)stk + 40))) << 2) + (*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 28)) = t10;
    *(unsigned int *)(((int)stk + 20)) = t10;
    t11 = *(int *)(((int)stk + 32));
    t13 = (((struct oC_int *)0xC7FD044)->v);
    *(unsigned int *)(((int)stk + 16)) = ((((t11 << 2) << 2) << 1) + t13);
    *(unsigned int *)(((int)stk + 24)) = (((unsigned int)(*(int *)((((((t11 << 2) << 2) << 1) + t13) + 0xC))) >> 27) & 0x7);
    if ((*(int *)0xC7F87C0) == 0) {
        return ((int (*)(int, int, int, int))(0xC0E4336))(a4, a5, a6, a7);
    }
    if ((*(int *)(((int)stk + 24))) != 5) {
        if ((*(int *)(((int)stk + 24))) == 6) {
            FUN_0c0ead50((*(int *)(((int)stk + 28))), a5, a6, a7);
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 44)));
            if ((int)(*(int *)(((int)stk + 28))) < (int)((((struct o0_short *)0xC7FD624)->v))) {
                *(unsigned int *)(((int)stk + 12)) = ((((struct o14_int *)0xC7FD624)->v));
                t25 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 8)) = ((((t25 << 1) + t25) << 2) + (*(int *)0xC7F87C0));
                t28 = *(int *)(((int)stk + 28));
                t30 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t30 + ((t28 << 2) << 1));
                if ((*(short *)(((t30 + ((t28 << 2) << 1)) + 0x4))) != 0) {
                    t32 = *(int *)(((int)stk + 12));
                    *(unsigned short *)((t32 + 0x4)) = ((*(short *)((t32 + 0x4))) + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = (*(short *)(((*(int *)(((int)stk + 12))) + 0x0)));
                    return ((int (*)(void))(0xC0E4322))();
                }
                *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x2)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x2)));
                *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x3)) = ((int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8))) + 0xF) >> 4);
                *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x4)) = 0x1;
                *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = (*(short *)(((int)stk + 28)));
                *(unsigned int *)(((int)stk + 0)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x8)));
                t50 = FUN_0c0eae20((*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (*(int *)(((int)stk + 0))));
                *(unsigned int *)(((int)stk + 4)) = t50;
                if ((int)t50 >= 0) {
                    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(int *)(((int)stk + 4)));
                    FUN_0c0eaef0((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
                    t56 = *(int *)(((int)stk + 0));
                    t58 = *(int *)(((*(int *)(((int)stk + 8))) + 0x4));
                    t59 = *(int *)(((int)stk + 4));
                    return ((int (*)(int, int, int, int))(0xC0E4310))(t59, t58, t56, a7);
                }
                return ((int (*)(void))(0xC0E431E))();
            }
            return ((int (*)(void))(0xC0E4336))();
        }
        return ((int (*)(int, int, int, int))(0xC0E4336))(a4, a5, a6, a7);
    }
    FUN_0c0ead50((*(int *)(((int)stk + 28))), a5, a6, a7);
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 44)));
    if ((int)(*(int *)(((int)stk + 28))) < (int)((((struct o0_short *)0xC7FD624)->v))) {
        *(unsigned int *)(((int)stk + 12)) = ((((struct o14_int *)0xC7FD624)->v));
        t66 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 8)) = ((((t66 << 1) + t66) << 2) + (*(int *)0xC7F87C0));
        t69 = *(int *)(((int)stk + 28));
        t71 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t71 + ((t69 << 2) << 1));
        if ((*(short *)(((t71 + ((t69 << 2) << 1)) + 0x4))) != 0) {
            t73 = *(int *)(((int)stk + 12));
            *(unsigned short *)((t73 + 0x4)) = ((*(short *)((t73 + 0x4))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = (*(short *)(((*(int *)(((int)stk + 12))) + 0x0)));
            return ((int (*)(void))(0xC0E4322))();
        }
        *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x2)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x2)));
        *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x3)) = ((int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8))) + 0xF) >> 4);
        *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x4)) = 0x1;
        *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = (*(short *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x8)));
        t91 = FUN_0c0eae20((*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (*(int *)(((int)stk + 0))));
        *(unsigned int *)(((int)stk + 4)) = t91;
        if ((int)t91 >= 0) {
            *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(int *)(((int)stk + 4)));
            FUN_0c0eaef0((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
            t97 = *(int *)(((int)stk + 0));
            t99 = *(int *)(((*(int *)(((int)stk + 8))) + 0x4));
            t100 = *(int *)(((int)stk + 4));
            return ((int (*)(int, int, int, int))(0xC0E4310))(t100, t99, t97, a7);
        }
        return ((int (*)(void))(0xC0E431E))();
    }
    return ((int (*)(void))(0xC0E4336))();
}
