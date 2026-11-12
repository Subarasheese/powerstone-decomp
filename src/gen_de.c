/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o184_uchar { char p[0x184]; unsigned char v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oAC_uchar { char p[0xAC]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int ADXSTM_GetFad(int, int);
int FUN_0c02df98(int, int, float, float);
int FUN_0c02e050(int, float, float);
int FUN_0c048074(int);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c08cc90(int, int);
int FUN_0c0a1d88(int, int);
int FUN_0c0ab176(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0f547e(int);
int FUN_0c0f5570(int);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int, int, int, int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiWriteRegister(int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0b9288(int a4, int a5, int a6, float f4);
int FUN_0c05876c(int a4, int a5, int a6, int a7);
int FUN_0c0f5238(int a4, int a5, int a6, int a7);
int kmiProcessVertex_12(int a4);
int FUN_0c09e4ac(int a4, int a5, int a6);
int FUN_0c0c74bc(int a4, int a5);
int FUN_0c0fba80(int a4, int a5);
int kmiProcessVertex_10(int a4);
int FUN_0c049b7c(void);
int FUN_0c0ab25e(int a4, int a5, int a6, int a7);
int FUN_0c09aebc(int a4, int a5, int a6);
int FUN_0c02e2da(int a4);
int FUN_0c08d334(int a4);
int FUN_0c0d9078(int a4, int a5, int a6, int a7);
int FUN_0c02e144(int a4, float f4, float f5);

int FUN_0c0b9288(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t0;
    register int t27;
    register int t5;
    register float u9;
    register float u13;
    register int t19;
    register int t20;
    register int t21;
    register int t22;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(float *)(((int)stk + 4)) = f4;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    t27 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B9430;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t5 = *(int *)((t0 + 0x30));
        *(int *)((int)stk + 0) = (t0 + 0x20);
        u9 = ((((struct o20_float *)(t0))->v));
        u9 = u9 + (*(float *)(((int)stk + 4))) * (FUN_0c0df4d0(((-t5) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u9;
        *(int *)((int)stk + 0) = (t0 + 0x28);
        u13 = ((((struct o28_float *)(t0))->v));
        u13 = u13 + (*(float *)(((int)stk + 4))) * (FUN_0c0dfa50(((-t5) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u13;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 300.0f);
        (((struct o38_float *)(t0))->v) = ((((struct o20_float *)(t0))->v));
        (((struct o40_float *)(t0))->v) = ((((struct o28_float *)(t0))->v));
        (((struct oEC_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 12)));
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x78);
        t19 = 0x0;
        t20 = 0x0;
        for (;;) {
            t21 = *(int *)((((0x2E0 + t0) + t20) + 0x0));
            *(unsigned char *)((t21 + 0x0)) = 0x1;
            *(unsigned short *)((t21 + 0x2)) = 0x1F;
            t22 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t21, ((signed char)((((t22 << 1) + t22) << 2) << 1) + 0xC6002D0), 0x5);
            t19 = (t19 + 0x1);
            *(unsigned int *)((t21 + 0x14)) = ((*(int *)((t20 + 0xC153160))) - 16384);
            (((struct o24_float *)(t21))->v) = 3.0f;
            (((struct o1C_float *)(t21))->v) = 3.0f;
            t20 = (t20 + 0x4);
            if ((int)t19 >= (int)0x2) {
                break;
            }
        }
        t27 = 0x1C;
    }
    return t27;
}

int FUN_0c05876c(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_6 = *(signed char *)((v0_4 + 0x8));
    v0_3 = (v0_6);
    v0_0 = (0xC06233A);
    v0_0 = (0x2);
    v0_1 = (0x11F);
    v0_2 = (0x1);
    v0_4 = (v0_4);
    v0_5 = (0x0);
    if ((v0_6 == 0)) goto L_C058798;
    if ((v0_3 == 1)) goto L_C0587EE;
    return FUN_0c059330(v0_4, R5, R6, a7);
    L_C0587EE:;
    v0_6 = *(short *)0xC361BFC;
    v0_3 = ((unsigned short)v0_6);
    R5 = (0x58);
    if ((((unsigned short)v0_6 & 64) == 0)) goto L_C058846;
    *(unsigned char *)((v0_4 + 0x4)) = ((*(signed char *)((v0_4 + 0x4))) + 0x2);
    v0_6 = (v0_5);
    if (((int)(*(signed char *)((v0_4 + 0x4))) <= (int)R5)) goto L_C05880E;
    *(unsigned char *)((v0_4 + 0x4)) = v0_5;
    L_C05880E:;
    FUN_0c06233a((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))), 0xC4CFA80, ((*(signed char *)((v0_4 + 0x4))) + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))) + 0x2)) = v0_1;
    v0_3 = (v0_1);
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C05880E;
    L_C0588C4:;
    return v0_3;
    L_C058846:;
    if (((v0_3 & 128) == 0)) goto L_C0588C4;
    *(unsigned char *)((v0_4 + 0x4)) = ((*(signed char *)((v0_4 + 0x4))) - 2);
    v0_6 = (v0_5);
    if (((int)(*(signed char *)((v0_4 + 0x4))) >= 0)) goto L_C05885E;
    *(unsigned char *)((v0_4 + 0x4)) = R5;
    L_C05885E:;
    FUN_0c06233a((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))), 0xC4CFA80, ((*(signed char *)((v0_4 + 0x4))) + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))) + 0x2)) = v0_1;
    v0_3 = (v0_1);
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C05885E;
    goto L_C0588C4;
    L_C058798:;
    *(unsigned char *)((v0_4 + 0x8)) = ((*(signed char *)((v0_4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_4))->v) = 0x3C;
    *(unsigned char *)((v0_4 + 0x1)) = v0_2;
    *(unsigned short *)((v0_4 + 0x6)) = 0x1F;
    *(unsigned char *)((v0_4 + 0x5)) = 0x19;
    v0_6 = (v0_5);
    L_C0587B4:;
    v0_3 = *(signed char *)((v0_4 + 0x4));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 << 2);
    FUN_0c06233a((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))), 0xC4CFA80, (v0_3 + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (*(int *)(((int)stk + 0)))) + 0x0))) + 0x0)) = v0_2;
    v0_3 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((0x2E0 + v0_4) + (*(int *)(((int)stk + 0)))) + 0x0))) + 0x2)) = v0_1;
    v0_6 = ((v0_6 + 0x1));
    if (v0_3) goto L_C0587B4;
    goto L_C0587EE;
}

