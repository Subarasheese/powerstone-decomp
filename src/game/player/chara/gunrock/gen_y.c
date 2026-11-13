/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct o7230_uchar { char p[0x7230]; unsigned char v; };
struct o7231_uchar { char p[0x7231]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555c4(void);
int FUN_0c05cb42(int, int, int);
int FUN_0c08de3a(int, int);
int FUN_0c09c45a(int);
int FUN_0c0a3824(int);
int FUN_0c0bd640(int, int);
int FUN_0c0cc7fc(int);
float FUN_0c0e2240(int, int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fdc();
int FUN_0c0e6fe8(void);
int cam_set_shake_ramp(int, int);
int fx_spawn_045f9c(int);
int fx_spawn_17(int, int);
int fx_spawn_18(int, int);
int fx_spawn_19(int, int);
int fx_spawn_double_ring(int, int);
int fx_spawn_gunrock_spark(int, int);
int fx_spawn_hit_effect(int, int, int, int);
int fx_spawn_spark_rings(int, int, float, float);
int hit_probe_step_by_velocity(int, int, float);
int item_director_roll_variant(int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int obj_set_record_char(int, int);
int pl_angle_to_opponent(int);
int pl_apply_acceleration(int);
int pl_apply_gravity(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_choose_state(int, int, int, int);
int pl_landed(int);
int pl_no_ground(int);
int pl_play_side_se_at_frame(int, int, int);
int pl_play_voice_at_frame(int, int, int);
int pl_reset_model_parts(int);
int pl_reset_scale(int);
int pl_set_power_form_off(int);
int pl_set_power_form_on(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_stick_dir_angle(int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int snd_spawn_delayed_sound(int, int, int);
int pl_gunrock_attack_state_update(int a4, int a5, int a6, int a7, float f4, float f5);
int item_director_pick_spot(void);
int pl_state23_phase0(int a4);
int pl_state23_phase1(int a4);
int FUN_0c08c864(int a4);

int pl_gunrock_attack_state_update(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_0 = a4;
    v0_2 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_3 = *(signed char *)((v0_0 + 0x7223));
    v0_1 = (v0_3);
    if ((v0_3 == 1)) goto L_C078280;
    if ((v0_1 == 2)) goto L_C078284;
    if ((v0_1 == 3)) goto L_C078288;
    if ((v0_1 == 4)) goto L_C0782AC;
    if ((v0_1 == 5)) goto L_C0782B0;
    if ((v0_1 == 6)) goto L_C0782B4;
    if ((v0_1 == 7)) goto L_C0782B8;
    if ((v0_1 == 8)) goto L_C0782BC;
    return v0_1;
    L_C0782BC:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C0790A4;
    if ((v0_1 == 1)) goto L_C0790A8;
    if ((v0_1 == 2)) goto L_C0790AC;
    if ((v0_1 == 3)) goto L_C0790B0;
    if ((v0_1 == 4)) goto L_C0790B4;
    if ((v0_1 == 5)) goto L_C0790B8;
    if ((v0_1 == 6)) goto L_C0790BC;
    if ((v0_1 == 7)) goto L_C0790C0;
    return v0_1;
    L_C0790C0:;
    L_C078FAC:;
    (((struct o7223_uchar *)(v0_0))->v) = 0x0;
    return pl_end_action_choose_state(v0_0, R5, R6, v0_2);
    L_C0790BC:;
    L_C078F88:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (*(signed char *)((v0_0 + 0x71AA))) == 0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x71AA);
    R14 = (v0_0);
    if (v0_2) goto L_C078FA6;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078FA6:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C0790B8:;
    L_C078EEC:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (((struct oF0_short *)(v0_0))->v);
    (((struct oF0_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C078F1E;
    cam_set_shake_ramp(0xA, 0xA);
    FUN_0c09c45a(R14);
    (((struct oF0_ushort *)(R14))->v) = 0xC;
    L_C078F1E:;
    v0_0 = (((struct oEE_short *)(R14))->v);
    (((struct oEE_ushort *)(R14))->v) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C078F64;
    v0_0 = (((struct oF2_short *)(R14))->v);
    v0_1 = (v0_0);
    if ((v0_0 == 4)) goto L_C078F48;
    if ((v0_1 == 9)) goto L_C078F48;
    if ((v0_1 == 13)) goto L_C078F48;
    if ((v0_1 == 18)) goto L_C078F48;
    if ((v0_1 == 23)) goto L_C078F48;
    v0_0 = (((struct oF2_short *)(R14))->v);
    R5 = (v0_0);
    L_C078F50:;
    FUN_0c0bd640(R14, R5);
    (((struct oF2_ushort *)(R14))->v) = (((((struct oF2_short *)(R14))->v)) + 0x1);
    (((struct oEE_ushort *)(R14))->v) = 0x4;
    L_C078F64:;
    v0_0 = (((struct oEC_short *)(R14))->v);
    (((struct oEC_ushort *)(R14))->v) = (v0_0 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_0 - 1) != 0)) goto L_C078F82;
    pl_start_motion(R14, 0x1, 0x67);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078F82:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078F48:;
    R5 = (0x7F);
    goto L_C078F50;
    L_C0790B4:;
    L_C078E08:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (unsigned short)((((struct o719E_short *)(v0_0))->v)) != 1;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (v0_2) goto L_C078E28;
    FUN_0c09c45a(R14);
    L_C078E28:;
    v0_0 = (((struct oEC_short *)(R14))->v);
    (((struct oEC_ushort *)(R14))->v) = (v0_0 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_0 - 1) != 0)) goto L_C078E42;
    *(unsigned short *)((R14 + v0_1)) = 0x14;
    fx_spawn_19(R14, 0x1);
    L_C078E42:;
    v0_0 = *(int *)((R14 + 0x1C));
    v0_1 = (((*(signed char *)((v0_0 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((v0_0 + 0x71A5)))) != 0x2AD;
    v0_0 = (v0_0);
    if (v0_1) goto L_C078E76;
    fx_spawn_17(R14, 0x3);
    fx_spawn_hit_effect(((*(int *)((R14 + 0x1C))) + 0x20), (R14 + 0x2C), ((-(*(signed char *)((R14 + 0x3)))) + 0x1), 0x1);
    L_C078E76:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    v0_1 = (0x71AA);
    if (v0_0) goto L_C078EB6;
    pl_start_motion(R14, 0x1, 0x66);
    snd_play_char_voice(R14, 0x1A);
    FUN_0c0bd640(R14, 0x7F);
    (((struct oEC_ushort *)(R14))->v) = 0x5A;
    (((struct oEE_ushort *)(R14))->v) = 0xA;
    (((struct oF0_ushort *)(R14))->v) = 0xC;
    (((struct oF2_ushort *)(R14))->v) = 0x0;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078EB6:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C0790B0:;
    L_C078D2C:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    v0_2 = !(0.0f > ((((struct o3C_float *)(v0_0))->v)));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_1 = (0x3C);
    R14 = (v0_0);
    w0_0 = (0.0f);
    if (v0_2) goto L_C078DC6;
    v0_0 = pl_landed(R14);
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 == 0)) goto L_C078DC6;
    cam_set_shake_ramp(0x3C, 0x3C);
    FUN_0c0e6fe8();
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 50.0f);
    fx_spawn_spark_rings((*(signed char *)((R14 + 0x3))), ((int)stk + 0), 2.0f, 150.0f);
    fx_spawn_19(R14, 0x0);
    (((struct o3C_float *)(R14))->v) = 0.0f;
    (((struct o48_float *)(R14))->v) = 0.0f;
    (((struct o71BC_uchar *)(R14))->v) = 0x0;
    pl_start_motion(R14, 0x1, 0x65);
    FUN_0c08de3a(R14, 0x73);
    (((struct oEC_ushort *)(R14))->v) = 0x14;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078DC6:;
    return v0_1;
    L_C0790AC:;
    L_C078CC0:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C078CE6;
    pl_start_hit_freeze(R14);
    L_C078CE6:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    v0_1 = (0x71AA);
    if (v0_0) goto L_C078CFE;
    pl_start_motion(R14, 0x1, 0x64);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078CFE:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C0790A8:;
    L_C078C7C:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    (((struct o105_uchar *)(v0_0))->v) = 0x2;
    pl_step_motion(v0_0);
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    v0_2 = !(0.0f > ((((struct o3C_float *)(v0_0))->v)));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x3C);
    R14 = (v0_0);
    if (v0_2) goto L_C078CBA;
    pl_start_motion(R14, 0x1, 0x63);
    (((struct oEC_ushort *)(R14))->v) = 0x18;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078CBA:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C0790A4:;
    *(int *)((int)stk + 16) = (R14);
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 77.3999939f;
    (((struct o48_float *)(v0_0))->v) = -4.0f;
    pl_start_motion(v0_0, 0x1, 0x64);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    return snd_play_char_voice(v0_0, 0x1B);
    L_C0782B8:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C078884;
    if ((v0_1 == 1)) goto L_C078888;
    if ((v0_1 == 2)) goto L_C07888C;
    if ((v0_1 == 3)) goto L_C078890;
    if ((v0_1 == 4)) goto L_C078894;
    if ((v0_1 == 5)) goto L_C078898;
    if ((v0_1 == 6)) goto L_C07889C;
    if ((v0_1 == 7)) goto L_C0788A0;
    return v0_1;
    L_C0788A0:;
    L_C078788:;
    (((struct o7223_uchar *)(v0_0))->v) = 0x0;
    return pl_end_action_choose_state(v0_0, R5, R6, v0_2);
    L_C07889C:;
    L_C07872C:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = ((((struct o50_float *)(v0_0))->v)) > (*(float *)((0xC150C64 + (((*(signed char *)((v0_0 + 0x4))) << 2) << 1))));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (v0_2) goto L_C078758;
    pl_reset_scale(R14);
    L_C078774:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    v0_1 = (0x71AA);
    if (v0_0) goto L_C078782;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078782:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078758:;
    (((struct o50_float *)(R14))->v) = (((((struct o50_float *)(R14))->v)) - 0.099999994f);
    (((struct o54_float *)(R14))->v) = (((((struct o54_float *)(R14))->v)) - 0.099999994f);
    (((struct o58_float *)(R14))->v) = (((((struct o58_float *)(R14))->v)) - 0.099999994f);
    goto L_C078774;
    L_C078898:;
    L_C0784DE:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    v0_3 = R13;
    *(int *)((int)stk + 12) = v0_3;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    pl_step_motion(v0_0);
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    (((struct oEE_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    v0_1 = (0xEE);
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C07851A;
    *(unsigned short *)((R14 + v0_1)) = 0xA;
    obj_set_record_char(R14, 0x70);
    L_C07851A:;
    v0_0 = *(signed char *)((R14 + 0xF));
    v0_1 = (v0_0);
    R13 = (0x0);
    if ((v0_0 == 16)) goto L_C078560;
    if ((v0_1 == 17)) goto L_C07857C;
    v0_1 = (((((struct o2E4_int *)(R14))->v)) & 4) == 0;
    v0_0 = (R14);
    if (v0_1) goto L_C0785C4;
    *(unsigned char *)((R14 + 0xF)) = 0x10;
    L_C0785C4:;
    v0_0 = (pl_no_ground(v0_0)) == 0;
    if (v0_0) goto L_C0785F8;
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    return pl_apply_gravity(R14);
    L_C0785F8:;
    fx_spawn_17(R14, 0x1);
    v0_0 = (((struct oF2_short *)(R14))->v);
    (((struct oF2_ushort *)(R14))->v) = (v0_0 - 1);
    v0_1 = (0xF2);
    if (((short)(v0_0 - 1) != 0)) goto L_C078626;
    *(unsigned short *)((R14 + v0_1)) = 0xA;
    cam_set_shake_ramp(0xA, 0xA);
    fx_spawn_double_ring((*(signed char *)((R14 + 0x3))), (R14 + 0x20));
    L_C078626:;
    v0_0 = (signed char)(hit_probe_step_by_velocity(R14, (0x7254 + R14), 60.0f)) != 2;
    if (v0_0) goto L_C078648;
    (((struct o24_float *)(R14))->v) = (((((struct o24_float *)(R14))->v)) + ((((struct o7254_float *)(R14))->v)));
    L_C078648:;
    v0_0 = (((((struct o2DC_int *)(R14))->v)) & 240) == 0;
    if (v0_0) goto L_C078668;
    (((struct o7248_uint *)(R14))->v) = ((pl_stick_dir_angle(R14)) + (*(int *)0xC7F31E0));
    *(unsigned int *)((R14 + 0x30)) = ((((struct o7248_int *)(R14))->v));
    L_C078668:;
    v0_0 = (*(signed char *)((R14 + 0x71ED))) == 0;
    if (v0_0) goto L_C07868A;
    *(unsigned int *)((R14 + 0x30)) = (pl_angle_to_opponent(R14));
    v0_0 = (unsigned char)(((((struct oEC_short *)(R14))->v)) & 0x1F) != 0;
    if (v0_0) goto L_C07868A;
    *(unsigned char *)((R14 + 0xF)) = 0x10;
    L_C07868A:;
    (((struct o38_float *)(R14))->v) = ((math_cos_angle16(((-(*(int *)((R14 + 0x30)))) + 0x14000))) * 16.0f);
    (((struct o3C_float *)(R14))->v) = 0.0f;
    (((struct o40_float *)(R14))->v) = ((math_sin_angle16(((-(*(int *)((R14 + 0x30)))) + 0x14000))) * 16.0f);
    v0_0 = (FUN_0c0555c4()) != 0;
    if (v0_0) goto L_C0786C8;
    (((struct oEC_ushort *)(R14))->v) = R13;
    L_C0786C8:;
    v0_0 = (int)((((struct oEC_short *)(R14))->v)) > 0;
    v0_1 = (0xEC);
    if (v0_0) goto L_C0786E0;
    pl_start_motion(R14, 0x1, 0x61);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C0786E0:;
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C07857C:;
    v0_0 = 0.0f > ((((struct o3C_float *)(R14))->v));
    v0_1 = (0x3C);
    w0_0 = (0.0f);
    if (v0_0) goto L_C07858A;
    goto L_C0786E0;
    L_C07858A:;
    v0_0 = pl_landed(R14);
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 != 0)) goto L_C07859C;
    goto L_C0786E0;
    L_C07859C:;
    cam_set_shake_ramp(0x14, 0xA);
    (((struct o3C_float *)(R14))->v) = 0.0f;
    (((struct o71BC_uchar *)(R14))->v) = R13;
    *(unsigned char *)((R14 + 0xF)) = R13;
    v0_1 = (R13);
    goto L_C0786E0;
    L_C078560:;
    (((struct o3C_float *)(R14))->v) = 38.6999969f;
    (((struct o48_float *)(R14))->v) = -2.0f;
    *(unsigned char *)((R14 + 0xF)) = ((*(signed char *)((R14 + 0xF))) + 0x1);
    (((struct o71BC_uchar *)(R14))->v) = 0x2;
    goto L_C07857C;
    L_C078894:;
    L_C07845E:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (((struct oF2_short *)(v0_0))->v);
    (((struct oF2_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0xF2);
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C0784D8;
    obj_set_record_char(R14, 0x70);
    snd_play_char_voice(R14, 0x30);
    (((struct o38_float *)(R14))->v) = ((math_cos_angle16(((-(*(int *)((R14 + 0x30)))) + 0x14000))) * 20.0f);
    (((struct o3C_float *)(R14))->v) = 0.0f;
    w0_0 = math_sin_angle16(((-(*(int *)((R14 + 0x30)))) + 0x14000));
    (((struct o40_float *)(R14))->v) = (w0_0 * 20.0f);
    (((struct oEC_ushort *)(R14))->v) = 0x7E;
    (((struct oEE_ushort *)(R14))->v) = 0xA;
    (((struct oF2_ushort *)(R14))->v) = 0xA;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    w0_0 = ((w0_0 * 20.0f));
    L_C0784D8:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078890:;
    L_C078410:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - 0.00999999978f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.00999999978f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) - 0.00999999978f);
    v0_2 = (((struct oF0_short *)(v0_0))->v);
    (((struct oF0_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C078450;
    *(unsigned char *)((R14 + 0xB)) = ((*(signed char *)((R14 + 0xB))) + 0x1);
    L_C078450:;
    (((struct oF2_ushort *)(R14))->v) = (((((struct oF2_short *)(R14))->v)) - 1);
    *(volatile int *)((int)stk + 12);
    return 0xF2;
    L_C07888C:;
    L_C078392:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + 0.099999994f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + 0.099999994f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + 0.099999994f);
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    (((struct oEE_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C0783D2;
    *(unsigned char *)((R14 + 0xB)) = ((*(signed char *)((R14 + 0xB))) + 0x1);
    L_C0783D2:;
    (((struct oF0_ushort *)(R14))->v) = (((((struct oF0_short *)(R14))->v)) - 1);
    (((struct oF2_ushort *)(R14))->v) = (((((struct oF2_short *)(R14))->v)) - 1);
    *(volatile int *)((int)stk + 12);
    return 0xF2;
    L_C078888:;
    L_C078338:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C078374;
    pl_start_hit_freeze(R14);
    fx_spawn_18(R14, 0x0);
    snd_play_char_voice(R14, 0x1C);
    *(unsigned char *)((R14 + 0xB)) = ((*(signed char *)((R14 + 0xB))) + 0x1);
    L_C078374:;
    (((struct oEE_ushort *)(R14))->v) = (((((struct oEE_short *)(R14))->v)) - 1);
    (((struct oF0_ushort *)(R14))->v) = (((((struct oF0_short *)(R14))->v)) - 1);
    (((struct oF2_ushort *)(R14))->v) = (((((struct oF2_short *)(R14))->v)) - 1);
    *(volatile int *)((int)stk + 12);
    return 0xF2;
    L_C078884:;
    *(int *)((int)stk + 16) = (R14);
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o71BC_uchar *)(v0_0))->v) = 0x2;
    pl_start_motion(v0_0, 0x1, 0x60);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    (((struct oEC_ushort *)(v0_0))->v) = 0x30;
    (((struct oEE_ushort *)(v0_0))->v) = 0x3A;
    (((struct oF0_ushort *)(v0_0))->v) = 0x41;
    (((struct oF2_ushort *)(v0_0))->v) = 0x6F;
    *(unsigned char *)((v0_0 + 0xF)) = 0x10;
    return 0x10;
    L_C0782B4:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C079056;
    if ((v0_1 == 1)) goto L_C07905A;
    if ((v0_1 == 2)) goto L_C07905E;
    if ((v0_1 == 3)) goto L_C079062;
    if ((v0_1 == 4)) goto L_C079066;
    if ((v0_1 == 5)) goto L_C07906A;
    if ((v0_1 == 6)) goto L_C07906E;
    if ((v0_1 == 7)) goto L_C079072;
    if ((v0_1 == 8)) goto L_C079076;
    return v0_1;
    L_C079076:;
    goto L_C078FAC;
    L_C079072:;
    goto L_C078F88;
    L_C07906E:;
    goto L_C078EEC;
    L_C07906A:;
    goto L_C078E08;
    L_C079066:;
    goto L_C078D2C;
    L_C079062:;
    goto L_C078CC0;
    L_C07905E:;
    goto L_C078C7C;
    L_C07905A:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    (((struct o105_uchar *)(v0_0))->v) = 0x2;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (*(signed char *)((v0_0 + 0x71AA))) == 0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x71AA);
    R14 = (v0_0);
    if (v0_2) goto L_C078C76;
    (((struct o3C_float *)(R14))->v) = 77.3999939f;
    (((struct o48_float *)(R14))->v) = -4.0f;
    pl_start_motion(R14, 0x1, 0x64);
    (((struct o71BC_uchar *)(R14))->v) = 0x2;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078C76:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C079056:;
    *(int *)((int)stk + 16) = (R14);
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o71BC_uchar *)(v0_0))->v) = 0x0;
    pl_start_motion(v0_0, 0x1, 0xFFFFFF90);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    return snd_play_char_voice(v0_0, 0x1B);
    L_C0782B0:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C0787BA;
    if ((v0_1 == 1)) goto L_C0787BE;
    if ((v0_1 == 2)) goto L_C0787C2;
    if ((v0_1 == 3)) goto L_C0787C6;
    if ((v0_1 == 4)) goto L_C0787CA;
    if ((v0_1 == 5)) goto L_C0787CE;
    if ((v0_1 == 6)) goto L_C0787D2;
    if ((v0_1 == 7)) goto L_C0787D6;
    return v0_1;
    L_C0787D6:;
    goto L_C078788;
    L_C0787D2:;
    goto L_C07872C;
    L_C0787CE:;
    goto L_C0784DE;
    L_C0787CA:;
    goto L_C07845E;
    L_C0787C6:;
    goto L_C078410;
    L_C0787C2:;
    goto L_C078392;
    L_C0787BE:;
    goto L_C078338;
    L_C0787BA:;
    *(int *)((int)stk + 16) = (R14);
    *(unsigned int *)(((int)stk + 8)) = (0x72BC + v0_0);
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o71BC_uchar *)(v0_0))->v) = 0x0;
    pl_start_motion(v0_0, 0x1, 0x60);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0xD)) = 0x1;
    (((struct oEC_ushort *)(v0_0))->v) = 0x30;
    (((struct oEE_ushort *)(v0_0))->v) = 0x3A;
    (((struct oF0_ushort *)(v0_0))->v) = 0x41;
    (((struct oF2_ushort *)(v0_0))->v) = 0x6F;
    *(unsigned char *)((v0_0 + 0xF)) = 0x0;
    return 0x0;
    L_C0782AC:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C078BC0;
    if ((v0_1 == 1)) goto L_C078BC4;
    if ((v0_1 == 2)) goto L_C078BC8;
    if ((v0_1 == 3)) goto L_C078BCC;
    if ((v0_1 == 4)) goto L_C078BD0;
    return v0_1;
    L_C078BD0:;
    L_C078AC0:;
    (((struct o7223_uchar *)(v0_0))->v) = 0x0;
    return pl_end_action_choose_state(v0_0, R5, R6, v0_2);
    L_C078BCC:;
    L_C078A9C:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (*(signed char *)((v0_0 + 0x71AA))) == 0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x71AA);
    R14 = (v0_0);
    if (v0_2) goto L_C078ABA;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078ABA:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078BC8:;
    L_C078A14:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (unsigned short)((((struct o719E_short *)(v0_0))->v)) != 1;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (v0_2) goto L_C078A34;
    FUN_0c09c45a(R14);
    L_C078A34:;
    v0_0 = (((struct oEC_short *)(R14))->v);
    (((struct oEC_ushort *)(R14))->v) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C078A4A;
    fx_spawn_19(R14, 0x1);
    L_C078A4A:;
    v0_0 = *(int *)((R14 + 0x1C));
    v0_1 = (((*(signed char *)((v0_0 + 0x71A4))) << 8) + (unsigned char)(*(signed char *)((v0_0 + 0x71A5)))) != 0x2AD;
    v0_0 = (v0_0);
    if (v0_1) goto L_C078A7E;
    fx_spawn_17(R14, 0x3);
    fx_spawn_hit_effect(((*(int *)((R14 + 0x1C))) + 0x20), (R14 + 0x2C), ((-(*(signed char *)((R14 + 0x3)))) + 0x1), 0x1);
    L_C078A7E:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    v0_1 = (0x71AA);
    if (v0_0) goto L_C078A96;
    pl_start_motion(R14, 0x1, 0x67);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078A96:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078BC4:;
    L_C07896C:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    v0_2 = !(0.0f > ((((struct o3C_float *)(v0_0))->v)));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x3C);
    R14 = (v0_0);
    w0_0 = (0.0f);
    if (v0_2) goto L_C0789D8;
    v0_0 = pl_landed(R14);
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 == 0)) goto L_C0789D8;
    cam_set_shake_ramp(0x3C, 0x3C);
    fx_spawn_19(R14, 0x0);
    (((struct o3C_float *)(R14))->v) = 0.0f;
    (((struct o48_float *)(R14))->v) = 0.0f;
    (((struct o71BC_uchar *)(R14))->v) = 0x0;
    pl_start_motion(R14, 0x1, 0x65);
    FUN_0c08de3a(R14, 0x73);
    (((struct oEC_ushort *)(R14))->v) = 0x14;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C0789D8:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078BC0:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 77.3999939f;
    (((struct o48_float *)(v0_0))->v) = -4.0f;
    pl_start_motion(v0_0, 0x1, 0x64);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (((struct o71F4_short *)(v0_0))->v);
    (((struct o71F4_ushort *)(v0_0))->v) = (int)((float)v0_2 - 480.0f);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    FPUL_ = ((int)((float)v0_2 - 480.0f));
    if (((int)(short)(int)((float)v0_2 - 480.0f) >= 0)) goto L_C078B20;
    (((struct o71F4_ushort *)(R14))->v) = 0x0;
    L_C078B20:;
    *(volatile int *)((int)stk + 12);
    return snd_play_char_voice(R14, R5);
    L_C078288:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C079376;
    if ((v0_1 == 1)) goto L_C07937A;
    if ((v0_1 == 2)) goto L_C07937E;
    return v0_1;
    L_C07937E:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_velocity(v0_0);
    pl_apply_acceleration(v0_0);
    v0_3 = !(0.0f > ((((struct o3C_float *)(v0_0))->v)));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x3C);
    R14 = (v0_0);
    w0_0 = (0.0f);
    if (v0_3) goto L_C07931E;
    v0_0 = pl_landed(R14);
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 == 0)) goto L_C07931E;
    (((struct o3C_float *)(R14))->v) = 0.0f;
    (((struct o48_float *)(R14))->v) = 0.0f;
    (((struct o71BC_uchar *)(R14))->v) = 0x0;
    *(volatile int *)((int)stk + 12);
    return pl_change_state(R14, 0x6, 0x0, v0_2);
    L_C07931E:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C07937A:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    (((struct oEE_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C0792A8;
    fx_spawn_gunrock_spark(R14, 0x1);
    snd_play_char_voice(R14, 0x19);
    L_C0792A8:;
    v0_0 = (((struct oF0_short *)(R14))->v);
    (((struct oF0_ushort *)(R14))->v) = (v0_0 - 1);
    v0_1 = (0xF0);
    if (((short)(v0_0 - 1) != 0)) goto L_C0792CC;
    (((struct o3C_float *)(R14))->v) = -12.0f;
    (((struct o48_float *)(R14))->v) = -1.19999993f;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C0792CC:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C079376:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    pl_start_motion(v0_0, 0x1, 0x68);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (((struct o71F4_short *)(v0_0))->v);
    (((struct o71F4_ushort *)(v0_0))->v) = (int)((float)v0_2 - 240.0f);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    FPUL_ = ((int)((float)v0_2 - 240.0f));
    if (((int)(short)(int)((float)v0_2 - 240.0f) >= 0)) goto L_C07924E;
    (((struct o71F4_ushort *)(R14))->v) = 0x0;
    L_C07924E:;
    *(unsigned int *)((R14 + 0x30)) = (pl_angle_to_opponent(v0_0));
    (((struct oEC_ushort *)(R14))->v) = 0x5;
    (((struct oEE_ushort *)(R14))->v) = 0x13;
    (((struct oF0_ushort *)(R14))->v) = 0x25;
    *(volatile int *)((int)stk + 12);
    return 0xF0;
    L_C078284:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C078B8A;
    if ((v0_1 == 1)) goto L_C078B8E;
    if ((v0_1 == 2)) goto L_C078B92;
    if ((v0_1 == 3)) goto L_C078B96;
    if ((v0_1 == 4)) goto L_C078B9A;
    if ((v0_1 == 5)) goto L_C078B9E;
    return v0_1;
    L_C078B9E:;
    goto L_C078AC0;
    L_C078B9A:;
    goto L_C078A9C;
    L_C078B96:;
    goto L_C078A14;
    L_C078B92:;
    goto L_C07896C;
    L_C078B8E:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    v0_2 = (*(signed char *)((v0_0 + 0x71AA))) == 0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x71AA);
    R14 = (v0_0);
    if (v0_2) goto L_C078966;
    (((struct o3C_float *)(R14))->v) = 77.3999939f;
    (((struct o48_float *)(R14))->v) = -4.0f;
    pl_start_motion(R14, 0x1, 0x64);
    (((struct o71BC_uchar *)(R14))->v) = 0x2;
    snd_play_char_voice(R14, 0x19);
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C078966:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078B8A:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o71BC_uchar *)(v0_0))->v) = 0x0;
    pl_start_motion(v0_0, 0x1, 0xFFFFFF90);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (((struct o71F4_short *)(v0_0))->v);
    (((struct o71F4_ushort *)(v0_0))->v) = (int)((float)v0_2 - 480.0f);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (0x71F4);
    R14 = (v0_0);
    FPUL_ = ((int)((float)v0_2 - 480.0f));
    if (((int)(short)(int)((float)v0_2 - 480.0f) >= 0)) goto L_C07890A;
    (((struct o71F4_ushort *)(R14))->v) = 0x0;
    v0_1 = (0x71F4);
    L_C07890A:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C078280:;
    v0_3 = *(signed char *)((v0_0 + 0xB));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C0791B2;
    if ((v0_1 == 1)) goto L_C0791B6;
    if ((v0_1 == 2)) goto L_C0791BA;
    return v0_1;
    L_C0791BA:;
    (((struct o7223_uchar *)(v0_0))->v) = 0x0;
    return pl_end_action_choose_state(v0_0, R5, R6, v0_2);
    L_C0791B6:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    pl_step_motion(v0_0);
    pl_apply_motion_translation(v0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_2 = (((struct oEE_short *)(v0_0))->v);
    (((struct oEE_ushort *)(v0_0))->v) = (v0_2 - 1);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    if (((short)(v0_2 - 1) != 0)) goto L_C079180;
    fx_spawn_gunrock_spark(R14, 0x0);
    snd_play_char_voice(R14, 0x19);
    L_C079180:;
    v0_0 = (*(signed char *)((R14 + 0x71AA))) == 0;
    v0_1 = (0x71AA);
    if (v0_0) goto L_C07918E;
    v0_0 = *(signed char *)((R14 + 0xB));
    *(unsigned char *)((R14 + 0xB)) = (v0_0 + 0x1);
    v0_1 = ((v0_0 + 0x1));
    L_C07918E:;
    *(volatile int *)((int)stk + 12);
    return v0_1;
    L_C0791B2:;
    v0_1 = R14;
    *(int *)((int)stk + 16) = v0_1;
    *(unsigned char *)((v0_0 + 0xB)) = ((*(signed char *)((v0_0 + 0xB))) + 0x1);
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o71BC_uchar *)(v0_0))->v) = 0x0;
    pl_start_motion(v0_0, 0x1, 0x69);
    (((struct o71A9_uchar *)(v0_0))->v) = 0x1;
    (((struct o71A8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (((struct o71F4_short *)(v0_0))->v);
    (((struct o71F4_ushort *)(v0_0))->v) = (int)((float)v0_2 - 240.0f);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R14 = (v0_0);
    FPUL_ = ((int)((float)v0_2 - 240.0f));
    if (((int)(short)(int)((float)v0_2 - 240.0f) >= 0)) goto L_C07912C;
    (((struct o71F4_ushort *)(R14))->v) = 0x0;
    L_C07912C:;
    *(unsigned int *)((R14 + 0x30)) = (pl_angle_to_opponent(v0_0));
    (((struct oEC_ushort *)(R14))->v) = 0xD;
    (((struct oEE_ushort *)(R14))->v) = 0x17;
    *(volatile int *)((int)stk + 12);
    return 0xEE;
}

int item_director_pick_spot(void)
{
    int stk[20];
    register int t0;
    register int t2;
    register int t10;
    register int t13;
    register int t14;
    register int t20;
    register float t26;
    register int t28;
    register int t30;
    register int t33;
    register int t34;
    register float t37;
    register int t44;
    register int t45;
    register float u46;
    register int t53;
    register int t54;
    register int t63;
    register int t65;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t97;
    register int t98;
    register int t99;
    register int t100;
    register int t101;
    register int t106;
    register int t111;
    register int t112;
    register int t113;
    register float t116;
    register float u118;
    register int t122;
    register int t123;
    register float u125;
    register int t128;
    register int t129;
    register int t130;
    register int t152;
    register int t153;
    register int t154;
    register int t158;
    register int t64;
    register float u66;
    register float u67;
    register int t82;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t87;
    register float u88;
    register float u89;
    register int t80;
    register int t121;
    register float u124;
    register int t139;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register float u144;
    register float u145;
    register int t137;

    t0 = *(signed char *)0xC7F2977;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                return t0;
            }
            if ((*(signed char *)0xC7F297A) != 0) {
                t2 = *(signed char *)0xC7F2979;
                t28 = 0x2;
                t10 = 0x1;
                if (t2 != 0) {
                    t28 = 0x2;
                    t10 = 0x0;
                    if (t2 != 1) {
                        if (t2 != 2) {
                        } else {
                            t28 = 0x1;
                            t10 = 0x0;
                        }
                    }
                }
                *(unsigned char *)(((int)stk + 60)) = (item_director_roll_variant(0x1));
                t13 = *(signed char *)0xC7F3051;
                t14 = *(signed char *)(((int)stk + 60));
                *(unsigned int *)(((int)stk + 56)) = ((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4);
                *(float *)(((int)stk + 52)) = (FUN_0c0e2240((((unsigned short)((unsigned short)t14 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20), (((short)(((((t13 << 2) << 1) + t13) << 2) << 1) + 0xC33CA80) + (signed char)((((t10 << 1) + t10) << 2) << 1))));
                t20 = *(signed char *)0xC7F3051;
                t26 = FUN_0c0e2240(((*(int *)(((int)stk + 56))) + 0x20), (((short)(((((t20 << 2) << 1) + t20) << 2) << 1) + 0xC33CA80) + (signed char)((((t28 << 1) + t28) << 2) << 1)));
                if (t26 > (*(float *)(((int)stk + 52)))) {
                    t28 = t10;
                }
                return t28;
            }
            t30 = 0x0;
            for (;;) {
                *(float *)((((int)stk + 28) + (t30 << 2))) = 0.0f;
                t33 = 0x0;
                for (;;) {
                    t34 = *(signed char *)0xC7F3051;
                    t37 = FUN_0c0e2240(((unsigned short)((unsigned short)t33 * (unsigned short)0x72D0) + 0xC7E40E4), (((short)(((((t34 << 2) << 1) + t34) << 2) << 1) + 0xC33CA80) + (signed char)((((t30 << 1) + t30) << 2) << 1)));
                    t33 = (t33 + 0x1);
                    *(float *)((((t30 << 2) + ((int)stk + 28)) + 0x0)) = ((*(float *)((((t30 << 2) + ((int)stk + 28)) + 0x0))) + t37);
                    if ((int)t33 >= (int)0x2) {
                        break;
                    }
                }
                t30 = (t30 + 0x1);
                if ((int)t30 >= (int)0x3) {
                    break;
                }
            }
            t44 = 0x0;
            t45 = 0x0;
            u46 = 0.0f;
            for (;;) {
                if ((*(float *)((((t44 << 2) + ((int)stk + 28)) + 0x0))) > u46) {
                    u46 = (*(float *)((((t44 << 2) + ((int)stk + 28)) + 0x0)));
                    t45 = t44;
                }
                t44 = (t44 + 0x1);
                if ((int)t44 >= (int)0x3) {
                    break;
                }
            }
            return t45;
        }
        if ((*(signed char *)0xC7F297A) != 0) {
            *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)(signed char)(item_director_roll_variant(0x0)) * (unsigned short)0x72D0) + 0xC7E40C4);
            t53 = 0x0;
            for (;;) {
                t54 = *(signed char *)0xC7F3051;
                (((struct o4_float *)(((((signed char)t53 << 2) << 1) + (((int)stk + 8) + 0xC))))->v) = (FUN_0c0e2240(((*(int *)(((int)stk + 8))) + 0x20), (((short)(((((t54 << 2) << 1) + t54) << 2) << 1) + 0xC33CA80) + (signed char)((((t53 << 1) + t53) << 2) << 1))));
                *(unsigned char *)((((((signed char)t53 << 2) << 1) + (((int)stk + 8) + 0xC)) + 0x0)) = t53;
                t53 = (t53 + 0x1);
                if ((int)(signed char)t53 >= (int)0x3) {
                    break;
                }
            }
            t63 = 0x4;
            t65 = 0x0;
            for (;;) {
                if ((int)(signed char)(t65 + 0x1) < (int)0x3) {
                    t70 = (signed char)(t65 + 0x1);
                    t71 = ((((signed char)(t65 + 0x1) << 2) << 1) + (((int)stk + 8) + 0xC));
                    t72 = (t65 + 0x1);
                    t73 = ((((signed char)(t65 + 0x1) << 2) << 1) + (((int)stk + 8) + 0xC));
                    t64 = ((((signed char)t65 << 2) << 1) + (((int)stk + 8) + 0xC));
                    for (;;) {
                        t63 = 0x4;
                        u66 = (*(float *)((t64 + t63)));
                        u67 = (*(float *)((t73 + t63)));
                        if (u66 > u67) {
                            t70 = 0xC0E6FDC;
                            t63 = 0x8;
                            t63 = (((int (*)(int, int, int, int))(FUN_0c0e6fdc))(t71, t72, t73, t65));
                            t64 = t71;
                            t63 = 0x8;
                            t63 = (((int (*)(int))(FUN_0c0e6fdc))(t71));
                            t64 = (((int)stk + 8) + 0x4);
                            t71 = t80;
                            t63 = 0x8;
                            t63 = (((int (*)(int))(FUN_0c0e6fdc))(t71));
                        } else {
                            t82 = t64;
                            t83 = t70;
                            t84 = t71;
                            t85 = t72;
                            t86 = t73;
                            t87 = t65;
                            u88 = u66;
                            u89 = u67;
                        }
                        u66 = u88;
                        u67 = u89;
                        t64 = t82;
                        t70 = t83;
                        t71 = t84;
                        t72 = (t85 + 0x1);
                        t73 = t86;
                        t65 = t87;
                        t64 = (signed char)t72;
                        t71 = (t71 + 0x8);
                        t73 = (t73 + 0x8);
                        if ((int)t64 >= (int)0x3) {
                            break;
                        }
                    }
                }
                t65 = (t65 + 0x1);
                t64 = (signed char)t65;
                if ((int)t64 >= (int)0x2) {
                    break;
                }
            }
            t97 = t63;
            t98 = (0x0 + (((int)stk + 8) + 0xC));
            t99 = (0x0 + (((int)stk + 8) + 0xC));
            t100 = 0x0;
            for (;;) {
                t101 = *(signed char *)((t99 + 0x0));
                if ((*(signed char *)((((signed char)t101 + 0xC7F2974) + 0x0))) == 0) {
                    t97 = 0x315;
                    if ((signed char)t101 != (*(signed char *)((0xC7F2664 + t97)))) {
                        break;
                    }
                    t100 = (t100 + 0x1);
                    t98 = (t98 + 0x8);
                    t99 = (t99 + 0x8);
                    if ((int)(signed char)t100 >= (int)0x3) {
                        return t97;
                    }
                    continue;
                }
                t100 = (t100 + 0x1);
                t98 = (t98 + 0x8);
                t99 = (t99 + 0x8);
                if ((int)(signed char)t100 >= (int)0x3) {
                    return t97;
                }
            }
            return (*(signed char *)((t98 + 0x0)));
        }
        t106 = 0x0;
        for (;;) {
            *(unsigned char *)(((((t106 << 2) << 1) + (((int)stk + 4) + 0xC)) + 0x0)) = t106;
            (((struct o4_float *)((((t106 << 2) << 1) + (((int)stk + 4) + 0xC))))->v) = 0.0f;
            *(unsigned int *)(((int)stk + 4)) = (((t106 << 2) << 1) + (((int)stk + 4) + 0xC));
            t111 = 0x0;
            for (;;) {
                t112 = *(int *)(((int)stk + 4));
                *(int *)((int)stk + 0) = (0x4 + t112);
                t113 = *(signed char *)0xC7F3051;
                t116 = FUN_0c0e2240(((unsigned short)((unsigned short)t111 * (unsigned short)0x72D0) + 0xC7E40E4), (((short)(((((t113 << 2) << 1) + t113) << 2) << 1) + 0xC33CA80) + (signed char)((((t106 << 1) + t106) << 2) << 1)));
                t111 = (t111 + 0x1);
                u118 = (((struct o4_float *)(t112))->v);
                (((struct o4_float *)(t112))->v) = (u118 + t116);
                if ((int)t111 >= (int)0x2) {
                    break;
                }
            }
            t106 = (t106 + 0x1);
            if ((int)t106 >= (int)0x3) {
                break;
            }
        }
        t122 = (0x4 + t112);
        t123 = 0x0;
        u125 = (u118 + t116);
        for (;;) {
            if ((int)(t123 + 0x1) < (int)0x3) {
                t128 = ((((t123 + 0x1) << 2) << 1) + (((int)stk + 4) + 0xC));
                t129 = (t123 + 0x1);
                t130 = ((((t123 + 0x1) << 2) << 1) + (((int)stk + 4) + 0xC));
                t122 = (((t123 << 2) << 1) + (((int)stk + 4) + 0xC));
                for (;;) {
                    t121 = 0x4;
                    u124 = (*(float *)((t122 + t121)));
                    u125 = (*(float *)((t130 + t121)));
                    if (u125 > u124) {
                        t121 = 0x8;
                        t121 = (((int (*)(int, int, int, int))(FUN_0c0e6fdc))(t128, t129, t130, t123));
                        t122 = t128;
                        t121 = 0x8;
                        t121 = (((int (*)(int))(FUN_0c0e6fdc))(t128));
                        t122 = (((int)stk + 4) + 0x4);
                        t128 = t137;
                        t121 = 0x8;
                        t121 = (((int (*)(int))(FUN_0c0e6fdc))(t128));
                    } else {
                        t139 = t122;
                        t140 = t128;
                        t141 = t129;
                        t142 = t130;
                        t143 = t123;
                        u144 = u124;
                        u145 = u125;
                    }
                    u124 = u144;
                    u125 = u145;
                    t122 = t139;
                    t128 = t140;
                    t129 = (t141 + 0x1);
                    t130 = t142;
                    t123 = t143;
                    t128 = (t128 + 0x8);
                    t130 = (t130 + 0x8);
                    if ((int)t129 >= (int)0x3) {
                        break;
                    }
                }
            }
            t123 = (t123 + 0x1);
            if ((int)t123 >= (int)0x2) {
                break;
            }
        }
        t152 = (0x0 + (((int)stk + 4) + 0xC));
        t153 = (0x0 + (((int)stk + 4) + 0xC));
        t154 = 0x0;
        for (;;) {
            if ((*(signed char *)((((*(signed char *)((t153 + 0x0))) + 0xC7F2974) + 0x0))) == 0) {
                break;
            }
            t154 = (t154 + 0x1);
            t152 = (t152 + 0x8);
            t153 = (t153 + 0x8);
            if ((int)t154 >= (int)0x3) {
                return t121;
            }
        }
        return (*(signed char *)((t152 + 0x0)));
    }
    t158 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC7F2974 + t158) + 0x0))) == 0) {
            break;
        }
        t158 = (t158 + 0x1);
        if ((int)t158 >= (int)0x3) {
            return t0;
        }
    }
    return t158;
}

