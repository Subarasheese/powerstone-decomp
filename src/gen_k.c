/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_float { char p[0x308]; float v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71EE_uchar { char p[0x71EE]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c010774(void);
int FUN_0c0107f4(void);
int FUN_0c010964(void);
int FUN_0c019f62(int);
int FUN_0c01a3c2(int, int, int, int);
int FUN_0c01a3ee(int);
int FUN_0c01f0e4(int);
int FUN_0c01f19e(int);
int FUN_0c01f1f6(int, int, int, int);
int FUN_0c01f28e(int, int, int, int);
int FUN_0c01fb0c(void);
int FUN_0c027fa4(int, int, int);
int FUN_0c02bb32(float);
int FUN_0c02c2d0(int);
int FUN_0c02c830(int);
int FUN_0c02c91a(int);
int FUN_0c02cb4a(int);
int FUN_0c02d9e0(void);
int FUN_0c031496(int, int, int, int);
int FUN_0c0428ca(int, int);
int FUN_0c059132(int, int, int);
int FUN_0c05ef02(int, int, int, int, int, int);
int FUN_0c05fb58(int, float);
int FUN_0c06233a(int, int, int);
int FUN_0c096a64(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c6b8(int, int, int);
int FUN_0c09d990(int);
int FUN_0c09db78(int);
int FUN_0c09ddfe(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0abd20(int);
int nlObjPutUseViewMatrix(int);
float FUN_0c0df340(float);
float FUN_0c0df4d0(int);
float FUN_0c0df700(float);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e1550(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlRotateAZ(int, float, float);
int FUN_0c0e2120(int);
int nlUnitMatrix(void);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int FUN_0c0ff1ac(int, int, int, int);
int write_sys(int);
int write_fat_1(int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int FUN_0c10a8a0(int, int);
int FUN_0c10aa80(int);
int FUN_0c10b3e0(int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int memset(int, int, int);
int FUN_0c029ec4(void);
int FUN_0c096bac(int a4, int a5, int a6, int a7);
int FUN_0c0ae9e4(int a4);
int FUN_0c02cc18(float f4);
float FUN_0c09d8ec(int a4);
int FUN_0c0aca24(int a4);
int FUN_0c0ac900(int a4, int a5);
int FUN_0c0ffdfc(void);
int FUN_0c109020(void);
int FUN_0c0149d4(int a4);
int FUN_0c01d254(int a4);
int FUN_0c019d1c(int a4, int a5, int a6, int a7);
int FUN_0c02a9bc(float f4);
int FUN_0c02bcba(void);
int FUN_0c02f258(void);
int FUN_0c05f4cc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0b51cc(int a4);
int FUN_0c0fd496(int a4, int a5, int a6, Stk2 s);
int FUN_0c01ee40(int a4, int a5, int a6, int a7);
int FUN_0c026f78(int a4, int a5);
int FUN_0c02a6c4(void);
int FUN_0c03c5c0(int a4, int a5);
int FUN_0c053680(void);
int FUN_0c0c69e8(int a4);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int check_caps(int a4);
int write_fat(int a4, int a5, int a6, int a7);
int FUN_0c01b898(void);
int FUN_0c027028(int a4, int a5);
int FUN_0c067d4c(int a4);
int FUN_0c09e7fc(int a4, int a5, int a6);
int FUN_0c10a7e0(int a4, int a5, int a6);
int FUN_0c01fa70(int a4);
int FUN_0c0239b6(int a4, int a5);
int FUN_0c02565a(int a4, int a5, int a6, int a7);
int FUN_0c0255ae(int a4, int a5, int a6, int a7);
int FUN_0c053720(int a4);
int FUN_0c018538(void);
int FUN_0c020be0(int a4, int a5, int a6, int a7);
int FUN_0c02c95c(int a4, int a5);

int FUN_0c029ec4(void)
{
    register int t0;
    register int t2;
    register int t6;
    register int t4;
    register int t1;

    t0 = 0x5;
    for (;;) {
        t2 = FUN_0c059132(0x5, 0x1, 0xA);
        t6 = t2;
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x10)) = 0xC029BC0;
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned char *)((t2 + 0x3)) = 0x2;
            *(unsigned char *)((t2 + 0x1)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0xF;
            *(unsigned char *)((t2 + 0x5)) = 0x0;
            (((struct o28_float *)(t2))->v) = 0.0f;
            (((struct o24_float *)(t2))->v) = 0.0f;
            (((struct o20_float *)(t2))->v) = 0.0f;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            *(unsigned int *)((t2 + 0x30)) = 0x0;
            *(unsigned int *)((t2 + 0x2C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                if ((int)t1 >= (int)(*(signed char *)((t2 + 0x2DC)))) {
                    break;
                }
                t4 = *(int *)((((t1 << 2) + (0x2E0 + t2)) + 0x0));
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                *(unsigned char *)((t4 + 0x1)) = 0x0;
                *(unsigned short *)((t4 + 0x2)) = 0x1F;
                FUN_0c06233a(t4, 0xC6649E8, 0x49);
                t1 = (t1 + 0x1);
            }
            t6 = 0x2DC;
        }
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t6;
}

int FUN_0c096bac(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((((((struct o2DC_int *)(a4))->v)) & 48) != 0) {
        t0 = FUN_0c096a64(a4);
        if ((signed char)t0 != 1) {
            if ((signed char)t0 != 2) {
                FUN_0c09a910(a4);
                FUN_0c09d990(a4);
                if (((((struct oF2_short *)(a4))->v)) == 0) {
                    t0 = *(signed char *)((a4 + 0x27C));
                    *(volatile signed char *)((a4 + 0x3));
                    return ((int (*)(int, int, int, int))(0xC096C52))(a4, t0, 0x0, a7);
                }
                return ((int (*)(void))(0xC096C5C))();
            }
            *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
            return FUN_0c0a2e26(a4, 0x5, 0x5);
        }
        return FUN_0c0a2e26(a4, 0x6, 0x0);
    }
    FUN_0c09a808(a4, 0x2, 0xD8);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int FUN_0c0ae9e4(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE9D4;
        *(unsigned char *)((t0 + 0x4)) = 0x8;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t11 = 0xF;
    }
    return t11;
}

int FUN_0c02cc18(float f4)
{
    register int t0;
    register int t1;

    FUN_0c05fb58(0x19, f4);
    t0 = *(signed char *)0xC7F2665;
    t1 = t0;
    if (t0 != 0) {
        FUN_0c0e1550(0x1);
        nlUnitMatrix();
        FUN_0c02cb4a(((((struct o0_int *)0xC7F294C)->v)));
        nlObjPutUseViewMatrix(((((struct o0_int *)0xC7F294C)->v)));
        t0 = 0x0;
        for (;;) {
            if ((int)(*(int *)(((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))) + 0x0))) >= 0) {
                FUN_0c02cb4a((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))));
                nlObjPutUseViewMatrix((*(int *)((((*(signed char *)(((0xC7F2941 + t0) + 0x0))) << 2) + (0xC7F2950 + ((t0 << 2) << 1))))));
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = (((struct o24_int *)0xC7F294C)->v);
        t1 = 0x30C;
        if ((int)(*(int *)((t0 + 0x0))) >= 0) {
            FUN_0c02cb4a(t0);
            t1 = (nlObjPutUseViewMatrix(((((struct o24_int *)0xC7F294C)->v))));
        }
    }
    return t1;
}

float FUN_0c09d8ec(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u1 = FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    u2 = (((((struct o0_float *)0xC7F31E4)->v)) * u0);
    u3 = (((((struct o8_float *)0xC7F31E4)->v)) * u1);
    u4 = (u1 * u1);
    u4 = u4 + u0 * u0;
    u0 = FUN_0c0df340(u4);
    u1 = (((struct o0_float *)0xC7F31E4)->v);
    u4 = (((struct o8_float *)0xC7F31E4)->v);
    u5 = (u4 * u4);
    u5 = u5 + u1 * u1;
    u1 = FUN_0c0df340(u5);
    if (((u2 + u3) / (u0 * u1)) > 0.0f) {
        (((struct o71EE_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o71EE_uchar *)(a4))->v) = 0x1;
    }
    return u1;
}

int FUN_0c0aca24(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0ACAC8;
        *(unsigned char *)((t0 + 0x4)) = 0x3;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1;
        t11 = 0x1;
    }
    return t11;
}

int FUN_0c0ac900(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t3;
    register int t5;
    register int t9;
    register int t4;
    register int t6;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = FUN_0c059132(0x2, 0x1, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AC9A4;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x1);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        (((struct o105_uchar *)(t7))->v) = t6;
        (((struct o106_uchar *)(t7))->v) = t6;
        (((struct o107_uchar *)(t7))->v) = 0x0;
        (((struct o2D9_uchar *)(t7))->v) = t6;
        (((struct o118_uint *)(t7))->v) = 0x0;
        *(unsigned int *)((t7 + 0x1C)) = (*(int *)(((int)stk + 0)));
        t9 = *(signed char *)(((int)stk + 4));
        (((struct oEC_ushort *)(t7))->v) = (*(signed char *)(((((t9 << 2) << 2) + 0xC152D98) + 0x0)));
        (((struct o101_uchar *)(t7))->v) = 0x0;
        (((struct o102_uchar *)(t7))->v) = (*(signed char *)(((((t9 << 2) << 2) + 0xC152D98) + 0x1)));
        t13 = (((int (*)(int, int, int))(FUN_0c0e6fe8))(t7, (((t9 << 2) << 2) + 0xC152D98), 0x0));
    }
    return t13;
}

int FUN_0c0ffdfc(void)
{
    (((struct o0_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0x900, 0xC0FFC30, ((((struct o0_int *)0xC15B03C)->v)), 0x0));
    (((struct o4_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA00, 0xC0FFC72, ((((struct o4_int *)0xC15B03C)->v)), 0x0));
    (((struct o8_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA00, 0xC0FFD90, ((((struct o8_int *)0xC15B03C)->v)), 0x0));
    (((struct oC_uint *)0xC8051B8)->v) = (FUN_0c0ff1ac(0xA20, 0xC0FFD98, ((((struct oC_int *)0xC15B03C)->v)), 0x0));
    *(unsigned int *)0xC8054C0 = 0x0;
    (((struct o0_uint *)0xC80570C)->v) = 0x0;
    (((struct o8_uint *)0xC80570C)->v) = 0x0;
    (((struct oC_uint *)0xC80570C)->v) = 0x0;
    (((struct o10_uint *)0xC80570C)->v) = 0x0;
    (((struct o18_uint *)0xC80570C)->v) = 0x0;
    (((struct o14_uint *)0xC80570C)->v) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC80570C)->v) = 0x0;
    (((struct o30_uint *)0xC80570C)->v) = 0x0;
    (((struct o34_uint *)0xC80570C)->v) = 0x0;
    memset(0xC805488, 0x0, 0x38);
    memset(0xC805248, 0x0, 0x240);
    memset(0xC8054C8, 0x0, 0x240);
    return (memset(0xC8051C8, 0x0, 0x80));
}

int FUN_0c109020(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o0_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o1C_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o14_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            FUN_0c10aa80(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = 0xC8174A8;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t1 = (t1 + 0x2);
        t0 = (t0 + 0x18);
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x18);
        if ((int)t1 >= (int)0x1000) {
            break;
        }
    }
    (((struct o0_uint *)0xC347648)->v) = 0x0;
    (((struct o4_uint *)0xC347648)->v) = 0x0;
    (((struct o8_uint *)0xC347648)->v) = 0x0;
    (((struct oC_uint *)0xC347648)->v) = 0x0;
    (((struct o10_uint *)0xC347648)->v) = 0x0;
    (((struct o14_uint *)0xC347648)->v) = 0x0;
    (((struct o18_uint *)0xC347648)->v) = 0x0;
    (((struct o1C_uint *)0xC347648)->v) = 0x0;
    (((struct o20_uint *)0xC347648)->v) = 0x0;
    (((struct o24_uint *)0xC347648)->v) = 0x0;
    t0 = (((struct o28_int *)0xC347648)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x4));
            FUN_0c10b3e0(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    (((struct o28_uint *)0xC347648)->v) = 0x0;
    return 0x0;
}

int FUN_0c0149d4(int a4)
{
    int stk[1];
    register int t0;
    register int t12;
    register int t4;
    register int t5;
    register int t6;
    register int t9;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x5;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((0xC17E888 + ((*(signed char *)((t0 + 0x3))) << 2))));
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t4 = 0x0;
        t5 = 0xC17E8D0;
        t6 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x2)) = 0x41F;
            t9 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            t11 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + t6) + 0x0))), 0xC6649D0, t9);
            t4 = (t4 + 0x1);
            t6 = (t6 + 0x4);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t12 = t11;
    }
    return t12;
}

