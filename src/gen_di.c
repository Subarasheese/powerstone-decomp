/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_short { char p[0x6A]; short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXSJD_GetDecNumSmpl(int);
int FUN_0c010160(void);
int FUN_0c0101a8(void);
int FUN_0c0101f0(int);
int FUN_0c011a70(void);
int FUN_0c011aa6(int);
int FUN_0c011c2e(int, int);
int FUN_0c020ff2(int, int, int);
int FUN_0c021042(int, int, int);
int FUN_0c021090(int, int, int);
int FUN_0c022952(int, int, int, int);
int FUN_0c022b90(int, int, int);
int FUN_0c022c1a(int, int, int);
int FUN_0c022ca8(int, int, int);
int FUN_0c025f7a(int, int, int, int);
int FUN_0c026076(int, int, int, int);
int FUN_0c042d68(int, int, float, float);
int FUN_0c04cdf2(void);
int FUN_0c04fed8(int, float);
int FUN_0c050068(int);
int FUN_0c0500ca(int);
int FUN_0c050180(int);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08e382(int);
int FUN_0c08f4d8(int);
int FUN_0c08f6c8(int);
int FUN_0c08f76a(void);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c45a(int);
int FUN_0c09e7b8(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a1e0a(int, int);
int FUN_0c0a3ebc(int, int, int);
int FUN_0c0aaa38(int);
int FUN_0c0ce88c(int, int);
int FUN_0c0ce99a(int, int, int, int);
int FUN_0c0cea90(int, int, int, int);
int FUN_0c0cebe6(void);
int FUN_0c0cec2e(void);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
extern int FUN_0c0e6fe8();
int FUN_0c0e7140(int);
int FUN_0c0f4c2c(int);
int FUN_0c10687c(int);
int adxt_RcvrReplay(void);
int buMountDisk(int, int, int);
int buUnmount(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0c7aa0(int a4, int a5);
int kmiProcessVertex_04(int a4);
int FUN_0c050634(int a4, float f4);
int FUN_0c050322(int a4, int a5, int a6, int a7);
int FUN_0c0b8968(int a4);
int FUN_0c026880(int a4);
int FUN_0c0382a8(int a4);
int FUN_0c08f9fc(int a4);
int FUN_0c033a42(int a4);
int FUN_0c0b2ad4(int a4, int a5, int a6, int a7);
int FUN_0c106ef4(int a4, int a5, int a6, int a7);
int FUN_0c10c0e0(Stk29 s);
int FUN_0c011c4a(int a4, int a5, int a6);
int FUN_0c0cecac(int a4, int a5);
int FUN_0c1158e6(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c01c59a(int a4);
int FUN_0c0419a8(int a4, int a5, int a6, int a7);
int FUN_0c0c19fa(int a4, int a5, int a6, int a7);
int FUN_0c011ae0(int a4, int a5, int a6);
int FUN_0c0aac9c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c7aa0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t25;
    register int t7;
    register int t8;
    register int t9;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C7F48;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x7A);
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            t9 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t8) + 0x0))), ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x21);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x2)) = 0x21F;
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            *(volatile int *)((((0x2E0 + t0) + t8) + 0x0));
            FUN_0c0e6fe8();
            t7 = (t7 + 0x1);
            t24 = *(int *)((((0x2E0 + t0) + t8) + 0x0));
            (((struct o48_float *)(t24))->v) = 1.0f;
            (((struct o4C_float *)(t24))->v) = 1.0f;
            (((struct o44_float *)(t24))->v) = 1.0f;
            t8 = (t8 + 0x4);
            if ((int)t7 >= (int)0x2) {
                break;
            }
        }
        t25 = 0x44;
    }
    return t25;
}

int kmiProcessVertex_04(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t19;
    register int t28;
    register int t33;
    register int t42;
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
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x18)));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t19 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c050634(int a4, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register float F2;
    register float F3;
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
    register int v0_9;
    v0_3 = a4;
    v0_6 = FUN_0c04fed8(v0_3, f4);
    v0_7 = *(signed char *)0xC3673EE;
    v0_2 = (0x4C);
    v0_4 = (v0_3);
    v0_5 = (v0_6);
    v0_1 = (0xC3673EE);
    v0_0 = (0xC366F40);
    v0_3 = (((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40));
    if (((int)(unsigned short)((v0_6 - ((((struct o4C_short *)(((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40)))->v))) + 0x1000) >= (int)0x2000)) goto L_C050688;
    v0_5 = ((*(int *)((v0_3 + v0_2))));
    L_C05068A:;
    v0_2 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_2 + 0x2);
    v0_8 = FUN_0c050180(((int)(((float)(*(short *)((((v0_2 + 0x2) - 2) + 0x0))) * 65536.0f) / 360.0f) + v0_5));
    v0_6 = *(signed char *)((v0_0 + (short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254)));
    v0_2 = ((unsigned char)v0_6);
    v0_5 = (0xC3673E8);
    v0_3 = (0xC3673EC);
    v0_7 = (0x0);
    v0_9 = ((unsigned short)v0_8);
    v0_8 = (0x1);
    if (((unsigned char)v0_6 == 0)) goto L_C0506E4;
    if ((v0_2 == 1)) goto L_C0506FE;
    if ((v0_2 == 2)) goto L_C05071E;
    if ((v0_2 == 3)) goto L_C05072A;
    if ((v0_2 == 4)) goto L_C050744;
    if ((v0_2 == 5)) goto L_C050762;
    L_C05077A:;
    return v0_2;
    L_C050762:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_8;
    v0_2 = FUN_0c04cdf2();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)((v0_5 + 0x0)));
    v0_2 = (v0_2);
    goto L_C05077A;
    L_C050744:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_7;
    (((struct o2DC_uint *)(v0_4))->v) = (((((struct o2DC_int *)(v0_4))->v)) | v0_9);
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C050762;
    L_C05072A:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_7;
    L_C05072C:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C05077A;
    L_C05071E:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_7;
    (((struct o2DC_uint *)(v0_4))->v) = (((((struct o2DC_int *)(v0_4))->v)) | v0_9);
    v0_2 = (0x2DC);
    goto L_C05072C;
    L_C0506FE:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_7;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    v0_3 = *(short *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x1C));
    *(unsigned short *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x1C)) = (v0_3 - 1);
    v0_2 = ((unsigned short)(v0_3 - 1));
    if (((unsigned short)(v0_3 - 1) != 0)) goto L_C05077A;
    goto L_C05072C;
    L_C0506E4:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_7;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0x1C)) = v0_8;
    v0_2 = (v0_8);
    goto L_C05072C;
    L_C050688:;
    *(unsigned int *)((v0_3 + v0_2)) = v0_5;
    goto L_C05068A;
}

