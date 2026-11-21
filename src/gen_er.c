/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int ADXF_Close(int);
int ADXF_Open(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSTM_GetFad(int, int);
int FUN_0c0e6102(int, int);
int FUN_0c0e64c4(int);
int FUN_0c0e6668(int, int, int);
int FUN_0c0e6afc(int, int);
int FUN_0c0e6b60(int, int);
int FUN_0c106688(int, int);
int FUN_0c107432(int, int, int, int, int);
int FUN_0c108734(void);
int FUN_0c10874c(int, int);
int FUN_0c109e20(int, int);
int FUN_0c109fae(int, int, int, int, int, int);
int FUN_0c10a2e0(int, int, int, int);
int FUN_0c10a7e0(int, int, int);
int FUN_0c10b5f2(int);
int FUN_0c10c760(Stk63);
int FUN_0c115174(int, int);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int, int, int, int, int, int, int, int, int);
int gdFsLoadDir(void);
int nlInitMatrixStack(int, int, int);
int nlLoadMatrix(int);
int nlStoreMatrix(int);
int syRtcDateToCount(void);
int thunk_FUN_0c115240(int, int, int);
int FUN_0c0f50dc(int a4, int a5, int a6, int a7);
int FUN_0c1076ba(int a4, int a5, int a6, int a7);
int FUN_0c11574c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int FUN_0c107abc(int a4);
int FUN_0c10cf60(void);
int FUN_0c1095c2(int a4, int a5);
int FUN_0c1089f4(int a4, int a5, int a6, int a7);
int FUN_0c113e3c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int FUN_0c1092e0(int a4, int a5);
int FUN_0c1077d4(int a4);
int FUN_0c109382(int a4, int a5, int a6);
int set_vmstime(int a4, int a5);
int FUN_0c106436(int a4, int a5, int a6, int a7);
int FUN_0c115032(int a4, int a5, int a6);
int FUN_0c0ffbac(int a4, int a5);
int FUN_0c109f4c(int a4, int a5, int a6);
int FUN_0c109440(int a4, int a5, int a6);
int FUN_0c0ffb56(int a4, int a5);
int nlSelectMatrixStack(int a4);
int FUN_0c115128(int a4, int a5);
int nlInitMatrix(int a4, int a5);
int syRtcMakeAgeOfMoon(void);
int FUN_0c114d44(int a4, int a5, int a6);
int syRtcMakeDayOfWeek(int a4, int a5, int a6);
int FUN_0c0ff8ba(int a4);
int ADXSTM_GetFsizeSct(int a4, int a5);
int adxt_eos_entry(int a4);
int DECtoBCD(int a4);
int FUN_0c0e4960(int a4, int a5);

