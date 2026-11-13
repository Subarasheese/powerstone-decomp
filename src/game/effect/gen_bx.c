/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3360_uchar { char p[0x3360]; unsigned char v; };
struct o34C0_uchar { char p[0x34C0]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4540_uchar { char p[0x4540]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct o728C_float { char p[0x728C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0158e4(void);
int FUN_0c02d834(void);
int FUN_0c054114(void);
int FUN_0c054a78(void);
int FUN_0c05f2d4(int, int);
int FUN_0c05fc00(void);
int FUN_0c06231c(int, int, int);
int FUN_0c0641a0(int, float, float);
int FUN_0c06b868(int, int);
int FUN_0c0852a6(int, int);
int FUN_0c085606(int);
int FUN_0c08bbce(int);
int FUN_0c08e382(int);
int FUN_0c08e5b4(int);
int FUN_0c08f71c(int);
int FUN_0c09c45a(int);
int FUN_0c0a2666(int, int, int);
int FUN_0c0a2830(int);
int FUN_0c0a3304(void);
int FUN_0c0a3d5c(int, int);
int FUN_0c0a3f0e(int);
int FUN_0c0a3f30(int);
int FUN_0c0a502e(void);
int FUN_0c0a5240(int);
int FUN_0c0bed78(int, int);
int FUN_0c0c033c(int, int);
int bgm_stop_all(void);
int cam_force_mode(int, int, int);
int cam_request_mode(int, int, int);
int cam_reset_to_default(void);
int cam_set_shake_ramp(int, int);
int fx_spawn_0357e0(int, int);
int fx_spawn_03c02c(int);
int fx_spawn_03cb28(int, int);
int fx_spawn_03f2c8(int);
int fx_spawn_042514(int, int);
int fx_spawn_04b054(int);
int fx_spawn_05600c(void);
int fx_spawn_25(int, int);
int fx_spawn_garuda_debris(int, int);
int fx_spawn_state11_aura(int);
float math_signed_sqrt(float);
int menu_check_start_any_pad(void);
int menu_check_start_button(int);
int menu_stage_select_init(int);
int obj_force_owner_state27(int, int);
int obj_place_linked_ahead(int, int, float);
int obj_set_mode_owner(int, int, int);
int obj_set_owner_hit_record(int, int);
int obj_spawn_037848(int);
int obj_system_init(void);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_choose_state(int);
int pl_get_hit_count_of_opponent(int);
int pl_gunrock_mode04_phase1(int);
int pl_gunrock_mode04_phase2(int);
int pl_gunrock_mode04_phase3(int);
int pl_gunrock_mode04_phase4(int);
int pl_jack_mode12_phase0(int, float, float);
int pl_landed(int);
int pl_mash_reduce_counter(int, int);
int pl_mode08_09_phase0_launch(int);
int pl_mode08_09_phase1(int);
int pl_mode08_09_phase2_fall(int);
int pl_mode08_09_phase4(int);
int pl_mode08_09_phase5_fall(int);
int pl_ryoma_cue_table_next(int, int, int, int);
int pl_spawn_hit_effect_with_se(int);
int pl_start_hit_freeze(int);
int pl_start_knockback_reaction(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_wait_anim_end_move(int);
int pl_wait_anim_end_to_state14(int);
int res_switch_scene(int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int stage_type01_start_thrown_item(int);
int thunk_math_mat_get_translate(int, int);
int ui_enable_hud(void);
int ui_fade_start(int, int, int, int);
int FUN_0c090c7a(int a4);
int FUN_0c088048(int a4);
int FUN_0c06b98c(int a4);
int FUN_0c06be24(int a4);
int FUN_0c070480(int a4);
int FUN_0c08bc54(int a4);
int FUN_0c07d4a8(int a4);
int FUN_0c081984(int a4);
int FUN_0c0866fa(int a4);
int FUN_0c08fc84(int a4);
int FUN_0c0920c4(int a4);
int FUN_0c09457c(int a4);
int FUN_0c083194(int a4);
float FUN_0c0b5298(int a4);
int FUN_0c068216(int a4);
int FUN_0c07c290(int a4);
int FUN_0c06680a(int a4);
int FUN_0c089bcc(int a4);
int FUN_0c086b86(int a4);
int FUN_0c08fde4(int a4);
int FUN_0c0d40cc(void);
int FUN_0c0535b4(int a4);
int FUN_0c077a48(int a4, int a5, int a6, int a7);
int FUN_0c090aac(int a4);
int FUN_0c094e44(int a4);
int FUN_0c081a70(int a4);
int FUN_0c085bb4(int a4);
int FUN_0c090bb4(int a4);
int FUN_0c090f38(int a4);
int FUN_0c0adfd2(int a4, int a5, int a6, int a7);
int FUN_0c06c348(int a4);
int FUN_0c0732d8(int a4);
int FUN_0c07997a(int a4);
int FUN_0c052da0(void);
int FUN_0c07c9da(int a4);
int FUN_0c082fe6(int a4);
int FUN_0c054dd0(void);
int FUN_0c07c1e4(int a4);
int FUN_0c07cc8e(int a4);
int FUN_0c070f52(int a4);
int FUN_0c081b1c(int a4, int a5, int a6);
int FUN_0c06eb82(int a4);
int FUN_0c03ba28(int a4);
int FUN_0c054664(void);
int FUN_0c06b4c0(int a4);
int FUN_0c07c23e(int a4);
int FUN_0c091326(int a4);
int FUN_0c0c1d42(int a4);
int FUN_0c06c9cc(int a4);
int FUN_0c0d3f6e(void);
int FUN_0c07c7fc(int a4);
int FUN_0c0864f4(int a4);
int FUN_0c090b2e(int a4);
int FUN_0c054b04(void);
int FUN_0c06c15e(int a4);
int FUN_0c06fa2e(int a4);
int FUN_0c070414(int a4);
int FUN_0c0a55c6(int a4, int a5, int a6, int a7);
int FUN_0c06d570(int a4);
int FUN_0c090a34(int a4);
int FUN_0c079a14(int a4);
int FUN_0c086578(int a4);
int FUN_0c0865c0(int a4);
int FUN_0c0734a8(int a4);
int FUN_0c081940(int a4);
int FUN_0c089938(int a4);
int FUN_0c0a4fea(void);
int FUN_0c065214(int a4);
int FUN_0c07d8ca(int a4);
int FUN_0c079a5c(int a4);
int FUN_0c08997c(int a4);
int FUN_0c0add40(int a4, int a5, int a6, int a7);
int FUN_0c074266(int a4);
int FUN_0c0864b6(int a4);
int FUN_0c08a0c8(int a4);
int FUN_0c07cc52(int a4);
int FUN_0c06d630(int a4);
int FUN_0c07422c(int a4);
int FUN_0c07d2f4(int a4);
int FUN_0c0945ee(int a4);
int FUN_0c07c7c4(int a4);
int FUN_0c090d44(int a4);
int FUN_0c0c5108(int a4);
int FUN_0c06c964(int a4);
int FUN_0c0898e6(int a4);
int FUN_0c090902(int a4);

int FUN_0c090c7a(int a4)
{
    register int t0;

    t0 = 0xA2;
    if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) != 0) {
        t0 = 0xBF;
    }
    pl_start_motion(a4, 0x2, t0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    fx_spawn_04b054((*(signed char *)((a4 + 0x3))));
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c088048(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC088168)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC088168)->v));
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xA);
        snd_play_char_voice(a4, 0x5);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06b98c(int a4)
{
    register int t0;
    register int t1;

    if (((((struct oF2_short *)(a4))->v)) != 0) {
        t0 = FUN_0c06b868(a4, 0x200);
        if (t0 == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    }
    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x6E);
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct o710B_uchar *)(a4))->v) = 0x3;
        (((struct o710C_uchar *)(a4))->v) = 0x3;
        (((struct o4540_uchar *)(a4))->v) = 0x0;
        (((struct o3360_uchar *)(a4))->v) = 0x0;
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        t1 = 0x38;
    }
    return t1;
}