int FUN_0c050322(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
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
    register int v0_9;
    v0_2 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_0 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 8)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    v0_6 = FUN_0c050068(v0_2);
    v0_7 = *(signed char *)0xC3673EE;
    v0_4 = (0x4C);
    v0_5 = (0xC3673E8);
    v0_8 = (v0_6);
    v0_3 = (v0_2);
    v0_1 = (0xC3673EE);
    v0_0 = (0xC366F40);
    v0_2 = (((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40));
    if (((int)(unsigned short)((v0_6 - ((((struct o4C_short *)(((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40)))->v))) + 0x1000) >= (int)0x2000)) goto L_C050372;
    v0_8 = ((*(int *)((v0_2 + v0_4))));
    L_C050374:;
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c050180(v0_8));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c050180((0x8000 + v0_8)));
    v0_4 = (*(signed char *)((((((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0)))->v)) + 0x1))) == 0;
    v0_2 = (0xC3673EC);
    v0_6 = ((FUN_0c0500ca(v0_3)));
    if (v0_4) goto L_C05044E;
    v0_9 = *(signed char *)((v0_0 + (short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254)));
    v0_4 = ((unsigned char)v0_9);
    v0_8 = (0x254);
    v0_7 = (0x0);
    if (((unsigned char)v0_9 == 0)) goto L_C0503E4;
    if ((v0_4 == 1)) goto L_C0503F8;
    if ((v0_4 == 2)) goto L_C05044E;
    L_C050468:;
    return v0_4;
    L_C05044E:;
    *(unsigned short *)((v0_2 + 0x0)) = 0x1;
    v0_2 = FUN_0c04cdf2();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)((v0_5 + 0x0)));
    v0_4 = (v0_2);
    goto L_C050468;
    L_C0503F8:;
    *(unsigned short *)((v0_2 + 0x0)) = v0_7;
    v0_2 = (((short)v0_6 + 0xA));
    if (((int)((short)v0_6 - 10) <= 0)) goto L_C050412;
    (((struct o2DC_uint *)(v0_3))->v) = (((((struct o2DC_int *)(v0_3))->v)) | (unsigned short)(*(short *)(((int)stk + 0))));
    L_C050412:;
    if (((int)v0_2 >= 0)) goto L_C050426;
    (((struct o2DC_uint *)(v0_3))->v) = (((((struct o2DC_int *)(v0_3))->v)) | (unsigned short)(*(short *)(((int)stk + 4))));
    L_C050426:;
    v0_2 = *(short *)(((int)stk + 8));
    v0_4 = (0x24);
    FPUL_ = (v0_2);
    if (((float)v0_2 > ((((struct o24_float *)(v0_3))->v)))) goto L_C050468;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C050468;
    L_C0503E4:;
    *(unsigned short *)((v0_2 + 0x0)) = v0_7;
    v0_4 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_4 * (short)v0_8) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_4 * (short)v0_8) + v0_0) + 0x0))) + 0x1);
    goto L_C0503F8;
    L_C050372:;
    *(unsigned int *)((v0_2 + v0_4)) = v0_8;
    goto L_C050374;
}

int FUN_0c0b8968(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)((a4 + 0x4)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B8B00;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t2 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        u0 = ((((struct o38_float *)(t0))->v));
        u0 = u0 + 8.0f * (FUN_0c0df4d0(((-(*(int *)((t0 + 0x30)))) + 0x14000)));
        (((struct o38_float *)(t0))->v) = u0;
        u0 = ((((struct o40_float *)(t0))->v));
        u0 = u0 + 8.0f * (FUN_0c0dfa50(((-(*(int *)((t0 + 0x30)))) + 0x14000)));
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x75);
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t3) + 0x0))) + 0x2)) = (*(short *)((0xC153150 + (t2 << 1))));
            t4 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t3) + 0x0))), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), (t2 + 0x3));
            t2 = (t2 + 0x1);
        }
        t1 = 0x2DC;
    }
    return t1;
}