int FUN_0c0f5238(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t67;
    register int t68;
    register int t73;

    register int R1;
    register int R2;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_7 = a5;
    v0_2 = a6;
    v0_0 = a7;
    v0_1 = R11;
    *(int *)((int)stk + 40) = v0_1;
    v0_4 = R10;
    *(int *)((int)stk + 36) = v0_4;
    v0_5 = R9;
    *(int *)((int)stk + 32) = v0_5;
    v0_6 = R8;
    *(int *)((int)stk + 28) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    v0_3 = adxf_ChkPrmPt((*(int *)(((int)stk + 0))), v0_2);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_4 = (v0_3);
    v0_1 = (v0_2);
    v0_2 = (v0_2);
    if (((int)v0_3 >= 0)) goto L_C0F5264;
    L_C0F538C:;
    v0_0 = (v0_4);
    L_C0F5390:;
    return v0_0;
    L_C0F5264:;
    v0_3 = (int)(ADXSTM_GetFad((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x4))) < 0;
    if (v0_3) goto L_C0F5280;
    v0_3 = FUN_0c0f547e((*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    if (!((v0_3 != 0))) goto L_C0F5280;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_2 + 0x0)) = (*(int *)((((v0_3 << 2) + 0xC7FF7E8) + 0x0)));
    *(unsigned int *)((((v0_3 << 2) + 0xC7FF7E8) + 0x0)) = v0_1;
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)(((int)stk + 4)));
    (((struct o12_uchar *)(v0_2))->v) = 0x1;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x14);
    *(unsigned int *)((v0_2 + 0xC)) = 0x0;
    R10 = (0x0);
    R11 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_1 = (0xC801C80);
    R8 = (0x0);
    R9 = (0xC801C84);
    goto L_C0F536A;
    L_C0F5280:;
    v0_0 = (0xFFFFFFFF);
    goto L_C0F5390;
    L_C0F536A:;
    v0_3 = (0x3);
    if (!(((int)R10 < (int)0x3))) goto L_C0F5370;
    v0_3 = (int)(adxf_LoadData((*(int *)(((int)stk + 16))), 0x1, v0_1, v0_0, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8), *(int *)((int)stk + 12))) <= 0;
    if (v0_3) goto L_C0F5368;
    v0_5 = (*(int *)((v0_2 + 0xC))) != 0;
    v0_3 = (0x0);
    if (v0_5) goto L_C0F52EE;
    v0_5 = (int)(*(int *)((R9 + 0x0))) <= (int)0x10000;
    v0_3 = (0x10000);
    if (v0_5) goto L_C0F52DC;
    *(unsigned int *)((R9 + 0x0)) = v0_3;
    v0_4 = (0xFFFFFFFC);
    goto L_C0F5370;
    L_C0F5370:;
    *(unsigned short *)((v0_2 + 0x10)) = R8;
    *(unsigned int *)((v0_2 + 0x4)) = (((((unsigned short)(*(short *)((v0_2 + 0x10))) << 2) << 1) + (*(int *)(((*(int *)((v0_2 + 0x0))) + 0x4)))) + 0x14);
    FUN_0c0f5570((*(int *)(((int)stk + 16))));
    goto L_C0F538C;
    L_C0F52DC:;
    v0_3 = *(int *)((R9 + 0x0));
    v0_5 = (int)(*(int *)(((int)stk + 12))) >= (int)v0_3;
    v0_3 = (v0_3);
    if (v0_5) goto L_C0F52E8;
    v0_3 = *(int *)(((int)stk + 12));
    v0_3 = (v0_3);
    L_C0F52EA:;
    *(unsigned int *)((v0_2 + 0xC)) = v0_3;
    v0_3 = (0x2);
    L_C0F52EE:;
    R10 = (0x200);
    if (((int)v0_3 >= (int)0x200)) goto L_C0F5364;
    L_C0F52F4:;
    v0_5 = (*(int *)((v0_1 + (v0_3 << 2)))) != 0;
    if (v0_5) goto L_C0F5318;
    v0_3 = ((v0_3 + 0x2));
    L_C0F5354:;
    v0_5 = (int)(R11 + 0x1) < (int)(*(int *)((v0_2 + 0xC)));
    R11 = ((R11 + 0x1));
    if (v0_5) goto L_C0F5360;
    v0_4 = (0x0);
    goto L_C0F5370;
    L_C0F5360:;
    if (((int)v0_3 < (int)R10)) goto L_C0F52F4;
    L_C0F5364:;
    R10 = (0x0);
    goto L_C0F536A;
    L_C0F5318:;
    *(unsigned short *)(((((R8 << 2) << 1) + (*(int *)(((int)stk + 0)))) + 0x0)) = R11;
    *(volatile int *)((v0_1 + (v0_3 << 2)));
    *(unsigned int *)((t67 + 0x4)) = (FUN_0c0e6d00());
    *(volatile int *)((v0_1 + (t68 << 2)));
    *(unsigned short *)((t73 + 0x2)) = (FUN_0c0e6d00());
    R8 = ((R8 + 0x1));
    goto L_C0F5354;
    L_C0F52E8:;
    v0_3 = (v0_3);
    goto L_C0F52EA;
    L_C0F5368:;
    R10 = ((R10 + 0x1));
    goto L_C0F536A;
}

