/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o56_short { char p[0x56]; short v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7240_uchar { char p[0x7240]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct o82_short { char p[0x82]; short v; };
struct o82_ushort { char p[0x82]; unsigned short v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_short { char p[0xA0]; short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c01ee40(int);
int FUN_0c01f0a8(int);
int FUN_0c01f19e(int);
int FUN_0c01f1f6(int, int, int, int);
int FUN_0c01f248(int, int, int, int);
int FUN_0c01f28e(int, int, int, int);
int FUN_0c01f48c(int, int);
int FUN_0c01f4c8(int);
int FUN_0c01f874(int);
int FUN_0c01f9a6(void);
int FUN_0c01fa70(void);
extern int FUN_0c01fdc8();
int FUN_0c01fe34(int);
int FUN_0c01fe52(int);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c043bdc(int);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c05923a(int, int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c061f9c(int);
int FUN_0c06233a(int, int, int);
int FUN_0c06336c(int);
int FUN_0c0634b4(int);
int FUN_0c08d6ec(int, int);
int FUN_0c08dbc8(int, int);
int FUN_0c08dc24(int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c45a(int);
int FUN_0c09c782(int);
int FUN_0c09c894(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09ddfe(int);
int FUN_0c09e7b8(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0d16d2(int);
int FUN_0c0d2fb0(void);
int FUN_0c0d71f4(int);
int FUN_0c0d78fa(void);
int FUN_0c0d7a0a(void);
int FUN_0c0d7a44(int);
int FUN_0c0d8348(void);
int FUN_0c0ddd10(int, int);
int FUN_0c0de280(int, int, int, float);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fdc(int);
extern int FUN_0c0e6fe8();
int FUN_0c0f4128(int);
int kdSetBlockWrite(int, ...);
int FUN_0c1012f4(int, int, int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fgetinfo(int, int, int);
int check_file_correct(int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107ea4(int);
int FUN_0c10b7b0(int, int, int, int, int);
int vmsio_get_media_info(int, int);
int vmsio_block_read(int, int, int);
int FUN_0c11428e(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c114338(int);
int FUN_0c114d44(int, int, int);
int FUN_0c114d8a(int);
int FUN_0c115108(void);
int SJ_SplitChunk(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int FUN_0c0666e4(int a4, int a5, int a6, int a7);
int FUN_0c0d780c(void);
float FUN_0c059718(int a4, float f4);
int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10796a(int a4, int a5, int a6, int a7);
int FUN_0c028a4c(int a4, int a5, float f4);
int FUN_0c04a8ec(int a4, int a5);
int FUN_0c0f414e(int a4, int a5, int a6, int a7);
int FUN_0c10121c(int a4, int a5, int a6);
int FUN_0c105ed2(int a4, int a5, int a6, int a7);
int FUN_0c02374e(int a4, int a5);
int FUN_0c0235ce(int a4, int a5);
int FUN_0c02380c(int a4, int a5);
int FUN_0c064056(int a4, int a5, int a6, int a7);
int FUN_0c06551e(int a4);
int FUN_0c06ea2c(int a4);
int FUN_0c0be698(int a4);
float FUN_0c0b15a0(int a4, int a5);
int FUN_0c0d2424(int a4, int a5, int a6, int a7);
int kmiReqRestOfDMA(int a4);
int FUN_0c0194dc(int a4, int a5);
int FUN_0c02b724(void);
int FUN_0c0485f8(int a4);
int FUN_0c05986c(int a4, int a5, int a6, int a7);
int FUN_0c059934(int a4, int a5, int a6, int a7);
float FUN_0c09c974(int a4, int a5, float f4);
int FUN_0c0cbe6c(int a4, int a5);
int FUN_0c0e393a(int a4, int a5, int a6, int a7);
int FUN_0c0e51e8(int a4, int a5, int a6, int a7);
int FUN_0c0eae20(int a4, int a5);
int FUN_0c101148(int a4, int a5);
int FUN_0c1058e2(int a4, int a5, int a6, int a7, int a8);
int mpdrv_check_port(int a4);
int FUN_0c012420(int a4);
int FUN_0c0906e6(int a4);
int FUN_0c08e3f2(int a4, int a5);
int FUN_0c0abe44(int a4, int a5, int a6);
int FUN_0c0208ec(int a4, int a5);
int FUN_0c0200e2(int a4, int a5, int a6, int a7);
int FUN_0c01ed94(int a4, int a5, int a6, int a7);
int FUN_0c01db74(int a4, int a5, int a6, int a7);

int FUN_0c0666e4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c09c782(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0634b4(a4);
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        return FUN_0c0a2080(a4);
    }
    if ((*(signed char *)((a4 + 0xC))) == 1) {
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            (((struct o7248_uint *)(a4))->v) = (unsigned short)(((FUN_0c09ddfe(a4)) + (*(short *)0xC7F31E0)) - (*(int *)((a4 + 0x30))));
            if ((((((struct o7248_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) | 0xFFFF0000);
            }
            t0 = (((struct o7248_int *)(a4))->v);
            if ((int)t0 <= (int)0x16C) {
                if ((int)t0 < (int)0xFFFFFE94) {
                    if ((int)((((struct o7248_int *)(a4))->v)) > 0) {
                        (((struct o7248_uint *)(a4))->v) = 0x16C;
                        return ((int (*)(int, int, int, int))(0xC0667A0))(t0, 0x16C, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC06679C))(t0, 0x16C, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0667AA))(t0, 0x16C, a6, a7);
            }
            if ((int)((((struct o7248_int *)(a4))->v)) > 0) {
                (((struct o7248_uint *)(a4))->v) = 0x16C;
                return ((int (*)(int, int, int, int))(0xC0667A0))(t0, 0x16C, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06679C))(t0, 0x16C, a6, a7);
        }
        return ((int (*)(void))(0xC0667AA))();
    }
    return ((int (*)(void))(0xC0667AA))();
}

int FUN_0c0d780c(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o0_uchar *)0xC7F4726)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        (((struct o2_uchar *)0xC7F4726)->v) = 0x0;
        (((struct oD_uchar *)0xC7F4726)->v) = 0x0;
        *(unsigned int *)0xC494B0C = 0xE10;
    }
    FUN_0c0d78fa();
    t0 = *(int *)0xC494B0C;
    *(unsigned int *)0xC494B0C = (t0 - 1);
    if ((t0 - 1) != 0) {
        t0 = FUN_0c0d7a44(0x2);
        if (t0 != 0) {
            return FUN_0c061f9c(0x0);
        }
        if ((*(signed char *)0xC7F473B) == 0) {
            t0 = FUN_0c0d7a0a();
            t1 = FUN_0c0d7a44(0x4);
            if (t0 == 0) {
                if (t1 != 0) {
                    FUN_0c0d71f4((t0 | t1));
                    return ((*(signed char *)0xC7F4725) + 0x1);
                }
                return ((int (*)(void))(0xC0D78D8))();
            }
            FUN_0c0d71f4((t0 | t1));
            return ((*(signed char *)0xC7F4725) + 0x1);
        }
        return ((int (*)(void))(0xC0D78D8))();
    }
    return FUN_0c061f9c(0x0);
}

float FUN_0c059718(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = 1.0f;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        u0 = (*(float *)((((unsigned char)(*(signed char *)0xC7F305C) << 2) + 0xC32DF78)));
    }
    u1 = 1.0f;
    if ((*(signed char *)((a4 + 0x71ED))) != 0) {
        u1 = (*(float *)((((unsigned char)(*(signed char *)0xC7F305C) << 2) + 0xC32DFF8)));
    }
    u2 = *(float *)((0xC32E078 + ((*(signed char *)((a4 + 0x4))) << 2)));
    t0 = 0xF;
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E))) < (int)0xF) {
        t0 = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E)));
    }
    u3 = *(float *)((((signed char)t0 << 2) + 0xC32E0A4));
    t0 = 0x14;
    if ((int)((((struct o71D4_short *)(a4))->v)) < (int)0xC8) {
        *(volatile short *)((a4 + 0x71D4));
        t0 = (FUN_0c0e6d00());
    } else {
        t1 = a4;
        u4 = u3;
        u3 = u1;
        u1 = u0;
        u0 = 1.0f;
        u5 = u2;
    }
    u2 = *(float *)((((short)t0 << 2) + 0xC32E0E4));
    t0 = *(signed char *)0xC7F2F12;
    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(t1))->v)) + 0x4))) != 2) {
        u6 = (u5 * u4);
        u4 = (f4 * (*(float *)((((t0 << 2) + 0xC32DF68) + 0x0))));
        u5 = (u4 * u1);
        u4 = ((u6 * u2) / u3);
        u2 = (u5 * u4);
    } else {
        u4 = (((*(float *)((((t0 << 2) + 0xC32DF68) + 0x0))) * u1) / u3);
        u2 = (f4 * u4);
    }
    u1 = u2;
    if (u0 > u2) {
        u1 = u0;
    }
    return u1;
}

