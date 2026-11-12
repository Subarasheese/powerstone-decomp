/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct o7210_uchar { char p[0x7210]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721F_uchar { char p[0x721F]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_Destroy(int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADXSTM_OpenRange(int, int, int);
int FUN_0c010774(void);
int FUN_0c0107f4(void);
int FUN_0c01086a(void);
int FUN_0c010964(void);
int FUN_0c0109e4(void);
int FUN_0c01d962(int);
int FUN_0c01fe34(int);
int FUN_0c020e3e(int, int);
int FUN_0c032fd4(int, int);
int FUN_0c04463c(int);
int FUN_0c059132(int, int, int);
int FUN_0c059bf8(int);
int FUN_0c05cb46(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c0645ee(int);
int FUN_0c0685a0(int);
int FUN_0c093254(int);
int FUN_0c09788c(int);
int FUN_0c09a7ba(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09b0f8(int);
int FUN_0c09c4c0(int);
int FUN_0c09c506(int);
int FUN_0c09dc1c(int, int);
int FUN_0c09ddfe(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0ac780(int, int, int);
int FUN_0c0cc7fc(int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d80d4(int);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fe8(int);
int FUN_0c0e7140(int);
int FUN_0c0ed9d4(int, int, int);
int FUN_0c0ed9e8(int, int, int);
int FUN_0c0eee64(int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0f1c44(int);
int FUN_0c0f4968(int);
int FUN_0c0f4c2c(void);
int FUN_0c0ff8aa(void);
int FUN_0c0ff8b4(int, int);
int vmsfs_unmount(int);
int FUN_0c104962(int, int, int);
int search_exec_file(int, int);
int get_fat(int, int);
int direntry(int, int);
int FUN_0c105e60(int);
int FUN_0c10660e(int);
int FUN_0c106636(int);
int FUN_0c10a8a0(int, int);
int FUN_0c10a8de(int, int);
int FUN_0c112672(int);
int FUN_0c1126ba(int, int);
int FUN_0c1128ee(int, int, int);
int mpdrv_clear_deviceinfo(int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngClearBuf(int, int);
int FUN_0c1136ee(int);
int FUN_0c115270(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int memset(int, int, int);
int fmMngMcpy(void);
int FUN_0c0a2e26(int a4, int a5, int a6, int a7);
int FUN_0c104006(int a4, int a5, int a6, int a7);
int FUN_0c1152a4(int a4);
int FUN_0c035444(int a4);
int FUN_0c036598(int a4, int a5);
int FUN_0c041820(int a4);
int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c04a4c4(int a4);
int FUN_0c092ace(int a4);
int FUN_0c0f488a(int a4, int a5, int a6, int a7);
int FUN_0c112718(int a4, int a5, int a6, int a7);
int FUN_0c064744(int a4);
int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7);
int FUN_0c01f9a6(int a4, int a5, int a6, int a7);
int FUN_0c028ea0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04a294(int a4);
int FUN_0c0623a6(int a4, int a5, int a6);
int FUN_0c0a43b8(int a4);
int FUN_0c0ce4a0(int a4, int a5, int a6, int a7);
int gdFsReqDrvStatG(int a4, int a5, int a6, int a7);
int check_file_correct(int a4, int a5);
int FUN_0c109800(int a4);
int FUN_0c0207ca(int a4, int a5, int a6, int a7);
int FUN_0c022ca8(int a4, int a5, int a6, int a7);
int FUN_0c022c1a(int a4, int a5, int a6, int a7);
int FUN_0c044868(int a4, int a5);
float FUN_0c091806(int a4);
int FUN_0c0cc9fe(int a4, int a5, int a6, int a7);
int FUN_0c0cc832(int a4);
int FUN_0c0d2d22(int a4);
int FUN_0c0f55a2(int a4, int a5, int a6);
int FUN_0c0f4a06(int a4, int a5);
int FUN_0c01a336(int a4);
int FUN_0c01b41e(int a4);
int FUN_0c01fe52(int a4);
int FUN_0c023c72(int a4, int a5);
int FUN_0c033390(int a4, int a5, int a6, int a7);
int FUN_0c03ebf4(int a4);
int FUN_0c068770(int a4);
int FUN_0c09bb9e(int a4, int a5);
int FUN_0c0c8cea(int a4, int a5, int a6, float f4);
int FUN_0c0c99c0(int a4, int a5, int a6, float f4);
int FUN_0c0d6104(int a4);
int FUN_0c0e59e8(int a4, int a5, int a6, int a7);
int fmMngFormat(int a4, int a5, int a6);
int FUN_0c01e4ea(int a4, float f4);
int FUN_0c023d04(int a4, int a5);

int FUN_0c0a2e26(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t12;
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0xD)) = 0x0;
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    t0 = *(signed char *)(((int)stk + 0));
    if (t0 != 9) {
        (((struct o710A_uchar *)(a4))->v) = 0x0;
        (((struct o710B_uchar *)(a4))->v) = 0x0;
        (((struct o710C_uchar *)(a4))->v) = 0x0;
    }
    if (t0 != 10) {
        (((struct o7238_uchar *)(a4))->v) = 0x0;
        (((struct o721F_uchar *)(a4))->v) = 0x0;
    }
    (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
    FUN_0c09c506(a4);
    (((struct o7210_uchar *)(a4))->v) = 0x0;
    FUN_0c09a7ba(a4);
    t8 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (t8 << 2);
    (((struct o7216_uchar *)(a4))->v) = (*(signed char *)(((t8 << 2) + 0xC338D38)));
    if ((*(signed char *)0xC7F304A) == 0) {
        t12 = *(int *)(((*(int *)(((int)stk + 8))) + 0xC339490));
        t13 = *(signed char *)(((int)stk + 4));
        return ((int (*)(int, int, int, int))(t12))(a4, t13, a6, a7);
    }
    return 0x7216;
}

int FUN_0c104006(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t3;
    register int t5;
    register int t6;

    if ((*(signed char *)(((a4 * 0x148) + 0xC80DBCA))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC80DBD0))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            t6 = search_exec_file(a4, ((int)stk + 0));
            if ((int)t6 < 0) {
                return 0xFFFFFF05;
            }
            return ((int (*)(int, int, int, int))(0xC1040AA))(0x0, 0xC, 0x0, a7);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c1152a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = 0x0;
    t2 = 0xC8447E0;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x2694);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 8) {
        t1 = 0x0;
    } else {
        (((struct o208_uint *)(t2))->v) = a4;
        (((struct o20C_uint *)(t2))->v) = 0x0;
        (((struct o204_uint *)(t2))->v) = 0x0;
        memset((0x210 + t2), 0x0, 0x2480);
        memset((0x104 + t2), 0x0, 0x100);
        FUN_0c0eee64((0x104 + t2));
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        *(unsigned int *)0xC857C88 = ((*(int *)0xC857C88) + 0x1);
        t1 = t2;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t1;
}

int FUN_0c035444(int a4)
{
    register int t0;
    register int t1;

    t1 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x21F;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0354D8;
        FUN_0c0e6fe8(0x1);
        (((struct o58_float *)(t1))->v) = 1.0f;
        (((struct o54_float *)(t1))->v) = 1.0f;
        (((struct o50_float *)(t1))->v) = 1.0f;
        (((struct o68_float *)(t1))->v) = 1.0f;
        (((struct o64_float *)(t1))->v) = 1.0f;
        (((struct o60_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0xF;
        t0 = *(signed char *)((t1 + 0x3));
        return FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x16);
    }
    return t1;
}

int FUN_0c036598(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03662C;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t8 = *(signed char *)((a4 + 0x3));
        t14 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((int)stk + 0))) + 0x1)));
    }
    return t14;
}

int FUN_0c041820(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c059132(0x5, 0x1, 0x1);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0418B4;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o118_uint *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x1C)) = a4;
        t3 = (((struct o2E0_int *)(t1))->v);
        *(unsigned char *)((t3 + 0x0)) = t0;
        t0 = *(signed char *)((t1 + 0x3));
        FUN_0c06233a(t3, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0xB);
        *(unsigned short *)((t3 + 0x2)) = 0x1F;
        t2 = 0x1F;
    }
    return t2;
}