int FUN_0c026880(int a4)
{
    int stk[16];
    register int t1;
    register int t2;
    int t23;
    register int t25;
    register int t30;
    register int t36;
    register int t37;
    register int t42;
    register int t19;
    register int t21;
    register int t22;
    register int t24;

    t1 = FUN_0c022952(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    t2 = *(signed char *)((t1 + 0x1));
    if ((t2 & 0xF) != 0) {
        if ((t2 & 0xF) != 1) {
            if ((t2 & 0xF) == 2) {
                FUN_0c022ca8(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x14));
                FUN_0c020ff2(a4, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
                t19 = (((int)stk + 4) + 0x14);
            }
        } else {
            FUN_0c022c1a(a4, (*(short *)((t1 + 0x2))), ((int)stk + 4));
            FUN_0c021042(a4, ((int)stk + 4), ((int)stk + 4));
            t19 = ((int)stk + 4);
        }
    } else {
        FUN_0c022b90(a4, (*(short *)((t1 + 0x2))), (((int)stk + 4) + 0x2C));
        FUN_0c021090(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C));
        t19 = (((int)stk + 4) + 0x2C);
    }
    t23 = t22;
    t25 = 0x0;
    for (;;) {
        if ((int)t25 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t21 = 0x294;
        t23 = t25;
        t23 = (t23 << 2);
        t21 = (t21 + a4);
        t23 = (t23 + t21);
        t23 = (*(int *)((t23 + 0x0)));
        t30 = *(signed char *)((t23 + 0x2));
        t23 = t30;
        if ((t30 != 1) && (t23 != 2)) {
            t25 = (t25 + 0x1);
            continue;
        }
        t21 = 0x294;
        t24 = t25;
        t24 = (t24 << 2);
        t21 = (t21 + a4);
        t21 = (t21 + t24);
        *(int *)((int)stk + 0) = ((*(int *)((t21 + 0x0))));
        t23 = (*(signed char *)((t1 + 0x1)));
        t36 = FUN_0c026076(t23, (*(signed char *)((((0x2A9 + a4) + t25) + 0x0))), t19, (*(int *)((((0x280 + a4) + t24) + 0x0))));
        t23 = t36;
        if ((int)(signed char)t36 < (int)0x4) {
            t25 = (t25 + 0x1);
            continue;
        }
        return t23;
    }
    t37 = 0x0;
    for (;;) {
        if ((int)t37 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            return 0x0;
        }
        t42 = FUN_0c025f7a((*(signed char *)((t1 + 0x1))), (*(signed char *)((((0x2B8 + a4) + t37) + 0x0))), t19, (*(int *)((((t37 << 2) + (0x2C0 + a4)) + 0x0))));
        if ((int)(signed char)t42 >= (int)0x4) {
            break;
        }
        t37 = (t37 + 0x1);
    }
    return t42;
}

int FUN_0c0382a8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC038418;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(a4))->v)) + 4.0f);
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o54_float *)(t0))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o58_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (((t2 << 1) + t2) + 0x6));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0x41F;
            (((struct o4_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o8_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = (0.0f - (((float)t2 * 1.0f)));
            (((struct oC_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o1C_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            (((struct o24_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 1.0f;
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x10)) = 0x0;
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x14)) = 0x0;
            t3 = ((t2 << 2) + (0x2E0 + t0));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x18)) = 0x0;
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        t1 = 0x24;
    }
    return t1;
}

int FUN_0c08f9fc(int a4)
{
    register int t0;

    if (((((struct oF0_short *)(a4))->v)) == 0) {
        t0 = FUN_0c08f4d8(a4);
        if ((signed char)t0 != 0) {
            return (signed char)t0;
        }
    } else {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
    }
    t0 = FUN_0c08f6c8(a4);
    if ((signed char)t0 != 0) {
        return (signed char)t0;
    }
    t0 = FUN_0c08f76a();
    if ((signed char)t0 != 0) {
        return (signed char)t0;
    }
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    FUN_0c09a910(a4);
    t0 = (((struct oF2_short *)(a4))->v);
    if (t0 != 96) {
        if (t0 != 112) {
            if (!(t0 != 0x80)) {
                t0 = (((struct oEC_short *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                            t0 = FUN_0c09e7b8(a4);
                            if ((signed char)t0 != 0) {
                                FUN_0c09c45a(a4);
                                FUN_0c08e382(a4);
                                t0 = *(signed char *)((a4 + 0x27C));
                                if (t0 != 2) {
                                    return t0;
                                }
                                return ((int (*)(void))(0xC08FB58))();
                            }
                            return ((int (*)(void))(0xC08FB68))();
                        }
                        return ((int (*)(void))(0xC08FB68))();
                    }
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        FUN_0c09a808(a4, 0x2, ((*(signed char *)((a4 + 0xF2))) + 0x2));
                        (((struct oEE_ushort *)(a4))->v) = (int)((((((struct o24_float *)(a4))->v)) * (*(float *)0xC08FBC0)) / ((((struct o48_float *)(a4))->v)));
                        if ((int)((((struct oEE_short *)(a4))->v)) < 0) {
                            (((struct oEE_ushort *)(a4))->v) = (-((((struct oEE_short *)(a4))->v)));
                        }
                        (((struct oEE_ushort *)(a4))->v) = (int)(FUN_0c0df340((float)((((struct oEE_short *)(a4))->v))));
                        (((struct o71A8_uchar *)(a4))->v) = 0x0;
                        (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEE)));
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                            t0 = FUN_0c09e7b8(a4);
                            if ((signed char)t0 != 0) {
                                FUN_0c09c45a(a4);
                                FUN_0c08e382(a4);
                                t0 = *(signed char *)((a4 + 0x27C));
                                if (t0 != 2) {
                                    return t0;
                                }
                                return ((int (*)(void))(0xC08FB58))();
                            }
                            return ((int (*)(void))(0xC08FB68))();
                        }
                        return ((int (*)(void))(0xC08FB68))();
                    }
                    return ((int (*)(void))(0xC08FB68))();
                }
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    FUN_0c09a808(a4, 0x2, ((*(signed char *)((a4 + 0xF2))) + 0x1));
                    (((struct o71A8_uchar *)(a4))->v) = 0x0;
                    (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEE)));
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                }
            }
        }
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        if (t0 != 0) {
            if (t0 != 1) {
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t0 = FUN_0c09e7b8(a4);
                    if ((signed char)t0 != 0) {
                        FUN_0c09c45a(a4);
                        FUN_0c08e382(a4);
                        t0 = *(signed char *)((a4 + 0x27C));
                        if (t0 != 2) {
                            return t0;
                        }
                        return ((int (*)(void))(0xC08FB58))();
                    }
                    return ((int (*)(void))(0xC08FB68))();
                }
                return ((int (*)(void))(0xC08FB68))();
            }
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                FUN_0c09a808(a4, 0x2, ((*(signed char *)((a4 + 0xF2))) + 0x2));
                (((struct oEE_ushort *)(a4))->v) = (int)((((((struct o24_float *)(a4))->v)) * (*(float *)0xC08FBC0)) / ((((struct o48_float *)(a4))->v)));
                if ((int)((((struct oEE_short *)(a4))->v)) < 0) {
                    (((struct oEE_ushort *)(a4))->v) = (-((((struct oEE_short *)(a4))->v)));
                }
                (((struct oEE_ushort *)(a4))->v) = (int)(FUN_0c0df340((float)((((struct oEE_short *)(a4))->v))));
                (((struct o71A8_uchar *)(a4))->v) = 0x0;
                (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEE)));
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t0 = FUN_0c09e7b8(a4);
                    if ((signed char)t0 != 0) {
                        FUN_0c09c45a(a4);
                        FUN_0c08e382(a4);
                        t0 = *(signed char *)((a4 + 0x27C));
                        if (t0 != 2) {
                            return t0;
                        }
                        return ((int (*)(void))(0xC08FB58))();
                    }
                    return ((int (*)(void))(0xC08FB68))();
                }
                return ((int (*)(void))(0xC08FB68))();
            }
            return ((int (*)(void))(0xC08FB68))();
        }
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            FUN_0c09a808(a4, 0x2, ((*(signed char *)((a4 + 0xF2))) + 0x1));
            (((struct o71A8_uchar *)(a4))->v) = 0x0;
            (((struct o71A9_uchar *)(a4))->v) = (*(signed char *)((a4 + 0xEE)));
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        }
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            t0 = *(signed char *)((a4 + 0x27C));
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(void))(0xC08FB58))();
        }
        return ((int (*)(void))(0xC08FB68))();
    }
    return ((int (*)(void))(0xC08FB68))();
}