int pl_state23_phase0(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((((struct oEE_short *)(a4))->v)) != 0) {
        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0xF) {
            if ((((((struct oEE_short *)(a4))->v)) & 0x1) != 0) {
                (((struct o71F1_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o71F1_uchar *)(a4))->v) = 0x0;
            }
            pl_reset_model_parts(a4);
        }
        t1 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            pl_set_power_form_on(a4);
            (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
            t1 = FUN_0c0555c4();
            if ((t1 != 0) && (t0 = *(signed char *)((a4 + 0x71ED)), t0 == 0)) {
                t0 = *(signed char *)((a4 + 0x4));
                *(unsigned int *)(((0xC7F2F60 + (t0 << 2)) + 0x0)) = ((*(int *)((0xC7F2F60 + (t0 << 2)))) + 0x1);
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x4));
    if (t0 == 0) {
        t1 = *(signed char *)((a4 + 0xB));
        if (t1 != 0) {
            if (t1 != 1) {
                t2 = t1;
                if (t1 != 2) {
                } else {
                    t1 = pl_step_motion(a4);
                    if ((signed char)t1 != 0) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                    }
                    t2 = (pl_apply_motion_translation(a4));
                }
                return t2;
            }
            pl_apply_gravity(a4);
            pl_apply_velocity(a4);
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t1 = pl_landed(a4);
                if ((signed char)t1 != 0) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    return pl_start_motion(a4, 0x3, 0xC);
                }
                return (signed char)t1;
            }
            return 0x3C;
        }
        t1 = pl_step_motion(a4);
        if ((signed char)t1 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x0;
            }
        }
        return (pl_apply_motion_translation(a4));
    }
    if (t0 != 1) {
        if (t0 == 2) {
            t1 = *(signed char *)((a4 + 0xB));
            if (t1 != 0) {
                if (t1 != 1) {
                    t2 = t1;
                    if (t1 == 2) {
                        t1 = pl_step_motion(a4);
                        if ((signed char)t1 != 0) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                        }
                        t2 = (pl_apply_motion_translation(a4));
                    }
                    return t2;
                }
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t1 = pl_landed(a4);
                    if ((signed char)t1 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return pl_start_motion(a4, 0x3, 0xB);
                    }
                    return (signed char)t1;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t1 = pl_step_motion(a4);
                t2 = (signed char)t1;
                if ((signed char)t1 == 0) {
                } else {
                    pl_start_motion(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t2 = 0x2;
                }
                t1 = t2;
            } else {
                t2 = pl_step_motion(a4);
                if ((signed char)t2 != 0) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
                t1 = (pl_apply_motion_translation(a4));
            }
            return t1;
        }
        if (t0 == 3) {
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    t1 = t0;
                    if (t0 == 2) {
                        t0 = pl_step_motion(a4);
                        if ((signed char)t0 != 0) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                        }
                        t1 = (pl_apply_motion_translation(a4));
                    }
                    return t1;
                }
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t0 = pl_landed(a4);
                    if ((signed char)t0 != 0) {
                        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                        return pl_start_motion(a4, 0x3, 0xB);
                    }
                    return (signed char)t0;
                }
                return 0x3C;
            }
            if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                t0 = pl_step_motion(a4);
                t1 = (signed char)t0;
                if ((signed char)t0 == 0) {
                } else {
                    pl_start_motion(a4, 0x3, 0xB);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t1 = 0x2;
                }
                t0 = t1;
            } else {
                t1 = pl_step_motion(a4);
                if ((signed char)t1 != 0) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
                t0 = (pl_apply_motion_translation(a4));
            }
            return t0;
        }
        
        t0 = *(signed char *)((a4 + 0xB));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    t0 = pl_step_motion(a4);
                    if ((signed char)t0 != 0) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                    }
                    t1 = (pl_apply_motion_translation(a4));
                }
                return t1;
            }
            pl_apply_gravity(a4);
            pl_apply_velocity(a4);
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t0 = pl_landed(a4);
                if ((signed char)t0 != 0) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    return pl_start_motion(a4, 0x3, 0xC);
                }
                return (signed char)t0;
            }
            return 0x3C;
        }
        t0 = pl_step_motion(a4);
        if ((signed char)t0 != 0) {
            if (!(((((struct o274_float *)(a4))->v)) > 0.0f)) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x0;
            }
        }
        return (pl_apply_motion_translation(a4));
    }
    if ((*(signed char *)((a4 + 0x71BC))) != 2) {
        t0 = pl_step_motion(a4);
        if ((signed char)t0 != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x0;
        }
        (((struct o710C_uchar *)(a4))->v) = 0x0;
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 <= (int)0x96) {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = pl_step_motion(a4);
                if ((signed char)t0 != 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
                (((struct o710C_uchar *)(a4))->v) = 0x0;
                t0 = (((struct o719E_short *)(a4))->v);
                if (((int)(unsigned short)t0 >= (int)0x3) && ((int)(unsigned short)t0 <= (int)0x19)) {
                    (((struct o710C_uchar *)(a4))->v) = 0x1;
                }
                t0 = (((struct o719E_short *)(a4))->v);
                t2 = 0x719E;
                if ((int)(unsigned short)t0 < (int)0x45) {
                } else {
                    t2 = 0x719E;
                    if ((int)(unsigned short)t0 > (int)0x50) {
                    } else {
                        (((struct o710C_uchar *)(a4))->v) = 0x1;
                        t2 = 0x710C;
                    }
                }
                t1 = t2;
            }
            return t1;
        }
        pl_apply_gravity(a4);
        pl_apply_velocity(a4);
        pl_step_motion(a4);
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = pl_landed(a4);
            if ((signed char)t0 != 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                return pl_start_motion(a4, 0x3, 0xC);
            }
        }
        t0 = (((struct o719E_short *)(a4))->v);
        if (((int)(unsigned short)t0 >= (int)0x48) && ((int)(unsigned short)t0 <= (int)0x5E)) {
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct o719E_short *)(a4))->v);
        t1 = 0x719E;
        if ((int)(unsigned short)t0 < (int)0x8A) {
        } else {
            t2 = 0x719E;
            if ((int)(unsigned short)t0 > (int)0x96) {
            } else {
                (((struct o710C_uchar *)(a4))->v) = 0x1;
                t2 = 0x710C;
            }
            t1 = t2;
        }
        return t1;
    }
    pl_step_motion(a4);
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 != 30) {
    } else {
        t0 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state23_phase1(int a4)
{
    int stk[7];
    register int t0;
    register int t11;
    register int t14;
    register int t20;
    register int t28;
    register int t66;
    register int t69;
    register int t70;
    register int t88;
    register int t91;
    register int t92;
    register int t95;
    register int t110;
    register int t116;
    register int t117;
    register int t120;
    register int t137;
    register int t138;
    register int t156;
    register int t158;
    register int t173;
    register int t177;
    register int t202;
    register int t203;
    register int t221;
    register int t224;
    register int t225;
    register int t228;
    register int t243;
    register int t249;
    register int t250;
    register int t253;
    register int t39;
    int t23;
    int t30;
    register int t270;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        pl_set_power_form_off(a4);
        (((struct o71F3_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71F1)));
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x13);
        (((struct o7214_uchar *)(a4))->v) = (*(signed char *)((0xC338E12 + (*(signed char *)((a4 + 0x4))))));
        if ((int)(*(signed char *)((a4 + 0x7230))) < (int)0x3) {
        } else {
            FUN_0c0e6fe8();
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 100.0f);
            if ((*(float *)0xC494D1C) > 500.0f) {
                t11 = pl_angle_to_opponent(a4);
                *(volatile float *)0xC494D1C;
                FUN_0c05cb42((((int)stk + 0) + 0x10), t11, 0x0);
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t14 = math_angle_between_points_xz((a4 + 0x20), (((int)stk + 0) + 0x4));
                *(unsigned int *)(((int)stk + 0)) = t14;
                math_rand_float();
                t20 = FUN_0c0e6f24();
                *(volatile float *)0xC494D1C;
                if (((*(signed char *)0xC7F4765) != 0) && (t23 = *(signed char *)0xC7F4755, t23 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (0xFFFF & ((t14 + (int)(((float)(short)t20 * 65536.0f) / 360.0f)) - 16384)), 0x1);
                    t39 = 0x2;
                }
            } else {
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 4)) = 0.0f;
                t28 = math_angle_between_points_xz((a4 + 0x20), (((int)stk + 0) + 0x4));
                if (((*(signed char *)0xC7F4765) != 0) && (t30 = *(signed char *)0xC7F4755, t30 != 0)) {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x0);
                    t39 = 0x0;
                } else {
                    FUN_0c05cb42((((int)stk + 0) + 0x10), t28, 0x0);
                    FUN_0c05cb42((((int)stk + 0) + 0x10), (unsigned short)(0x1555 + t28), 0x1);
                    t39 = 0x2;
                }
            }
            FUN_0c0cc7fc(t39);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x11);
            snd_spawn_delayed_sound((*(signed char *)((a4 + 0x3))), 0x11, 0x3);
            snd_spawn_delayed_sound((*(signed char *)((a4 + 0x3))), 0x11, 0x6);
            (((struct o7230_uchar *)(a4))->v) = 0x0;
            (((struct o7231_uchar *)(a4))->v) = 0x0;
            fx_spawn_045f9c(a4);
        }
    }
    t66 = *(signed char *)((a4 + 0x4));
    if (t66 != 0) {
        if (t66 != 1) {
            t69 = *(signed char *)((a4 + 0xB));
            if (t69 != 0) {
                if (t69 != 1) {
                    t270 = t69;
                    if (t69 == 2) {
                        t70 = pl_step_motion(a4);
                        t270 = (signed char)t70;
                        if ((signed char)t70 != 0) {
                            t270 = 0x71F1;
                            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                t270 = 0xEC;
                            }
                        }
                    }
                } else {
                    pl_apply_gravity(a4);
                    pl_apply_velocity(a4);
                    pl_step_motion(a4);
                    t270 = 0x3C;
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t88 = pl_landed(a4);
                        t270 = (signed char)t88;
                        if ((signed char)t88 != 0) {
                            t91 = 0x0;
                            t92 = 0x9;
                            if ((*(signed char *)((a4 + 0x4))) == 4) {
                                t91 = 0x3;
                                t92 = 0xA;
                            }
                            pl_start_motion(a4, t91, t92);
                            t95 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t95 + 0x1);
                            t270 = (t95 + 0x1);
                        }
                    }
                }
            } else {
                t110 = pl_step_motion(a4);
                t270 = (signed char)t110;
                if ((signed char)t110 == 0) {
                } else {
                    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                        t116 = 0x0;
                        t117 = 0x9;
                        if ((*(signed char *)((a4 + 0x4))) == 4) {
                            t116 = 0x3;
                            t117 = 0xA;
                        }
                        pl_start_motion(a4, t116, t117);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                        t270 = 0x2;
                    } else {
                        t120 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t120 + 0x1);
                        t270 = (t120 + 0x1);
                    }
                }
            }
        } else {
            t137 = *(signed char *)((a4 + 0xB));
            if (t137 != 0) {
                if (t137 != 1) {
                    t270 = t137;
                    if (t137 != 2) {
                    } else {
                        t138 = pl_step_motion(a4);
                        t270 = (signed char)t138;
                        if ((signed char)t138 != 0) {
                            t270 = 0x71F1;
                            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                                t270 = 0xEC;
                            }
                        }
                    }
                } else {
                    pl_apply_gravity(a4);
                    pl_apply_velocity(a4);
                    pl_step_motion(a4);
                    t270 = 0x3C;
                    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                        t156 = pl_landed(a4);
                        t270 = (signed char)t156;
                        if ((signed char)t156 != 0) {
                            pl_start_motion(a4, 0x3, 0xA);
                            t158 = *(signed char *)((a4 + 0xB));
                            *(unsigned char *)((a4 + 0xB)) = (t158 + 0x1);
                            t270 = (t158 + 0x1);
                        }
                    }
                }
            } else {
                t173 = pl_step_motion(a4);
                t270 = (signed char)t173;
                if ((signed char)t173 != 0) {
                    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                        pl_start_motion(a4, 0x3, 0xA);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                        t270 = 0x2;
                    } else {
                        t177 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t177 + 0x1);
                        t270 = (t177 + 0x1);
                    }
                }
            }
        }
    } else {
        t202 = *(signed char *)((a4 + 0xB));
        if (t202 != 0) {
            if (t202 != 1) {
                t270 = t202;
                if (t202 == 2) {
                    t203 = pl_step_motion(a4);
                    t270 = (signed char)t203;
                    if ((signed char)t203 != 0) {
                        t270 = 0x71F1;
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            t270 = 0xEC;
                        }
                    }
                }
            } else {
                pl_apply_gravity(a4);
                pl_apply_velocity(a4);
                pl_step_motion(a4);
                t270 = 0x3C;
                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                    t221 = pl_landed(a4);
                    t270 = (signed char)t221;
                    if ((signed char)t221 != 0) {
                        t224 = 0x0;
                        t225 = 0x9;
                        if ((*(signed char *)((a4 + 0x4))) == 4) {
                            t224 = 0x3;
                            t225 = 0xA;
                        }
                        pl_start_motion(a4, t224, t225);
                        t228 = *(signed char *)((a4 + 0xB));
                        *(unsigned char *)((a4 + 0xB)) = (t228 + 0x1);
                        t270 = (t228 + 0x1);
                    }
                }
            }
        } else {
            t243 = pl_step_motion(a4);
            t270 = (signed char)t243;
            if ((signed char)t243 == 0) {
            } else {
                if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                    t249 = 0x0;
                    t250 = 0x9;
                    if ((*(signed char *)((a4 + 0x4))) == 4) {
                        t249 = 0x3;
                        t250 = 0xA;
                    }
                    pl_start_motion(a4, t249, t250);
                    *(unsigned char *)((a4 + 0xB)) = 0x2;
                    t270 = 0x2;
                } else {
                    t253 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t253 + 0x1);
                    t270 = (t253 + 0x1);
                }
            }
        }
    }
    return t270;
}

