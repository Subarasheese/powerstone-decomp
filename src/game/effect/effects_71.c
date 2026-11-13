/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03d8b0-0c03dca8) */

struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);
int thunk_FUN_0c062242(int);

int fx_spawn_03d8b0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t3;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        t3 = 0x21F;
        if ((int)(*(signed char *)(((int)stk + 0))) < (int)0x3) {
            t3 = 0x23F;
        }
        *(unsigned short *)((t0 + 0x6)) = t3;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03D932;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t9 = *(signed char *)((a4 + 0x3));
        t14 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), ((*(signed char *)((t0 + 0x4))) + 0x8)));
    }
    return t14;
}

int fx_tick_03d8b0(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t26;
    register int t29;
    register int t55;
    register float u62;
    register float u66;
    register int t72;
    register float u75;
    register int t83;
    register float u86;
    register int t90;
    register int t92;
    register float t93;
    register float u95;
    register float t96;
    register float u98;
    register int t132;
    register int t135;
    register int t137;
    register int t27;
    int t28;
    register int t133;
    int t134;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x1C));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -0.0249999985f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + -0.0249999985f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + -0.0249999985f);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.049999997f);
                (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.049999997f);
                (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.049999997f);
                if (!(1.0f > ((((struct o60_float *)(a4))->v)))) {
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    (((struct o60_float *)(a4))->v) = 1.0f;
                    (((struct o64_float *)(a4))->v) = 1.0f;
                    (((struct o68_float *)(a4))->v) = 1.0f;
                }
            }
            t26 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t26 - 1);
            if (((short)(t26 - 1) != 0) && ((t27 = *(signed char *)((t1 + 0x71A4)), t27 == 1) && (t28 = *(signed char *)((t1 + 0x71A5)), (unsigned char)t28 == 108))) {
                t137 = (unsigned char)t28;
            } else {
                t29 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t29 + 0x1);
                t137 = (t29 + 0x1);
            }
        } else {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t137 = (obj_destroy(a4, a5, a6, a7));
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((int)(*(signed char *)((a4 + 0x4))) >= (int)0x3) {
            math_rand_float();
            *(unsigned int *)((a4 + 0x30)) = ((((FUN_0c0e6f24()) << 8) << 2) << 2);
        }
        t55 = *(signed char *)((t1 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t55 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -15.0f);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u62 = ((((struct o20_float *)(a4))->v));
        u62 = u62 + 30.0f * (math_sin_angle16((*(int *)((t1 + 0x30)))));
        (((struct o20_float *)(a4))->v) = u62;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u66 = ((((struct o28_float *)(a4))->v));
        u66 = u66 + 30.0f * (math_cos_angle16((*(int *)((t1 + 0x30)))));
        (((struct o28_float *)(a4))->v) = u66;
        math_rand_float();
        t72 = FUN_0c0e6f24();
        u75 = (float)t72;
        if ((int)t72 < 0) {
            u75 = ((float)t72 + 4.2949673e+09f);
        }
        math_rand_float();
        t83 = FUN_0c0e6f24();
        u86 = (float)t83;
        if ((int)t83 < 0) {
            u86 = ((float)t83 + 4.2949673e+09f);
        }
        t90 = (0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f));
        if ((0x8000 & (0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f))) != 0) {
            t90 = ((0xFFFFE000 + (int)((u86 * 65536.0f) / 360.0f)) | 0xFFFF0000);
        }
        t92 = *(int *)((t1 + 0x30));
        t93 = math_sin_angle16(((int)((u75 * 65536.0f) / 360.0f) + 0x2AAB));
        u95 = (t93 * 400.0f);
        (((struct o4_float *)(((int)stk + 4)))->v) = ((math_sin_angle16((unsigned short)(t90 + t92))) * u95);
        t96 = math_cos_angle16(((int)((u75 * 65536.0f) / 360.0f) + 0x2AAB));
        (((struct o4_float *)((((int)stk + 4) + 0x4)))->v) = (t96 * 400.0f);
        u98 = (t93 * 400.0f);
        (((struct o8_float *)((((int)stk + 4) + 0x4)))->v) = ((math_cos_angle16((unsigned short)(t90 + t92))) * u98);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 4)))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
        (((struct o38_float *)(a4))->v) = (-(((((struct o4_float *)(((int)stk + 4)))->v)) / 40.0f));
        (((struct o3C_float *)(a4))->v) = (-(((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)) / 40.0f));
        (((struct o40_float *)(a4))->v) = (-(((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) / 40.0f));
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -0.0249999985f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + -0.0249999985f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + -0.0249999985f);
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.049999997f);
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.049999997f);
            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.049999997f);
            if (!(1.0f > ((((struct o60_float *)(a4))->v)))) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                (((struct o60_float *)(a4))->v) = 1.0f;
                (((struct o64_float *)(a4))->v) = 1.0f;
                (((struct o68_float *)(a4))->v) = 1.0f;
            }
        }
        t132 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t132 - 1);
        if (((short)(t132 - 1) != 0) && ((t133 = *(signed char *)((t1 + 0x71A4)), t133 == 1) && (t134 = *(signed char *)((t1 + 0x71A5)), (unsigned char)t134 == 108))) {
            t137 = (unsigned char)t134;
        } else {
            t135 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t135 + 0x1);
            t137 = (t135 + 0x1);
        }
    }
    return t137;
}
