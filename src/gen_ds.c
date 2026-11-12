/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o300_int { char p[0x300]; int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c010774(void);
int FUN_0c0107f4(void);
int FUN_0c01086a(void);
int FUN_0c0108e0(void);
int FUN_0c010964(void);
int FUN_0c0109e4(void);
float FUN_0c02649a(int, int);
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c04bef2(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04cdf2(void);
int FUN_0c050068(int);
int FUN_0c05012e(int);
int FUN_0c050180(int);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c067d4c(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c422(int);
int FUN_0c09c894(int);
int FUN_0c09ca24(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09dc64(int, int);
int FUN_0c09e7b8(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a2712(int, int, int, int, int, int);
int FUN_0c0a2f52(void);
int FUN_0c0a3762(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0d2dd8(int);
int FUN_0c0d320a(void);
int FUN_0c0d3366(void);
int FUN_0c0d3e6c(int, int, int, int);
int FUN_0c0d4094(void);
int FUN_0c0d4196(int, int, int, int);
int FUN_0c0d44d0(void);
extern int FUN_0c0d452e();
float FUN_0c0df340(float);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e24f0(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0e7140(int);
int FUN_0c0f05c8(void);
int FUN_0c0f0d04(int, int, int, int);
int FUN_0c0fae08(void);
int FUN_0c10274c(int, int);
int FUN_0c104742(int);
int FUN_0c1048e6(int, int, int, int);
int FUN_0c104962(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsCreateDirhn(int, int);
int gdFsGetGdDcf(void);
int gdFsReopenHn(int, int, int, int);
int get_vmstime(int, int);
int kmiWriteRegister(int, int);
int nlCalcVector(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int set_vmstime(int, int);
int thunk_FUN_0c062242(int);
int thunk_FUN_0c0d45fe(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c067fe2(int a4);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int FUN_0c018ed0(int a4, int a5);
int FUN_0c08e5b4(int a4);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c01fb0c(int a4, int a5, int a6, int a7);
int FUN_0c096a64(int a4, int a5, int a6, int a7);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int FUN_0c01f874(int a4);
int FUN_0c051ce4(int a4, int a5, int a6, int a7);
int FUN_0c069e08(int a4);
int FUN_0c069b70(int a4);
int FUN_0c102632(int a4, int a5);
int FUN_0c0a6490(int a4, int a5, int a6, int a7);
int FUN_0c0aa484(int a4, int a5, int a6, int a7);
int FUN_0c0c4fbe(int a4, int a5, int a6, int a7);
int FUN_0c03c7e2(int a4, int a5, int a6, int a7);
int FUN_0c064a1c(int a4);
int FUN_0c09660c(int a4, int a5, int a6, int a7);
int FUN_0c0d30f4(int a4, int a5, int a6, int a7);
int FUN_0c103c40(int a4, int a5, int a6);
int FUN_0c023328(int a4, int a5, int a6, float f4);

int FUN_0c067fe2(int a4)
{
    int stk[6];
    register int t5;
    register int t45;
    register int t10;
    register int t21;
    register int t31;
    register int t38;

    FUN_0c0e7140(a4);
    FUN_0c09d990(a4);
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((((struct o7248_short *)(a4))->v)));
    FUN_0c067d4c(a4);
    t5 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t5 + 0x1);
    t45 = 0xEE;
    if ((int)(short)(t5 + 0x1) >= (int)0xA) {
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) + 0x38E);
        if ((int)((((struct oF0_short *)(a4))->v)) <= (int)0x2) {
            t38 = (FUN_0c0a1d88(a4, 0x72));
        } else {
            t10 = 0x0;
            for (;;) {
                if ((int)(*(short *)((((int)stk + 0) + (((short)t10 << 1) << 1)))) <= (int)((((struct oEC_short *)(a4))->v))) {
                    t10 = (t10 + 0x1);
                    if ((int)(short)t10 >= (int)0x5) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((int)((((struct oF0_short *)(a4))->v)) <= (int)(*(short *)((((((short)t10 << 1) << 1) + ((int)stk + 0)) + 0x2)))) {
                FUN_0c0a1d88(a4, 0x72);
                if ((short)t10 == 2) {
                    t21 = (((struct o71F4_short *)(a4))->v);
                    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t21 - 240.0f);
                    if ((int)(short)(int)((float)t21 - 240.0f) < 0) {
                        (((struct o71F4_ushort *)(a4))->v) = 0x0;
                    }
                    t38 = 0x71F4;
                } else {
                    t38 = (short)t10;
                }
            } else {
                FUN_0c0a1d88(a4, 0x78);
                (((struct o48_float *)(a4))->v) = (*(float *)0xC0681C4);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t31 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t31 + 0x1);
                t38 = (t31 + 0x1);
            }
        }
        t45 = t38;
    }
    return t45;
}

int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC7FE6E8)->v), t1 = (((struct o14_int *)0xC7FE6E8)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC7FE6E8)->v);
            t2 = (((struct oC_int *)0xC7FE6E8)->v);
            t6 = (((struct o4_int *)0xC7FE6E8)->v);
            if (((((struct o0_int *)0xC7FE6E8)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC7FE6F8;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}

int FUN_0c018ed0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t31;
    register float u5;
    register int t7;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x8);
    t31 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC018CCA;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 4)));
        u5 = 160.0f;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            u5 = -160.0f;
        }
        (((struct o20_float *)(t0))->v) = u5;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x1)) = 0x0;
            t8 = (t8 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x2)) = 0x40F;
            (((struct o40_float *)((*(int *)((((0x2E0 + t0) + t7) + 0x0)))))->v) = 1.0f;
            t7 = (t7 + 0x4);
            if ((int)t8 >= (int)0x8) {
                break;
            }
        }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AF0, 0xE);
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), 0xC664AF0, 0xF);
        FUN_0c06233a(((((struct o2E8_int *)(t0))->v)), 0xC664AF0, 0x10);
        FUN_0c06233a(((((struct o2EC_int *)(t0))->v)), 0xC664AF0, 0x11);
        FUN_0c06233a(((((struct o2F0_int *)(t0))->v)), 0xC664AF0, 0x12);
        FUN_0c06233a(((((struct o2F4_int *)(t0))->v)), 0xC664AF0, 0x13);
        FUN_0c06233a(((((struct o2F8_int *)(t0))->v)), 0xC664AF0, 0xD);
        FUN_0c06233a(((((struct o2FC_int *)(t0))->v)), 0xC664AF0, 0xD);
        *(unsigned char *)((((((struct o2FC_int *)(t0))->v)) + 0x0)) = 0x0;
        t31 = 0x2FC;
    }
    return t31;
}