int FUN_0c01d254(int a4)
{
    int stk[16];
    register int t0;
    register int t19;

    t0 = *(int *)(((0x308 + a4) + 0x4));
    *(float *)(((int)stk + 12)) = (((((struct o20_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x4))));
    *(float *)(((int)stk + 16)) = (((((struct o24_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x6))));
    *(float *)(((int)stk + 20)) = ((((struct o28_float *)(a4))->v));
    *(float *)(((int)stk + 24)) = ((((struct o50_float *)(a4))->v));
    *(float *)(((int)stk + 28)) = ((((struct o54_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 48)) = (*(int *)((a4 + 0x34)));
    *(float *)(((int)stk + 52)) = ((((struct o308_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 60)) = (unsigned short)(*(short *)((t0 + 0x2)));
    if ((int)(unsigned short)(*(int *)((a4 + 0x30))) < (int)0x4000) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        *(volatile signed char *)((t0 + 0x1));
        t19 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE98, (unsigned char)(*(signed char *)((t0 + 0x0)))));
    } else {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x1;
        *(volatile signed char *)((t0 + 0x1));
        t19 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FE98, (unsigned char)(*(signed char *)((t0 + 0x0)))));
    }
    return t19;
}

int FUN_0c019d1c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC362329;
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = FUN_0c01a3ee(0x80);
            if ((signed char)t0 != 0) {
                FUN_0c0a3796(0x0, 0x4C);
                *(volatile signed char *)0xC36232F;
                *(volatile signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)));
                (((struct o7_uchar *)0xC362328)->v) = (FUN_0c0e6e5c());
            } else {
                t0 = FUN_0c01a3ee(0x40);
                if ((signed char)t0 != 0) {
                    FUN_0c0a3796(0x0, 0x4C);
                    t0 = *(signed char *)0xC36232F;
                    (((struct o7_uchar *)0xC362328)->v) = (t0 - 1);
                    if ((int)(signed char)(t0 - 1) < 0) {
                        (((struct o7_uchar *)0xC362328)->v) = ((*(signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)))) - 1);
                    }
                }
            }
            t0 = FUN_0c01a3ee(0x2);
            t2 = (signed char)t0;
            if ((signed char)t0 != 0) {
                FUN_0c0a3796(0x0, 0x4D);
                (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) - 1);
                (((struct o3_uchar *)0xC362328)->v) = 0x0;
                (((struct o2_uchar *)0xC362328)->v) = 0x0;
                (((struct o1_uchar *)0xC362328)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o1_uchar *)0xC362328)->v) = ((*(signed char *)0xC362329) + 0x1);
        (((struct o7_uchar *)0xC362328)->v) = 0x0;
        FUN_0c01a3c2(0x1, a5, a6, a7);
        FUN_0c019f62(0xE);
        t1 = FUN_0c01a3ee(0x80);
        if ((signed char)t1 != 0) {
            FUN_0c0a3796(0x0, 0x4C);
            *(volatile signed char *)0xC36232F;
            *(volatile signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)));
            (((struct o7_uchar *)0xC362328)->v) = (FUN_0c0e6e5c());
        } else {
            t1 = FUN_0c01a3ee(0x40);
            if ((signed char)t1 != 0) {
                FUN_0c0a3796(0x0, 0x4C);
                t1 = *(signed char *)0xC36232F;
                (((struct o7_uchar *)0xC362328)->v) = (t1 - 1);
                if ((int)(signed char)(t1 - 1) < 0) {
                    (((struct o7_uchar *)0xC362328)->v) = ((*(signed char *)((0xC17FEB0 + (*(signed char *)0xC36232E)))) - 1);
                }
            }
        }
        t1 = FUN_0c01a3ee(0x2);
        t2 = (signed char)t1;
        if ((signed char)t1 != 0) {
            FUN_0c0a3796(0x0, 0x4D);
            (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) - 1);
            (((struct o3_uchar *)0xC362328)->v) = 0x0;
            (((struct o2_uchar *)0xC362328)->v) = 0x0;
            (((struct o1_uchar *)0xC362328)->v) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c02a9bc(float f4)
{
    register int t0;

    if (240.0f > f4) {
        t0 = FUN_0c059132(0x5, 0x1, 0x1);
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x10)) = 0xC02A784;
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x3)) = 0x2;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x1F;
            *(unsigned char *)((t0 + 0x5)) = 0x0;
            (((struct o24_float *)(t0))->v) = f4;
            (((struct o28_float *)(t0))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x34)) = 0x0;
            *(unsigned int *)((t0 + 0x30)) = 0x0;
            *(unsigned int *)((t0 + 0x2C)) = 0x0;
            return ((int (*)(void))(0xC02AA82))();
        }
        return t0;
    }
    return 0xC02AA50;
}

