/* character 3 (Jack) (0c07282c-0c0742fc) */

/* named globals (symbols.txt) */
extern char g_pl_jack_start_action_tbl[];
extern char g_pl_jack_update_action_tbl[];
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_mode01_03_enter(int);
int pl_mode04_enter(int);
int pl_mode05_enter(int);
int pl_mode06_enter(int);
int pl_mode07_enter(int);
int pl_mode10_enter(int);
int pl_mode08_enter(int);
int pl_mode09_enter(int, int, int, int);
int pl_mode11_enter(int);
int pl_mode12_enter(int);
int pl_mode13_enter(int);
int pl_mode14_enter(int);
int pl_mode15_enter(int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion(int a4, int a5, int a6);
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oF0_short { char p[0xF0]; short v; };
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int);
int pl_mode01_03_update(int);
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode08_update(int, int, int, int);
int pl_mode09_update(int, int, int, int);
int pl_mode13_update(int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int pl_jack_mode01_03_update(int);
int pl_jack_mode12_update(int);
int pl_jack_mode11_update(int, int, int, int);
struct o0_float { float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
int pl_start_motion(int, int, int);
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o8_float { char p[0x8]; float v; };
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
struct o24_float { char p[0x24]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int pl_change_state();

int pl_jack_mode01_03_enter(int a4);
int pl_jack_mode04_update(int a4, int a5, int a6, int a7);

int pl_jack_state_enter(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + ((int)g_pl_jack_start_action_tbl))))))(a4, a5, a6, a7);
            }
                break;
            case 2:
            case 6:
            {
                if ((*(signed char *)((a4 + 0x721E))) == 0) {
                    pl_jack_mode01_03_enter(a4);
                } else {
                    pl_mode01_03_enter(a4);
                }
            }
                break;
            case 8:
            {
                pl_mode04_enter(a4);
            }
                break;
            case 10:
            {
                pl_mode05_enter(a4);
            }
                break;
            case 12:
            {
                pl_mode06_enter(a4);
            }
                break;
            case 14:
            {
                pl_mode07_enter(a4);
            }
                break;
            case 16:
            {
                pl_mode08_enter(a4);
            }
                break;
            case 18:
            {
                pl_mode09_enter(a4, a5, a6, a7);
            }
                break;
            case 20:
            {
                pl_mode10_enter(a4);
            }
                break;
            case 22:
            {
                pl_mode11_enter(a4);
            }
                break;
            case 24:
            {
                pl_mode12_enter(a4);
                (((struct oEC_ushort *)(a4))->v) = 0x14;
            }
                break;
            case 26:
            {
                pl_mode13_enter(a4);
            }
                break;
            case 28:
            {
                pl_mode14_enter(a4);
            }
                break;
            default:
            {
                pl_mode15_enter(a4, a5, a6);
            }
                break;
        }
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_jack_start_motion_16(int a4)
{
    return pl_start_motion(a4, 0x1, 0x10);
}

int pl_jack_start_motion_24(int a4)
{
    return pl_start_motion(a4, 0x1, 0x18);
}

int pl_jack_start_motion_17(int a4)
{
    return pl_start_motion(a4, 0x1, 0x11);
}

int pl_jack_start_motion_25(int a4)
{
    return pl_start_motion(a4, 0x1, 0x19);
}

int pl_jack_start_motion_18(int a4)
{
    return pl_start_motion(a4, 0x1, 0x12);
}

int pl_jack_start_motion_27(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1B);
}

int pl_jack_start_motion_20(int a4)
{
    return pl_start_motion(a4, 0x1, 0x14);
}

int pl_jack_start_motion_26(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1A);
}

int pl_jack_start_motion_19(int a4)
{
    return pl_start_motion(a4, 0x1, 0x13);
}

int pl_jack_start_motion_26_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1A);
}

int pl_jack_start_motion_2(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_jack_start_motion_28(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1C);
}

int pl_jack_start_motion_0(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_jack_start_motion_3(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_jack_start_motion_0_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x0);
}

int pl_jack_start_motion_1(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1);
}

