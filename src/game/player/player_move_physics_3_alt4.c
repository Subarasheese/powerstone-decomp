/* velocity/acceleration/gravity, angle to opponent, stick direction (part 3 of 3 of the same module) (0c09db78-0c09f6a8) */

struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_timer_disable(int);
int pl_get_held_item_class(int);
int pl_stick_dir_angle(int);
int pl_set_velocity_from_move_table(int, int);
int pl_update_walk_motion(int);
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o721B_uchar { char p[0x721B]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_start_motion(int, int, int);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71EF_uchar { char p[0x71EF]; unsigned char v; };
struct o7219_uchar { char p[0x7219]; unsigned char v; };
struct o721A_uchar { char p[0x721A]; unsigned char v; };
int pl_angle_to_opponent(int);
int pl_stick_zone(int);
int pl_set_velocity_toward_target(int);
int pl_set_velocity_from_heading(int);
int pl_launch_jump(int);
int pl_start_fall_motion(int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
extern int FUN_0c0a3cb0();
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
int pl_reset_pose(int);
int pl_spawn_hit_effect_with_se(int);
int FUN_0c09ce3a(int);
int math_angle_between_points_xz(int, int);
int cam_set_shake_ramp(int, int);

int pl_state_walk_init(int a4)
{
    register int t1;

    (((struct o71BA_uchar *)(a4))->v) = 0x2;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    t1 = pl_get_held_item_class(a4);
    if ((signed char)t1 != 0) {
        (((struct oEC_ushort *)(a4))->v) = 0xA;
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x7;
    }
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0xF;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o7243_uchar *)(a4))->v) = 0x4;
    (((struct o7237_uchar *)(a4))->v) = 0x63;
    pl_update_walk_motion(a4);
    (((struct o7248_uint *)(a4))->v) = (unsigned short)((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
    pl_set_velocity_from_move_table(a4, ((((struct o7248_int *)(a4))->v)));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_state04_init(int a4)
{
    register int t0;
    register int t1;

    (((struct o71BA_uchar *)(a4))->v) = 0x4;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    (((struct o721B_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x6;
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    t0 = pl_get_held_item_class(a4);
    if ((unsigned int)(signed char)t0 < (unsigned int)0x14) {
        switch (((signed char)t0 << 1)) {
            case 0:
            case 34:
            case 36:
            case 38:
            {
                t0 = 0x0;
                t1 = 0x5;
            }
                break;
            case 2:
            case 22:
            {
                t0 = 0x2;
                t1 = 0xDE;
            }
                break;
            case 4:
            case 6:
            {
                t0 = 0x2;
                t1 = 0xF0;
            }
                break;
            case 8:
            case 32:
            {
                t0 = 0x2;
                t1 = 0x53;
            }
                break;
            case 10:
            case 12:
            case 14:
            {
                t0 = 0x2;
                t1 = 0xC6;
            }
                break;
            case 16:
            {
                t0 = 0x2;
                t1 = 0xFA;
            }
                break;
            case 18:
            case 20:
            case 24:
            {
                t0 = 0x2;
                t1 = 0xE8;
            }
                break;
            case 26:
            {
                t0 = 0x2;
                t1 = 0x5C;
            }
                break;
            case 28:
            {
                t0 = 0x2;
                t1 = 0x20;
            }
                break;
            default:
            {
                t0 = 0x2;
                t1 = 0x6A;
            }
                break;
        }
        pl_start_motion(a4, t0, t1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_state05_init(int a4, int a5)
{
    int stk[5];
    register int t16;
    register int t20;
    register int t46;
    register int t49;
    register int t55;
    int t56;
    register int t70;
    register int t74;
    int t3;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o71BA_uchar *)(a4))->v) = 0x5;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_timer_disable(a4);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    (((struct o721B_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
    if (((*(signed char *)((a4 + 0x7236))) == 0) && (t3 = *(signed char *)((a4 + 0x721B)), t3 != 5)) {
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    }
    (((struct o71EF_uchar *)(a4))->v) = (pl_stick_zone(a4));
    if ((int)(*(signed char *)((a4 + 0x721B))) >= (int)0x6) {
        if (!(0.0f > ((((struct o48_float *)(a4))->v)))) {
            (((struct o48_float *)(a4))->v) = ((((struct o71E4_float *)(a4))->v));
        }
        pl_start_fall_motion(a4);
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        return 0xF0;
    }
    t16 = pl_get_held_item_class(a4);
    if ((signed char)t16 != 0) {
        (((struct o721B_uchar *)(a4))->v) = 0x0;
    }
    (((struct o71E0_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
    t20 = *(signed char *)((a4 + 0x721B));
    switch (t20) {
    case 0:
        pl_start_fall_motion(a4);
        pl_set_velocity_toward_target(a4);
        (((struct o7219_uchar *)(a4))->v) = 0x0;
        (((struct o721A_uchar *)(a4))->v) = 0x0;
        t74 = ((int (*)(int, int, int, int, int, int))(FUN_0c0a3cb0))((*(signed char *)((a4 + 0x3))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        break;
    case 1:
        t56 = *(signed char *)((a4 + 0x71EF));
        if ((t56 != 0) && ((t56 != 1) && (t56 != 2))) {
            if (t56 != 3) {
                if (t56 != 4) {
                } else {
                    pl_start_motion(a4, 0x0, 0xA);
                }
            } else {
                pl_start_motion(a4, 0x0, 0x10);
            }
        } else {
            pl_start_motion(a4, 0x0, 0xD);
        }
        pl_set_velocity_toward_target(a4);
        (((struct o7219_uchar *)(a4))->v) = 0x0;
        (((struct o721A_uchar *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        t70 = ((int (*)(int, int, int, int, int, int))(FUN_0c0a3cb0))((*(signed char *)((a4 + 0x3))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        break;
    case 2:
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
        (((struct o721C_uchar *)(a4))->v) = 0x0;
        pl_start_motion(a4, 0x0, 0xA);
        pl_set_velocity_from_heading(a4);
        (((struct o7219_uchar *)(a4))->v) = 0x0;
        (((struct o721A_uchar *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        t55 = ((int (*)(int, int, int, int, int, int))(FUN_0c0a3cb0))((*(signed char *)((a4 + 0x3))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        break;
    default:
        if (t20 != 3) {
            if (t20 != 4) {
                if (t20 != 5) {
                    pl_start_fall_motion(a4);
                    pl_set_velocity_toward_target(a4);
                    (((struct o7219_uchar *)(a4))->v) = 0x0;
                    (((struct o721A_uchar *)(a4))->v) = 0x0;
                } else {
                    pl_start_motion(a4, 0x0, 0x6);
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC09F350)->v));
                    (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC09F350)->v));
                    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC09F350)->v)));
                    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC09F350)->v)));
                }
            } else {
                (((struct o106_uchar *)(a4))->v) = 0xA;
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xF);
                snd_play_char_voice(a4, 0x10);
                pl_start_fall_motion(a4);
                pl_set_velocity_toward_target(a4);
                (((struct o7219_uchar *)(a4))->v) = 0x0;
                (((struct o721A_uchar *)(a4))->v) = 0x0;
            }
            t46 = ((int (*)(int, int, int, int, int, int))(FUN_0c0a3cb0))((*(signed char *)((a4 + 0x3))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            return 0x71A8;
        }
        pl_start_motion(a4, 0x0, 0xD);
        pl_launch_jump(a4);
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        t49 = *(signed char *)((a4 + 0x3));
        return ((int (*)(int, int))(FUN_0c0a3cb0))(t49, 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_state06_init(int a4)
{
    int stk[4];
    register int t4;
    register int t8;
    register float u11;
    register float u15;
    register int t27;
    register int t35;
    register int t29;
    register int t30;

    (((struct o71BA_uchar *)(a4))->v) = 0x6;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x4;
    (((struct o721C_uchar *)(a4))->v) = 0x0;
    if (((((struct o24_float *)(a4))->v)) != ((((struct o71E0_float *)(a4))->v))) {
        t4 = FUN_0c09ce3a(a4);
        *(unsigned char *)(((int)stk + 4)) = t4;
        if ((signed char)t4 != 0) {
            *(unsigned int *)(((int)stk + 12)) = (math_angle_between_points_xz((a4 + 0x20), ((*(int *)((((((*(signed char *)(((int)stk + 4))) - 1) << 2) + (0x294 + a4)) + 0x0))) + 0x20)));
            *(int *)((int)stk + 0) = (a4 + 0x20);
            t8 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 8)) = (0x14000 - t8);
            u11 = ((((struct o20_float *)(a4))->v));
            u11 = u11 + 10.0f * (math_cos_angle16((0x14000 - t8)));
            (((struct o20_float *)(a4))->v) = u11;
            *(int *)((int)stk + 0) = (a4 + 0x28);
            u15 = ((((struct o28_float *)(a4))->v));
            u15 = u15 + 10.0f * (math_sin_angle16((*(int *)(((int)stk + 8)))));
            (((struct o28_float *)(a4))->v) = u15;
        }
    }
    t27 = pl_get_held_item_class(a4);
    if ((unsigned int)(signed char)t27 < (unsigned int)0x14) {
        switch (((signed char)t27 << 1)) {
            case 0:
            case 34:
            case 36:
            case 38:
            {
                t29 = 0x0;
                t30 = 0x9;
            }
                break;
            case 2:
            case 22:
            {
                t29 = 0x2;
                t30 = 0xE0;
            }
                break;
            case 4:
            case 6:
            {
                t29 = 0x2;
                t30 = 0xF2;
            }
                break;
            case 8:
            case 32:
            {
                t29 = 0x2;
                t30 = 0x55;
            }
                break;
            case 10:
            case 12:
            case 14:
            {
                t29 = 0x2;
                t30 = 0xC8;
            }
                break;
            case 16:
            {
                t29 = 0x2;
                t30 = 0xFC;
            }
                break;
            case 18:
            case 20:
            case 24:
            {
                t29 = 0x2;
                t30 = 0xEA;
            }
                break;
            case 26:
            {
                t29 = 0x2;
                t30 = 0x5F;
            }
                break;
            case 28:
            {
                t29 = 0x2;
                t30 = 0x43;
            }
                break;
            default:
            {
                t29 = 0x2;
                t30 = 0x76;
            }
                break;
        }
        pl_start_motion(a4, t29, t30);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_spawn_hit_effect_with_se(a4);
    t35 = *(signed char *)((a4 + 0x4));
    if (t35 == 4) {
        return cam_set_shake_ramp(0xA, 0xA);
    }
    return t35;
}