int FUN_0c0f50dc(int a4, int a5, int a6, int a7)
{
    int stk[7];

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
    v0_9 = a5;
    v0_8 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    *(unsigned int *)(((int)stk + 0)) = v0_9;
    *(unsigned int *)(((int)stk + 8)) = v0_8;
    v0_3 = adxf_ChkPrmPt((*(int *)(((int)stk + 4))), v0_8);
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    if (((int)v0_3 >= 0)) goto L_C0F5106;
    L_C0F5220:;
    v0_1 = (v0_2);
    L_C0F5224:;
    return v0_1;
    L_C0F5106:;
    v0_2 = (int)(ADXSTM_GetFad((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC))) < 0;
    if (v0_2) goto L_C0F5122;
    v0_2 = ADXF_Open((*(int *)(((int)stk + 0))));
    *(unsigned int *)(((int)stk + 16)) = v0_2;
    if (!((v0_2 != 0))) goto L_C0F5122;
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((*(int *)(((int)stk + 4))) << 2) + 0xC7FF7E8)) = v0_5;
    *(unsigned int *)((v0_5 + 0x0)) = 0x0;
    *(unsigned int *)((v0_5 + 0x8)) = (*(int *)(((int)stk + 12)));
    (((struct o12_uchar *)(v0_5))->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + 0x14);
    *(unsigned int *)(((int)stk + 8)) = ((v0_5 + 0x14) + 0x2);
    *(unsigned int *)((v0_5 + 0xC)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC7FFC08;
    v0_3 = (0x0);
    v0_4 = (0xC7FFC00);
    v0_8 = (0x0);
    v0_2 = (0xFFFFFFFF);
    v0_5 = (v0_5);
    v0_6 = (0xC7FFC04);
    goto L_C0F5216;
    L_C0F5122:;
    v0_1 = (0xFFFFFFFF);
    goto L_C0F5224;
    L_C0F5216:;
    v0_7 = (0x3);
    if (!(((int)v0_8 < (int)0x3))) goto L_C0F521C;
    v0_7 = (int)(adxf_LoadData((*(int *)(((int)stk + 16))), 0x1, v0_4, v0_1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))) <= 0;
    if (v0_7) goto L_C0F5214;
    v0_8 = (0x800);
    if (((*(int *)((v0_5 + 0xC))) != 0)) goto L_C0F51B8;
    v0_7 = (0x10000);
    if (((int)(*(int *)((v0_6 + 0x0))) <= (int)0x10000)) goto L_C0F5184;
    *(unsigned int *)((v0_6 + 0x0)) = v0_7;
    v0_2 = (0xFFFFFFFC);
    goto L_C0F521C;
    L_C0F521C:;
    ADXF_Close((*(int *)(((int)stk + 16))));
    goto L_C0F5220;
    L_C0F5184:;
    v0_1 = *(int *)((v0_6 + 0x0));
    v0_7 = (v0_1);
    if (((int)v0_0 >= (int)v0_1)) goto L_C0F518E;
    v0_1 = (v0_0);
    L_C0F5192:;
    *(unsigned short *)((v0_5 + 0x10)) = v0_1;
    *(unsigned int *)((v0_5 + 0xC)) = (unsigned short)v0_1;
    *(unsigned int *)((v0_5 + 0x4)) = (((unsigned int)((((unsigned short)v0_1 + 0x1) << 1) + 0x16) >> 2) << 2);
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = ((int)((int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) / (int)v0_8));
    v0_7 = (0x3);
    L_C0F51BA:;
    v0_9 = (((v0_7 << 2) + v0_4));
    v0_1 = (0x200);
    if (((int)v0_7 >= (int)0x200)) goto L_C0F5210;
    L_C0F51C6:;
    *(unsigned short *)((((v0_3 << 1) + (*(int *)(((int)stk + 8)))) + 0x0)) = ((int)((int)((*(int *)((v0_9 + 0x0))) + 0x7FF) / (int)v0_8));
    v0_10 = (int)(v0_3 + 0x1) < (int)(*(int *)((v0_5 + 0xC)));
    v0_3 = ((v0_3 + 0x1));
    if (v0_10) goto L_C0F5208;
    v0_2 = (0x0);
    goto L_C0F521C;
    L_C0F5208:;
    v0_10 = (int)(v0_7 + 0x2) < (int)v0_1;
    v0_7 = ((v0_7 + 0x2));
    v0_9 = ((v0_9 + 0x8));
    if (v0_10) goto L_C0F51C6;
    L_C0F5210:;
    v0_8 = (0x0);
    goto L_C0F5216;
    L_C0F518E:;
    v0_1 = (v0_7);
    goto L_C0F5192;
    L_C0F51B8:;
    v0_7 = (0x1);
    goto L_C0F51BA;
    L_C0F5214:;
    v0_8 = ((v0_8 + 0x1));
    goto L_C0F5216;
}

