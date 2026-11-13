/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c038b98-0c039090) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int math_rand_next(void);
float math_rand_float(void);
int FUN_0c0e6e5c(void);
extern int FUN_0c0e6fe8();
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_038b98(int a4)
{
    int stk[1];
    register int t0;
    register int t30;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register float u29;
    register int t6;

    t0 = obj_create(0x5, 0x1, 0xA);
    t30 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o118_uint *)(t0))->v) = t6;
        *(unsigned int *)((t0 + 0x10)) = 0xC038DB6;
        t7 = (((struct o2E0_int *)(t0))->v);
        t8 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t7, ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0x2);
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x2)) = 0x215;
        (((struct o8_float *)(t7))->v) = 100.0f;
        (((struct o44_float *)(t7))->v) = 1.0f;
        (((struct o48_float *)(t7))->v) = 1.0f;
        (((struct o4C_float *)(t7))->v) = 1.0f;
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t0) + 0x4);
        t12 = 0x1;
        for (;;) {
            t13 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t13 + 0x4);
            t14 = *(signed char *)((a4 + 0x3));
            t15 = *(int *)((((t13 + 0x4) - 4) + 0x0));
            FUN_0c06233a(t15, ((signed char)((((t14 << 1) + t14) << 2) << 1) + 0xC6002D0), 0x1);
            *(unsigned char *)((t15 + 0x0)) = 0x1;
            *(unsigned short *)((t15 + 0x2)) = 0x215;
            math_rand_next();
            (((struct o4_float *)(t15))->v) = ((float)(FUN_0c0e6e5c()) + -50.0f);
            math_rand_next();
            (((struct o8_float *)(t15))->v) = ((float)(FUN_0c0e6e5c()) + 0.0f);
            math_rand_next();
            (((struct oC_float *)(t15))->v) = ((float)(FUN_0c0e6e5c()) + -50.0f);
            math_rand_next();
            *(unsigned int *)((t15 + 0x14)) = ((int)(((((float)(FUN_0c0e6e5c()) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            t12 = (t12 + 0x1);
            u29 = 0.5f;
            u29 = u29 + 2.0f * (math_rand_float());
            (((struct o20_float *)(t15))->v) = u29;
            (((struct o44_float *)(t15))->v) = 1.0f;
            (((struct o48_float *)(t15))->v) = 1.0f;
            (((struct o4C_float *)(t15))->v) = 1.0f;
            if ((int)t12 < (int)0xA) continue;
            break;
        }
        t30 = 0x4C;
    }
    return t30;
}

int fx_tick_038b98(int a4, int a5, int a6, int a7, float f4, float f5)
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
    register int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        t2 = (t0 + 0x1);
        if (t1 != 1) {
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x71C);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.179999992f);
            t1 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - 0.179999992f);
            if (!(((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            u0 = (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v);
            if (!(u0 > 0.0f)) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            t1 = (((struct oEC_short *)(a4))->v);
            t3 = t0;
            if ((int)t1 >= (int)0x16) {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t3 = t0;
            }
            t0 = t3;
            t3 = 0x16;
            t2 = t1;
            u1 = u0;
            u0 = 0.0f;
        }
        t1 = t0;
        t0 = t3;
        t3 = t2;
        u2 = u1;
        u1 = u0;
    } else {
        t2 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + 0x71C);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.199999988f);
        t2 = (((struct o2E0_int *)(a4))->v);
        u0 = (((struct o24_float *)(t2))->v);
        (((struct o24_float *)(t2))->v) = (u0 + 0.199999988f);
        t2 = (((struct oEC_short *)(a4))->v);
        if ((int)t2 < (int)0x11) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = 0x11;
        t3 = t2;
        u1 = (u0 + 0.199999988f);
    }
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t2))->v) = (((((struct o1C_float *)(t2))->v)) - 0.099999994f);
        t2 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + 0.5f);
        t2 = a5;
        t4 = a6;
        t5 = a7;
    } else {
        t6 = 0xC038F3C;
        t7 = t1;
        t1 = t0;
        t0 = t3;
        t3 = 0x4;
        t8 = 0x1;
        u0 = u1;
        for (;;) {
            if ((int)t8 >= (int)0xA) {
                break;
            }
            t1 = 0x2E0;
            t6 = 0x1C;
            t8 = (t8 + 0x1);
            t1 = (t1 + a4);
            t1 = (t1 + t3);
            t0 = (*(int *)((t1 + 0x0)));
            t7 = (*(int *)((t0 + 0x14)));
            t7 = (t7 + 0xAAB);
            *(unsigned int *)((t0 + 0x14)) = t7;
            t0 = 0x2E0;
            t0 = (t0 + a4);
            t0 = (t0 + t3);
            t1 = (*(int *)((t0 + 0x0)));
            t0 = 0x2E0;
            u0 = (*(float *)((t1 + t6)));
            t0 = (t0 + a4);
            u0 = (u0 + 0.049999997f);
            t0 = (t0 + t3);
            t3 = (t3 + 0x4);
            *(float *)((t1 + t6)) = u0;
            t6 = 0x24;
            t1 = (*(int *)((t0 + 0x0)));
            u0 = (*(float *)((t1 + t6)));
            u0 = (u0 + 0.049999997f);
            *(float *)((t1 + t6)) = u0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        t1 = t3;
        t3 = t8;
        t6 = 0xAAB;
        if ((int)t0 >= (int)0x15) {
            t7 = 0xEC;
            t8 = t0;
            t0 = 0x15;
            t9 = ((0x2E0 + a4) + 0x4);
            t10 = ((0x2E0 + a4) + 0x4);
            t11 = 0x1;
            t12 = ((0x2E0 + a4) + 0x4);
            t13 = ((0x2E0 + a4) + 0x4);
            u1 = u2;
            u2 = u0;
            for (;;) {
                if ((int)t11 >= (int)0xA) {
                    break;
                }
                t0 = 0x2E0;
                t13 = t11;
                t13 = (t13 << 2);
                t0 = (t0 + a4);
                t0 = (t0 + t13);
                t8 = (*(int *)((t0 + 0x0)));
                t7 = 0x44;
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x48;
                t8 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x4C;
                t8 = (*(int *)((t0 + 0x0)));
                t0 = 0x2E0;
                u2 = (*(float *)((t8 + t7)));
                t0 = (t0 + a4);
                u2 = (u2 - 0.099999994f);
                t0 = (t0 + t13);
                *(float *)((t8 + t7)) = u2;
                t7 = 0x44;
                t8 = (*(int *)((t0 + 0x0)));
                u2 = 0.0f;
                u1 = (*(float *)((t8 + t7)));
                if (!(u1 > u2)) {
                    t8 = 0x2E0;
                    t8 = (t8 + a4);
                    t8 = (t8 + t13);
                    t0 = (*(int *)((t8 + 0x0)));
                    *(float *)((t0 + t7)) = 0.0f;
                }
                t0 = 0x2E0;
                t7 = 0x48;
                u2 = 0.0f;
                t0 = (t0 + a4);
                t0 = (t0 + t13);
                t8 = (*(int *)((t0 + 0x0)));
                u1 = (*(float *)((t8 + t7)));
                if (!(u1 > u2)) {
                    t8 = (*(int *)((t12 + 0x0)));
                    *(float *)((t8 + t7)) = 0.0f;
                }
                t0 = (*(int *)((t9 + 0x0)));
                t7 = 0x4C;
                u2 = 0.0f;
                u1 = (*(float *)((t0 + t7)));
                t11 = (t11 + 0x1);
                if (!(u1 > u2)) {
                    t8 = (*(int *)((t10 + 0x0)));
                    *(float *)((t8 + t7)) = 0.0f;
                }
                t12 = (t12 + 0x4);
                t9 = (t9 + 0x4);
                t10 = (t10 + 0x4);
            }
            t1 = t9;
            t3 = t10;
            t6 = t11;
        }
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x1E) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            t0 = 0x1E;
            t7 = (0x2E0 + a4);
            t8 = 0x0;
            for (;;) {
                if ((int)t8 >= (int)0xA) {
                    break;
                }
                t0 = (*(int *)((t7 + 0x0)));
                t7 = (t7 + 0x4);
                t8 = (t8 + 0x1);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x8);
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x31;
            (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 100.0f;
            (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        } else {
            t0 = t1;
            t1 = t3;
            t3 = t6;
        }
        t2 = t0;
        t4 = t1;
        t5 = t3;
    }
    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x28) {
        return obj_destroy(a4, t2, t4, t5);
    }
    return 0xEC;
}