int FUN_0c0d7318(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC0D73FC))();
        }
        return ((int (*)(void))(0xC0D73D0))();
    }
    FUN_0c0de280(0xFF000000, 0xFF000000, 0xFF000000, f4);
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
    memset(0xC7F4724, 0x0, 0x2C);
    FUN_0c0d2fb0();
    FUN_0c058f4e();
    FUN_0c0d8348();
    FUN_0c05f2d4(0x3, 0x0);
    *(unsigned char *)0xC7F4768 = 0x0;
    return ((int (*)(int, int, int, int))(0xC0D73CE))(0xC7F4750, a5, a6, a7);
}

int FUN_0c10796a(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t8;
    register int t22;
    register int t26;
    register int t28;
    register int t52;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 == 0) {
        t52 = (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    } else {
        FUN_0c1070a0(((int)stk + 0));
        if ((*(int *)(((int)stk + 4))) == 0) {
            t4 = FUN_0c107ea4(a4);
            if (t4 != 0) {
                t6 = FUN_0c114d8a(((((struct o40_int *)(a4))->v)));
                if (t6 != 0) {
                } else {
                    *(volatile int *)((a4 + 0x40));
                    t8 = FUN_0c115108();
                    if (t8 == 0) {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x5);
                    }
                }
            }
        } else {
            if ((*(int *)(((int)stk + 4))) == 1) {
                t22 = FUN_0c107ea4(a4);
                if (t22 != 1) {
                    t26 = FUN_0c114d44(((((struct o40_int *)(a4))->v)), (*(int *)((a4 + 0x8))), (*(int *)((a4 + 0xC))));
                    if (t26 != 0) {
                    } else {
                        *(volatile int *)((a4 + 0x40));
                        t28 = FUN_0c115108();
                        if (t28 != 0) {
                        } else {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x2);
                        }
                    }
                }
            }
        }
        t52 = (FUN_0c1070b8(((int)stk + 0)));
    }
    return t52;
}