int FUN_0c1076ba(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t2;
    register int t16;
    register int t20;
    register int t23;
    register int t24;
    register int t25;
    register int t31;
    register int t0;
    int t22;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((a4 + 0x18) + ((t2 << 2) << 1)) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((((t2 << 2) << 1) + (a4 + 0x18)) + 0x4)));
        thunk_FUN_0c115240((((int)stk + 4) + 0x10), ((int)((int)(((((struct o44_int *)(a4))->v)) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((int)stk + 4) + 0x8));
        t24 = t2;
        t24 = (t24 << 2);
        t0 = a4;
        t0 = (t0 + 0x10);
        t0 = (t0 + t24);
        t0 = (*(int *)((t0 + 0x0)));
        t16 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0x8), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t0 = a4;
        t0 = (t0 + 0x10);
        t0 = (t0 + t24);
        t0 = (*(int *)((t0 + 0x0)));
        t20 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, ((int)stk + 4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t2 = (t2 + 0x1);
    }
    if (((*(int *)((a4 + 0x34))) == 0) && (t22 = *(int *)((a4 + 0xC)), t22 != 0xAC44)) {
        t23 = 0xC115234;
        t25 = 0x0;
        for (;;) {
            if ((int)t25 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t23 = t25;
            t23 = (t23 << 2);
            t23 = (t23 << 1);
            t23 = (t23 + (a4 + 0x18));
            t24 = t25;
            t23 = (*(int *)((t23 + 0x0)));
            t24 = (t24 << 2);
            t24 = (t24 + (a4 + 0x28));
            t31 = (int)((int)((*(int *)((a4 + 0x30))) * (*(int *)((a4 + 0x8)))) / (int)0x8);
            t24 = (*(int *)((t24 + 0x0)));
            *(int *)((int)stk + 0) = 0x4;
            t24 = (t24 + t31);
            FUN_0c107432(a4, t25, t23, t24, 0x4);
            t25 = (t25 + 0x1);
        }
    }
    *(unsigned int *)((a4 + 0x34)) = ((int)((int)((*(int *)((a4 + 0x34))) + ((((struct o44_int *)(a4))->v))) % (int)(*(int *)((a4 + 0x30)))));
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + ((((struct o44_int *)(a4))->v)));
    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) + ((((struct o44_int *)(a4))->v)));
    return 0x84;
}

int FUN_0c11574c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    register int t0;

    if ((int)a5 < (int)0x10) {
        return 0xFFFFFFFF;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
        return 0xFFFFFFFE;
    }
    t0 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFFFFFF00)) + 0x4);
    *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a4 + 0x4)));
    *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a4 + 0x6)));
    *(unsigned char *)((a10 + 0x0)) = (*(signed char *)((a4 + 0x7)));
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8));
    t0 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8));
    *(unsigned int *)((a13 + 0x0)) = ((int)((int)((((*(signed char *)((a9 + 0x0))) - 2) << 2) << 1) / (int)(*(signed char *)((a8 + 0x0)))));
    return 0x0;
}

