/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c043730-0c043bdc) */

int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int);
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);

int fx_spawn_043730(int a4, int a5);
int FUN_0c0437fe(int a4, int a5);

int fx_spawn_043730(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = obj_create(0x5, 0x1, 0x3);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x20F;
        *(unsigned char *)((t1 + 0x5)) = 0x1;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        *(unsigned int *)((t1 + 0x2C)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0438A4;
        FUN_0c0e6fe8(0x0);
        *(unsigned int *)((t1 + 0x30)) = a5;
        t3 = t0;
        t0 = 0xC14A5D0;
        t4 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + t4) + 0x0))) + 0x2)) = 0x3F;
            t6 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t5 = FUN_0c06233a((*(int *)((((0x2E0 + t1) + t4) + 0x0))), 0xC4CFA68, t6);
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)(signed char)t3 >= (int)0x3) {
                break;
            }
        }
        t2 = t5;
    }
    return t2;
}

int FUN_0c0437d6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((int)(short)a6 >= 0) {
        t0 = a6;
        for (;;) {
            t1 = fx_spawn_043730(a4, a5);
            t0 = (t0 - 1);
            if ((int)(short)t0 < 0) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0437fe(int a4, int a5)
{
    register int t0;

    t0 = *(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0));
    (((struct o4_float *)(t0))->v) = (((((struct o4_float *)(t0))->v)) + ((((struct o28_float *)(t0))->v)));
    t0 = *(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0));
    (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
    t0 = *(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0));
    (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) + ((((struct o30_float *)(t0))->v)));
    t0 = *(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0));
    (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + ((((struct o44_float *)(a4))->v)));
    t0 = *(int *)((((0x2E0 + a4) + ((signed char)a5 << 2)) + 0x0));
    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + ((((struct o48_float *)(a4))->v)));
    t0 = *(int *)(((((signed char)a5 << 2) + (0x2E0 + a4)) + 0x0));
    (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x30;
}

