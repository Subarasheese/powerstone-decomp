/* same module: aim-angle helper and homing update (continues previous row) (0c0c7668-0c0c7aa0) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int fx_calc_aim_angles(int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);

int fx_homing_shell_update(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register float t5;
    register float u8;
    register float u9;
    register float u10;
    register float t12;
    register float u15;
    register float u16;
    register float u17;
    register int t22;
    register int t24;
    register int t26;
    register int t28;
    register float u29;
    register int t30;
    register int t46;
    register int t48;
    register float t52;
    register float u54;
    register int t76;
    register int t78;
    register int t79;
    register int t88;
    register int t89;
    register float t113;
    register float u116;
    register float u117;
    register float u118;
    register float t120;
    register float u123;
    register float u124;
    register float u125;
    register int t141;
    register int t157;
    register int t159;
    register float t163;
    register float u165;
    register int t187;
    register int t189;
    register int t190;
    register int t199;
    register int t200;
    register float t224;
    register float u227;
    register float u228;
    register float u229;
    register float t231;
    register float u234;
    register float u235;
    register float u236;
    register int t252;
    register int t255;
    int t73;
    int t131;
    int t184;
    int t242;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                *(int *)((int)stk + 0) = (a4 + 0x20);
                t5 = math_sin_angle16((*(int *)((a4 + 0x30))));
                u8 = (((struct o20_float *)(a4))->v);
                u9 = (t5 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                u10 = u8;
                u10 = u10 + 5.0f * u9;
                (((struct o20_float *)(a4))->v) = u10;
                *(int *)((int)stk + 0) = (a4 + 0x28);
                t12 = math_cos_angle16((*(int *)((a4 + 0x30))));
                u15 = (((struct o28_float *)(a4))->v);
                u16 = (t12 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                u17 = u15;
                u17 = u17 + 5.0f * u16;
                (((struct o28_float *)(a4))->v) = u17;
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 5.0f))));
                t22 = (((struct o2E0_int *)(a4))->v);
                (((struct o40_float *)(t22))->v) = (((((struct o40_float *)(t22))->v)) - 0.199999988f);
                t24 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t24))->v) = (((((struct o1C_float *)(t24))->v)) + 0.799999952f);
                t26 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t26))->v) = (((((struct o20_float *)(t26))->v)) + 0.799999952f);
                t28 = (((struct o2E0_int *)(a4))->v);
                u29 = (((struct o24_float *)(t28))->v);
                (((struct o24_float *)(t28))->v) = (u29 - 0.199999988f);
                t255 = 0x24;
                if (!((u29 - 0.199999988f) > 0.0f)) {
                    t30 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t30 + 0x1);
                    t255 = (t30 + 0x1);
                }
            } else {
                t255 = t3;
                if (t3 == 3) {
                    t255 = (obj_destroy(a4));
                }
            }
        } else {
            t46 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t46 + 0x10)) = ((*(int *)((t46 + 0x10))) + 0xE38);
            t48 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t48 + 0x14)) = ((*(int *)((t48 + 0x14))) + 0x71C);
            (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
            t52 = math_sin_angle16(((((struct oF2_short *)(a4))->v)));
            u54 = t52;
            if (!(t52 > 0.0f)) {
                (((struct oF2_ushort *)(a4))->v) = 0x0;
                u54 = 0.0f;
            }
            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u54 / 2.0f) + 1.0f);
            (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
            if (((((struct oF0_short *)(a4))->v)) != 0) {
                (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
            }
            if ((((((struct oEE_short *)(a4))->v)) != 0) && (t73 = (((struct oF0_short *)(a4))->v), t73 == 0)) {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                t76 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
                *(int *)((int)stk + 0) = ((int)stk + 4);
                fx_calc_aim_angles(t76, a4, 0x0, 0x0, ((int)stk + 4));
                t78 = *(int *)((a4 + 0x30));
                t79 = *(int *)((((int)stk + 4) + 0x4));
                if (((int)(unsigned short)(t79 - t78) >= (int)0xAAA) && ((int)(unsigned short)(t79 - t78) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t79 - t78) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                    }
                }
                t88 = *(int *)((a4 + 0x2C));
                t89 = *(int *)((((int)stk + 4) + 0x0));
                if (((int)(unsigned short)(t89 - t88) >= (int)0xAAA) && ((int)(unsigned short)(t89 - t88) <= (int)0xF556)) {
                    if ((int)(unsigned short)(t89 - t88) < (int)0x8000) {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                    }
                }
            }
            *(int *)((int)stk + 0) = (a4 + 0x20);
            t113 = math_sin_angle16((*(int *)((a4 + 0x30))));
            u116 = (((struct o20_float *)(a4))->v);
            u117 = (t113 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
            u118 = u116;
            u118 = u118 + 20.0f * u117;
            (((struct o20_float *)(a4))->v) = u118;
            *(int *)((int)stk + 0) = (a4 + 0x28);
            t120 = math_cos_angle16((*(int *)((a4 + 0x30))));
            u123 = (((struct o28_float *)(a4))->v);
            u124 = (t120 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
            u125 = u123;
            u125 = u125 + 20.0f * u124;
            (((struct o28_float *)(a4))->v) = u125;
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 20.0f))));
            if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t131 = *(signed char *)((a4 + 0x108)), t131 == 0)) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
                *(volatile int *)((a4 + 0x2E0));
                FUN_0c0e6fe8();
            }
            t141 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t141 - 1);
            t255 = 0xEC;
            if ((short)(t141 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = 0x3;
                t255 = 0x3;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x258;
        (((struct oEE_ushort *)(a4))->v) = 0xA;
        (((struct oF0_ushort *)(a4))->v) = 0xA;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t157 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t157 + 0x10)) = ((*(int *)((t157 + 0x10))) + 0xE38);
        t159 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t159 + 0x14)) = ((*(int *)((t159 + 0x14))) + 0x71C);
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x800);
        t163 = math_sin_angle16(((((struct oF2_short *)(a4))->v)));
        u165 = t163;
        if (!(t163 > 0.0f)) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
            u165 = 0.0f;
        }
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((u165 / 2.0f) + 1.0f);
        (((struct o1C_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        (((struct o24_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = (((((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v)) / 10.0f);
        if (((((struct oF0_short *)(a4))->v)) != 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        }
        if ((((((struct oEE_short *)(a4))->v)) != 0) && (t184 = (((struct oF0_short *)(a4))->v), t184 == 0)) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            t187 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x1C));
            *(int *)((int)stk + 0) = ((int)stk + 4);
            fx_calc_aim_angles(t187, a4, 0x0, 0x0, ((int)stk + 4));
            t189 = *(int *)((a4 + 0x30));
            t190 = *(int *)((((int)stk + 4) + 0x4));
            if (((int)(unsigned short)(t190 - t189) >= (int)0xAAA) && ((int)(unsigned short)(t190 - t189) <= (int)0xF556)) {
                if ((int)(unsigned short)(t190 - t189) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x38E);
                }
            }
            t199 = *(int *)((a4 + 0x2C));
            t200 = *(int *)((((int)stk + 4) + 0x0));
            if (((int)(unsigned short)(t200 - t199) >= (int)0xAAA) && ((int)(unsigned short)(t200 - t199) <= (int)0xF556)) {
                if ((int)(unsigned short)(t200 - t199) < (int)0x8000) {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                } else {
                    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x38E);
                }
            }
        }
        *(int *)((int)stk + 0) = (a4 + 0x20);
        t224 = math_sin_angle16((*(int *)((a4 + 0x30))));
        u227 = (((struct o20_float *)(a4))->v);
        u228 = (t224 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        u229 = u227;
        u229 = u229 + 20.0f * u228;
        (((struct o20_float *)(a4))->v) = u229;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t231 = math_cos_angle16((*(int *)((a4 + 0x30))));
        u234 = (((struct o28_float *)(a4))->v);
        u235 = (t231 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        u236 = u234;
        u236 = u236 + 20.0f * u235;
        (((struct o28_float *)(a4))->v) = u236;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 20.0f))));
        if (((*(signed char *)((a4 + 0x2D8))) == 0) && (t242 = *(signed char *)((a4 + 0x108)), t242 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
            *(volatile int *)((a4 + 0x2E0));
            FUN_0c0e6fe8();
        }
        t252 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t252 - 1);
        t255 = 0xEC;
        if ((short)(t252 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = 0x3;
            t255 = 0x3;
        }
    }
    return t255;
}