int FUN_0c107abc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x3C));
    t1 = *(int *)((a4 + 0x30));
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 2);
        t3 = (t3 + (a4 + 0x10));
        t3 = (*(int *)((t3 + 0x0)));
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x18)))))(t3, 0x1, ((int)((int)(((((int)(t1 - t0) >> 4) << 2) << 2) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((t2 << 2) << 1) + (a4 + 0x18)));
        t2 = (t2 + 0x1);
    }
    t2 = *(int *)((a4 + 0x8));
    t4 = (int)((int)(*(int *)((a4 + 0x1C))) / (int)t2);
    t5 = ((t4 << 2) << 1);
    if ((int)((t4 << 2) << 1) >= (int)((((int)(t1 - t0) >> 4) << 2) << 2)) {
        t5 = ((((int)(t1 - t0) >> 4) << 2) << 2);
    }
    t0 = *(int *)((a4 + 0x34));
    t1 = *(int *)((a4 + 0x30));
    t4 = t5;
    if ((int)t5 >= (int)(t1 - t0)) {
        t4 = (t1 - t0);
    }
    t0 = (int)((int)(((((int)t4 >> 4) << 2) << 2) * t2) / (int)0x8);
    t1 = t2;
    t2 = t3;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t4 = (t4 << 1);
        t4 = (t4 + (a4 + 0x18));
        t2 = t3;
        t4 = (*(int *)((t4 + 0x0)));
        t2 = (t2 << 2);
        t2 = (t2 + (a4 + 0x28));
        t2 = (*(int *)((t2 + 0x0)));
        t2 = (t2 + ((int)((int)((*(int *)((a4 + 0x34))) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
        t1 = a4;
        t1 = (FUN_0c107432(t1, t3, t4, t2, (t0)));
        t3 = (t3 + 0x1);
    }
    t0 = (int)((int)t1 / (int)(*(int *)((a4 + 0x8))));
    (((struct o44_uint *)(a4))->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}

int FUN_0c10cf60(void)
{
    int stk[126];
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    *(unsigned int *)((((int)stk + 252) + 0x8)) = 0x359;
    *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x20C;
    *(unsigned int *)((((int)stk + 252) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 252) + 0x4)) = 0x345;
    *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x28;
    *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x208;
    *(unsigned int *)((((int)stk + 252) + 0x18)) = 0x3F;
    *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x3;
    *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x319;
    *(unsigned int *)((((int)stk + 252) + 0x24)) = 0xF;
    (((struct o74_uint *)(((int)stk + 252)))->v) = 0x208;
    (((struct o78_uint *)(((int)stk + 252)))->v) = 0x15;
    *(unsigned int *)((((int)stk + 252) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 252)))->v) = 0x0;
    if ((*(int *)0xC816FC4) == 6) {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x1F;
    }
    (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x28)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x2C)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
    (((struct o48_uint *)(((int)stk + 252)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o60_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o64_uint *)(((int)stk + 252)))->v) = 0x1E0;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0x90;
    (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x23;
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x23;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0xA8;
    (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x28;
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x28;
    (((struct o8_uint *)0xC8172D0)->v) = 0x1E0;
    (((struct o0_uint *)0xC8172D0)->v) = ((*(int *)((((int)stk + 252) + 0xC))) + ((((struct o8_int *)0xC8172D0)->v)));
    (((struct o4_uint *)0xC8172D0)->v) = (*(int *)((((int)stk + 252) + 0xC)));
    t7 = ((int)stk + 252);
    t8 = (((int)stk + 252) + 252);
    t9 = ((int)stk + 0);
    for (;;) { t10 = *(int *)t7; t7 = (t7 + 4); if ((unsigned int)t8 < (unsigned int)t7) break; *(unsigned int *)t9 = t10; t9 = (t9 + 4); }
    return (FUN_0c10c760(*(Stk63 *)((int)stk + 0)));
}

int FUN_0c1095c2(int a4, int a5)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t11;
    register int t12;
    register int t22;

    t0 = (int)((int)a4 % (int)0x20);
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t4 = FUN_0c10a7e0(0x0, t1, a5);
    t7 = t4;
    if (t4 == 0) {
        t7 = (FUN_0c10a7e0(0x1, t1, a5));
    }
    if (t7 != 0) {
        *(unsigned int *)((a5 + 0x1C)) = (*(int *)((t7 + 0xC)));
        *(unsigned int *)((t7 + 0x14)) = a5;
        *(unsigned short *)((t7 + 0x0)) = ((*(short *)((t7 + 0x0))) | 0x4);
        t22 = 0x0;
    } else {
        t11 = FUN_0c109e20(t1, a5);
        t22 = 0x3;
        if (t11 == -1) {
        } else {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0x1;
            t12 = FUN_0c109fae(0x0, t11, t1, a5, 0x1, 0x1);
            t22 = t12;
            if (t12 == 0) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x1;
                t22 = (FUN_0c109fae(0x1, ((*(int *)0xC34763C) + t11), t1, (((int)stk + 0) + 0x8), 0x1, 0x0));
            }
        }
    }
    return t22;
}