int FUN_0c033a42(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    int R6;
    int R7;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C033A5A;
    if ((v0_1 == 1)) goto L_C033A7A;
    if ((v0_1 != 2)) goto L_C033A56;
    return FUN_0c059330(v0_0, v0_2, R6, R7);
    L_C033A56:;
    L_C033B92:;
    return v0_1;
    L_C033A7A:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    R6 = (0x1);
    R7 = (0x2);
    w0_0 = (0.199999988f);
    if ((v0_3 == 0)) goto L_C033A90;
    if ((v0_1 == 1)) goto L_C033B1A;
    goto L_C033B92;
    L_C033B1A:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R6) == 0)) goto L_C033B2A;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    L_C033B32:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R7) == 0)) goto L_C033B42;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C033B48:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    w0_1 = (((struct o50_float *)(v0_0))->v);
    (((struct o50_float *)(v0_0))->v) = (w0_1 + 0.799999952f);
    (((struct o58_float *)(v0_0))->v) = (w0_1 + 0.799999952f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.099999994f);
    w0_1 = (((struct o5C_float *)(v0_0))->v);
    (((struct o5C_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    w0_0 = ((w0_1 - w0_0));
    FPUL_ = (0x3DCCCCCC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C033B92;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C033B92;
    L_C033B42:;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C033B48;
    L_C033B2A:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C033B32;
    L_C033A90:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 50.0f);
    FPUL_ = (0x42480000);
    if (((((((struct oEC_short *)(v0_0))->v)) & R6) == 0)) goto L_C033ADC;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    L_C033AE4:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R7) == 0)) goto L_C033AF4;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C033AFA:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C033B92;
    *(unsigned short *)((v0_0 + v0_1)) = 0x5;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C033B92;
    L_C033AF4:;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C033AFA;
    L_C033ADC:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C033AE4;
    L_C033A5A:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + 200.0f);
    (((struct oEC_ushort *)(v0_0))->v) = 0x8;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = v0_2;
    FPUL_ = (0x43480000);
    goto L_C033A7A;
}

int FUN_0c0b2ad4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
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
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - 1.0f);
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t0 = 0x274;
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
            FUN_0c042d68((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 1.0f, 100.0f);
            FUN_0c0a3ebc((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A6DC))));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return FUN_0c0a1e0a(a4, 0x22);
    }
    return 0xEC;
}

