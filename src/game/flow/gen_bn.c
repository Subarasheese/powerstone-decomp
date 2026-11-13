/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c085d0e(int);
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o34C0_uchar { char p[0x34C0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71EF_uchar { char p[0x71EF]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o722C_float { char p[0x722C]; float v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o7244_short { char p[0x7244]; short v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7250_float { char p[0x7250]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o7294_int { char p[0x7294]; int v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c032262(int, int);
int FUN_0c044408(int, int);
int FUN_0c0496f0(int, int, int, int, int, int, int, int, int);
int FUN_0c06b868(int, int);
int FUN_0c08dacc(int, int);
int FUN_0c08e382(int);
int FUN_0c09c45a(int);
int FUN_0c09d710(int, int, float);
int FUN_0c09f8e0(int, int);
int FUN_0c0a2f66(int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3e64(int, int);
int FUN_0c0c6094(int, int);
int cam_request_mode_03(int, int);
int cam_reset_to_default(void);
int cam_set_shake_ramp(int, int);
int fx_spawn_033ba8(int, int, int);
int fx_spawn_034884(int);
int fx_spawn_034dd0(int, int);
int fx_spawn_0372a8(int);
int fx_spawn_03c3ca(int, int);
int fx_spawn_042514(int, int);
int fx_spawn_046360(int);
int fx_spawn_hit_effect(int, int, int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_ryoma_spray(int, int);
int math_angle_between_points_xz(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_uv(int, int);
int obj_place_linked_ahead(int, int, float);
int pl_angle_to_opponent(int);
int pl_angle_to_target_pos(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_choose_state(int);
int pl_get_hit_count_of_opponent(int);
int pl_hitreact_01_02_update(int);
int pl_landed(int);
int pl_play_voice_at_frame(int, int, int);
int pl_ryoma_attack_kind68_phase1(int);
int pl_spawn_hit_effect_with_se(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_stick_dir_angle(int);
int pl_turn_to_opponent(int, int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int thunk_FUN_0c062242(int);
int ui_disable_hud(void);
int FUN_0c091378(int a4);
int FUN_0c0986e6(int a4);
int FUN_0c085c54(int a4);
int FUN_0c07030a(int a4);
int FUN_0c09413a(int a4);
int FUN_0c06a146(int a4);
int FUN_0c0837a2(int a4);
int FUN_0c0b0ca4(int a4);
int FUN_0c06b13a(int a4);
int FUN_0c06ff9c(int a4);
int FUN_0c067e1c(int a4);
int FUN_0c05417a(void);
int FUN_0c073bd4(int a4);
int FUN_0c0796b8(int a4);
int FUN_0c07c8f0(int a4);
int FUN_0c06be98(int a4);
int FUN_0c0710a8(int a4);
int FUN_0c06c1c8(int a4);
int FUN_0c0905a8(int a4);
int FUN_0c096f38(int a4);
int FUN_0c09172c(int a4);
int FUN_0c094488(int a4);
int FUN_0c0798a4(int a4);
int FUN_0c086ab0(int a4);
int FUN_0c07d3a2(int a4);
float FUN_0c06ecde(int a4);
int FUN_0c07d6b8(int a4);
int FUN_0c06c4e0(int a4);
int FUN_0c052e3e(void);
int FUN_0c079530(int a4);

int FUN_0c091378(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x3C) {
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((short)((t0 + 0x1) - 1) != 44) {
        if ((short)((t0 + 0x1) - 1) != 52) {
            if ((short)((t0 + 0x1) - 1) != 65) {
            } else {
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.0f;
            }
        } else {
            (((struct o48_float *)(a4))->v) = -2.5f;
        }
    } else {
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x1C000))) * 5.70999956f);
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x1C000))) * 5.70999956f);
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t0 = pl_landed(a4);
        if ((signed char)t0 != 0) {
            cam_set_shake_ramp(0x5, 0x5);
            (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC091514)->v));
            (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC091514)->v));
            (((struct o40_float *)(a4))->v) = 0.0f;
            (((struct o38_float *)(a4))->v) = 0.0f;
            pl_start_motion(a4, 0x2, 0xA3);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x27C))) != 2) {
                fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c0986e6(int a4)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t4;
    register int t10;
    register int t24;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;

    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        (((struct o107_uchar *)(a4))->v) = 0x0;
        (((struct o274_float *)(a4))->v) = 1.0f;
        t3 = 0x0;
        t4 = 0x0;
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            t3 = 0x25;
            t4 = 0x1;
        }
        pl_change_state(a4, t3, t4, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    }
    t10 = *(signed char *)((a4 + 0x4));
    if (((t10 == 0) && (t11 = (((struct o719E_short *)(a4))->v), (unsigned short)t11 == 35)) || (((t10 == 1) && (t12 = (((struct o719E_short *)(a4))->v), (unsigned short)t12 == 35)) || (((t10 == 2) && (t13 = (((struct o719E_short *)(a4))->v), (unsigned short)t13 == 35)) || (((t10 == 4) && (t14 = (((struct o719E_short *)(a4))->v), (unsigned short)t14 == 35)) || (((t10 == 5) && (t15 = (((struct o719E_short *)(a4))->v), (unsigned short)t15 == 29)) || (((t10 == 7) && (t16 = (((struct o719E_short *)(a4))->v), (unsigned short)t16 == 41)) || (((t10 == 8) && (t17 = (((struct o719E_short *)(a4))->v), (unsigned short)t17 == 40)) || ((t10 == 9) && (t18 = (((struct o719E_short *)(a4))->v), (unsigned short)t18 == 35))))))))) {
        pl_spawn_hit_effect_with_se(a4);
    }
    pl_apply_motion_translation(a4);
    t24 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t24 == 1) {
        return FUN_0c044408((*(signed char *)((a4 + 0x3))), 0x1);
    }
    return (unsigned short)t24;
}