int FUN_0c08e5b4(int a4)
{
    int stk[6];
    int t7;
    register int t26;
    register int t17;

    nlUnitMatrix();
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (*(float *)((((*(signed char *)((a4 + 0x7213))) << 2) + 0xC338CB4)));
    nlRotateAX((unsigned short)(int)((((-(float)(*(signed char *)((a4 + 0x7211)))) + 32.0f) * 737280.0f) / 360.0f));
    nlCalcVector((((int)stk + 0) + 0xC), ((int)stk + 0));
    nlUnitMatrix();
    t7 = *(signed char *)((a4 + 0xA));
    if ((t7 != 2) && (t7 != 3)) {
        if (((((struct o7294_int *)(a4))->v)) != 0) {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x7212)))) + 0x20) * 737280.0f) / 360.0f) + ((((struct o72A8_int *)(a4))->v)));
        } else {
            t17 = ((int)(((float)((-(*(signed char *)((a4 + 0x7212)))) + 0x20) * 737280.0f) / 360.0f) + (*(int *)((a4 + 0x30))));
        }
        t26 = (t17 & 0xFFFF);
    } else {
        t26 = (((int)((((-(float)(*(signed char *)((a4 + 0x7212)))) + 32.0f) * 737280.0f) / 360.0f) + ((((struct o72A8_int *)(a4))->v))) & 0xFFFF);
    }
    nlRotateAY(t26);
    nlCalcVector(((int)stk + 0), (((int)stk + 0) + 0xC));
    (((struct o38_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    (((struct o3C_float *)(a4))->v) = (*(float *)(((int)stk + 16)));
    (((struct o40_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -2.0f;
    return 0x48;
}

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC346BD8;
    if ((t1 != 0) && (t0 = (((struct o38_short *)(t1))->v), t0 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t0 = gdFsGetGdDcf();
    t1 = ((int (*)(void))((*(int *)((t0 + 0x0)))))();
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC346BD8 = a5;
    (((struct o38_ushort *)(a5))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC346BD8) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC346BD8) + 0xC)) = t0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC346BD8)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x3C)) = a8;
    t0 = 0x3A;
    t2 = ((*(int *)0xC346BD8) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC346BD8) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC346BD8);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC346BD8;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC346BD8;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    FUN_0c0f0d04((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c0f05c8();
}

int FUN_0c01fb0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    int t4;
    register int t5;

    t0 = FUN_0c010774();
    if ((int)t0 < 0) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)((a4 + 0x20));
    *(unsigned int *)((a4 + 0xC)) = t0;
    if ((t0 & ((int)0x1 << (int)t1)) == 0) {
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x31))) != 2) {
            (((struct o2D_uchar *)0xC362A54)->v) = 0x2;
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t0 = 0x1;
        }
        return t0;
    }
    t0 = FUN_0c0107f4();
    *(unsigned int *)((a4 + 0x14)) = t0;
    t2 = FUN_0c010964();
    *(unsigned int *)((a4 + 0x10)) = t2;
    t3 = FUN_0c0109e4();
    *(unsigned int *)((a4 + 0x1C)) = t3;
    t4 = FUN_0c01086a();
    *(unsigned int *)((a4 + 0x18)) = t4;
    t5 = FUN_0c0108e0();
    *(unsigned int *)((a4 + 0x24)) = t5;
    if ((t5 & ((int)0x1 << (int)t1)) != 0) {
        t5 = 0x0;
        if ((*(signed char *)((a4 + 0x31))) != 17) {
            (((struct o2D_uchar *)0xC362A54)->v) = 0x11;
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            (((struct o33_uchar *)(a4))->v) = 0x2;
            t5 = 0x1;
        }
        return t5;
    }
    if ((((t0 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)) & (t3 & ((int)0x1 << (int)t1))) == 0) {
        if ((((t2 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)) & (t3 & ((int)0x1 << (int)t1))) == 0) {
            if ((((t0 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)) & (t4 & ((int)0x1 << (int)t1))) != 0) {
                t3 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) != 5) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x5;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t3 = 0x1;
                }
                return t3;
            }
            if (((t4 & ((int)0x1 << (int)t1)) & ((t2 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1))) != 0) {
                t3 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) != 6) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x6;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t3 = 0x1;
                }
                return t3;
            }
            if ((*(signed char *)((a4 + 0x31))) == 3) {
                return 0x0;
            }
            (((struct o2D_uchar *)0xC362A54)->v) = 0x3;
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            if (((t0 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)) == 0) {
                if (((t2 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)) == 0) {
                    (((struct o33_uchar *)(a4))->v) = 0x0;
                    return 0x1;
                }
                return ((int (*)(int, int, int, int))(0xC01FC28))(((t2 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)), ((t0 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)), a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC01FC2A))(((t2 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)), ((t0 & ((int)0x1 << (int)t1)) & ((int)0x1 << (int)t1)), a6, a7);
        }
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x31))) != 6) {
            (((struct o2D_uchar *)0xC362A54)->v) = 0x6;
            (((struct o0_uchar *)0xC362A54)->v) = 0x0;
            t0 = 0x1;
        }
        return t0;
    }
    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x31))) != 5) {
        (((struct o2D_uchar *)0xC362A54)->v) = 0x5;
        (((struct o0_uchar *)0xC362A54)->v) = 0x0;
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c096a64(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register int t37;
    register float t42;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                FUN_0c09a808(a4, 0x2, 0xD9);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = FUN_0c09ca24(a4, 0x2);
        *(unsigned char *)(((int)stk + 0)) = t18;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            if (t21 > t22) {
                (((struct o3C_float *)(a4))->v) = 5.0f;
                return 0x0;
            }
            (((struct o3C_float *)(a4))->v) = 0.0f;
            return 0x2;
        }
        return 0x0;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 1) {
            if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                FUN_0c09a808(a4, 0x2, 0xDA);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x1;
        }
        t37 = FUN_0c09ca24(a4, 0x2);
        if ((signed char)t37 != 0) {
            if (((((struct o0_float *)0xC096C20)->v)) > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t37 - 1) << 2)) + 0x0)))))->v))) {
                t42 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t37 - 1) << 2)) + 0x0))), 0x1);
                if (!((((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)0xC096C20)->v))) > t42)) {
                    *(volatile float *)0xC096C28;
                    *(volatile float *)((a4 + 0x2D4));
                    return 0x0;
                }
                return ((int (*)(void))(0xC096B94))();
            }
            return ((int (*)(int, int, int, int))(0xC096B94))(t37, a5, a6, a7);
        }
        return 0x0;
    }
    return 0x0;
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((a4 != 0) && (a5 != 0)) {
        (((struct o24_uint *)0xC803D90)->v) = a4;
        (((struct o28_uint *)0xC803D90)->v) = a5;
        (((struct o2C_uint *)0xC803D90)->v) = a7;
        (((struct o0_uint *)0xC803D90)->v) = a6;
        *(unsigned int *)0xC816FF4 = a6;
        t0 = FUN_0c0fae08();
        if (t0 != 0x80000000) {
            return ((int (*)(void))(0xC0F5B20))();
        }
        if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            return 0xF;
        }
        if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
            return 0x10;
        }
        (((struct o0_uint *)0xC8172EC)->v) = (*(int *)((a4 + 0x1C)));
        (((struct o8_uint *)0xC8172EC)->v) = 0x0;
        (((struct o4_uint *)0xC8172EC)->v) = (*(int *)((a5 + 0x1C)));
        (((struct oC_uint *)0xC8172EC)->v) = 0x0;
        kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
        kmiWriteRegister(0x54, ((((struct o28_int *)0xC817260)->v)));
        kmiWriteRegister(0x60, ((((struct o0_int *)0xC8172EC)->v)));
        kmiWriteRegister(0x64, ((((struct o4_int *)0xC8172EC)->v)));
        (((struct o28_uint *)0xC817260)->v) = ((((struct o0_int *)0xC8172EC)->v));
        (((struct o2C_uint *)0xC817260)->v) = ((((struct o4_int *)0xC8172EC)->v));
        if (a6 == 1) {
            (((struct o30_uint *)0xC8171A8)->v) = 0x0;
            (((struct o34_uint *)0xC8171A8)->v) = 0x0;
            kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
            t0 = ((((struct o2C_int *)0xC817260)->v));
        } else {
            kmiWriteRegister(0x50, ((((struct o28_int *)0xC817260)->v)));
            t0 = ((((struct o28_int *)0xC817260)->v));
        }
        kmiWriteRegister(0x54, t0);
        (((struct o0_uint *)0xC817260)->v) = 0x1;
        (((struct o0_uint *)0xC8171A8)->v) = a7;
        return ((int (*)(void))(0xC0F5B40))();
    }
    return 0xE;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int stk[13];
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t9;
    register int t11;
    register int t14;
    register int t15;
    register int t16;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = 0x0;
            t8 = (direntry(a4, 0x0));
            t9 = 0x0;
            for (;;) {
                t11 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30));
                if ((int)t9 >= (int)t11) {
                    if (0x0 == 0) {
                        return 0xFFFFFF05;
                    }
                    t9 = (*(int *)(((int)stk + 0)));
                    t14 = (t9 + 0xC);
                    t15 = t11;
                    t16 = (t8 + 0x4);
                    for (;;) {
                        if ((unsigned int)t9 >= (unsigned int)t14) {
                            break;
                        }
                        t15 = (*(signed char *)((t16 + 0x0)));
                        t16 = (t16 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = t15;
                        t9 = (t9 + 0x1);
                    }
                    t9 = ((int)stk + 0);
                    *(unsigned char *)((t14 + 0x0)) = 0x0;
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
                    t9 = (t9 + 0x8);
                    FUN_0c1048e6(t8, t9, t16, 0x0);
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1));
                    *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 48)));
                    *(unsigned char *)((a6 + 0x6)) = (*(signed char *)(((int)stk + 12)));
                    *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 18)));
                    *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 16)));
                    if ((*(int *)(((int)stk + 12))) == 0xCC) {
                        return ((int (*)(void))(0xC103714))();
                    }
                    return ((int (*)(void))(0xC103712))();
                }
                t28 = *(signed char *)((t8 + 0x0));
                if (((unsigned char)t28 != 51) && ((unsigned char)t28 != 0xCC)) {
                    t8 = (t8 + 0x20);
                    t9 = (t9 + 0x1);
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
                    continue;
                }
                break;
            }
            if (0x1 == 0) {
                return 0xFFFFFF05;
            }
            t30 = *(int *)(((int)stk + 0));
            t31 = t11;
            t32 = t30;
            t33 = (t8 + 0x4);
            for (;;) {
                if ((unsigned int)t32 >= (unsigned int)(t30 + 0xC)) {
                    break;
                }
                t31 = (*(signed char *)((t33 + 0x0)));
                t33 = (t33 + 0x1);
                *(unsigned char *)((t32 + 0x0)) = t31;
                t32 = (t32 + 0x1);
            }
            *(unsigned char *)(((t30 + 0xC) + 0x0)) = 0x0;
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x18))) + 0x1);
            FUN_0c1048e6(t8, (((int)stk + 0) + 0x8), t33, 0x1);
            *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1));
            *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 48)));
            *(unsigned char *)((a6 + 0x6)) = (*(signed char *)(((int)stk + 12)));
            *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 18)));
            *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 16)));
            if ((*(int *)(((int)stk + 12))) == 0xCC) {
                return ((int (*)(void))(0xC103714))();
            }
            return ((int (*)(void))(0xC103712))();
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c01f874(int a4)
{
    int stk[2];
    register int t0;
    register int t21;
    int t3;
    register int t15;
    register float u20;

    *(unsigned char *)(((int)stk + 4)) = a4;
    (((struct o6_uchar *)0xC362A78)->v) = 0x0;
    t0 = FUN_0c059132(0x5, 0x1, 0x9);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01F6FC;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0xE)) = 0x63;
        *(unsigned char *)((t0 + 0xF)) = 0x63;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC362A78)->v));
        t3 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))) + 0x2)) = 0x40F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t3 << 2)) + 0x0))), 0xC664B08, ((0x1 & t3) + 0xC));
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x8) {
                break;
            }
        }
        *(unsigned char *)((((((struct o300_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o300_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o300_int *)(t0))->v)) + 0x2)) = 0x40F;
        FUN_0c06233a(((((struct o300_int *)(t0))->v)), 0xC664B08, 0x23);
        t15 = (((struct o300_int *)(t0))->v);
        *(int *)((int)stk + 0) = (0x40 + t15);
        u20 = ((((struct o0_float *)0xC01F9E4)->v));
        u20 = u20 + ((((struct o4_float *)0xC01F9E4)->v)) * (FUN_0c0dfa50(((((struct oEC_short *)(t0))->v))));
        (((struct o40_float *)(t15))->v) = u20;
        t21 = 0xC01F9E8;
    }
    return t21;
}

