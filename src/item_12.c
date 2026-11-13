/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05d536-0c05d970) */

struct o106_uchar { char p[0x106]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
int snd_play_side_se(int, int);
int FUN_0c0ac5c4(int, int, int, int);
int math_rand_next(void);
int FUN_0c0e24f0(int);
extern int FUN_0c0e6e5c();
int obj_destroy(int);

int FUN_0c05d536(int a4, int a5, int a6, int a7)
{
    register float u1;
    register float u2;
    register float u16;
    register int t3;
    register int t4;
    register int t5;

    u1 = (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v);
    u2 = *(float *)0xC05D5E0;
    u16 = (u1 + u2);
    if (!(1.0f > (u1 + u2))) {
        t3 = (0x2E0 + a4);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            if ((int)t4 >= (int)0x6) {
                break;
            }
        }
        (((struct o106_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2F8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        u16 = 1.0f;
    }
    (((struct o1C_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    (((struct o24_float *)(((((struct o2F8_int *)(a4))->v))))->v) = u16;
    return 0x24;
}

int FUN_0c05d594(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;

    t3 = *(signed char *)((a4 + 0x9));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                t3 = (((struct o2E0_int *)(a4))->v);
                t4 = *(int *)((t3 + 0x10));
                *(unsigned int *)((t3 + 0x10)) = (t4 + 0x2D8);
                t5 = 0xC05D7A0;
                t6 = (t4 + 0x2D8);
                t4 = 0x2D8;
                t7 = t3;
                t3 = 0x8;
                t8 = 0x8;
                t9 = 0x2;
                t10 = 0x8;
                for (;;) {
                    if ((int)t9 >= (int)0x5) {
                        break;
                    }
                    t4 = 0x2E0;
                    t5 = 0x2C;
                    t10 = 0x2E0;
                    t6 = 0x28;
                    t4 = (t4 + a4);
                    t4 = (t4 + t3);
                    t7 = (*(int *)((t4 + 0x0)));
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    u0 = (*(float *)((t7 + t5)));
                    u0 = (u0 + -1.0f);
                    *(float *)((t7 + t5)) = u0;
                    t5 = 0x4;
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    t6 = 0x2C;
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t5 = 0x8;
                    t10 = 0x2E0;
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t10 = 0x2E0;
                    t10 = (t10 + a4);
                    t10 = (t10 + t3);
                    t7 = 0x2E0;
                    t10 = (*(int *)((t10 + 0x0)));
                    t6 = 0x30;
                    t5 = 0xC;
                    t6 = (t6 + t10);
                    u1 = (*(float *)((t10 + t5)));
                    u0 = (*(float *)((t6 + 0x0)));
                    t7 = (t7 + a4);
                    t7 = (t7 + t3);
                    u1 = (u1 + u0);
                    *(float *)((t10 + t5)) = u1;
                    t5 = 0x8;
                    t4 = (*(int *)((t7 + 0x0)));
                    u0 = (*(float *)((t4 + t5)));
                    t9 = (t9 + 0x1);
                    if (!(u0 > -40.0f)) {
                        t4 = 0x2E0;
                        t4 = (t4 + a4);
                        t4 = (t4 + t8);
                        t7 = (*(int *)((t4 + 0x0)));
                        *(float *)((t7 + t5)) = -40.0f;
                        t5 = 0x28;
                        t7 = 0x2E0;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        t7 = 0x2E0;
                        *(float *)((t4 + t5)) = 0.0f;
                        t5 = 0x2C;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        t7 = 0x2E0;
                        *(float *)((t4 + t5)) = 0.0f;
                        t5 = 0x30;
                        t7 = (t7 + a4);
                        t7 = (t7 + t8);
                        t4 = (*(int *)((t7 + 0x0)));
                        *(float *)((t4 + t5)) = 0.0f;
                    }
                    t3 = (t3 + 0x4);
                    t8 = (t8 + 0x4);
                }
                t3 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t3 + 0x1);
                t4 = 0xEC;
                if ((int)(short)(t3 + 0x1) >= (int)0x1E) {
                    t4 = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                return t4;
            }
            return ((int (*)(int, int, int, int))(0xC05D876))(0x2, a5, a6, 0x8);
        }
        *(volatile short *)((a4 + 0xEC));
        t3 = ((int (*)(int))(FUN_0c0e6e5c))(0x2);
        if (t3 == 0) {
            u0 = (((struct o20_float *)(a4))->v);
            (((struct o20_float *)(a4))->v) = (u0 + f4);
            u1 = (u0 + f4);
        } else {
            *(volatile short *)((a4 + 0xEC));
            t3 = ((int (*)(void))(FUN_0c0e6e5c))();
            if (t3 == 2) {
                u0 = (((struct o20_float *)(a4))->v);
                (((struct o20_float *)(a4))->v) = (u0 - f4);
                u2 = (u0 - f4);
            }
            u1 = u2;
        }
        t3 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t3 + 0x1);
        if ((int)(short)(t3 + 0x1) < (int)0x6) {
            return 0xEC;
        }
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        t4 = 0xC05D6A0;
        t5 = 0x6;
        t6 = (short)(t3 + 0x1);
        t3 = t0;
        t0 = t1;
        u0 = u1;
        for (;;) {
            if ((int)t3 >= (int)0x5) {
                break;
            }
            t5 = 0x2E0;
            t5 = (t5 + a4);
            t5 = (t5 + t0);
            t6 = (*(int *)((t5 + 0x0)));
            t5 = 0x28;
            t5 = (t5 + t6);
            t4 = (math_rand_next());
            t6 = 0xC0E6E5C;
            t4 = 0xA;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            t4 = (t4 - 10);
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            u0 = (float)t4;
            *(float *)(((t5) + 0x0)) = u0;
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x2C;
            t6 = (t6 + t5);
            t1 = t6;
            t4 = (math_rand_next());
            t4 = 0xA;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            t4 = (t4 + 0x28);
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            u0 = (float)t4;
            *(float *)((t1 + 0x0)) = u0;
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x30;
            t6 = (t6 + t5);
            t1 = t6;
            t4 = (math_rand_next());
            t4 = 0x14;
            t4 = (((int (*)(void))(FUN_0c0e6e5c))());
            u0 = (float)t4;
            t6 = 0xC0E24F0;
            u0 = (-u0);
            *(float *)((t1 + 0x0)) = u0;
            t4 = (FUN_0c0e24f0(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x28)));
            t5 = 0x2E0;
            t4 = 0x28;
            t3 = (t3 + 0x1);
            t5 = (t5 + a4);
            t5 = (t5 + t0);
            t6 = (*(int *)((t5 + 0x0)));
            u0 = (*(float *)((t6 + t4)));
            u0 = (u0 * 10.0f);
            *(float *)((t6 + t4)) = u0;
            t4 = 0x2C;
            t6 = 0x2E0;
            t6 = (t6 + a4);
            t6 = (t6 + t0);
            t5 = (*(int *)((t6 + 0x0)));
            t6 = 0x2E0;
            u0 = (*(float *)((t5 + t4)));
            t6 = (t6 + a4);
            u0 = (u0 * 10.0f);
            t6 = (t6 + t0);
            t0 = (t0 + 0x4);
            *(float *)((t5 + t4)) = u0;
            t4 = 0x30;
            t5 = (*(int *)((t6 + 0x0)));
            u0 = (*(float *)((t5 + t4)));
            u0 = (u0 * 10.0f);
            *(float *)((t5 + t4)) = u0;
        }
        return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x2D);
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
    if (((int)(short)(t0 + 0x1) < (int)0x12C) && (t2 = *(signed char *)((a4 + 0x30D)), t2 == 0)) {
        t0 = FUN_0c0ac5c4(a4, a5, a6, 0x8);
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            (((struct o106_uchar *)(a4))->v) = 0x1;
            (((struct o107_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = 0x2F4;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = 0x2F4;
    }
    return t0;
}

int thunk_FUN_0c059330(int a4)
{
    return obj_destroy(a4);
}