int FUN_0c085c54(int a4)
{
    register int t0;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = ((pl_stick_dir_angle(a4)) + (*(short *)0xC7F31E0));
    } else {
        t0 = (pl_angle_to_target_pos(a4));
    }
    (((struct o7248_uint *)(a4))->v) = (unsigned short)t0;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 288.0f);
    if ((int)(short)(int)((float)t0 - 288.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x15;
    return FUN_0c085d0e(a4);
}

int FUN_0c07030a(int a4)
{
    register int t21;
    register int t12;

    if ((*(signed char *)0xC7F3053) != 0) {
        pl_start_motion(a4, 0x0, 0x8);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 5.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 5.0f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        *(unsigned char *)((a4 + 0xB)) = 0x8;
        return 0x8;
    }
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    pl_step_motion(a4);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    t21 = 0x108;
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t12 = pl_get_hit_count_of_opponent(a4);
        t21 = (signed char)t12;
        if ((signed char)t12 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            FUN_0c08dacc((*(int *)((a4 + 0x1C))), 0x7B);
            snd_play_char_voice(a4, 0x35);
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = (*(float *)0xC070478);
            (((struct oEC_ushort *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0xB)) = 0x7;
            t21 = 0x7;
        }
    }
    return t21;
}

int FUN_0c09413a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        (((struct o71EF_uchar *)(a4))->v) = 0x4;
        if ((*(signed char *)((a4 + 0x4))) == 0) {
            t0 = 0x3;
            if ((*(signed char *)((a4 + 0x721B))) != 2) {
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            t0 = 0x9;
            if ((*(signed char *)((a4 + 0x721B))) != 2) {
                t0 = 0x6;
            }
            t2 = t0;
        }
        (((struct o3C_float *)(a4))->v) = (*(float *)((0xC339C4C + ((signed char)t2 << 2))));
        (((struct o48_float *)(a4))->v) = (*(float *)((0xC339C4C + (((signed char)t2 + 0x1) << 2))));
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            t0 = pl_stick_dir_angle(a4);
            t3 = *(short *)0xC7F31E0;
            (((struct o38_float *)(a4))->v) = ((math_cos_angle16((0x14000 - (unsigned short)(t0 + t3)))) * (*(float *)((((((signed char)t2 + 0x2) << 2) + 0xC339C4C) + 0x0))));
            (((struct o40_float *)(a4))->v) = ((math_sin_angle16((0x14000 - (unsigned short)(t0 + t3)))) * (*(float *)((((((signed char)t2 + 0x2) << 2) + 0xC339C4C) + 0x0))));
        }
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 20.0f);
        pl_start_motion(a4, 0x0, 0x7);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c06a146(int a4)
{
    register int t0;
    register int t1;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            pl_start_motion(a4, 0x1, 0x95);
            (((struct o710B_uchar *)(a4))->v) = 0x0;
            (((struct o710C_uchar *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                t0 = 0xC14EECC;
                t1 = 0xC14EEC0;
            } else {
                t0 = 0xC14EEE4;
                t1 = 0xC14EED8;
            }
            return (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x30, 0x52, t1, t0));
        }
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c0837a2(int a4)
{
    int t0;
    register int t1;

    (((struct o106_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o106_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xFFFFFFFF;
    pl_start_motion(a4, 0x4, 0x9);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x39);
    t1 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t1))->v) = 0x1;
    (((struct o71A8_uchar *)(t1))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0x1)) = 0x1;
    t1 = *(signed char *)0xC7F3051;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC7EB3B4) = *(struct mv3 *)(((unsigned char)(((t1 << 1) + t1) << 2) + 0xC1503BC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC7E40E4) = *(struct mv3 *)(((unsigned char)(((t1 << 1) + t1) << 2) + 0xC1503BC)); }
    (((struct o720B_uchar *)(a4))->v) = 0x0;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x16;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    fx_spawn_03c3ca(a4, 0x0);
    if (((*(signed char *)0xC7F319E) == 0) && (t0 = *(signed char *)0xC7F319D, t0 == 0)) {
        cam_reset_to_default();
        t0 = 0x7;
        t1 = (*(signed char *)((a4 + 0x3)));
    } else {
        t0 = 0x1F;
        t1 = (*(signed char *)((a4 + 0x3)));
    }
    cam_request_mode_03(t0, t1);
    *(unsigned int *)((a4 + 0x30)) = (((*(int *)((((*(signed char *)0xC7F3051) << 2) + 0xC1504AC))) + 0x4000) & 0xFFFF);
    return obj_place_linked_ahead(a4, 0x1, 0.0f);
}