int kmiProcessVertex_12(int a4)
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
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c09e4ac(int a4, int a5, int a6)
{
    int t0;
    register int t8;
    int t16;
    register int t10;
    register int t18;
    register int t19;
    register int t20;
    int t23;
    register int t26;
    register int t27;
    int t37;
    register int t41;
    register int t42;
    register int t51;
    int t65;
    register int t69;
    register int t70;
    int t21;
    register int t48;
    int t49;
    register int t53;
    register int t54;
    register int t55;
    int t56;
    int t57;
    register int t76;
    int t77;

    t0 = *(signed char *)((a4 + 0x71BC));
    if ((t0 != 0) && (t0 != 1)) {
        if ((0x600 & ((((struct o2E4_int *)(a4))->v))) != 0) {
            if ((((((struct o2E4_int *)(a4))->v)) & 0x400) != 0) {
                (((struct o721E_uchar *)(a4))->v) = 0x0;
                return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, a6, 0x600);
            }
            return ((int (*)(int, int, int, int))(0xC09E614))(a4, a5, a6, 0x600);
        }
        return 0x0;
    }
    if ((((((((struct o2E4_int *)(a4))->v)) | ((((struct o71F8_int *)(a4))->v))) | ((((struct o71FC_int *)(a4))->v))) & 0x600) != 0) {
        t8 = (((struct o2E4_int *)(a4))->v);
        t16 = (t8 & 0x600);
        if ((t8 & 0x600) == 0) {
            t10 = (((struct o71F8_int *)(a4))->v);
            t16 = (t10 & 0x600);
            if ((t10 & 0x600) == 0) {
                t16 = (((((struct o71FC_int *)(a4))->v)) & 0x600);
            }
        }
        t18 = (((struct o71F8_int *)(a4))->v);
        t19 = (((struct o71FC_int *)(a4))->v);
        t20 = (((struct o2E4_int *)(a4))->v);
        t23 = (t16 | (((t20 | t18) | t19) & 0xF0));
        t27 = t19;
        if (((0xC0 & (t16 | (((t20 | t18) | t19) & 0xF0))) != 0) && (t21 = *(signed char *)((a4 + 0x71EE)), t21 == 1)) {
            t23 = ((t16 | (((t20 | t18) | t19) & 0xF0)) ^ 0xC0);
            t27 = 0xC0;
        }
        t26 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
        *(unsigned char *)((a5 + 0x0)) = 0x0;
        for (;;) {
            if ((*(signed char *)((t26 + (((*(signed char *)((a5 + 0x0))) << 2) << 2)))) == 99) {
                t37 = (((struct o2E4_int *)(a4))->v);
                if ((t37 & 0x600) != 0) {
                    t27 = (*(signed char *)((a6 + 0x0)));
                    if (t27 == 0) {
                        t41 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
                        t42 = 0x0;
                        for (;;) {
                            if ((*(signed char *)((t41 + (((signed char)t42 << 2) << 2)))) == 99) {
                                return 0x0;
                            }
                            if (((*(signed char *)((((((signed char)t42 << 2) << 2) + t41) + 0x0))) == 0) && ((t48 = *(int *)((((((signed char)t42 << 2) << 2) + t41) + 0x8)), t48 == 0) && (t49 = *(int *)((((((signed char)t42 << 2) << 2) + t41) + 0x4)), ((t49 & (t37 & 0x600)) & 0x600) != 0))) {
                                break;
                            }
                            t42 = (t42 + 0x1);
                        }
                        *(unsigned char *)((a5 + 0x0)) = t42;
                        if ((0x400 & (t37 & 0x600)) == 0) {
                            (((struct o721E_uchar *)(a4))->v) = 0x1;
                            return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, t42, 0x600);
                        }
                        (((struct o721E_uchar *)(a4))->v) = 0x0;
                        return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, t42, 0x600);
                    }
                    if ((0x400 & (t37 & 0x600)) == 0) {
                        return ((int (*)(int, int, int, int))(0xC09E614))(a4, a5, a6, 0x600);
                    }
                    (((struct o721E_uchar *)(a4))->v) = 0x0;
                    return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, a6, 0x600);
                }
                return 0x0;
            }
            t51 = *(signed char *)((a5 + 0x0));
            if (((*(signed char *)(((((t51 << 2) << 2) + t26) + 0x0))) == 0) && ((t53 = *(int *)(((((t51 << 2) << 2) + t26) + 0x8)), t53 != 0) && ((t54 = *(signed char *)((a5 + 0x0)), t55 = *(int *)(((((t54 << 2) << 2) + t26) + 0x4)), ((t55 & t23) & 0x600) != 0) && (t56 = *(int *)(((((t54 << 2) << 2) + t26) + 0x8)), t57 = *(int *)(((((t54 << 2) << 2) + t26) + 0x8)), (((t56 & t23) & t57) & 240) != 0)))) {
                break;
            }
            t27 = (*(signed char *)((a5 + 0x0)));
            t27 = (t27 + 0x1);
            *(unsigned char *)((a5 + 0x0)) = t27;
        }
        *(unsigned char *)((a6 + 0x0)) = 0x1;
    }
    t65 = (((struct o2E4_int *)(a4))->v);
    if ((t65 & 0x600) != 0) {
        if ((*(signed char *)((a6 + 0x0))) == 0) {
            t69 = *(int *)((((*(signed char *)((a4 + 0x4))) << 2) + 0xC338E4C));
            t70 = 0x0;
            for (;;) {
                if ((*(signed char *)((t69 + (((signed char)t70 << 2) << 2)))) == 99) {
                    return 0x0;
                }
                if (((*(signed char *)((((((signed char)t70 << 2) << 2) + t69) + 0x0))) == 0) && ((t76 = *(int *)((((((signed char)t70 << 2) << 2) + t69) + 0x8)), t76 == 0) && (t77 = *(int *)((((((signed char)t70 << 2) << 2) + t69) + 0x4)), ((t77 & (t65 & 0x600)) & 0x600) != 0))) {
                    break;
                }
                t70 = (t70 + 0x1);
            }
            *(unsigned char *)((a5 + 0x0)) = t70;
            if ((0x400 & (t65 & 0x600)) == 0) {
                (((struct o721E_uchar *)(a4))->v) = 0x1;
                return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, t70, 0x600);
            }
            (((struct o721E_uchar *)(a4))->v) = 0x0;
            return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, t70, 0x600);
        }
        if ((0x400 & (t65 & 0x600)) == 0) {
            return ((int (*)(int, int, int, int))(0xC09E614))(a4, a5, a6, 0x600);
        }
        (((struct o721E_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int, int))(0xC09E618))(a4, a5, a6, 0x600);
    }
    return 0x0;
}

