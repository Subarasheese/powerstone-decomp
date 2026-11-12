/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10A_uchar { char p[0x10A]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7209_uchar { char p[0x7209]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7212_uchar { char p[0x7212]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7242_uchar { char p[0x7242]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c01eb32(int, int, int, int);
int FUN_0c01fdc8(void);
int FUN_0c01fe34(int);
int FUN_0c020258(void);
int FUN_0c026554(int);
int FUN_0c028030(int);
int FUN_0c028174(int);
int FUN_0c04015c(int);
int FUN_0c042eac(int, float, float, float, float);
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c062050(int, int, int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c062436(int, int, int);
int FUN_0c08d6aa(int, int);
int FUN_0c08dfa4(void);
int FUN_0c099b60(int);
int FUN_0c09a7ba(int);
int FUN_0c0a167c(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3d16(int);
int FUN_0c0a3ebc(int, int, int);
int FUN_0c0b6368(int, int, int, float);
int FUN_0c0c339a(int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d6744(int);
int FUN_0c0d7566(int, int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e21b0(int, int);
int FUN_0c0e3c54(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fdc(int, int);
int FUN_0c0e6fe8(void);
int FUN_0c103874(int, int);
int FUN_0c104742(int);
int buIsFormat(int, int, int);
int check_isopen(void);
int memcpy(int, int, int);
int memset(int, int, int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int vmsfb_create(int, int, int);
int vmsfb_init(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int, int, int);
int FUN_0c08dacc(int a4, int a5);
int FUN_0c0c2432(int a4);
int FUN_0c0282cc(void);
int FUN_0c0b29dc(int a4, int a5);
int FUN_0c0b698e(int a4);
int FUN_0c0c3408(int a4, int a5);
int FUN_0c0c9526(int a4, int a5, int a6, int a7);
int FUN_0c0e6102(int a4, int a5, int a6, int a7);
int FUN_0c03cb28(int a4, int a5);
int FUN_0c0a2712(int a4, int a5);
int FUN_0c0d5552(int a4, int a5, int a6, int a7);
int FUN_0c0d78fa(void);
int FUN_0c1013d8(int a4);
int vmsfs_fdelete_ex(int a4, int a5, int a6);
int FUN_0c01e860(int a4, int a5, int a6, int a7);
int FUN_0c03fd08(int a4);
int FUN_0c0c2e5c(int a4);
int FUN_0c0d6774(int a4);
int FUN_0c0c48cc(int a4, float f4);
float FUN_0c0c8460(int a4);
int FUN_0c040938(int a4, int a5, int a6, int a7);

int FUN_0c08dacc(int a4, int a5)
{
    (((struct oF8_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)(((0xC338A98 + ((*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)((-(*(signed char *)((a4 + 0x3)))) + 0x1) * (unsigned short)0x72D0)))) << 2)) + 0x0))));
    (((struct o71BD_uchar *)(a4))->v) = a5;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct o10A_uchar *)(a4))->v) = 0x1;
    (((struct o7294_uint *)(a4))->v) = (*(int *)((a4 + 0x1C)));
    (((struct o10B_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x2)));
    (((struct o71DE_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71DD)));
    (((struct o71DD_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x0)));
    (((struct o7211_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xD)));
    (((struct o7212_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xE)));
    (((struct o7213_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xC)));
    (((struct o72A8_uint *)(a4))->v) = (*(int *)((a4 + 0x30)));
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x1))) != 0) {
        FUN_0c08d6aa(a4, a5);
    }
    if ((unsigned char)(*(signed char *)((0x12 + ((((struct oF8_int *)(a4))->v))))) != 99) {
        FUN_0c0a3762((*(signed char *)((a4 + 0x3))), (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x12))));
    }
    FUN_0c08dfa4();
    *(unsigned char *)((a4 + 0x9)) = 0x1;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)((a4 + 0xD)) = 0x0;
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
    (((struct o71BA_uchar *)(a4))->v) = 0x1B;
    (((struct o100_uchar *)(a4))->v) = 0x0;
    return 0x100;
}

int FUN_0c0c2432(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C252E;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        u0 = *(float *)0xC0C2570;
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x0);
        t1 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t1))->v) = 1.0f;
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        return FUN_0c0a1d88(t0, 0x72);
    }
    return t0;
}

