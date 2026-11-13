/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_short { char p[0x2FC]; short v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7198_short { char p[0x7198]; short v; };
struct o7198_ushort { char p[0x7198]; unsigned short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_ushort { char p[0x71A0]; unsigned short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A4_uchar { char p[0x71A4]; unsigned char v; };
struct o71A5_uchar { char p[0x71A5]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o722C_float { char p[0x722C]; float v; };
struct o7250_float { char p[0x7250]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB0_int { char p[0xB0]; int v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
int ADXPD_GetStat(int);
int FUN_0c0195f0(void);
int FUN_0c0195fa(void);
extern int FUN_0c01964e();
extern int FUN_0c01b4f2();
float FUN_0c02651e(int);
int FUN_0c028030(int);
int FUN_0c028174(int);
int FUN_0c02bb32(float);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c05923a(int, int, int, int, int);
int FUN_0c059330(int);
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
int FUN_0c06233a(int, int, int);
int FUN_0c09a7b2(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09ac70(int, int);
int FUN_0c09aebc(int, int);
int FUN_0c09c422(int);
int FUN_0c09c894(int);
int FUN_0c09caea(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09db78(int);
int FUN_0c09dc1c(int, int);
int FUN_0c09dc64(int, int);
int FUN_0c09e7b8(int);
int FUN_0c0a3796(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0ac6a2(int, int);
int FUN_0c0ac780(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c9962(int);
int FUN_0c0c9982(int);
int FUN_0c0d6630(int);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
int FUN_0c0df920(void);
float FUN_0c0dfa50(int);
int FUN_0c0e3c54(int);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6fdc(int);
extern int FUN_0c0e6fe8();
int FUN_0c0e7080(int, int, int, int);
int FUN_0c0ed9ac(int, int, int);
int FUN_0c0ed9c0(int, int, int);
int FUN_0c0f4128(int);
int FUN_0c0f4202(int, int);
int FUN_0c104962(int, int, int);
int FUN_0c10c760(void);
int FUN_0c111cb8(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngSncmp(int, int, int);
int gdFsReopenHn(int, int, int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int pdVibMxStop(int);
int thunk_FUN_0c062242(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c111310(int a4, int a5, int a6);
int FUN_0c01a190(int a4);
int FUN_0c03b1ec(int a4, int a5);
int FUN_0c0418b4(int a4);
float FUN_0c0641a0(int a4, float f4, float f5);
int FUN_0c063a12(int a4, float f4);
int FUN_0c06eeb4(int a4);
float FUN_0c09f8e0(int a4, int a5, float f4, float f5);
int FUN_0c0c964c(int a4);
int FUN_0c01b570(int a4, int a5, int a6, int a7);
int FUN_0c03d60c(int a4, int a5);
int FUN_0c04bc94(int a4, int a5, int a6, int a7, float f4);
int FUN_0c063eac(int a4, int a5, int a6, int a7);
int FUN_0c09a828(int a4, int a5, int a6);
int FUN_0c0a07e4(int a4, int a5);
int FUN_0c0ab176(int a4, int a5);
int FUN_0c0d665c(int a4);
int FUN_0c0d7bf0(void);
void gdFsReqRd32(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int FUN_0c10cf60(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
int fmMngInit(int a4, int a5, int a6);
int FUN_0c02842a(int a4, int a5);
int gdFsDaPlayG(int a4, int a5, int a6, int a7);
int FUN_0c02d8e0(void);
int FUN_0c09b998(int a4);

int FUN_0c111310(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC843924 = 0xC842828;
    *(unsigned int *)0xC8437EC = a4;
    (((struct oFC8_uint *)((*(int *)0xC843924)))->v) = a6;
    if ((((((struct oFC4_int *)((*(int *)0xC843924)))->v)) & 0x1F) != 0) {
        t0 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC843924;
    if ((0x1F & ((((struct oFC8_int *)(t0))->v))) != 0) {
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC843924;
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC843924;
    (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) | 0xA0000000);
    t0 = *(int *)0xC843924;
    (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) | 0xA0000000);
    FUN_0c111cb8();
    t0 = 0xC15B6AC;
    t1 = 0xC15B6AC;
    t2 = 0xC15B6AC;
    t3 = 0xC15B6AC;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC843924)) + (*(int *)((t3 + 0x0)))) + 0x0))) != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            mpdrv_set_dreq_ns(t0);
        } else {
            t4 = t0;
            t5 = t1;
        }
        t3 = (t3 + 0x4);
        t0 = t4;
        t1 = t5;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC15B6BC) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC843924)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC843924)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x10)) = 0x0;
    t0 = *(int *)0xC843924;
    (((struct o80_uint *)(((((struct o10F4_int *)(t0))->v))))->v) = (((((struct o10C0_int *)(t0))->v)) | ((((struct o10D0_int *)(t0))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int FUN_0c01a190(int a4)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t13;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x5);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01A098;
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
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        t2 = 0x0;
        t3 = 0xC11BAC8;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t4) + 0x0))) + 0x2)) = 0x1F;
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t4) + 0x0))), 0xC664AC0, (*(signed char *)((t3 + 0xC))));
            t11 = *(int *)((((0x2E0 + t0) + t4) + 0x0));
            (((struct o24_float *)(t11))->v) = 1.0f;
            (((struct o20_float *)(t11))->v) = 1.0f;
            (((struct o1C_float *)(t11))->v) = 1.0f;
            *(volatile int *)((((0x2E0 + t0) + t4) + 0x0));
            t13 = FUN_0c0e6fe8(t11);
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x10);
            t4 = (t4 + 0x4);
            if ((int)t2 >= (int)0x5) {
                break;
            }
        }
        t14 = t13;
    }
    return t14;
}