int FUN_0c02bcba(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2F08;
    if (((unsigned char)t0 != 0) && (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3)))) {
        *(volatile int *)0xC321184;
        FUN_0c02d9e0();
        FUN_0c02d9e0();
        *(volatile int *)0xC321188;
    } else {
        *(volatile int *)0xC321180;
    }
    FUN_0c02d9e0();
    return (FUN_0c02d9e0());
}

int FUN_0c02f258(void)
{
    int stk[18];
    register int t2;
    register int t6;

    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (((((struct o0_float *)0xC366A74)->v)) + -6.0f);
    *(float *)(((int)stk + 28)) = 7.79999971f;
    *(unsigned int *)(((int)stk + 68)) = 0x5;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(float *)(((int)stk + 60)) = ((((struct o10_float *)0xC366A74)->v));
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x0;
    t2 = *(signed char *)0xC7E40C8;
    FUN_0c027fa4((((int)stk + 8) + 0x8), ((unsigned char)(((t2 << 1) + t2) << 2) + 0xC17FDC8), 0x0);
    *(float *)(((int)stk + 20)) = 544.0f;
    *(float *)(((int)stk + 60)) = ((((struct o14_float *)0xC366A74)->v));
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x1;
    t6 = *(signed char *)0xC7EB398;
    return (FUN_0c027fa4((((int)stk + 0) + 0x10), ((unsigned char)(((t6 << 1) + t6) << 2) + 0xC17FDC8), 0x0));
}