int FUN_0c06be24(int a4)
{
    register int t0;
    register int t1;

    if (((((struct oF2_short *)(a4))->v)) != 0) {
        t0 = FUN_0c06b868(a4, 0x200);
        if (t0 == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    }
    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x6E);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct o710B_uchar *)(a4))->v) = 0x3;
        (((struct o710C_uchar *)(a4))->v) = 0x3;
        (((struct o4540_uchar *)(a4))->v) = 0x0;
        (((struct o3360_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        t1 = 0x38;
    }
    return t1;
}

int FUN_0c070480(int a4)
{
    register float u3;
    register int t9;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    u3 = *(float *)0xC070568;
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - (((((struct o38_float *)(a4))->v)) / u3));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - (((((struct o40_float *)(a4))->v)) / u3));
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t9 = pl_landed(a4);
        if ((signed char)t9 != 0) {
            if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
                cam_force_mode(0x0, 0x0, 0x40);
            }
            return pl_end_action_choose_state(a4);
        }
        return (signed char)t9;
    }
    return 0x3C;
}

int FUN_0c08bc54(int a4)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t18;
    register int t17;
    int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t1 = pl_get_hit_count_of_opponent(a4);
        if (((signed char)t1 == 1) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x4)), t3 != 10)) {
            *(unsigned char *)((a4 + 0xA)) = 0x3;
            pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x32);
            t6 = *(int *)((a4 + 0x1C));
            (((struct o71A9_uchar *)(t6))->v) = 0x1;
            (((struct o71A8_uchar *)(t6))->v) = 0x1;
            (((struct o720A_uchar *)(a4))->v) = 0x0;
            FUN_0c0a2830(a4);
            *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x1;
            FUN_0c08bbce(a4);
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t18 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t17 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t17 + 0x1);
        t18 = (t17 + 0x1);
    }
    return t18;
}