int FUN_0c051ce4(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
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
    v0_3 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_6 = FUN_0c050068(v0_3);
    v0_7 = *(signed char *)0xC3673EE;
    v0_4 = (0x4C);
    v0_1 = (v0_3);
    v0_2 = (0xC3673EE);
    v0_5 = (v0_6);
    v0_0 = (0xC366F40);
    v0_3 = (((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40));
    if (((int)(unsigned short)((v0_6 - ((((struct o4C_short *)(((short)((short)(unsigned char)v0_7 * (short)0x254) + 0xC366F40)))->v))) + 0x1000) >= (int)0x2000)) goto L_C051D24;
    v0_5 = ((*(int *)((v0_3 + v0_4))));
    L_C051D26:;
    *(unsigned short *)(((int)stk + 0)) = (FUN_0c050180(v0_5));
    *(unsigned short *)(((int)stk + 4)) = (FUN_0c050180((0x8000 + v0_5)));
    v0_3 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_3 + 0x2);
    *(unsigned short *)(((int)stk + 8)) = (*(short *)((((v0_3 + 0x2) - 2) + 0x0)));
    v0_9 = *(signed char *)((v0_0 + (short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254)));
    v0_4 = ((unsigned char)v0_9);
    v0_5 = (0xC3673E8);
    v0_8 = (0x254);
    v0_3 = (0xC3673EC);
    v0_6 = (0x0);
    v0_7 = ((FUN_0c05012e(v0_1)));
    if (((unsigned char)v0_9 == 0)) goto L_C051D72;
    if ((v0_4 == 1)) goto L_C051D86;
    if (!((v0_4 == 2))) goto L_C051DEE;
    *(unsigned short *)((v0_3 + 0x0)) = 0x1;
    v0_1 = FUN_0c04cdf2();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)((v0_5 + 0x0)));
    v0_4 = (v0_1);
    goto L_C051DEE;
    L_C051DEE:;
    return v0_4;
    L_C051D86:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_5 = *(short *)(((int)stk + 8));
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    v0_6 = ((short)v0_7);
    if (((int)v0_5 >= (int)((short)v0_7 - 20))) goto L_C051DA4;
    (((struct o2DC_uint *)(v0_1))->v) = (((((struct o2DC_int *)(v0_1))->v)) | (unsigned short)(*(short *)(((int)stk + 0))));
    v0_4 = (0x2DC);
    goto L_C051DEE;
    L_C051DA4:;
    if (((int)v0_3 <= (int)(v0_6 + 0x14))) goto L_C051DBC;
    v0_0 = *(short *)(((int)stk + 4));
    (((struct o2DC_uint *)(v0_1))->v) = (((((struct o2DC_int *)(v0_1))->v)) | (unsigned short)v0_0);
    v0_4 = ((unsigned short)v0_0);
    goto L_C051DEE;
    L_C051DBC:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C051DEE;
    L_C051D72:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    v0_4 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_4 * (short)v0_8) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_4 * (short)v0_8) + v0_0) + 0x0))) + 0x1);
    goto L_C051D86;
    L_C051D24:;
    *(unsigned int *)((v0_3 + v0_4)) = v0_5;
    goto L_C051D26;
}