int FUN_0c028a4c(int a4, int a5, float f4)
{
    int stk[2];
    register int t0;
    register int t14;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC028524;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x4)) = (*(int *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x101F;
        (((struct o98_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC6649E8, (*(int *)(((int)stk + 0))));
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        t14 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0xA)) = t14;
        if (f4 != 1.0f) {
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
            (((struct o60_float *)(t0))->v) = f4;
            (((struct o64_float *)(t0))->v) = f4;
            (((struct o68_float *)(t0))->v) = f4;
            t14 = 0x68;
        }
    }
    return t14;
}

int FUN_0c04a8ec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t3 = FUN_0c059132(0x5, 0x0, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = 0x2;
        *(unsigned short *)((t3 + 0x6)) = 0x40F;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        *(unsigned char *)((t3 + 0x9)) = 0x0;
        *(unsigned char *)((t3 + 0xA)) = 0x0;
        *(unsigned char *)((t3 + 0xB)) = 0x0;
        *(unsigned int *)((t3 + 0x10)) = 0xC04A9D8;
        FUN_0c0e6fe8(t3);
        FUN_0c0e6fe8(t0);
        FUN_0c0e6fe8(t1);
        (((struct o5C_float *)(t2))->v) = 0.5f;
        (((struct o60_float *)(t2))->v) = 1.0f;
        (((struct o64_float *)(t2))->v) = 1.0f;
        (((struct o68_float *)(t2))->v) = 1.0f;
        (((struct o118_uint *)(t2))->v) = ((((struct o118_int *)(a4))->v));
        t0 = (((struct o2E0_int *)(t2))->v);
        FUN_0c06233a(t0, 0xC4CFA68, 0x0);
        (((struct o9C_uint *)(t0))->v) = a5;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0xF;
        t4 = 0xF;
    }
    return t4;
}

int FUN_0c0f414e(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t23;
    register int t9;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t12;
    register int t13;
    register int t20;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = FUN_0c0f4128((*(int *)(((int)stk + 20))));
    t23 = 0xFFFFFFFE;
    if (t1 == 0) {
    } else {
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 12) + 0xC) + 0x0)) = 0x0;
        t9 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)(((int)stk + 16));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t4 + 0x1);
                t2 = (t2 | ((int)0x1 << (int)(unsigned char)(*(signed char *)((((t4 + 0x1) - 1) + 0x0)))));
                if ((unsigned int)t3 >= (unsigned int)a7) {
                    break;
                }
            }
            t9 = t2;
        }
        *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t9 >> 8);
        *(unsigned char *)((((((int)stk + 12) + 0xC) + 0x1) + 0x0)) = t9;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t11 = 0x0;
            t12 = (((((int)stk + 12) + 0xC) + 0x1) + 0x1);
            for (;;) {
                t13 = *(int *)(((int)stk + 12));
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = (*(signed char *)((((t13 + 0x1) - 1) + 0x0)));
                t12 = (t12 + 0x1);
                if ((unsigned int)t11 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 12)) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 8) = ((unsigned int)(a7 + 0x5) >> 2);
        *(int *)((int)stk + 4) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 0) = 0x0;
        *(volatile int *)(((int)stk + 20));
        t20 = kdSetBlockWrite(0x0, (((int)stk + 12) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t23 = 0x0;
        if ((int)t20 < 0) {
            t23 = 0xFFFFFFFF;
        }
    }
    return t23;
}

int FUN_0c10121c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC80578C);
    for (;;) {
        t2 = vmsio_block_read(a4, a5, a6);
        if (t2 != 0) {
            if (((*(int *)0xC15B0A8) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC80578C, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c105ed2(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t21;
    register int t24;
    register int t32;
    int t8;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x8));
    t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, 0x1000, (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t5 = *(int *)(((int)stk + 16));
    if ((int)t5 >= (int)0x10) {
        t7 = FUN_0c11428e(t0, (*(int *)(((int)stk + 12))), t5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 16)), (int)t7 <= (int)t8)) {
            t9 = FUN_0c114338(t0);
            if (t9 == 2) {
                t10 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 0)) = t10;
                t12 = 0x40;
                if ((int)t10 < (int)0x40) {
                    t12 = (*(int *)(((int)stk + 0)));
                }
                memcpy((a4 + 0x50), (*(int *)(((int)stk + 12))), t12);
            }
            SJ_SplitChunk((((int)stk + 0) + 0xC), t7, (((int)stk + 0) + 0xC));
            t21 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x0, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t32 = 0x2;
        } else {
            t32 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
    } else {
        t32 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    }
    return t32;
}