int FUN_0c07d4a8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x4, 0x5);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x35);
        cam_set_shake_ramp(0x1E, 0x14);
        (((struct oEC_ushort *)(a4))->v) = 0xB6;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t0 = *(int *)((a4 + 0x1C));
        t2 = *(signed char *)((t0 + 0xC));
        *(unsigned char *)((t0 + 0xC)) = (t2 + 0x1);
        t1 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c081984(int a4)
{
    register int t22;

    pl_step_motion(a4);
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    if (((((struct oEE_short *)(a4))->v)) == 10) {
        snd_play_char_voice(a4, 0x32);
    }
    if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0xA) {
        if (((int)((int)((((struct oEE_short *)(a4))->v)) % (int)0x5)) == 0) {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            fx_spawn_25(a4, ((((struct oF0_short *)(a4))->v)));
        }
    }
    t22 = (((struct oEE_short *)(a4))->v);
    if (t22 == 40) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        return pl_start_motion(a4, 0x1, 0x62);
    }
    return t22;
}

int FUN_0c0866fa(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x30);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    obj_place_linked_ahead(a4, 0x0, 180.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c08fc84(int a4)
{
    register int t0;

    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    FUN_0c08e5b4(a4);
    t0 = *(signed char *)((a4 + 0x3));
    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), a4 + 0x20);
    pl_start_motion(a4, 0x2, 0x70);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    fx_spawn_04b054((*(signed char *)((a4 + 0x3))));
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0920c4(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_start_knockback_reaction(a4);
    if ((signed char)t0 == 0) {
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t1 = pl_landed(a4);
            if ((signed char)t1 != 0) {
                FUN_0c09c45a(a4);
                FUN_0c08e382(a4);
                if ((*(signed char *)((a4 + 0x27C))) != 2) {
                    fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
                }
                FUN_0c08f71c(a4);
                t1 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                return (t1 + 0x1);
            }
        }
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        return pl_apply_acceleration(a4);
    }
    return (signed char)t0;
}

int FUN_0c09457c(int a4)
{
    register int t0;

    t0 = 0x72;
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        t0 = 0x6E;
    }
    pl_start_motion(a4, 0x2, t0);
    (((struct oEE_ushort *)(a4))->v) = 0x14;
    (((struct o71A8_uchar *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = 0x6;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c083194(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    obj_place_linked_ahead(a4, 0x1, 100.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0xE;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

float FUN_0c0b5298(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o0_float *)0xC7F2AB4)->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)0xC7F2AB4)->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u1 - u0)) * ((u1 - u0));
    u0 = math_signed_sqrt(u4);
    u1 = (((struct o0_float *)0xC0B53F0)->v);
    t0 = 0x0;
    if (u1 > u0) {
    } else {
        u2 = (((struct o4_float *)0xC0B53F0)->v);
        if (u2 > (u0 - u1)) {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
            (((struct o5C_float *)(a4))->v) = ((u0 - u1) / u2);
        } else {
            *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) & 0xFBFF);
        }
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t0;
    return u0;
}

