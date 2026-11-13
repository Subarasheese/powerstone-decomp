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
int obj_destroy(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
int thunk_FUN_0c062242(int, int);

int fx_spawn_03d8b0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t3;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
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

int fx_tick_03d8b0(int a4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t26;
    register int t29;
    register float t45;
    register float u48;
    register int t59;
    register float u66;
    register float u70;
    register float t71;
    register float u74;
    register int t76;
    register float u79;
    register float t82;
    register float u85;
    register int t87;
    register float u90;
    register int t94;
    register int t96;
    register float t97;
    register float u99;
    register float t100;
    register float u102;
    register int t136;
    register int t139;
    register int t141;
    register int t27;
    int t28;
    register int t137;
    int t138;

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
                t141 = (unsigned char)t28;
            } else {
                t29 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t29 + 0x1);
                t141 = (t29 + 0x1);
            }
        } else {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t141 = (obj_destroy(a4));
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((int)(*(signed char *)((a4 + 0x4))) >= (int)0x3) {
            t45 = math_rand_float();
            u48 = (t45 * 255.0f);
            if (!(2.14748365e+09f > (t45 * 255.0f))) {
                u48 = (((t45 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)((a4 + 0x30)) = (((((int)((unsigned int)(int)u48 % (unsigned int)0xF)) << 8) << 2) << 2);
        }
        t59 = *(signed char *)((t1 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t59 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t59 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t59 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (a4 + 0x20));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + -15.0f);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u66 = ((((struct o20_float *)(a4))->v));
        u66 = u66 + 30.0f * (math_sin_angle16((*(int *)((t1 + 0x30)))));
        (((struct o20_float *)(a4))->v) = u66;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u70 = ((((struct o28_float *)(a4))->v));
        u70 = u70 + 30.0f * (math_cos_angle16((*(int *)((t1 + 0x30)))));
        (((struct o28_float *)(a4))->v) = u70;
        t71 = math_rand_float();
        u74 = (t71 * 255.0f);
        if (!(2.14748365e+09f > (t71 * 255.0f))) {
            u74 = (((t71 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t76 = (int)((unsigned int)(int)u74 % (unsigned int)0x3D);
        u79 = (float)t76;
        if ((int)t76 < 0) {
            u79 = ((float)t76 + 4.2949673e+09f);
        }
        t82 = math_rand_float();
        u85 = (t82 * 255.0f);
        if (!(2.14748365e+09f > (t82 * 255.0f))) {
            u85 = (((t82 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t87 = (int)((unsigned int)(int)u85 % (unsigned int)0x5B);
        u90 = (float)t87;
        if ((int)t87 < 0) {
            u90 = ((float)t87 + 4.2949673e+09f);
        }
        t94 = (0xFFFFE000 + (int)((u90 * 65536.0f) / 360.0f));
        if ((0x8000 & (0xFFFFE000 + (int)((u90 * 65536.0f) / 360.0f))) != 0) {
            t94 = ((0xFFFFE000 + (int)((u90 * 65536.0f) / 360.0f)) | 0xFFFF0000);
        }
        t96 = *(int *)((t1 + 0x30));
        t97 = math_sin_angle16(((int)((u79 * 65536.0f) / 360.0f) + 0x2AAB));
        u99 = (t97 * 400.0f);
        (((struct o4_float *)(((int)stk + 4)))->v) = ((math_sin_angle16((unsigned short)(t94 + t96))) * u99);
        t100 = math_cos_angle16(((int)((u79 * 65536.0f) / 360.0f) + 0x2AAB));
        (((struct o4_float *)((((int)stk + 4) + 0x4)))->v) = (t100 * 400.0f);
        u102 = (t97 * 400.0f);
        (((struct o8_float *)((((int)stk + 4) + 0x4)))->v) = ((math_cos_angle16((unsigned short)(t94 + t96))) * u102);
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
        t136 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t136 - 1);
        if (((short)(t136 - 1) != 0) && ((t137 = *(signed char *)((t1 + 0x71A4)), t137 == 1) && (t138 = *(signed char *)((t1 + 0x71A5)), (unsigned char)t138 == 108))) {
            t141 = (unsigned char)t138;
        } else {
            t139 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t139 + 0x1);
            t141 = (t139 + 0x1);
        }
    }
    return t141;
}