int FUN_0c0c74bc(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c059132(0x1, 0x1, 0x2);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    *(unsigned short *)((t0 + 0x6)) = 0x1F;
    *(unsigned char *)((t0 + 0x5)) = 0x19;
    *(unsigned int *)((t0 + 0x10)) = 0xC0C7780;
    t1 = *(signed char *)(((0x3 + a4) + 0x0));
    thunk_FUN_0c062242((((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4))) + (short)((short)(*(signed char *)(((unsigned char)a5 + 0xC153220))) * (short)0xB0)));
    FUN_0c0e6fe8();
    *(unsigned int *)((t0 + 0x2C)) = (*(int *)((((unsigned char)a5 << 2) + 0xC153228)));
    (((struct o58_float *)(t0))->v) = 0.099999994f;
    (((struct o54_float *)(t0))->v) = 0.099999994f;
    (((struct o50_float *)(t0))->v) = 0.099999994f;
    (((struct o118_uint *)(t0))->v) = 0x0;
    *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
    t1 = *(signed char *)((a4 + 0x3));
    FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x0);
    *(volatile int *)((t0 + 0x2E0));
    FUN_0c0e6fe8();
    (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
    *(unsigned int *)((t0 + 0x1C)) = a4;
    *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
    t1 = *(signed char *)((a4 + 0x3));
    FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x1);
    t1 = (((struct o2E4_int *)(t0))->v);
    (((struct o24_float *)(t1))->v) = 0.099999994f;
    (((struct o20_float *)(t1))->v) = 0.099999994f;
    (((struct o1C_float *)(t1))->v) = 0.099999994f;
    *(unsigned int *)((t0 + 0x1C)) = a4;
    (((struct oF2_ushort *)(t0))->v) = (unsigned char)a5;
    (((struct o101_uchar *)(t0))->v) = 0x1;
    (((struct o102_uchar *)(t0))->v) = 0x0;
    return FUN_0c0a1d88(t0, 0x74);
}