int FUN_0c0b0ca4(int a4)
{
    int stk[3];
    register float u6;
    register int t7;
    register float u18;
    register int t19;
    register float u30;
    register int t31;

    *(unsigned int *)(((int)stk + 8)) = (0x2E0 + a4);
    mdl_vtx_iter_begin(((((struct o9C_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x10)))))->v)), ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    u6 = (((struct o0_float *)0xC0B0DEC)->v);
    for (;;) {
        t7 = mdl_vtx_iter_next();
        if (t7 != 0) {
            break;
        }
        mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((((struct oEC_short *)(a4))->v)) / u6));
        mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
    }
    *(unsigned int *)(((int)stk + 8)) = (0x2E0 + a4);
    mdl_vtx_iter_begin(((((struct o9C_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x18)))))->v)), ((((struct o9C_int *)((*(int *)(((0x2E0 + a4) + 0x14)))))->v)));
    u18 = (((struct o10_float *)0xC0B0DEC)->v);
    for (;;) {
        t19 = mdl_vtx_iter_next();
        if (t19 != 0) {
            break;
        }
        mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((((struct oEE_short *)(a4))->v)) / u18));
        mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
    }
    *(unsigned int *)(((int)stk + 8)) = (0x2E0 + a4);
    mdl_vtx_iter_begin(((((struct o9C_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x20)))))->v)), ((((struct o9C_int *)((*(int *)(((0x2E0 + a4) + 0x1C)))))->v)));
    u30 = (((struct o14_float *)0xC0B0DEC)->v);
    for (;;) {
        t31 = mdl_vtx_iter_next();
        if (t31 != 0) {
            break;
        }
        mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((float)((((struct oF0_short *)(a4))->v)) / u30));
        mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
    }
    return t31;
}

int FUN_0c06b13a(int a4)
{
    int stk[6];
    register int t7;
    register int t11;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f);
    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 6.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 35.0f;
    (((struct o48_float *)(a4))->v) = -1.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x65);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t7 = 0x3704;
    if ((*(signed char *)((a4 + 0x71F1))) == 0) {
        t7 = 0x2264;
    }
    *(float *)((a4 + t7)) = 2.0f;
    pl_start_hit_freeze(a4);
    fx_spawn_033ba8(a4, 0x24, 0xA);
    *(int *)((int)stk + 16) = 0xC14EECC;
    *(int *)((int)stk + 12) = 0xC14EEC0;
    *(int *)((int)stk + 8) = 0x50;
    *(int *)((int)stk + 4) = 0x24;
    *(int *)((int)stk + 0) = 0x6;
    t11 = *(signed char *)((a4 + 0x3));
    (((struct o14_uchar *)(((int)stk + 0)))->v) = t11;
    FUN_0c0496f0((*(signed char *)(((int)stk + 20))), 0x1, 0x5, ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0x6, 0x24, 0x50, 0xC14EEC0, 0xC14EECC);
    pl_play_voice_at_frame(a4, 0x0, 0x1A);
    pl_turn_to_opponent(a4, 0x8000);
    pl_ryoma_attack_kind68_phase1(a4);
    (((struct o105_uchar *)(a4))->v) = 0x1;
    return 0x105;
}