int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6)
{
    register int t37;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t15;
    register float u17;
    register float u21;

    t37 = 0x0;
    if ((int)(short)a4 <= (int)(unsigned char)(*(signed char *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x2)))) {
        if (((unsigned short)(*(short *)((((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0x4))) & 16) != 0) {
            t5 = a6;
            t6 = 0x0;
            t7 = (((short)((((a5 << 1) + a5) << 2) << 1) + 0xC321D5C) + 0xC);
            for (;;) {
                t8 = 0x1;
                for (;;) {
                    t9 = *(int *)((t7 + 0x0));
                    if ((int)(short)a4 <= (int)(*(int *)(((((t8 << 2) << 1) + t9) + 0x0)))) {
                        break;
                    }
                    t8 = (t8 + 0x1);
                }
                t15 = *(int *)((((((t8 - 1) << 2) << 1) + t9) + 0x0));
                u17 = (((struct o4_float *)(((((t8 - 1) << 2) << 1) + t9)))->v);
                u21 = u17;
                u21 = u21 + (((((((struct o4_float *)((((t8 << 2) << 1) + t9)))->v)) - u17) / (float)((*(int *)(((((t8 << 2) << 1) + t9) + 0x0))) - t15))) * ((float)((short)a4 - t15));
                *(float *)((t5 + 0x0)) = u21;
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x4);
                t7 = (t7 + 0x4);
                if ((int)t6 >= (int)0x3) {
                    break;
                }
            }
        }
        t37 = 0x1;
    }
    return t37;
}

int FUN_0c04a4c4(int a4)
{
    int stk[1];
    register int t0;
    register int t9;
    register int t6;
    register int t7;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x8);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC04A558;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        FUN_0c06233a(((((struct o2FC_int *)(t0))->v)), 0xC4CFA68, 0x62);
        *(unsigned char *)((((((struct o2FC_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2FC_int *)(t0))->v)) + 0x2)) = 0x5;
        t6 = 0x0;
        t7 = (0x2E0 + t0);
        for (;;) {
            t8 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            *(unsigned char *)((t8 + 0x0)) = 0x0;
            t6 = (t6 + 0x1);
            *(unsigned short *)((t8 + 0x2)) = 0x21;
            if ((int)(signed char)t6 >= (int)0x7) {
                break;
            }
        }
        t9 = 0x21;
    }
    return t9;
}

int FUN_0c092ace(int a4)
{
    register int t12;
    register int t17;

    FUN_0c0d80d4(a4);
    if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x7232))) == 0) {
        (((struct o71B4_uchar *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x0;
        if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) != 10) {
            FUN_0c093254(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
        } else {
            FUN_0c09788c(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
        }
        FUN_0c09b0f8(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4));
    }
    t12 = *(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71BA));
    t17 = t12;
    if (t12 != 23) {
        t17 = t12;
        if (t12 != 42) {
            (((struct o71F3_uchar *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1)));
            t17 = 0x71F3;
        }
    }
    return t17;
}