int FUN_0c106ef4(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        t1 = ADXSJD_GetDecNumSmpl((*(int *)((a4 + 0x4))));
        if (((((struct o64_int *)(a4))->v)) == t1) {
            (((struct o68_ushort *)(a4))->v) = (((((struct o68_short *)(a4))->v)) + 0x1);
            if ((int)((((struct o68_short *)(a4))->v)) > (int)(*(int *)((a4 + 0x38)))) {
                (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFE;
            }
        } else {
            (((struct o68_ushort *)(a4))->v) = 0x0;
        }
        (((struct o64_uint *)(a4))->v) = t1;
        if (((((struct o60_short *)(a4))->v)) != 0) {
            t1 = *(signed char *)((a4 + 0x6D));
            if ((t1 != 1) && (t1 != 2)) {
            } else {
                FUN_0c0f4c2c(a4);
            }
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                (((struct o60_ushort *)(a4))->v) = 0x0;
                (((struct o6A_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        (((struct o68_ushort *)(a4))->v) = 0x0;
    }
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x3)) {
        t1 = 0x0;
        if ((*(int *)((a4 + 0x14))) != 0) {
            t2 = *(int *)((a4 + 0x14));
            t1 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x24)))))(t2, 0x1, a6, a7));
        }
        if ((int)t1 < (int)0x40) {
            (((struct o6A_ushort *)(a4))->v) = (((((struct o6A_short *)(a4))->v)) + 0x1);
            if (t0 == 3) {
                if ((int)((((struct o6A_short *)(a4))->v)) <= (int)(*(int *)((a4 + 0x38)))) {
                } else {
                    (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFF;
                }
            } else {
                t0 = *(int *)((a4 + 0x38));
                if ((int)((((struct o6A_short *)(a4))->v)) > (int)((t0 << 2) + t0)) {
                    (((struct o60_ushort *)(a4))->v) = 0xFFFFFFFF;
                }
            }
            t0 = 0x60;
            if (((((struct o60_short *)(a4))->v)) != 0) {
                t1 = *(signed char *)((a4 + 0x6D));
                if (t1 == 1) {
                    FUN_0c0f4c2c(a4);
                } else {
                    if (t1 == 2) {
                        adxt_RcvrReplay();
                    }
                }
                t1 = 0x6D;
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    (((struct o60_ushort *)(a4))->v) = 0x0;
                    (((struct o6A_ushort *)(a4))->v) = 0x0;
                    t1 = 0x6A;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            (((struct o6A_ushort *)(a4))->v) = 0x0;
            t1 = 0x6A;
        }
        t0 = t1;
    } else {
        (((struct o6A_ushort *)(a4))->v) = 0x0;
        t0 = 0x6A;
    }
    t1 = t0;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t0 = FUN_0c10687c((*(int *)((a4 + 0x8))));
        t2 = t0;
        if (t0 == 4) {
            t0 = *(signed char *)((a4 + 0x6D));
            if (t0 == 1) {
                FUN_0c0f4c2c(a4);
            } else {
                if (t0 == 2) {
                    adxt_RcvrReplay();
                }
            }
            t0 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                (((struct o60_ushort *)(a4))->v) = 0x0;
                (((struct o6A_ushort *)(a4))->v) = 0x0;
                t0 = 0x6A;
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c10c0e0(Stk29 s)
{
    int stk[39];
    register int t10;
    register int t11;
    register int t12;
    int t36;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    stk[6] = s.w[4];
    stk[7] = s.w[5];
    stk[8] = s.w[6];
    stk[9] = s.w[7];
    stk[10] = s.w[8];
    stk[11] = s.w[9];
    stk[12] = s.w[10];
    stk[13] = s.w[11];
    stk[14] = s.w[12];
    stk[15] = s.w[13];
    stk[16] = s.w[14];
    stk[17] = s.w[15];
    stk[18] = s.w[16];
    stk[19] = s.w[17];
    stk[20] = s.w[18];
    stk[21] = s.w[19];
    stk[22] = s.w[20];
    stk[23] = s.w[21];
    stk[24] = s.w[22];
    stk[25] = s.w[23];
    stk[26] = s.w[24];
    stk[27] = s.w[25];
    stk[28] = s.w[26];
    stk[29] = s.w[27];
    stk[30] = s.w[28];
    (((struct o0_uint *)0xC81726C)->v) = ((((((struct o58_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o54_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o4_uint *)0xC81726C)->v) = ((((((struct o60_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o5C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o8_uint *)0xC81726C)->v) = (((((((struct o48_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) | (((((((struct o4C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1F) << 2) << 2)) | (((((((struct o50_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) << 8) << 1));
    (((struct o0_uint *)0xC817000)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    (((struct o4_uint *)0xC817000)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t12 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)((((struct o14_int *)0xC817000)->v)) > 0) {
        (((struct oC_uint *)0xC81726C)->v) = (((t11 & 0x3FF) | ((((t12 - ((((struct o14_int *)0xC817000)->v))) & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC81726C)->v) = (((t11 & 0x3FF) | (((t12 & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC8172B4)->v) = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    (((struct o4_uint *)0xC8172B4)->v) = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC81726C)->v) = (((((struct o44_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1FF);
    (((struct o18_uint *)0xC81726C)->v) = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    *(volatile int *)(((((int)stk + 4) + 0x8) + 0x28));
    *(volatile int *)(((((int)stk + 4) + 0x8) + 0x3C));
    *(volatile int *)(((((int)stk + 4) + 0x8) + 0x20));
    t36 = (((struct o40_int *)((((int)stk + 4) + 0x8)))->v);
    *(volatile signed char *)(((((int)stk + 4) + 0x8) + 0x70));
    return ((int (*)(int, int, int, int))(0xC10C234))((((int)stk + 4) + 0x8), 0x1, 0x1F, (((0x7 & t36) << 2) << 2));
}

int FUN_0c011c4a(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_5 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)0xC361BA0)->v));
    v0_9 = *(signed char *)0xC361BC0;
    v0_10 = (v0_9);
    v0_3 = (0xC361A60);
    v0_1 = (0xC361BA4);
    v0_4 = (0xC361BA8);
    v0_0 = (0xC361BC0);
    v0_8 = (0xC361BAC);
    v0_6 = (0xC361A60);
    v0_2 = (0x1);
    if ((v0_9 == 0)) goto L_C011C8C;
    if ((v0_10 == 1)) goto L_C011C9E;
    if ((v0_10 == 2)) goto L_C011D2C;
    if ((v0_10 == 3)) goto L_C011D64;
    if ((v0_10 != 4)) goto L_C011C88;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    L_C011DC2:;
    return 0xFFFFFFFF;
    L_C011C88:;
    goto L_C011DC2;
    L_C011D64:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    v0_3 = *(int *)((v0_4 + 0x0));
    v0_8 = (v0_3);
    if ((v0_3 != (*(int *)(((int)stk + 0))))) goto L_C011D8E;
    v0_3 = (FUN_0c011c2e((*(int *)((((short)((((v0_8 << 2) + v0_8) << 2) << 1) + v0_6) + 0x0))), v0_5)) != 0;
    if (v0_3) goto L_C011DC2;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C011D8E:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011DC2;
    L_C011D2C:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_6);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_6) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C011DC2;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C011D5E:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011DC2;
    L_C011C9E:;
    if (((*(int *)((v0_4 + 0x0))) == (*(int *)((v0_8 + 0x0))))) goto L_C011D5E;
    if (((*(int *)((v0_4 + 0x0))) == -1)) goto L_C011CEA;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C011CB6;
    goto L_C011DC2;
    L_C011CB6:;
    v0_1 = *(int *)((v0_4 + 0x0));
    v0_1 = (buUnmount((*(int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x0))))) != 0;
    if (v0_1) goto L_C011DC2;
    v0_1 = *(int *)((v0_4 + 0x0));
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)((v0_4 + 0x0)) = 0xFFFFFFFF;
    L_C011CEA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011DC2;
    L_C011C8C:;
    (((struct o0_uint *)0xC361BA0)->v) = v0_2;
    *(unsigned int *)((v0_8 + 0x0)) = v0_7;
    FUN_0c0101a8();
    FUN_0c0101f0((*(int *)((v0_8 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C011C9E;
}

int FUN_0c0cecac(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R9;
    int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    R5 = a5;
    v0_4 = *(signed char *)0xC7F2EE7;
    v0_2 = ((unsigned char)v0_4);
    v0_1 = (0x0);
    v0_0 = (0xC7F2EE0);
    v0_3 = (0xC7F2EE7);
    if (((unsigned char)v0_4 == 0)) goto L_C0CECFC;
    if ((v0_2 == 1)) goto L_C0CED0A;
    FUN_0c0cec2e();
    *(unsigned char *)((v0_0 + 0x5)) = 0x1;
    *(unsigned char *)((v0_0 + 0x7)) = v0_1;
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_1;
    v0_2 = (v0_1);
    L_C0CEDEC:;
    return v0_2;
    L_C0CED0A:;
    FUN_0c0ce88c(0xC33F1CC, 0x2);
    v0_3 = *(signed char *)((v0_0 + 0x28));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_3;
    v0_2 = (0x4);
    v0_3 = (((((unsigned char)v0_3 == 1)) ? 1 : 0));
    if (((*(int *)(((int)stk + 0))) == 1)) goto L_C0CED2A;
    R5 = (0xC33F204);
    L_C0CED2C:;
    FUN_0c0cea90(0xD, R5, v0_2, v0_3);
    v0_3 = *(signed char *)((v0_0 + 0x28));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_3;
    v0_2 = (0x4);
    v0_3 = (((((unsigned char)v0_3 == 1)) ? 1 : 0));
    if (((*(int *)(((int)stk + 0))) == 1)) goto L_C0CED4A;
    R5 = (0xC33F204);
    L_C0CED4C:;
    FUN_0c0ce99a(0xD, R5, v0_2, v0_3);
    v0_4 = *(signed char *)((v0_0 + 0x8));
    v0_2 = ((unsigned char)v0_4);
    v0_3 = (0xC49491C);
    R11 = (0x4);
    v0_5 = (0xC33F1CC);
    if (((unsigned char)v0_4 == 11)) goto L_C0CED74;
    if ((v0_2 == 12)) goto L_C0CEDBA;
    FUN_0c0ce88c((v0_5 + 0x10), 0x2);
    v0_0 = *(signed char *)((v0_3 + 0x9));
    v0_2 = (v0_0);
    if ((v0_0 != 1)) goto L_C0CEDEC;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    goto L_C0CEDEC;
    L_C0CEDBA:;
    FUN_0c0ce88c((v0_5 + 0x28), 0x2);
    v0_3 = *(short *)0xC361BFC;
    v0_2 = ((unsigned short)v0_3);
    if ((((unsigned short)v0_3 & R11) == 0)) goto L_C0CEDEC;
    *(unsigned char *)((v0_0 + 0x7)) = ((*(signed char *)((v0_0 + 0x7))) + 0x1);
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    v0_2 = (v0_1);
    goto L_C0CEDEC;
    L_C0CED74:;
    FUN_0c0ce88c((v0_5 + 0x20), 0x1);
    v0_1 = *(short *)0xC361BFC;
    v0_2 = (v0_1);
    v0_3 = (0xC361BF0);
    R5 = ((unsigned short)v0_1);
    if ((((unsigned short)v0_1 & R11) == 0)) goto L_C0CED90;
    v0_1 = *(short *)((v0_3 + 0x8));
    v0_2 = ((unsigned short)v0_1);
    if ((((unsigned short)v0_1 & 2) != 0)) goto L_C0CED9E;
    L_C0CED90:;
    if (((0x2 & R5) == 0)) goto L_C0CEDEC;
    v0_1 = *(short *)((v0_3 + 0x8));
    v0_2 = ((unsigned short)v0_1);
    if ((((unsigned short)v0_1 & R11) == 0)) goto L_C0CEDEC;
    L_C0CED9E:;
    *(volatile signed char *)((v0_0 + 0x28));
    v0_2 = ((FUN_0c0e7140(v0_3)));
    goto L_C0CEDEC;
    L_C0CED4A:;
    R5 = (0xC33F33C);
    goto L_C0CED4C;
    L_C0CED2A:;
    R5 = (0xC33F33C);
    goto L_C0CED2C;
    L_C0CECFC:;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    FUN_0c0cebe6();
    goto L_C0CED0A;
}

int FUN_0c1158e6(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned short *)((a7 + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x30;
    if ((int)a5 >= (int)0x30) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned int *)(((int)stk + 0)) = (unsigned short)t0;
        t1 = *(int *)(((int)stk + 0));
        *(unsigned short *)(((int)stk + 0)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00)) == 0x8000) {
            t2 = *(short *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 0)) = t2;
            t3 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00));
            if ((int)((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00)) < (int)0x2C) {
                return 0xFFFFFFFF;
            }
            t4 = *(short *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 0)) = t4;
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)t4 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFF00));
            t6 = *(short *)((a4 + 0x16));
            *(unsigned int *)(((int)stk + 0)) = t6;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned char)((int)t6 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFFFFFF00));
            if ((*(short *)((a7 + 0x0))) != 1) {
                return 0xFFFFFFFE;
            }
            t9 = *(short *)((a4 + 0x1A));
            *(unsigned short *)((a8 + 0x0)) = ((unsigned char)((int)t9 >> 8) | ((t9 << 8) & 0xFFFFFF00));
            t10 = *(int *)((a4 + 0x1C));
            *(unsigned int *)((a9 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t10 >> 16) >> 8) | (((int)t10 >> 8) & 0xFF00)) | ((t10 << 8) & 0xFF0000)) | ((t10 << 16) << 8));
            t11 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a10 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t11 >> 16) >> 8) | (((int)t11 >> 8) & 0xFF00)) | ((t11 << 8) & 0xFF0000)) | ((t11 << 16) << 8));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t12 >> 16) >> 8) | (((int)t12 >> 8) & 0xFF00)) | ((t12 << 8) & 0xFF0000)) | ((t12 << 16) << 8));
            t13 = *(int *)((a4 + 0x28));
            return ((int (*)(int, int, int, int))(0xC115A38))(a4, 0xFF00, 0xFF0000, t13);
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c01c59a(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((v0_3 == 0)) goto L_C01C5AE;
    if ((v0_1 == 1)) goto L_C01C5E8;
    return FUN_0c059330(v0_0, R5, R6, v0_2);
    L_C01C5E8:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    R5 = (0xC362360);
    R6 = (0xC362361);
    if ((v0_3 == 0)) goto L_C01C604;
    if ((v0_1 == 1)) goto L_C01C610;
    if ((v0_1 == 2)) goto L_C01C680;
    if (!((v0_1 == 3))) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + -0.0249999985f);
    w0_3 = (((struct o5C_float *)(v0_0))->v);
    v0_1 = (0x5C);
    w0_2 = (w0_3);
    FPUL_ = (0xBCCCCCCC);
    if ((!(0.0f > w0_3))) goto L_C01C6AE;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C01C6AE;
    L_C01C6E6:;
    return v0_1;
    L_C01C6AE:;
    w0_2 = (((struct oC_float *)(R5))->v);
    (((struct oC_float *)(R5))->v) = (w0_2 + 0.0333333313f);
    v0_1 = (0xC);
    FPUL_ = (0x3D088888);
    if ((!((w0_2 + 0.0333333313f) > w0_1))) goto L_C01C6C2;
    *(float *)((R5 + v0_1)) = w0_1;
    L_C01C6C2:;
    v0_3 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_1 = (0xEC);
    if (((int)(short)(v0_3 - 1) >= 0)) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct oC_float *)(R5))->v) = w0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_2;
    v0_1 = (v0_2);
    goto L_C01C6E6;
    L_C01C680:;
    v0_2 = *(signed char *)((R6 + 0x0));
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 5)) goto L_C01C6E6;
    L_C01C688:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    L_C01C68E:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C01C6E6;
    L_C01C610:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) + 0.0249999985f);
    v0_1 = (0x5C);
    w0_1 = (0.75f);
    FPUL_ = (0x3CCCCCCC);
    if ((!(((((struct o5C_float *)(v0_0))->v)) > 0.75f))) goto L_C01C62C;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C01C62C:;
    (((struct oC_float *)(R5))->v) = (((((struct oC_float *)(R5))->v)) + -0.0333333313f);
    w0_3 = (((struct oC_float *)(R5))->v);
    v0_1 = (0xC);
    w0_2 = (w0_3);
    FPUL_ = (0xBD088888);
    if ((!(0.0f > w0_3))) goto L_C01C644;
    *(float *)((R5 + v0_1)) = w0_0;
    L_C01C644:;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((int)(short)(v0_2 - 1) >= 0)) goto L_C01C6E6;
    (((struct o5C_float *)(v0_0))->v) = w0_1;
    (((struct oC_float *)(R5))->v) = w0_0;
    goto L_C01C68E;
    L_C01C604:;
    v0_2 = *(signed char *)((R6 + 0x0));
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 5)) goto L_C01C688;
    goto L_C01C6E6;
    L_C01C5AE:;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = -100.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = v0_2;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    (((struct o54_float *)(v0_0))->v) = 2.0f;
    (((struct o50_float *)(v0_0))->v) = 2.0f;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    (((struct o68_float *)(v0_0))->v) = w0_0;
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o60_float *)(v0_0))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C01C5E8;
}