int FUN_0c0282cc(void)
{
    int stk[14];
    register int t13;
    register int t14;
    register int t15;
    register int t19;
    register float u16;
    register float u17;
    register int t22;

    if ((*(signed char *)0xC7F300B) == 0) {
        if (((*(signed char *)0xC7F300E) == 0) && (t14 = *(signed char *)0xC494D20, t14 == 0)) {
        } else {
            t14 = (((struct o4_int *)0xC363A68)->v);
            (((struct o0_uint *)0xC363A68)->v) = t14;
        }
        t13 = 0x12E;
    } else {
        t14 = (((struct o4_int *)0xC363A68)->v);
        (((struct o0_uint *)0xC363A68)->v) = t14;
        t13 = 0x12B;
    }
    (((struct o4_uint *)0xC363A68)->v) = ((((struct o0_int *)0xC363A68)->v));
    t15 = 0xC363A6C;
    for (;;) {
        if (((((struct o0_int *)0xC363A68)->v)) == 0) {
            break;
        }
        t19 = (((struct o0_int *)0xC363A68)->v);
        t14 = 0xC0E6FDC;
        (((struct o0_uint *)0xC363A68)->v) = (t19 - 1);
        t15 = (*(int *)(((((((t19 - 1) << 2) << 2) << 2) + 0xC363A70) + 0x4)));
        t13 = 0x38;
        t13 = (FUN_0c0e6fdc(t15, (((((t19 - 1) << 2) << 2) << 2) + 0xC363A70)));
        t13 = 0x4;
        t15 = t22;
        *(unsigned int *)(((int)stk + 0)) = (*(short *)((t22 + 0x0)));
        u17 = (*(float *)((t15 + t13)));
        t13 = 0x10;
        u16 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x10;
        u16 = (u16 * u17);
        *(float *)((((int)stk + 0) + t13)) = u16;
        t13 = 0x8;
        u17 = (*(float *)((t15 + t13)));
        t13 = 0x14;
        u16 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x14;
        u16 = (u16 * u17);
        *(float *)((((int)stk + 0) + t13)) = u16;
        t14 = ((((struct o0_int *)0xC363A68)->v));
        t14 = (t14 << 2);
        t14 = (t14 << 2);
        t14 = (t14 << 2);
        t14 = (t14 + 0xC363A70);
        t13 = (*(signed char *)((t14 + 0x1)));
        if (t13 == 0) {
            t13 = 0xC;
            u17 = (*(float *)((t15 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u17;
            t13 = 0x14;
        } else {
            t13 = 0x14;
            u17 = (*(float *)((t15 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u17;
            t13 = 0xC;
        }
        u17 = (*(float *)((t15 + t13)));
        t13 = 0x20;
        *(float *)((((int)stk + 0) + t13)) = u17;
        t13 = 0x10;
        u17 = (*(float *)((t15 + t13)));
        t13 = 0x1C;
        *(float *)((((int)stk + 0) + t13)) = u17;
        t13 = 0x18;
        u17 = (*(float *)((t15 + t13)));
        t13 = 0x24;
        *(float *)((((int)stk + 0) + t13)) = u17;
        t13 = ((((struct o0_int *)0xC363A68)->v));
        t13 = (t13 << 2);
        t13 = (t13 << 2);
        t13 = (t13 << 2);
        t13 = (*(signed char *)((0xC363A70 + t13)));
        switch (t13) {
        case 0:
            *(unsigned int *)(((int)stk + 48)) = 0x2;
            t15 = ((int)stk + 0);
            t13 = (FUN_0c0e3c54(t15));
            break;
        case 1:
            t15 = ((int)stk + 0);
            t13 = (FUN_0c028030(t15));
            break;
        case 2:
            t15 = ((int)stk + 0);
            t13 = (FUN_0c028174(t15));
            break;
        }
    }
    return t13;
}

int FUN_0c0b29dc(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t25;
    register int t4;
    register int t14;
    register int t15;
    register int t16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B2AD4;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x30E)));
        t4 = *(signed char *)((t0 + 0x30E));
        if (t4 != 0) {
            if (t4 != 1) {
            } else {
                (((struct o101_uchar *)(t0))->v) = 0x25;
                (((struct o102_uchar *)(t0))->v) = 0x8E;
            }
        } else {
            (((struct o101_uchar *)(t0))->v) = 0x13;
            (((struct o102_uchar *)(t0))->v) = 0x3E;
        }
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        t14 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, 0xF);
        t15 = ((int (*)(void))(FUN_0c0e6fe8))();
        t16 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B2B18);
        (((struct oEC_ushort *)(t0))->v) = 0x50;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t25 = 0x40;
    }
    return t25;
}