int FUN_0c02374e(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = FUN_0c0df340(u6);
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o10_float *)(a4))->v);
    u5 = (((struct o4_float *)(a5))->v);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c0235ce(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = FUN_0c0df340(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct oC_float *)(a4))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c02380c(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = FUN_0c0df340(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c064056(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return (FUN_0c06336c(a4));
        }
        return ((int (*)(int, int, int, int))(0xC06410E))(a4, a5, a6, a7);
    }
    t0 = FUN_0c09a910(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0x9A);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x6;
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06551e(int a4)
{
    int t0;

    FUN_0c09a910(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            t0 = *(signed char *)((a4 + 0x4));
            if ((t0 != 5) && (t0 != 9)) {
                if ((*(signed char *)((a4 + 0x4))) == 4) {
                    FUN_0c09c45a(a4);
                } else {
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t0 = FUN_0c09c894(a4);
                        if ((signed char)t0 != 0) {
                            return FUN_0c0a2e26(a4, 0x6, 0x0);
                        }
                    }
                }
                FUN_0c09a808(a4, 0x1, 0xA1);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                t0 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
                return (t0 + 0x1);
            }
            FUN_0c09c45a(a4);
            FUN_0c09a808(a4, 0x1, 0xA1);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

int FUN_0c06ea2c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c09a910(a4);
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            FUN_0c09a808(a4, 0x1, 0xFFFFFFA7);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            u0 = (((struct o0_float *)0xC06EB44)->v);
            (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / u0);
            (((struct o44_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)0xC06EB44)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o8_float *)0xC06EB44)->v));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / u0);
            (((struct o4C_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x2;
            return 0x2;
        }
    }
    t0 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = FUN_0c09e7b8(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 != 0) {
            FUN_0c09a808(a4, 0x1, 0xFFFFFFA1);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c0be698(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c059132(0x1, 0x1, 0x1);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0BE74A;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct o3C_float *)(t1))->v) = 0.0f;
        (((struct o38_float *)(t1))->v) = 0.0f;
        (((struct o58_float *)(t1))->v) = 1.0f;
        (((struct o54_float *)(t1))->v) = 1.0f;
        (((struct o50_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0x41F;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t1))->v))))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x8;
        t2 = 0xEE;
    }
    return t2;
}

float FUN_0c0b15a0(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a5 + 0x19));
    FUN_0c0df940();
    *(volatile float *)0xC0B16B8;
    
    t1 = *(signed char *)(((0xC152F68 + (t0 << 1)) + (FUN_0c0e6f24())));
    u0 = (((struct o8_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC152F84)))->v);
    FUN_0c0df940();
    *(volatile float *)0xC0B16B8;
    
    t0 = FUN_0c0e6f24();
    u1 = (*(float *)((((signed char)(((t1 << 1) + t1) << 2) + 0xC152F84) + 0x0)));
    u1 = u1 + u0 * (FUN_0c0dfa50((((t0 << 8) << 2) << 1)));
    (((struct o4_float *)(a5))->v) = u1;
    u1 = ((((struct o4_float *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC152F84)))->v));
    u1 = u1 + u0 * (FUN_0c0df4d0((((t0 << 8) << 2) << 1)));
    (((struct oC_float *)(a5))->v) = u1;
    return u0;
}

int FUN_0c0d2424(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t10;
    register int t21;
    register int t31;
    register int t23;

    FUN_0c0e6fdc(a4);
    (((struct o80_ushort *)(a4))->v) = (*(short *)((0xC33F5EC + ((*(signed char *)((a4 + 0x4))) << 1))));
    (((struct o82_ushort *)(a4))->v) = (*(short *)(((0xC33F5EC + ((*(signed char *)((a4 + 0x4))) << 1)) + 0x6)));
    t10 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((unsigned short)((((struct o56_short *)(a4))->v)) << 2) + ((((unsigned short)((((struct o54_short *)(a4))->v)) << 2) << 2) + ((int)stk + 0)))))))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    (((struct o6C_uint *)(a4))->v) = ((((unsigned short)((((struct o80_short *)(a4))->v)) * (unsigned short)((((struct o64_short *)(a4))->v))) << 2) + (*(int *)(((((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1) + 0xC7D08E0) + 0x0))));
    (((struct o70_uint *)(a4))->v) = ((((unsigned short)((((struct o82_short *)(a4))->v)) * (unsigned short)((((struct o68_short *)(a4))->v))) << 2) + (*(int *)(((0xC7D08E0 + ((((unsigned short)((((struct oA0_short *)(a4))->v)) << 2) << 2) << 1)) + 0x4))));
    t21 = *(signed char *)((a4 + 0x4));
    t31 = t21;
    if (t21 == 2) {
        t23 = (((struct o44_int *)(a4))->v);
        t31 = t23;
        if ((t23 & 2) != 0) {
            t31 = (FUN_0c0d16d2(a4));
        }
    }
    return t31;
}