int FUN_0c0419a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t2 == 0) {
        return t2;
    }
    *(unsigned char *)((t2 + 0x0)) = 0x1;
    *(unsigned char *)((t2 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((t2 + 0x1)) = 0x1;
    *(unsigned char *)((t2 + 0x5)) = 0x19;
    *(unsigned int *)((t2 + 0x10)) = 0xC041DC8;
    *(unsigned char *)((t2 + 0x4)) = a5;
    *(unsigned int *)((t2 + 0x1C)) = a4;
    t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, 0x1);
    t3 = ((int (*)(int))(FUN_0c0e6fe8))(0xC149BD4);
    t3 = ((int (*)(void))(FUN_0c0e6fe8))();
    (((struct o5C_float *)(t2))->v) = 1.0f;
    t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
    t0 = (((struct o2E0_int *)(t2))->v);
    *(unsigned char *)((t0 + 0x0)) = t1;
    *(unsigned short *)((t0 + 0x2)) = 0xF;
    t1 = *(signed char *)(((0x3 + t2) + 0x0));
    FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), (*(signed char *)(((signed char)a5 + 0xC3217C8))));
    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 != 2) {
                if ((signed char)a5 != 3) {
                    return (signed char)a5;
                }
                return ((int (*)(int, int, int, int))(0xC041B20))(0x41F, 0x0, a6, a7);
            }
            *(unsigned short *)((t2 + 0x6)) = 0x21F;
            (((struct o118_uint *)(t2))->v) = 0x0;
            t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x41F, 0x0);
            u0 = ((((struct o20_float *)(t2))->v));
            u0 = u0 + 300.0f * (FUN_0c0dfa50((*(int *)((a4 + 0x30)))));
            (((struct o20_float *)(t2))->v) = u0;
            u0 = ((((struct o28_float *)(t2))->v));
            u0 = u0 + 300.0f * (FUN_0c0df4d0((*(int *)((a4 + 0x30)))));
            (((struct o28_float *)(t2))->v) = u0;
            return 0xC041B18;
        }
        *(unsigned short *)((t2 + 0x6)) = 0x41F;
        (((struct o118_uint *)(t2))->v) = (0xF60 + a4);
        *(unsigned int *)((t2 + 0x2C)) = 0xFFFFD556;
        return 0x118;
    }
    *(unsigned short *)((t2 + 0x6)) = 0x41F;
    (((struct o118_uint *)(t2))->v) = (0x47C0 + a4);
    return ((int (*)(int, int, int, int))(0xC041B2E))(0x41F, 0x0, a6, a7);
}