int FUN_0c069e08(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09dc64(a4, 0x1555);
    FUN_0c09a910(a4);
    if (200.0f > (*(float *)0xC494D1C)) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 8.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 8.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        }
    }
    t0 = FUN_0c09e7b8(a4);
    if ((signed char)t0 != 0) {
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            FUN_0c09a808(a4, 0x1, 0x37);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                t0 = 0xC14EECC;
                t1 = 0xC14EEC0;
            } else {
                t0 = 0xC14EEE4;
                t1 = 0xC14EED8;
            }
            FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x15, 0x52, t1, t0);
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            FUN_0c09dc64(a4, 0x78E3);
        } else {
            FUN_0c09a808(a4, 0x1, 0x38);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
        }
        return FUN_0c09c422(a4);
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c069b70(int a4)
{
    int stk[7];
    register int t3;
    register int t15;
    register int t24;
    register int t28;
    register int t41;
    register int t54;
    register int t71;
    register int t85;
    int t16;
    register int t17;
    int t26;

    FUN_0c09a910(a4);
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if ((int)(short)(t3 - 1) > 0) {
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
    }
    if (0.0f > ((((struct o274_float *)(a4))->v))) {
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) / 2.0f);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t15 = FUN_0c09c894(a4);
        if (((signed char)t15 == 1) && (t16 = *(int *)((a4 + 0x1C)), t17 = *(signed char *)((t16 + 0x4)), t17 != 10)) {
            t24 = *(int *)((a4 + 0x1C));
            if (((*(signed char *)((t24 + 0x71F1))) == 0) && (t26 = *(signed char *)((t24 + 0x9)), t26 != 1)) {
                t85 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t28 = FUN_0c09e7b8(a4);
                    t85 = (signed char)t28;
                    if ((signed char)t28 != 0) {
                        FUN_0c09a808(a4, 0x1, 0x98);
                        (((struct o71A9_uchar *)(a4))->v) = 0x1;
                        (((struct o71A8_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                        t85 = (FUN_0c09c422(a4));
                    }
                }
            } else {
                (((struct o108_uchar *)(a4))->v) = 0x0;
                FUN_0c0a2712(a4, 0x3, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                t41 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t41) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
                FUN_0c04bef2((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                t85 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
            }
        } else {
            t85 = 0x3C;
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t54 = FUN_0c09e7b8(a4);
                t85 = (signed char)t54;
                if ((signed char)t54 != 0) {
                    FUN_0c09a808(a4, 0x1, 0x98);
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    t85 = (FUN_0c09c422(a4));
                }
            }
        }
    } else {
        t85 = 0x3C;
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t71 = FUN_0c09e7b8(a4);
            t85 = (signed char)t71;
            if ((signed char)t71 != 0) {
                FUN_0c09a808(a4, 0x1, 0x98);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t85 = (FUN_0c09c422(a4));
            }
        }
    }
    return t85;
}