int FUN_0c03b1ec(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t21;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t11;
    register float u20;
    register int t4;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 4));
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x0);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        *(unsigned int *)((t8 + 0x10)) = 0xC03B2D6;
        t9 = *(signed char *)(((int)stk + 0));
        t11 = (((struct o2E0_int *)(t8))->v);
        FUN_0c06233a(t11, ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x17);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        *(unsigned short *)((t11 + 0x2)) = 0x239;
        FUN_0c0df920();
        *(unsigned int *)((t11 + 0x18)) = ((int)(((((float)(FUN_0c0e6e5c()) * ((((struct o0_float *)0xC03B368)->v))) / ((((struct o4_float *)0xC03B368)->v)))) + ((((struct o8_float *)0xC03B368)->v))) & 0xFFFF);
        u20 = (((struct o10_float *)0xC03B368)->v);
        (((struct o1C_float *)(t11))->v) = u20;
        (((struct o20_float *)(t11))->v) = u20;
        (((struct o24_float *)(t11))->v) = u20;
        (((struct o44_float *)(t11))->v) = 1.0f;
        (((struct o48_float *)(t11))->v) = 1.0f;
        (((struct o4C_float *)(t11))->v) = 1.0f;
        t21 = 0x4C;
    }
    return t21;
}

int FUN_0c0418b4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c0c9962(a4);
    t0 = (((struct o2E0_int *)(a4))->v);
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        t1 = *(signed char *)((a4 + 0x8));
        switch (t1) {
        case 0:
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o1C_float *)(t0))->v) = 0.25f;
            break;
        case 1:
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.25f);
            if (!(1.0f > (u0 + 0.25f))) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o1C_float *)(t0))->v) = 1.0f;
            }
            break;
        case 2:
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.25f);
            if (((((struct o1C_float *)(t0))->v)) > 0.5f) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        case 3:
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.25f);
            if (!(1.0f > (u0 + 0.25f))) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            break;
        }
        (((struct o24_float *)(t0))->v) = ((((struct o1C_float *)(t0))->v));
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
    }
    t0 = FUN_0c0c9982(a4);
    if (t0 != 0) {
        return FUN_0c059330(a4);
    }
    return t0;
}

float FUN_0c0641a0(int a4, float f4, float f5)
{
    float u0;
    register float u1;
    register float u2;
    register float u3;

    u1 = *(float *)0xC494D1C;
    u2 = u1;
    if ((*(signed char *)((a4 + 0x4))) == 4) {
        u2 = (u1 + ((((struct o0_float *)0xC0642D8)->v)));
    }
    u1 = f4;
    if ((((((struct o4_float *)0xC0642D8)->v)) > u2) && (u0 = (((struct o8_float *)0xC0642D8)->v), f4 > u0)) {
        u1 = (f4 / ((((struct oC_float *)0xC0642D8)->v)));
    }
    u0 = u2;
    if (!(u2 > 1.0f)) {
        u0 = 1.0f;
    }
    u2 = (((struct o10_float *)0xC0642D8)->v);
    u3 = u0;
    if (!(u2 > u0)) {
        u3 = u2;
    }
    u0 = (f5 * (-(u1 / f5)));
    u2 = (u0 * (-(u1 / f5)));
    u0 = (((struct oC_float *)0xC0642D8)->v);
    (((struct o7254_float *)(a4))->v) = (((((u1 * (-(u1 / f5)))) - u2) / u0) + _builtin_fabsf((((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)))));
    (((struct o4_float *)((0x7254 + a4)))->v) = ((FUN_0c0df340(((((((struct o7254_float *)(a4))->v)) * u0) / (-f5)))) + (-(u1 / f5)));
    u0 = (((struct o7258_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (u3 / u0));
    u2 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    (((struct o40_float *)(a4))->v) = (u2 * (u3 / u0));
    (((struct o3C_float *)(a4))->v) = u1;
    (((struct o48_float *)(a4))->v) = f5;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    return (u2 * (u3 / u0));
}

int FUN_0c063a12(int a4, float f4)
{
    register int t0;
    register float u0;
    register float u1;
    float u2;

    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71BC))) != 2) && ((u0 = (((struct o24_float *)(a4))->v), u1 = (((struct o24_float *)(t0))->v), u0 > u1) && (u2 = *(float *)0xC494D1C, 200.0f > u2))) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 6.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
    }
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) <= (int)0x2B) {
        FUN_0c09a910(a4);
    } else {
        FUN_0c09d990(a4);
        FUN_0c09d9bc(a4);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = FUN_0c09c894(a4);
        if ((signed char)t0 != 0) {
            FUN_0c09a808(a4, 0x1, 0x38);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            FUN_0c09a808(a4, 0x1, 0x92);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            FUN_0c09c422(a4);
            *(unsigned char *)((a4 + 0xA)) = 0x5;
            return 0x5;
        }
        return FUN_0c09da1c(a4);
    }
    return FUN_0c09da1c(a4);
}

