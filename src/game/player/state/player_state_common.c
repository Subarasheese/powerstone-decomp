/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c063318-0c0641a0) */

struct o3C_float { char p[0x3C]; float v; };
struct o71C8_int { char p[0x71C8]; int v; };
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_landed(int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int obj_set_mode_owner(int, int);
int obj_touched_by_slot(int, int);
int obj_can_interact(int, int, int);
struct o71CC_int { char p[0x71CC]; int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int snd_play_char_voice(int a4, int a5);
int pl_start_motion(int, int, int);
int pl_start_motion(int a4, int a5, int a6);
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
int pl_get_hit_count_of_opponent(int);
int hit_probe_step_list(int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
int pl_spawn_hit_effect_with_se(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
int pl_apply_motion_translation(int);
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
int FUN_0c0a022e(int, float);

int FUN_0c063318(int a4);
int FUN_0c06336c(int a4);
int FUN_0c0633c0(int a4);
int pl_start_motion_10(int a4);
int FUN_0c0634f4(int a4);
int FUN_0c063570(int a4);
int FUN_0c06358e(int a4);

int FUN_0c063318(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = obj_can_interact(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                obj_set_mode_owner(t0, 0xC);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c06336c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = obj_can_interact(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                obj_set_mode_owner(t0, 0xB);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c0633c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o71C8_int *)(a4))->v);
    t1 = 0x0;
    if (t0 != 0) {
        t2 = obj_can_interact(t0, 0x7, (*(signed char *)((a4 + 0x3))));
        t1 = 0x0;
        if (t2 != 0) {
            t2 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
            t1 = 0x0;
            if ((signed char)t2 != 0) {
                *(volatile signed char *)((a4 + 0x3));
                obj_set_mode_owner(t0, 0xA);
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x23);
                t1 = 0x1;
            }
        }
    }
    return t1;
}

int FUN_0c063428(int a4)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if ((((((struct o71CC_int *)(a4))->v)) != 0) && ((t1 = (((struct o71CC_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x4)), t2 == 6) && (t3 = (((struct o71CC_int *)(a4))->v), t4 = *(signed char *)((0x30D + t3)), t4 == 5))) {
        *(volatile signed char *)((a4 + 0x3));
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xF);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c063468(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((((((struct o71CC_int *)(a4))->v)) != 0) && ((t1 = (((struct o71CC_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x4)), t2 == 6) && ((t3 = (((struct o71CC_int *)(a4))->v), t4 = *(signed char *)((t3 + 0x30D)), t4 == 5) || (t4 == 14)))) {
        *(volatile signed char *)((a4 + 0x3));
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xE);
        return 0x1;
    }
    return 0x0;
}

int pl_start_motion_10(int a4)
{
    return pl_start_motion(a4, 0x1, 0xA);
}

int FUN_0c0634f4(int a4)
{
    register int t0;

    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c063570(int a4)
{
    pl_start_motion(a4, 0x1, 0xC);
    (((struct oEC_ushort *)(a4))->v) = 0x8;
    return 0xEC;
}

int FUN_0c06358e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = pl_step_motion(a4);
                if ((signed char)t1 == 0) {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
                        t1 = *(signed char *)((a4 + 0xA));
                        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((a4 + 0xA));
                    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                t2 = t1;
            } else {
                t1 = t0;
                if (t0 == 3) {
                    pl_step_motion(a4);
                    *(volatile float *)((a4 + 0x3C));
                    t1 = 0x3C;
                }
                t2 = t1;
            }
            return t2;
        }
        pl_step_motion(a4);
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 0) {
            t1 = hit_probe_step_list(a4, (0x7254 + a4), 60.0f);
            if ((signed char)t1 == 1) {
                pl_start_motion(a4, 0x2, 0xCD);
                (((struct oEC_ushort *)(a4))->v) = 0x9;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f));
                (((struct o3C_float *)(a4))->v) = 15.0f;
                (((struct o48_float *)(a4))->v) = -1.2249999f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0xA));
                *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
            if ((signed char)t0 == 2) {
                pl_start_motion(a4, 0x0, 0x8);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
                (((struct o3C_float *)(a4))->v) = 14.0f;
                (((struct o48_float *)(a4))->v) = -2.5f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned char *)((a4 + 0xA)) = 0x3;
                return 0x3;
            }
            t1 = pl_landed(a4);
            if ((signed char)t1 == 0) {
                return ((int (*)(void))(0xC0637E8))();
            }
            return ((int (*)(void))(0xC0637D0))();
        }
        if ((signed char)t0 == 2) {
            pl_start_motion(a4, 0x0, 0x8);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.5f));
            (((struct o3C_float *)(a4))->v) = 14.0f;
            (((struct o48_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            return 0x3;
        }
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
            return ((int (*)(void))(0xC0637E8))();
        }
        return ((int (*)(void))(0xC0637D0))();
    }
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o3C_float *)(a4))->v) = -17.5f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x721F))) == 3) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o38_float *)(a4))->v) = u0;
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 17.5f * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
            (((struct o40_float *)(a4))->v) = u0;
        } else {
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 17.5f);
        }
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode01_03_enter(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c063570(a4);
    }
    return pl_start_motion_10(a4);
}