int FUN_0c0f488a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a4 != 0) {
        FUN_0c0f4c2c();
        t0 = *(int *)((a4 + 0xC));
        if (t0 != 0) {
            ADXRNA_Destroy((*(int *)((a4 + 0xC))));
        } else {
            t1 = t0;
        }
        if ((*(int *)((a4 + 0x4))) != 0) {
            FUN_0c105e60((*(int *)((a4 + 0x4))));
        } else {
            t0 = t1;
        }
        if ((*(int *)((a4 + 0x8))) != 0) {
            FUN_0c10660e((*(int *)((a4 + 0x8))));
        } else {
            t1 = t0;
        }
        t0 = *(int *)((a4 + 0x10));
        if (t0 != 0) {
            t2 = *(int *)((a4 + 0x10));
            t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0xC)))))(t2, a5, a6, a7);
        } else {
            t2 = t0;
            t0 = t1;
        }
        t1 = t2;
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t3 = t0;
            t3 = (t3 << 2);
            t1 = a4;
            t1 = (t1 + 0x18);
            t1 = (t1 + t3);
            t2 = (*(int *)((t1 + 0x0)));
            if (t2 != 0) {
                t4 = a4;
                t4 = (t4 + 0x18);
                t4 = (t4 + t3);
                t4 = (*(int *)((t4 + 0x0)));
                t2 = (*(int *)((t4 + 0x0)));
                t1 = (*(int *)((t2 + 0xC)));
                t3 = ((int (*)(int, int, int, int))(t1))(t4, a5, a6, a7);
            } else {
                t3 = t1;
                t4 = t2;
            }
            t0 = (t0 + 0x1);
            t1 = t3;
            t2 = t4;
        }
        t0 = memset(a4, 0x0, 0x74);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c112718(int a4, int a5, int a6, int a7)
{
    int t3;
    register int t4;
    register int t16;
    register int t8;

    FUN_0c1126ba(a6, a7);
    FUN_0c112672(a6);
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = (((*(signed char *)((a6 + 0x1))) ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x3)) = (((*(signed char *)((a6 + 0x1))) ^ t4) & (~t4));
    if ((((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) && ((t8 = *(signed char *)((a6 + 0x8)), (unsigned char)t8 != 0xFF) && ((unsigned char)t8 != 0))) {
        FUN_0c115270(a7, ((unsigned char)(*(int *)((a7 + 0x0))) + 0x1));
    }
    t16 = 0x1;
    if ((*(signed char *)((a6 + 0x0))) != 0) {
        t16 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t16;
    *(volatile signed char *)((a6 + 0x3));
    if ((*(signed char *)((a6 + 0x2))) != 0) {
        (((struct o10_uchar *)(a5))->v) = 0x1;
        FUN_0c1128ee(a5, a6, a7);
    }
    if ((*(signed char *)((a6 + 0x3))) != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
    return 0x0;
}

int FUN_0c064744(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 4) && ((t1 != 5) && ((t1 != 9) && (t0 = *(signed char *)((a4 + 0x71F1)), t0 == 0)))) {
        if (((((struct o71C8_int *)(a4))->v)) != 0) {
            t0 = FUN_0c0ac780(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))));
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x30)) = (FUN_0c09dc1c((a4 + 0x20), (((((struct o71C8_int *)(a4))->v)) + 0x20)));
                (((struct o20_float *)(a4))->v) = ((((struct o20_float *)(((((struct o71C8_int *)(a4))->v))))->v));
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o71C8_int *)(a4))->v))))->v));
            }
        }
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xE);
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        FUN_0c09a808(a4, 0x1, 0x93);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        return 0xEC;
    }
    return FUN_0c0645ee(a4);
}

int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    t1 = t0;
    t0 = (*(int *)((a4 + 0x18)));
    t2 = (FUN_0c0ff8aa());
    for (;;) {
        t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t1, a5, a6, a7);
        t1 = a4;
        t3 = FUN_0c0f1c44(t1);
        t1 = t3;
        if (t3 != 0) {
            if (t3 != 1) {
                if ((t3 != 2) && ((t3 != 3) && (t3 != 4))) {
                    break;
                }
                if (t0 != (*(int *)((a4 + 0x18)))) {
                    t2 = (FUN_0c0ff8aa());
                    t0 = (*(int *)((a4 + 0x18)));
                } else {
                    t4 = t1;
                }
                t1 = t4;
                t4 = FUN_0c0ff8aa();
                t1 = t2;
                t1 = (FUN_0c0ff8b4(t1, t4));
                if ((unsigned int)t1 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t0 = 0xFFFFFFE7;
    if ((t3 == 5) || (t3 == 64)) {
        t0 = ((((struct o52_short *)(a4))->v));
    }
    return t0;
}

int FUN_0c01f9a6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c010774();
    if ((int)t0 < 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0xC)) = t0;
    if (t0 == 0) {
        if ((*(signed char *)((a4 + 0x2))) != 2) {
            return ((int (*)(int, int, int, int))(0xC01FA50))(t0, a5, a6, a7);
        }
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x14)) = (FUN_0c0107f4());
    *(unsigned int *)((a4 + 0x10)) = (FUN_0c010964());
    *(unsigned int *)((a4 + 0x18)) = (FUN_0c01086a());
    *(unsigned int *)((a4 + 0x1C)) = (FUN_0c0109e4());
    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return 0x0;
            }
            return ((int (*)(void))(0xC01FA42))();
        }
        return ((int (*)(void))(0xC01FA42))();
    }
    *(volatile int *)((a4 + 0x14));
    return t0;
}

int FUN_0c028ea0(int a4, int a5, int a6, int a7, float f4)
{
    register float u2;

    u2 = 1.0f;
    if ((*(int *)0xC386830) != 0) {
        u2 = 0.833333313f;
    }
    *(unsigned char *)((a5 + 0x0)) = 0x1;
    *(unsigned char *)((a5 + 0x3)) = 0x2;
    *(unsigned char *)((a5 + 0x1)) = 0x1;
    *(unsigned short *)((a5 + 0x6)) = 0x1F;
    *(unsigned char *)((a5 + 0x5)) = 0x0;
    *(unsigned char *)((a5 + 0xA)) = 0x0;
    *(unsigned char *)((a5 + 0x9)) = 0x0;
    *(unsigned char *)((a5 + 0x8)) = 0x0;
    (((struct oEC_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x10))) * u2);
    (((struct oEE_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x18))) * u2);
    (((struct oF0_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x20))) * u2);
    (((struct o20_float *)(a5))->v) = f4;
    (((struct o24_float *)(a5))->v) = ((((struct oC_float *)(a4))->v));
    (((struct o28_float *)(a5))->v) = 0.0f;
    *(unsigned int *)((a5 + 0x34)) = 0x0;
    return ((int (*)(int, int, int, int, float, float, float))(0xC028F30))(a4, a5, 0x0, a7, f4, u2, 1.0f);
}

