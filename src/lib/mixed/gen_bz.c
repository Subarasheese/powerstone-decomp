/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c08c198(int, int, int, int);
int FUN_0c0a4fea(void);
int FUN_0c0ad1fa(int);
int FUN_0c0ae4c0(int, int, int, int);
int FUN_0c0d60e2(int);
int FUN_0c0d61c0(int);
int fx_spawn_03adf8(int);
int menu_vs_announce_names(void);
int menu_vs_intro_step(void);
int obj_destroy(int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_end_action_choose_state(int);
int pl_end_action_reset(int);
int pl_garuda_mode13_phase0(int);
int pl_garuda_mode13_phase1(int);
int pl_gunrock_mode01_03_update_v0(int);
int pl_gunrock_mode01_03_update_v1(int);
int pl_gunrock_mode11_phase0(int);
int pl_gunrock_mode11_phase1(int);
int pl_gunrock_start_motion_reset_slots(int, int, int);
int pl_gunrock_wait_anim_end(int);
int pl_mode08_09_update_v1(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_timer_arm_forever(int);
int snd_play_char_voice(int, int);
int stage_type01_init_kind_row(int);
int stage_type01_init_move_vector(int);
int stage_type01_reset_anim_from_kind(int);
int stage_type02_start_thrown(int);
int ui_draw_please_wait(int);
int FUN_0c0742a4(int a4);
int FUN_0c07c32c(int a4);
int FUN_0c0df210(float f4);
int FUN_0c07c360(int a4);
int FUN_0c0a5cb8(int a4, int a5, int a6, int a7);
int FUN_0c07fc34(int a4);
int FUN_0c08a06c(int a4);
int FUN_0c090578(int a4);
int FUN_0c091566(int a4);
int FUN_0c066dc8(int a4);
int FUN_0c0830b4(int a4);
int FUN_0c083b7e(int a4);
int FUN_0c08a09c(int a4);
int FUN_0c08c12e(int a4);
int FUN_0c090936(int a4);
int FUN_0c090f9a(int a4);
int FUN_0c091596(int a4);
int FUN_0c076674(int a4);
int FUN_0c0793ee(int a4);
int FUN_0c07c4c2(int a4);
int FUN_0c081ad2(int a4);
int FUN_0c0897e6(int a4);
int FUN_0c090cf2(int a4);
int FUN_0c090e12(int a4);
int FUN_0c0d5c9a(int a4);
int FUN_0c0d5cc4(int a4);
int FUN_0c0704f4(int a4);
int FUN_0c07d63a(int a4);
int FUN_0c07d788(int a4);
int FUN_0c0dcc80(float f4, float f5, float f6);
int FUN_0c079a9c(int a4);
int FUN_0c07cb1c(int a4);
int FUN_0c081a20(int a4);
int FUN_0c081b72(int a4);
int FUN_0c0914e0(int a4);
int FUN_0c0916d4(int a4);
int FUN_0c091a18(int a4);
int FUN_0c092136(int a4);
int FUN_0c04a9ae(int a4);
int FUN_0c0766f0(int a4);
int FUN_0c084a9e(int a4);
int FUN_0c085d6c(int a4);
int FUN_0c086606(int a4);
int FUN_0c089888(int a4);
int FUN_0c0d5ece(int a4);
int FUN_0c06d5dc(int a4);
int FUN_0c077eba(int a4);
int FUN_0c07946a(int a4);
int FUN_0c07c89c(int a4);
int FUN_0c0ae490(int a4, int a5, int a6, int a7);
int FUN_0c07fc84(int a4);
int FUN_0c077dd4(int a4, int a5, int a6, int a7);
int FUN_0c0a5612(void);
int FUN_0c0ac6cc(int a4, int a5);
int FUN_0c0ac6f6(int a4, int a5);
int FUN_0c0ac762(int a4, int a5);
int FUN_0c05471c(void);
int FUN_0c07823c(int a4);
int FUN_0c07b0f2(int a4);
int FUN_0c0ac714(int a4);
int FUN_0c0ac72e(int a4);
int FUN_0c0ad352(int a4, int a5, int a6, int a7);
int FUN_0c0ad984(int a4, int a5, int a6, int a7);
int FUN_0c0adb42(int a4, int a5, int a6, int a7);
int FUN_0c0adcc8(int a4, int a5, int a6, int a7);
int FUN_0c0ae25c(int a4, int a5, int a6, int a7);
int FUN_0c0ae712(int a4, int a5, int a6, int a7);
int FUN_0c0ae4d6(int a4, int a5, int a6, int a7);
int FUN_0c0af000(int a4);
int FUN_0c0d407e(void);
int FUN_0c069414(int a4);
int FUN_0c076c6c(int a4);
int FUN_0c083b6c(int a4);
int FUN_0c083c72(int a4);
int FUN_0c0ac6ba(int a4);
int FUN_0c096454(int a4, int a5, int a6, int a7);
int FUN_0c04a9a0(int a4);
int FUN_0c054db4(void);
int FUN_0c054dc2(void);
int FUN_0c085c16(int a4);
int FUN_0c085d90(int a4);
int FUN_0c08662a(int a4);
int FUN_0c08bcc8(int a4);
int FUN_0c08bf1c(int a4);
int FUN_0c0ac752(int a4);
int FUN_0c0d3e60(void);
int FUN_0c0ac748(int a4);
int FUN_0c04a9d2(int a4);
int FUN_0c0873ca(int a4);
int FUN_0c089b14(int a4);
int FUN_0c096464(int a4);
int FUN_0c097e70(int a4, int a5, int a6, int a7);
int FUN_0c0b83fc(int a4);
int FUN_0c0ac75e(void);
int FUN_0c0ad75e(void);
int FUN_0c0ad762(void);
int FUN_0c0ad79c(void);
int FUN_0c0ad7a0(void);
void FUN_0c0ae894(void);
void FUN_0c0ae9d0(void);
void FUN_0c0d46e0(void);

int FUN_0c0742a4(int a4)
{
    register int t2;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t2 = pl_step_motion(a4);
    if ((signed char)t2 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t2;
}

int FUN_0c07c32c(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        pl_start_motion(a4, 0x1, 0x6A);
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0df210(float f4)
{
    register int t0;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    t0 = ((int (*)(float))(0xC0DF2E0))(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int FUN_0c07c360(int a4)
{
    register int t0;
    register int t1;

    pl_apply_motion_translation(a4);
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC07C434)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC07C434)->v));
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0a5cb8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
            (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        } else {
            menu_vs_announce_names();
        }
    } else {
        menu_vs_intro_step();
    }
    return FUN_0c0a4fea();
}

int FUN_0c07fc34(int a4)
{
    register int t3;

    pl_timer_arm_forever(a4);
    pl_start_motion(a4, 0x3, 0x7);
    fx_spawn_03adf8(a4);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t3 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
    return (t3 + 0x1);
}

int FUN_0c08a06c(int a4)
{
    register int t6;

    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9))) != 2) {
        pl_end_action_choose_state(a4);
    }
    t6 = (((struct o719E_short *)(a4))->v);
    if ((unsigned short)t6 == 55) {
        return snd_play_char_voice(a4, 0xA);
    }
    return (unsigned short)t6;
}