int FUN_0c0fba80(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if (((int)(((((struct o1C_int *)0xC816FFC)->v)) + a4) > (int)0xA) && (t0 = (((struct o14_int *)0xC816FFC)->v), t0 != a4)) {
        (((struct o14_uint *)0xC816FFC)->v) = a4;
        (((struct o0_uint *)0xC8172C0)->v) = (((((struct o1C_int *)0xC816FFC)->v)) + ((((struct o14_int *)0xC816FFC)->v)));
        kmiWriteRegister(0xEC, ((((struct o0_int *)0xC8172C0)->v)));
    }
    if (((int)(((((struct o20_int *)0xC816FFC)->v)) + a5) <= 0) && (t1 = (((struct o24_int *)0xC816FFC)->v), (int)(t1 + a5) <= 0)) {
    } else {
        if (((((struct o18_int *)0xC816FFC)->v)) == a5) {
        } else {
            (((struct o18_uint *)0xC816FFC)->v) = a5;
            (((struct o4_uint *)0xC8172C0)->v) = ((((((struct o20_int *)0xC816FFC)->v)) + ((((struct o18_int *)0xC816FFC)->v))) | ((((((struct o24_int *)0xC816FFC)->v)) + ((((struct o18_int *)0xC816FFC)->v))) << 16));
            kmiWriteRegister(0xF0, ((((struct o4_int *)0xC8172C0)->v)));
            if ((int)a5 > 0) {
                t0 = (((struct o0_int *)0xC817278)->v);
                t1 = (((struct o8_int *)0xC816FFC)->v);
                t2 = 0xC816FFC;
                if ((int)((((struct o0_int *)0xC816FFC)->v)) < (int)((((struct o18_int *)0xC816FFC)->v))) {
                    t2 = 0xC817014;
                }
                t3 = *(int *)((t2 + 0x0));
                t2 = (t1 - t3);
                if ((unsigned int)(((((struct o18_int *)0xC816FFC)->v)) + (t1 - t3)) > (unsigned int)((((struct o8_int *)0xC816FFC)->v))) {
                    t2 = (((((struct o8_int *)0xC816FFC)->v)) - ((((struct o0_int *)0xC816FFC)->v)));
                }
                if ((unsigned int)((((struct o8_int *)0xC816FFC)->v)) < (unsigned int)t2) {
                    (((struct o8_uint *)0xC816FFC)->v) = t2;
                }
                (((struct o0_uint *)0xC817278)->v) = ((((t2 & 0x3FF) << 8) << 2) | (t0 & 0xFFF003FF));
                kmiWriteRegister(0x44, (((((struct o8_int *)0xC817278)->v)) & 0xFFFFFFFE));
                kmiWriteRegister(0x5C, ((((struct o0_int *)0xC817278)->v)));
                kmiWriteRegister(0x44, ((((struct o8_int *)0xC817278)->v)));
            }
        }
    }
    return 0x0;
}

int kmiProcessVertex_10(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u22;
    register float u30;
    register int t31;

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
    u14 = (((struct o10_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    (((struct o18_uint *)0xC817064)->v) = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    u22 = (((struct o10_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    (((struct o28_uint *)0xC817064)->v) = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    u30 = (((struct o10_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o38_uint *)0xC817064)->v) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c049b7c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = FUN_0c059132(0x6, 0x1, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC049D14;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = -190.0f;
        if ((*(int *)0xC7F3020) != 0) {
            (((struct o3C_float *)(t0))->v) = (((((struct o3C_float *)(t0))->v)) + 16.0f);
        }
        (((struct o28_float *)(t0))->v) = -20.0f;
        u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o38_float *)(t0))->v)));
        (((struct o20_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
        u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o3C_float *)(t0))->v)));
        (((struct o24_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
        t2 = 0xC14A9E4;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), 0xC4CFA68, 0xFFFFFF8C);
            t5 = *(int *)((((0x2E0 + t0) + t4) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0x31F;
            (((struct oC_float *)(t5))->v) = 0.0f;
            u0 = *(float *)((t2 + 0x0));
            t6 = t2;
            t2 = (t2 + 0x8);
            (((struct o28_float *)(t5))->v) = (u0 * 0.75f);
            (((struct o2C_float *)(t5))->v) = (((((struct o4_float *)(t6))->v)) * 0.75f);
            u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o28_float *)(t5))->v)));
            (((struct o4_float *)(t5))->v) = ((-(u0 * 1.0f)) / 640.0f);
            u0 = (((((struct o28_float *)(t0))->v)) * ((((struct o2C_float *)(t5))->v)));
            (((struct o8_float *)(t5))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t3 = (t3 + 0x1);
            (((struct o1C_float *)(t5))->v) = ((-(((((struct o28_float *)(t0))->v)) * 0.75f)) / 640.0f);
            (((struct o20_float *)(t5))->v) = ((-(((((struct o28_float *)(t0))->v)) * 0.75f)) / 640.0f);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c0ab25e(int a4, int a5, int a6, int a7)
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
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3)));
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)0xC7F3051);
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC0AB410)->v));
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        FUN_0c0ab176(a4, 0x0);
        FUN_0c0ab176(a4, 0x1);
        u0 = (((struct o4_float *)0xC0AB410)->v);
        u1 = (((struct o8_float *)0xC0AB410)->v);
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u2 * 1.0f)) / u0);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u2 * 1.0f)) / u1);
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        u2 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u2 * 1.0f)) / u0);
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / u1);
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    t1 = t0;
    if ((int)t0 >= (int)0x3) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c09aebc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o102_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x0)));
    (((struct o101_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x1)));
    (((struct o71A3_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3)));
    t0 = *(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2));
    t1 = t0;
    if (t0 != 0) {
        t0 = 0x100;
        if ((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2))) == 0xFF) {
        } else {
            (((struct o100_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2)));
            t2 = *(signed char *)(((0x100 + a4) + 0x0));
            (((struct oF4_uint *)(a4))->v) = ((((t2 << 2) + t2) << 2) + (*(int *)((0xC338A98 + ((*(signed char *)((a4 + 0x4))) << 2)))));
            (((struct o108_uchar *)(a4))->v) = 0x0;
            t2 = (0x11C + a4);
            t3 = 0x0;
            for (;;) {
                t3 = (t3 + 0x1);
                *(unsigned int *)((t2 + 0x0)) = 0x0;
                t2 = (t2 + 0x4);
                if ((int)t3 >= (int)0xA) {
                    break;
                }
            }
            t0 = 0x144;
        }
        *(unsigned char *)((a4 + t0)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c02e2da(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x5));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c02df98(a4, 0x0, 0.0f, (*(float *)0xC02E4C4));
                if (t0 != 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x1;
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    (((struct o1C_uchar *)(a4))->v) = 0x14;
                }
                t0 = *(signed char *)(((0x1 + a4) + 0x0));
                (((struct o10_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC149398)))) - (*(float *)(((t0 << 2) + 0xC149388))));
                t1 = 0xC149388;
            }
            t0 = t1;
        } else {
            if ((*(int *)0xC7F3028) != 0) {
                (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
            }
            t1 = *(signed char *)((a4 + 0x1C));
            (((struct o1C_uchar *)(a4))->v) = (t1 - 1);
            t0 = 0x1C;
            if ((signed char)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                *(unsigned char *)((a4 + 0x2)) = 0x1;
                *(unsigned char *)((a4 + 0x3)) = 0x1;
                (((struct o2C_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
                t0 = 0x0;
            }
        }
        t1 = t0;
    } else {
        t0 = FUN_0c02df98(a4, 0x1, -200.0f, 808.0f);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
            (((struct o1C_uchar *)(a4))->v) = 0x14;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            (((struct o1E_uchar *)(a4))->v) = 0x0;
            (((struct o1D_uchar *)(a4))->v) = 0x0;
            (((struct oC_float *)(a4))->v) = 416.0f;
            t0 = *(signed char *)(((0x1 + a4) + 0x0));
            (((struct o10_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC149398)))) - (*(float *)(((t0 << 2) + 0xC149388))));
            (((struct o14_float *)(a4))->v) = ((float)((-((*(signed char *)((a4 + 0x1))) << 1)) + 0x1) * 44.0f);
        }
        t0 = *(signed char *)(((0x1 + a4) + 0x0));
        (((struct o18_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) + (*(float *)(((t0 << 2) + 0xC1493A0)))) - (*(float *)(((t0 << 2) + 0xC149390))));
        t1 = 0xC149390;
    }
    return t1;
}