int FUN_0c068216(int a4)
{
    register int t0;

    t0 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t0 - 240.0f);
    if ((int)(short)(int)((float)t0 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    t0 = 0x63;
    if ((*(signed char *)((a4 + 0x7223))) != 3) {
        t0 = 0x62;
    }
    pl_start_motion(a4, 0x1, t0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x12;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t0 = 0x2;
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x12;
        t0 = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    *(unsigned char *)((a4 + 0xA)) = t0;
    return t0;
}

int FUN_0c07c290(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        pl_start_hit_freeze(a4);
        snd_play_char_voice(a4, 0x1D);
        snd_play_char_voice(a4, 0x31);
        t0 = 0x0;
        for (;;) {
            FUN_0c0bed78(a4, t0);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
    }
    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06680a(int a4)
{
    register int t4;
    register int t5;
    register int t6;

    if (((((struct oF0_short *)(a4))->v)) == 0) {
        t4 = *(signed char *)((a4 + 0x71F1));
        if (((t4 != 0) && (((signed char)t4 == 0) || (t5 = (((struct o71F4_short *)(a4))->v), t5 == 0))) || (t6 = (((struct o2DC_int *)(a4))->v), (t6 & 0x600) != 0)) {
        } else {
            pl_start_motion(a4, 0x2, 0x7A);
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
            (((struct o48_float *)(a4))->v) = ((((struct o728C_float *)(a4))->v));
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
    } else {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c089bcc(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x30);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC089CAC));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0xE;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c086b86(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    pl_step_motion_owner((*(int *)((a4 + 0x1C))));
    pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    obj_place_linked_ahead(a4, 0x0, 70.0f);
    (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x4, 0x6);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x34);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08fde4(int a4)
{
    int stk[2];
    register int t3;
    register int t8;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t3 = pl_landed(a4);
        if ((signed char)t3 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            pl_change_state(a4, 0xF, 0x0, 0x0);
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            t8 = *(signed char *)((a4 + 0x27C));
            if (t8 != 2) {
                return fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            return t8;
        }
        return pl_step_motion(a4);
    }
    return pl_step_motion(a4);
}

int FUN_0c0d40cc(void)
{
    if ((unsigned char)(*(signed char *)0xC7F2EE7) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        obj_system_init();
        bgm_stop_all();
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        FUN_0c05f2d4(0x3, 0x0);
        res_switch_scene(0xA);
        FUN_0c0a3304();
        cam_request_mode(0x1C, 0x0, 0xF0);
        ui_fade_start(0xFF000000, 0x0, 0x0, 0xF);
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c0535b4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC7F3036;
    *(unsigned short *)0xC7F3036 = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
        (((struct o23_uchar *)0xC7F302D)->v) = 0x2;
        *(unsigned short *)0xC7EB2D0 = 0x78;
        *(unsigned short *)0xC7F25A0 = 0x78;
        ui_enable_hud();
        FUN_0c02d834();
        FUN_0c0a3f30(0x8);
        (((struct o0_uchar *)0xC7F31D0)->v) = 0x1;
        (((struct o1_uchar *)0xC7F31D0)->v) = 0x6;
    }
    t0 = *(short *)0xC7F3036;
    if (t0 == 60) {
        FUN_0c0a3f30(0x7);
        t1 = *(short *)0xC7F3036;
        if (t1 == 60) {
            return fx_spawn_05600c();
        }
        return t1;
    }
    return t0;
}

int FUN_0c077a48(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_gunrock_mode04_phase4(a4);
                }
                return pl_gunrock_mode04_phase3(a4);
            }
            return pl_gunrock_mode04_phase2(a4);
        }
        return pl_gunrock_mode04_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC077824))(a4, a5, a6, a7);
}

int FUN_0c090aac(int a4)
{
    int stk[2];
    register int t7;
    register int t17;

    pl_step_motion(a4);
    (((struct o102_uchar *)(a4))->v) = 0x40;
    pl_mash_reduce_counter(a4, (0x723E + a4));
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x723E))) <= 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 100.0f);
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        pl_change_state(a4, 0x10, 0x2, 0x0);
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 50.0f);
        t17 = 0x24;
    } else {
        t7 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t7 - 1);
        t17 = 0xEC;
        if ((short)(t7 - 1) == 0) {
            pl_change_state(a4, 0x10, 0x2, 0x0);
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 50.0f);
            t17 = 0x24;
        }
    }
    return t17;
}