int FUN_0c102632(int a4, int a5)
{
    int stk[3];
    register int t48;
    register int t1;
    register int t3;
    register int t38;
    register int t33;
    register int t7;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t43;
    int t4;
    register int t5;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 0)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
                t7 = buIsFormat(a4);
                t33 = 0xFFFFFF03;
                if ((int)t7 >= 0) {
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t15 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20)));
                        t15 = (t15 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t15 + t7))));
                    }
                    t16 = (((int)stk + 0) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 0) + 0x4));
                    (((struct o20_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x0))) + 0x1);
                    (((struct o22_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)));
                    (((struct o26_ushort *)(a5))->v) = (FUN_0c10274c(a4, 0x0));
                    (((struct o24_ushort *)(a5))->v) = ((((struct o26_short *)(a5))->v));
                    (((struct o28_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x38)));
                    (((struct o2A_ushort *)(a5))->v) = (FUN_0c10274c(a4, 0x1));
                    (((struct o2C_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x2C))) + 0x1);
                    (((struct o2E_ushort *)(a5))->v) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
}

int FUN_0c0a6490(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 4.0f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) + 0.0249999985f);
            if (!(1.0f > ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            return 0x40;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x82;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x5);
        (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 150.0f;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c0aa484(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        (((struct o4C_float *)(a4))->v) = (((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v)) - ((((struct o40_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v));
        *(unsigned int *)((a4 + 0x30)) = (int)((float)(*(int *)((a4 + 0x30))) + ((((((struct o4C_float *)(a4))->v)) * (*(float *)0xC0AA62C))));
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        t0 = *(signed char *)0xC7F2EE6;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 2) {
            t0 = *(signed char *)0xC7F2EE7;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 3) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x21);
    (((struct o94_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    FUN_0c0e6fe8();
    (((struct o40_float *)(a4))->v) = ((((struct oC_float *)(((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v))))->v));
    return 0x40;
}

int FUN_0c0c4fbe(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t32;
    register int t17;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t32 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C5140;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(volatile int *)(((int)stk + 8));
        FUN_0c0e6fe8();
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c0e6fe8();
        *(volatile int *)(((int)stk + 4));
        FUN_0c0e6fe8();
        (((struct oF0_ushort *)(t0))->v) = 0x4;
        FUN_0c0df940();
        
        (((struct oF2_ushort *)(t0))->v) = (FUN_0c0e6f24());
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        t17 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t17 << 1) + t17) << 2) << 1) + 0xC6002D0), ((*(signed char *)((t0 + 0xF2))) + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t32 = 0x4C;
    }
    return t32;
}

int FUN_0c03c7e2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            return 0x4C;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
    return 0x24;
}

