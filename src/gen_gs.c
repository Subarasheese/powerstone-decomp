/* Straight-line functions with calls and guards (batch gen_gs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c01576c(int);
int FUN_0c015798(int);
int FUN_0c045968(int);
int FUN_0c0459d6(int, int, int, int);
int FUN_0c045a4e(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c06231c(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int FUN_0c012e2e(int a4);
void FUN_0c045aac(int a4, int a5, int a6, int a7);
int FUN_0c03e452(int a4, int a5, int a6, int a7);

int FUN_0c012e2e(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
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
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_2 = a4;
    v0_0 = R13;
    v0_1 = R12;
    v0_4 = R11;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_1 = (v0_3);
    R12 = (0xC7F302C);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C012E4A;
    if ((v0_1 == 1)) goto L_C012E50;
    return FUN_0c059330(v0_0, R5, R6, R7);
    L_C012E50:;
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_1 = (v0_3);
    R11 = (0xFFFFF1C8);
    R13 = (0x0);
    v0_2 = (0x4000);
    R5 = (0x3CA0);
    R6 = (0xFFFFC360);
    R7 = (0xFFFFCE39);
    w0_6 = (-340.0f);
    w0_7 = (-140.0f);
    w0_0 = (0.0f);
    w0_2 = (-66.4439926f);
    w0_3 = (-16.421999f);
    w0_4 = (76.0759964f);
    w0_5 = (-76.0759964f);
    w0_1 = (-1760.0f);
    if ((v0_3 == 1)) goto L_C012EAC;
    if ((v0_1 != 2)) goto L_C012E88;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C01300C;
    if ((v0_1 == 1)) goto L_C013070;
    if ((v0_1 != 2)) goto L_C012FE4;
    L_C01325A:;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) != v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C013268;
    L_C013430:;
    return v0_1;
    L_C013268:;
    L_C013418:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013430;
    L_C012FE4:;
    goto L_C013430;
    L_C013070:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + 9.83333302f);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + 4.33333302f);
    w0_2 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_2 + -53.3333321f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) - 424);
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) - 121);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    w0_2 = ((w0_2 + -53.3333321f));
    w0_2 = (-53.3333321f);
    FPUL_ = (0xC2555555);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0130BA;
    goto L_C013430;
    L_C0130BA:;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    L_C0130CA:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C013430;
    L_C01300C:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = -295.0f;
    (((struct o24_float *)(v0_0))->v) = -130.0f;
    (((struct o28_float *)(v0_0))->v) = -160.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013070;
    L_C012E88:;
    if ((v0_1 != 3)) goto L_C012E90;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0130E0;
    if ((v0_1 == 1)) goto L_C013132;
    goto L_C013430;
    L_C013132:;
    v0_2 = *(signed char *)((R12 + 0x1));
    v0_1 = (v0_2);
    if ((v0_2 != 3)) goto L_C01313C;
    goto L_C013430;
    L_C01313C:;
    goto L_C013418;
    L_C0130E0:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013132;
    L_C012E90:;
    if ((v0_1 != 4)) goto L_C012E98;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C013186;
    if ((v0_1 == 1)) goto L_C0131E4;
    if ((v0_1 == 2)) goto L_C01320C;
    if ((v0_1 == 3)) goto L_C01322E;
    if ((v0_1 == 4)) goto L_C01323A;
    if ((v0_1 == 5)) goto L_C013242;
    if ((v0_1 == 6)) goto L_C01324E;
    goto L_C01325A;
    L_C01324E:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    L_C013254:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01325A;
    L_C013242:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = 0xFFFFFF4A;
    goto L_C013254;
    L_C01323A:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    goto L_C013254;
    L_C01322E:;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = 0xFFFFFDDE;
    goto L_C013254;
    L_C01320C:;
    v0_1 = (((struct o2F0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x610);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C01325A;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R13;
    goto L_C013254;
    L_C0131E4:;
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x333);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C01325A;
    *(unsigned int *)((((((struct o2E8_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0xA;
    goto L_C013254;
    L_C013186:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    *(unsigned char *)((((((struct o2F4_int *)(v0_0))->v)) + 0x0)) = R13;
    (((struct o20_float *)(v0_0))->v) = w0_6;
    (((struct o24_float *)(v0_0))->v) = w0_7;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x14;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0131E4;
    L_C012E98:;
    if ((v0_1 != 5)) goto L_C012EA0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C01328C;
    if ((v0_1 == 1)) goto L_C013340;
    L_C01340E:;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) == v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C013430;
    goto L_C013418;
    L_C013340:;
    FUN_0c015798(v0_0);
    FUN_0c01576c(v0_0);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + ((((struct oEE_short *)(v0_0))->v)));
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + ((((struct oF0_short *)(v0_0))->v)));
    v0_2 = (int)((((struct oEE_short *)(v0_0))->v)) < 0;
    v0_1 = (0xEE);
    if (v0_2) goto L_C01336E;
    *(unsigned short *)((v0_0 + v0_1)) = R13;
    *(unsigned short *)((v0_0 + (v0_1 + 0x2))) = R13;
    L_C01336E:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C013408;
    goto L_C01340E;
    L_C013408:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C01340E;
    L_C01328C:;
    (((struct o4_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_0;
    (((struct oC_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned int *)((((((struct o2E0_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_5;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = R13;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_4;
    *(unsigned int *)((((((struct o2E8_int *)(v0_0))->v)) + 0x14)) = 0x8000;
    (((struct o4_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o4_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = v0_2;
    *(unsigned int *)((((((struct o2F4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    (((struct o20_float *)(v0_0))->v) = w0_6;
    (((struct o24_float *)(v0_0))->v) = w0_7;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    *(unsigned int *)((v0_0 + 0x34)) = R13;
    (((struct o38_float *)(v0_0))->v) = w0_0;
    (((struct o3C_float *)(v0_0))->v) = 4.0f;
    (((struct o40_float *)(v0_0))->v) = -10.7142849f;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o48_float *)(v0_0))->v) = -0.174999997f;
    (((struct o4C_float *)(v0_0))->v) = w0_0;
    (((struct oEE_ushort *)(v0_0))->v) = 0xFFFFFE0C;
    (((struct oF0_ushort *)(v0_0))->v) = 0x8;
    (((struct oEC_ushort *)(v0_0))->v) = 0x8C;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C013340;
    L_C012EA0:;
    if ((v0_1 != 7)) goto L_C012EA8;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0133BC;
    if ((v0_1 == 1)) goto L_C01340E;
    goto L_C013430;
    L_C0133BC:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    goto L_C013408;
    L_C012EA8:;
    goto L_C013430;
    L_C012EAC:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C012F00;
    if ((v0_1 == 1)) goto L_C012F58;
    if ((v0_1 != 2)) goto L_C012EBE;
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (*(signed char *)((R12 + 0x1))) == v0_1;
    v0_1 = (v0_1);
    if (v0_2) goto L_C012FCE;
    goto L_C013418;
    L_C012FCE:;
    goto L_C013430;
    L_C012EBE:;
    goto L_C013430;
    L_C012F58:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + -9.83333302f);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + -4.33333302f);
    w0_0 = (((struct o28_float *)(v0_0))->v);
    (((struct o28_float *)(v0_0))->v) = (w0_0 + 53.3333321f);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x1A8);
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x79);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    w0_2 = ((w0_0 + 53.3333321f));
    w0_2 = (53.3333321f);
    FPUL_ = (0x42555555);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C012FA2;
    goto L_C013430;
    L_C012FA2:;
    (((struct o20_float *)(v0_0))->v) = -295.0f;
    (((struct o24_float *)(v0_0))->v) = -130.0f;
    (((struct o28_float *)(v0_0))->v) = -160.0f;
    *(unsigned int *)((v0_0 + 0x2C)) = R13;
    *(unsigned int *)((v0_0 + 0x30)) = R13;
    goto L_C0130CA;
    L_C012F00:;
    (((struct o4_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_4;
    (((struct oC_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_3;
    (((struct o4_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_5;
    (((struct oC_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_3;
    (((struct oC_float *)(((((struct o2EC_int *)(v0_0))->v))))->v) = w0_2;
    (((struct oC_float *)(((((struct o2F0_int *)(v0_0))->v))))->v) = w0_2;
    *(unsigned int *)((((((struct o2EC_int *)(v0_0))->v)) + 0x14)) = R5;
    *(unsigned int *)((((((struct o2F0_int *)(v0_0))->v)) + 0x14)) = R6;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o24_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x2C)) = R7;
    *(unsigned int *)((v0_0 + 0x30)) = R11;
    (((struct oEC_ushort *)(v0_0))->v) = 0x1D;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C012F58;
    L_C012E4A:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C012E50;
}

void FUN_0c045aac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x14;
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0xC00);
            (((struct o28_float *)(t0))->v) = -19.5f;
            (((struct o30_float *)(t0))->v) = 19.5499992f;
            (((struct o2C_float *)(t0))->v) = 0.0f;
            (((struct o40_float *)(t0))->v) = 1.0f;
            return;
        }
        case 2:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            FUN_0c062050((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                *(unsigned int *)((t0 + 0x38)) = 0xFFFFF99A;
            }
            FUN_0c045968(a4);
    return;
        }
        case 4:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + (*(int *)((t0 + 0x38))));
            u0 = ((((struct o4_float *)(t0))->v));
            u0 = u0 + 10.0f * (FUN_0c0dfa50(((*(int *)((t0 + 0x14))) - 16384)));
            (((struct o4_float *)(t0))->v) = u0;
            u0 = ((((struct oC_float *)(t0))->v));
            u0 = u0 + 10.0f * (FUN_0c0df4d0(((*(int *)((t0 + 0x14))) - 16384)));
            (((struct oC_float *)(t0))->v) = u0;
            if (!(500.0f > ((((struct oC_float *)(t0))->v)))) {
                (((struct oC_float *)(t0))->v) = 500.0f;
            }
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
                (((struct o28_float *)(t0))->v) = (-(((((struct o4_float *)(t0))->v)) / 30.0f));
                (((struct o30_float *)(t0))->v) = (-(((((struct oC_float *)(t0))->v)) / 30.0f));
                (((struct o2C_float *)(t0))->v) = 0.0f;
                *(unsigned int *)((t0 + 0x38)) = 0xFFFFF889;
            }
            FUN_0c045968(a4);
    return;
        }
        case 6:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            FUN_0c062050((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + (*(int *)((t0 + 0x38))));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x14;
                FUN_0c0e6fe8();
                (((struct oC_float *)(t0))->v) = 0.0f;
                FUN_0c0e6fe8();
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct o2E8_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x400);
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            FUN_0c045968(a4);
    return;
        }
        case 8:
        {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.049999997f);
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) + 0.049999997f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o2C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -20.0f;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 10:
        {
            t0 = (((struct o2EC_int *)(a4))->v);
            (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o8_float *)(t0))->v) = 0.0f;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
            }
            return;
        }
        case 12:
        {
            t0 = *(signed char *)((((((struct oEC_short *)(a4))->v)) + 0xC14A714));
            t1 = (((struct o2E8_int *)(a4))->v);
            (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) - (float)t0);
            t1 = (((struct o2EC_int *)(a4))->v);
            u0 = ((((struct o8_float *)(t1))->v));
            u0 = u0 + 2.0f * (float)t0;
            (((struct o8_float *)(t1))->v) = u0;
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            if ((float)t0 != 0.0f) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o8_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o30_float *)(((((struct o2EC_int *)(a4))->v))))->v) = -49.8999977f;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 14:
        {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 16:
        {
            t0 = (((struct o2EC_int *)(a4))->v);
            (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
            FUN_0c0459d6(a4, a5, a6, a7);
            FUN_0c045a4e(a4);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oC_float *)(t0))->v) = 0.099999994f;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o30_float *)(((((struct o2E4_int *)(a4))->v))))->v) = -0.0166666657f;
                t0 = (((struct o2E4_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x410);
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 41.0f;
                *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct o2F0_int *)(a4))->v);
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x400);
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 1.0f;
                (((struct oEE_ushort *)(a4))->v) = 0x28;
                *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            return;
        }
        case 18:
        {
            FUN_0c045a4e(a4);
            if (((((struct o0_int *)0xC7F31BC)->v)) != -1) {
                (((struct o0_uint *)0xC7F31BC)->v) = (((((struct o0_int *)0xC7F31BC)->v)) + 0x11111111);
                (((struct o4_uint *)0xC7F31BC)->v) = (((((struct o4_int *)0xC7F31BC)->v)) + 0x11111111);
                (((struct o8_uint *)0xC7F31BC)->v) = (((((struct o8_int *)0xC7F31BC)->v)) + 0x11111111);
                if (((((struct o0_int *)0xC7F31BC)->v)) == -1) {
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
                    FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), 0xC664A18, 0x6);
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                }
            }
            if (((((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v)) != 1.0f) {
                t0 = (((struct o2E4_int *)(a4))->v);
                u0 = (((struct o40_float *)(t0))->v);
                (((struct o40_float *)(t0))->v) = (u0 + 0.0625f);
                if (!(1.0f > (u0 + 0.0625f))) {
                    (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                }
            }
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            } else {
                if (((((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v)) > 0.0f) {
                    t0 = (((struct o2F0_int *)(a4))->v);
                    u0 = (((struct o40_float *)(t0))->v);
                    (((struct o40_float *)(t0))->v) = (u0 - 0.0625f);
                    if (!((u0 - 0.0625f) > 0.0f)) {
                        (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = 0.0f;
                    }
                }
            }
            t0 = (((struct o2E4_int *)(a4))->v);
            u0 = (((struct o24_float *)(t0))->v);
            u1 = (((struct o30_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = (u0 + u1);
            if (!((u0 + u1) > 0.0f)) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            return;
        }
        case 20:
        {
            return;
        }
        default:
        {
            FUN_0c059330(a4, a5, a6, a7);
    return;
        }
    }
}

int FUN_0c03e452(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 == 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        return t4;
    }
    *(volatile int *)((a4 + 0x1C));
    t4 = ((int (*)(int))(FUN_0c0e6fe8))(a4);
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (*(int *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC33C948))));
    *(volatile int *)((a4 + 0x1C));
    t4 = ((int (*)(void))(FUN_0c0e6fe8))();
    u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
    t4 = (((struct oEE_short *)(a4))->v);
    u1 = (((struct o8_float *)(((((t4 << 1) + t4) << 2) + 0xC33C900)))->v);
    u2 = (((struct o20_float *)(a4))->v);
    t4 = (((struct oEE_short *)(a4))->v);
    u3 = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * (*(float *)((((((t4 << 1) + t4) << 2) + 0xC33C900) + 0x0))));
    u3 = u3 + u1 * u0;
    (((struct o20_float *)(a4))->v) = (u2 + u3);
    u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
    t4 = (((struct oEE_short *)(a4))->v);
    u1 = (((struct o8_float *)(((((t4 << 1) + t4) << 2) + 0xC33C900)))->v);
    t4 = (((struct oEE_short *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * (*(float *)((((((t4 << 1) + t4) << 2) + 0xC33C900) + 0x0))));
    (((struct o28_float *)(a4))->v) = (u2 + (((u0 * u1)) - u3));
    t4 = (((struct oEE_short *)(a4))->v);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((0xC33C900 + (((t4 << 1) + t4) << 2))))->v)));
    t4 = (((struct o2E0_int *)(a4))->v);
    FUN_0c0df940();
    *(unsigned int *)((t4 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
    if (((int)(*(signed char *)((a4 + 0xA))) <= (int)0x2) && (t0 = *(int *)((a4 + 0x1C)), t1 = (((struct oEE_short *)(t0))->v), t1 != 0)) {
        *(unsigned char *)((a4 + 0xA)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0xA));
    switch (t0) {
    case 0:
        t0 = *(signed char *)(((t4 + 0x28) + 0x0));
        (((struct o28_uchar *)(t4))->v) = (t0 - 1);
        if ((float)(unsigned char)(t0 - 1) > 0.0f) {
        } else {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x1;
        }
        break;
    case 1:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 + u1);
        if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149858))) > (u0 + u1))) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 2:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 - u1);
        if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149870))))) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) - 1);
        }
        break;
    case 3:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 - u1);
        if (!((u0 - u1) > 0.0f)) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
        }
        break;
    }
    t0 = 0xEE;
    if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x3) {
    } else {
        t1 = (((struct o2E4_int *)(a4))->v);
        FUN_0c0df940();
        *(unsigned int *)((t1 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
        if (((int)(*(signed char *)((a4 + 0xB))) <= (int)0x2) && (t2 = *(int *)((a4 + 0x1C)), t3 = (((struct oEE_short *)(t2))->v), t3 != 0)) {
            *(unsigned char *)((a4 + 0xB)) = 0x3;
        }
        t2 = *(signed char *)((a4 + 0xB));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    t3 = t2;
                    if (t2 != 3) {
                    } else {
                        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                        (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                        u0 = (((struct o1C_float *)(t1))->v);
                        u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                        (((struct o1C_float *)(t1))->v) = (u0 - u1);
                        t4 = 0x1C;
                        if (!((u0 - u1) > 0.0f)) {
                            t5 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
                            *(unsigned char *)((t1 + 0x0)) = 0x0;
                            t4 = (t5 + 0x1);
                        }
                        t3 = t4;
                    }
                    t4 = t3;
                } else {
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                    u0 = (((struct o1C_float *)(t1))->v);
                    u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                    (((struct o1C_float *)(t1))->v) = (u0 - u1);
                    t3 = 0xC149870;
                    if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149870))))) {
                        t5 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t5 - 1);
                        t3 = (t5 - 1);
                    }
                    t4 = t3;
                }
                t3 = t4;
            } else {
                (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                u0 = (((struct o1C_float *)(t1))->v);
                u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                (((struct o1C_float *)(t1))->v) = (u0 + u1);
                t4 = 0xC149858;
                if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149858))) > (u0 + u1))) {
                    t5 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
                    t4 = (t5 + 0x1);
                }
                t3 = t4;
            }
            t4 = t3;
        } else {
            t3 = *(signed char *)(((t1 + 0x28) + 0x0));
            (((struct o28_uchar *)(t1))->v) = (t3 - 1);
            t5 = t2;
            if ((float)(unsigned char)(t3 - 1) > 0.0f) {
            } else {
                t2 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                t5 = (t2 + 0x1);
            }
            t4 = t5;
        }
        t0 = t4;
    }
    return t0;
}