int kmiReqRestOfDMA(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t15;
    register int t19;
    register int t1;
    int t9;
    register int t30;
    register int t31;
    register int t32;
    register int t13;
    register int t14;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(int *)0xC817314;
    t2 = 0xC817314;
    t3 = t0;
    t4 = (t0 << 2);
    t5 = (0xC817338 + (t0 << 2));
    t6 = (0xC817388 + (t0 << 2));
    t7 = 0x0;
    for (;;) {
        if (((*(int *)((t6 + 0x0))) != 0) && (t9 = *(int *)(((int)stk + 8)), t2 = t9, t2 != t7)) {
            t1 = ((((struct o0_int *)0xC8173EC)->v));
            if ((t1 == 1) && ((t13 = (t1 == 1), t1 = t7, t1 == 1) || (t14 = (t1 == 1), t1 = t7, t1 == 3))) {
                t2 = 0xC8173F0;
                t15 = *(int *)((t2 + 0x0));
                t1 = t2;
                t2 = t7;
                t2 = (t2 << 16);
                t2 = (t2 << 8);
                *(unsigned int *)((t15 + 0x0)) = (((*(int *)(((*(int *)((t1 + 0x0))) + 0x0))) & 0xF0FFFFFF) | t2);
                for (;;) {
                    t2 = ((int)stk + 4);
                    t19 = t2;
                    *(int *)((int)stk + 0) = t19;
                    t2 = 0xC8173F0;
                    t4 = (*(int *)((t2 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((((struct o8_int *)0xC8173EC)->v)), 0x10, t19));
                    if (t1 != 0x100) {
                        break;
                    }
                }
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            } else {
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (FUN_0c10b7b0(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            }
        } else {
            t30 = t2;
            t31 = t3;
            t32 = t4;
        }
        t2 = t30;
        t3 = t31;
        t4 = t32;
        t7 = (t7 + 0x1);
        t6 = (t6 + 0x10);
        t5 = (t5 + 0x10);
        if ((unsigned int)t7 >= (unsigned int)0x5) {
            break;
        }
    }
    return t1;
}

int FUN_0c0194dc(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t13;
    register float u5;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC019488;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = a4;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        (((struct o5C_float *)(t0))->v) = 1.0f;
        if ((signed char)a4 == 0) {
            u5 = ((((struct o0_float *)0xC0195D4)->v));
        } else {
            u5 = ((((struct o4_float *)0xC0195D4)->v));
        }
        (((struct o20_float *)(t0))->v) = u5;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AF0, ((*(signed char *)(((((signed char)a4 << 2) << 2) + 0xC3622F7))) + 0x1B));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t13 = 0xF;
    }
    return t13;
}

int FUN_0c02b724(void)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;
    register int t8;

    t0 = FUN_0c059132(0x5, 0x1, 0x4);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02B164;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t2) + 0x0))) + 0x2)) = 0x1F;
            t8 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t2) + 0x0))), 0xC664A00, (*(int *)((t2 + 0xC1490B4))));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t9 = t8;
    }
    return t9;
}

int FUN_0c0485f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC0486A8;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x42);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x19;
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c0df940();
        
        t0 = FUN_0c0e6f24();
        *(unsigned int *)(((t2 + 0x18) + 0x0)) = (((t0 << 8) << 2) << 2);
        t1 = (((t0 << 8) << 2) << 2);
    }
    return t1;
}

int FUN_0c05986c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3071;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 3) {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            t2 = 0x1;
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) < (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) > (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E180) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E180) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F305C;
        (((struct o1_uchar *)0xC7F305C)->v) = ((t0 << 2) << 1);
        t1 = ((t0 << 2) << 1);
    }
    return t1;
}

int FUN_0c059934(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3071;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 3) {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            t2 = 0x1;
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) > (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) < (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E1C8) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E1C8) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F305C;
        (((struct o1_uchar *)0xC7F305C)->v) = ((t0 << 2) << 1);
        t1 = ((t0 << 2) << 1);
    }
    return t1;
}

float FUN_0c09c974(int a4, int a5, float f4)
{
    register int t0;
    register float u0;

    if ((signed char)a5 == 0) {
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o20_float *)(a4))->v));
        u0 = u0 + f4 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    } else {
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o20_float *)(a4))->v));
        u0 = u0 + f4 * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o20_float *)(t0))->v) = u0;
        t0 = *(int *)((a4 + 0x1C));
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o28_float *)(t0))->v) = u0;
        (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (*(int *)((a4 + 0x30)));
    }
    return f4;
}

int FUN_0c0cbe6c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t8;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(int *)((int)stk + 0) = 0x0;
    t0 = FUN_0c05923a(0x1, a4, 0x1, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CBF1C;
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(volatile int *)((a4 + 0x1C));
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0xF;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        FUN_0c0a1d88(t0, 0x74);
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(((((*(signed char *)(((int)stk + 4))) << 2) << 2) + 0xC33CA40));
        (((struct o44_float *)(t0))->v) = (*(float *)((t8 + 0x0)));
    }
    return t0;
}

int FUN_0c0e393a(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t35;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 20)) = t4;
    t3 = *(int *)0xC7FD490;
    *(unsigned int *)(((int)stk + 4)) = t3;
    t2 = 0xC7FD490;
    t5 = a4;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x4))) == -1) {
            break;
        }
        t4 = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t3 = (*(int *)(((int)stk + 8)));
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t2 = 0xC7F87C8;
        t4 = (*(int *)((t2 + 0x0)));
        t3 = (t3 + t4);
        if ((*(int *)((t3 + 0x0))) == 0) {
            *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
            t35 = t5;
        } else {
            t4 = (*(int *)(((int)stk + 8)));
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((t4 + 0x4)));
            t4 = (*(int *)(((int)stk + 4)));
            t4 = (t4 << 1);
            t3 = 0xC7FD044;
            t4 = (*(short *)((t4 + (*(int *)((t3 + 0x0))))));
            t4 = (short)t4;
            *(unsigned int *)(((int)stk + 0)) = t4;
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = (*(int *)0xC7FD050);
            t4 = (t4 + t2);
            t2 = 0x7E00000;
            t4 = (*(int *)((t4 + 0xC)));
            t4 = (t4 & t2);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t5 = (*(int *)(((int)stk + 0)));
            t5 = (t5 << 2);
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t2 = 0xC7FD050;
            t4 = (*(int *)((t2 + 0x0)));
            t5 = (t5 + t4);
            t4 = 0xFFFFA352;
            FUN_0c0ddd10(t5, (*(int *)(((int)stk + 8))));
            t4 = (*(int *)(((int)stk + 0)));
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = 0xC7FD050;
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            t3 = (*(int *)(((int)stk + 16)));
            *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) | t3);
        }
        t4 = (*(int *)(((int)stk + 20)));
        t5 = t35;
        t4 = (t4 + 0x10);
        *(unsigned int *)(((int)stk + 20)) = t4;
        t3 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
    *(volatile int *)(((int)stk + 12));
    return ((int (*)(int, int, int, int))(0xC0E39EA))(t5, a5, a6, a7);
}