int pl_jack_start_motion_2_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_jack_start_motion_3_b(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_jack_start_motion_4(int a4)
{
    pl_start_motion(a4, 0x1, 0x4);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int pl_jack_start_motion_5(int a4)
{
    pl_start_motion(a4, 0x1, 0x5);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    return 0x0;
}

int pl_jack_start_motion_14(int a4)
{
    return pl_start_motion(a4, 0x1, 0xE);
}

int pl_jack_start_motion_48(int a4)
{
    return pl_start_motion(a4, 0x1, 0x30);
}

int pl_jack_start_motion_49(int a4)
{
    return pl_start_motion(a4, 0x1, 0x31);
}

int pl_jack_update_action_18(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                return pl_end_action_choose_state(a4, 0x790, 0x580, 0x840);
                            }
                            return 0x71AA;
                        }
                        return t0;
                    }
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v) = (u0 - 1.5f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v);
                    (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v) = (u0 - 1.5f);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((0x790 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                    (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x840)))->v) = (1.0f / u0);
                    t0 = *(signed char *)((a4 + 0x71F1));
                    u0 = (((struct o70_float *)((0x4D0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                    (((struct o74_float *)((0x580 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                    t0 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                    t1 = 0xF0;
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0xA)) = 0x5;
                        t1 = 0x5;
                    }
                    return t1;
                }
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = 0x4;
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                }
                return 0xF0;
            }
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v);
            (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x790)))->v) = (u0 + 1.5f);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v);
            (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x4D0)))->v) = (u0 + 1.5f);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((0x790 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
            (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x840)))->v) = (1.0f / u0);
            t0 = *(signed char *)((a4 + 0x71F1));
            u0 = (((struct o70_float *)((0x4D0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
            (((struct o74_float *)((0x580 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                (((struct oF0_ushort *)(a4))->v) = 0xA;
            }
            return 0xF0;
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x12;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x4;
    }
    return 0xF0;
}

int pl_jack_update_action_19(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 == 7) {
                                    t1 = *(signed char *)((a4 + 0x71F1));
                                    u0 = (((struct o70_float *)((((short)((short)t1 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v);
                                    (((struct o70_float *)((((short)((short)t1 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v) = (u0 - 1.0f);
                                    t1 = *(signed char *)((a4 + 0x71F1));
                                    u0 = (((struct o70_float *)((0x9A0 + ((short)((short)t1 * (short)0xDC0) + (0x300 + a4)))))->v);
                                    (((struct o74_float *)((0xA50 + ((short)((short)t1 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0x8;
                                        (((struct oF0_ushort *)(a4))->v) = 0x4;
                                    }
                                    return 0xF0;
                                }
                                if (t0 == 8) {
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0x9;
                                        (((struct oF0_ushort *)(a4))->v) = 0xA;
                                    }
                                    return 0xF0;
                                }
                                if (t0 == 9) {
                                    t1 = (((struct oF0_short *)(a4))->v);
                                    (((struct oF0_ushort *)(a4))->v) = (t1 - 1);
                                    t2 = 0xF0;
                                    if ((short)(t1 - 1) == 0) {
                                        *(unsigned char *)((a4 + 0xA)) = 0xA;
                                        t2 = 0xA;
                                    }
                                    return t2;
                                }
                                if (t0 == 10) {
                                    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                                        return pl_end_action_choose_state(a4, 0xA50, 0x3, 0xA);
                                    }
                                    return 0x71AA;
                                }
                                return t0;
                            }
                            t0 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                *(unsigned char *)((a4 + 0xA)) = 0x7;
                                (((struct oF0_ushort *)(a4))->v) = 0x3;
                            }
                            return 0xF0;
                        }
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v);
                        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x9A0)))->v) = (u0 + 1.0f);
                        t0 = *(signed char *)((a4 + 0x71F1));
                        u0 = (((struct o70_float *)((0x9A0 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v);
                        (((struct o74_float *)((0xA50 + ((short)((short)t0 * (short)0xDC0) + (0x300 + a4)))))->v) = (1.0f / u0);
                        t0 = (((struct oF0_short *)(a4))->v);
                        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            *(unsigned char *)((a4 + 0xA)) = 0x6;
                            (((struct oF0_ushort *)(a4))->v) = 0x6;
                        }
                        return 0xF0;
                    }
                    t0 = (((struct oF0_short *)(a4))->v);
                    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                    if ((short)(t0 - 1) != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0xA)) = 0x5;
                        (((struct oF0_ushort *)(a4))->v) = 0x3;
                    }
                    return 0xF0;
                }
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned char *)((a4 + 0xA)) = 0x4;
                    (((struct oF0_ushort *)(a4))->v) = 0x3;
                }
                return 0xF0;
            }
            t0 = (((struct oF0_short *)(a4))->v);
            (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                (((struct oF0_ushort *)(a4))->v) = 0x4;
            }
            return 0xF0;
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        (((struct oF0_ushort *)(a4))->v) = 0x3;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF0_ushort *)(a4))->v) = 0x5;
    }
    return 0xF0;
}