int FUN_0c094e44(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        t0 = pl_angle_to_opponent(a4);
        t1 = *(int *)((a4 + 0x30));
        t2 = (t0 - t1);
        if ((0x8000 & (t0 - t1)) != 0) {
            t2 = ((t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + ((int)((int)t2 / (int)((((struct oEC_short *)(a4))->v)))));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    pl_apply_velocity(a4);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c081a70(int a4)
{
    register int t1;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t1 = (((struct o71F4_short *)(a4))->v);
    (((struct o71F4_ushort *)(a4))->v) = (int)((float)t1 - 240.0f);
    if ((int)(short)(int)((float)t1 - 240.0f) < 0) {
        (((struct o71F4_ushort *)(a4))->v) = 0x0;
    }
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    snd_play_char_voice(a4, 0x1A);
    snd_play_char_voice(a4, 0x30);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    return 0xEC;
}

int FUN_0c085bb4(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register int t8;

    u0 = (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v);
    u1 = *(float *)0xC085CBC;
    u2 = (u0 + u1);
    if (1.0f > (u0 + u1)) {
        u2 = 1.0f;
    }
    (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = u2;
    pl_step_motion(a4);
    FUN_0c085606(a4);
    t8 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct o74_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        (((struct o70_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        (((struct o6C_float *)(((0x300 + a4) + 0x1080)))->v) = 1.0f;
        t8 = 0x6C;
    }
    return t8;
}

int FUN_0c090bb4(int a4)
{
    register int t2;

    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t2 = pl_landed(a4);
        if ((signed char)t2 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            (((struct o71BC_uchar *)(a4))->v) = 0x3;
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x27C))) != 2) {
                fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
        }
    }
    pl_apply_velocity(a4);
    return pl_apply_acceleration(a4);
}

int FUN_0c090f38(int a4)
{
    register int t1;

    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t1 = pl_landed(a4);
        if ((signed char)t1 != 0) {
            cam_set_shake_ramp(0xA, 0xA);
            (((struct o71DD_uchar *)(a4))->v) = 0x12;
            FUN_0c09c45a(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x27C))) != 2) {
                fx_spawn_042514((a4 + 0x20), (*(int *)((a4 + 0x30))));
            }
            *(unsigned char *)((a4 + 0xB)) = 0x0;
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    return pl_step_motion(a4);
}

int FUN_0c0adfd2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0ADF60))(a4, a5, a6, a7);
    }
    return stage_type01_start_thrown_item(a4);
}

int FUN_0c06c348(int a4)
{
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = (*(float *)0xC06C420);
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x6D);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o710B_uchar *)(a4))->v) = 0x2;
    (((struct o710C_uchar *)(a4))->v) = 0x3;
    (((struct o34C0_uchar *)(a4))->v) = 0x0;
    return 0x34C0;
}

int FUN_0c0732d8(int a4)
{
    register int t0;
    register int t1;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        pl_jack_mode12_phase0(a4, 35.0f, -3.5f);
        pl_start_motion(a4, 0x1, 0xFFFFFF97);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c07997a(int a4)
{
    register int t0;

    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o3C_float *)((*(int *)((a4 + 0x1C)))))->v) = -10.0f;
        (((struct o48_float *)((*(int *)((a4 + 0x1C)))))->v) = -6.39999962f;
        t0 = *(int *)((a4 + 0x1C));
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        t0 = *(int *)((a4 + 0x1C));
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t0 = *(int *)((a4 + 0x1C));
        *(unsigned char *)((t0 + 0xC)) = ((*(signed char *)((t0 + 0xC))) + 0x1);
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    return 0xEE;
}

int FUN_0c052da0(void)
{
    (((struct o1_uchar *)0xC7F306E)->v) = 0x0;
    cam_reset_to_default();
    FUN_0c05fc00();
    (((struct o29_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o27_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o21_uchar *)0xC7F302C)->v) = (*(int *)((((*(signed char *)0xC7F2F18) << 2) + 0xC14AC34)));
    (((struct o22_uchar *)0xC7F302C)->v) = 0x3C;
    (((struct o9_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o24_uchar *)0xC7F302C)->v) = 0x2;
    (((struct o0_uchar *)0xC7F302C)->v) = 0x3;
    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    return 0x0;
}

int FUN_0c07c9da(int a4)
{
    register int t0;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o3C_float *)(a4))->v) = -10.0f;
        (((struct o48_float *)(a4))->v) = -6.39999962f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t0 = *(int *)((a4 + 0x1C));
        *(unsigned char *)((t0 + 0xC)) = ((*(signed char *)((t0 + 0xC))) + 0x1);
    }
    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    return 0xEE;
}