int FUN_0c0c19fa(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, 0x0, a6, a7);
        }
        if (1.0f > ((((struct o58_float *)(a4))->v))) {
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
        }
        u0 = (((struct o58_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        if ((int)(short)(t2 - 1) < 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x4;
            t2 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) > (int)0x7) {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
            }
            t2 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xEE))) + 0x1));
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x3F;
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
        }
        t2 = *(int *)((a4 + 0x1C));
        if (((*(signed char *)((t2 + 0x7223))) != 0) && (t0 = *(signed char *)((t2 + 0xA)), (int)t0 <= (int)0x1)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x4;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    if (1.0f > ((((struct o58_float *)(a4))->v))) {
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o58_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
    (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oEE_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xEE))) + 0x1));
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x3F;
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
    }
    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x7223))) != 0) && (t1 = *(signed char *)((t0 + 0xA)), (int)t1 <= (int)0x1)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c011ae0(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_0 = a5;
    v0_0 = a6;
    v0_4 = (((struct oC_int *)0xC361BA0)->v);
    *(unsigned int *)(((int)stk + 0)) = 0xC361A60;
    v0_8 = *(signed char *)0xC361BC0;
    v0_9 = (v0_8);
    v0_1 = (0xC361A60);
    v0_3 = (0xC361BA8);
    v0_0 = (0xC361BC0);
    v0_2 = (0xC361BA4);
    v0_6 = (0xC361BAC);
    v0_7 = (v0_4);
    v0_4 = (0x1);
    if ((v0_8 == 0)) goto L_C011B1C;
    if ((v0_9 == 1)) goto L_C011B2E;
    if ((v0_9 == 2)) goto L_C011B7C;
    if ((v0_9 == 3)) goto L_C011BB6;
    if ((v0_9 == 4)) goto L_C011BE6;
    L_C011C18:;
    v0_9 = (0xFFFFFFFF);
    L_C011C1A:;
    return v0_9;
    L_C011BE6:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    FUN_0c011a70();
    FUN_0c010160();
    FUN_0c0101f0((*(int *)((v0_6 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    (((struct o0_uint *)0xC361BA0)->v) = 0x0;
    v0_0 = *(int *)((v0_6 + 0x0));
    v0_9 = ((*(int *)((((short)((((v0_0 << 2) + v0_0) << 2) << 1) + v0_1) + 0x8))));
    goto L_C011C1A;
    L_C011BB6:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_1 = *(int *)((v0_3 + 0x0));
    v0_6 = (v0_1);
    if ((v0_1 != v0_7)) goto L_C011BE0;
    v0_1 = (FUN_0c011aa6((*(int *)((((short)((((v0_6 << 2) + v0_6) << 2) << 1) + (*(int *)(((int)stk + 0)))) + 0x0))))) != 0;
    if (v0_1) goto L_C011C18;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_C011BE0:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011C18;
    L_C011B7C:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_1 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_7 << 2) + v0_7) << 2) << 1) + v0_1);
    v0_1 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_7 << 2) + v0_7) << 2) << 1) + v0_1) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_1) goto L_C011C18;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_C011BB0:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011C18;
    L_C011B2E:;
    if (((*(int *)((v0_3 + 0x0))) == (*(int *)((v0_6 + 0x0))))) goto L_C011BB0;
    if (((*(int *)((v0_3 + 0x0))) == -1)) goto L_C011B76;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_2 = *(int *)((v0_3 + 0x0));
    v0_2 = (buUnmount((*(int *)((((short)((((v0_2 << 2) + v0_2) << 2) << 1) + v0_1) + 0x0))))) != 0;
    if (v0_2) goto L_C011C18;
    v0_2 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((((short)((((v0_2 << 2) + v0_2) << 2) << 1) + v0_1) + 0x4)) = 0x12;
    *(unsigned int *)((v0_3 + 0x0)) = 0xFFFFFFFF;
    L_C011B76:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011C18;
    L_C011B1C:;
    (((struct o0_uint *)0xC361BA0)->v) = v0_4;
    *(unsigned int *)((v0_6 + 0x0)) = v0_5;
    FUN_0c0101a8();
    FUN_0c0101f0((*(int *)((v0_6 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_4;
    goto L_C011B2E;
}

int FUN_0c0aac9c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -30.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        t0 = *(signed char *)((a4 + 0x3));
        (((struct o38_float *)(a4))->v) = (*(float *)((0xC152878 + (signed char)(((t0 << 1) + t0) << 2))));
        (((struct o3C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0))));
        FUN_0c0aaa38(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t1 = t0;
    } else {
        u0 = (((struct o0_float *)0xC0AAE9C)->v);
        if ((*(signed char *)((a4 + 0x3))) == 0) {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + u0);
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))) > ((((struct o38_float *)(a4))->v))) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        } else {
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - u0);
            t0 = *(signed char *)((a4 + 0x3));
            if (!(((((struct o38_float *)(a4))->v)) > (*(float *)((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)))))) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                t0 = *(signed char *)((a4 + 0x3));
                (((struct o38_float *)(a4))->v) = (*(float *)(((0xC152860 + (signed char)(((t0 << 1) + t0) << 2)) + 0x0)));
            }
        }
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / ((((struct o8_float *)0xC0AAE9C)->v)));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / ((((struct oC_float *)0xC0AAE9C)->v)));
        t1 = 0x24;
    }
    return t1;
}