int FUN_0c04a294(int a4)
{
    int stk[1];
    register int t0;
    register int t5;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC04A324;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x63);
        t4 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x2)) = 0x411;
        (((struct o40_float *)(t4))->v) = 0.0f;
        (((struct o24_float *)(t4))->v) = 3.0f;
        (((struct o20_float *)(t4))->v) = 3.0f;
        (((struct o1C_float *)(t4))->v) = 3.0f;
        (((struct oC_float *)(t4))->v) = 50.0f;
        t5 = 0xC;
    }
    return t5;
}

int FUN_0c0623a6(int a4, int a5, int a6)
{
    int stk[1];
    register int t28;
    register int t6;
    register int t10;
    register int t18;
    register int t25;
    register int t26;
    register int t27;
    register int t23;

    *(unsigned char *)(((int)stk + 0)) = a6;
    FUN_0c0624c4((0x9C + a4), a5, (*(signed char *)(((int)stk + 0))));
    t28 = 0x1;
    if (((((struct o9C_int *)(a4))->v)) == 0) {
    } else {
        t6 = *(signed char *)(((int)stk + 0));
        if ((*(int *)((a5 + 0x10))) != 0) {
            *(volatile int *)((a5 + 0x10));
            t10 = ((int (*)(int))(FUN_0c0e6fe8))(((((unsigned char)t6 << 1) + (unsigned char)t6) << 2));
        } else {
            t23 = ((((unsigned char)t6 << 1) + (unsigned char)t6) << 2);
        }
        if ((*(int *)((a5 + 0x14))) != 0) {
            *(volatile int *)((a5 + 0x14));
            t18 = ((int (*)(int))(FUN_0c0e6fe8))(t23);
        } else {
        }
        t25 = ((int (*)(int))(FUN_0c0e6fe8))(t23);
        t26 = ((int (*)(void))(FUN_0c0e6fe8))();
        t27 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o90_uint *)(a4))->v) = 0x0;
        t28 = 0x0;
    }
    return t28;
}

int FUN_0c0a43b8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2E45) + 0x0));
    t1 = *(signed char *)(((0xC1525BF + (signed char)(((t0 << 2) << 1) + t0)) + (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2E45) + 0x1)))));
    (((struct o0_uchar *)0xC7F3051)->v) = t1;
    (((struct o1_uchar *)0xC7F3051)->v) = t1;
    *(unsigned char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)) = (*(signed char *)0xC7F3051);
    (((struct o71EC_uchar *)(((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
    t0 = *(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
    t1 = t0;
    if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == t0) {
        if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == (*(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC)))) {
            t0 = 0x1;
            if ((*(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == 1) {
                t0 = 0x2;
            }
            (((struct o71EC_uchar *)(((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = t0;
        }
        t1 = 0x71EC;
    }
    return t1;
}

int FUN_0c0ce4a0(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (((unsigned short)(*(short *)0xC361BFC) & 16) != 0) {
        t2 = *(signed char *)(((0xC7F2EE4 + a7) + 0x0));
        if (t2 == 0) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = (0xFF + a6);
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = (t2 - 1);
        }
    }
    if (((unsigned short)(*(short *)0xC361BFC) & 32) != 0) {
        if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == (a6 - 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) + 0x1);
        }
    }
    return FUN_0c0ccefc(0xC153474, ((float)a4 * ((((struct o4_float *)0xC0CE588)->v))), ((float)(((unsigned char)(*(signed char *)(((a7 + 0xC7F2EE4) + 0x0))) << 1) + a5) * ((((struct o0_float *)0xC0CE588)->v))));
}

int gdFsReqDrvStatG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x3C)))))(0x1, 0xE, ((*(int *)0xC346BD8) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0xA;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int check_file_correct(int a4, int a5)
{
    int stk[11];
    register int t0;
    register int t20;
    register int t5;
    register int t6;
    register int t8;
    int t12;
    register int t13;

    t0 = FUN_0c104962(a4, a5, ((int)stk + 0));
    t20 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        direntry(a4, t0);
        t5 = *(int *)(((int)stk + 12));
        if ((int)t5 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(*(int *)(((int)stk + 40)))) {
                    return 0x0;
                }
                t8 = get_fat(a4, t5);
                if (t6 == ((*(int *)(((int)stk + 40))) - 1)) {
                    if ((unsigned short)t8 != 0xFFFA) {
                        break;
                    }
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                if (((unsigned short)t8 != t5) && (((unsigned short)t8 != 0xFFFA) && (((unsigned short)t8 != 0xFFFC) && (((unsigned short)t8 != 0xFFFF) && (t12 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)), t13 = *(int *)((t12 + 0x30)), (int)(unsigned short)t8 < (int)t13))))) {
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                return 0xFFFFFF41;
            }
        }
        t20 = 0xFFFFFF41;
    }
    return t20;
}

int FUN_0c109800(int a4)
{
    int stk[2];
    register int t0;
    register int t39;
    register int t8;
    register int t9;
    register int t11;

    t0 = FUN_0c10a8a0(a4, ((int)stk + 0));
    t39 = 0x7;
    if (t0 == 0) {
    } else {
        if (((unsigned short)(*(short *)((t0 + 0x0))) & 2) != 0) {
            t8 = *(int *)0xC34763C;
            t9 = (a4 - t8);
            if ((*(short *)(((int)stk + 0))) == 0) {
                t9 = (t8 + a4);
            }
            t11 = FUN_0c10a8a0(t9, (((int)stk + 0) + 0x4));
            if (t11 == 0) {
                FUN_0c10a8de((*(short *)(((int)stk + 0))), t0);
                t39 = 0x0;
            } else {
                if (((unsigned short)(*(short *)((t11 + 0x0))) & 4) != 0) {
                    *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) & 0xFFFB);
                    t39 = 0x0;
                } else {
                    FUN_0c10a8de((*(short *)(((int)stk + 0))), t0);
                    t39 = (FUN_0c10a8de((*(short *)(((int)stk + 4))), t11));
                }
            }
        } else {
            t39 = (FUN_0c10a8de((*(short *)(((int)stk + 0))), t0));
        }
    }
    return t39;
}