int FUN_0c06ff9c(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC7F3053) != 0) {
        pl_start_motion(a4, 0x0, 0x8);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / 5.0f);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / 5.0f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        *(unsigned char *)((a4 + 0xB)) = 0x8;
        return 0x8;
    }
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    pl_step_motion(a4);
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 == 1) {
            (((struct o108_uchar *)(a4))->v) = 0x0;
            fx_spawn_0372a8(a4);
            snd_play_char_voice(a4, 0x33);
            if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
                cam_request_mode_03(0x4, (*(signed char *)((a4 + 0x3))));
            }
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0x5;
        if ((short)(t0 - 1) != 0) {
            t1 = 0x3;
        }
        *(unsigned char *)((a4 + 0xB)) = t1;
    }
    return t1;
}

int FUN_0c067e1c(int a4)
{
    register int t0;

    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    pl_start_motion(a4, 0x1, 0x60);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x7223))) == 0) {
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 15.0f);
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 15.0f);
        (((struct o44_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.5f));
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 1.5f));
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
    }
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o7248_uint *)(a4))->v) = 0xE38;
    FUN_0c032262(a4, 0x0);
    FUN_0c032262(a4, 0x1);
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    snd_play_char_voice(a4, 0x18);
    snd_play_char_voice(a4, 0x31);
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c05417a(void)
{
    register int t0;
    int t1;
    register int t2;

    if ((*(signed char *)0xC7F302E) == 0) {
        (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
        (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
        ui_disable_hud();
        FUN_0c0a2f66(0x2);
        FUN_0c0a2f66(0x3);
        FUN_0c0a2f66(0x1);
        *(unsigned char *)0xC7F3078 = 0x0;
    }
    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
    t0 = *(signed char *)0xC7F3053;
    if ((t0 & 0xF0) != 0) {
        if ((t0 & 0xF0) != 16) {
            t1 = (t0 & 0xF0);
            if ((t0 & 0xF0) != 32) {
            } else {
                t0 = *(signed char *)0xC7F3053;
                if (((t0 & 0xF) != 1) && ((t0 & 0xF) != 2)) {
                    t2 = (t0 & 0xF);
                    if ((t0 & 0xF) != 3) {
                    } else {
                        (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
                        t2 = 0x0;
                    }
                    t0 = t2;
                } else {
                    if ((*(short *)(((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7EB298))) == 0xF0) {
                        (((struct o1_uchar *)0xC7F302D)->v) = 0x2;
                    } else {
                        (((struct o1_uchar *)0xC7F302D)->v) = 0x1;
                    }
                    (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
                    t0 = 0x0;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC7F3054;
            if ((t1 != 1) && (t1 != 2)) {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x63;
            } else {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x1;
            }
            (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)0xC7F3053;
        if (((t0 & 0xF) != 1) && ((t0 & 0xF) != 2)) {
            t2 = (t0 & 0xF);
            if ((t0 & 0xF) != 3) {
            } else {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            if ((*(short *)(((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7EB298))) == 0xF0) {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x2;
            } else {
                (((struct o1_uchar *)0xC7F302D)->v) = 0x1;
            }
            (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
            t0 = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c073bd4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFF9D);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x1555);
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        (((struct o7250_float *)(a4))->v) = ((((struct o722C_float *)(a4))->v));
        if (!(((((struct o7250_float *)(a4))->v)) > 100.0f)) {
            (((struct o7250_float *)(a4))->v) = 100.0f;
        }
        if (!(500.0f > ((((struct o7250_float *)(a4))->v)))) {
            (((struct o7250_float *)(a4))->v) = 500.0f;
        }
        u0 = (((struct o7250_float *)(a4))->v);
        (((struct o7250_float *)(a4))->v) = (u0 - ((200.0f - u0) / 4.0f));
        (((struct o7250_float *)(a4))->v) = (((((struct o7250_float *)(a4))->v)) / 20.0f);
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 10.0f);
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0796b8(int a4)
{
    int stk[8];
    register int t30;
    register int t10;
    register int t23;
    register int t29;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    t30 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_start_motion(a4, 0x4, 0x5);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x35);
        t10 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t10))->v) = 0x1;
        (((struct o71A8_uchar *)(t10))->v) = 0x1;
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        (((struct o710B_uchar *)(a4))->v) = 0x0;
        (((struct o710C_uchar *)(a4))->v) = 0x0;
        cam_set_shake_ramp(0x14, 0x14);
        FUN_0c09c45a(a4);
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x10);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xC);
        t23 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t23 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t23 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t23 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x3);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        t29 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t29 + 0x1);
        t30 = (t29 + 0x1);
    }
    return t30;
}

int FUN_0c07c8f0(int a4)
{
    int stk[8];
    register int t6;
    register int t15;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    pl_start_motion(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x32);
    t6 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t6))->v) = 0x1;
    (((struct o71A8_uchar *)(t6))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t15 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x41;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c06be98(int a4)
{
    int t0;

    pl_step_motion(a4);
    if (!(((((struct o274_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x2D9)), t0 != 2)) {
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
    } else {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    pl_apply_velocity(a4);
    if ((int)((((struct o71F4_short *)(a4))->v)) > 0) {
        if (((((struct oF2_short *)(a4))->v)) != 0) {
            t0 = FUN_0c06b868(a4, 0x200);
            if (t0 == 0) {
                (((struct oF2_ushort *)(a4))->v) = 0x0;
            }
        }
    } else {
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        return pl_turn_to_opponent(a4, 0x16C);
    }
    fx_spawn_034884(a4);
    pl_start_motion(a4, 0x1, 0x6F);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    return 0x71F4;
}

int FUN_0c0710a8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

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
    t0 = math_atan_angle16(((-u1) / u6));
    t1 = t0;
    if (0.0f > u6) {
        t1 = (t0 + 0x8000);
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + 0x4000);
    u1 = math_signed_sqrt(u2);
    math_atan_angle16(((-u1) / u0));
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = 0x71;
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            t0 = 0x66;
        }
        pl_start_motion(a4, 0x1, t0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    if (t0 == 41) {
        return pl_start_hit_freeze(a4);
    }
    return t0;
}

int FUN_0c06c1c8(int a4)
{
    int stk[6];
    register int t22;
    register int t43;
    register int t4;
    register int t5;
    register int t7;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((((struct oEC_short *)(a4))->v)) == 26) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EF2C;
            *(int *)((int)stk + 8) = 0xC14EF20;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            t4 = 0xC14EF2C;
            t5 = 0xC14EF20;
            t7 = 0x11;
        } else {
            *(int *)((int)stk + 12) = 0xC14EF44;
            *(int *)((int)stk + 8) = 0xC14EF38;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x70;
            t4 = 0xC14EF44;
            t5 = 0xC14EF38;
            t7 = 0x1A;
        }
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x1, t7, 0x1, 0x70, 0x42, t5, t4);
    }
    if (((((struct oEC_short *)(a4))->v)) == 25) {
        pl_start_hit_freeze(a4);
        fx_spawn_034dd0(a4, 0x73);
    }
    t22 = (((struct oEC_short *)(a4))->v);
    if (((int)t22 > (int)0x1F) && ((int)t22 < (int)0x88)) {
        if (((int)((int)t22 % (int)0x5)) == 0) {
            fx_spawn_ryoma_spray(a4, (0x3 & ((((struct oEC_short *)(a4))->v))));
            snd_play_char_voice(a4, 0x33);
        }
    }
    if (((((struct oEC_short *)(a4))->v)) == 0x8C) {
        (((struct o34C0_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x0;
        (((struct o710C_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
    }
    pl_apply_motion_translation(a4);
    t43 = pl_step_motion(a4);
    if ((signed char)t43 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t43;
}

int FUN_0c0905a8(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = 2.0f;
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        u0 = 4.0f;
    }
    if ((((((struct oEC_short *)(a4))->v)) & 2) != 0) {
        u1 = ((((struct o7254_float *)(a4))->v));
        u1 = u1 + u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o20_float *)(a4))->v) = u1;
        u1 = ((((struct o7258_float *)(a4))->v));
        u1 = u1 + u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        (((struct o28_float *)(a4))->v) = u1;
    } else {
        (((struct o20_float *)(a4))->v) = (((((struct o7254_float *)(a4))->v)) - (((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0)));
        (((struct o28_float *)(a4))->v) = (((((struct o7258_float *)(a4))->v)) - (((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * u0)));
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o7228_ushort *)(a4))->v) = 0x0;
        (((struct o71DD_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        (((struct o7294_uint *)(a4))->v) = (*(int *)((a4 + 0x1C)));
        return pl_hitreact_01_02_update(a4);
    }
    return 0xEC;
}

int FUN_0c096f38(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
        pl_start_motion(a4, 0x2, 0xD0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        return 0x1;
    }
    t0 = pl_stick_dir_angle(a4);
    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)0xC7F31E0;
    t3 = (unsigned short)((t2 + t0) - t1);
    if ((0x8000 & (unsigned short)((t2 + t0) - t1)) != 0) {
        t3 = ((unsigned short)((t2 + t0) - t1) | 0xFFFF0000);
    }
    if ((int)t3 <= (int)0xFFFFF8E4) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x71C);
    } else {
        if ((int)t3 >= (int)0x71C) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    FUN_0c09f8e0(a4, 0x71C);
    pl_step_motion(a4);
    pl_apply_velocity(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    if (((unsigned short)t0 != 19) && ((unsigned short)t0 != 39)) {
        return (unsigned short)t0;
    }
    return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
}

int FUN_0c09172c(int a4)
{
    register int t20;

    pl_start_motion(a4, 0x2, 0xB0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    if (((((struct o7294_int *)(a4))->v)) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((math_angle_between_points_xz((a4 + 0x20), (((((struct o7294_int *)(a4))->v)) + 0x20))) + 0x8000);
    } else {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    }
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0918A8)->v)));
    (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0918A8)->v)));
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC0918A8)->v));
    (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC0918A8)->v));
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    fx_spawn_046360(a4);
    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x28);
    t20 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t20 + 0x1);
    return (t20 + 0x1);
}