int FUN_0c05f4cc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[3];
    register int t7;
    register int t18;
    register int t29;
    register int t43;
    register int t53;
    register int t63;
    int t3;
    int t40;
    int t42;

    *(unsigned char *)(((int)stk + 8)) = a5;
    t53 = *(int *)((((short)a6 << 2) + 0xC336500));
    if ((*(signed char *)0xC383808) == 3) {
        *(unsigned char *)0xC383808 = 0x4;
        if (((*(signed char *)0xC7F3478) != 0) && (t3 = *(signed char *)0xC7F3479, (int)(unsigned char)a4 < (int)(unsigned char)t3)) {
            *(unsigned char *)0xC383808 = 0x3;
            if ((*(signed char *)0xC7F33E8) != 0) {
                t63 = 0x0;
                if ((int)(unsigned char)a4 >= (int)(unsigned char)(*(signed char *)0xC7F33E9)) {
                    t7 = t53;
                    *(int *)((int)stk + 4) = t7;
                    *(int *)((int)stk + 0) = a8;
                    t63 = (FUN_0c05ef02((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t7));
                }
            } else {
                t18 = t53;
                *(int *)((int)stk + 4) = t18;
                *(int *)((int)stk + 0) = a8;
                t63 = (FUN_0c05ef02((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t18));
            }
        } else {
            t29 = t53;
            *(int *)((int)stk + 4) = t29;
            *(int *)((int)stk + 0) = a8;
            t63 = (FUN_0c05ef02((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t29));
        }
    } else {
        *(unsigned char *)0xC383808 = 0x3;
        if (((*(signed char *)0xC7F33E8) != 0) && (t40 = *(signed char *)0xC7F33E9, (int)(unsigned char)a4 < (int)(unsigned char)t40)) {
            *(unsigned char *)0xC383808 = 0x4;
            t63 = 0x0;
            if (((*(signed char *)0xC7F3478) != 0) && (t42 = *(signed char *)0xC7F3479, (int)(unsigned char)a4 < (int)(unsigned char)t42)) {
            } else {
                t43 = t53;
                *(int *)((int)stk + 4) = t43;
                *(int *)((int)stk + 0) = a8;
                t63 = (FUN_0c05ef02((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t43));
            }
        } else {
            *(int *)((int)stk + 4) = t53;
            *(int *)((int)stk + 0) = a8;
            t63 = (FUN_0c05ef02((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t53));
        }
    }
    return t63;
}

int FUN_0c0b51cc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5180;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC664958, ((((struct oF2_short *)((*(int *)((t0 + 0x1C)))))->v)));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x21F;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o4C_float *)(t2))->v) = 0.5f;
        t1 = 0x4C;
    }
    return t1;
}