int FUN_0c06eeb4(int a4)
{
    register int t0;
    register float u10;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c09a808(a4, 0x1, 0xFFFFFF9D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        FUN_0c09dc64(a4, 0x1555);
        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
        (((struct o7250_float *)(a4))->v) = ((((struct o722C_float *)(a4))->v));
        if (!(((((struct o7250_float *)(a4))->v)) > 100.0f)) {
            (((struct o7250_float *)(a4))->v) = 100.0f;
        }
        if (!(500.0f > ((((struct o7250_float *)(a4))->v)))) {
            (((struct o7250_float *)(a4))->v) = 500.0f;
        }
        u10 = (((struct o7250_float *)(a4))->v);
        (((struct o7250_float *)(a4))->v) = (u10 - ((200.0f - u10) / 4.0f));
        (((struct o7250_float *)(a4))->v) = (((((struct o7250_float *)(a4))->v)) / 20.0f);
        (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7250_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7250_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = 10.0f;
        (((struct o48_float *)(a4))->v) = -3.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    return FUN_0c09da1c(a4);
}

float FUN_0c09f8e0(int a4, int a5, float f4, float f5)
{
    register float u0;
    register float u1;
    register float u2;

    (((struct o7254_float *)(a4))->v) = ((((struct o38_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + 0xC339540) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v));
    if (!(80.0f > (*(float *)0xC494D1C))) {
        if (((((struct o2FC_short *)(a4))->v)) != 0) {
            u0 = (((struct o7254_float *)(a4))->v);
            u1 = (((float)(unsigned short)((((struct o2FE_short *)(a4))->v)) / 128.0f) * u0);
            u2 = (u1 * 0.599999964f);
            u2 = u2 + 0.399999976f * u0;
            (((struct o7254_float *)(a4))->v) = u2;
        }
        if (((((struct o7254_float *)(a4))->v)) > ((((struct o3C_float *)(((((short)(*(signed char *)((a4 + 0x4))) * (short)0x98) + 0xC339540) + (unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C))))->v))) {
            (((struct o7254_float *)(a4))->v) = ((((struct o3C_float *)(((0xC339540 + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)) + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x71F1))) * (unsigned short)0x4C))))->v));
        }
    }
    (((struct o38_float *)(a4))->v) = ((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
    u0 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u1 = (((struct o7254_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 * u1);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    return (u0 * u1);
}

int FUN_0c0c964c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c05923a(0x1, a4, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C9760;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        t1 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(t0))->v) = t1;
        u0 = 3.0f;
        if ((int)t1 <= (int)0x2) {
            u0 = 1.5f;
        }
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x61F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.899999976f;
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x1C)) = (*(int *)((a4 + 0x1C)));
        (((struct o308_uint *)(t0))->v) = a4;
    }
    return t0;
}

int FUN_0c01b570(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = ((int (*)(int, int, int, int))(FUN_0c01b4f2))(0x2, 0x80, a6, a7);
    if ((signed char)t2 != 0) {
        if (((unsigned char)(*(signed char *)0xC362352) == 3) && (t0 = *(signed char *)0xC362351, (unsigned char)t0 == 3)) {
            (((struct o1_uchar *)0xC362350)->v) = 0x0;
        }
        (((struct o1_uchar *)0xC362350)->v) = ((*(signed char *)0xC362351) + 0x1);
        FUN_0c0a3796(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x40);
    if ((signed char)t0 != 0) {
        if (((unsigned char)(*(signed char *)0xC362352) == 3) && (t1 = *(signed char *)0xC362351, (unsigned char)t1 == 4)) {
            (((struct o1_uchar *)0xC362350)->v) = 0x3;
        }
        (((struct o1_uchar *)0xC362350)->v) = ((*(signed char *)0xC362351) - 1);
        FUN_0c0a3796(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x20);
    if ((signed char)t0 != 0) {
        (((struct o2_uchar *)0xC362350)->v) = ((*(signed char *)0xC362352) + 0x1);
        FUN_0c0a3796(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x10);
    if ((signed char)t0 != 0) {
        (((struct o2_uchar *)0xC362350)->v) = ((*(signed char *)0xC362352) - 1);
        FUN_0c0a3796(0x0, 0x4B);
    }
    t0 = *(signed char *)0xC362352;
    (((struct o2_uchar *)0xC362350)->v) = (*(signed char *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC11C128) + ((unsigned char)(*(signed char *)0xC362351) << 1))));
    t0 = *(signed char *)0xC362352;
    (((struct o1_uchar *)0xC362350)->v) = (*(signed char *)(((((unsigned char)(*(signed char *)0xC362351) << 1) + ((signed char)(((t0 << 1) + t0) << 2) + 0xC11C128)) + 0x1)));
    t0 = *(signed char *)(((0xC11C164 + (((unsigned char)(*(signed char *)0xC362352) - 1) << 2)) + ((unsigned char)(*(signed char *)0xC362351) - 1)));
    (((struct o0_uchar *)0xC362350)->v) = t0;
    return t0;
}

int FUN_0c03d60c(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t18;
    register int t3;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t17;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03D6F4;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t3 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) - 16384);
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        t8 = 0x0;
        t9 = 0x2;
        t10 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t10) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t10) + 0x0))) + 0x2)) = 0xF;
            t13 = *(signed char *)((a4 + 0x3));
            t17 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t10) + 0x0))), ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), t9);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x1);
            t10 = (t10 + 0x4);
            if ((int)(signed char)t8 >= (int)0x2) {
                break;
            }
        }
        t18 = t17;
    }
    return t18;
}