int FUN_0c082fe6(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    if ((*(signed char *)((a4 + 0xB))) != 0) {
        pl_start_motion(a4, 0x3, 0x0);
        fx_spawn_03cb28(a4, 0x2);
        snd_play_char_voice(a4, 0x1E);
    } else {
        pl_start_motion(a4, 0x3, 0x1);
        snd_play_char_voice(a4, 0x0);
        fx_spawn_03c02c(a4);
    }
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int FUN_0c054dd0(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c0a502e();
            (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            t0 = 0x0;
        } else {
            t1 = (((struct oE_short *)0xC7F302C)->v);
            (((struct oE_ushort *)0xC7F302C)->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                t1 = *(signed char *)0xC7F302E;
                (((struct o2_uchar *)0xC7F302C)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o2_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302E) + 0x1);
        (((struct oE_ushort *)0xC7F302C)->v) = 0x1F;
        *(unsigned char *)0xC7F3082 = 0x1;
        FUN_0c0158e4();
        t0 = (((struct oE_short *)0xC7F302C)->v);
        (((struct oE_ushort *)0xC7F302C)->v) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            t0 = *(signed char *)0xC7F302E;
            (((struct o2_uchar *)0xC7F302C)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c07c1e4(int a4)
{
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x63);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct oEC_ushort *)(a4))->v) = 0x3D;
    (((struct oEE_ushort *)(a4))->v) = 0x1B;
    return 0xEE;
}

int FUN_0c07cc8e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x1C))) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x4, 0x17);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x40);
        (((struct oEC_ushort *)(a4))->v) = 0x19;
        (((struct oEE_ushort *)(a4))->v) = 0x40;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t0 = *(int *)((a4 + 0x1C));
        t2 = *(signed char *)((t0 + 0xC));
        *(unsigned char *)((t0 + 0xC)) = (t2 + 0x1);
        t1 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c070f52(int a4)
{
    register int t0;

    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    t0 = 0x70;
    if ((*(signed char *)((a4 + 0x71BC))) == 0) {
        t0 = 0x65;
    }
    pl_start_motion(a4, 0x1, t0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c081b1c(int a4, int a5, int a6)
{
    register int t0;
    register int t5;

    t0 = FUN_0c0a2666(a4, 0x3, a6);
    if ((signed char)t0 == 0) {
        pl_apply_acceleration(a4);
        pl_apply_velocity(a4);
        pl_step_motion(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t5 = pl_landed(a4);
            if ((signed char)t5 != 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                return pl_start_motion(a4, 0x0, 0x9);
            }
            return (signed char)t5;
        }
        return 0x3C;
    }
    return (signed char)t0;
}

int FUN_0c06eb82(int a4)
{
    register int t0;
    register int t1;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        pl_start_motion(a4, 0x1, 0xFFFFFF97);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        FUN_0c0641a0(a4, ((((struct o4_float *)0xC06EC74)->v)), ((((struct o0_float *)0xC06EC74)->v)));
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c03ba28(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xF) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0xA));
    }
    return 0xF0;
}

int FUN_0c054664(void)
{
    int t0;
    int t1;
    register int t2;

    t1 = *(signed char *)0xC7F302E;
    if (t1 != 0) {
        if ((t1 != 1) && (t1 != 2)) {
            (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
            (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
            t1 = 0x0;
            if ((*(signed char *)0xC7F301C) == 0) {
                t2 = FUN_0c054114();
                t1 = t2;
                if ((t2 == 0) && (t0 = *(signed char *)0xC7F3071, t0 != 0)) {
                    *(unsigned char *)0xC7F306E = 0x0;
                    t1 = 0x42;
                }
            }
            return t1;
        }
        return ((int (*)(void))(0xC05436C))();
    }
    return ((int (*)(void))(0xC05426A))();
}

int FUN_0c06b4c0(int a4)
{
    register int t0;
    register int t1;

    (((struct o105_uchar *)(a4))->v) = 0x1;
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0x68);
        (((struct o71A7_uchar *)(a4))->v) = 0x1E;
        (((struct o71A6_uchar *)(a4))->v) = 0x1E;
        t0 = 0x3704;
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            t0 = 0x2264;
        }
        *(float *)((a4 + t0)) = 1.0f;
        (((struct o71BC_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c07c23e(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) != 0) {
        fx_spawn_garuda_debris(a4, 0x2);
        FUN_0c0c033c(a4, 0xA);
        fx_spawn_state11_aura(a4);
        snd_play_char_voice(a4, 0x30);
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c091326(int a4)
{
    register int t1;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x2, 0xBB);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c0c1d42(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0xA));
    }
    return 0xF0;
}

int FUN_0c06c9cc(int a4)
{
    register int t0;
    register int t1;

    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)((a4 + 0xF2));
    pl_ryoma_cue_table_next(a4, ((signed char)((t0 << 1) + t0) + 0xC14F203), ((((struct oF0_short *)(a4))->v)), (0xF2 + a4));
    if (((((struct oF0_short *)(a4))->v)) == 21) {
        fx_spawn_0357e0(a4, 0x4E);
    }
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0d3f6e(void)
{
    if ((unsigned char)(*(signed char *)0xC7F2EE7) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        obj_system_init();
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        cam_request_mode(0x1C, 0x0, 0xF0);
        res_switch_scene(0x2);
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c07c7fc(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
        pl_start_motion(a4, 0x2, 0x92);
        FUN_0c09c45a(a4);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xC);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0864f4(int a4)
{
    register int t1;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = (*(short *)((((*(signed char *)((a4 + 0x721D))) << 1) + 0xC337BA4)));
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        return snd_play_char_voice(a4, 0x30);
    }
    return 0xEC;
}

int FUN_0c090b2e(int a4)
{
    register int t0;

    FUN_0c08e5b4(a4);
    (((struct o3C_float *)(a4))->v) = 16.0f;
    (((struct o48_float *)(a4))->v) = -2.0f;
    t0 = 0xA3;
    if ((*(signed char *)((a4 + 0x7205))) != 0) {
        t0 = 0xB9;
    }
    pl_start_motion(a4, 0x2, t0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c054b04(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(void))(0xC054AF6))();
                            }
                            return ((int (*)(void))(0xC054AB8))();
                        }
                        return FUN_0c054a78();
                    }
                    return ((int (*)(void))(0xC05499C))();
                }
                return ((int (*)(void))(0xC0548E4))();
            }
            return ((int (*)(void))(0xC054886))();
        }
        return ((int (*)(void))(0xC054870))();
    }
    return ((int (*)(void))(0xC054760))();
}