int FUN_0c090578(int a4)
{
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct o7254_float *)(a4))->v) = ((((struct o20_float *)(a4))->v));
    (((struct o7258_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
    (((struct o101_uchar *)(a4))->v) = 0x0;
    (((struct o102_uchar *)(a4))->v) = 0x0;
    return 0x102;
}

int FUN_0c091566(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x2, 0xBD);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x4B;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c066dc8(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) == 0) {
        pl_start_motion(a4, 0x2, 0x66);
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        t0 = *(signed char *)((a4 + 0xC));
        *(unsigned char *)((a4 + 0xC)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0830b4(int a4)
{
    register int t2;

    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c083b7e(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}

int FUN_0c08a09c(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}

int FUN_0c08c12e(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, 0x0);
    snd_play_char_voice(a4, 0x1);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c090936(int a4)
{
    register int t1;

    pl_step_motion(a4);
    t1 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        return pl_change_state(a4, 0x18, 0x0);
    }
    return 0xEC;
}

int FUN_0c090f9a(int a4)
{
    pl_apply_motion_translation(a4);
    pl_step_motion(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x1);
    }
    return 0x71AA;
}

int FUN_0c091596(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        (((struct o48_float *)(a4))->v) = (*(float *)0xC091664);
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c076674(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c0793ee(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c07c4c2(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c081ad2(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        return pl_start_motion(a4, 0x0, 0x8);
    }
    return (signed char)t0;
}

int FUN_0c0897e6(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int FUN_0c090cf2(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_change_state(a4, 0x18, 0x0);
    }
    return (signed char)t1;
}

int FUN_0c090e12(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return (signed char)t1;
}

int FUN_0c0d5c9a(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F306F) == 0) && (t1 = *(signed char *)0xC7F306E, t1 == 0)) {
        return FUN_0c0d60e2((*(signed char *)((a4 + 0x9))));
    }
    return ui_draw_please_wait((*(signed char *)((a4 + 0x9))));
}

int FUN_0c0d5cc4(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F306F) == 0) && (t1 = *(signed char *)0xC7F306E, t1 == 0)) {
        return FUN_0c0d61c0((*(signed char *)((a4 + 0x9))));
    }
    return ui_draw_please_wait((*(signed char *)((a4 + 0x9))));
}