int FUN_0c04bc94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((a4 == 0) && ((a6 == 0) || (a7 == 0))) {
    } else {
        t4 = FUN_0c059132(0x5, 0x1, 0x1);
        t5 = t4;
        if (t4 != 0) {
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned char *)((t4 + 0x1)) = 0x1;
            *(unsigned char *)((t4 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(t4))->v) = 0x0;
            *(unsigned char *)((t4 + 0x4)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x5;
            *(unsigned char *)((t4 + 0x5)) = 0x19;
            *(unsigned int *)((t4 + 0x10)) = 0xC04BDA4;
            (((struct o118_uint *)(t4))->v) = 0x0;
            if (a4 != 0) {
                *(unsigned char *)((t4 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
                t6 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
            } else {
                *(unsigned char *)((t4 + 0x3)) = 0x2;
                t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
                t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
            }
            t0 = ((int (*)(int))(FUN_0c0e6fe8))(t2);
            t0 = (((struct o2E0_int *)(t3))->v);
            FUN_0c06233a(t0, 0xC4CFA68, 0x1B);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x2)) = 0x211;
            (((struct o44_float *)(t0))->v) = 1.0f;
            (((struct o48_float *)(t0))->v) = 1.0f;
            (((struct o4C_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0399999991f;
            (((struct o20_float *)(t0))->v) = 0.0399999991f;
            (((struct o24_float *)(t0))->v) = 0.0399999991f;
            t5 = 0x24;
        }
        t0 = t5;
    }
    return t0;
}

int FUN_0c063eac(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t8;
    register int t10;

    t0 = (((struct o71C8_int *)(a4))->v);
    if (t0 != 0) {
        t2 = FUN_0c0ac6a2(t0, (*(signed char *)((a4 + 0x3))));
        if ((signed char)t2 != 0) {
            t4 = FUN_0c0ac780(t0, 0x7, (*(signed char *)((a4 + 0x3))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            if (t4 != 0) {
                if ((*(signed char *)((a4 + 0x721E))) == 0) {
                    t7 = FUN_0c09db78(a4);
                    t8 = FUN_0c09dc1c((a4 + 0x20), (t0 + 0x20));
                    t10 = (unsigned short)(t7 - t8);
                    if ((0x8000 & (unsigned short)(t7 - t8)) != 0) {
                        t10 = ((unsigned short)(t7 - t8) | 0xFFFF0000);
                    }
                    if (((int)t10 < (int)0x4000) && ((int)t10 > (int)0xFFFFC000)) {
                        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
                        FUN_0c09a808(a4, 0x1, 0x4E);
                        (((struct o710B_uchar *)(a4))->v) = 0x1;
                        return ((int (*)(void))(0xC063FBC))();
                    }
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((FUN_0c09db78(a4)) + 0x8000);
                    FUN_0c09a808(a4, 0x1, 0x99);
                    (((struct o710B_uchar *)(a4))->v) = 0x1;
                    (((struct o710C_uchar *)(a4))->v) = 0x1;
                    return ((int (*)(void))(0xC063FC2))();
                }
                FUN_0c09a808(a4, 0x1, 0x3B);
                (((struct o710B_uchar *)(a4))->v) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0xD;
                return ((int (*)(void))(0xC063FC2))();
            }
            return ((int (*)(void))(0xC063FAC))();
        }
        return ((int (*)(void))(0xC063FAC))();
    }
    return ((int (*)(int, int, int, int))(0xC063FAC))(a4, a5, a6, a7);
}

int FUN_0c09a828(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t10;
    register int t14;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned char *)(((int)stk + 24)) = a6;
    t0 = *(signed char *)(((int)stk + 24));
    t2 = *(signed char *)(((int)stk + 20));
    t3 = *(int *)(((int)stk + 16));
    t4 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    (((struct o71A4_uchar *)(t3))->v) = t2;
    (((struct o71A5_uchar *)(t3))->v) = t0;
    (((struct o719A_ushort *)(t3))->v) = ((((struct o7198_short *)(t3))->v));
    (((struct o719D_uchar *)(t3))->v) = (*(signed char *)((t3 + 0x719C)));
    t7 = *(signed char *)((t4 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = (((signed char)t2 << 8) << 1);
    t10 = *(short *)((((unsigned char)t0 << 1) + ((((t7 * 0xB5EC8) + 0xC664B50) + 0xAAE88) + (((signed char)t2 << 8) << 1))));
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)t10;
    (((struct o7198_ushort *)(t3))->v) = (((int)((unsigned short)t10 & 0xFF00) >> 8) | ((unsigned char)(*(int *)(((int)stk + 0))) << 8));
    (((struct o719C_uchar *)(t3))->v) = 0x0;
    t14 = *(short *)((((unsigned char)t0 << 1) + (((((*(signed char *)((t4 + 0x3))) * 0xB5EC8) + 0xC664B50) + 0xAB888) + (*(int *)(((int)stk + 4))))));
    (((struct o71A0_ushort *)(t3))->v) = (((int)(0xFF00 & (unsigned short)t14) >> 8) | ((unsigned char)(unsigned short)t14 << 8));
    (((struct o71A2_uchar *)(t3))->v) = 0x0;
    FUN_0c09aebc(t3, t4);
    (((struct o71A6_uchar *)(t3))->v) = 0x1;
    (((struct o71A7_uchar *)(t3))->v) = 0x1;
    (((struct o71A9_uchar *)(t3))->v) = 0x4;
    (((struct o71A8_uchar *)(t3))->v) = 0x0;
    (((struct o719E_ushort *)(t3))->v) = 0x0;
    FUN_0c09ac70(t3, t4);
    (((struct o719C_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x719C))) + 0x1);
    return 0x719C;
}

int FUN_0c0a07e4(int a4, int a5)
{
    int stk[7];
    register int t1;
    register int t9;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x24;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c09a7b2(a4);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    t1 = *(signed char *)(((int)stk + 0));
    if (t1 != 1) {
        FUN_0c09a808(a4, 0x2, 0xCF);
        FUN_0c0a3914(a4, 0xF);
        FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0xE);
    } else {
        FUN_0c09a808(a4, 0x2, 0xD0);
        *(unsigned char *)((a4 + 0xA)) = 0x1;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if (t1 != 2) {
        t9 = FUN_0c09caea(a4, 0x9);
        t24 = (signed char)t9;
        if ((signed char)t9 != 0) {
            *(volatile int *)((((((signed char)t9 - 1) << 2) + (0x2C0 + a4)) + 0x0));
            FUN_0c0e6fdc(t9);
            (((struct o24_float *)(a4))->v) = (((((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o10_float *)((((int)stk + 0) + 0x4)))->v))) - (FUN_0c02651e(a4))) + (*(float *)0xC0A0940));
            t24 = 0x24;
        }
    } else {
        (((struct o24_float *)(a4))->v) = (((((struct o729C_float *)(a4))->v)) + (*(float *)0xC0A0940));
        t24 = 0x24;
    }
    return t24;
}

int FUN_0c0ab176(int a4, int a5)
{
    register int t12;

    if ((signed char)a5 == 0) {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), 0xC664A78, 0x24);
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct o0_float *)0xC0AB29C)->v));
        t12 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    } else {
        FUN_0c06233a((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))), 0xC664A78, ((*(signed char *)(((unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78) + 0xC7F2E46))) + 0x26));
        (((struct o28_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((((struct oC_float *)0xC0AB29C)->v));
        t12 = (*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)));
    }
    (((struct o2C_float *)(t12))->v) = ((((struct o10_float *)0xC0AB29C)->v));
    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x0)) = 0x1;
    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0))) + 0x2)) = 0x11F;
    (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / ((((struct o14_float *)0xC0AB29C)->v)));
    (((struct o20_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / ((((struct o18_float *)0xC0AB29C)->v)));
    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0)))))->v) = 1.0f;
    return 0x24;
}

