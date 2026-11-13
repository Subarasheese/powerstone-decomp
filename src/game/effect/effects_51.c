/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a58c-0c03a918) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_sin_angle16(int);
extern int FUN_0c0e6e5c();
extern int FUN_0c0e6fe8();

int FUN_0c03a58c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t9;
    register float u10;
    register int t17;
    register int t25;
    register int t35;
    register int t40;
    register int t42;
    register int t41;
    register int t44;
    register float u48;
    register float u53;
    register int t56;
    register int t59;
    register int t64;
    register int t66;
    register int t69;
    register int t73;
    register int t75;
    register int t6;
    register int t7;
    register int t8;
    register float u11;
    register int t70;
    register int t71;
    register int t74;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t1))->v)) + -4.39473677f);
                (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) + 7.26315784f);
                u4 = (((struct oC_float *)(t1))->v);
                (((struct oC_float *)(t1))->v) = (u4 + -2.75f);
                t5 = 0xC0300000;
                t9 = 0x1;
                u10 = (u4 + -2.75f);
                for (;;) {
                    if ((int)t9 < (int)0x6) {
                        t8 = t9;
                        t8 = (t8 << 2);
                        t5 = t9;
                        t6 = (*(int *)((((0x2E0 + a4) + t8) + 0x0)));
                        t5 = (t5 << 1);
                        *(int *)((int)stk + 0) = (0x10 + t6);
                        t5 = (t5 + t9);
                        t5 = (t5 << 2);
                        t5 = (signed char)t5;
                        *(unsigned int *)(((int)stk + 8)) = t5;
                        t5 = (t5 + 0xC321644);
                        *(unsigned int *)(((int)stk + 4)) = t5;
                        t7 = (*(int *)(((int)stk + 8)));
                        t7 = (t7 + 0xC32168C);
                        t17 = (((struct oEC_short *)(a4))->v);
                        t6 = t17;
                        u11 = ((*(float *)((t5 + 0x0))) - (*(float *)((t7 + 0x0))));
                        u10 = (math_sin_angle16(((int)(((((float)(((t17 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x10 + t6);
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        t6 = (*(int *)((((0x2E0 + a4) + t8) + 0x0)));
                        *(int *)((int)stk + 0) = (0x14 + t6);
                        t5 = (*(int *)(((int)stk + 4)));
                        t25 = (((struct oEC_short *)(a4))->v);
                        t6 = t25;
                        u11 = (((((struct o4_float *)(t5))->v)) - ((((struct o4_float *)(t7))->v)));
                        u10 = (math_sin_angle16(((int)(((((float)(((t25 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x14 + t6);
                        t8 = (t8 + (0x2E0 + a4));
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        t6 = (*(int *)((t8 + 0x0)));
                        *(int *)((int)stk + 0) = (0x18 + t6);
                        t35 = (((struct oEC_short *)(a4))->v);
                        t6 = t35;
                        u11 = (((((struct o8_float *)((*(int *)(((int)stk + 4)))))->v)) - ((((struct o8_float *)(t7))->v)));
                        u10 = (math_sin_angle16(((int)(((((float)(((t35 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u11 = (u11 * u10);
                        t5 = (0x18 + t6);
                        t9 = (t9 + 0x1);
                        u11 = (u11 * 65536.0f);
                        u11 = (u11 / 360.0f);
                        u11 = (u11 + 0.5f);
                        t6 = (int)u11;
                        t6 = (t6 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x0)) = t6;
                        continue;
                    }
                    break;
                }
                t40 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t40 + 0x1);
                t42 = 0xEC;
                if ((int)(short)(t40 + 0x1) >= (int)0x78) {
                    t41 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t41 + 0x1);
                    t42 = (t41 + 0x1);
                }
                return t42;
            }
            return obj_destroy(a4, 0x1, a6, a7);
        }
        t44 = (((struct o2E0_int *)(a4))->v);
        (((struct o4_float *)(t44))->v) = (((((struct o4_float *)(t44))->v)) + -1.15909088f);
        *(volatile short *)((a4 + 0xEC));
        u48 = (((float)(((int (*)(int))(FUN_0c0e6e5c))(a4)) * 65536.0f) / 360.0f);
        (((struct o8_float *)(t44))->v) = (_builtin_fabsf((math_sin_angle16(((int)(u48 + 0.5f) & 0xFFFF)))) * 20.0f);
        (((struct oC_float *)(t44))->v) = (((((struct oC_float *)(t44))->v)) + -1.2954545f);
        *(volatile short *)((a4 + 0xEC));
        u53 = (((float)(((int (*)(void))(FUN_0c0e6e5c))()) * 65536.0f) / 360.0f);
        *(unsigned int *)((t44 + 0x10)) = ((int)((((_builtin_fabsf((math_sin_angle16(((int)(u53 + 0.5f) & 0xFFFF)))) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t56 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t56 + 0x1);
        t59 = 0xEC;
        if ((int)(short)(t56 + 0x1) < (int)0x2C) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned int *)((t44 + 0x10)) = 0x0;
            *(unsigned int *)((t44 + 0x14)) = 0xA001;
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
            t59 = 0x2F4;
        }
        return t59;
    }
    t64 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t64))->v) = 91.0f;
    (((struct o8_float *)(t64))->v) = 10.0f;
    (((struct oC_float *)(t64))->v) = 160.0f;
    *(unsigned int *)((t64 + 0x14)) = 0x8FA6;
    t66 = 0x1;
    for (;;) {
        if ((int)t66 >= (int)0x6) {
            break;
        }
        *(volatile int *)((((0x2E0 + a4) + (t66 << 2)) + 0x0));
        t69 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(t66, (signed char)(((t66 << 1) + t66) << 2), (t66 << 2), 0xC3215B4);
        *(volatile int *)((((0x2E0 + a4) + t71) + 0x0));
        t73 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, t70, t71);
        t66 = (t74 + 0x1);
    }
    t75 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t75 + 0x1);
    return (t75 + 0x1);
}
