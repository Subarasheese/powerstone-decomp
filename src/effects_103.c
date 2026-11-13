/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04463c-0c044e38) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o308_float { char p[0x308]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int obj_create(int, int, int);
int FUN_0c0e6fe8(int, int, float);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c06233a(int, int, int);
int FUN_0c0e6e5c(void);
struct o0_float { float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_0446ce(int);
int obj_destroy(int, int, int, int);

int FUN_0c0447bc(int a4);
int FUN_0c044868(int a4, int a5);
int FUN_0c0448f6(int a4);
int FUN_0c04492c(int a4);

int fx_spawn_04463c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = obj_create(0x6, 0x1, 0xA);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x5)) = 0x1;
        *(unsigned int *)((t2 + 0x10)) = 0xC044B40;
        (((struct o118_uint *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        *(unsigned int *)((t2 + 0x30)) = 0x0;
        *(unsigned int *)((t2 + 0x2C)) = 0x0;
        (((struct o58_float *)(t2))->v) = 1.0f;
        (((struct o54_float *)(t2))->v) = 1.0f;
        (((struct o50_float *)(t2))->v) = 1.0f;
        FUN_0c0e6fe8(t2, 0x0, 1.0f);
        (((struct o308_float *)(t0))->v) = ((((struct o4_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 500.0f);
        (((struct o5C_float *)(t0))->v) = f4;
        t2 = (0x2E0 + t0);
        t0 = t1;
        for (;;) {
            t0 = (t0 + 0x1);
            t4 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            *(unsigned char *)((t4 + 0x0)) = t1;
            if ((int)(signed char)t0 >= (int)0xA) {
                break;
            }
        }
        t3 = 0xA;
    }
    return t3;
}

int FUN_0c0447bc(int a4)
{
    register float u0;
    register int t1;
    register int t3;
    register int t4;
    register int t8;
    register int t2;
    register float u6;
    register float u7;

    u0 = *(float *)0xC044914;
    t1 = 0xC044914;
    t3 = 0x0;
    t4 = ((0x2E0 + a4) + 0x18);
    for (;;) {
        t8 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        if ((*(signed char *)((t8 + 0x0))) != 0) {
            t2 = 0x28;
            t2 = (t2 + t8);
            t1 = 0x1C;
            u7 = (*(float *)((t2 + 0x0)));
            u6 = (*(float *)((t8 + t1)));
            t2 = 0x28;
            t2 = (t2 + t8);
            u6 = (u6 + u7);
            *(float *)((t8 + t1)) = u6;
            t1 = 0x20;
            u6 = (*(float *)((t8 + t1)));
            u7 = (*(float *)((t2 + 0x0)));
            t2 = 0x28;
            t2 = (t2 + t8);
            u6 = (u6 + u7);
            *(float *)((t8 + t1)) = u6;
            t1 = 0x24;
            u6 = (*(float *)((t8 + t1)));
            u7 = (*(float *)((t2 + 0x0)));
            u6 = (u6 + u7);
            *(float *)((t8 + t1)) = u6;
            t1 = 0x1C;
            u7 = (*(float *)((t8 + t1)));
            if (!(1.0f > u7)) {
                t1 = 0x2C;
                u6 = 1.0f;
                u7 = (*(float *)((t8 + t1)));
                t1 = 0x44;
                u7 = (u7 / u0);
                *(float *)((t8 + t1)) = u7;
                t1 = 0x2C;
                u7 = (*(float *)((t8 + t1)));
                t1 = 0x48;
                u7 = (u7 / u0);
                *(float *)((t8 + t1)) = u7;
                t1 = 0x2C;
                u7 = (*(float *)((t8 + t1)));
                t1 = 0x4C;
                u7 = (u7 / u0);
                *(float *)((t8 + t1)) = u7;
                t1 = 0x2C;
                u7 = (*(float *)((t8 + t1)));
                u7 = (u7 - u6);
                *(float *)((t8 + t1)) = u7;
                if (u7 == (0.0f)) {
                    *(unsigned char *)((t8 + 0x0)) = 0x0;
                }
            }
            t1 = 0x5C;
            u7 = (*(float *)((a4 + t1)));
            t1 = 0x44;
            u6 = (*(float *)((t8 + t1)));
            if (u6 > u7) {
                t1 = 0x5C;
                u7 = (*(float *)((a4 + t1)));
                t1 = 0x44;
                *(float *)((t8 + t1)) = u7;
                t1 = 0x5C;
                u7 = (*(float *)((a4 + t1)));
                t1 = 0x48;
                *(float *)((t8 + t1)) = u7;
                t1 = 0x5C;
                u7 = (*(float *)((a4 + t1)));
                t1 = 0x4C;
                *(float *)((t8 + t1)) = u7;
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c044868(int a4, int a5)
{
    register int t1;
    register int t2;

    t2 = *(signed char *)((a5 + 0x5));
    *(unsigned char *)((a5 + 0x5)) = (t2 - 1);
    t1 = (signed char)(t2 - 1);
    if ((signed char)(t2 - 1) == 0) {
        t2 = *(int *)(((((*(signed char *)((a5 + 0x4))) << 2) + (0x2E0 + a4)) + 0x18));
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            *(unsigned char *)((a5 + 0x5)) = 0xF;
            FUN_0c06233a(t2, 0xC4CFA68, 0x6C);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            (((struct o24_float *)(t2))->v) = 0.0f;
            (((struct o20_float *)(t2))->v) = 0.0f;
            (((struct o1C_float *)(t2))->v) = 0.0f;
            *(unsigned short *)((t2 + 0x2)) = 0x1211;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            (((struct o28_float *)(t2))->v) = 0.049999997f;
            (((struct o2C_float *)(t2))->v) = 8.0f;
            (((struct o98_float *)(t2))->v) = 2.0f;
            *(volatile signed char *)((a5 + 0x4));
            t2 = FUN_0c0e6e5c();
            *(unsigned char *)((a5 + 0x4)) = t2;
        } else {
            *(unsigned char *)((a5 + 0x5)) = 0x1;
            t2 = 0x1;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0448f6(int a4)
{
    *(unsigned char *)(((0x308 + a4) + 0x4)) = 0x0;
    *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x1;
    return FUN_0c044868(a4, (0x308 + a4));
}

int FUN_0c04492c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c044868(a4, (0x308 + a4));
                FUN_0c0447bc(a4);
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.199999988f);
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.199999988f);
                t2 = 0x1C;
                if (!(((((struct o8_float *)0xC044B68)->v)) > ((((struct o1C_float *)(t1))->v)))) {
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t1 = t2;
            } else {
                t2 = t0;
                if (t0 == 3) {
                    FUN_0c044868(a4, (0x308 + a4));
                    FUN_0c0447bc(a4);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
                    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.099999994f);
                    (((struct o44_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    (((struct o48_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    (((struct o4C_float *)(t0))->v) = ((((struct o5C_float *)(a4))->v));
                    u0 = (((struct o5C_float *)(a4))->v);
                    (((struct o5C_float *)(a4))->v) = (u0 - 0.049999997f);
                    t0 = 0x5C;
                    if (!((u0 - 0.049999997f) > 0.0f)) {
                        *(unsigned char *)((a4 + 0x8)) = 0x2;
                        t0 = 0x2;
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            FUN_0c044868(a4, (0x308 + a4));
            FUN_0c0447bc(a4);
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                t1 = (((struct o2E0_int *)(a4))->v);
                FUN_0c06233a(t1, 0xC4CFA68, 0x6E);
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                (((struct o20_float *)(t1))->v) = 1.0f;
                (((struct o24_float *)(t1))->v) = 0.199999988f;
                (((struct o1C_float *)(t1))->v) = 0.199999988f;
                *(unsigned short *)((t1 + 0x2)) = 0x1211;
                (((struct o44_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o48_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o4C_float *)(t1))->v) = ((((struct o5C_float *)(a4))->v));
                (((struct o2C_float *)(t1))->v) = ((((struct o0_float *)0xC044B68)->v));
                (((struct o98_float *)(t1))->v) = ((((struct o4_float *)0xC044B68)->v));
                t2 = 0x98;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = (((struct o304_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = (u0 - 0.099999994f);
            if ((u0 - 0.099999994f) > 0.0f) {
                return 0x20;
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            fx_spawn_0446ce(a4);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            return FUN_0c0448f6(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o3C_float *)(a4))->v) = -30.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        FUN_0c06233a(t0, 0xC4CFA68, 0x6B);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x11;
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    if (((((struct o24_float *)(a4))->v)) > ((((struct o308_float *)(a4))->v))) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct o24_float *)(a4))->v) = ((((struct o308_float *)(a4))->v));
    }
    return 0x24;
}

int fx_tick_04463c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
        return FUN_0c04492c(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    return FUN_0c04492c(a4);
}