int FUN_0c0b698e(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return FUN_0c059330(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4);
        }
        t0 = FUN_0c026554(a4);
        if ((signed char)t0 != 0) {
            FUN_0c0b6368((a4 + 0x20), 0x2, 0x3A, 0.299999982f);
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c042eac((a4 + 0x20), 1.0f, 1.0f, 1.0f, 3.0f);
    return FUN_0c0a3ebc((*(signed char *)0xC7F3051), 0x2, 0x2);
}

int FUN_0c0c3408(int a4, int a5)
{
    register int t0;
    register float u0;

    *(unsigned char *)((a4 + 0x4)) = a5;
    u0 = *(float *)0xC0C3538;
    if (a5 != 0) {
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x30);
        *(unsigned short *)((((((struct o2E4_int *)(a4))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x33);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        return 0x2E4;
    }
    t0 = *(signed char *)((a4 + 0x3));
    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x2E);
    *(unsigned short *)((((((struct o2E4_int *)(a4))->v)) + 0x2)) = 0x3F;
    t0 = *(signed char *)((a4 + 0x3));
    FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x2F);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = u0;
    (((struct o20_float *)(t0))->v) = u0;
    (((struct o1C_float *)(t0))->v) = u0;
    return FUN_0c0c339a(a4);
}

int FUN_0c0c9526(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t8;
    register float u18;
    register float u26;
    register float u40;

    t0 = (((struct o2EC_int *)(a4))->v);
    if ((*(signed char *)(((0x308 + a4) + 0x5))) != 0) {
        *(unsigned char *)(((0x308 + a4) + 0x5)) = ((*(signed char *)(((0x308 + a4) + 0x5))) - 1);
    }
    if ((*(signed char *)(((0x308 + a4) + 0x5))) != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        (((struct oC_float *)(t0))->v) = (((((struct o308_float *)(a4))->v)) / ((((struct o58_float *)(a4))->v)));
        t8 = *(signed char *)(((0x308 + a4) + 0x4));
        switch (t8) {
        case 0:
            *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
            (((struct o1C_float *)(t0))->v) = 0.125f;
            break;
        case 1:
            u26 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u26 + 0.25f);
            if (!(1.0f > (u26 + 0.25f))) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            break;
        case 2:
            u18 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u18 - 0.125f);
            if (!((u18 - 0.125f) > 0.25f)) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) + 0x1);
            }
            break;
        case 3:
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.125f);
            if (!(0.5f > ((((struct o1C_float *)(t0))->v)))) {
                *(unsigned char *)(((0x308 + a4) + 0x4)) = ((*(signed char *)(((0x308 + a4) + 0x4))) - 1);
            }
            break;
        }
        u40 = (((struct o1C_float *)(t0))->v);
        (((struct o24_float *)(t0))->v) = u40;
        (((struct o20_float *)(t0))->v) = u40;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) / ((((struct o58_float *)(a4))->v)));
        FUN_0c06206e(((int)stk + 0), 0xC7F2AB4, (t0 + 0x4));
        FUN_0c0620a4(((int)stk + 0));
        return 0xC0C9648;
    }
    return ((int (*)(int, int, int, int))(0xC0C9622))(a4, (0x308 + a4), a6, a7);
}

