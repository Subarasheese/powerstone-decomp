/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03af38-0c03b1ec) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int math_rand_next(void);
int FUN_0c0e6e5c(void);

int fx_spawn_03af38(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t18;
    register int t3;
    register int t5;
    register int t7;
    register int t10;
    register int t13;
    register int t14;
    register int t16;
    register int t4;
    register int t6;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0xA);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned short *)((t0 + 0x6)) = 0x405;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        *(volatile int *)(((int)stk + 0));
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x0);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        (((struct o118_uint *)(t9))->v) = t14;
        *(unsigned int *)((t9 + 0x10)) = 0xC03B00A;
        t10 = *(signed char *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = ((signed char)((((t10 << 1) + t10) << 2) << 1) + 0xC6002D0);
        t13 = (0x2E0 + t9);
        for (;;) {
            t16 = *(int *)((t13 + 0x0));
            t13 = (t13 + 0x4);
            FUN_0c06233a(t16, (*(int *)(((int)stk + 0))), 0x0);
            *(unsigned char *)((t16 + 0x0)) = 0x1;
            t14 = (t14 + 0x1);
            *(unsigned short *)((t16 + 0x2)) = 0x7;
            if ((int)t14 >= (int)0xA) {
                break;
            }
        }
        t18 = 0x7;
    }
    return t18;
}

int fx_tick_03af38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 1.04999995f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 1.04999995f);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 1.04999995f);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
        t0 = 0x0;
        t1 = (0x2E0 + a4);
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x1);
            (((struct o4_float *)(t2))->v) = (((((struct o4_float *)(t2))->v)) * 1.0999999f);
            (((struct o8_float *)(t2))->v) = (((((struct o8_float *)(t2))->v)) - 0.5f);
            (((struct oC_float *)(t2))->v) = (((((struct oC_float *)(t2))->v)) * 1.0999999f);
            *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0xAAB);
            *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + 0x1555);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x1E) {
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0333333313f);
            if (!(((((struct o5C_float *)(a4))->v)) > 0.0f)) {
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        t1 = 0xEC;
        if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        math_rand_next();
        (((struct o4_float *)(t3))->v) = ((float)(FUN_0c0e6e5c()) + -25.0f);
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        math_rand_next();
        (((struct o8_float *)(t3))->v) = ((float)(FUN_0c0e6e5c()) + 0.0f);
        t3 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
        math_rand_next();
        t2 = FUN_0c0e6e5c();
        t0 = (t0 + 0x1);
        (((struct oC_float *)(t3))->v) = ((float)t2 + -25.0f);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}