int FUN_0c0e51e8(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t7;
    register int t18;
    register int t19;
    register int t20;
    int t1;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    if (((int)(*(int *)(((int)stk + 20))) >= 0) && (t1 = *(int *)(((int)stk + 20)), (int)t1 < (int)0x8)) {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)(((int)stk + 0)) = 0xC155C2C;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)0x4) {
                t7 = *(int *)(((int)stk + 20));
                if ((*(int *)((0xC7FD1D0 + (signed char)(((t7 << 1) + t7) << 2)))) != -1) {
                    return 0xFFFFFFFD;
                }
                *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x8)));
                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xA0800088);
                if ((int)(((((struct o0_int *)0xC7FD0F0)->v)) + (*(int *)(((int)stk + 12)))) > (int)(*(int *)(((int)stk + 16)))) {
                    return 0xFFFFFFFC;
                }
                if (((((struct o8_int *)0xC7FD0F0)->v)) != 0) {
                    return 0xFFFFFFFB;
                }
                return ((int (*)(int, int, int, int))(0xC0E5298))(a4, a5, a6, a7);
            }
            t18 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
            t19 = *(signed char *)((((t18 + 0x1) - 1) + 0x0));
            t20 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t20 + 0x1);
            if (t19 != (*(signed char *)((((t20 + 0x1) - 1) + 0x0)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0eae20(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t1;
    int t5;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t24;
    register int t25;
    register int t26;

    *(unsigned int *)(((int)stk + 0)) = 0xC7FD480;
    if (a4 == 16) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = ((t1 << 1) + (*(int *)(((int)stk + 0))));
            t5 = 0x1;
            t6 = 0x0;
            t7 = ((t1 << 2) << 2);
            for (;;) {
                if (((*(short *)(((*(int *)(((int)stk + 4))) + 0x0))) & t5) == 0) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 < (int)((int)(a5 + 0xF) >> 4)) {
                        t6 = (t6 + 0x1);
                        t5 = (t5 + t5);
                        t7 = (t7 + 0x1);
                        if ((int)t6 >= (int)0x10) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t0 = 0x0;
                t6 = (t6 + 0x1);
                t5 = (t5 + t5);
                t7 = (t7 + 0x1);
                if ((int)t6 >= (int)0x10) {
                    break;
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t24 = t0;
        t25 = 0x0;
        t26 = t5;
    } else {
        t14 = (*(int *)(((int)stk + 0)));
        t15 = 0x0;
        t16 = 0x0;
        for (;;) {
            if (((*(short *)((t14 + 0x0))) & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) {
                break;
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0x10);
            t14 = (t14 + 0x2);
            if ((int)t16 >= (int)0x4) {
                if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                    return ((int (*)(int, int, int, int))(0xC0EAED0))(0x0, ((int)(a5 + 0xF) >> 4), t14, t15);
                }
                return ((int (*)(int, int, int, int))(0xC0EAED0))(0x0, ((int)(a5 + 0xF) >> 4), t14, t15);
            }
        }
        t24 = ((int)(a5 + 0xF) >> 4);
        t25 = t14;
        t26 = t15;
    }
    if ((int)t24 < (int)((int)(a5 + 0xF) >> 4)) {
        return ((int (*)(int, int, int, int))(0xC0EAED0))(t24, ((int)(a5 + 0xF) >> 4), t25, t26);
    }
    return ((int (*)(int, int, int, int))(0xC0EAED0))(t24, ((int)(a5 + 0xF) >> 4), t25, t26);
}

int FUN_0c101148(int a4, int a5)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    t1 = (*(int *)0xC80578C);
    for (;;) {
        t2 = vmsio_get_media_info(a4, a5);
        if (t2 != 0) {
            if (((*(int *)0xC15B0A8) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34))) + 0x1);
            t3 = t1 == 0;
            t1 = (t1 - 1);
            if (t3 && (t0 = *(int *)0xC80578C, t0 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    t0 = 0x0;
    if (t2 != 0) {
        t1 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t1 = 0xFFFF0000;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c1058e2(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t1;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
    if ((int)t1 >= 0) {
        if ((unsigned char)(*(signed char *)(((int)stk + 10))) != 1) {
            return 0xFFFFFF0B;
        }
        t6 = *(short *)(((int)stk + 8));
        if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
            t8 = check_file_correct(a4, (*(int *)(((int)stk + 0))));
            if ((int)t8 >= 0) {
                if ((unsigned int)0x0 < (unsigned int)a8) {
                    t9 = 0x0;
                    t10 = a6;
                    t11 = a7;
                    for (;;) {
                        t12 = FUN_0c1012f4(a4, t11, t10);
                        if ((int)t12 < 0) {
                            break;
                        }
                        t9 = (t9 + 0x1);
                        t10 = (t10 + 0x200);
                        t11 = (t11 + 0x1);
                        if ((unsigned int)t9 >= (unsigned int)a8) {
                            return t12;
                        }
                    }
                    return t12;
                }
                return 0x0;
            }
            return t8;
        }
        return 0xFFFFFF00;
    }
    return t1;
}

int mpdrv_check_port(int a4)
{
    int stk[1];
    register int t0;
    register int t2;
    register int t3;
    int t8;
    register int t11;
    register int t13;
    int t16;
    register int t17;
    int t25;
    register int t26;

    t0 = *(int *)0xC843924;
    t2 = *(int *)0xC843924;
    t3 = (((struct o10B4_int *)(t2))->v);
    t8 = *(int *)(((*(int *)(((((t2 + 0xFE8) + (((((((-t3) + 0x1) << 1) + ((-t3) + 0x1)) << 2) << 2) << 1)) + ((*(int *)(((a4 << 2) + 0xC15B6AC))) << 2)) + 0x0))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t8;
    if ((t8 != -1) && (t8 != 0xFFFFFF00)) {
        t11 = (((int)stk + 0) + 0x2);
        if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
            t11 = (((int)stk + 0) + 0x1);
        }
        t13 = *(signed char *)((t11 + 0x0));
        *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = t13;
        t16 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t16) & t16);
        t17 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t17) & (~t17));
        return 0x0;
    }
    *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = ((*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) + 0x1);
    if ((unsigned int)(*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) > (unsigned int)((((struct o10DC_int *)((*(int *)0xC843924)))->v))) {
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = 0x0;
        t25 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t25) & t25);
        t26 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t26) & (~t26));
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c012420(int a4)
{
    int stk[2];
    register int t0;
    register int t12;
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o0_uchar *)0xC361BE8)->v) = 0x0;
    (((struct o1_uchar *)0xC361BE8)->v) = 0x1;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01240E;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t5 = *(signed char *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = (((t5 << 2) << 2) + 0xC116240);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664B20, (*(signed char *)(((((t5 << 2) << 2) + 0xC116240) + 0xC))));
        *(volatile int *)((t0 + 0x2E0));
        *(volatile int *)(((int)stk + 4));
        t12 = (FUN_0c0e6fe8());
    }
    return t12;
}

