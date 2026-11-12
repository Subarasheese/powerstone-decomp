/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c01e798(void);
int FUN_0c02d4a4(void);
int FUN_0c055562(void);
int FUN_0c058f4e(void);
int FUN_0c059132(int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c06233a(int, int, int);
int FUN_0c0a1e0a(int, int);
int FUN_0c0a2f66(int);
int FUN_0c0a2f7a(void);
int FUN_0c0abd20(int);
extern int FUN_0c0d7ff0();
int FUN_0c0d8348(void);
int FUN_0c0d87aa(int, int, int, int, int, int, int, int);
int FUN_0c0d8e6e(int, int, int);
int FUN_0c0de280(int, int, int, float);
int FUN_0c0e6fe8(void);
int FUN_0c035c84(int a4);
int FUN_0c0416d8(int a4);
int FUN_0c0af148(int a4);
int FUN_0c0d7f30(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);

int FUN_0c035c84(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c059132(0x5, 0x1, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        t2 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t2 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC035D46;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct oEC_ushort *)(t0))->v) = 0x50;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t4 = *(int *)((((0x2E0 + t0) + t3) + 0x0));
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x2)) = 0xF;
            t5 = *(signed char *)(((0x3 + a4) + 0x0));
            FUN_0c06233a(t4, ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), (*(int *)((0xC1496D0 + t3))));
            t2 = (t2 + 0x1);
        }
        t1 = 0x2DC;
    }
    return t1;
}

int FUN_0c0416d8(int a4)
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
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC04179A;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0x4000);
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x4;
        t1 = 0xEE;
    }
    return t1;
}

int FUN_0c0af148(int a4)
{
    register int t0;
    register int t14;

    t0 = FUN_0c059132(0x2, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AF12C;
        *(unsigned char *)((t0 + 0x4)) = 0x4;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = 0x2;
        (((struct o2DA_uchar *)(t0))->v) = 0x1;
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        FUN_0c0a1e0a(t0, (*(signed char *)((a4 + 0x6))));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1;
        t14 = 0x1;
    }
    return t14;
}

int FUN_0c0d7f30(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t25;
    int t2;
    int t24;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t2 = *(signed char *)0xC7F300E, t2 == 0)) {
            t3 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(FUN_0c0d7ff0))(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
            FUN_0c0d87aa(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            FUN_0c05f952();
            FUN_0c055562();
        }
        return FUN_0c02d4a4();
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
    FUN_0c058f4e();
    FUN_0c0d8348();
    FUN_0c05f2d4(0x3, 0x0);
    FUN_0c01e798();
    FUN_0c0a2f7a();
    FUN_0c0a2f66(0x0);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x3);
    FUN_0c0a2f66(0x4);
    FUN_0c0d8e6e(0x1C, 0x0, 0xF0);
    if (((*(signed char *)0xC7F300B) == 0) && (t24 = *(signed char *)0xC7F300E, t24 == 0)) {
        t25 = ((int (*)(void))(FUN_0c0d7ff0))();
        FUN_0c0d87aa(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        FUN_0c05f952();
        FUN_0c055562();
    }
    return FUN_0c02d4a4();
}