int FUN_0c0d665c(int a4)
{
    register int t0;
    register int t26;
    register int t1;
    register int t7;
    register int t10;

    t0 = FUN_0c0d6630(a4);
    t26 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t1 = 0x9;
            for (;;) {
                *(unsigned int *)((((t1 << 2) + 0xC7F3124) + 0x0)) = (*(int *)((0xC7F3124 + ((t1 - 1) << 2))));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x0)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x1)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x2)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x2)));
                *(unsigned char *)((((t1 << 2) + 0xC7F30FC) + 0x3)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x3)));
                t7 = t1;
                t10 = ((t1 - 1) + 0xC7F30F2);
                t1 = (t1 - 1);
                *(unsigned char *)((0xC7F30F2 + t7)) = (*(signed char *)((t10 + 0x0)));
                if ((int)t1 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned int *)((((t0 << 2) + 0xC7F3124) + 0x0)) = (*(int *)((a4 + 0x20)));
        *(unsigned char *)(((t0 + 0xC7F30F2) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t26 = 0x49;
    }
    return t26;
}

int FUN_0c0d7bf0(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o0_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474A);
                (((struct o1_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F4748);
                (((struct o2_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F4749);
                (((struct o3_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474B);
                (((struct o6_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474C);
                (((struct o7_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474D);
                (((struct o8_uchar *)0xC7F4764)->v) = (*(signed char *)0xC7F474E);
                t0 = FUN_0c0195fa();
                if ((signed char)t0 != 0) {
                    (((struct o2_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4738);
                    (((struct o13_uchar *)0xC7F4725)->v) = 0x6;
                } else {
                    (((struct o0_uchar *)0xC7F4725)->v) = 0x2;
                }
                (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
        t0 = ((int (*)(int))(FUN_0c01964e))(0xC7F4726);
    } else {
        (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        FUN_0c058f4e();
        FUN_0c02bb32((*(float *)0xC0D7D64));
        FUN_0c0195f0();
        (((struct o25_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4764);
        (((struct o23_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4765);
        (((struct o24_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4766);
        (((struct o26_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F4767);
        (((struct o27_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476A);
        (((struct o28_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476B);
        (((struct o29_uchar *)0xC7F4725)->v) = (*(signed char *)0xC7F476C);
        t0 = ((int (*)(void))(FUN_0c01964e))();
    }
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}

void gdFsReqRd32(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            if ((0x1F & a6) != 0) {
            } else {
                t0 = *(int *)((a4 + 0x14));
                t1 = *(int *)((a4 + 0x8));
                t2 = *(int *)((a4 + 0x10));
                if ((int)(t0 + t1) >= (int)(t1 + t2)) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t3 = a5;
                    if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                        t3 = ((t1 + t2) - (t0 + t1));
                    }
                    if (t3 == 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    } else {
                        t2 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, ((((struct o4E_short *)(a4))->v)));
                        if (t4 != 0) {
                            *(unsigned int *)((a4 + 0x3C)) = t4;
                            *(unsigned int *)((a4 + 0x1C)) = t3;
                            (((struct o50_ushort *)(a4))->v) = 0x2;
                            (((struct o4A_ushort *)(a4))->v) = 0x1;
                            (((struct o48_ushort *)(a4))->v) = 0x1;
                            *(unsigned int *)((a4 + 0x18)) = 0x0;
                            *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                        } else {
                            (((struct o50_ushort *)(a4))->v) = 0x1;
                        }
                        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                        
                    }
                }
            }
        }
    }
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int stk[14];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    int t6;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347220)));
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t5 = vmsio_ismount(a4);
        if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC80DBC8) + 0x8)), t7 != 0)) {
            t8 = buIsFormat(a4);
            if ((int)t8 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 0));
            t10 = check_isopen();
            if ((int)t10 < 0) {
                return 0xFFFFFF0B;
            }
            t12 = FUN_0c104962(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
            if ((int)t12 < 0) {
                return 0xFFFFFF05;
            }
            t14 = FUN_0c104962(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
            if ((int)t14 >= 0) {
                return 0xFFFFFF06;
            }
            t15 = direntry(a4, t12);
            t16 = *(int *)(((int)stk + 4));
            return ((int (*)(int, int, int, int))(0xC103C26))((t15 + 0x4), t15, (t15 + 0x10), t16);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}


int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7)
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
    register int t10;

    t0 = (((struct o50_int *)(a4))->v);
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x20));
            t3 = *(int *)(((a4 + 0x50) + 0x18));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t3 - t2);
            if ((int)(t3 - t2) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x20));
                t6 = *(int *)(((a4 + 0x50) + 0x1C));
                if ((int)t3 > 0) {
                    t7 = 0x0;
                    t8 = 0x0;
                    t9 = 0x0;
                    for (;;) {
                        t9 = (t9 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t8)) = (*(short *)((((t7 << 1) + t0) + 0x0)));
                        t10 = (((t7 + 0x1) << 1) + t0);
                        t7 = (t7 + 0x2);
                        *(unsigned short *)(((((t6 + t5) << 1) + t2) + t8)) = (*(short *)((t10 + 0x0)));
                        t8 = (t8 + 0x2);
                        if ((int)t9 >= (int)t3) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t3 > 0) {
                    t5 = 0x0;
                    t6 = 0x0;
                    for (;;) {
                        t6 = (t6 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t5)) = (*(short *)((t0 + t5)));
                        t5 = (t5 + 0x2);
                        if ((int)t6 >= (int)t3) {
                            break;
                        }
                    }
                }
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = ((t3 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = ((t4 << 1) + t2);
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}

int fmMngInit(int a4, int a5, int a6)
{
    int stk[3];
    register int t46;
    register int t6;
    register int t8;
    register int t19;
    register int t20;
    register int t21;
    int t27;
    int t22;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t46 = 0xFFFFFFF9;
    if (((int)a4 >= (int)0x1) && ((int)a4 < (int)0x5)) {
        *(unsigned int *)0xC347704 = 0xC84392C;
        FUN_0c0ed9ac(a4, (((int)stk + 0) + 0x4), a6);
        *(unsigned short *)(((*(int *)0xC347704) + 0x0)) = a4;
        *(unsigned int *)(((*(int *)0xC347704) + 0x4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)0xC347704) + 0x8)) = (*(int *)(((int)stk + 8)));
        t6 = *(int *)0xC347704;
        *(unsigned int *)((t6 + 0x18)) = ((int)((*(int *)((t6 + 0x8))) + 0x7FFF) >> 15);
        t8 = *(int *)0xC347704;
        *(unsigned int *)((t8 + 0x14)) = ((((int)(*(int *)((t8 + 0x8))) >> 6) - (*(int *)((t8 + 0x18)))) - 1);
        *(unsigned int *)(((*(int *)0xC347704) + 0xC)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC347704) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC347704) + 0x20)) = 0x0;
        *(unsigned int *)(((*(int *)0xC347704) + 0x2C)) = 0x0;
        t19 = FUN_0c0ed9c0((*(int *)(((*(int *)0xC347704) + 0x4))), ((*(int *)0xC347704) + 0x34), 0x40);
        t46 = 0xFFFFFFFF;
        if (t19 != -1) {
            t20 = *(int *)0xC347704;
            t21 = fmMngSncmp((t20 + 0x34), 0xC15B6E8, 0xC);
            t46 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC347704, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC347704) + 0x2));
                t46 = 0xFFFFFFF8;
                if ((t27 != 0) && (t27 != 1)) {
                } else {
                    t46 = (fmMngClearBuf((*(int *)(((*(int *)0xC347704) + 0xC))), (*(int *)(((*(int *)0xC347704) + 0x8)))));
                }
            }
        }
    }
    return t46;
}