int FUN_0c0fd496(int a4, int a5, int a6, Stk2 s)
{
    int stk[14];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t27;
    register int t28;
    register int t29;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    t0 = FUN_0c0fcea0(a6, a6);
    if ((int)a6 <= (int)0x2) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), (*(int *)((a4 + 0x1C))), 0x8);
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)((a5 + 0x0)));
        } else {
            t4 = ((((int)stk + 4) + 0x4) + 0x4);
            t5 = 0x0;
            t6 = a5;
            for (;;) {
                t7 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x2);
                *(unsigned char *)((t4 + 0x0)) = t7;
                t4 = (t4 + 0x1);
                t8 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                *(unsigned char *)((t4 + 0x0)) = t8;
                t4 = (t4 + 0x1);
                if ((int)t5 >= (int)0x4) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
        FUN_0c0fddce((((int)stk + 4) + 0x4));
        FUN_0c0fddce(((((int)stk + 4) + 0x4) + 0x20));
        t27 = (*(int *)(((int)stk + 4)));
        t28 = (((int)stk + 4) + 0x4);
        t29 = 0x8;
    } else {
        t29 = *(int *)(((t0 << 2) + 0xC15AC5C));
        *(unsigned int *)(((int)stk + 4)) = a5;
        t27 = ((*(int *)(((t0 << 2) + 0xC15AC30))) + (*(int *)((a4 + 0x1C))));
        t28 = a5;
    }
    kmiCopyToFrameBuffer(t27, t28, t29);
    return 0x0;
}

int FUN_0c01ee40(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x31));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 5) {
                    if (t0 != 6) {
                        if (t0 != 7) {
                            if (t0 != 8) {
                                if (t0 != 17) {
                                    return t0;
                                }
                                t0 = FUN_0c01fb0c();
                                if ((int)(signed char)t0 >= 0) {
                                    return FUN_0c01f0e4(a4);
                                }
                                return (signed char)t0;
                            }
                            return FUN_0c01f28e(a4, a5, a6, a7);
                        }
                        (((struct o0_uchar *)0xC362A50)->v) = (*(signed char *)((a4 + 0x2F)));
                        return 0x2F;
                    }
                    return FUN_0c01f1f6(a4, a5, a6, a7);
                }
                t0 = FUN_0c01fb0c();
                if ((int)(signed char)t0 >= 0) {
                    return FUN_0c01f19e(a4);
                }
                return (signed char)t0;
            }
            t0 = FUN_0c01fb0c();
            if ((int)(signed char)t0 >= 0) {
                return FUN_0c01f0e4(a4);
            }
            return (signed char)t0;
        }
        t0 = FUN_0c01fb0c();
        t1 = (signed char)t0;
        if ((int)(signed char)t0 >= 0) {
            (((struct o2_uchar *)0xC362A50)->v) = 0x2;
            (((struct o3_uchar *)0xC362A50)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    
    return (signed char)(FUN_0c01fb0c());
}

int FUN_0c026f78(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t14;
    register int t21;

    t4 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    *(unsigned short *)(((int)stk + 0)) = ((~(*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2)))) & (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t5 = *(short *)(((int)stk + 0));
    t6 = 0x0;
    if ((0x400 & (unsigned short)t5) != 0) {
        t6 = 0x1;
    }
    t8 = t6;
    if ((0x4 & (unsigned short)t5) != 0) {
        t8 = (t6 + 0x1);
    }
    t10 = t8;
    if (((unsigned short)t5 & 0x2) != 0) {
        t10 = (t8 + 0x1);
    }
    if ((int)(unsigned short)t10 > (int)0x2) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t4 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t4 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t4 + 0x10);
        t21 = 0x0;
    } else {
        t14 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t14 - 1);
        if ((short)(t14 - 1) == 0) {
            *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
        }
        t21 = 0x1;
    }
    return t21;
}

int FUN_0c02a6c4(void)
{
    register int t0;
    register int t5;
    register int t1;
    register int t3;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC02A6AC;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 4.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned char *)((t3 + 0x1)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            FUN_0c06233a(t3, 0xC6649E8, 0x57);
            t1 = (t1 + 0x1);
        }
        (((struct oEC_ushort *)(t0))->v) = 0x2;
        t5 = 0xEC;
    }
    return t5;
}

int FUN_0c03c5c0(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t8;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03C6B2;
        *(unsigned char *)((t0 + 0x4)) = a5;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x26);
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x30;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        t8 = (((struct o2E0_int *)(t0))->v);
        (((struct o24_float *)(t8))->v) = 1.0f;
        (((struct o20_float *)(t8))->v) = 1.0f;
        (((struct o1C_float *)(t8))->v) = 1.0f;
        t9 = 0x1C;
    }
    return t9;
}