int FUN_0c0704f4(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c07d63a(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c07d788(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int FUN_0c0dcc80(float f4, float f5, float f6)
{
    (((struct o10_float *)0xC346880)->v) = (((((struct o0_float *)0xC346880)->v)) + f4);
    (((struct o14_float *)0xC346880)->v) = (((((struct o4_float *)0xC346880)->v)) + f5);
    (((struct o18_float *)0xC346880)->v) = (((((struct o8_float *)0xC346880)->v)) + f6);
    (((struct o20_float *)0xC346880)->v) = f4;
    (((struct o24_float *)0xC346880)->v) = f5;
    (((struct o28_float *)0xC346880)->v) = f6;
    return 0x8;
}

int FUN_0c079a9c(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t1;
}

int FUN_0c07cb1c(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t1;
}

int FUN_0c081a20(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c081b72(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        (((struct o7223_uchar *)(a4))->v) = 0x0;
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c0914e0(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xD, 0x0);
    }
    return (signed char)t0;
}

int FUN_0c0916d4(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xD, 0x0);
    }
    return (signed char)t0;
}

int FUN_0c091a18(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return (signed char)t0;
}

int FUN_0c092136(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0xF, (*(signed char *)((a4 + 0x7205))));
    }
    return (signed char)t0;
}

int FUN_0c04a9ae(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 5) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
    return 0x5C;
}

int FUN_0c0766f0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c084a9e(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c085d6c(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c086606(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c089888(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c0d5ece(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F306F) == 0) && (t1 = *(signed char *)0xC7F306E, t1 == 0)) {
        return 0x42;
    }
    return ui_draw_please_wait((*(signed char *)((a4 + 0x9))));
}

int FUN_0c06d5dc(int a4)
{
    register int t2;

    pl_step_motion_owner(a4);
    t2 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t2 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t2;
}

int FUN_0c077eba(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_gunrock_wait_anim_end(a4);
        }
        return pl_gunrock_mode11_phase1(a4);
    }
    return pl_gunrock_mode11_phase0(a4);
}

int FUN_0c07946a(int a4)
{
    register int t1;

    pl_gunrock_start_motion_reset_slots(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c07c89c(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int FUN_0c0ae490(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0AE488))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AE3EC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AE3E4))(a4, a5, a6, a7);
}

int FUN_0c07fc84(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c077dd4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_mode08_09_update_v1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC077DB2))(a4, a5, a6, a7);
}