int FUN_0c0207ca(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC020878))(a4, a5, a6, a7);
}

int FUN_0c022ca8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t6;
    register int t14;
    register int t19;
    register int t20;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t19 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t19 = 0x0;
            }
            t20 = a7;
        } else {
            t20 = *(signed char *)((a4 + 0x3));
            t6 = t20;
            if ((int)t20 >= (int)0x2) {
                t6 = (t20 - 2);
            }
            t19 = ((t6 << 1) + 0x1);
        }
    } else {
        t20 = *(signed char *)((a4 + 0x3));
        t14 = t20;
        if ((int)t20 >= (int)0x2) {
            t14 = (t20 - 2);
        }
        t19 = (t14 << 1);
    }
    *(volatile int *)(((((t19 << 2) << 2) << 1) + 0xC7D08F4));
    return ((int (*)(int, int, int, int))(0xC022D36))(a4, ((((unsigned short)a5 << 1) + (unsigned short)a5) << 2), t19, t20);
}

int FUN_0c022c1a(int a4, int a5, int a6, int a7)
{
    int stk[4];
    int t0;
    register int t5;
    register int t6;
    register int t13;
    register int t14;
    register int t23;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t19 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t19 = 0x0;
            }
        } else {
            t5 = *(signed char *)((a4 + 0x3));
            t6 = t5;
            if ((int)t5 >= (int)0x2) {
                t6 = (t5 - 2);
            }
            t19 = ((t6 << 1) + 0x1);
        }
    } else {
        t13 = *(signed char *)((a4 + 0x3));
        t14 = t13;
        if ((int)t13 >= (int)0x2) {
            t14 = (t13 - 2);
        }
        t19 = (t14 << 1);
    }
    t23 = *(int *)(((((t19 << 2) << 2) << 1) + 0xC7D08F0));
    FUN_0c0e7140(a4);
    FUN_0c020e3e((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
    return (t23 + ((((unsigned short)a5 << 2) + (unsigned short)a5) << 1));
}

int FUN_0c044868(int a4, int a5)
{
    register int t1;
    register int t2;

    t2 = *(signed char *)((a5 + 0x5));
    *(unsigned char *)((a5 + 0x5)) = (t2 - 1);
    t1 = (signed char)(t2 - 1);
    if ((signed char)(t2 - 1) == 0) {
        t2 = *(int *)(((((*(signed char *)((a5 + 0x4))) << 2) + (0x2E0 + a4)) + 0x18));
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            *(unsigned char *)((a5 + 0x5)) = 0xF;
            FUN_0c06233a(t2, 0xC4CFA68, 0x6C);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            (((struct o24_float *)(t2))->v) = 0.0f;
            (((struct o20_float *)(t2))->v) = 0.0f;
            (((struct o1C_float *)(t2))->v) = 0.0f;
            *(unsigned short *)((t2 + 0x2)) = 0x1211;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            (((struct o28_float *)(t2))->v) = 0.049999997f;
            (((struct o2C_float *)(t2))->v) = 8.0f;
            (((struct o98_float *)(t2))->v) = 2.0f;
            *(volatile signed char *)((a5 + 0x4));
            t2 = FUN_0c0e6e5c();
            *(unsigned char *)((a5 + 0x4)) = t2;
        } else {
            *(unsigned char *)((a5 + 0x5)) = 0x1;
            t2 = 0x1;
        }
        t1 = t2;
    }
    return t1;
}

float FUN_0c091806(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = FUN_0c09ddfe(a4);
        t1 = *(short *)0xC7F31E0;
        t2 = *(int *)((a4 + 0x30));
        t3 = (unsigned short)((unsigned short)(t0 + t1) - t2);
        if ((0x8000 & (unsigned short)((unsigned short)(t0 + t1) - t2)) != 0) {
            t3 = ((unsigned short)((unsigned short)(t0 + t1) - t2) | 0xFFFF0000);
        }
        if ((int)t3 <= (int)0xFFFFE000) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x2000);
        } else {
            if ((int)t3 >= (int)0x2000) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x2000);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
            }
        }
        t0 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t0 & 0xFFFF);
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(t0 & 0xFFFF)) + 0x14000))) * 4.0f);
        u0 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        (((struct o40_float *)(a4))->v) = (u0 * 4.0f);
        u1 = (u0 * 4.0f);
    }
    return u1;
}