int FUN_0c08d334(int a4)
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

    t0 = a4;
    t1 = (*(int *)((a4 + 0x10)));
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 != 4) {
                            if (t3 != 5) {
                                if (t3 != 6) {
                                    if (t3 != 7) {
                                        if (t3 != 8) {
                                            if (t3 != 9) {
                                                if (t3 != 10) {
                                                    *(unsigned char *)((a4 + 0x0)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                                    (((struct o1D_uchar *)(a4))->v) = 0x0;
                                                    (((struct o1E_uchar *)(a4))->v) = 0x0;
                                                    t3 = 0x1E;
                                                } else {
                                                    t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                                                    t5 = *(signed char *)((t1 + 0x1));
                                                    t1 = (t1 + 0x2);
                                                    *(unsigned short *)((a4 + 0xC)) = (t5 | t4);
                                                    *(unsigned char *)((a4 + 0xB)) = 0x1;
                                                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                                                    *(unsigned char *)((a4 + 0x5)) = 0x1;
                                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                                    t3 = 0x0;
                                                }
                                                t5 = t3;
                                                t3 = 0x0;
                                            } else {
                                                (((struct o1D_uchar *)(a4))->v) = 0x0;
                                                (((struct o1E_uchar *)(a4))->v) = 0x0;
                                                t5 = 0x1E;
                                                t3 = 0x1;
                                            }
                                            t6 = t5;
                                            t5 = t3;
                                        } else {
                                            (((struct o1E_uchar *)(a4))->v) = 0x0;
                                            t6 = 0x1E;
                                            t5 = 0x1;
                                        }
                                        t3 = t6;
                                        t6 = t5;
                                    } else {
                                        (((struct o1E_uchar *)(a4))->v) = 0x1;
                                        t3 = 0x1E;
                                        t6 = 0x1;
                                    }
                                    t5 = t3;
                                    t3 = t6;
                                } else {
                                    t0 = 0x4;
                                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                                    *(unsigned char *)((a4 + 0x5)) = t0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    t5 = 0x0;
                                    t3 = 0x0;
                                }
                                t6 = t5;
                                t5 = t3;
                                t3 = t4;
                                t7 = t0;
                            } else {
                                t8 = 0xC338540;
                                t0 = a4;
                                t9 = FUN_0c08cc90(t0, (*(int *)((t8 + ((*(signed char *)((a4 + 0x9))) << 2)))));
                                if ((signed char)t9 != 0) {
                                    *(unsigned char *)((a4 + 0x0)) = 0x1;
                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    t9 = 0x0;
                                } else {
                                    *(unsigned char *)((a4 + 0x0)) = 0x0;
                                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                                    (((struct o1D_uchar *)(a4))->v) = 0x0;
                                    (((struct o1E_uchar *)(a4))->v) = 0x0;
                                    t9 = 0x1E;
                                }
                                t6 = t9;
                                t5 = 0x0;
                            }
                            t9 = t6;
                            t6 = t5;
                            t5 = t3;
                            t3 = t7;
                        } else {
                            t7 = *(signed char *)((t1 + 0x0));
                            t1 = (t1 + 0x1);
                            t0 = 0x3;
                            *(unsigned short *)((a4 + 0xC)) = t7;
                            t7 = *(signed char *)((t1 + 0x0));
                            t1 = (t1 + 0x1);
                            *(unsigned short *)((a4 + 0xE)) = t7;
                            *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                            *(unsigned char *)((a4 + 0x5)) = t0;
                            *(unsigned char *)((a4 + 0x2)) = 0x0;
                            *(unsigned char *)((a4 + 0x3)) = 0x0;
                            t9 = 0x0;
                            t6 = 0x0;
                            t5 = t4;
                            t3 = t0;
                        }
                        t7 = t9;
                        t9 = t6;
                        t6 = t5;
                        t5 = t3;
                    } else {
                        t8 = 0xC150774;
                        t0 = a4;
                        t3 = FUN_0c08cc90(t0, t8);
                        t8 = (signed char)t3;
                        t9 = 0x1;
                        if ((signed char)t3 != 0) {
                            *(unsigned char *)((a4 + 0x0)) = 0x1;
                            *(unsigned char *)((a4 + 0x1)) = 0x0;
                            *(unsigned char *)((a4 + 0x2)) = 0x0;
                            *(unsigned char *)((a4 + 0x3)) = 0x0;
                            t8 = 0x0;
                            t9 = 0x0;
                        }
                        t7 = t8;
                    }
                    t3 = t7;
                    t7 = t9;
                    t8 = t6;
                    t6 = t5;
                } else {
                    t5 = *(signed char *)((t1 + 0x0));
                    t1 = (t1 + 0x1);
                    t0 = 0xC3383CC;
                    t4 = (*(int *)((t0 + (t5 << 2))));
                    *(unsigned int *)((a4 + 0x14)) = t4;
                    t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                    t5 = *(signed char *)((t1 + 0x1));
                    t1 = (t1 + 0x2);
                    *(unsigned short *)((a4 + 0xC)) = (t5 | t4);
                    t5 = *(signed char *)((t1 + 0x0));
                    t1 = (t1 + 0x1);
                    t4 = (*(int *)((t0 + (t5 << 2))));
                    t0 = 0x2;
                    *(unsigned int *)((a4 + 0x18)) = t4;
                    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                    *(unsigned char *)((a4 + 0x5)) = t0;
                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                    *(unsigned char *)((a4 + 0x3)) = 0x0;
                    t3 = 0x0;
                    t7 = 0x0;
                    t8 = t4;
                    t6 = t0;
                }
                t5 = t3;
                t3 = t7;
                t7 = t8;
                t8 = t6;
            } else {
                t4 = ((*(signed char *)((t1 + 0x0))) << 8);
                t6 = *(signed char *)((t1 + 0x1));
                t1 = (t1 + 0x2);
                *(unsigned short *)((a4 + 0xC)) = (t6 | t4);
                *(unsigned char *)((a4 + 0xB)) = 0x0;
                *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
                *(unsigned char *)((a4 + 0x5)) = 0x1;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                t5 = 0x0;
                t3 = 0x0;
                t7 = t4;
                t8 = t0;
            }
            t2 = t5;
            t5 = t3;
            t3 = t7;
            t6 = t8;
        } else {
            t4 = ((*(signed char *)((t1 + 0x0))) << 8);
            t7 = *(signed char *)((t1 + 0x1));
            t1 = (t1 + 0x2);
            *(unsigned short *)((a4 + 0xC)) = (t7 | t4);
            *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a4 + 0x5)));
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            *(unsigned char *)((a4 + 0x3)) = 0x0;
            t2 = 0x0;
            t5 = 0x0;
            t3 = t4;
            t6 = t0;
        }
        t4 = t3;
        t0 = t6;
        if ((signed char)t5 != 0) continue;
        break;
    }
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t2;
}