int FUN_0c0e6102(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t9;
    register int t12;
    register int t15;
    register int t21;
    register int t22;
    register int t25;
    register int t28;

    *(unsigned short *)(((((int)stk + 0) + 0x12) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(short *)(((int)stk + 18));
    t3 = *(short *)((0xC7FD110 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t5 = *(short *)(((int)stk + 18));
    *(unsigned int *)(((int)stk + 0)) = (((((((t5 << 1) + t5) << 2) << 2) << 1) + 0xA0800100) + 0x20);
    *(unsigned short *)(((int)stk + 10)) = 0x0;
    t8 = 0xC7FD110;
    t9 = 0xA0800100;
    for (;;) {
        if ((unsigned int)(*(short *)(((int)stk + 10))) >= (unsigned int)0x10) {
            break;
        }
        t9 = (*(int *)(((int)stk + 0)));
        t9 = (t9 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t9;
        t9 = (t9 - 4);
        t12 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t12 + 0x4);
        t8 = (*(int *)((((t12 + 0x4) - 4) + 0x0)));
        *(unsigned int *)((t9 + 0x0)) = t8;
        *(unsigned short *)(((int)stk + 10)) = ((*(short *)(((int)stk + 10))) + 0x1);
    }
    t15 = *(short *)(((int)stk + 18));
    *(unsigned int *)(((unsigned char)((((t15 << 1) + t15) << 2) << 1) + 0xC7FD11C)) = (unsigned short)((((struct o2A_short *)((*(int *)(((int)stk + 12)))))->v));
    t21 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x8));
    *(unsigned short *)(((int)stk + 8)) = (unsigned char)t21;
    if ((short)(unsigned char)t21 != 0) {
        if ((short)(unsigned char)t21 != 1) {
            if (((short)(unsigned char)t21 != 2) && ((short)(unsigned char)t21 != 3)) {
                return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
            }
            t22 = *(short *)(((int)stk + 18));
            *(unsigned short *)(((unsigned char)((((t22 << 1) + t22) << 2) << 1) + 0xC7FD112)) = 0x4;
            return ((int (*)(int, int, int, int))(0xC0E61FA))(a4, a5, a6, a7);
        }
        t25 = *(short *)(((int)stk + 18));
        *(unsigned short *)(((unsigned char)((((t25 << 1) + t25) << 2) << 1) + 0xC7FD112)) = 0x8;
        return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
    }
    t28 = *(short *)(((int)stk + 18));
    *(unsigned short *)(((unsigned char)((((t28 << 1) + t28) << 2) << 1) + 0xC7FD112)) = 0x10;
    return ((int (*)(int, int, int, int))(0xC0E61FE))(a4, a5, a6, a7);
}

int FUN_0c03cb28(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t5 = FUN_0c059132(0x5, 0x1, 0x1);
    t6 = t5;
    if (t5 != 0) {
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned char *)((t5 + 0x1)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0x1F;
        *(unsigned char *)((t5 + 0x5)) = 0x20;
        *(unsigned int *)((t5 + 0x10)) = 0xC03CCF2;
        t7 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t5, 0x1, 0x1F);
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x4)) = a5;
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        if ((a5 != 0) && (a5 != 1)) {
            (((struct o58_float *)(t1))->v) = 0.099999994f;
            (((struct o54_float *)(t1))->v) = 0.099999994f;
            (((struct o50_float *)(t1))->v) = 0.099999994f;
            t0 = t1;
        } else {
            (((struct o58_float *)(t0))->v) = 0.149999991f;
            (((struct o54_float *)(t0))->v) = 0.149999991f;
            (((struct o50_float *)(t0))->v) = 0.149999991f;
        }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t1 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t1 + 0x0)) = t3;
        *(unsigned short *)((t1 + 0x2)) = t4;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c062436(t1, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x0);
        memcpy((((0xA4 + t1) + 0x4) & 0xFFFFFFF8), ((((struct o9C_int *)(t1))->v)), 0x698);
        (((struct o9C_uint *)(t1))->v) = (((0xA4 + t1) + 0x4) & 0xFFFFFFF8);
        (((struct o24_float *)(t1))->v) = 1.0f;
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        t6 = 0x1C;
    }
    return t6;
}