int FUN_0c0cc9fe(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t1 + 0x1);
    t2 = 0xEC;
    if ((int)(short)(t1 + 0x1) >= (int)0x12C) {
        t1 = *(signed char *)0xC7F2990;
        if (((*(signed char *)0xC7E40C8) != 10) && (t0 = *(signed char *)0xC7EB398, t0 != 10)) {
            if ((int)t1 > (int)0x3) {
                t0 = 0x0;
                for (;;) {
                    if ((int)t0 >= (int)((*(signed char *)0xC7F2990) - 2)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t0 = (t0 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x2);
        } else {
            if ((int)t1 > (int)0x3) {
                t1 = 0x0;
                for (;;) {
                    if ((int)t1 >= (int)((*(signed char *)0xC7F2990) - 1)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t1 = (t1 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x1);
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x1);
        }
        *(unsigned char *)0xC7F266C = t0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int FUN_0c0cc832(int a4)
{
    int stk[4];

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(volatile signed char *)0xC7F3051;
    *(volatile signed char *)(((int)stk + 0));
    FUN_0c0e6fe8(a4);
    FUN_0c05cb46((((int)stk + 0) + 0x4), (*(signed char *)0xC7F2992), (*(signed char *)(((int)stk + 0))));
    (((struct o0_uchar *)0xC7F2991)->v) = ((*(signed char *)0xC7F2991) - 1);
    (((struct o1_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2993);
    (((struct o2_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2994);
    (((struct o3_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2995);
    (((struct o4_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2996);
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - 40.0f);
    return (FUN_0c04463c((((int)stk + 0) + 0x4)));
}

int FUN_0c0d2d22(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x5));
    (((struct o48_uint *)(a4))->v) = (*(int *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0) + 0x8)));
    t0 = *(signed char *)((a4 + 0x5));
    (((struct o44_uint *)(a4))->v) = (*(int *)((0xC7F31F0 + (signed char)((((t0 << 2) << 1) + t0) << 2))));
    t0 = *(signed char *)((a4 + 0x5));
    t1 = *(int *)((0xC7F31F0 + (signed char)((((t0 << 2) << 1) + t0) << 2)));
    if ((t1 & 240) != 0) {
        if ((int)((((struct o4C_int *)(a4))->v)) < (int)0xA) {
            (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
        }
    } else {
        (((struct o4C_uint *)(a4))->v) = 0x0;
    }
    t0 = t1;
    if ((int)((((struct o4C_int *)(a4))->v)) >= (int)0xA) {
        t1 = *(int *)(((a4 + 0x4C) + 0x4));
        *(unsigned int *)(((a4 + 0x4C) + 0x4)) = (t1 ^ 0x1);
        t0 = (t1 ^ 0x1);
        if ((t1 ^ 0x1) != 0) {
            t1 = *(signed char *)((a4 + 0x5));
            (((struct o48_uint *)(a4))->v) = (*(int *)(((0xC7F31F0 + (signed char)((((t1 << 2) << 1) + t1) << 2)) + 0x0)));
            t0 = 0x48;
        }
    }
    return t0;
}

int FUN_0c0f55a2(int a4, int a5, int a6)
{
    register int t0;
    register int t3;
    register int t5;

    t0 = 0xFFFFFFFD;
    if ((a4 != 0) && (((int)a5 >= 0) && (a6 != 0))) {
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x1))) == 2) {
        } else {
            t0 = 0xFFFFFFFF;
            if ((*(int *)((a4 + 0x4))) != 0) {
            } else {
                ADXCRS_Lock();
                *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                t3 = *(int *)((a4 + 0x18));
                t0 = *(int *)((a4 + 0x10));
                t5 = (t0 - t3);
                if ((int)a5 < (int)(t0 - t3)) {
                    t5 = a5;
                }
                *(unsigned int *)((a4 + 0x20)) = t5;
                *(unsigned int *)((a4 + 0x24)) = 0x0;
                t3 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), a6);
                t0 = 0xFFFFFFFF;
                if (t3 == 0) {
                } else {
                    *(unsigned int *)((a4 + 0x4)) = t3;
                    *(unsigned char *)((a4 + 0x1)) = 0x2;
                    FUN_0c106636((*(int *)((a4 + 0x4))));
                    t0 = (*(int *)((a4 + 0x20)));
                }
                ADXCRS_Unlock();
            }
        }
    }
    return t0;
}

int FUN_0c0f4a06(int a4, int a5)
{
    int stk[7];
    register int t2;
    register int t5;
    register int t11;
    register int t20;

    FUN_0c0f4c2c();
    ADXCRS_Lock();
    t2 = ADXSTM_GetFad(a5, (((int)stk + 8) + 0x4));
    if ((int)t2 < 0) {
        ADXCRS_Unlock();
        *(int *)((int)stk + 4) = a5;
        *(int *)((int)stk + 0) = 0xC15A808;
        t20 = (ADXERR_CallErrFunc(0xC15A808));
    } else {
        t5 = ADXSTM_GetFsizeSct(a5, ((int)stk + 8));
        if ((int)t5 < 0) {
            ADXCRS_Unlock();
            *(int *)((int)stk + 4) = a5;
            *(int *)((int)stk + 0) = 0xC15A834;
            t20 = (ADXERR_CallErrFunc(0xC15A834));
        } else {
            t11 = ADXSTM_OpenRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x10))));
            *(unsigned int *)((a4 + 0x8)) = t11;
            if (t11 == 0) {
                ADXCRS_Unlock();
                *(int *)((int)stk + 4) = a5;
                *(int *)((int)stk + 0) = 0xC15A860;
                ADXERR_CallErrFunc(0xC15A860);
            } else {
                FUN_0c0f4968(a4);
            }
            t20 = (ADXCRS_Unlock());
        }
    }
    return t20;
}

int FUN_0c01a336(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A27A;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, 0x4);
    }
    return t0;
}

int FUN_0c01b41e(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B360;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, 0xD);
    }
    return t0;
}

int FUN_0c01fe52(int a4)
{
    register int t0;
    register int t3;

    t0 = FUN_0c01fe34(0x10);
    if ((signed char)t0 != 0) {
        FUN_0c0a3796(0x0, 0x4B);
        t0 = *(signed char *)((a4 + 0x2C));
        (((struct o2C_uchar *)(a4))->v) = (t0 - 1);
        if ((int)(signed char)(t0 - 1) < 0) {
            (((struct o2C_uchar *)(a4))->v) = 0x3;
        }
        t0 = 0x2C;
    } else {
        t0 = FUN_0c01fe34(0x20);
        if ((signed char)t0 != 0) {
            FUN_0c0a3796(0x0, 0x4B);
            t0 = *(signed char *)((a4 + 0x2C));
            (((struct o2C_uchar *)(a4))->v) = (t0 + 0x1);
            if ((int)(signed char)(t0 + 0x1) > (int)0x3) {
                (((struct o2C_uchar *)(a4))->v) = 0x0;
            }
            t0 = 0x2C;
        } else {
            t0 = FUN_0c01fe34(0x40);
            if ((signed char)t0 != 0) {
                FUN_0c0a3796(0x0, 0x4C);
                (((struct o2D_uchar *)(a4))->v) = 0x0;
                t0 = 0x2D;
            } else {
                t3 = FUN_0c01fe34(0x80);
                t0 = (signed char)t3;
                if ((signed char)t3 != 0) {
                    FUN_0c0a3796(0x0, 0x4C);
                    (((struct o2D_uchar *)(a4))->v) = 0x1;
                    t0 = 0x2D;
                }
            }
        }
    }
    return t0;
}