int FUN_0c06c15e(int a4)
{
    register int t1;

    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x6C);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x2;
    (((struct o710C_uchar *)(a4))->v) = 0x3;
    (((struct o34C0_uchar *)(a4))->v) = 0x0;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c06fa2e(int a4)
{
    pl_start_hit_freeze(a4);
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x1, 0x6A);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    obj_spawn_037848(a4);
    (((struct oEC_ushort *)(a4))->v) = 0x6;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x1;
    return 0x1;
}

int FUN_0c070414(int a4)
{
    register int t1;
    register int t10;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    t10 = 0xEC;
    if ((short)(t1 - 1) == 0) {
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 10) {
            cam_force_mode(0x0, 0x0, 0x40);
        }
        (((struct o2D9_uchar *)(a4))->v) = 0x0;
        (((struct o107_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x8;
        t10 = 0x8;
    }
    return t10;
}

int FUN_0c0a55c6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3075;
    t1 = *(signed char *)0xC7F3074;
    t2 = 0x0;
    if (((t0 ^ t1) != 1) && ((t0 ^ t1) == 2)) {
        t2 = 0x1;
    }
    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x3;
                (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
                return 0x0;
            }
            return ((int (*)(int, int, int, int))(0xC0A5506))(t2, 0x0, 0xC7F2EE0, a7);
        }
        return FUN_0c0a5240(t2);
    }
    return menu_stage_select_init(t2);
}

int FUN_0c06d570(int a4)
{
    register int t2;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t2 = pl_landed(a4);
    if ((signed char)t2 != 0) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c090a34(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x2, 0x95);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o102_uchar *)(a4))->v) = 0x40;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xB4;
    (((struct o723E_uchar *)(a4))->v) = 0x1E;
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 100.0f);
    t2 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c079a14(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC079B0C)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC079B0C)->v));
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c086578(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        pl_start_motion(a4, 0x1, 0x71);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c0852a6(a4, 0x10);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    return 0xEC;
}

int FUN_0c0865c0(int a4)
{
    register int t3;
    register int t6;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    FUN_0c0852a6(a4, 0x10);
    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    t6 = 0xEC;
    if ((short)(t3 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        pl_start_motion(a4, 0x1, 0x72);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t6 = 0x71A8;
    }
    return t6;
}

int FUN_0c0734a8(int a4)
{
    int stk[2];
    register int t9;
    register int t4;
    register int t6;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    pl_step_motion(a4);
    t9 = 0x3C;
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        t9 = (signed char)t4;
        if ((signed char)t4 != 0) {
            pl_change_state(a4, 0x6, 0x0, 0x0);
            t6 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t6 + 0x1);
            t9 = (t6 + 0x1);
        }
    }
    return t9;
}