int FUN_0c0a2712(int a4, int a5)
{
    int t0;

    *(unsigned char *)((a4 + 0x9)) = 0x2;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    (((struct o7243_uchar *)(a4))->v) = 0xA;
    (((struct o721E_uchar *)(a4))->v) = 0x0;
    if (((*(signed char *)((a4 + 0x720A))) == 0) && (t0 = *(signed char *)((a4 + 0x71BA)), t0 != 37)) {
        (((struct o7248_uint *)(a4))->v) = (*(int *)((a4 + 0x30)));
    }
    (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
    (((struct o71BA_uchar *)(a4))->v) = 0x1C;
    (((struct o7242_uchar *)(a4))->v) = 0x0;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    (((struct o7209_uchar *)(a4))->v) = a5;
    FUN_0c09a7ba(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x9)) = 0x3;
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((t0 + 0xD)) = 0x0;
    *(unsigned char *)((t0 + 0xC)) = 0x0;
    *(unsigned char *)((t0 + 0xB)) = 0x0;
    *(unsigned char *)((t0 + 0xA)) = 0x0;
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71BB_uchar *)(t0))->v) = (*(signed char *)((t0 + 0x71BA)));
    (((struct o71BA_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1D;
    (((struct o7216_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    FUN_0c09a7ba((*(int *)((a4 + 0x1C))));
    (((struct o720B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o7228_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o7236_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
    FUN_0c099b60((*(int *)((a4 + 0x1C))));
    if ((*(signed char *)((a4 + 0x720A))) != 2) {
        FUN_0c0a3d16((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))));
    }
    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        if ((*(signed char *)((a4 + 0x7230))) == 0) {
            return FUN_0c0a167c(a4);
        }
        return 0x7230;
    }
    return 0x71F1;
}

int FUN_0c0d5552(int a4, int a5, int a6, int a7)
{
    int t0;
    register float u0;

    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x604) == 0) && (t0 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t0 & 0x604) == 0)) {
    } else {
        (((struct oC_ushort *)0xC7F2EE4)->v) = 0x1;
    }
    (((struct oC_ushort *)0xC7F2EE4)->v) = (((((struct oC_short *)0xC7F2EE4)->v)) - 1);
    if (((((struct oC_short *)0xC7F2EE4)->v)) == 0) {
        (((struct o0_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE4) + 0x1);
        (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
        t0 = 0x0;
    } else {
        sprintf(0xC7F36B8, 0xC361BF0, 0x604, a7, 0xC154878);
        *(volatile float *)0xC0D56D8;
        FUN_0c0ccefc(0xC7F36B8, ((((struct o4_float *)0xC0D56DC)->v)), ((((struct o0_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154884);
        u0 = (((struct o10_float *)0xC0D56DC)->v);
        FUN_0c0ccefc(0xC7F36B8, u0, ((((struct o14_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154884);
        FUN_0c0ccefc(0xC7F36B8, u0, ((((struct o1C_float *)0xC0D56DC)->v)));
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1548A0);
        t0 = (FUN_0c0ccefc(0xC7F36B8, ((((struct o1C_float *)0xC0D56DC)->v)), u0));
    }
    return t0;
}

int FUN_0c0d78fa(void)
{
    int stk[1];
    register int t7;
    register int t5;
    register int t6;
    int t10;
    int t16;
    int t23;
    int t28;

    if ((*(signed char *)0xC7F473B) == 0) {
        if (((*(signed char *)0xC7F4738) == 1) && ((t5 = (((struct o0_int *)0xC361BF0)->v), t5 == 0) || (t6 = (((struct o14_int *)0xC361BF0)->v), t6 == 0))) {
            t7 = *(signed char *)0xC7F472D;
            (((struct o3_uchar *)0xC7F4738)->v) = t7;
            if (t7 == 1) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
                return 0x14;
            }
            (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            return 0x14;
        }
        *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC7F4738);
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 0x10) == 0) && (t10 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t10 & 0x10) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) - 1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x1;
            if ((int)(*(signed char *)0xC7F4738) < 0) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x5;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t16 = *(signed char *)0xC7F4739, t16 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x2;
            }
        }
        if ((((unsigned short)((((struct oC_short *)0xC361BF0)->v)) & 32) == 0) && (t23 = (((struct o20_short *)0xC361BF0)->v), ((unsigned short)t23 & 32) == 0)) {
        } else {
            (((struct o0_uchar *)0xC7F4738)->v) = ((*(signed char *)0xC7F4738) + 0x1);
            (((struct o3_uchar *)0xC7F4738)->v) = 0x2;
            if ((int)(*(signed char *)0xC7F4738) > (int)0x5) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x0;
            }
            if (((*(signed char *)0xC7F4738) == 3) && (t28 = *(signed char *)0xC7F4739, t28 == 0)) {
                (((struct o0_uchar *)0xC7F4738)->v) = 0x4;
            }
        }
        if ((*(signed char *)(((int)stk + 0))) == (*(signed char *)0xC7F4738)) {
            (((struct o3_uchar *)0xC7F4738)->v) = 0x0;
            return 0x17;
        }
        return ((int (*)(int, int, int, int))(0xC0D79F4))(0xC7F4724, 0xC361BF0, 0x0, 0xC361BF0);
    }
    return 0x17;
}

int FUN_0c1013d8(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC805790)->v) = 0x0;
    (((struct o4_uint *)0xC805790)->v) = 0x0;
    (((struct o8_uint *)0xC805790)->v) = 0x0;
    (((struct oC_uint *)0xC805790)->v) = 0x0;
    (((struct o10_uint *)0xC805790)->v) = 0x0;
    (((struct o14_uint *)0xC805790)->v) = 0x0;
    (((struct o18_uint *)0xC805790)->v) = 0x0;
    (((struct o1C_uint *)0xC805790)->v) = 0x0;
    memset(0xC8057B0, 0x0, 0x400);
    memset(0xC805BB0, 0x30, 0x1000);
    memset(0xC806BB0, 0x31, 0x1000);
    memset(0xC807BB0, 0x32, 0x1000);
    memset(0xC808BB0, 0x33, 0x1000);
    memset(0xC809BB0, 0x34, 0x1000);
    memset(0xC80ABB0, 0x35, 0x1000);
    memset(0xC80BBB0, 0x36, 0x1000);
    memset(0xC80CBB0, 0x37, 0x1000);
    t0 = vmsfb_init();
    t1 = 0xFFFFFFFF;
    if (t0 == 0) {
    } else {
        t1 = t0;
        if ((0x1 & a4) != 0) {
            t1 = (vmsfb_create(0xC10151A, 0xC805BB0, 0x1000));
        }
        t0 = t1;
        if ((0x2 & a4) != 0) {
            t0 = (vmsfb_create(0xC10151E, 0xC806BB0, 0x1000));
        }
        t1 = t0;
        if ((0x4 & a4) != 0) {
            t1 = (vmsfb_create(0xC101522, 0xC807BB0, 0x1000));
        }
        t0 = t1;
        if ((0x8 & a4) != 0) {
            t0 = (vmsfb_create(0xC101526, 0xC808BB0, 0x1000));
        }
        t1 = t0;
        if ((0x10 & a4) != 0) {
            t1 = (vmsfb_create(0xC10152A, 0xC809BB0, 0x1000));
        }
    }
    return t1;
}

int vmsfs_fdelete_ex(int a4, int a5, int a6)
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
    v0_5 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 * 0x148);
    *(unsigned int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC347244)));
    v0_3 = (0x1);
    v0_4 = (v0_1);
    v0_2 = (v0_5);
    if (((*(signed char *)((((v0_5 * 0x148) + 0xC80DBC8) + 0x2))) == 0)) goto L_C103A76;
    v0_5 = (vmsio_isready(v0_2)) != 0;
    if (v0_5) goto L_C103A60;
    vmsfs_unmount(v0_2);
    L_C103A76:;
    v0_0 = (0xFFFFFF01);
    L_C103B16:;
    return v0_0;
    L_C103A60:;
    v0_5 = (vmsio_ismount(v0_2)) == 0;
    if (v0_5) goto L_C103A76;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC80DBC8) + 0x8))) != 0)) goto L_C103A7C;
    goto L_C103A76;
    L_C103A7C:;
    v0_5 = (int)(buIsFormat(v0_2, v0_0, v0_1)) >= 0;
    if (v0_5) goto L_C103A8C;
    v0_0 = (0xFFFFFF03);
    goto L_C103B16;
    L_C103A8C:;
    v0_5 = (0x0);
    v0_6 = ((*(int *)(((int)stk + 0))));
    v0_7 = (0x0);
    if (((int)v0_4 <= 0)) goto L_C103AAA;
    L_C103A96:;
    *(volatile int *)((v0_6 + 0x0));
    v0_8 = (int)(check_isopen()) < 0;
    if (v0_8) goto L_C103AE6;
    v0_8 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    v0_6 = ((v0_6 + 0x4));
    if (v0_8) goto L_C103A96;
    L_C103AAA:;
    v0_5 = (v0_7);
    v0_6 = ((*(int *)(((int)stk + 0))));
    v0_7 = (v0_7);
    if (((int)v0_4 <= 0)) goto L_C103AC8;
    L_C103AB4:;
    v0_8 = (int)(FUN_0c103874(v0_2, (*(int *)((v0_6 + 0x0))))) >= 0;
    v0_5 = ((v0_5 + 0x1));
    if (v0_8) goto L_C103AC2;
    v0_7 = (v0_3);
    L_C103AC2:;
    v0_6 = ((v0_6 + 0x4));
    if (((int)v0_5 < (int)v0_4)) goto L_C103AB4;
    L_C103AC8:;
    v0_3 = FUN_0c104742(v0_2);
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C103ADE;
    v0_0 = write_fat(v0_2, v0_0, v0_1);
    v0_5 = (v0_0);
    if (!(((int)v0_0 >= 0))) goto L_C103ADE;
    if ((v0_7 == 0)) goto L_C103B14;
    goto L_C103AE6;
    L_C103ADE:;
    v0_0 = (v0_5);
    goto L_C103B16;
    L_C103AE6:;
    v0_0 = (0xFFFFFF0A);
    goto L_C103B16;
    L_C103B14:;
    v0_0 = (0x0);
    goto L_C103B16;
}