int FUN_0c094488(int a4)
{
    register int t0;
    register float u0;

    pl_step_motion(a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 5) {
        FUN_0c0a3e64((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
    }
    t0 = FUN_0c09d710(a4, (0x7258 + a4), (*(float *)0xC0945A8));
    if ((signed char)t0 == 2) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o7258_float *)(a4))->v)));
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)((t0 - 1) + 0x1) != 0) {
        t0 = pl_angle_to_opponent(a4);
        *(unsigned int *)((a4 + 0x30)) = t0;
        (((struct o7248_uint *)(a4))->v) = (unsigned short)(t0 + ((((struct o7244_short *)(a4))->v)));
        u0 = ((((struct o20_float *)(a4))->v));
        u0 = u0 + ((((struct o7254_float *)(a4))->v)) * (math_cos_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000)));
        (((struct o20_float *)(a4))->v) = u0;
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + ((((struct o7254_float *)(a4))->v)) * (math_sin_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000)));
        (((struct o28_float *)(a4))->v) = u0;
        t0 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t0 == 1) {
            return FUN_0c044408((*(signed char *)((a4 + 0x3))), 0x1);
        }
        return (unsigned short)t0;
    }
    return pl_end_action_choose_state(a4);
}

int FUN_0c0798a4(int a4)
{
    int stk[8];
    register int t6;
    register int t15;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    pl_start_motion(a4, 0x4, 0x2);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x37);
    t6 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t6))->v) = 0x1;
    (((struct o71A8_uchar *)(t6))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t15 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t15) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t15) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t15) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x43;
    (((struct oEE_ushort *)(a4))->v) = 0x55;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c086ab0(int a4)
{
    int stk[7];
    register int t8;
    register int t12;
    register int t22;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 20) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = -1.5f;
        t8 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t8 + 0x1);
        t22 = (t8 + 0x1);
    } else {
        t22 = 0xEE;
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            t12 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t12 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0));
            fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
            t22 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
        }
    }
    return t22;
}