int FUN_0c0906e6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((((signed char)t0 << 2) << 2) + 0xC150800) + 0x0))) > (int)((((struct oEC_short *)(a4))->v))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = (((struct oEC_short *)(a4))->v);
    t2 = *(signed char *)((a4 + 0x71F1));
    t3 = *(short *)((((((signed char)t0 << 2) << 2) + 0xC150800) + 0x0));
    u0 = (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    u1 = (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    (((struct o6C_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v) = (u1 + ((((((struct o4_float *)(((((signed char)t0 << 2) << 2) + 0xC150800)))->v)) - u0) / (float)(t3 - t1)));
    t2 = *(signed char *)((a4 + 0x71F1));
    u0 = (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    u1 = (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v);
    (((struct o70_float *)(((short)((short)t2 * (short)0xDC0) + (0x300 + a4))))->v) = (u1 + ((((((struct o8_float *)(((((signed char)t0 << 2) << 2) + 0xC150800)))->v)) - u0) / (float)(t3 - t1)));
    return ((int (*)(int, int, int, int, float))(0xC090794))(a4, ((short)((short)t2 * (short)0xDC0) + (0x300 + a4)), ((((signed char)t0 << 2) << 2) + 0xC150800), 0xC150800, (float)(t3 - t1));
}

int FUN_0c08e3f2(int a4, int a5)
{
    register int t6;

    if ((unsigned char)(a5 & 0xE0) != 32) {
        if ((unsigned char)(a5 & 0xE0) != 64) {
            if ((unsigned char)(a5 & 0xE0) != 96) {
                t6 = (unsigned char)(a5 & 0xE0);
                if ((unsigned char)(a5 & 0xE0) != 0x80) {
                } else {
                    (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
                    (((struct o7228_ushort *)(a4))->v) = 0xB4;
                    (((struct o7240_uchar *)(a4))->v) = 0x3C;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    t6 = 0xEE;
                }
                return t6;
            }
            if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
                FUN_0c0485f8(a4);
            }
            (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
            (((struct o7228_ushort *)(a4))->v) = 0xB4;
            return FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x27);
        }
        if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
            FUN_0c043bdc(a4);
        }
        (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
        (((struct o7228_ushort *)(a4))->v) = 0xB4;
        return FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x28);
    }
    if ((*(signed char *)((a4 + 0x7226))) != (unsigned char)(a5 & 0xE0)) {
        FUN_0c0485f8(a4);
    }
    (((struct o7226_uchar *)(a4))->v) = (a5 & 0xE0);
    (((struct o7228_ushort *)(a4))->v) = 0x12C;
    (((struct o7240_uchar *)(a4))->v) = 0x14;
    return 0x7240;
}

int FUN_0c0abe44(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    *(unsigned char *)((a4 + 0x8)) = 0x0;
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct o30D_uchar *)(a4))->v) = a5;
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t7 = *(signed char *)((a4 + 0x4));
        t8 = t7;
        if (t7 != 16) {
            t7 = a4;
            t9 = a6;
            if (((*(signed char *)((a4 + 0x2))) == 2) && ((t0 = *(signed char *)((a4 + 0x4)), t0 == 1) || (t0 == 2))) {
                *(volatile int *)((a4 + 0x2E0));
                t10 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(a4, t0, a6, 0x0);
                *(volatile int *)((t1 + 0x2E0));
                t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
                (((struct o5C_float *)(t7))->v) = 1.0f;
                if (((*(signed char *)((t7 + 0x2))) == 2) && ((t2 = *(signed char *)((t7 + 0x4)), t2 == 1) || (t2 == 2))) {
                    *(unsigned char *)((t7 + 0x3)) = t0;
                }
                t9 = t0;
            } else {
                t0 = 0x0;
            }
            if (((*(signed char *)((t7 + 0x2))) == 3) && (t5 = *(signed char *)((t7 + 0x4)), t5 == 6)) {
                *(unsigned char *)((t7 + 0x3)) = t9;
            }
            if ((signed char)t9 == 2) {
                *(unsigned int *)((t7 + 0x1C)) = t0;
            } else {
                *(unsigned int *)((t7 + 0x1C)) = ((unsigned short)((unsigned short)(signed char)t9 * (unsigned short)0x72D0) + 0xC7E40C4);
            }
            t8 = (signed char)t9;
        }
        t0 = t8;
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 3) && (t6 = *(signed char *)((a4 + 0x4)), t6 == 6)) {
            *(unsigned char *)((a4 + 0x3)) = a6;
        }
        if ((signed char)a6 == 2) {
            *(unsigned int *)((a4 + 0x1C)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x1C)) = ((unsigned short)((unsigned short)(signed char)a6 * (unsigned short)0x72D0) + 0xC7E40C4);
        }
        t0 = (signed char)a6;
    }
    return t0;
}