int FUN_0c1089f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c108734();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = (int)((int)(((*(int *)((a4 + 0x14))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
        if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
            *(unsigned int *)((a4 + 0x14)) = t2;
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
            } else {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0x20));
            t2 = (int)((int)(((*(int *)((a4 + 0x18))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
            if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
                *(unsigned int *)((a4 + 0x18)) = t2;
                *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return FUN_0c10874c(a4, t0);
}

int FUN_0c113e3c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)((unsigned int)a5 >> 2) > 0) {
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((a4 + (t0 << 2)))) != (*(int *)(((*(int *)0xC34770C) + 0x0)))) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)((unsigned int)a5 >> 2)) {
                    break;
                }
                continue;
            }
            break;
        }
        t1 = t0;
    } else {
        t1 = 0x0;
    }
    t0 = 0xFFFFFFFF;
    if (t1 == ((unsigned int)a5 >> 2)) {
    } else {
        t2 = *(int *)((a4 + ((t1 + 0x1) << 2)));
        *(unsigned short *)((a6 + 0x0)) = ((t1 + 0x2) << 2);
        *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a11 + 0x0)) = (*(int *)(((a4 + 0x14) + 0x4)));
        *(unsigned char *)((a10 + 0x0)) = (*(short *)(((a4 + 0x14) + 0x2)));
        *(unsigned char *)((a8 + 0x0)) = (*(short *)(((a4 + 0x14) + 0xE)));
        *(unsigned char *)((a9 + 0x0)) = (*(short *)(((a4 + 0x14) + 0xC)));
        *(unsigned int *)((a12 + 0x0)) = ((int)((int)t2 / (int)(*(signed char *)((a9 + 0x0)))));
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        if ((*(signed char *)((a8 + 0x0))) == 4) {
            *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
            *(unsigned int *)((a13 + 0x0)) = 0x4;
            *(unsigned int *)((a12 + 0x0)) = ((int)((unsigned int)((unsigned int)t2 >> 1) / (unsigned int)(*(signed char *)((a10 + 0x0)))));
        }
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c1092e0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (int)((int)a4 % (int)0x20);
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    if (((((struct o20_int *)0xC347658)->v)) != t1) {
        if (((*(int *)0xC816FC8) & 4) != 0) {
            t0 = 0x0;
            if ((unsigned int)((((struct o0_int *)0xC347658)->v)) < (unsigned int)((((struct o14_int *)0xC347658)->v))) {
                t0 = 0x1;
            }
            t2 = (FUN_0c10a2e0(t0, (t1 << 1), a5, 0x8));
        } else {
            t2 = (FUN_0c10a2e0(0x0, (t1 << 1), a5, 0x8));
        }
        if (t2 == 0) {
            (((struct o20_uint *)0xC347658)->v) = t1;
            (((struct o1C_uint *)0xC347658)->v) = (*(int *)((a5 + 0x1C)));
            t0 = *(int *)((a5 + 0x1C));
            *(unsigned int *)((a5 + 0x14)) = t1;
            *(unsigned int *)((a5 + 0x1C)) = (FUN_0c10b5f2(t0));
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a5 + 0x14)) = t1;
        *(unsigned int *)((a5 + 0x1C)) = (FUN_0c10b5f2((((((struct o1C_int *)0xC347658)->v)) + 0x4)));
        (((struct o20_uint *)0xC347658)->v) = 0x0;
        (((struct o1C_uint *)0xC347658)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c1077d4(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((((((struct o54_int *)(a4))->v)) == 0) && (t0 = *(int *)((a4 + 0xC)), t0 != 0xAC44)) {
        t0 = 0xC815534;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t0 = 0xC815D34;
        }
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + (a4 + 0x28));
            t2 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + ((int)((int)((*(int *)((a4 + 0x30))) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
            FUN_0c107432(a4, t1, t0, t2, 0x4);
            t1 = (t1 + 0x1);
        }
    }
    (((struct o54_uint *)(a4))->v) = ((int)((int)(((((struct o54_int *)(a4))->v)) + ((((struct o5C_int *)(a4))->v))) % (int)(*(int *)((a4 + 0x30)))));
    (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + ((((struct o5C_int *)(a4))->v)));
    return 0x58;
}

int FUN_0c109382(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (int)((int)a4 % (int)0x20);
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    if (((*(int *)0xC816FC8) & 4) != 0) {
        t0 = 0x0;
        if ((unsigned int)((((struct o0_int *)0xC347658)->v)) <= (unsigned int)((((struct o14_int *)0xC347658)->v))) {
            t0 = 0x1;
        }
        t2 = (FUN_0c10a2e0(t0, (t1 << 1), a5, 0x8));
    } else {
        t2 = (FUN_0c10a2e0(0x0, (t1 << 1), a5, 0x8));
    }
    if (t2 == 0) {
        t0 = *(int *)((a5 + 0x1C));
        *(unsigned int *)((a5 + 0x14)) = t1;
        *(unsigned int *)((a5 + 0x1C)) = (FUN_0c10b5f2(t0));
        *(unsigned int *)((a6 + 0x14)) = t1;
        *(unsigned int *)(((a6 + 0x1C) + 0x0)) = (FUN_0c10b5f2((t0 + 0x4)));
    }
    return t2;
}

int set_vmstime(int a4, int a5)
{
    register int t16;

    *(unsigned char *)((a4 + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) / (int)0x64))));
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) % (int)0x64))));
    *(unsigned char *)((((a4 + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)(((((a4 + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)(((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t16 = *(signed char *)((a5 + 0x7));
    *(unsigned char *)(((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((0xC15B0B4 + ((unsigned char)t16 & 0x7))));
    return ((unsigned char)t16 & 0x7);
}

int FUN_0c106436(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t11;
    register int t12;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((short)((short)t0 * (short)0x64) + 0xC814454) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 32) {
        t12 = 0x0;
    } else {
        *(unsigned char *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x1)) = 0x1;
        *(unsigned char *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x2)) = 0x0;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x4)) = a7;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x8)) = a4;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0xC)) = 0x0;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x10)) = a5;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x14)) = a6;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x2C)) = 0x20;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x30)) = ((int)((int)((*(int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x14))) + 0x7FF) / (int)0x800));
        *(unsigned char *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x0)) = 0x1;
        t11 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a7 + 0x0))) + 0x24)))))(a7, 0x0, a6, 0x1);
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x18)) = t11;
        *(unsigned int *)(((0xC814454 + (short)((short)t0 * (short)0x64)) + 0x1C)) = t11;
        t12 = (0xC814454 + (short)((short)t0 * (short)0x64));
    }
    return t12;
}