int FUN_0c053680(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t2 = *(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x0));
        t3 = *(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2));
        t4 = *(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0));
        t1 = *(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x2));
        t6 = (t3 + t1);
        if ((int)((*(short *)(((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4))) + (*(short *)((((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6) + 0x4)))) >= (int)0x3C) {
            t6 = ((t3 + t1) + 0x1);
        }
        t3 = (t4 + t2);
        if ((int)t6 >= (int)0x3C) {
            t3 = ((t4 + t2) + 0x1);
        }
        if ((int)t3 < (int)0x3C) {
            t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C));
            *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = (t2 + 0x1);
            t3 = (short)(t2 + 0x1);
            if ((short)(t2 + 0x1) == 60) {
                *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = 0x0;
                t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A));
                *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = (t2 + 0x1);
                t4 = (short)(t2 + 0x1);
                if ((short)(t2 + 0x1) == 60) {
                    *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = 0x0;
                    t2 = *(short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18));
                    *(unsigned short *)((((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18)) = (t2 + 0x1);
                    t4 = (t2 + 0x1);
                }
                t3 = t4;
            }
            t1 = t3;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c0c69e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t4 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    if (((*(signed char *)((t4 + 0x71A4))) == 1) && ((t0 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t0 == 104) || ((t1 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t1 == 105) || ((t2 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t2 == 112) || (t3 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t3 == 113))))) {
    } else {
        *(unsigned char *)((a4 + 0x9)) = 0x4;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
        *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
        (((struct o105_uchar *)(a4))->v) = 0x1;
        u0 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
        u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
        (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 30.0f));
        u0 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
        u1 = (u0 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
        t5 = 0x1;
    }
    return t5;
}

int nlLookAt(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register float u15;
    register float u16;
    register float t17;

    if ((unsigned short)a6 != 0) {
        nlRotateAZ((unsigned short)a6, f4, f5);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    u10 = (((struct o8_float *)(a5))->v);
    u11 = (((struct o8_float *)(a4))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u10 - u11);
    u12 = *(float *)((((int)stk + 0) + 0x0));
    u13 = ((u10 - u11) * (u10 - u11));
    u13 = u13 + u12 * u12;
    t14 = FUN_0c0df700(u13);
    u15 = (((struct o4_float *)(((int)stk + 0)))->v);
    u16 = u13;
    u16 = u16 + u15 * u15;
    t17 = FUN_0c0df700(u16);
    nlRotateXSC((-(((((struct o4_float *)(((int)stk + 0)))->v)) * t17)), (t17 / t14));
    nlRotateYSC(((*(float *)((((int)stk + 0) + 0x0))) * t14), (-(((((struct o8_float *)(((int)stk + 0)))->v)) * t14)));
    return (FUN_0c0e2120(a4));
}

int check_caps(int a4)
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
    int t9;
    register int t10;
    register int t11;

    t10 = *(int *)((a4 + 0x1C));
    t11 = *(int *)((t10 + 0x0));
    if (((int)t11 >= (int)0x1) && (((int)t11 <= (int)0x7FF) && ((t0 = *(int *)((t10 + 0x0)), t1 = *(int *)((t10 + 0x8)), t0 == t1) && ((t2 = *(int *)((t10 + 0xC)), (int)t2 >= 0) && ((t3 = *(int *)((t10 + 0x0)), (int)t2 < (int)t3) && ((t4 = *(int *)((t10 + 0x14)), (int)t4 >= 0) && ((t5 = *(int *)((t10 + 0x0)), (int)t4 < (int)t5) && ((t6 = *(int *)((t10 + 0x34)), (int)t6 >= 0) && ((t7 = *(int *)((t10 + 0x0)), (int)t6 <= (int)t7) && ((t8 = *(int *)((t10 + 0x38)), (int)t8 >= 0) && (t9 = *(int *)((t10 + 0x0)), (int)t8 <= (int)t9))))))))))) {
        if ((*(int *)(((*(int *)0xC80DBC4) + 0x8))) == 0) {
            if ((int)(*(short *)((a4 + 0x10))) >= (int)(*(int *)((t10 + 0x10)))) {
                if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(int *)((t10 + 0x18)))) {
                    t0 = *(int *)((t10 + 0x0));
                    if (t0 != 0xFF) {
                        if (t0 != 0x1FF) {
                            if (t0 != 0x3FF) {
                                if (t0 != 0x7FF) {
                                    return 0xFFFFFFFF;
                                }
                                *(unsigned int *)((a4 + 0x4)) = 0x3;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x4)) = 0x2;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                        return 0x0;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x0;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        t0 = *(int *)((t10 + 0x0));
        if (t0 != 0xFF) {
            if (t0 != 0x1FF) {
                if (t0 != 0x3FF) {
                    if (t0 != 0x7FF) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x4)) = 0x2;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int write_fat(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = write_fat_1(a4);
        if (t1 != 0xFFFFFF01) {
            if (t1 != 0xFFFFFF40) {
                break;
            }
            t0 = (search_subst_fat_top(a4));
            if ((int)t0 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC)) = t0;
            t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x46, t0, a7);
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x10)))) {
                    break;
                }
                set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0xC))) + t0), 0xFFFA);
                t0 = (t0 + 0x1);
            }
            t0 = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if (t0 != 0) {
        write_sys(a4);
    }
    return 0x0;
}

int FUN_0c01b898(void)
{
    register int t0;
    register int t11;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01B82E;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664AC0, (*(signed char *)(((((*(signed char *)((t0 + 0x4))) << 2) << 2) + 0xC11C26C))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        *(volatile int *)((t0 + 0x2E0));
        *(volatile signed char *)((t0 + 0x4));
        t11 = (FUN_0c0e6fe8());
    }
    return t11;
}