int FUN_0c01e860(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC362A50;
    switch (t0) {
    case 0:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct o1_uchar *)0xC362A50)->v) = 0x1;
        (((struct oA_ushort *)0xC362A50)->v) = 0x0;
        (((struct o2F_uchar *)0xC362A50)->v) = 0x1;
        (((struct o30_uchar *)0xC362A50)->v) = 0x1;
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        FUN_0c01fdc8();
        break;
    case 1:
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        FUN_0c01fdc8();
        break;
    case 2:
        break;
    default:
        if (t0 != 3) {
            return FUN_0c0d7566(a4, a5, a6, a7);
        }
        t0 = *(signed char *)0xC362A51;
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c0d7566(0xC362A50, a5, a6, a7);
        }
        return FUN_0c01eb32(0xC362A50, a5, a6, a7);
    }
    t0 = FUN_0c01fe34(0x40);
    if ((signed char)t0 != 0) {
        (((struct o1_uchar *)0xC362A50)->v) = 0x0;
        FUN_0c0a3796(0x0, 0x4C);
    } else {
        t0 = FUN_0c01fe34(0x80);
        if ((signed char)t0 != 0) {
            (((struct o1_uchar *)0xC362A50)->v) = 0x1;
            FUN_0c0a3796(0x0, 0x4C);
        }
    }
    FUN_0c020258();
    t0 = FUN_0c01fe34(0x4);
    if ((signed char)t0 != 0) {
        (((struct o0_uchar *)0xC362A50)->v) = ((*(signed char *)0xC362A50) + 0x1);
        (((struct o3_uchar *)0xC362A50)->v) = 0x0;
        (((struct o2_uchar *)0xC362A50)->v) = 0x0;
        return FUN_0c0a3796(0x0, 0x4D);
    }
    t0 = FUN_0c01fe34(0x8);
    if ((signed char)t0 != 0) {
        (((struct o0_uchar *)0xC362A50)->v) = 0x63;
        return FUN_0c0a3796(0x0, 0x4D);
    }
    return (signed char)t0;
}