int pl_jack_state_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((unsigned int)t0 < (unsigned int)0x10) {
        switch ((t0 << 1)) {
            case 0:
            case 4:
            {
                t3 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + ((int)g_pl_jack_update_action_tbl)));
                return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
            }
            case 2:
            case 6:
            {
                if ((*(signed char *)((a4 + 0x721E))) == 0) {
                    return pl_jack_mode01_03_update(a4);
                }
                return pl_mode01_03_update(a4);
            }
            case 8:
            {
                return pl_jack_mode04_update(a4, a5, a6, a7);
            }
            case 10:
            {
                return pl_mode05_update(a4);
            }
            case 12:
            {
                return pl_mode06_update(a4);
            }
            case 14:
            {
                return pl_jack_mode12_update(a4);
            }
            case 16:
            {
                return pl_mode08_update(a4, a5, a6, a7);
            }
            case 18:
            {
                return pl_mode09_update(a4, a5, a6, a7);
            }
            case 20:
            {
                return pl_mode10_update(a4, a5, a6, a7);
            }
            case 22:
            {
                return pl_jack_mode11_update(a4, a5, a6, a7);
            }
            case 24:
            {
                return pl_jack_mode12_update(a4);
            }
            case 26:
            {
                return pl_mode13_update(a4);
            }
            case 28:
            {
                return pl_mode14_update(a4);
            }
            default:
            {
                return pl_mode15_update(a4);
            }
        }
    }
    return t0;
}

int pl_jack_mode01_03_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0xA);
    (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC072FD4)->v));
    (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC072FD4)->v));
    return 0x48;
}

int pl_jack_mode04_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -10.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        (((struct o108_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_jack_mode04_phase1(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    pl_step_motion(a4);
    if (((((struct o0_float *)0xC0731D8)->v)) > (*(float *)0xC494D1C)) {
        u0 = (((struct o8_float *)0xC0731D8)->v);
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / u0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x38);
        *(unsigned char *)((a4 + 0xA)) = 0x3;
    }
    t0 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        t0 = (signed char)t1;
        if ((signed char)t1 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = 0x2;
            t0 = 0x2;
        }
    }
    return t0;
}

int pl_jack_mode04_phase2(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x37);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_jack_mode04_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return ((int (*)(int, int, int, int))(0xC07320C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC073208))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC073204))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC073200))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0731FC))(a4, a5, a6, a7);
}

float pl_jack_mode12_phase0(int a4, float f4, float f5)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)0xC494D1C;
    u1 = u0;
    if (!(u0 > 1.0f)) {
        u1 = 1.0f;
    }
    u0 = u1;
    if (!(800.0f > u1)) {
        u0 = 800.0f;
    }
    u1 = (f5 * (-(f4 / f5)));
    u2 = (u1 * (-(f4 / f5)));
    (((struct o7254_float *)(a4))->v) = (((((f4 * (-(f4 / f5)))) - u2) / 2.0f) + _builtin_fabsf((((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)))));
    (((struct o4_float *)((0x7254 + a4)))->v) = ((math_signed_sqrt(((((((struct o7254_float *)(a4))->v)) * 2.0f) / (-f5)))) + (-(f4 / f5)));
    u1 = (((struct o7258_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * (u0 / u1));
    u2 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    (((struct o40_float *)(a4))->v) = (u2 * (u0 / u1));
    (((struct o3C_float *)(a4))->v) = f4;
    (((struct o48_float *)(a4))->v) = f5;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    return (u2 * (u0 / u1));
}

int pl_jack_mode12_phase1(int a4)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    pl_apply_velocity(v0_1);
    pl_apply_acceleration(v0_1);
    pl_step_motion(v0_1);
    v0_0 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x108))) == 0)) goto L_C0733BA;
    v0_1 = (signed char)(pl_get_hit_count_of_opponent(v0_0)) != 1;
    if (v0_1) goto L_C0733BA;
    (((struct o108_uchar *)(v0_0))->v) = 0x0;
    pl_start_motion(v0_0, 0x1, 0xFFFFFFA5);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    L_C0733E8:;
    v0_1 = *(signed char *)((v0_0 + 0xA));
    *(unsigned char *)((v0_0 + 0xA)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    L_C0733EE:;
    return v0_1;
    L_C0733BA:;
    v0_1 = (0x3C);
    w0_0 = (0.0f);
    if ((!(0.0f > ((((struct o3C_float *)(v0_0))->v))))) goto L_C0733EE;
    v0_2 = pl_landed(v0_0);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 == 0)) goto L_C0733EE;
    pl_change_state(v0_0, 0x6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    *(unsigned char *)((v0_0 + 0xA)) = ((*(signed char *)((v0_0 + 0xA))) + 0x1);
    goto L_C0733E8;
}

int pl_jack_mode12_phase2(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFFA6);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f));
        (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f));
        (((struct o3C_float *)(a4))->v) = 20.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