int fx_tick_043730(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t13;
    register int t16;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t26;
    register int t28;
    register int t34;
    register int t35;
    register int t36;
    register int t43;
    register int t45;
    register int t52;
    register float u56;
    register int t59;
    register int t64;
    register int t69;
    register int t75;
    register float u79;
    register int t82;
    register int t84;
    register int t85;
    register int t87;
    register int t89;
    register int t91;
    register int t94;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                FUN_0c0437fe(a4, t1);
                t3 = *(int *)((((0x2E0 + a4) + ((signed char)t1 << 2)) + 0x0));
                t4 = ((signed char)t1 << 2);
                t1 = (t1 + 0x1);
                (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.0625f);
                t6 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
                (((struct o20_float *)(t6))->v) = (((((struct o20_float *)(t6))->v)) + 0.0625f);
                t8 = *(int *)(((t4 + (0x2E0 + a4)) + 0x0));
                (((struct o24_float *)(t8))->v) = (((((struct o24_float *)(t8))->v)) + 0.0625f);
                if ((int)(signed char)t1 >= (int)0x3) {
                    break;
                }
            }
            t10 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
            t13 = (short)(t10 - 1);
            if ((short)(t10 - 1) == 25) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
                (((struct o5C_float *)(a4))->v) = 1.0f;
                t13 = 0x5C;
            }
            return t13;
        }
        if (t0 == 2) {
            t16 = 0x0;
            for (;;) {
                FUN_0c0437fe(a4, t16);
                t18 = *(int *)((((0x2E0 + a4) + ((signed char)t16 << 2)) + 0x0));
                t19 = ((signed char)t16 << 2);
                t16 = (t16 + 0x1);
                (((struct o1C_float *)(t18))->v) = (((((struct o1C_float *)(t18))->v)) + 0.0625f);
                t21 = *(int *)((((0x2E0 + a4) + t19) + 0x0));
                (((struct o20_float *)(t21))->v) = (((((struct o20_float *)(t21))->v)) + 0.0625f);
                t23 = *(int *)(((t19 + (0x2E0 + a4)) + 0x0));
                (((struct o24_float *)(t23))->v) = (((((struct o24_float *)(t23))->v)) + 0.0625f);
                if ((int)(signed char)t16 >= (int)0x3) {
                    break;
                }
            }
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + -0.0399999991f);
            t26 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t26 - 1);
            t28 = 0xEC;
            if ((short)(t26 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o5C_float *)(a4))->v) = 0.0f;
                t28 = 0x5C;
            }
            return t28;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    if ((*(signed char *)0xC7F2F0F) == 0) {
        (((struct o60_float *)(a4))->v) = 0.75f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o60_float *)(a4))->v) = 1.0f;
        (((struct o64_float *)(a4))->v) = 1.0f;
        (((struct o68_float *)(a4))->v) = 1.0f;
    }
    t34 = 0x0;
    t35 = 0x0;
    for (;;) {
        t36 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        (((struct o24_float *)(t36))->v) = 0.25f;
        (((struct o20_float *)(t36))->v) = 0.25f;
        (((struct o1C_float *)(t36))->v) = 0.25f;
        math_rand_float();
        
        t43 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)((t43 + 0x14)) = ((*(int *)((t43 + 0x14))) + (int)(((float)(short)((FUN_0c0e6f24()) - 11) * 65536.0f) / 360.0f));
        t45 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)((t45 + 0x14)) = ((*(int *)((t45 + 0x14))) & 0xFFFF);
        math_rand_float();
        
        t52 = FUN_0c0e6f24();
        u56 = (float)(t52 << 1);
        if ((int)(t52 << 1) < 0) {
            u56 = ((float)(t52 << 1) + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 8)) = (u56 + 2.0f);
        t59 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t59;
        *(int *)((int)stk + 0) = (0x28 + t59);
        (((struct o28_float *)(t59))->v) = ((math_sin_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x14))))) * (*(float *)(((int)stk + 8))));
        t64 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t64;
        *(int *)((int)stk + 0) = (0x30 + t64);
        (((struct o30_float *)(t64))->v) = ((math_cos_angle16((*(int *)(((*(int *)(((int)stk + 4))) + 0x14))))) * (*(float *)(((int)stk + 8))));
        t69 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(int *)((int)stk + 0) = (0x2C + t69);
        math_rand_float();
        
        t75 = FUN_0c0e6f24();
        u79 = (float)(t75 << 1);
        if ((int)(t75 << 1) < 0) {
            u79 = ((float)(t75 << 1) + 4.2949673e+09f);
        }
        t34 = (t34 + 0x1);
        (((struct o2C_float *)(t69))->v) = (u79 + 4.0f);
        t35 = (t35 + 0x4);
        if ((int)(signed char)t34 < (int)0x3) continue;
        break;
    }
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -0.75f;
    t82 = 0x0;
    for (;;) {
        FUN_0c0437fe(a4, t82);
        t84 = *(int *)((((0x2E0 + a4) + ((signed char)t82 << 2)) + 0x0));
        t85 = ((signed char)t82 << 2);
        t82 = (t82 + 0x1);
        (((struct o1C_float *)(t84))->v) = (((((struct o1C_float *)(t84))->v)) + 0.0625f);
        t87 = *(int *)((((0x2E0 + a4) + t85) + 0x0));
        (((struct o20_float *)(t87))->v) = (((((struct o20_float *)(t87))->v)) + 0.0625f);
        t89 = *(int *)(((t85 + (0x2E0 + a4)) + 0x0));
        (((struct o24_float *)(t89))->v) = (((((struct o24_float *)(t89))->v)) + 0.0625f);
        if ((int)(signed char)t82 >= (int)0x3) {
            break;
        }
    }
    t91 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t91 - 1);
    t94 = (short)(t91 - 1);
    if ((short)(t91 - 1) == 25) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
        (((struct o5C_float *)(a4))->v) = 1.0f;
        t94 = 0x5C;
    }
    return t94;
}