int FUN_0c08c864(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x72B0));
    t1 = t0;
    if (t0 == 1) {
    } else {
        FUN_0c0a3824(a4);
        t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
        t2 = *(signed char *)((a4 + 0x71A4));
        if ((((t2 << 8) + (unsigned char)t0) != 0x100) && (((t2 << 8) + (unsigned char)t0) != 0x101)) {
            if (((t2 << 8) + (unsigned char)t0) != 0x102) {
                if (((t2 << 8) + (unsigned char)t0) != 0x103) {
                    if (((t2 << 8) + (unsigned char)t0) != 0x107) {
                        if (((t2 << 8) + (unsigned char)t0) != 0x108) {
                            if (((t2 << 8) + (unsigned char)t0) != 0x109) {
                                if (((t2 << 8) + (unsigned char)t0) != 0x10B) {
                                    if (((t2 << 8) + (unsigned char)t0) != 0x10C) {
                                        if (((t2 << 8) + (unsigned char)t0) != 0x10D) {
                                            if (((t2 << 8) + (unsigned char)t0) != 0x10E) {
                                                if (((t2 << 8) + (unsigned char)t0) != 0x10F) {
                                                    if (((t2 << 8) + (unsigned char)t0) != 0x110) {
                                                        if (((t2 << 8) + (unsigned char)t0) != 0x111) {
                                                            if (((t2 << 8) + (unsigned char)t0) != 0x401) {
                                                                if (((t2 << 8) + (unsigned char)t0) != 0x402) {
                                                                    if (((t2 << 8) + (unsigned char)t0) != 0x403) {
                                                                        if (((t2 << 8) + (unsigned char)t0) != 0x404) {
                                                                            if (((t2 << 8) + (unsigned char)t0) != 0x405) {
                                                                            } else {
                                                                                pl_play_side_se_at_frame(a4, 0xF, 0xB);
                                                                                pl_play_side_se_at_frame(a4, 0x64, 0xC);
                                                                            }
                                                                        } else {
                                                                            pl_play_side_se_at_frame(a4, 0x23, 0xB);
                                                                            pl_play_side_se_at_frame(a4, 0x3E, 0xB);
                                                                            pl_play_side_se_at_frame(a4, 0x5E, 0xC);
                                                                        }
                                                                    } else {
                                                                        pl_play_side_se_at_frame(a4, 0x14, 0xA);
                                                                    }
                                                                } else {
                                                                    pl_play_side_se_at_frame(a4, 0x14, 0xA);
                                                                }
                                                            } else {
                                                                pl_play_side_se_at_frame(a4, 0x36, 0xB);
                                                                pl_play_side_se_at_frame(a4, 0x72, 0xB);
                                                            }
                                                        } else {
                                                            pl_play_side_se_at_frame(a4, 0x9, 0xC);
                                                        }
                                                    } else {
                                                        pl_play_side_se_at_frame(a4, 0x2, 0xC);
                                                    }
                                                } else {
                                                    pl_play_side_se_at_frame(a4, 0x9, 0xB);
                                                }
                                            } else {
                                                pl_play_side_se_at_frame(a4, 0x9, 0xB);
                                            }
                                        } else {
                                            pl_play_side_se_at_frame(a4, 0x0, 0xB);
                                        }
                                    } else {
                                        pl_play_side_se_at_frame(a4, 0x0, 0xB);
                                    }
                                } else {
                                    pl_play_side_se_at_frame(a4, 0x0, 0xB);
                                }
                            } else {
                                pl_play_side_se_at_frame(a4, 0x0, 0xB);
                            }
                        } else {
                            pl_play_side_se_at_frame(a4, 0x0, 0xB);
                        }
                    } else {
                        pl_play_side_se_at_frame(a4, 0x0, 0xB);
                    }
                } else {
                    pl_play_side_se_at_frame(a4, 0x10, 0xC);
                }
            } else {
                pl_play_side_se_at_frame(a4, 0x17, 0xC);
            }
        } else {
            pl_play_side_se_at_frame(a4, 0x7, 0xB);
        }
        t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
        t2 = *(signed char *)((a4 + 0x71A4));
        if ((((t2 << 8) + (unsigned char)t0) != 0x100) && (((t2 << 8) + (unsigned char)t0) != 0x101)) {
            if (((t2 << 8) + (unsigned char)t0) != 0x108) {
                if (((t2 << 8) + (unsigned char)t0) != 0x109) {
                    if (((t2 << 8) + (unsigned char)t0) != 0x10B) {
                        if (((t2 << 8) + (unsigned char)t0) != 0x10C) {
                            if (((t2 << 8) + (unsigned char)t0) != 0x10D) {
                                if ((((t2 << 8) + (unsigned char)t0) != 0x10E) && (((t2 << 8) + (unsigned char)t0) != 0x10F)) {
                                    if (((t2 << 8) + (unsigned char)t0) != 0x160) {
                                        if (((t2 << 8) + (unsigned char)t0) != 0x163) {
                                            if (((t2 << 8) + (unsigned char)t0) != 0x166) {
                                                if (((t2 << 8) + (unsigned char)t0) != 0x400) {
                                                    if (((t2 << 8) + (unsigned char)t0) != 0x401) {
                                                        if (((t2 << 8) + (unsigned char)t0) != 0x402) {
                                                            if (((t2 << 8) + (unsigned char)t0) != 0x403) {
                                                                if (((t2 << 8) + (unsigned char)t0) != 0x404) {
                                                                    t3 = ((t2 << 8) + (unsigned char)t0);
                                                                    if (((t2 << 8) + (unsigned char)t0) != 0x405) {
                                                                    } else {
                                                                        pl_play_voice_at_frame(a4, 0xF, 0x5);
                                                                        t3 = (pl_play_voice_at_frame(a4, 0x64, 0x6));
                                                                    }
                                                                    t0 = t3;
                                                                } else {
                                                                    t0 = (pl_play_voice_at_frame(a4, 0x5E, 0x5));
                                                                }
                                                                t2 = t0;
                                                            } else {
                                                                t2 = (pl_play_voice_at_frame(a4, 0x0, 0x3));
                                                            }
                                                            t0 = t2;
                                                        } else {
                                                            t0 = (pl_play_voice_at_frame(a4, 0x0, 0x3));
                                                        }
                                                        t2 = t0;
                                                    } else {
                                                        pl_play_voice_at_frame(a4, 0x36, 0x5);
                                                        t2 = (pl_play_voice_at_frame(a4, 0x72, 0x5));
                                                    }
                                                    t0 = t2;
                                                } else {
                                                    t0 = (pl_play_voice_at_frame(a4, 0x2A, 0x6));
                                                }
                                                t2 = t0;
                                            } else {
                                                pl_play_voice_at_frame(a4, 0x18, 0x33);
                                                t2 = (pl_play_voice_at_frame(a4, 0x3A, 0x34));
                                            }
                                            t0 = t2;
                                        } else {
                                            t0 = (pl_play_voice_at_frame(a4, 0x0, 0x30));
                                        }
                                        t2 = t0;
                                    } else {
                                        t2 = (pl_play_voice_at_frame(a4, 0x28, 0x35));
                                    }
                                    t0 = t2;
                                } else {
                                    t0 = (pl_play_voice_at_frame(a4, 0x0, 0x4));
                                }
                                t2 = t0;
                            } else {
                                t2 = (pl_play_voice_at_frame(a4, 0x0, 0x6));
                            }
                            t0 = t2;
                        } else {
                            t0 = (pl_play_voice_at_frame(a4, 0x0, 0x6));
                        }
                        t2 = t0;
                    } else {
                        t2 = (pl_play_voice_at_frame(a4, 0x0, 0x6));
                    }
                    t0 = t2;
                } else {
                    t0 = (pl_play_voice_at_frame(a4, 0x0, 0x6));
                }
                t2 = t0;
            } else {
                t2 = (pl_play_voice_at_frame(a4, 0x0, 0x6));
            }
            t0 = t2;
        } else {
            t0 = (pl_play_voice_at_frame(a4, 0x0, 0x4));
        }
        t1 = t0;
    }
    return t1;
}