int FUN_0c064a1c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        u0 = *(float *)0xC494D1C;
        t0 = *(int *)((a4 + 0x1C));
        u1 = u0;
        if (u0 == 0.0f) {
            u1 = 0.00999999978f;
        }
        (((struct o7254_float *)(a4))->v) = ((((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)(t0))->v))) + -50.0f);
        t0 = FUN_0c0df360((((((struct o7254_float *)(a4))->v)) / u1));
        *(unsigned int *)((a4 + 0x2C)) = ((t0 + 0x4000) & 0xFFFF);
        (((struct o3C_float *)(a4))->v) = ((FUN_0c0dfa50(((-((t0 + 0x4000) & 0xFFFF)) + 0x14000))) * 25.0f);
        (((struct o7254_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 25.0f);
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        FUN_0c09a808(a4, 0x1, 0x48);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oF2_ushort *)(a4))->v) = 0x2;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c09660c(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register float u24;
    register int t44;
    register float t48;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                FUN_0c09a808(a4, 0x2, 0xD5);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = FUN_0c09ca24(a4, 0x1);
        *(unsigned char *)(((int)stk + 0)) = t18;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            u24 = 0.0f;
            if (t21 > t22) {
                u24 = 5.0f;
            }
            (((struct o3C_float *)(a4))->v) = u24;
        }
        return 0x0;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 1) {
            if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                FUN_0c09a808(a4, 0x2, 0xD6);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x1;
        }
        t44 = FUN_0c09ca24(a4, 0x1);
        if ((signed char)t44 != 0) {
            if (300.0f > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0)))))->v))) {
                t48 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0))), 0x1);
                if (!((((((struct o24_float *)(a4))->v)) + -11.7099991f) > t48)) {
                    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                    (((struct o274_float *)(a4))->v) = 1.0f;
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    return 0x1;
                }
                return ((int (*)(void))(0xC096738))();
            }
            return ((int (*)(int, int, int, int))(0xC096738))(t44, a5, a6, a7);
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0d30f4(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t7;
    register int t10;
    register int t32;
    register int t35;
    register int t37;

    t0 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t4 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o2_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o1F_uchar *)0xC7F2EE4)->v) = 0x0;
                t4 = 0x23;
            }
            return t4;
        }
        t7 = *(signed char *)0xC7F2EE5;
        if ((unsigned char)t7 != 0) {
            if ((unsigned char)t7 != 1) {
                return (unsigned char)t7;
            }
            return ((int (*)(int, int, int, int))(FUN_0c0d452e))(0xC7F2EE5, a5, a6, a7);
        }
        FUN_0c058f4e();
        (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
        return ((int (*)(void))(FUN_0c0d452e))();
    }
    t10 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t10 != 0) {
        if ((unsigned char)t10 != 1) {
            if ((unsigned char)t10 != 2) {
                if ((unsigned char)t10 != 3) {
                    if ((unsigned char)t10 != 4) {
                        if ((unsigned char)t10 != 5) {
                            FUN_0c0d320a();
                        } else {
                            FUN_0c0d3e6c(0xC7F2EE5, a5, a6, a7);
                        }
                    } else {
                        FUN_0c0d44d0();
                    }
                } else {
                    FUN_0c0d4094();
                }
            } else {
                FUN_0c0d4196(0xC7F2EE5, a5, a6, a7);
            }
        } else {
            FUN_0c0d3366();
        }
    } else {
        FUN_0c0d320a();
    }
    FUN_0c0d2dd8(((((unsigned char)(*(signed char *)0xC7F2EE5) == 3)) ? 1 : 0));
    t32 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t32 != 6) {
        if ((*(signed char *)0xC7F2F0B) != 0) {
            t35 = thunk_FUN_0c0d45fe();
            if (t35 != 0) {
                FUN_0c0a2f52();
                return FUN_0c0a3796(0x0, 0x43);
            }
            return t35;
        }
        t37 = 0x2B;
        if ((unsigned char)((int)stk + 0) != 0) {
            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
            (((struct o4_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
            t37 = 0x0;
        }
        return t37;
    }
    return (unsigned char)t32;
}

int FUN_0c103c40(int a4, int a5, int a6)
{
    int stk[16];
    register int t0;
    register int t36;
    register int t3;
    register int t5;
    register int t30;
    register int t8;
    register int t27;
    register int t10;
    register int t24;
    register int t12;
    register int t22;
    register int t13;
    register int t17;
    register int t18;
    register int t33;
    int t6;
    register int t7;
    register int t16;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347228)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC80DBC8) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = check_isopen();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 0) + 0x38), (*(int *)(((int)stk + 4))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 0) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (FUN_0c104742(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}

int FUN_0c023328(int a4, int a5, int a6, float f4)
{
    int stk[6];
    register int t51;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u12;
    register float u15;
    register float t16;
    register float u25;
    register float u29;
    register float u34;
    register float u39;
    register float u44;
    float u1;
    float u24;

    t51 = 0x0;
    if ((((((struct oC_float *)(a4))->v)) != 0.0f) && (u1 = (((struct oC_float *)(a5))->v), u1 != 0.0f)) {
        u2 = (((struct oC_float *)(a4))->v);
        u3 = (((struct oC_float *)(a5))->v);
        u4 = *(float *)((a4 + 0x0));
        u5 = *(float *)((a5 + 0x0));
        *(float *)(((int)stk + 8)) = (u4 - u5);
        u6 = (((struct o4_float *)(a5))->v);
        u7 = (((struct o4_float *)(a4))->v);
        *(float *)(((int)stk + 0)) = (u7 - u6);
        u8 = (((struct o8_float *)(a5))->v);
        u9 = (((struct o8_float *)(a4))->v);
        u12 = ((u7 - u6) * (u7 - u6));
        u12 = u12 + ((u4 - u5)) * ((u4 - u5));
        u15 = u12;
        u15 = u15 + ((u9 - u8)) * ((u9 - u8));
        *(float *)(((int)stk + 4)) = (u9 - u8);
        t16 = FUN_0c0df340(u15);
        t51 = 0x0;
        if (((u2 + u3) - t16) > 0.0f) {
            *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
            *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
            if (((*(float *)(((int)stk + 12))) == 0.0f) && (u24 = *(float *)(((int)stk + 20)), u24 == 0.0f)) {
                u25 = (((struct o0_float *)0xC023468)->v);
                *(float *)(((int)stk + 20)) = u25;
                *(float *)(((int)stk + 12)) = u25;
            }
            FUN_0c0e24f0((((int)stk + 0) + 0xC));
            u29 = (((struct o8_float *)0xC023468)->v);
            u34 = (*(float *)((a4 + 0x0)));
            u34 = u34 + (*(float *)(((int)stk + 12))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            *(float *)((a6 + 0x0)) = u34;
            u39 = ((((struct o4_float *)(a4))->v));
            u39 = u39 + (*(float *)(((int)stk + 16))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            (((struct o4_float *)(a6))->v) = u39;
            u44 = ((((struct o8_float *)(a4))->v));
            u44 = u44 + (*(float *)(((int)stk + 20))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            (((struct o8_float *)(a6))->v) = u44;
            t51 = 0x1;
        }
    }
    return t51;
}