int FUN_0c0208ec(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)((a5 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x2));
            if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
                return t0;
            }
            FUN_0c08dbc8(a4, a5);
            return FUN_0c08dc24(a4, a5);
        }
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
            return t0;
        }
        return FUN_0c08dbc8(a4, a5);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
        return t0;
    }
    return FUN_0c08d6ec(a4, a5);
}

int FUN_0c0200e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c01ee40(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t0 = ((int (*)(int, int, int, int))(FUN_0c01fdc8))(a4, a5, a6, a7);
        FUN_0c01f4c8(0x4);
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        FUN_0c01f874(0x0);
    }
    t0 = FUN_0c01f9a6();
    if ((signed char)t0 == 0) {
        FUN_0c01fe52(a4);
        t1 = FUN_0c01fe34(0x2);
        if ((signed char)t1 != 0) {
            t1 = ((int (*)(void))(FUN_0c01fdc8))();
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)0xC362A80);
            return FUN_0c0a3796(0x0, 0x4E);
        }
        t1 = FUN_0c01fe34(0x4);
        if ((signed char)t1 != 0) {
            t2 = 0x4E;
            if ((((int)0x1 << (int)(((*(signed char *)((a4 + 0x2C))) << 1) + (*(signed char *)((a4 + 0x2D))))) & (*(int *)((a4 + 0xC)))) != 0) {
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                (((struct o31_uchar *)(a4))->v) = 0x0;
                FUN_0c01f48c((*(signed char *)((a4 + 0x2C))), (*(signed char *)((a4 + 0x2D))));
                t2 = 0x4D;
            }
            return FUN_0c0a3796(0x0, t2);
        }
        return (signed char)t1;
    }
    return (signed char)t0;
}

int FUN_0c01ed94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    return t0;
                                }
                                return FUN_0c01f28e(a4, a5, a6, a7);
                            }
                            return FUN_0c01f248(a4, a5, a6, a7);
                        }
                        return FUN_0c01f1f6(a4, a5, a6, a7);
                    }
                    t0 = FUN_0c01fa70();
                    if ((int)(signed char)t0 >= 0) {
                        return FUN_0c01f19e(a4);
                    }
                    return (signed char)t0;
                }
                (((struct o2F_uchar *)0xC362A52)->v) = 0x6;
                (((struct o2_uchar *)0xC362A52)->v) = 0x0;
                return FUN_0c01f1f6(a4, a5, a6, a7);
            }
            t0 = FUN_0c01fa70();
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f0a8(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fa70();
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o0_uchar *)0xC362A52)->v) = 0x2;
            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fa70());
}

int FUN_0c01db74(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((unsigned char)(*(signed char *)((a4 + 0x0))) == 0) {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o1C_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 9.99999997e-07f;
        (((struct o18_float *)(a4))->v) = 1.0f;
        (((struct o14_float *)(a4))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x2C)) = 0xC180698;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return ((int (*)(int, int, int, int, float, float))(0xC01DC42))(a4, 0x0, a6, a7, 1.0f, 0.0f);
            }
            return ((int (*)(int, int, int, int, float, float))(0xC01DC26))(a4, 0x0, a6, a7, 1.0f, 0.0f);
        }
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        (((struct o10_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    }
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = (t0 + 0x1);
    if ((int)t0 >= (int)0x4650) {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        return ((int (*)(int, int, int, int, float, float))(0xC01DC1E))(a4, 0x0, a6, a7, 1.0f, 0.0f);
    }
    return ((int (*)(int, int, int, int, float, float))(0xC01DC42))(a4, 0x0, a6, a7, 1.0f, 0.0f);
}
