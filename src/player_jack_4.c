/* character 3 (Jack) (0c07438c-0c07660c) */

struct o120_float { char p[0x120]; float v; };
struct o1D0_float { char p[0x1D0]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E0_float { char p[0x3E0]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o490_float { char p[0x490]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o540_float { char p[0x540]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o750_float { char p[0x750]; float v; };
struct o960_float { char p[0x960]; float v; };
struct oD80_float { char p[0xD80]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_037d88(int, int);
int fx_spawn_038a0c(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_end_action_choose_state(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);

int pl_jack_attack_state_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(signed char *)((a4 + 0x7223));
    switch (t0) {
    case 1:
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                if (t0 != 6) {
                                    return t0;
                                }
                                return pl_end_action_choose_state(a4);
                            }
                            pl_step_motion(a4);
                            t0 = 0x71AA;
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                t1 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                                t0 = (t1 + 0x1);
                            }
                            return t0;
                        }
                        pl_step_motion(a4);
                        if (((((struct oEE_short *)(a4))->v)) == 0) {
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
                            (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                            (((struct o70_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o120_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                            (((struct o120_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o1D0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                            (((struct o1D0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v);
                            (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (u0 - 0.099999994f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v);
                            (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (u0 - 0.099999994f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v)) - 0x105B);
                        } else {
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                            (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                            (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4)) + 0x420)))->v);
                            (((struct o70_float *)((((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4)) + 0x420)))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                            (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                            (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 - 0.099999994f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                            (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 - 0.099999994f);
                            t0 = *(signed char *)((a4 + 0x71F1));
                            (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) - 0x105B);
                        }
                        t0 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                        t1 = (short)((t0 + 0x1) - 1);
                        if ((short)((t0 + 0x1) - 1) == 50) {
                            t0 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                            t1 = (t0 + 0x1);
                        }
                        return t1;
                    }
                    pl_step_motion(a4);
                    if (((((struct oEE_short *)(a4))->v)) == 0) {
                        t0 = *(signed char *)((a4 + 0x71F1));
                        (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v)) - 0x105B);
                    } else {
                        t0 = *(signed char *)((a4 + 0x71F1));
                        (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) - 0x105B);
                    }
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                    t1 = (short)((t0 + 0x1) - 1);
                    if ((short)((t0 + 0x1) - 1) == 40) {
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    return t1;
                }
                pl_step_motion(a4);
                if (((((struct oEE_short *)(a4))->v)) == 0) {
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct o70_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o120_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct o120_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o1D0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct o1D0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v);
                    (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (u0 + 0.099999994f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v);
                    (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (u0 + 0.099999994f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x5580 + a4))))->v)) - 0x105B);
                } else {
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                    (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4)) + 0x420)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4)) + 0x420)))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                    (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 + 0.099999994f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                    (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 + 0.099999994f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) - 0x105B);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = (short)((t0 + 0x1) - 1);
                if ((short)((t0 + 0x1) - 1) == 20) {
                    t0 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            pl_step_motion(a4);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            t1 = (short)((t0 + 0x1) - 1);
            if ((short)((t0 + 0x1) - 1) == 10) {
                t0 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        t0 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
        if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t0 = *(int *)((a4 + 0x1C));
        u0 = (((struct o20_float *)(a4))->v);
        u1 = (((struct o20_float *)(t0))->v);
        u2 = (((struct o24_float *)(t0))->v);
        u3 = (((struct o24_float *)(a4))->v);
        u4 = (((struct o28_float *)(t0))->v);
        u5 = (((struct o28_float *)(a4))->v);
        u6 = (u1 - u0);
        if ((u1 - u0) == 0.0f) {
            u6 = 9.99999997e-07f;
        }
        u0 = (u2 - u3);
        if ((u2 - u3) == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        u1 = (u4 - u5);
        if ((u4 - u5) == 0.0f) {
            u1 = 9.99999997e-07f;
        }
        t1 = ((int (*)(int, int, int, int, float))(math_atan_angle16))(t0, a5, a6, a7, ((-u1) / u6));
        t0 = t1;
        if (0.0f > u6) {
            t0 = (t1 + 0x8000);
        }
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t0 + 0x4000);
        u1 = math_signed_sqrt(u2);
        t0 = ((int (*)(float))(math_atan_angle16))(((-u1) / u0));
        t1 = t0;
        if (0.0f > u0) {
            t1 = (t0 + 0x8000);
        }
        if (((int)(unsigned short)(t1 + 0x4000) <= (int)0x8000) && ((int)(unsigned short)(t1 + 0x4000) >= (int)0xAAA)) {
            pl_start_motion(a4, 0x1, 0x64);
            fx_spawn_037d88(a4, 0x1);
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        } else {
            pl_start_motion(a4, 0x1, 0x60);
            fx_spawn_037d88(a4, 0x0);
            (((struct oEE_ushort *)(a4))->v) = 0x0;
        }
        break;
    case 2:
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                return t0;
                            }
                            return pl_end_action_choose_state(a4);
                        }
                        pl_step_motion(a4);
                        t0 = 0x71AA;
                        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                            t1 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                            t0 = (t1 + 0x1);
                        }
                        return t0;
                    }
                    pl_step_motion(a4);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o960_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                    (((struct o960_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 - 1.0f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct oD80_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                    (((struct oD80_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                    if (((((struct oEE_short *)(a4))->v)) == 0) {
                        t0 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                        t1 = (short)((t0 + 0x1) - 1);
                        if ((short)((t0 + 0x1) - 1) != 27) {
                        } else {
                            t0 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                            t1 = (t0 + 0x1);
                        }
                        t0 = t1;
                    } else {
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                        t2 = (short)((t1 + 0x1) - 1);
                        if ((short)((t1 + 0x1) - 1) == 18) {
                            t1 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        t0 = t2;
                    }
                    return t0;
                }
                pl_step_motion(a4);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o960_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                (((struct o960_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 + 1.0f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct oD80_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                (((struct oD80_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                if (((((struct oEE_short *)(a4))->v)) == 0) {
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                    t1 = (short)((t0 + 0x1) - 1);
                    if ((short)((t0 + 0x1) - 1) != 17) {
                    } else {
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                    t2 = (short)((t1 + 0x1) - 1);
                    if ((short)((t1 + 0x1) - 1) == 12) {
                        t1 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                return t0;
            }
            pl_step_motion(a4);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = (short)((t0 + 0x1) - 1);
                if ((short)((t0 + 0x1) - 1) != 7) {
                } else {
                    fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xD, 0x0, 0x3C, 0x0, 0xC14F250, 0xC14F25C);
                    fx_spawn_038a0c(a4, 0x0);
                    t0 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                t0 = t1;
            } else {
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
                t2 = (short)((t1 + 0x1) - 1);
                if ((short)((t1 + 0x1) - 1) == 6) {
                    fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xD, 0x0, 0x3C, 0x0, 0xC14F250, 0xC14F25C);
                    fx_spawn_038a0c(a4, 0x0);
                    t1 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
        if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t0 = *(int *)((a4 + 0x1C));
        u0 = (((struct o20_float *)(a4))->v);
        u1 = (((struct o20_float *)(t0))->v);
        u2 = (((struct o24_float *)(t0))->v);
        u3 = (((struct o24_float *)(a4))->v);
        u4 = (((struct o28_float *)(t0))->v);
        u5 = (((struct o28_float *)(a4))->v);
        u6 = (u1 - u0);
        if ((u1 - u0) == 0.0f) {
            u6 = 9.99999997e-07f;
        }
        u0 = (u2 - u3);
        if ((u2 - u3) == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        u1 = (u4 - u5);
        if ((u4 - u5) == 0.0f) {
            u1 = 9.99999997e-07f;
        }
        t1 = ((int (*)(int, int, int, int, float))(math_atan_angle16))(t0, a5, a6, a7, ((-u1) / u6));
        t0 = t1;
        if (0.0f > u6) {
            t0 = (t1 + 0x8000);
        }
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t0 + 0x4000);
        u1 = math_signed_sqrt(u2);
        t0 = ((int (*)(float))(math_atan_angle16))(((-u1) / u0));
        t1 = t0;
        if (0.0f > u0) {
            t1 = (t0 + 0x8000);
        }
        if (((int)(unsigned short)(t1 + 0x4000) <= (int)0x8000) && ((int)(unsigned short)(t1 + 0x4000) >= (int)0x1555)) {
            pl_start_motion(a4, 0x1, 0x65);
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        } else {
            pl_start_motion(a4, 0x1, 0x62);
            (((struct oEE_ushort *)(a4))->v) = 0x0;
        }
        break;
    case 3:
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                if (t0 != 6) {
                                    return t0;
                                }
                                return pl_end_action_choose_state(a4);
                            }
                            pl_step_motion(a4);
                            t0 = 0x71AA;
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                t1 = *(signed char *)((a4 + 0xB));
                                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                                t0 = (t1 + 0x1);
                            }
                            return t0;
                        }
                        pl_step_motion(a4);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                        (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 - 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                        (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o490_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                        (((struct o490_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                        (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 - 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                        (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 - 0.099999994f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                        (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 - 0.099999994f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) - 0x105B);
                        t0 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                        t1 = (short)((t0 + 0x1) - 1);
                        if ((short)((t0 + 0x1) - 1) == 50) {
                            t0 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                            t1 = (t0 + 0x1);
                        }
                        return t1;
                    }
                    pl_step_motion(a4);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) + 0x105B);
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                    t1 = (short)((t0 + 0x1) - 1);
                    if ((short)((t0 + 0x1) - 1) == 40) {
                        t0 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    }
                    return t1;
                }
                pl_step_motion(a4);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v);
                (((struct o750_float *)(((short)((short)t0 * (short)0xDC0) + (0x300 + a4))))->v) = (u0 + 1.0f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                (((struct o3E0_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o490_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                (((struct o490_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v);
                (((struct o540_float *)(((short)((short)t0 * (short)0x14A0) + (0x1E80 + a4))))->v) = (u0 + 1.0f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                (((struct o70_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 + 0.099999994f);
                t0 = *(signed char *)((a4 + 0x71F1));
                u0 = (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v);
                (((struct o74_float *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (u0 + 0.099999994f);
                t0 = *(signed char *)((a4 + 0x71F1));
                (((struct o54_uint *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v) = (((((struct o54_int *)(((short)((short)t0 * (short)0x6E0) + (0x6340 + a4))))->v)) - 0x105B);
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                t1 = (short)((t0 + 0x1) - 1);
                if ((short)((t0 + 0x1) - 1) == 20) {
                    t0 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            pl_step_motion(a4);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            t1 = (short)((t0 + 0x1) - 1);
            if ((short)((t0 + 0x1) - 1) == 10) {
                t0 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        t0 = (((struct o71F4_short *)(a4))->v);
        (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
        if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
            (((struct o71F4_ushort *)(a4))->v) = 0x0;
        }
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t0 = *(int *)((a4 + 0x1C));
        u0 = (((struct o20_float *)(a4))->v);
        u1 = (((struct o20_float *)(t0))->v);
        u2 = (((struct o24_float *)(t0))->v);
        u3 = (((struct o24_float *)(a4))->v);
        u4 = (((struct o28_float *)(t0))->v);
        u5 = (((struct o28_float *)(a4))->v);
        u6 = (u1 - u0);
        if ((u1 - u0) == 0.0f) {
            u6 = 9.99999997e-07f;
        }
        u0 = (u2 - u3);
        if ((u2 - u3) == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        u1 = (u4 - u5);
        if ((u4 - u5) == 0.0f) {
            u1 = 9.99999997e-07f;
        }
        t1 = ((int (*)(int, int, int, int, float))(math_atan_angle16))(t0, a5, a6, a7, ((-u1) / u6));
        t0 = t1;
        if (0.0f > u6) {
            t0 = (t1 + 0x8000);
        }
        u2 = (u1 * u1);
        u2 = u2 + u6 * u6;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t0 + 0x4000);
        u1 = math_signed_sqrt(u2);
        t0 = ((int (*)(float))(math_atan_angle16))(((-u1) / u0));
        t1 = t0;
        if (0.0f > u0) {
            t1 = (t0 + 0x8000);
        }
        if (((int)(unsigned short)(t1 + 0x4000) >= (int)0x8000) && ((int)(unsigned short)(t1 + 0x4000) <= (int)0xF555)) {
            pl_start_motion(a4, 0x1, 0x66);
        } else {
            pl_start_motion(a4, 0x1, 0x61);
        }
        fx_spawn_037d88(a4, 0x1);
        break;
    default:
        if (t0 != 4) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (t0 != 7) {
                        if (t0 != 8) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0760AE))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0765A6))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC075802))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0765A6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0753E0))(a4, a5, a6, a7);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}