int FUN_0c07d3a2(int a4)
{
    int stk[8];
    register int t6;
    register int t15;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    pl_start_motion(a4, 0x4, 0x8);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x37);
    t6 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t6))->v) = 0x1;
    (((struct o71A8_uchar *)(t6))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    t15 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t15 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    cam_request_mode_03(0x5, (*(signed char *)((a4 + 0x3))));
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x9;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

float FUN_0c06ecde(int a4)
{
    register int t3;
    register float t11;

    pl_start_motion(a4, 0x1, 0xFFFFFFA5);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x1, 0xFFFFFFA6);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    (((struct o102_uchar *)(a4))->v) = 0xC;
    (((struct o102_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0xC;
    obj_place_linked_ahead(a4, 0x0, 100.0f);
    (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 5.0f);
    (((struct o3C_float *)(a4))->v) = 0.0f;
    t11 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    (((struct o40_float *)(a4))->v) = (t11 * 5.0f);
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o38_float *)(a4))->v));
    (((struct o3C_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o3C_float *)(a4))->v));
    (((struct o40_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o44_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o48_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o48_float *)(a4))->v));
    (((struct o4C_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o4C_float *)(a4))->v));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    return (t11 * 5.0f);
}

int FUN_0c07d6b8(int a4)
{
    int stk[8];
    register int t3;
    register int t16;

    (((struct o7238_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x33);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC07D7E8));
    t16 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x38;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x7;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c06c4e0(int a4)
{
    register float u6;
    register int t20;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0xD0) {
        u6 = -2.0f;
        if ((((((struct oEC_short *)(a4))->v)) & 32) != 0) {
            u6 = 2.29999995f;
        }
        (((struct o3C_float *)(a4))->v) = u6;
        pl_apply_velocity(a4);
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 0xD0) {
            (((struct o3C_float *)(a4))->v) = 19.0f;
            (((struct o48_float *)(a4))->v) = -1.0f;
            pl_apply_velocity(a4);
        } else {
            pl_apply_velocity(a4);
            pl_apply_acceleration(a4);
        }
    }
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    pl_apply_motion_translation(a4);
    t20 = pl_step_motion(a4);
    if ((signed char)t20 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t20;
}

