/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b7590-0c0b7998) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_effect_at_point(int, int);
int FUN_0c048ea4(int, float);
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);

int fx_update_falcon_shot(int a4)
{
    int stk[6];
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t25;
    int t39;
    register int t48;
    register int t51;
    register int t69;
    register int t72;
    register int t85;
    register int t123;
    register int t124;
    int t138;
    register int t140;
    register int t142;
    register int t144;
    register int t146;
    register float u149;
    register float u150;
    register float u152;
    register float t153;
    register int t155;
    register int t157;
    register int t159;
    register int t161;
    register int t163;
    register float t189;
    register float u192;
    register float t194;
    register float u197;
    register int t206;
    register int t209;
    register int t219;
    register int t49;
    int t50;
    register int t70;
    int t71;
    register int t207;
    int t208;

    if ((*(signed char *)(((0x308 + a4) + 0x0))) != 0) {
        t1 = (((struct o2E4_int *)(a4))->v);
        (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.199999988f);
        t3 = (((struct o2E4_int *)(a4))->v);
        (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.199999988f);
        t5 = (((struct o2E4_int *)(a4))->v);
        (((struct o24_float *)(t5))->v) = (((((struct o24_float *)(t5))->v)) + 0.099999994f);
        (((struct o308_uchar *)(a4))->v) = ((*(signed char *)(((0x308 + a4) + 0x0))) - 1);
    } else {
        t8 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t8 + 0x1);
        if (((signed char)((t8 + 0x1) - 1) & 1) != 0) {
            (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.699999988f;
            (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.699999988f;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.19999993f;
        } else {
            (((struct o1C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.29999995f;
            (((struct o20_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.29999995f;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
        }
    }
    t25 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t25 + 0x18)) = (unsigned short)((*(int *)((t25 + 0x18))) + 0x38E);
    if (((*(int *)0xC7F307C) & 7) == 0) {
        fx_spawn_effect_at_point((*(signed char *)((a4 + 0x3))), (a4 + 0x20));
    }
    t39 = *(signed char *)((a4 + 0x8));
    if ((t39 != 0) && (t39 != 1)) {
        if (t39 == 2) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t48 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t48 - 1);
            if (((short)(t48 - 1) != 0) && ((t49 = *(signed char *)((a4 + 0x108)), t49 == 0) && (t50 = *(signed char *)((a4 + 0x2D8)), t50 == 0))) {
                t51 = FUN_0c0555dc();
                t219 = t51;
                if (t51 != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x5;
                    *(unsigned char *)((a4 + 0x8)) = 0x4;
                    t219 = 0x4;
                }
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                *(unsigned char *)((a4 + 0x8)) = 0x4;
                t219 = 0x4;
            }
        } else {
            if (t39 == 3) {
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                t69 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t69 - 1);
                if (((short)(t69 - 1) != 0) && ((t70 = *(signed char *)((a4 + 0x108)), t70 == 0) && (t71 = *(signed char *)((a4 + 0x2D8)), t71 == 0))) {
                    t72 = FUN_0c0555dc();
                    t219 = t72;
                    if (t72 != 0) {
                        (((struct oEC_ushort *)(a4))->v) = 0x5;
                        *(unsigned char *)((a4 + 0x8)) = 0x4;
                        t219 = 0x4;
                    }
                } else {
                    (((struct oEC_ushort *)(a4))->v) = 0x5;
                    *(unsigned char *)((a4 + 0x8)) = 0x4;
                    t219 = 0x4;
                }
            } else {
                if (t39 == 4) {
                    FUN_0c048ea4((a4 + 0x20), 2.0f);
                    t85 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t85 + 0x1);
                    t219 = (t85 + 0x1);
                } else {
                    t219 = t39;
                    if (t39 == 5) {
                        t219 = (obj_destroy(a4));
                    }
                }
            }
        }
    } else {
        t123 = (((struct oF0_short *)(a4))->v);
        if ((int)t123 < (int)0x7) {
        } else {
            if ((int)t123 >= (int)0x28) {
            } else {
                t124 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t124) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t124) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t124) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 12);
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o20_float *)(a4))->v)));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o24_float *)(a4))->v)));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o28_float *)(a4))->v)));
                if ((*(float *)(((int)stk + 12))) == 0.0f) {
                    *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                }
                t138 = math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / (*(float *)(((int)stk + 12)))));
                t140 = (0xFFFF & t138);
                if (0.0f > (*(float *)(((int)stk + 12)))) {
                    t140 = ((0xFFFF & t138) + 0x8000);
                }
                t142 = *(int *)((a4 + 0x30));
                t144 = (unsigned short)((unsigned short)(0x4000 + t140) - t142);
                if (((unsigned short)((unsigned short)(0x4000 + t140) - t142) & 0x8000) != 0) {
                    t144 = ((unsigned short)((unsigned short)(0x4000 + t140) - t142) | 0xFFFF0000);
                }
                t146 = 0xFFFFFDDE;
                if ((int)t144 > 0) {
                    t146 = 0x222;
                }
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + t146);
                u149 = *(float *)(((int)stk + 12));
                *(float *)(((int)stk + 4)) = u149;
                u150 = *(float *)(((int)stk + 20));
                *(float *)(((int)stk + 8)) = u150;
                u152 = (u150 * u150);
                u152 = u152 + u149 * (*(float *)(((int)stk + 4)));
                t153 = math_signed_sqrt(u152);
                t155 = math_atan_angle16(((-t153) / (*(float *)(((int)stk + 16)))));
                t157 = t155;
                if (0.0f > (*(float *)(((int)stk + 16)))) {
                    t157 = (t155 + 0x8000);
                }
                t159 = *(int *)((a4 + 0x2C));
                t161 = (unsigned short)((-(unsigned short)(0x4000 + t157)) - t159);
                if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t157)) - t159)) != 0) {
                    t161 = ((unsigned short)((-(unsigned short)(0x4000 + t157)) - t159) | 0xFFFF0000);
                }
                t163 = 0xFFFFFDDE;
                if ((int)t161 > 0) {
                    t163 = 0x222;
                }
                *(unsigned int *)((a4 + 0x2C)) = (unsigned short)((*(int *)((a4 + 0x2C))) + t163);
            }
        }
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        t189 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u192 = (t189 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o38_float *)(a4))->v) = (u192 * 20.0f);
        t194 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u197 = (t194 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o40_float *)(a4))->v) = (u197 * 20.0f);
        (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 20.0f));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t206 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t206 - 1);
        if (((short)(t206 - 1) != 0) && ((t207 = *(signed char *)((a4 + 0x108)), t207 == 0) && (t208 = *(signed char *)((a4 + 0x2D8)), t208 == 0))) {
            t209 = FUN_0c0555dc();
            t219 = t209;
            if (t209 != 0) {
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                *(unsigned char *)((a4 + 0x8)) = 0x4;
                t219 = 0x4;
            }
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            *(unsigned char *)((a4 + 0x8)) = 0x4;
            t219 = 0x4;
        }
    }
    return t219;
}