int FUN_0c03fd08(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC03FEC2;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o28_float *)(t1))->v) = 50.0f;
        (((struct o24_float *)(t1))->v) = -30.0f;
        (((struct oEE_ushort *)(t1))->v) = 0x50;
        (((struct oF2_ushort *)(t1))->v) = 0x0;
        (((struct o118_uint *)(t1))->v) = (0x47C0 + a4);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t1))->v);
        *(unsigned char *)((t2 + 0x0)) = t0;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x11);
        *(unsigned short *)((t2 + 0x2)) = 0x230;
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o24_float *)(t2))->v) = 1.0f;
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        FUN_0c04015c(t1);
        FUN_0c04015c(t1);
        return FUN_0c04015c(t1);
    }
    return t1;
}

int FUN_0c0c2e5c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c059132(0x1, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C2F50;
        u0 = *(float *)0xC0C2FB4;
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        FUN_0c0e6fe8();
        t2 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x9);
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x3;
        (((struct o102_uchar *)(t0))->v) = 0x3;
        FUN_0c0a1d88(t0, 0x77);
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t1 = 0x107;
    }
    return t1;
}

int FUN_0c0d6774(int a4)
{
    register int t0;
    register int t29;
    register int t1;
    register int t9;
    register int t11;

    t0 = FUN_0c0d6744(a4);
    t29 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t1 = 0x9;
            for (;;) {
                *(unsigned short *)((0xC7F317E + (t1 << 1))) = (*(short *)(((((t1 - 1) << 1) + 0xC7F317E) + 0x0)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x0)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x1)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x2)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x2)));
                *(unsigned char *)((((t1 << 2) + 0xC7F3156) + 0x3)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x3)));
                t9 = t1;
                t11 = ((t1 - 1) + 0xC7F314C);
                t1 = (t1 - 1);
                *(unsigned char *)((0xC7F314C + t9)) = (*(signed char *)((t11 + 0x0)));
                if ((int)t1 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)((((t0 << 2) + 0xC7F3156) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned short *)((((t0 << 1) + 0xC7F317E) + 0x0)) = ((((struct o44_short *)(a4))->v));
        *(unsigned char *)(((t0 + 0xC7F314C) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t29 = 0x49;
    }
    return t29;
}

int FUN_0c0c48cc(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t2 = (t1 + 0x1);
        } else {
            t1 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
            }
            t1 = *(signed char *)((t0 + 0x3));
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
            if (0.5f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = 0.5f;
            }
            u0 = (((struct o50_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o38_float *)(a4))->v)) - ((((struct o20_float *)(a4))->v))) / 5.0f));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o3C_float *)(a4))->v)) - ((((struct o24_float *)(a4))->v))) / 5.0f));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o40_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 5.0f));
            t2 = 0x28;
        }
        t1 = t2;
    } else {
        *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        t2 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
        t2 = *(signed char *)((t0 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
        if (0.5f > ((((struct o50_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = 0.5f;
        }
        u0 = (((struct o50_float *)(a4))->v);
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o38_float *)(a4))->v)) - ((((struct o20_float *)(a4))->v))) / 5.0f));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o3C_float *)(a4))->v)) - ((((struct o24_float *)(a4))->v))) / 5.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o40_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 5.0f));
        t1 = 0x28;
    }
    return t1;
}