int FUN_0c0d9078(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((*(signed char *)0xC7E40CD) == 2) && (t0 = *(signed char *)0xC7EB306, t0 != 0)) {
        t0 = 0xC7EB394;
        if ((*(signed char *)0xC7E40CD) == 2) {
            t0 = 0xC7E40C4;
        }
        if ((*(signed char *)((t0 + 0x7242))) == 2) {
            t1 = *(signed char *)((t0 + 0xB));
            t2 = t1;
            if (t1 != 3) {
                t1 = 0xAC;
                if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                    (((struct oAC_uchar *)(a4))->v) = 0x60;
                    *(unsigned char *)((a4 + 0x2)) = 0x3;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t0 + 0x3)));
                    (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                    (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t0 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                    *(unsigned char *)((a4 + 0x3)) = 0x10;
                    t1 = 0x10;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = 0xAC;
            if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                (((struct oAC_uchar *)(a4))->v) = 0x60;
                *(unsigned char *)((a4 + 0x2)) = 0x3;
                *(unsigned char *)((a4 + 0x4)) = 0x0;
                *(unsigned char *)((a4 + 0x5)) = 0x0;
                *(unsigned char *)((a4 + 0x6)) = 0x0;
                (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t0 + 0x3)));
                (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t0 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                t3 = *(signed char *)((t0 + 0x4));
                t4 = *(signed char *)(((0x7209 + t0) + 0x0));
                FUN_0c0df940();
                *(volatile float *)0xC0D9278;
                t0 = *(signed char *)((((((t3 << 2) << 2) + 0xC344E34) + (t4 << 2)) + (FUN_0c0e6f24())));
                *(unsigned char *)((a4 + 0x3)) = t0;
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)0xC7EB39D;
        t2 = t1;
        if (t1 != 2) {
        } else {
            t1 = 0xE512;
            if ((*(signed char *)0xC7F25D6) == 0) {
            } else {
                t3 = 0xC7EB394;
                if ((*(signed char *)0xC7E40CD) == 2) {
                    t3 = 0xC7E40C4;
                }
                if ((*(signed char *)((t3 + 0x7242))) == 2) {
                    t4 = *(signed char *)((t3 + 0xB));
                    t5 = t4;
                    if (t4 != 3) {
                        t4 = 0xAC;
                        if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                            (((struct oAC_uchar *)(a4))->v) = 0x60;
                            *(unsigned char *)((a4 + 0x2)) = 0x3;
                            *(unsigned char *)((a4 + 0x4)) = 0x0;
                            *(unsigned char *)((a4 + 0x5)) = 0x0;
                            *(unsigned char *)((a4 + 0x6)) = 0x0;
                            (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t3 + 0x3)));
                            (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t3 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                            (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t3 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                            *(unsigned char *)((a4 + 0x3)) = 0x10;
                            t4 = 0x10;
                        }
                        t5 = t4;
                    }
                    t4 = t5;
                } else {
                    t5 = 0xAC;
                    if ((int)(unsigned char)(*(signed char *)0xC7F2AA4) <= (int)0x60) {
                        (((struct oAC_uchar *)(a4))->v) = 0x60;
                        *(unsigned char *)((a4 + 0x2)) = 0x3;
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                        *(unsigned char *)((a4 + 0x5)) = 0x0;
                        *(unsigned char *)((a4 + 0x6)) = 0x0;
                        (((struct o184_uchar *)(a4))->v) = (*(signed char *)((t3 + 0x3)));
                        (((struct o1A0_uint *)(a4))->v) = (((unsigned short)((unsigned short)(*(signed char *)((t3 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
                        (((struct o1A4_uint *)(a4))->v) = ((0xC7E40C4 + (unsigned short)((unsigned short)((((*(signed char *)((t3 + 0x3))) == 0)) ? 1 : 0) * (unsigned short)0x72D0)) + 0x20);
                        t6 = *(signed char *)((t3 + 0x4));
                        t7 = *(signed char *)(((0x7209 + t3) + 0x0));
                        FUN_0c0df940();
                        *(volatile float *)0xC0D9278;
                        t3 = *(signed char *)((((((t6 << 2) << 2) + 0xC344E34) + (t7 << 2)) + (FUN_0c0e6f24())));
                        *(unsigned char *)((a4 + 0x3)) = t3;
                        t5 = t3;
                    }
                    t4 = t5;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c02e144(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x5));
    t1 = *(int *)0xC7F3028;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t2 = t0;
                        if (t0 == 5) {
                            t0 = FUN_0c02df98(a4, 0x0, 0.0f, 608.0f);
                            t3 = t0;
                            if (t0 != 0) {
                                *(unsigned char *)((a4 + 0x4)) = 0x3;
                                *(unsigned char *)((a4 + 0x5)) = 0x0;
                                t3 = 0x0;
                            }
                            t2 = t3;
                        }
                        t0 = t2;
                    } else {
                        if (t1 != 0) {
                            (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
                        }
                        t2 = *(signed char *)((a4 + 0x1C));
                        (((struct o1C_uchar *)(a4))->v) = (t2 - 1);
                        t3 = 0x1C;
                        if ((signed char)(t2 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                            *(unsigned char *)((a4 + 0x2)) = 0x1;
                            (((struct o1E_uchar *)(a4))->v) = 0x1;
                            (((struct o18_float *)(a4))->v) = (*(float *)((0xC1493A0 + ((*(signed char *)((a4 + 0x1))) << 2))));
                            (((struct o2C_uchar *)(a4))->v) = 0x2;
                            *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
                            t3 = 0x0;
                        }
                        t0 = t3;
                    }
                    t2 = t0;
                } else {
                    if (t1 != 0) {
                        (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
                    }
                    t0 = *(signed char *)((a4 + 0x1C));
                    (((struct o1C_uchar *)(a4))->v) = (t0 - 1);
                    if ((signed char)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                        *(unsigned char *)((a4 + 0x3)) = 0x0;
                        (((struct o1C_uchar *)(a4))->v) = 0x14;
                    }
                    t2 = 0x1C;
                }
                t0 = t2;
            } else {
                FUN_0c02e050(a4, f4, f5);
                if ((*(signed char *)((a4 + 0x2))) != 0) {
                    t1 = FUN_0c02df98(a4, 0x1, -200.0f, 808.0f);
                    if (t1 != 0) {
                        *(unsigned char *)((a4 + 0x2)) = 0x0;
                        (((struct o1D_uchar *)(a4))->v) = 0x1;
                        (((struct oC_float *)(a4))->v) = 416.0f;
                    }
                }
                t1 = 0x14;
                if (((float)(*(signed char *)((a4 + 0x2))) + ((((struct o14_float *)(a4))->v))) == 0.0f) {
                    *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
                    (((struct o1C_uchar *)(a4))->v) = 0xA;
                    t1 = 0x1C;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            FUN_0c02e050(a4, f4, f5);
            if ((*(int *)0xC7F3028) != 0) {
                (((struct o1C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1C))) + 0x1);
            }
            t0 = *(signed char *)((a4 + 0x1C));
            (((struct o1C_uchar *)(a4))->v) = (t0 - 1);
            t2 = 0x1C;
            if ((signed char)(t0 - 1) == 0) {
                FUN_0c048074((*(signed char *)((a4 + 0x1))));
                t0 = *(signed char *)((a4 + 0x5));
                *(unsigned char *)((a4 + 0x5)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
        (((struct o1C_uchar *)(a4))->v) = 0x1;
        (((struct o2C_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)(((a4 + 0x2C) + 0x2)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}