int FUN_0c052e3e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned char *)0xC7E40C5 = 0x0;
            *(unsigned char *)0xC7EB395 = 0x0;
            t0 = *(short *)0xC7F3038;
            *(unsigned short *)0xC7F3038 = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
                (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o1_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302E) + 0x1);
        (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
        (((struct o1_uchar *)0xC7F306E)->v) = 0x0;
        t1 = *(signed char *)0xC7F3073;
        if (((unsigned char)t1 != 1) && ((unsigned char)t1 != 2)) {
            cam_reset_to_default();
            *(unsigned char *)0xC7E40C5 = 0x0;
            *(unsigned char *)0xC7EB395 = 0x0;
            *(unsigned short *)0xC7F3038 = 0x41;
            *(unsigned char *)0xC7E40C5 = 0x0;
            *(unsigned char *)0xC7EB395 = 0x0;
            t1 = *(short *)0xC7F3038;
            *(unsigned short *)0xC7F3038 = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
                (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        } else {
            t2 = 0x1;
            if ((unsigned char)(*(signed char *)0xC7F3073) == 1) {
                t2 = 0x0;
            }
            if ((int)(*(signed char *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2E46))) >= (int)0x8) {
                (((struct o0_uchar *)0xC7F302D)->v) = 0x2;
                (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                t2 = 0x0;
            } else {
                cam_reset_to_default();
                *(unsigned char *)0xC7E40C5 = 0x0;
                *(unsigned char *)0xC7EB395 = 0x0;
                *(unsigned short *)0xC7F3038 = 0x41;
                *(unsigned char *)0xC7E40C5 = 0x0;
                *(unsigned char *)0xC7EB395 = 0x0;
                t3 = *(short *)0xC7F3038;
                *(unsigned short *)0xC7F3038 = (t3 - 1);
                t2 = (short)(t3 - 1);
                if ((int)(short)(t3 - 1) < 0) {
                    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
                    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
                    t2 = 0x0;
                }
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c079530(int a4)
{
    int stk[8];
    register int t3;
    register int t14;
    register int t19;

    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x33);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC079698));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    t14 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x63;
    (((struct oF0_ushort *)(a4))->v) = 0x52;
    t19 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t19 + 0x1);
    return (t19 + 0x1);
}
