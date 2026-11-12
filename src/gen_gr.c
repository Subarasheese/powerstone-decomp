/* Straight-line functions with calls and guards (batch gen_gr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c03d254(int, int);
int FUN_0c03d60c(int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c09c894(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0c58da(int);
int FUN_0c0c5906(int, int);
int FUN_0c0df400(float, float);
float FUN_0c0df4d0(int);
float FUN_0c0df870(float, float);
float FUN_0c0dfa50(int);
extern int FUN_0c0e6fe8();
extern int FUN_0c0f7e80();
extern float _builtin_sqrtf(float);
int thunk_FUN_0c062242(int);
float FUN_0c0c5920(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f8180(int a4);
int FUN_0c03a918(int a4, int a5, int a6);

float FUN_0c0c5920(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    v0_8 = a5;
    v0_9 = a6;
    v0_10 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_11 = *(signed char *)((v0_7 + 0x8));
    v0_6 = (v0_11);
    v0_0 = (0xC0DF870);
    v0_5 = (0x0);
    v0_3 = ((*(int *)((v0_7 + 0x1C))));
    v0_0 = ((0x308 + v0_7));
    v0_1 = (v0_7);
    v0_2 = (0xC7E40C4);
    v0_4 = (0xFFFFC000);
    if ((v0_11 == 0)) goto L_C0C598C;
    if ((v0_6 != 1)) goto L_C0C5954;
    L_C0C5A52:;
    if (((*(signed char *)((0x300 + ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x14A0) + (0x1E80 + v0_3))))) != 1)) goto L_C0C5A82;
    *(unsigned char *)((v0_0 + 0x0)) = v0_5;
    *(unsigned char *)((v0_1 + 0x1)) = v0_5;
    *(unsigned char *)((v0_1 + 0x8)) = 0x2;
    *(unsigned char *)((v0_1 + 0xA)) = v0_5;
    *(unsigned char *)((v0_1 + 0x9)) = v0_5;
    v0_6 = (v0_5);
    L_C0C6058:;
    return F0;
    L_C0C5A82:;
    v0_7 = *(signed char *)((v0_1 + 0x9));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0C5AD4;
    if ((v0_6 == 1)) goto L_C0C5B52;
    if ((v0_6 != 2)) goto L_C0C5A94;
    v0_7 = *(signed char *)((v0_1 + 0xA));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0C5BCC;
    if (!((v0_6 != 1))) goto L_C0C5D1A;
    goto L_C0C5FAC;
    L_C0C5D1A:;
    v0_4 = (((struct oEC_short *)(v0_1))->v);
    (((struct oEC_ushort *)(v0_1))->v) = (v0_4 - 1);
    if (((short)(v0_4 - 1) != 0)) goto L_C0C5D68;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2);
    v0_7 = ((((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + 0x580));
    v0_8 = ((v0_1 + 0x20));
    L_C0C5D52:;
    thunk_FUN_0c062242(v0_7);
    *(unsigned char *)((v0_0 + 0x0)) = v0_5;
    *(unsigned char *)((v0_1 + 0x8)) = 0x2;
    *(unsigned char *)((v0_1 + 0xA)) = v0_5;
    v0_6 = (v0_5);
    L_C0C5D64:;
    *(unsigned char *)((v0_1 + 0x9)) = v0_6;
    L_C0C5FAC:;
    v0_3 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_3 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + 0x580));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o20_float *)(v0_1))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o24_float *)(v0_1))->v)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_1))->v)));
    w0_0 = FUN_0c0df870((*(float *)(((int)stk + 4))), 2.0f);
    (((struct o4_float *)(v0_0))->v) = _builtin_sqrtf((w0_0 + (FUN_0c0df870((*(float *)(((int)stk + 12))), 2.0f))));
    w0_1 = FUN_0c0df870((*(float *)(((int)stk + 8))), 2.0f);
    w0_0 = FUN_0c0df870(((((struct o4_float *)(v0_0))->v)), 2.0f);
    (((struct o4_float *)(v0_0))->v) = _builtin_sqrtf((w0_1 + w0_0));
    v0_6 = (0x4);
    F0 = (w0_0);
    goto L_C0C6058;
    L_C0C5D68:;
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + ((((struct o38_float *)(v0_1))->v)));
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + ((((struct o3C_float *)(v0_1))->v)));
    (((struct o28_float *)(v0_1))->v) = (((((struct o28_float *)(v0_1))->v)) + ((((struct o40_float *)(v0_1))->v)));
    goto L_C0C5FAC;
    L_C0C5BCC:;
    *(unsigned int *)((((((struct o2E0_int *)(v0_1))->v)) + 0x10)) = v0_4;
    *(unsigned int *)((((((struct o2E4_int *)(v0_1))->v)) + 0x10)) = v0_4;
    v0_6 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + v0_2);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_6 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + 0x580));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o20_float *)(v0_1))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o24_float *)(v0_1))->v)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_1))->v)));
    w0_0 = FUN_0c0df870((*(float *)(((int)stk + 4))), 2.0f);
    (((struct o4_float *)(v0_0))->v) = _builtin_sqrtf((w0_0 + (FUN_0c0df870((*(float *)(((int)stk + 12))), 2.0f))));
    w0_0 = FUN_0c0df870((*(float *)(((int)stk + 8))), 2.0f);
    (((struct o4_float *)(v0_0))->v) = _builtin_sqrtf((w0_0 + (FUN_0c0df870(((((struct o4_float *)(v0_0))->v)), 2.0f))));
    *(unsigned int *)((v0_1 + 0x30)) = ((-(FUN_0c0df400((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 4)))))) + v0_4);
    w0_0 = (((struct o4_float *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_1))->v) = (int)(w0_0 / 40.0f);
    v0_6 = (0xEC);
    FPUL_ = ((int)(w0_0 / 40.0f));
    if (((short)(int)(w0_0 / 40.0f) != 0)) goto L_C0C5CE0;
    v0_4 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2);
    v0_7 = ((((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_4 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)) + 0x580));
    v0_8 = ((v0_1 + 0x20));
    goto L_C0C5D52;
    L_C0C5CE0:;
    (((struct o38_float *)(v0_1))->v) = ((*(float *)(((int)stk + 4))) / (float)(*(short *)((v0_1 + v0_6))));
    (((struct o3C_float *)(v0_1))->v) = ((*(float *)(((int)stk + 8))) / (float)((((struct oEC_short *)(v0_1))->v)));
    v0_4 = (((struct oEC_short *)(v0_1))->v);
    (((struct o40_float *)(v0_1))->v) = ((*(float *)(((int)stk + 12))) / (float)v0_4);
    *(unsigned char *)((v0_1 + 0xA)) = ((*(signed char *)((v0_1 + 0xA))) + 0x1);
    FPUL_ = (v0_4);
    goto L_C0C5D1A;
    L_C0C5A94:;
    if ((v0_6 != 3)) goto L_C0C5A9C;
    if (!(((*(signed char *)((v0_0 + 0x0))) != 9))) goto L_C0C5FA6;
    v0_7 = *(signed char *)((v0_1 + 0xA));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0C5DC0;
    if ((v0_6 != 1)) goto L_C0C5DAC;
    goto L_C0C5EDC;
    L_C0C5FA6:;
    FUN_0c0c5906(v0_1, v0_0);
    goto L_C0C5FAC;
    L_C0C5EDC:;
    v0_5 = (((struct oEE_short *)(v0_1))->v);
    (((struct oEE_ushort *)(v0_1))->v) = (v0_5 - 1);
    if (((short)(v0_5 - 1) != 0)) goto L_C0C5F5E;
    v0_5 = *(signed char *)((v0_1 + 0x4));
    FUN_0c0a1d88(v0_1, (((*(signed char *)(((0xF0 + v0_1) + 0x0))) + ((v0_5 << 1) + v0_5)) + 0x78));
    (((struct oEE_ushort *)(v0_1))->v) = 0xF;
    (((struct oF0_ushort *)(v0_1))->v) = (((((struct oF0_short *)(v0_1))->v)) + 0x1);
    if (((int)((((struct oF0_short *)(v0_1))->v)) < (int)0x3)) goto L_C0C5F5E;
    *(unsigned char *)((v0_1 + 0xA)) = ((*(signed char *)((v0_1 + 0xA))) + 0x1);
    L_C0C5F5E:;
    v0_5 = (((struct oF2_short *)(v0_1))->v);
    v0_7 = (v0_5);
    if (((int)v0_5 <= (int)0x7)) goto L_C0C5F6E;
    v0_7 = ((0xF - v0_7));
    L_C0C5F6E:;
    *(unsigned int *)((((((struct o2E0_int *)(v0_1))->v)) + 0x10)) = ((-(v0_7 * 0x888)) + v0_4);
    *(unsigned int *)((((((struct o2E4_int *)(v0_1))->v)) + 0x10)) = ((v0_7 * 0x888) + v0_4);
    v0_4 = (((struct oF2_short *)(v0_1))->v);
    (((struct oF2_ushort *)(v0_1))->v) = (v0_4 - 1);
    v0_6 = (0xF2);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C0C5F98;
    *(unsigned short *)((v0_1 + v0_6)) = 0xE;
    L_C0C5F98:;
    v0_4 = (((struct oEC_short *)(v0_1))->v);
    (((struct oEC_ushort *)(v0_1))->v) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) > 0)) goto L_C0C5FAC;
    goto L_C0C5FA6;
    L_C0C5DAC:;
    v0_5 = (signed char)(FUN_0c09c894(v0_1)) == 0;
    if (v0_5) goto L_C0C5F5E;
    FUN_0c0c5906(v0_1, v0_0);
    goto L_C0C5F5E;
    L_C0C5DC0:;
    (((struct o108_uchar *)(v0_1))->v) = v0_5;
    (((struct oEC_ushort *)(v0_1))->v) = 0x3C;
    (((struct oEE_ushort *)(v0_1))->v) = 0xF;
    (((struct oF0_ushort *)(v0_1))->v) = 0x1;
    (((struct oF2_ushort *)(v0_1))->v) = v0_5;
    (((struct o58_float *)(v0_1))->v) = 4.0f;
    (((struct o54_float *)(v0_1))->v) = 4.0f;
    (((struct o50_float *)(v0_1))->v) = 4.0f;
    v0_5 = *(int *)(((0x2E0 + v0_1) + 0x8));
    v0_6 = (((struct o2E0_int *)(v0_1))->v);
    v0_7 = *(int *)(((0x2E0 + v0_1) + 0x4));
    (((struct o24_float *)(v0_5))->v) = 0.5f;
    (((struct o20_float *)(v0_5))->v) = 0.5f;
    (((struct o1C_float *)(v0_5))->v) = 0.5f;
    (((struct o24_float *)(v0_7))->v) = 0.5f;
    (((struct o20_float *)(v0_7))->v) = 0.5f;
    (((struct o1C_float *)(v0_7))->v) = 0.5f;
    (((struct o24_float *)(v0_6))->v) = 0.5f;
    (((struct o20_float *)(v0_6))->v) = 0.5f;
    (((struct o1C_float *)(v0_6))->v) = 0.5f;
    v0_7 = (v0_7);
    if (((*(signed char *)(((*(int *)((v0_3 + 0x1C))) + 0x4))) == 10)) goto L_C0C5ED6;
    v0_5 = *(signed char *)(((*(int *)((v0_3 + 0x1C))) + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + v0_2);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + v0_2) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_5 * (unsigned short)0x72D0) + v0_2) + 0x71F1))) * (short)0xDC0)));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (((FUN_0c0dfa50((*(int *)((v0_1 + 0x30))))) * 60.0f)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (((FUN_0c0df4d0((*(int *)((v0_1 + 0x30))))) * 60.0f)));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o20_float *)(v0_1))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o24_float *)(v0_1))->v)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_1))->v)));
    v0_5 = *(int *)((v0_3 + 0x1C));
    (((struct o20_float *)(v0_5))->v) = (((((struct o20_float *)(v0_5))->v)) - ((((struct o4_float *)(((int)stk + 0)))->v)));
    v0_5 = *(int *)((v0_3 + 0x1C));
    (((struct o24_float *)(v0_5))->v) = (((((struct o24_float *)(v0_5))->v)) - ((((struct o8_float *)(((int)stk + 0)))->v)));
    v0_5 = *(int *)((v0_3 + 0x1C));
    (((struct o28_float *)(v0_5))->v) = (((((struct o28_float *)(v0_5))->v)) - ((((struct oC_float *)(((int)stk + 0)))->v)));
    L_C0C5ED6:;
    *(unsigned char *)((v0_1 + 0xA)) = ((*(signed char *)((v0_1 + 0xA))) + 0x1);
    goto L_C0C5EDC;
    L_C0C5A9C:;
    goto L_C0C5FAC;
    L_C0C5B52:;
    if (((*(signed char *)((v0_0 + 0x0))) != 9)) goto L_C0C5B5C;
    goto L_C0C5FA6;
    L_C0C5B5C:;
    v0_4 = *(signed char *)((v0_1 + 0xA));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C0C5B6A;
    if ((v0_6 == 1)) goto L_C0C5B76;
    goto L_C0C5FAC;
    L_C0C5B76:;
    v0_4 = (((struct o2E0_int *)(v0_1))->v);
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) + 0x1000);
    v0_4 = (((struct o2E4_int *)(v0_1))->v);
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - 4096);
    v0_4 = (((struct oEC_short *)(v0_1))->v);
    (((struct oEC_ushort *)(v0_1))->v) = (v0_4 - 1);
    if (((short)(v0_4 - 1) == 0)) goto L_C0C5BA0;
    goto L_C0C5FAC;
    L_C0C5BA0:;
    *(unsigned char *)((v0_1 + 0xA)) = ((*(signed char *)((v0_1 + 0xA))) + 0x1);
    goto L_C0C5FAC;
    L_C0C5B6A:;
    (((struct oEC_ushort *)(v0_1))->v) = 0x4;
    *(unsigned char *)((v0_1 + 0xA)) = ((*(signed char *)((v0_1 + 0xA))) + 0x1);
    goto L_C0C5B76;
    L_C0C5AD4:;
    if (((*(signed char *)((v0_1 + 0x108))) == 0)) goto L_C0C5AF0;
    v0_4 = (signed char)(FUN_0c09c894(v0_1)) == 0;
    if (v0_4) goto L_C0C5AEC;
    v0_6 = (0x3);
    goto L_C0C5D64;
    L_C0C5AEC:;
    (((struct o108_uchar *)(v0_1))->v) = v0_5;
    L_C0C5AF0:;
    if (((*(signed char *)((v0_1 + 0x2D8))) != 0)) goto L_C0C5B00;
    v0_4 = (FUN_0c0c58da(v0_1)) == 0;
    if (!(v0_4)) goto L_C0C5B00;
    if ((((((struct oEC_short *)(v0_1))->v)) != 0)) goto L_C0C5B1E;
    goto L_C0C5FA6;
    L_C0C5B00:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    *(unsigned char *)(((0x105 + v0_1) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + v0_1) + 0x1)) = 0x1;
    (((struct o105_uchar *)(v0_1))->v) = 0x1;
    v0_6 = (0x1);
    goto L_C0C5D64;
    L_C0C5B1E:;
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + ((((struct o38_float *)(v0_1))->v)));
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + ((((struct o3C_float *)(v0_1))->v)));
    (((struct o28_float *)(v0_1))->v) = (((((struct o28_float *)(v0_1))->v)) + ((((struct o40_float *)(v0_1))->v)));
    (((struct oEC_ushort *)(v0_1))->v) = (((((struct oEC_short *)(v0_1))->v)) - 1);
    goto L_C0C5FAC;
    L_C0C5954:;
    if ((v0_6 != 2)) goto L_C0C595C;
    *(unsigned char *)((v0_0 + 0x0)) = v0_5;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    *(unsigned char *)((v0_1 + 0x1)) = v0_5;
    v0_6 = (v0_5);
    goto L_C0C6058;
    L_C0C595C:;
    if ((v0_6 != 3)) goto L_C0C5964;
    v0_6 = ((FUN_0c059330(v0_1, v0_8, v0_9, v0_10)));
    goto L_C0C6058;
    L_C0C5964:;
    goto L_C0C6058;
    L_C0C598C:;
    (((struct oEC_ushort *)(v0_1))->v) = 0x21;
    (((struct o3C_float *)(v0_1))->v) = 0.0f;
    (((struct o38_float *)(v0_1))->v) = ((FUN_0c0df4d0(((-(*(int *)((v0_1 + 0x30)))) + 0x14000))) * 30.0f);
    (((struct o40_float *)(v0_1))->v) = ((FUN_0c0dfa50(((-(*(int *)((v0_1 + 0x30)))) + 0x14000))) * 30.0f);
    (((struct o58_float *)(v0_1))->v) = 2.0f;
    (((struct o54_float *)(v0_1))->v) = 2.0f;
    (((struct o50_float *)(v0_1))->v) = 2.0f;
    *(unsigned int *)((((((struct o2E0_int *)(v0_1))->v)) + 0x10)) = v0_4;
    *(unsigned int *)((((((struct o2E4_int *)(v0_1))->v)) + 0x10)) = v0_4;
    *(unsigned int *)((((((struct o2E0_int *)(v0_1))->v)) + 0x18)) = 0x4000;
    *(unsigned int *)((((((struct o2E4_int *)(v0_1))->v)) + 0x18)) = 0x4000;
    *(unsigned int *)((((((struct o2E8_int *)(v0_1))->v)) + 0x18)) = 0x4000;
    v0_6 = (((struct o2E8_int *)(v0_1))->v);
    (((struct o4_float *)(v0_6))->v) = (((((struct o4_float *)(v0_6))->v)) + -10.0f);
    v0_6 = (((struct o2E8_int *)(v0_1))->v);
    (((struct oC_float *)(v0_6))->v) = (((((struct oC_float *)(v0_6))->v)) + -5.0f);
    v0_6 = (((struct o2E0_int *)(v0_1))->v);
    *(unsigned int *)((v0_6 + 0x10)) = ((*(int *)((v0_6 + 0x10))) + v0_4);
    v0_6 = (((struct o2E4_int *)(v0_1))->v);
    *(unsigned int *)((v0_6 + 0x10)) = ((*(int *)((v0_6 + 0x10))) + 0x4000);
    FUN_0c03d254(v0_1, 0x1);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    L_C0C5A44:;
    if (((int)(*(int *)(((int)stk + 0))) < (int)0xA)) goto L_C0C5A36;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    goto L_C0C5A52;
    L_C0C5A36:;
    FUN_0c03d60c(v0_1, (*(int *)(((int)stk + 0))));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    goto L_C0C5A44;
}

int FUN_0c0f8180(int a4)
{
    int stk[8];
    register int t1;
    register int t3;
    int t8;
    register int t73;
    register int t91;
    register int t77;
    register int t86;
    register int t101;
    int t109;
    register int t113;
    register int t112;
    register int t125;
    register int t135;
    int t145;
    int t150;
    int t157;
    register int t163;
    register int t161;
    int t174;
    int t181;
    register int t178;
    register int t179;
    register int t186;
    register int t185;
    register int t199;
    register int t212;
    register int t213;
    int t214;
    register int t217;
    register int t215;
    register int t218;
    int t66;
    register int t68;
    register int t81;
    int t192;
    register int t205;
    register int t207;
    register int t208;

    *(volatile int *)((a4 + 0x94));
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t3 = (((struct o0_int *)0xC15AA10)->v);
    *(volatile int *)((a4 + 0x90));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = t3;
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = ((((struct o4_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o8_int *)0xC15AA10)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = ((((struct oC_int *)0xC15AA10)->v));
    t8 = *(int *)((a4 + 0x0));
    if ((0x1 & t8) != 0) {
        *(volatile int *)((a4 + 0x14));
    }
    if ((0x2 & t8) != 0) {
        *(volatile int *)((a4 + 0x18));
    }
    if ((0x20 & t8) != 0) {
        *(volatile int *)((a4 + 0x28));
    }
    if ((0x8 & t8) != 0) {
        *(volatile int *)((a4 + 0x20));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    if ((0x200 & t8) != 0) {
        *(volatile int *)((a4 + 0x40));
    }
    if ((0x8 & t8) != 0) {
        *(volatile int *)((a4 + 0x20));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    if ((0x800000 & t8) != 0) {
        *(volatile int *)((a4 + 0x10));
    }
    if ((t8 & 0x4000000) != 0) {
        *(volatile int *)((a4 + 0xB4));
    }
    t73 = t1;
    if (((0x40 & t8) != 0) && (t66 = *(int *)((a4 + 0x2C)), (unsigned int)t66 < (unsigned int)0xC)) {
        switch ((t66 << 1)) {
            case 0:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t68 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t68 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t68 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t68 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t68 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t68 = t1;
            }
                break;
            case 16:
            {
                t68 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t68 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t68 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t73 = t68;
    }
    t91 = t73;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (t73 & 0x1FFFFFFF);
        t77 = *(int *)((a4 + 0x30));
        t86 = t73;
        if ((unsigned int)t77 < (unsigned int)0xC) {
            switch ((t77 << 1)) {
                case 0:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t81 = (0x18000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t81 = t73;
                }
                    break;
                case 8:
                {
                    t81 = (0x1C000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 14:
                {
                    t81 = (0xC000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t81 = (0x10000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t81 = (0x8000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t81 = (t73 & 0xE3FFFFFF);
                }
                    break;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    t101 = t91;
    if ((t8 & 0x1000000) != 0) {
        t101 = (t91 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t101 = (t91 | 0x2000000);
        }
    }
    t109 = t101;
    if ((0x2000000 & t8) != 0) {
        t109 = (t101 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t109 = (t101 | 0x1000000);
        }
    }
    t113 = t109;
    t205 = 0x1000000;
    if ((0x100 & t8) != 0) {
        t112 = *(int *)((a4 + 0x3C));
        t113 = ((0xFF3FFFFF & t109) | ((t112 & 0x3) << 22));
        t205 = ((t112 & 0x3) << 22);
    }
    t125 = t113;
    if ((0x40000 & t8) != 0) {
        t125 = (t113 & 0xFFDFFFFF);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            t125 = (t113 | 0x200000);
        }
    }
    t135 = t125;
    if ((0x400 & t8) != 0) {
        t135 = (t125 & 0xFFEFFFFF);
        if (((((struct o44_int *)(a4))->v)) != 0) {
            t135 = (t125 | 0x100000);
        }
    }
    t145 = t135;
    if ((0x800 & t8) != 0) {
        t145 = (t135 & 0xFFF7FFFF);
        if (((((struct o48_int *)(a4))->v)) != 0) {
            t145 = (t135 | 0x80000);
        }
    }
    t150 = t145;
    if ((t8 & 0x1000) != 0) {
        t150 = ((0xFFFE7FFF & t145) | (((((struct o4C_int *)(a4))->v)) << 15));
    }
    t157 = t150;
    if ((0x2000 & t8) != 0) {
        t157 = ((0xFFF9FFFF & t150) | ((((((struct o50_int *)(a4))->v)) << 16) << 1));
    }
    t163 = t157;
    if ((0x4000 & t8) != 0) {
        t161 = *(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x10)) + 0x0));
        t163 = ((0xFFFF9FFF & t157) | (t161 << 13));
        t205 = (t161 << 13);
    }
    t174 = t163;
    if ((0x8000 & t8) != 0) {
        t174 = (t163 & 0xFFFFEFFF);
        if (((((struct o58_int *)(a4))->v)) != 0) {
            t174 = (t163 | 0x1000);
        }
    }
    t181 = t174;
    if ((0x10000 & t8) != 0) {
        t178 = (((struct o5C_int *)(a4))->v);
        t179 = (t178 & 0xF);
        if ((t178 & 0xF) == 0) {
            t179 = 0x4;
        }
        t181 = ((0xFFFFF0FF & t174) | (t179 << 8));
        t205 = (t179 << 8);
    }
    t186 = t181;
    if ((0x20000 & t8) != 0) {
        t185 = (((struct o60_int *)(a4))->v);
        t186 = ((0xFFFFFF3F & t181) | ((((t185 & 0x3) << 2) << 2) << 2));
        t205 = ((((t185 & 0x3) << 2) << 2) << 2);
    }
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t192 = (((struct o6C_int *)(a4))->v), t192 != 0)) {
        *(unsigned int *)(((int)stk + 0)) = ((t186 & 0xFFFFFFC7) | (((((int (*)(int, int, int, int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))), 0x3, 0x1000, 0x14000000)) << 2) << 1));
        t199 = ((int (*)(int))(FUN_0c0f7e80))((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))));
    } else {
        t207 = 0x1000;
        t208 = 0x14000000;
    }
    if (((*(int *)((a4 + 0x20))) >> 1) != 1) {
        return ((int (*)(int, int, int, int))(0xC0F8718))(t205, 0x10, t207, t208);
    }
    if (((((struct o6C_int *)(a4))->v)) != 0) {
        t212 = (((struct o6C_int *)(a4))->v);
        t213 = *(int *)(((int)stk + 8));
        t214 = *(int *)((t212 + 0x18));
        t217 = ((0x1 & t214) & 0x1);
        t215 = (int)(((unsigned int)t217 >> 1) | ((unsigned int)t217 << 31));
        t218 = *(int *)((t212 + 0x8));
        if (((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x28000000) {
            if (((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) == 0x30000000) {
                return ((int (*)(int, int, int, int))(0xC0F8686))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0xF81FFFFF, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
            }
            return ((int (*)(int, int, int, int))(0xC0F86E0))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0x38000000, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
        }
        return ((int (*)(int, int, int, int))(0xC0F8686))((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)), 0x10, 0xF81FFFFF, ((((((t214 & 0x8) << 27) | (((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000));
    }
    return ((int (*)(int, int, int, int))(0xC0F8718))(t205, 0x10, t207, t208);
}

int FUN_0c03a918(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register int t12;
    register float u15;
    register int t16;
    register int t18;
    register int t19;
    register float u20;
    register int t22;
    register int t23;
    register float u26;
    register int t27;
    register int t33;
    register float u35;
    register float u36;
    register int t37;
    register int t43;
    register float u45;
    register float u46;
    register int t47;
    register int t52;
    register int t54;
    register int t53;
    register int t56;
    register float u59;
    register int t60;
    register float u62;
    register int t65;
    register int t67;
    register float u70;
    register int t72;
    register int t77;
    register int t78;
    register float u81;
    register float u82;
    register int t83;
    register int t89;
    register int t90;
    register float u93;
    register float u94;
    register int t95;
    register int t101;
    register int t114;
    register int t104;
    register int t107;
    register int t111;
    register int t118;
    register int t120;
    register int t123;
    register int t127;
    register int t130;
    register int t17;
    register float u21;
    register int t61;
    register float u63;
    register int t108;
    register int t109;
    register int t112;
    register int t124;
    register int t125;
    register int t128;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t1))->v)) + -0.5f);
                (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) + 0.0f);
                (((struct oC_float *)(t1))->v) = (((((struct oC_float *)(t1))->v)) + 0.333333313f);
                t5 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t5 + 0x1);
                t8 = 0xEC;
                if ((int)(short)(t5 + 0x1) < (int)0x3D) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned int *)((t1 + 0x14)) = 0xE001;
                    *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t8 = 0x2F4;
                }
                return t8;
            }
            if (t0 == 3) {
                t12 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t12))->v) = (((((struct o4_float *)(t12))->v)) + -2.74576259f);
                (((struct o8_float *)(t12))->v) = (((((struct o8_float *)(t12))->v)) + 5.62711859f);
                u15 = (((struct oC_float *)(t12))->v);
                (((struct oC_float *)(t12))->v) = (u15 + 3.72881341f);
                t16 = 0xC;
                t18 = 0xC3215FC;
                t19 = 0x1;
                u20 = (u15 + 3.72881341f);
                for (;;) {
                    if ((int)t19 < (int)0x6) {
                        t17 = 0x2E0;
                        t16 = 0xEC;
                        t17 = (t17 + a4);
                        *(unsigned int *)(((int)stk + 8)) = (t19 << 2);
                        t22 = ((t19 << 2) + t17);
                        t17 = t19;
                        t23 = *(int *)((t22 + 0x0));
                        t17 = (t17 << 1);
                        *(int *)((int)stk + 0) = (0x10 + t23);
                        t17 = (t17 + t19);
                        t17 = (t17 << 2);
                        t17 = (signed char)t17;
                        *(unsigned int *)(((int)stk + 12)) = t17;
                        t17 = (t17 + 0xC321644);
                        *(unsigned int *)(((int)stk + 4)) = t17;
                        t18 = (*(int *)(((int)stk + 12)));
                        u26 = *(float *)((t17 + 0x0));
                        t18 = (t18 + 0xC32168C);
                        t27 = *(short *)((a4 + t16));
                        t17 = t27;
                        u21 = (u26 - (*(float *)((t18 + 0x0))));
                        u20 = (FUN_0c0dfa50(((int)(((((float)(((t27 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x10 + t23);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        t16 = 0x4;
                        t17 = (*(int *)(((int)stk + 8)));
                        t33 = *(int *)((((0x2E0 + a4) + t17) + 0x0));
                        *(int *)((int)stk + 0) = (0x14 + t33);
                        t17 = (*(int *)(((int)stk + 4)));
                        u35 = *(float *)((t18 + t16));
                        u36 = *(float *)((t17 + t16));
                        t16 = 0xEC;
                        t37 = *(short *)((a4 + t16));
                        t17 = t37;
                        u21 = (u36 - u35);
                        u20 = (FUN_0c0dfa50(((int)(((((float)(((t37 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x14 + t33);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        t16 = 0x8;
                        t17 = (*(int *)(((int)stk + 8)));
                        t43 = *(int *)((((0x2E0 + a4) + t17) + 0x0));
                        *(int *)((int)stk + 0) = (0x18 + t43);
                        t17 = (*(int *)(((int)stk + 4)));
                        u45 = *(float *)((t18 + t16));
                        u46 = *(float *)((t17 + t16));
                        t16 = 0xEC;
                        t47 = *(short *)((a4 + t16));
                        t17 = t47;
                        u21 = (u46 - u45);
                        u20 = (FUN_0c0dfa50(((int)(((((float)(((t47 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x18 + t43);
                        t19 = (t19 + 0x1);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        continue;
                    }
                    break;
                }
                t52 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t52 + 0x1);
                t54 = 0xEC;
                if ((int)(short)(t52 + 0x1) >= (int)0x78) {
                    t53 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t53 + 0x1);
                    t54 = (t53 + 0x1);
                }
                return t54;
            }
            return FUN_0c059330(a4, a5, a6, 0x0);
        }
        t56 = (((struct o2E0_int *)(a4))->v);
        (((struct o4_float *)(t56))->v) = (((((struct o4_float *)(t56))->v)) + -2.34545445f);
        (((struct o8_float *)(t56))->v) = (((((struct o8_float *)(t56))->v)) + -2.36363626f);
        u59 = (((struct oC_float *)(t56))->v);
        (((struct oC_float *)(t56))->v) = (u59 + 2.0181818f);
        *(unsigned int *)(((int)stk + 4)) = 0x1;
        t60 = 0xC;
        u62 = (u59 + 2.0181818f);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) < (int)0x6) {
                t65 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 12)) = (t65 << 2);
                t61 = (*(int *)((((t65 << 2) + (0x2E0 + a4)) + 0x0)));
                *(int *)((int)stk + 0) = (0x10 + t61);
                t67 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 20)) = (signed char)(((t67 << 1) + t67) << 2);
                *(unsigned int *)(((int)stk + 16)) = ((signed char)(((t67 << 1) + t67) << 2) + 0xC321644);
                t60 = (*(int *)(((int)stk + 20)));
                t60 = (t60 + 0xC32168C);
                *(unsigned int *)(((int)stk + 8)) = t60;
                u70 = *(float *)((t60 + 0x0));
                t60 = 0xEC;
                t72 = *(short *)((a4 + t60));
                u63 = ((*(float *)((((signed char)(((t67 << 1) + t67) << 2) + 0xC321644) + 0x0))) - u70);
                u62 = (FUN_0c0dfa50(((int)(((((float)(((t72 << 1) + t72) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = (0x10 + t61);
                t61 = 0x2E0;
                t61 = (t61 + a4);
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t60 = 0x4;
                t61 = (t61 + (*(int *)(((int)stk + 12))));
                t77 = *(int *)((t61 + 0x0));
                t61 = 0x14;
                t61 = (t61 + t77);
                t78 = t61;
                *(int *)((int)stk + 0) = t78;
                t61 = (*(int *)(((int)stk + 8)));
                u81 = *(float *)((t61 + t60));
                u82 = *(float *)(((*(int *)(((int)stk + 16))) + t60));
                t60 = 0xEC;
                t83 = *(short *)((a4 + t60));
                u63 = (u82 - u81);
                u62 = (FUN_0c0dfa50(((int)(((((float)(((t83 << 1) + t83) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = t78;
                t61 = 0x2E0;
                t61 = (t61 + a4);
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t60 = 0x8;
                t61 = (t61 + (*(int *)(((int)stk + 12))));
                t89 = *(int *)((t61 + 0x0));
                t61 = 0x18;
                t61 = (t61 + t89);
                t90 = t61;
                *(int *)((int)stk + 0) = t90;
                t61 = (*(int *)(((int)stk + 8)));
                u93 = *(float *)((t61 + t60));
                u94 = *(float *)(((*(int *)(((int)stk + 16))) + t60));
                t60 = 0xEC;
                t95 = *(short *)((a4 + t60));
                u63 = (u94 - u93);
                u62 = (FUN_0c0dfa50(((int)(((((float)(((t95 << 1) + t95) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = t90;
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t61 = (*(int *)(((int)stk + 4)));
                t61 = (t61 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t61;
                continue;
            }
            break;
        }
        t101 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t101 + 0x1);
        t114 = 0xEC;
        if ((int)(short)(t101 + 0x1) >= (int)0x37) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t104 = 0x1;
            for (;;) {
                if ((int)t104 >= (int)0x6) {
                    break;
                }
                *(volatile int *)((((0x2E0 + a4) + (t104 << 2)) + 0x0));
                t107 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t104, (t104 << 2), (signed char)(((t104 << 1) + t104) << 2), 0x0);
                *(volatile int *)((((0x2E0 + a4) + t109) + 0x0));
                t111 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, t109, t108);
                t104 = (t112 + 0x1);
            }
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
            t114 = 0x2F4;
        }
        return t114;
    }
    t118 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t118))->v) = 179.0f;
    (((struct o8_float *)(t118))->v) = 139.0f;
    (((struct oC_float *)(t118))->v) = -99.0f;
    *(unsigned int *)((t118 + 0x14)) = 0xDC73;
    t120 = 0x1;
    for (;;) {
        if ((int)t120 >= (int)0x6) {
            break;
        }
        *(volatile int *)((((0x2E0 + a4) + (t120 << 2)) + 0x0));
        t123 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t120, (t120 << 2), (signed char)(((t120 << 1) + t120) << 2), 0x0);
        *(volatile int *)((((0x2E0 + a4) + t125) + 0x0));
        t127 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, t125, t124);
        t120 = (t128 + 0x1);
    }
    *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
    t130 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t130 + 0x1);
    return (t130 + 0x1);
}