int FUN_0c115032(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0xFFFFFFC0;
    if ((int)(short)a5 <= (int)0xFFFFFF9C) {
    } else {
        t1 = 0x3F;
        if ((int)(short)a5 >= (int)0x64) {
        } else {
            t1 = ((int)((int)((((short)a5 << 2) << 2) << 2) / (int)0x64));
        }
        t0 = t1;
    }
    t1 = 0xFFFFFFC0;
    if ((int)(short)a6 <= (int)0xFFFFFF9C) {
    } else {
        t1 = 0x3F;
        if ((int)(short)a6 >= (int)0x64) {
        } else {
            t1 = ((int)((int)((((short)a6 << 2) << 2) << 2) / (int)0x64));
        }
    }
    FUN_0c0e6afc((*(short *)((a4 + 0x2))), t0);
    FUN_0c0e6b60((*(short *)((a4 + 0x2))), t1);
    return 0x0;
}

int FUN_0c0ffbac(int a4, int a5)
{
    register int t6;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t6 = 0x20;
        if ((unsigned short)a5 != 1) {
            t6 = 0x200;
            if ((unsigned short)a5 != 3) {
                t6 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t6 = 0x80;
                }
            }
        }
    }
    return ((((int)((unsigned int)a4 / (unsigned int)t6)) * 0x64) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)t6)) * 0x64) / (unsigned int)t6)));
}

int FUN_0c109f4c(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t3 = *(int *)(((signed char)(((a4 << 2) + a4) << 2) + 0xC347650));
    t4 = 0x0;
    if (t3 != 0) {
        t5 = 0x0;
        t6 = a4;
        t7 = t3;
        for (;;) {
            t3 = *(int *)((t7 + 0xC));
            if (((int)t3 <= (int)a5) && ((t0 = *(int *)((t7 + 0x10)), t6 = t0, t6 = (t6 + t3), (int)t6 > (int)a5) && (((int)t3 <= (int)(a5 + a6)) && (t1 = *(int *)((t7 + 0x10)), t2 = t1, t2 = (t2 + t3), (int)t2 >= (int)(a5 + a6))))) {
                t5 = t7;
                t7 = 0x0;
            } else {
                t7 = (*(int *)((t7 + 0x8)));
            }
            if (t7 == 0) {
                break;
            }
        }
        t4 = t5;
    }
    if (t4 == 0) {
        return 0x3;
    }
    return 0x0;
}

int FUN_0c109440(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (int)((int)a4 % (int)0x20);
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t0 = FUN_0c10a2e0(0x0, (t1 << 1), a5, 0x2000);
    if (t0 == 0) {
        t1 = *(int *)((a5 + 0x0));
        *(unsigned int *)((a5 + 0x0)) = (FUN_0c10b5f2(t1));
        *(unsigned int *)((a6 + 0x0)) = (FUN_0c10b5f2((t1 + 0x4)));
    }
    return t0;
}

int FUN_0c0ffb56(int a4, int a5)
{
    register int t6;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t6 = 0x20;
        if ((unsigned short)a5 != 1) {
            t6 = 0x200;
            if ((unsigned short)a5 != 3) {
                t6 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t6 = 0x80;
                }
            }
        }
    }
    return ((((int)((unsigned int)a4 / (unsigned int)0x64)) * t6) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)0x64)) * t6) / (unsigned int)0x64)));
}