int FUN_0c023c72(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    u0 = FUN_0c0df340(u4);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
        t0 = 0x0;
        if (!((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > (((((struct o24_float *)(a4))->v)) + 1.0f))) {
            t0 = 0x0;
            if ((((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v))) > ((((struct o2D4_float *)(a4))->v))) {
                (((struct o2D4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o10_float *)(a5))->v)));
                t0 = 0x1;
            }
        }
    }
    return t0;
}

int FUN_0c033390(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return ((int (*)(int, int, int, int))(0xC03343E))(a4, t0, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC03343E))(a4, t0, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC033420))(a4, t0, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o30_float *)(t0))->v) = (*(float *)0xC03351C);
        *(unsigned short *)((t0 + 0x2)) = 0x1F;
        *(unsigned int *)((t0 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
    }
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
    u0 = (((struct o24_float *)(t0))->v);
    u1 = (((struct o30_float *)(t0))->v);
    (((struct o24_float *)(t0))->v) = (u0 + u1);
    if (!(1.0f > (u0 + u1))) {
        *(volatile signed char *)((a4 + 0x8));
        return ((int (*)(int, int, int, int))(0xC03341C))(a4, t0, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC03343E))(a4, t0, a6, a7);
}

int FUN_0c03ebf4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = 0xC03ECEC;
    t1 = 0x0;
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t5 = 0x28;
            t5 = (t5 + t4);
            t0 = 0x4;
            u0 = (*(float *)((t5 + 0x0)));
            u1 = (*(float *)((t4 + t0)));
            t5 = 0x2C;
            t5 = (t5 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t5 + 0x0)));
            t5 = 0x30;
            t5 = (t5 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0xC;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t5 + 0x0)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = (*(int *)((t4 + 0x34)));
            t2 = (t2 + 0x1);
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    t0 = 0x24;
                    u1 = 0.0f;
                    u0 = (*(float *)((t4 + t0)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t4 + t0)) = u0;
                    if (!(u0 > u1)) {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                }
            } else {
                t0 = 0x24;
                u0 = (*(float *)((t4 + t0)));
                u0 = (u0 + 0.049999997f);
                *(float *)((t4 + t0)) = u0;
                if (!(1.0f > u0)) {
                    t5 = (*(int *)((t4 + 0x34)));
                    t5 = (t5 + 0x1);
                    *(unsigned int *)((t4 + 0x34)) = t5;
                }
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int FUN_0c068770(int a4)
{
    register int t13;

    FUN_0c09a910(a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 29) {
        FUN_0c09c4c0(a4);
    }
    t13 = 0x719E;
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) >= (int)0x1E) {
        FUN_0c032fd4(a4, 0x0);
        FUN_0c0a3914(a4, 0x1B);
        FUN_0c0a3914(a4, 0x30);
        FUN_0c09a808(a4, 0x1, 0x64);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xF)) = 0x0;
        FUN_0c0685a0(a4);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        FUN_0c0a1d88(a4, 0x75);
        (((struct oF2_ushort *)(a4))->v) = 0xE10;
        t13 = 0xF2;
    }
    return t13;
}

int FUN_0c09bb9e(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC09BC2A))(a4, a5, (0x0 + a5), 0x0);
}

int FUN_0c0c8cea(int a4, int a5, int a6, float f4)
{
    register int t19;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u6;
    register float u4;

    t19 = 0xC0C8D7C;
    if ((int)a5 < (int)a6) {
        t0 = (a5 << 2);
        t1 = (a5 << 2);
        t2 = a5;
        t3 = (a5 << 2);
        u6 = f4;
        for (;;) {
            if (!(4000.0f > u6)) {
                *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t3) + 0x0))) + 0x0)) = 0x1;
                (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t3) + 0x0)))))->v) = 1.0f;
            } else {
                if (u6 > (0.0f)) {
                    u4 = u6;
                    u4 = (u4 / 4000.0f);
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x1;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = u4;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x0)) = 0x0;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v) = 0.0f;
                }
            }
            u6 = (u6 - 4000.0f);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x4);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)a6) {
                break;
            }
        }
        t19 = 0x24;
    }
    return t19;
}

int FUN_0c0c99c0(int a4, int a5, int a6, float f4)
{
    register float u0;
    register int t20;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u7;
    register float u5;

    u0 = *(float *)0xC0C9AE4;
    t20 = 0xC0C9AE4;
    if ((int)a5 < (int)a6) {
        t1 = (a5 << 2);
        t2 = (a5 << 2);
        t3 = a5;
        t4 = (a5 << 2);
        u7 = f4;
        for (;;) {
            if (!(u0 > u7)) {
                *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t4) + 0x0))) + 0x0)) = 0x1;
                (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t4) + 0x0)))))->v) = 1.0f;
            } else {
                if (u7 > (0.0f)) {
                    u5 = u7;
                    u5 = (u5 / u0);
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x0)) = 0x1;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t2) + 0x0)))))->v) = u5;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x0;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.0f;
                }
            }
            u7 = (u7 - u0);
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            t4 = (t4 + 0x4);
            if ((int)t3 >= (int)a6) {
                break;
            }
        }
        t20 = 0x24;
    }
    return t20;
}

