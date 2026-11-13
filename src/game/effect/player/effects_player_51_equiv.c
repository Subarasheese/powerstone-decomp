/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c67c4-0c0c6e6c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o0_float { float v; };
struct o308_float { char p[0x308]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
extern int math_atan2_angle16();
extern float math_pow_float();
extern float _builtin_sqrtf(float);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
float math_cos_angle16(int);
float math_sin_angle16(int);

int obj_integrate_motion(int a4)
{
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int FUN_0c0c681a(int a4)
{
    register float u0;
    register float u1;

    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o308_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o308_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o308_float *)(a4))->v)));
    u0 = (((struct o0_float *)0xC0C68BC)->v);
    if (!(0.0f > ((((struct o308_float *)(a4))->v)))) {
        u1 = (((struct o4_float *)0xC0C68BC)->v);
        if (!(u1 > ((((struct o50_float *)(a4))->v)))) {
            (((struct o308_float *)(a4))->v) = (((((struct o308_float *)(a4))->v)) * u0);
            (((struct o58_float *)(a4))->v) = u1;
            (((struct o54_float *)(a4))->v) = u1;
            (((struct o50_float *)(a4))->v) = u1;
        }
    } else {
        u1 = (((struct o8_float *)0xC0C68BC)->v);
        if (!(((((struct o50_float *)(a4))->v)) > u1)) {
            (((struct o308_float *)(a4))->v) = (((((struct o308_float *)(a4))->v)) * u0);
            (((struct o58_float *)(a4))->v) = u1;
            (((struct o54_float *)(a4))->v) = u1;
            (((struct o50_float *)(a4))->v) = u1;
        }
    }
    return 0x50;
}

int FUN_0c0c688a(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = (t0 << 2);
        t2 = t0;
        t0 = (t0 + 0x1);
        (((struct oC_float *)((*(int *)(((t1 + (0x2E0 + a4)) + 0x4)))))->v) = (-((float)t2 * (f4 / 1.5f)));
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return 0xC;
}

int FUN_0c0c68cc(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t54;
    register int t4;
    register float u8;
    register float u9;
    register int t11;
    register int t12;
    register int t14;
    register float t31;
    register float t33;
    register int t36;
    register int t38;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    t54 = 0xF2;
    if ((short)(t0 - 1) == 0) {
        (((struct oF2_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
        t4 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
        *(float *)((((int)stk + 0) + 0x0)) = (((((struct o20_float *)(t4))->v)) - ((((struct o20_float *)(a4))->v)));
        (((struct o4_float *)(((int)stk + 0)))->v) = ((((((struct o24_float *)(t4))->v)) - ((((struct o24_float *)(a4))->v))) + 100.0f);
        u8 = (((struct o28_float *)(t4))->v);
        u9 = (((struct o28_float *)(a4))->v);
        (((struct o8_float *)(((int)stk + 0)))->v) = (u8 - u9);
        t11 = ((int (*)(int, int, int, int, float, float))(math_atan2_angle16))(t4, a5, a6, a7, (*(float *)((((int)stk + 0) + 0x0))), (u8 - u9));
        t12 = *(int *)((a4 + 0x30));
        t14 = (unsigned short)(t11 - t12);
        if ((0x8000 & (unsigned short)(t11 - t12)) != 0) {
            t14 = ((unsigned short)(t11 - t12) | 0xFFFF0000);
        }
        if ((int)t14 > 0) {
            if ((int)t14 > (int)a5) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + a5);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t14);
            }
        } else {
            if ((int)t14 < (int)(-a5)) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - a5);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t14);
            }
        }
        t31 = ((float (*)(int, float, float))(math_pow_float))(t14, (*(float *)((((int)stk + 0) + 0x0))), 2.0f);
        t33 = ((float (*)(float, float))(math_pow_float))(((((struct o8_float *)(((int)stk + 0)))->v)), 2.0f);
        *(float *)((((int)stk + 0) + 0x0)) = _builtin_sqrtf((t31 + t33));
        t54 = ((int (*)(float, float))(math_atan2_angle16))(((((struct o4_float *)(((int)stk + 0)))->v)), _builtin_sqrtf((t31 + t33)));
        t36 = *(int *)((a4 + 0x2C));
        t38 = (unsigned short)((-t54) - t36);
        if ((0x8000 & (unsigned short)((-t54) - t36)) != 0) {
            t38 = ((unsigned short)((-t54) - t36) | 0xFFFF0000);
        }
        if ((int)t38 > 0) {
            if ((int)t38 > (int)a5) {
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + a5);
            } else {
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t38);
            }
        } else {
            if ((int)t38 < (int)(-a5)) {
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - a5);
            } else {
                *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t38);
            }
        }
        _builtin_sqrtf((t31 + t33));
    }
    return t54;
}

int FUN_0c0c69e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t4 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    if (((*(signed char *)((t4 + 0x71A4))) == 1) && ((t0 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t0 == 104) || ((t1 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t1 == 105) || ((t2 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t2 == 112) || (t3 = *(signed char *)((t4 + 0x71A5)), (unsigned char)t3 == 113))))) {
    } else {
        *(unsigned char *)((a4 + 0x9)) = 0x4;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
        *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
        (((struct o105_uchar *)(a4))->v) = 0x1;
        u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
        (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
        u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
        t5 = 0x1;
    }
    return t5;
}