int nlSelectMatrixStack(int a4)
{
    register int t0;

    nlStoreMatrix(0x0);
    t0 = *(signed char *)0xC7FCCB0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC7FCCB4)) = *(struct mv3 *)(0xC7FCCB4); }
    (((struct o0_uchar *)0xC7FCCB0)->v) = a4;
    t0 = *(signed char *)0xC7FCCB0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC7FCCB4) = *(struct mv3 *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC7FCCB4)); }
    return nlLoadMatrix(((((struct oC_int *)0xC7FCCB0)->v)));
}

int FUN_0c115128(int a4, int a5)
{
    register int t1;

    t1 = *(signed char *)((0xC15B774 + ((int)((int)0xAC44 / (int)(a5 + 0x1)))));
    FUN_0c0e6668((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), (0xF & (-t1)), (0x3FF & ((int)((int)(((a5 - ((int)0xAC44 << (int)(-t1))) << 8) << 2) / (int)((int)0xAC44 << (int)(-t1))))));
    return 0x0;
}

int nlInitMatrix(int a4, int a5)
{
    register int t2;

    nlInitMatrixStack(0xC7FCCCC, 0xC7FCCE4, 0x3);
    nlInitMatrixStack(0xC7FCCD8, 0xC7FCDA4, 0x3);
    t2 = nlInitMatrixStack(0xC7FCCC0, a4, (a5 + 0x1));
    *(unsigned char *)0xC7FCCB0 = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC7FCCB4) = *(struct mv3 *)(0xC7FCCC0); }
    return t2;
}

int syRtcMakeAgeOfMoon(void)
{
    int stk[1];
    register int t9;

    syRtcDateToCount();
    if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)0x5CB417D1) {
        t9 = ((int)((unsigned int)((*(int *)(((int)stk + 0))) + 0xA34BE82F) % (unsigned int)0x26EE7F));
    } else {
        t9 = (0x26EE7F - ((int)((unsigned int)(0x5CB417D1 - (*(int *)(((int)stk + 0)))) % (unsigned int)0x26EE7F)));
    }
    return ((int)((unsigned int)t9 / (unsigned int)0x15180));
}

int FUN_0c114d44(int a4, int a5, int a6)
{
    register int t3;

    if ((*(signed char *)((a4 + 0x1))) == 0) {
        FUN_0c115128(a4, a6);
        FUN_0c115174(a4, a5);
        t3 = 0x2710;
        for (;;) {
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
    }
    FUN_0c0e6102((*(short *)((a4 + 0x2))), (*(int *)(((*(int *)((a4 + 0x10))) + 0x4))));
    FUN_0c0e64c4((*(short *)((a4 + 0x2))));
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    return 0x0;
}

int syRtcMakeDayOfWeek(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = a5;
    if ((int)(unsigned char)a5 <= (int)0x2) {
        t0 = (a4 - 1);
        t1 = (a5 + 0xC);
    }
    return ((int)((int)(((((((unsigned short)t0 >> 1) >> 1) + ((int)((int)(((unsigned short)(unsigned char)t1 * (unsigned short)0xD) + 0x8) / (int)0x5))) + (unsigned short)t0) + (unsigned char)a6) - 15) % (int)0x7));
}

int FUN_0c0ff8ba(int a4)
{
    return (((((((int)((unsigned int)a4 / (unsigned int)0x64)) << 2) << 2) << 2) << 1) + ((int)((unsigned int)((((((int)((unsigned int)a4 % (unsigned int)0x64)) << 2) << 2) << 2) << 1) / (unsigned int)0x64)));
}

int ADXSTM_GetFsizeSct(int a4, int a5)
{
    int stk[4];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = gdFsLoadDir();
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = ((int)((int)((*(int *)(((int)stk + 8))) + 0x7FF) / (int)0x800));
    return t0;
}

int adxt_eos_entry(int a4)
{
    register int t0;
    register int t3;

    t0 = *(int *)((a4 + 0x8));
    t3 = (int)((int)(ADXSJD_GetLpStartOfst((*(int *)((a4 + 0x4))))) / (int)0x800);
    return FUN_0c106688(t0, t3);
}

int DECtoBCD(int a4)
{
    return (((((int)((unsigned int)a4 / (unsigned int)0xA)) << 2) << 2) + ((int)((unsigned int)a4 % (unsigned int)0xA)));
}

int FUN_0c0e4960(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((0xC0001C0 + ((int)((int)(*(short *)((((a4 - 4) << 1) + 0xC155B10))) / (int)0x8)))));
    return 0x1;
}