int FUN_0c027028(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t5;
    register int t14;

    *(unsigned short *)(((int)stk + 0)) = ((~(*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x2)))) & (*(short *)((((((unsigned char)a4 << 2) << 1) + 0xC362A90) + 0x0))));
    t4 = *(short *)(((int)stk + 0));
    t5 = *(int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4));
    if (((unsigned short)(*(short *)((t5 + 0x8))) & (unsigned short)t4) == (unsigned short)(*(short *)((t5 + 0x6)))) {
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x0)) = (*(short *)(((t5 + 0x10) + 0x0)));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (*(short *)(((t5 + 0x10) + 0x2)));
        *(unsigned int *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x4)) = (t5 + 0x10);
        return 0x0;
    }
    if (((unsigned short)t4 & (unsigned short)(*(short *)((t5 + 0xC)))) != (unsigned short)(*(short *)((t5 + 0xA)))) {
        t14 = *(short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2));
        *(unsigned short *)(((((short)((short)(unsigned char)a4 * (short)0x1E0) + 0xC362AB0) + (short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2)) + 0x2)) = (t14 - 1);
        if ((short)(t14 - 1) == 0) {
            *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
        }
    } else {
        *(unsigned short *)((((short)((((unsigned char)a5 << 1) + (unsigned char)a5) << 2) + (0xC362AB0 + (short)((short)(unsigned char)a4 * (short)0x1E0))) + 0x0)) = 0x0;
    }
    return 0x1;
}

int FUN_0c067d4c(int a4)
{
    int stk[3];
    register int t0;
    register int t25;
    register int t6;
    register float u9;
    register float u16;
    register float u21;

    t0 = *(int *)0xC7F307C;
    t25 = t0;
    if ((t0 & 7) != 0) {
        FUN_0c0df940();
        
        t6 = FUN_0c0e6f24();
        u9 = (float)t6;
        if ((int)t6 < 0) {
            u9 = ((float)t6 + 4.2949673e+09f);
        }
        u16 = ((((struct o20_float *)(a4))->v));
        u16 = u16 + ((u9 + 100.0f)) * (FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 0)) = u16;
        u21 = ((((struct o28_float *)(a4))->v));
        u21 = u21 + ((u9 + 100.0f)) * (FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 8)) = u21;
        *(float *)(((int)stk + 4)) = ((((struct o2D4_float *)(a4))->v));
        t25 = (FUN_0c0428ca((*(signed char *)((a4 + 0x3))), ((int)stk + 0)));
    }
    return t25;
}

int FUN_0c09e7fc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c09c6b8(a4, a5, a6);
    t1 = (((struct o2FE_short *)(a4))->v);
    t2 = 0x1;
    if ((((int)(unsigned short)t1 <= (int)0xF) || ((int)(unsigned short)t1 >= (int)0x28)) && (((signed char)t0 == 0) || (((signed char)t0 == 5) || (((signed char)t0 == 6) || (((signed char)t0 == 7) || (((signed char)t0 == 8) || (((signed char)t0 == 13) || ((signed char)t0 == 14)))))))) {
        t0 = 0x0;
        if ((*(signed char *)((a4 + 0x72AD))) != 0) {
            t1 = 0x1;
            if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
                t1 = FUN_0c09db78(a4);
                t4 = *(short *)0xC7F31E0;
                t5 = FUN_0c09ddfe(a4);
                t6 = (unsigned short)((t1 - t4) - t5);
                if ((0x8000 & (unsigned short)((t1 - t4) - t5)) != 0) {
                    t6 = ((unsigned short)((t1 - t4) - t5) | 0xFFFF0000);
                }
                t1 = 0x0;
                if (((int)t6 > (int)0xFFFFA000) && ((int)t6 < (int)0x6000)) {
                    t1 = 0x1;
                }
            }
            t0 = t1;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c10a7e0(int a4, int a5, int a6)
{
    int stk[3];
    register int t43;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t3;
    register int t11;
    register int t12;
    int t13;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register int t22;
    int t25;
    register int t26;
    register int t27;
    register int t28;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t9 = *(int *)(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648));
    t8 = (((struct o0_int *)0xC347634)->v);
    t43 = 0x0;
    if (t9 != 0) {
        t2 = 0xC347648;
        t4 = a4;
        t5 = a5;
        t6 = a6;
        t7 = 0x0;
        for (;;) {
            t10 = *(short *)((t9 + 0x0));
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x180, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 4)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = ((((struct o8_int *)0xC347634)->v));
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 0);
                t2 = (FUN_0c10a8a0(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)(((int)stk + 8)), t26 = *(int *)((t2 + 0x14)), t4 = t26, t27 = *(int *)((t25 + 0x18)), t3 = t27, t28 = *(int *)((t4 + 0x18)), t4 = t28, t4 == t3)) {
                    t8 = (*(int *)((t9 + 0x10)));
                    t7 = t9;
                    t33 = t3;
                    t34 = t4;
                }
            } else {
                t33 = t3;
                t34 = t4;
                t37 = t5;
                t38 = t6;
            }
            t3 = t33;
            t9 = (*(int *)((t9 + 0x8)));
            t4 = t34;
            t5 = t37;
            t6 = t38;
            if (t9 == 0) {
                break;
            }
        }
        t43 = t7;
    }
    return t43;
}