int pl_mode01_03_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c06358e(a4);
    }
    return FUN_0c0634f4(a4);
}

int pl_mode04_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0x35);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 20.0f;
    (((struct o48_float *)(a4))->v) = -2.79999995f;
    return 0x48;
}

int FUN_0c0638a0(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC0639E8)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC0639E8)->v));
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0638fe(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    float u2;

    pl_step_motion(a4);
    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71BC))) != 2) && ((u0 = (((struct o24_float *)(a4))->v), u1 = (((struct o24_float *)(t0))->v), u0 > u1) && (u2 = *(float *)0xC494D1C, 200.0f > u2))) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 6.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x37);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x92);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        pl_spawn_hit_effect_with_se(a4);
        *(unsigned char *)((a4 + 0xA)) = 0x5;
        return 0x5;
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c063a12(int a4, float f4)
{
    register int t0;
    register float u0;
    register float u1;
    float u2;

    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71BC))) != 2) && ((u0 = (((struct o24_float *)(a4))->v), u1 = (((struct o24_float *)(t0))->v), u0 > u1) && (u2 = *(float *)0xC494D1C, 200.0f > u2))) {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / 6.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
    }
    if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) <= (int)0x2B) {
        pl_step_motion(a4);
    } else {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x38);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x92);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            pl_spawn_hit_effect_with_se(a4);
            *(unsigned char *)((a4 + 0xA)) = 0x5;
            return 0x5;
        }
        return pl_apply_motion_translation(a4);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c063b38(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.0f);
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.0f);
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC063C58)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC063C58)->v));
        pl_start_motion(a4, 0x0, 0xA);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c063bb8(int a4)
{
    register int t0;

    pl_step_motion(a4);
    (((struct o101_uchar *)(a4))->v) = 0x0;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0x92);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            pl_spawn_hit_effect_with_se(a4);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            return (t0 + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int pl_wait_anim_end(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_mode05_enter(int a4)
{
    register int t7;

    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        pl_start_motion(a4, 0x1, 0x3C);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        t7 = 0xEC;
    } else {
        pl_start_motion(a4, 0x2, 0xE1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x1C000))) * 5.0f));
        (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x1C000))) * 5.0f));
        (((struct o3C_float *)(a4))->v) = 18.0f;
        (((struct o48_float *)(a4))->v) = -1.2249999f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t7 = 0x44;
    }
    return t7;
}

int FUN_0c063fd2(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        snd_play_char_voice(a4, 0x9);
        FUN_0c0633c0(a4);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c064014(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c063318(a4);
        snd_play_char_voice(a4, 0x9);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c064056(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return (FUN_0c06336c(a4));
        }
        return ((int (*)(int, int, int, int))(0xC06410E))(a4, a5, a6, a7);
    }
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x9A);
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x6;
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 4.08163261f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode07_enter(int a4)
{
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x96);
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    return FUN_0c0a022e(a4, 0.099999994f);
}