float FUN_0c0c8460(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x1;
        } else {
            FUN_0c0df940();
            
            (((struct oF2_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x1);
            *(volatile short *)((a4 + 0xF0));
            (((struct oF0_ushort *)(a4))->v) = (FUN_0c0e6e5c());
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x1C);
            FUN_0c0df940();
            
            t1 = FUN_0c0e6f24();
            u0 = (float)(((t1 << 8) << 2) << 1);
            if ((int)(((t1 << 8) << 2) << 1) < 0) {
                u0 = ((float)(((t1 << 8) << 2) << 1) + 4.2949673e+09f);
            }
            *(unsigned int *)((t0 + 0x18)) = (int)((u0 * 65536.0f) / 360.0f);
            (((struct o34_uchar *)(t0))->v) = 0x0;
            (((struct o35_uchar *)(t0))->v) = 0x2;
            u0 = 360.0f;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_0c040938(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t46;
    register int t47;
    register float u48;
    register float u19;
    register float u4;
    register float u41;
    register float u34;
    register float u25;

    *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + a4) + 0x4);
    t0 = ((0x2E0 + a4) + 0x4);
    t1 = a4;
    t2 = 0x0;
    t3 = 0x1;
    for (;;) {
        t5 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t5 + 0x4);
        t6 = *(int *)((((t5 + 0x4) - 4) + 0x0));
        t46 = t0;
        t47 = t1;
        u48 = u4;
        if (((((struct o1C_float *)(t6))->v)) != 0.0f) {
            t2 = (t2 + 0x1);
            if (((((struct o40_float *)(t6))->v)) != 0.0f) {
                (((struct o40_float *)(t6))->v) = (((((struct o40_float *)(t6))->v)) - 1.0f);
                t46 = t0;
                t47 = t1;
                u41 = u4;
            } else {
                t1 = t6;
                *(unsigned char *)((t6 + 0x0)) = 0x1;
                t1 = (t1 + 0x4);
                FUN_0c062050(t1, (t6 + 0x4), (t6 + 0x28));
                t0 = t6;
                t0 = (t0 + 0x38);
                (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + (*(float *)((t0 + 0x0))));
                t0 = (*(int *)((t6 + 0x34)));
                if ((float)t0 == 0.0f) {
                    (((struct o44_float *)(t6))->v) = (((((struct o44_float *)(t6))->v)) - 0.099999994f);
                    u4 = ((((struct o48_float *)(t6))->v));
                    u4 = (u4 - 0.099999994f);
                    (((struct o48_float *)(t6))->v) = u4;
                    (((struct o4C_float *)(t6))->v) = (((((struct o4C_float *)(t6))->v)) - 0.099999994f);
                    u4 = ((((struct o1C_float *)(t6))->v));
                    u4 = (u4 - 0.099999994f);
                    (((struct o1C_float *)(t6))->v) = u4;
                    u19 = (((struct o20_float *)(t6))->v);
                    (((struct o20_float *)(t6))->v) = (u19 - 0.099999994f);
                    if (!((u19 - 0.099999994f) > 0.0f)) {
                        t0 = 0xC0E6FE8;
                        FUN_0c0e6fe8();
                        FUN_0c0e6fe8();
                        *(unsigned char *)((t6 + 0x0)) = 0x0;
                    } else {
                        t46 = t0;
                        u25 = u4;
                    }
                    u34 = u25;
                } else {
                    t0 = (*(int *)((t6 + 0x34)));
                    t0 = (t0 - 1);
                    *(unsigned int *)((t6 + 0x34)) = t0;
                    t46 = t0;
                }
                u41 = u34;
            }
            u48 = u41;
        }
        u4 = u48;
        t3 = (t3 + 0x1);
        t0 = t46;
        t1 = t47;
        if ((int)t3 >= (int)0x5) {
            return ((int (*)(int, int, int, int))(0xC040A28))(t1, a5, a6, a7);
        }
    }
}