int FUN_0c01fa70(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = FUN_0c010774();
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t2 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0xC)) = t0;
        if ((t0 & ((int)0x1 << (int)t2)) == 0) {
            t0 = 0x0;
            if ((*(signed char *)((a4 + 0x31))) != 2) {
                (((struct o2D_uchar *)0xC362A54)->v) = 0x2;
                (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                t0 = 0x1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c0107f4();
            *(unsigned int *)((a4 + 0x14)) = t0;
            t4 = FUN_0c010964();
            *(unsigned int *)((a4 + 0x10)) = t4;
            if ((t0 & ((int)0x1 << (int)t2)) != 0) {
                t1 = 0x0;
                if ((*(signed char *)((a4 + 0x31))) != 5) {
                    (((struct o2D_uchar *)0xC362A54)->v) = 0x5;
                    (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                    t1 = 0x1;
                }
            } else {
                if (((t4 & ((int)0x1 << (int)t2)) != 0) && ((t0 & ((int)0x1 << (int)t2)) == 0)) {
                    t0 = 0x0;
                    if ((*(signed char *)((a4 + 0x31))) != 4) {
                        (((struct o2D_uchar *)0xC362A54)->v) = 0x4;
                        (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                        t0 = 0x1;
                    }
                    t2 = t0;
                } else {
                    t0 = 0x0;
                    if ((*(signed char *)((a4 + 0x31))) == 3) {
                    } else {
                        (((struct o2D_uchar *)0xC362A54)->v) = 0x3;
                        (((struct o0_uchar *)0xC362A54)->v) = 0x0;
                        t0 = 0x1;
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
        }
    }
    return t1;
}

int FUN_0c0239b6(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t28;
    float u19;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a5))->v);
    u13 = (((struct o10_float *)(a4))->v);
    u14 = (((struct o4_float *)(a4))->v);
    u15 = (((struct o4_float *)(a5))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    t28 = 0x8;
    if (!(((u13 + u12) - u16) > (*(float *)((((int)stk + 0) + 0x0)))) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(((u13 + u12) - u16) > u19))) {
        t28 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t28 = 0x3;
        }
    }
    return t28;
}

int FUN_0c02565a(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC0256F6))(a4, a5, a6, a7);
}

int FUN_0c0255ae(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC02564A))(a4, a5, a6, a7);
}

int FUN_0c053720(int a4)
{
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x4))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0xA))));
    if ((int)(*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16))) >= (int)0x3C) {
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x16))) - 60);
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) + 0x1);
    }
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x2))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x8))));
    if ((int)(*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) >= (int)0x3C) {
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x14))) - 60);
        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12)) = ((*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12))) + 0x1);
    }
    *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0)) = ((*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x0))) + (*(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x12) + 0x6))));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x18)) = 0x0;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1A)) = 0x0;
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c018538(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC7F470C;
    (((struct o0_uchar *)0xC3622C2)->v) = t0;
    (((struct o12_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470D;
    (((struct o1_uchar *)0xC3622C2)->v) = t0;
    (((struct o13_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470E;
    (((struct o2_uchar *)0xC3622C2)->v) = t0;
    (((struct o14_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470F;
    (((struct o3_uchar *)0xC3622C2)->v) = t0;
    (((struct o15_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F4710;
    (((struct o4_uchar *)0xC3622C2)->v) = t0;
    (((struct o16_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F4711;
    (((struct o5_uchar *)0xC3622C2)->v) = t0;
    (((struct o17_uchar *)0xC3622C2)->v) = t0;
    t0 = 0x0;
    for (;;) {
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((((0xC7F4714 + ((t0 << 2) << 1)) + t2) + 0x0));
            *(unsigned char *)(((((0xC3622EA + ((t0 << 2) << 2)) + 0x4) + t2) + 0x0)) = t3;
            *(unsigned char *)((t2 + (0xC3622DA + ((t0 << 2) << 1)))) = t3;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        t1 = (0xC3622DA + ((t0 << 2) << 1));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int FUN_0c020be0(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int, float))(0xC020C82))(a4, 0x0, a6, a7, -500.0f);
}

int FUN_0c02c95c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F4727;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = *(signed char *)0xC7F4732;
                t2 = t0;
                if (t0 != 0) {
                    t0 = *(signed char *)0xC7F4733;
                    t2 = t0;
                    if (t0 != 0) {
                        (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                        (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                        (((struct o2_uchar *)0xC7F4727)->v) = 0x1;
                        t2 = 0x1;
                    }
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC7F4732;
            t2 = t1;
            if (t1 != 0) {
                (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
                (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
                (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
        (((struct o1_uchar *)0xC7F4727)->v) = 0x0;
        (((struct o2_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oA_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
        (((struct oC_uchar *)0xC7F4727)->v) = 0x0;
        FUN_0c02bb32(1.0f);
        FUN_0c02c2d0(0x0);
        FUN_0c02c830(0x0);
        FUN_0c02c91a(0x0);
        FUN_0c031496(0xFFFFFFFF, 0x0, 0x0, 0x3C);
        t0 = *(signed char *)0xC7F4732;
        t2 = t0;
        if (t0 != 0) {
            (((struct o0_uchar *)0xC7F4727)->v) = ((*(signed char *)0xC7F4727) + 0x1);
            (((struct o1_uchar *)0xC7F4727)->v) = 0x1;
            (((struct oB_uchar *)0xC7F4727)->v) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}