int FUN_0c081940(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((int)((((struct oEE_short *)(a4))->v)) < (int)0x78) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
    }
    if ((int)((((struct oEE_short *)(a4))->v)) > (int)0x9) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x1, 0x61);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    return 0xEE;
}

int FUN_0c089938(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x3, 0xE);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        fx_spawn_03f2c8(a4);
        return FUN_0c0a3f0e(0x0);
    }
    return 0xEC;
}

int FUN_0c0a4fea(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
            
            t1 = menu_check_start_any_pad();
            if (t1 != 0) {
                return 0x1;
            }
            return 0x0;
        }
        t1 = menu_check_start_button((t0 - 1));
        if (t1 == 0) {
            return 0x0;
        }
        return 0x1;
    }
    t0 = menu_check_start_any_pad();
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c065214(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return pl_wait_anim_end_move(a4);
                        }
                        return pl_mode08_09_phase5_fall(a4);
                    }
                    return pl_mode08_09_phase4(a4);
                }
                return pl_mode08_09_phase2_fall(a4);
            }
            return pl_wait_anim_end_to_state14(a4);
        }
        return pl_mode08_09_phase1(a4);
    }
    return pl_mode08_09_phase0_launch(a4);
}

int FUN_0c07d8ca(int a4)
{
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 76) {
        FUN_0c0a3d5c((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3))), (*(signed char *)((a4 + 0x27C))));
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c079a5c(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_landed(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_spawn_hit_effect_with_se(a4);
        pl_start_motion(a4, 0x0, 0x9);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c08997c(int a4)
{
    register int t4;

    pl_step_motion(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        pl_start_motion(a4, 0x3, 0xF);
        (((struct o71A7_uchar *)(a4))->v) = 0x1E;
        (((struct o71A6_uchar *)(a4))->v) = 0x1E;
        t4 = 0x71A6;
    }
    return t4;
}

int FUN_0c0add40(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0ADD38))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0ADCF4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0ADCE2))(a4, a5, a6, a7);
}

int FUN_0c074266(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = pl_step_motion(a4);
    if ((signed char)t0 == 0) {
        t0 = pl_landed(a4);
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            (((struct o48_float *)(a4))->v) = (*(float *)0xC0742F0);
            t0 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = t1;
    } else {
        (((struct o48_float *)(a4))->v) = (*(float *)0xC0742F0);
        t1 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0864b6(int a4)
{
    register int t1;
    register int t4;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    t4 = 0xEC;
    if ((short)(t1 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        pl_start_motion(a4, 0x1, 0x70);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = 0x71A8;
    }
    return t4;
}

int FUN_0c08a0c8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) < (int)0x3C) {
            pl_step_motion_owner(a4);
            return pl_apply_motion_translation(a4);
        }
        return 0x719E;
    }
    t0 = *(signed char *)((a4 + 0xC));
    *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c07cc52(int a4)
{
    register int t0;
    register int t1;

    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x4, 0x15);
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x41);
        (((struct oEC_ushort *)(a4))->v) = 0x26;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c06d630(int a4)
{
    int stk[2];
    register int t8;

    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_change_state(a4, 0xF, 0x0, 0x0);
    }
    t8 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t8 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t8;
}

int FUN_0c07422c(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        pl_start_motion(a4, 0x1, 0xFFFFFF9E);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c07d2f4(int a4)
{
    register int t6;

    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 37) {
        obj_force_owner_state27(a4, 0x38);
    }
    pl_apply_motion_translation(a4);
    t6 = pl_step_motion(a4);
    if ((signed char)t6 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t6;
}

int FUN_0c0945ee(int a4)
{
    pl_step_motion(a4);
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x100))) == 0) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            return pl_end_action_choose_state(a4);
        }
        return 0xEE;
    }
    return 0x100;
}

int FUN_0c07c7c4(int a4)
{
    register int t5;
    register int t4;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t5 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_start_motion(a4, 0x2, 0x90);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t4 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t4 + 0x1);
        t5 = (t4 + 0x1);
    }
    return t5;
}

int FUN_0c090d44(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x2, 0xA7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    (((struct oEE_ushort *)(a4))->v) = 0x32;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    t2 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c0c5108(int a4)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x3));
    return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0xA));
}

int FUN_0c06c964(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c0898e6(int a4)
{
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    pl_start_motion(a4, 0x3, 0xD);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o710B_uchar *)(a4))->v) = 0x1;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    return 0x710C;
}

int FUN_0c090902(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x2, 0xA1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xB4;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}