int FUN_0c02842a(int a4, int a5)
{
    int stk[14];
    register int t1;
    register int t2;
    register int t3;
    register int t27;
    register int t0;
    register float u4;
    register float u5;
    register int t49;
    register int t50;
    register int t51;
    register float u52;
    register float u53;
    register float u43;
    register float u44;
    register float u34;
    register float u35;

    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t0 = 0x2E0;
        t2 = t3;
        t2 = (t2 << 2);
        t0 = (t0 + a4);
        t2 = (t2 + t0);
        t2 = (*(int *)((t2 + 0x0)));
        t1 = ((((struct oB0_int *)(t2))->v));
        t0 = (*(int *)((t1 + 0x0)));
        *(unsigned int *)(((int)stk + 0)) = t0;
        t0 = ((((struct o20_short *)(t1))->v));
        u4 = ((((struct o4_float *)(t2))->v));
        u5 = (float)t0;
        u4 = (u4 + u5);
        *(float *)(((int)stk + 4)) = u4;
        t0 = ((((struct o22_short *)(t1))->v));
        u4 = ((((struct o8_float *)(t2))->v));
        u5 = (float)t0;
        u4 = (u4 + u5);
        *(float *)(((int)stk + 8)) = u4;
        u5 = ((((struct oC_float *)(t2))->v));
        *(float *)(((int)stk + 12)) = u5;
        *(unsigned int *)(((int)stk + 40)) = (*(short *)((t1 + 0x4)));
        *(unsigned int *)(((int)stk + 52)) = (unsigned short)(*(short *)((t1 + 0x6)));
        u5 = ((((struct o8_float *)(t1))->v));
        *(float *)(((int)stk + 24)) = u5;
        u5 = ((((struct oC_float *)(t1))->v));
        *(float *)(((int)stk + 28)) = u5;
        u5 = ((((struct o10_float *)(t1))->v));
        *(float *)(((int)stk + 32)) = u5;
        u5 = ((((struct o14_float *)(t1))->v));
        *(float *)(((int)stk + 36)) = u5;
        u5 = ((((struct o18_float *)(t1))->v));
        u4 = ((((struct o50_float *)(a4))->v));
        u4 = (u4 * u5);
        *(float *)(((int)stk + 16)) = u4;
        u5 = ((((struct o1C_float *)(t1))->v));
        u4 = ((((struct o54_float *)(a4))->v));
        u4 = (u4 * u5);
        *(float *)(((int)stk + 20)) = u4;
        u5 = ((((struct oBC_float *)(t2))->v));
        *(float *)(((int)stk + 44)) = u5;
        t27 = *(signed char *)((t2 + 0xB8));
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    t49 = t0;
                    t50 = t1;
                    t51 = t2;
                    u34 = u4;
                    u35 = u5;
                } else {
                    t1 = ((int)stk + 0);
                    FUN_0c028174(t1);
                }
                u43 = u34;
                u44 = u35;
            } else {
                t1 = ((int)stk + 0);
                FUN_0c028030(t1);
            }
            u52 = u43;
            u53 = u44;
        } else {
            *(unsigned int *)(((int)stk + 48)) = 0x2;
            t1 = ((int)stk + 0);
            FUN_0c0e3c54(t1);
        }
        u4 = u52;
        u5 = u53;
        t3 = (t3 + 0x1);
        t0 = t49;
        t1 = t50;
        t2 = t51;
    }
    return 0x2DC;
}

