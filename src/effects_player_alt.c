/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b7998-0c0b8460) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b7998(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c048ea4(int, int, int, int);
int FUN_0c0b8084(int);

int FUN_0c0b7fa0(int a4);
int FUN_0c0b83dc(int a4, int a5, int a6, int a7);

int fx_spawn_08(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register int t16;
    register int t21;
    register int t22;
    register float u41;
    register float u42;
    register float u43;
    register float t86;
    register float u89;
    register int t94;
    register int t98;
    register int t101;
    register int t109;
    register int t114;
    register int t115;
    register float u134;
    register float u135;
    register float u136;
    register float t179;
    register float u182;
    register int t187;
    register int t188;
    register int t191;
    register int t194;
    register int t195;
    register int t199;
    register int t29;
    register int t46;
    register int t122;
    register int t139;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    t0 = *(signed char *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = obj_create(0x1, 0x1, 0x2);
            if (t1 == 0) {
                return ((int (*)(void))(0xC0B7F58))();
            }
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC0B8430;
            (((struct o58_float *)(t1))->v) = 2.0f;
            (((struct o54_float *)(t1))->v) = 2.0f;
            (((struct o50_float *)(t1))->v) = 2.0f;
            t5 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            thunk_FUN_0c062242(((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4))));
            t8 = 0x0;
            for (;;) {
                if (t8 == 0) {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x0)) = 0x0;
                }
                *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t16 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t8 << 2)) + 0x0))), ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), t8);
                t21 = (t8 << 2);
                t8 = (t8 + 0x1);
                t22 = *(int *)((((0x2E0 + t1) + t21) + 0x0));
                (((struct o24_float *)(t22))->v) = 1.0f;
                (((struct o20_float *)(t22))->v) = 1.0f;
                (((struct o1C_float *)(t22))->v) = 1.0f;
                if ((int)t8 >= (int)0x2) {
                    break;
                }
            }
            *(unsigned int *)((t1 + 0x1C)) = (*(int *)(((int)stk + 4)));
            if ((*(int *)(((int)stk + 8))) == 1) {
                if ((int)0x0 < (int)0xA) {
                    *(unsigned int *)((t1 + 0x2C)) = 0x0;
                    *(unsigned int *)((t1 + 0x30)) = (int)(((float)0x0 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0x10) {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFEAAB;
                        t29 = (0xFFFFFFF6 * 0x3C);
                    } else {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFDC72;
                        t29 = (0xFFFFFFF0 * 0x5A);
                    }
                    *(unsigned int *)((t1 + 0x30)) = (int)(((float)t29 * 65536.0f) / 360.0f);
                }
            } else {
                if ((int)0x0 < (int)0x6) {
                    *(unsigned int *)((t1 + 0x2C)) = 0x0;
                    u41 = (float)(0x0 * 0x3C);
                    *(unsigned int *)((t1 + 0x30)) = (int)((u41 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0xA) {
                        *(unsigned int *)((t1 + 0x2C)) = 0xFFFFEAAB;
                        u42 = (float)(int)(0xFFFFFFFA * 0x5A);
                        *(unsigned int *)((t1 + 0x30)) = (int)((u42 * 65536.0f) / 360.0f);
                    } else {
                        if ((int)0x0 < (int)0xD) {
                            *(unsigned int *)((t1 + 0x2C)) = 0xFFFFDC72;
                            u43 = (float)(int)(0xFFFFFFF6 * 0x78);
                            *(unsigned int *)((t1 + 0x30)) = (int)((u43 * 65536.0f) / 360.0f);
                        } else {
                            if ((int)0x0 < (int)0x11) {
                                *(unsigned int *)((t1 + 0x2C)) = 0x1555;
                                t46 = (0xFFFFFFF3 * 0x5A);
                            } else {
                                *(unsigned int *)((t1 + 0x2C)) = 0x238E;
                                t46 = (0xFFFFFFEF * 0x78);
                            }
                            *(unsigned int *)((t1 + 0x30)) = (int)(((float)t46 * 65536.0f) / 360.0f);
                        }
                    }
                }
            }
            *(unsigned int *)((t1 + 0x34)) = 0x0;
            t86 = math_cos_angle16(((-(*(int *)((t1 + 0x30)))) + 0x14000));
            *(float *)(((int)stk + 0)) = t86;
            u89 = (t86 * (math_sin_angle16(((-(*(int *)((t1 + 0x2C)))) + 0x14000))));
            (((struct o38_float *)(t1))->v) = (u89 * 35.0f);
            *(float *)(((int)stk + 0)) = (math_sin_angle16(((-(*(int *)((t1 + 0x30)))) + 0x14000)));
            math_sin_angle16(((-(*(int *)((t1 + 0x2C)))) + 0x14000));
            return ((int (*)(void))(0xC0B7F14))();
        }
        if (t0 == 2) {
            t94 = obj_create(0x1, 0x1, 0x2);
            if (t94 == 0) {
                return ((int (*)(void))(0xC0B7F58))();
            }
            *(unsigned char *)((t94 + 0x0)) = 0x1;
            *(unsigned char *)((t94 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x3)));
            *(unsigned char *)((t94 + 0x1)) = 0x1;
            *(unsigned short *)((t94 + 0x6)) = 0xF;
            *(unsigned char *)((t94 + 0x5)) = 0x19;
            *(unsigned int *)((t94 + 0x10)) = 0xC0B8430;
            (((struct o58_float *)(t94))->v) = 2.0f;
            (((struct o54_float *)(t94))->v) = 2.0f;
            (((struct o50_float *)(t94))->v) = 2.0f;
            t98 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            thunk_FUN_0c062242(((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t98 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t98 * (unsigned short)0x72D0) + 0xC7E40C4))));
            t101 = 0x0;
            for (;;) {
                if (t101 == 0) {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x0)) = 0x0;
                }
                *(unsigned short *)(((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t109 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t94) + (t101 << 2)) + 0x0))), ((signed char)((((t109 << 1) + t109) << 2) << 1) + 0xC6002D0), t101);
                t114 = (t101 << 2);
                t101 = (t101 + 0x1);
                t115 = *(int *)((((0x2E0 + t94) + t114) + 0x0));
                (((struct o24_float *)(t115))->v) = 1.0f;
                (((struct o20_float *)(t115))->v) = 1.0f;
                (((struct o1C_float *)(t115))->v) = 1.0f;
                if ((int)t101 >= (int)0x2) {
                    break;
                }
            }
            *(unsigned int *)((t94 + 0x1C)) = (*(int *)(((int)stk + 4)));
            if ((*(int *)(((int)stk + 8))) == 1) {
                if ((int)0x0 < (int)0xA) {
                    *(unsigned int *)((t94 + 0x2C)) = 0x0;
                    *(unsigned int *)((t94 + 0x30)) = (int)(((float)0x0 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0x10) {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFEAAB;
                        t122 = (0xFFFFFFF6 * 0x3C);
                    } else {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFDC72;
                        t122 = (0xFFFFFFF0 * 0x5A);
                    }
                    *(unsigned int *)((t94 + 0x30)) = (int)(((float)t122 * 65536.0f) / 360.0f);
                }
            } else {
                if ((int)0x0 < (int)0x6) {
                    *(unsigned int *)((t94 + 0x2C)) = 0x0;
                    u134 = (float)(0x0 * 0x3C);
                    *(unsigned int *)((t94 + 0x30)) = (int)((u134 * 65536.0f) / 360.0f);
                } else {
                    if ((int)0x0 < (int)0xA) {
                        *(unsigned int *)((t94 + 0x2C)) = 0xFFFFEAAB;
                        u135 = (float)(int)(0xFFFFFFFA * 0x5A);
                        *(unsigned int *)((t94 + 0x30)) = (int)((u135 * 65536.0f) / 360.0f);
                    } else {
                        if ((int)0x0 < (int)0xD) {
                            *(unsigned int *)((t94 + 0x2C)) = 0xFFFFDC72;
                            u136 = (float)(int)(0xFFFFFFF6 * 0x78);
                            *(unsigned int *)((t94 + 0x30)) = (int)((u136 * 65536.0f) / 360.0f);
                        } else {
                            if ((int)0x0 < (int)0x11) {
                                *(unsigned int *)((t94 + 0x2C)) = 0x1555;
                                t139 = (0xFFFFFFF3 * 0x5A);
                            } else {
                                *(unsigned int *)((t94 + 0x2C)) = 0x238E;
                                t139 = (0xFFFFFFEF * 0x78);
                            }
                            *(unsigned int *)((t94 + 0x30)) = (int)(((float)t139 * 65536.0f) / 360.0f);
                        }
                    }
                }
            }
            *(unsigned int *)((t94 + 0x34)) = 0x0;
            t179 = math_cos_angle16(((-(*(int *)((t94 + 0x30)))) + 0x14000));
            *(float *)(((int)stk + 0)) = t179;
            u182 = (t179 * (math_sin_angle16(((-(*(int *)((t94 + 0x2C)))) + 0x14000))));
            (((struct o38_float *)(t94))->v) = (u182 * 35.0f);
            *(float *)(((int)stk + 0)) = (math_sin_angle16(((-(*(int *)((t94 + 0x30)))) + 0x14000)));
            math_sin_angle16(((-(*(int *)((t94 + 0x2C)))) + 0x14000));
            return ((int (*)(void))(0xC0B7F14))();
        }
        return ((int (*)(int, int, int, int))(0xC0B7F64))(a4, a5, a6, a7);
    }
    t187 = obj_create(0x5, 0x1, 0xA);
    if (t187 == 0) {
        return ((int (*)(void))(0xC0B7F64))();
    }
    *(unsigned char *)((t187 + 0x0)) = 0x1;
    t188 = *(int *)(((int)stk + 4));
    *(unsigned char *)((t187 + 0x3)) = (*(signed char *)((t188 + 0x3)));
    *(unsigned char *)((t187 + 0x1)) = 0x1;
    *(unsigned short *)((t187 + 0x6)) = 0xF;
    *(unsigned char *)((t187 + 0x5)) = 0x19;
    *(unsigned int *)((t187 + 0x10)) = 0xC0B8430;
    FUN_0c0e6fe8();
    t191 = *(signed char *)((t188 + 0x3));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t191 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    t194 = 0x0;
    t195 = 0x0;
    for (;;) {
        *(unsigned char *)(((*(int *)((((0x2E0 + t187) + t195) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + t187) + t195) + 0x0))) + 0x2)) = 0x1F;
        t199 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
        FUN_0c06233a((*(int *)((((0x2E0 + t187) + t195) + 0x0))), ((signed char)((((t199 << 1) + t199) << 2) << 1) + 0xC6002D0), 0x4);
        FUN_0c0b7998((*(int *)((((0x2E0 + t187) + t195) + 0x0))));
        t194 = (t194 + 0x1);
        t195 = (t195 + 0x4);
        if ((int)t194 >= (int)0xA) {
            break;
        }
    }
    *(unsigned char *)(((0x105 + t187) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + t187) + 0x1)) = 0x1;
    (((struct o105_uchar *)(t187))->v) = 0x1;
    *(unsigned int *)((t187 + 0x1C)) = (*(int *)(((int)stk + 4)));
    (((struct oEC_ushort *)(t187))->v) = 0x41;
    return ((int (*)(int, int, int, int))(0xC0B7F64))((0x105 + t187), a5, a6, a7);
}