int FUN_0c0a5612(void)
{
    if ((unsigned char)(*(signed char *)0xC7F2EE7) == 0) {
        (((struct o0_uchar *)0xC7F2EE6)->v) = 0x2;
    } else {
        (((struct o0_uchar *)0xC7F2EE6)->v) = 0x1;
    }
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c0ac6cc(int a4, int a5)
{
    int t1;

    if (((*(signed char *)((((signed char)a5 + (0x310 + a4)) + 0x0))) != 0) && (t1 = *(signed char *)((a4 + 0x4)), t1 == 2)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ac6f6(int a4, int a5)
{
    int t1;

    if (((*(signed char *)((((signed char)a5 + (0x310 + a4)) + 0x0))) != 0) && (t1 = *(signed char *)((a4 + 0x4)), t1 == 3)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ac762(int a4, int a5)
{
    int t1;

    if (((*(signed char *)((((signed char)a5 + (0x310 + a4)) + 0x0))) != 0) && (t1 = *(signed char *)((a4 + 0x4)), t1 == 4)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05471c(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302E;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(void))(0xC0546C6))();
    }
    return ((int (*)(void))(0xC0546B6))();
}

int FUN_0c07823c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_gunrock_mode01_03_update_v1(a4);
    }
    return pl_gunrock_mode01_03_update_v0(a4);
}

int FUN_0c07b0f2(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_garuda_mode13_phase1(a4);
    }
    return pl_garuda_mode13_phase0(a4);
}

int FUN_0c0ac714(int a4)
{
    int t1;
    register int t2;

    if (((*(signed char *)((a4 + 0x4))) == 1) && (t1 = (((struct o308_int *)(a4))->v), t2 = *(signed char *)((t1 + 0xB)), t2 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ac72e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x4));
    if (t0 != 1) {
        if (t0 == 6) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0ad352(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0AD2F2))(a4, a5, a6, a7);
    }
    return FUN_0c0ad1fa(a4);
}

int FUN_0c0ad984(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0AD91C))(a4, a5, a6, a7);
    }
    return stage_type01_init_move_vector(a4);
}

int FUN_0c0adb42(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0ADAA6))(a4, a5, a6, a7);
    }
    return stage_type01_init_kind_row(a4);
}

int FUN_0c0adcc8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0ADC60))(a4, a5, a6, a7);
    }
    return stage_type01_reset_anim_from_kind(a4);
}

int FUN_0c0ae25c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0AE258))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AE224))(a4, a5, a6, a7);
}

int FUN_0c0ae712(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0AE682))(a4, a5, a6, a7);
    }
    return stage_type02_start_thrown(a4);
}

int FUN_0c0ae4d6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0ae4c0(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AE4B2))(a4, a5, a6, a7);
}

int FUN_0c0af000(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30E));
    if (t0 == 1) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x16C);
    }
    return t0;
}

int FUN_0c0d407e(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}

int FUN_0c069414(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}

int FUN_0c076c6c(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}

int FUN_0c083b6c(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}

int FUN_0c083c72(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}

int FUN_0c0ac6ba(int a4)
{
    if ((*(signed char *)((a4 + 0x2DA))) == 1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c096454(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC339230 + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c04a9a0(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    return 0xEC;
}

int FUN_0c054db4(void)
{
    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    return 0x0;
}

int FUN_0c054dc2(void)
{
    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    return 0x0;
}

int FUN_0c085c16(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}

int FUN_0c085d90(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}

int FUN_0c08662a(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}

int FUN_0c08bcc8(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c08bf1c(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_reset(a4);
}

int FUN_0c0ac752(int a4)
{
    return ((((*(signed char *)((a4 + 0x2D9))) == 0)) ? 1 : 0);
}

int FUN_0c0d3e60(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}

int FUN_0c0ac748(int a4)
{
    return ((((*(signed char *)((a4 + 0x4))) == 1)) ? 1 : 0);
}

int FUN_0c04a9d2(int a4)
{
    return obj_destroy(a4);
}

int FUN_0c0873ca(int a4)
{
    return pl_end_action_choose_state(a4);
}

int FUN_0c089b14(int a4)
{
    return pl_step_motion(a4);
}

int FUN_0c096464(int a4)
{
    return pl_end_action_choose_state(a4);
}

int FUN_0c097e70(int a4, int a5, int a6, int a7)
{
    return FUN_0c08c198(a4, a5, a6, a7);
}

int FUN_0c0b83fc(int a4)
{
    return obj_destroy(a4);
}

int FUN_0c0ac75e(void)
{
    return 0x1;
}

int FUN_0c0ad75e(void)
{
    return ((int (*)(void))(0xC0AD744))();
}

int FUN_0c0ad762(void)
{
    return ((int (*)(void))(0xC0AD744))();
}

int FUN_0c0ad79c(void)
{
    return ((int (*)(void))(0xC0AD766))();
}

int FUN_0c0ad7a0(void)
{
    return ((int (*)(void))(0xC0AD766))();
}

void FUN_0c0ae894(void)
{
    
}

void FUN_0c0ae9d0(void)
{
    
}

void FUN_0c0d46e0(void)
{
    
}