int gdFsDaPlayG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t0 = (((struct o0_int *)0xC7FE6D8)->v);
    t1 = a5;
    t2 = a4;
    if ((*(short *)((t0 + 0x0))) == 1) {
        t3 = *(short *)((t0 + 0x2));
        t1 = (a5 + (t3 - 4));
        t2 = (a4 + (t3 - 4));
    }
    t0 = 0xFFFFFFF3;
    if ((int)t2 >= (int)0x3) {
        t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t3 != 0) {
            t5 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t6 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x28)))))(t2, t1, a6, a7);
            if (t6 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t6;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC346BD8) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC346BD8)))->v) = 0x1;
                    (((struct o10_uint *)0xC7FE6D8)->v) = 0x1;
                    (((struct o14_uint *)0xC7FE6D8)->v) = t2;
                    (((struct o18_uint *)0xC7FE6D8)->v) = t1;
                    (((struct o1C_uint *)0xC7FE6D8)->v) = a6;
                    *(unsigned int *)((t3 + 0x4)) = 0xC7FE6F8;
                    (((struct o48_ushort *)(t3))->v) = 0x8;
                    t1 = 0x1;
                } else {
                    (((struct o48_ushort *)(t3))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))(t1, a5, a6, a7);
            }
            _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t6 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

int FUN_0c02d8e0(void)
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

    t1 = 0xC366A70;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned char *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x1)) = t2;
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x8)) = ((((struct o71D4_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0xA)) = ((((struct o71D8_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
        t5 = (((struct o71D6_short *)(((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
        *(unsigned short *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0xC)) = t5;
        if (t5 != 0) {
            t5 = 0x72D0;
            t5 = ((unsigned short)t2 * (unsigned short)t5);
            t5 = (unsigned short)t5;
            t5 = (t5 + 0xC7E40C4);
            t5 = ((((struct o71D6_short *)(t5))->v));
            t5 = (t5 - 1);
            t6 = FUN_0c0e6d00();
            *(unsigned char *)((t0 + 0x1)) = (t6 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = (t6 + 0x1);
        } else {
            *(unsigned char *)((((0xD4 + t1) + (short)(((((t2 << 1) + t2) << 2) << 2) << 2)) + 0x3)) = 0x1;
            t6 = t5;
            t7 = t1;
            t8 = t2;
            t9 = t3;
        }
        t4 = (short)(((((t2 << 1) + t2) << 2) << 2) << 2);
        t5 = t6;
        t1 = t7;
        t2 = t8;
        t3 = t9;
        t5 = 0x1E;
        t6 = t9;
        for (;;) {
            *(unsigned short *)((((t6 << 1) + (0xB0 + ((0xD4 + t1) + t4))) + 0x0)) = t5;
            t7 = ((0xBA + ((0xD4 + t1) + t4)) + t6);
            t6 = (t6 + 0x1);
            *(unsigned char *)((t7 + 0x0)) = t3;
            t5 = (t5 + 0x8);
            if ((int)t6 >= (int)0x5) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return ((0xD4 + t1) + t4);
}

int FUN_0c09b998(int a4)
{
    int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x72B2))) != 0) {
        t1 = *(signed char *)((a4 + 0x72B2));
        (((struct o72B2_uchar *)(a4))->v) = (t1 - 1);
        if (((unsigned char)(t1 - 1) == 0) && (t0 = *(signed char *)((a4 + 0x71ED)), t0 == 0)) {
            t0 = FUN_0c0f4128((*(int *)((((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408) + 0x0))));
            if (t0 == 0) {
                t0 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                if (t0 != 0) {
                    if ((*(signed char *)0xC7F2F19) == 0) {
                        FUN_0c0f4202((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))), (0x72B4 + a4));
                    }
                    if ((*(signed char *)((a4 + 0x72B3))) != 0) {
                        t1 = *(signed char *)((a4 + 0x72B3));
                        (((struct o72B3_uchar *)(a4))->v) = (t1 - 1);
                        if ((unsigned char)(t1 - 1) == 0) {
                            if ((*(signed char *)((a4 + 0x71ED))) == 0) {
                                t1 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                                if (t1 == 0) {
                                    t1 = FUN_0c0f4128((*(int *)((0x8 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                                    if (t1 != 0) {
                                        return pdVibMxStop((*(int *)((0x8 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                                    }
                                    return t1;
                                }
                                return pdVibMxStop((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                            }
                            return 0x71ED;
                        }
                        return 0x72B3;
                    }
                    return 0x72B3;
                }
                return t0;
            }
            if ((*(signed char *)0xC7F2F19) == 0) {
                FUN_0c0f4202((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))), (0x72B4 + a4));
            }
        }
    }
    if ((*(signed char *)((a4 + 0x72B3))) != 0) {
        t0 = *(signed char *)((a4 + 0x72B3));
        (((struct o72B3_uchar *)(a4))->v) = (t0 - 1);
        if ((unsigned char)(t0 - 1) == 0) {
            if ((*(signed char *)((a4 + 0x71ED))) == 0) {
                t0 = FUN_0c0f4128((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                if (t0 == 0) {
                    t0 = FUN_0c0f4128((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                    if (t0 != 0) {
                        return pdVibMxStop((*(int *)((0x4 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
                    }
                    return t0;
                }
                return pdVibMxStop((*(int *)((0x0 + ((((*(signed char *)((a4 + 0x3))) << 2) << 1) + 0xC339408)))));
            }
            return 0x71ED;
        }
        return 0x72B3;
    }
    return 0x72B3;
}