int FUN_0c0b7fa0(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;

    t3 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    t3 = (0x2E0 + a4);
    t4 = 0x0;
    t5 = 0x0;
    t6 = (0x2E0 + a4);
    t7 = (0x2E0 + a4);
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((t6 + 0x0));
        u0 = (((struct o94_float *)(t9))->v);
        (((struct o94_float *)(t9))->v) = (u0 - 1.0f);
        if (0.0f > (u0 - 1.0f)) {
            t3 = (*(int *)((t7 + 0x0)));
            FUN_0c0b7998(t3);
        } else {
            t9 = t0;
            t10 = t4;
        }
        t0 = t9;
        t3 = 0x2E0;
        t4 = t10;
        t0 = 0x28;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        u0 = *(float *)((t0 + 0x0));
        t0 = 0x30;
        (((struct o4_float *)(t3))->v) = (((((struct o4_float *)(t3))->v)) + u0);
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        u0 = *(float *)((t0 + 0x0));
        t0 = 0x2C;
        (((struct oC_float *)(t3))->v) = (((((struct oC_float *)(t3))->v)) + u0);
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t8);
        t3 = (*(int *)((t3 + 0x0)));
        t0 = (t0 + t3);
        t5 = (t5 + 0x1);
        (((struct o8_float *)(t3))->v) = (((((struct o8_float *)(t3))->v)) + (*(float *)((t0 + 0x0))));
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        t6 = (t6 + 0x4);
        if ((int)t5 >= (int)0xA) {
            break;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if (((short)(t0 - 1) != 0) && (t1 = *(int *)((a4 + 0x1C)), t2 = *(signed char *)((0x71BA + t1)), t2 == 11)) {
        t0 = t2;
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
        t0 = 0x5;
    }
    return t0;
}

int FUN_0c0b83dc(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c048ea4((a4 + 0x20), a5, a6, a7);
    t1 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int fx_update_08(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 4) {
                if (t0 != 5) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0B83FC))(a4, a5, a6, a7);
            }
            return FUN_0c0b83dc(a4, a5, a6, a7);
        }
        return FUN_0c0b8084(a4);
    }
    return FUN_0c0b7fa0(a4);
}