int FUN_0c0d6104(int a4)
{
    int stk[1];
    register int t28;

    t28 = 0x42;
    if ((*(signed char *)0xC7F306E) == 0) {
        *(unsigned char *)0xC7F3071 = ((*(signed char *)0xC7F3071) | ((*(signed char *)((a4 + 0x9))) + 0x1));
        if ((*(signed char *)((a4 + 0x4C))) == 0) {
            (((struct o4C_uchar *)(a4))->v) = ((*(signed char *)(((0x4C + a4) + 0x0))) + ((((*(signed char *)((a4 + 0x1))) == 3)) ? 1 : 0));
            if ((*(signed char *)((a4 + 0x4C))) == 0) {
                *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x9)));
                memset(a4, 0x0, 0x78);
                *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((int)stk + 0)));
            } else {
                if ((unsigned char)(*(signed char *)0xC7F3073) != 3) {
                    (((struct o4D_uchar *)(a4))->v) = 0x1;
                }
                (((struct o44_ushort *)(a4))->v) = 0x0;
                FUN_0c059bf8((*(signed char *)((a4 + 0x4C))));
                *(unsigned char *)(((a4 + 0x5A) + 0x3)) = 0x0;
                *(unsigned char *)(((a4 + 0x5A) + 0x2)) = 0x0;
                *(unsigned char *)(((a4 + 0x5A) + 0x1)) = 0x0;
                (((struct o5A_uchar *)(a4))->v) = 0x0;
            }
        } else {
            if ((unsigned char)(*(signed char *)0xC7F3073) != 3) {
                (((struct o4D_uchar *)(a4))->v) = 0x1;
            }
            (((struct o44_ushort *)(a4))->v) = 0x0;
            FUN_0c059bf8((*(signed char *)((a4 + 0x4C))));
            *(unsigned char *)(((a4 + 0x5A) + 0x3)) = 0x0;
            *(unsigned char *)(((a4 + 0x5A) + 0x2)) = 0x0;
            *(unsigned char *)(((a4 + 0x5A) + 0x1)) = 0x0;
            (((struct o5A_uchar *)(a4))->v) = 0x0;
        }
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        t28 = 0x2;
    }
    return t28;
}

int FUN_0c0e59e8(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t3;

    *(unsigned short *)(((((int)stk + 0) + 0xA) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(volatile short *)(((int)stk + 10));
    if (((*(int *)(((int)stk + 4))) & 0xFF00) != 0) {
        t3 = *(int *)(((int)stk + 4));
        if ((t3 != 0x1A0) && (t3 != 0x4A0)) {
            if ((t3 != 0x5A0) && ((t3 != 0x6A0) && (t3 != 0x7A0))) {
                if ((t3 != 0x9A0) && ((t3 != 0xAA0) && (t3 != 0x10A0))) {
                    if (t3 != 0x11A0) {
                        return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
                    }
                    *(volatile int *)(((int)stk + 0));
                    return ((int (*)(int, int, int, int))(0xC0E5A74))(a4, a5, a6, a7);
                }
                *(volatile int *)(((int)stk + 0));
                return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
            }
            *(volatile int *)(((int)stk + 0));
            return ((int (*)(int, int, int, int))(0xC0E5A74))(a4, a5, a6, a7);
        }
        *(volatile int *)(((int)stk + 0));
        return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0E5A7A))(a4, a5, a6, a7);
}

int fmMngFormat(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(int *)0xC347704;
    t1 = 0xFFFFFFF5;
    if (t0 == 0) {
    } else {
        t1 = 0xFFFFFFFA;
        if ((a4 == 0) || (a4 == 1)) {
            t3 = FUN_0c0ed9e8((*(int *)((t0 + 0x4))), a5, a6);
            t0 = 0xFFFFFFFD;
            if (t3 != 0) {
            } else {
                t3 = *(int *)0xC347704;
                fmMngMcpy();
                *(unsigned short *)(((*(int *)0xC347704) + 0x2)) = a4;
                (((struct o11_uchar *)((t3 + 0x34)))->v) = a4;
                (((struct o10_uchar *)((t3 + 0x34)))->v) = (*(signed char *)(((*(int *)0xC347704) + 0x0)));
                t4 = FUN_0c0ed9d4((*(int *)(((*(int *)0xC347704) + 0x4))), (t3 + 0x34), 0x12);
                t3 = 0xFFFFFFFE;
                if (t4 != 18) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0xC347704) + 0xC))), (*(int *)(((*(int *)0xC347704) + 0x8))));
                    t4 = FUN_0c1136ee((*(int *)0xC347704));
                    t3 = 0x0;
                    if (t4 != 0) {
                        t3 = t4;
                    }
                }
                t0 = t3;
            }
            t1 = t0;
        }
    }
    return t1;
}

int FUN_0c01e4ea(int a4, float f4)
{
    register int t0;
    register float u0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t0 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C)))->v));
        (((struct o24_float *)(a4))->v) = ((((struct o8_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC180B7C)))->v));
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC180B64) + 0x0)));
        (((struct o10_float *)(a4))->v) = 1.0f;
    }
    u0 = 0.75f;
    u0 = u0 + 0.25f * (FUN_0c0dfa50((*(int *)0xC362388)));
    (((struct o10_float *)(a4))->v) = u0;
    t0 = *(signed char *)((a4 + 0x7));
    if (t0 != 0) {
        return FUN_0c01d962(a4);
    }
    return t0;
}

int FUN_0c023d04(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    u0 = FUN_0c0df340(u4);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
        t0 = 0x0;
        if (!((((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v))) > (((((struct o24_float *)(a4))->v)) + 1.0f))) {
            t0 = 0x0;
            if ((((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v))) > ((((struct o2D4_float *)(a4))->v))) {
                (((struct o2D4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v)));
                t0 = 0x1;
            }
        }
    }
    return t0;
}
