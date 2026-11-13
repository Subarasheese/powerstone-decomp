/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03e354-0c03e918) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);

int fx_spawn_03e354(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t22;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x2);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03E452;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEE_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t6 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t6 + 0x0)) = 0x0;
        t7 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t6, ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), 0x14);
        *(unsigned short *)((t6 + 0x2)) = 0x1F;
        t11 = ((int (*)(void))(FUN_0c0e6fe8))();
        t12 = *(signed char *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)t12;
        (((struct o28_uchar *)(t6))->v) = (*(signed char *)(((unsigned char)t12 + 0xC1498A6)));
        t14 = (((struct o2E4_int *)(t0))->v);
        *(unsigned char *)((t14 + 0x0)) = 0x0;
        t15 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t14, ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x1A);
        *(unsigned short *)((t14 + 0x2)) = 0x1F;
        t19 = ((int (*)(void))(FUN_0c0e6fe8))();
        t22 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0xC1498AC));
        (((struct o28_uchar *)(t14))->v) = t22;
    }
    return t22;
}

int fx_tick_03e354(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 == 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        return t4;
    }
    *(volatile int *)((a4 + 0x1C));
    t4 = ((int (*)(int))(FUN_0c0e6fe8))(a4);
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + (*(int *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC33C948))));
    *(volatile int *)((a4 + 0x1C));
    t4 = ((int (*)(void))(FUN_0c0e6fe8))();
    u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
    t4 = (((struct oEE_short *)(a4))->v);
    u1 = (((struct o8_float *)(((((t4 << 1) + t4) << 2) + 0xC33C900)))->v);
    u2 = (((struct o20_float *)(a4))->v);
    t4 = (((struct oEE_short *)(a4))->v);
    u3 = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * (*(float *)((((((t4 << 1) + t4) << 2) + 0xC33C900) + 0x0))));
    u3 = u3 + u1 * u0;
    (((struct o20_float *)(a4))->v) = (u2 + u3);
    u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
    t4 = (((struct oEE_short *)(a4))->v);
    u1 = (((struct o8_float *)(((((t4 << 1) + t4) << 2) + 0xC33C900)))->v);
    t4 = (((struct oEE_short *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * (*(float *)((((((t4 << 1) + t4) << 2) + 0xC33C900) + 0x0))));
    (((struct o28_float *)(a4))->v) = (u2 + (((u0 * u1)) - u3));
    t4 = (((struct oEE_short *)(a4))->v);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((0xC33C900 + (((t4 << 1) + t4) << 2))))->v)));
    t4 = (((struct o2E0_int *)(a4))->v);
    math_rand_float();
    *(unsigned int *)((t4 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
    if (((int)(*(signed char *)((a4 + 0xA))) <= (int)0x2) && (t0 = *(int *)((a4 + 0x1C)), t1 = (((struct oEE_short *)(t0))->v), t1 != 0)) {
        *(unsigned char *)((a4 + 0xA)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0xA));
    switch (t0) {
    case 0:
        t0 = *(signed char *)(((t4 + 0x28) + 0x0));
        (((struct o28_uchar *)(t4))->v) = (t0 - 1);
        if ((float)(unsigned char)(t0 - 1) > 0.0f) {
        } else {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x1;
        }
        break;
    case 1:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) + (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 + u1);
        if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149858))) > (u0 + u1))) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 2:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 - u1);
        if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149870))))) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) - 1);
        }
        break;
    case 3:
        (((struct o20_float *)(t4))->v) = (((((struct o20_float *)(t4))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
        (((struct o24_float *)(t4))->v) = (((((struct o24_float *)(t4))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
        u0 = (((struct o1C_float *)(t4))->v);
        u1 = *(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0));
        (((struct o1C_float *)(t4))->v) = (u0 - u1);
        if (!((u0 - u1) > 0.0f)) {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
        }
        break;
    }
    t0 = 0xEE;
    if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x3) {
    } else {
        t1 = (((struct o2E4_int *)(a4))->v);
        math_rand_float();
        *(unsigned int *)((t1 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
        if (((int)(*(signed char *)((a4 + 0xB))) <= (int)0x2) && (t2 = *(int *)((a4 + 0x1C)), t3 = (((struct oEE_short *)(t2))->v), t3 != 0)) {
            *(unsigned char *)((a4 + 0xB)) = 0x3;
        }
        t2 = *(signed char *)((a4 + 0xB));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    t3 = t2;
                    if (t2 != 3) {
                    } else {
                        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                        (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                        u0 = (((struct o1C_float *)(t1))->v);
                        u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                        (((struct o1C_float *)(t1))->v) = (u0 - u1);
                        t4 = 0x1C;
                        if (!((u0 - u1) > 0.0f)) {
                            t5 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
                            *(unsigned char *)((t1 + 0x0)) = 0x0;
                            t4 = (t5 + 0x1);
                        }
                        t3 = t4;
                    }
                    t4 = t3;
                } else {
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                    u0 = (((struct o1C_float *)(t1))->v);
                    u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                    (((struct o1C_float *)(t1))->v) = (u0 - u1);
                    t3 = 0xC149870;
                    if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149870))))) {
                        t5 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t5 - 1);
                        t3 = (t5 - 1);
                    }
                    t4 = t3;
                }
                t3 = t4;
            } else {
                (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + (*(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149888) + 0x0))));
                u0 = (((struct o1C_float *)(t1))->v);
                u1 = *(float *)(((0xC149888 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                (((struct o1C_float *)(t1))->v) = (u0 + u1);
                t4 = 0xC149858;
                if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC149858))) > (u0 + u1))) {
                    t5 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t5 + 0x1);
                    t4 = (t5 + 0x1);
                }
                t3 = t4;
            }
            t4 = t3;
        } else {
            t3 = *(signed char *)(((t1 + 0x28) + 0x0));
            (((struct o28_uchar *)(t1))->v) = (t3 - 1);
            t5 = t2;
            if ((float)(unsigned char)(t3 - 1) > 0.0f) {
            } else {
                t2 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                t5 = (t2 + 0x1);
            }
            t4 = t5;
        }
        t0 = t4;
    }
    return t0;
}
