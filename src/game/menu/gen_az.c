/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05b18c(int a4, float f4);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_int { char p[0x1]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0109e4(void);
float FUN_0c02629e(int, int);
float FUN_0c02649a(int, int);
int FUN_0c0593e0(int);
int FUN_0c05b400(int, float);
int FUN_0c061f9c(int);
int FUN_0c06233a(int, int, int);
int FUN_0c063468(int);
int FUN_0c0634b4(int);
int FUN_0c0641a0(int, float, float);
int FUN_0c09c782(int);
int FUN_0c0a3824(int);
int FUN_0c0a3988(int);
int FUN_0c0d479e(void);
int FUN_0c0d48ea(int);
int FUN_0c0d71f4(int);
int FUN_0c0d78fa(void);
int FUN_0c0d7a0a(void);
int FUN_0c0d7a44(int);
int FUN_0c0dcd20(float, float, float);
int FUN_0c0e1550(int);
int FUN_0c0e21b0(int, int);
int _modls(void);
extern int _quick_evn_mvn();
extern int _quick_odd_mvn();
float ai_dist_to_opponent(int);
int fx_spawn_item_sparkle(int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int hit_build_part_shape(int, int);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlUnitMatrix(void);
int obj_can_interact(int, int, int, int);
int obj_create(int, int, int, int);
int obj_launch_owner_projectile(int);
int obj_set_mode_owner(int, int, int);
int obj_tick_class(int);
int pl_angle_to_opponent(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_choose_state(int, int, int);
int pl_get_hit_count_of_opponent(int);
int pl_landed(int);
int pl_mode15_cls05_07_f1_land(int);
int pl_mode15_cls05_07_f1_move(int);
int pl_play_side_se_at_frame(int, int, int);
int pl_play_voice_at_frame(int, int, int);
int pl_rel_angle_to_linked(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_turn_to_opponent(int, int);
int snd_play_side_se(int, int);
int vmu_get_foreign_exec_mask(void);
int vmu_get_free_space_mask(void);
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int pl_valgas_play_motion_sounds(int a4);
int ui_fade_draw(float f4, float f5);
int demo_spawn_jitter_sparkle(int a4, int a5);
int pl_mode08_09_phase1(int a4);
int pl_mode15_cls02_f1(int a4);
int FUN_0c01fb0c(int a4);
int FUN_0c05bbc8(int a4);
int FUN_0c09d710(int a4, int a5, float f4);
int pl_try_grab_target_object(int a4, int a5, int a6, int a7);
int FUN_0c0d780c(void);
int FUN_0c02a9bc(float f4);
int vmu_menu_scan_port_masks(int a4);
int FUN_0c0d4ff4(void);
int pl_mode15_cls05_07_f1(int a4);
int FUN_0c06428a(int a4);
int pl_mode12_phase0(int a4);
int ai_dist_class(int a4);
int FUN_0c05b18c(int a4, float f4);

int pl_valgas_play_motion_sounds(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register int R14;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_0 = R14;
    *(int *)((int)stk + 8) = v0_0;
    v0_3 = R13;
    *(int *)((int)stk + 4) = v0_3;
    v0_2 = *(signed char *)((v0_1 + 0x72B0));
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_0 = (v0_2);
    R14 = (v0_1);
    if ((v0_2 != 1)) goto L_C08A154;
    L_C08A6B8:;
    *(volatile int *)((int)stk + 0);
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_C08A154:;
    FUN_0c0a3824(R14);
    FUN_0c0a3988(R14);
    v0_1 = *(signed char *)(((0x71A5 + R14) + 0x0));
    v0_2 = *(signed char *)((R14 + 0x71A4));
    v0_0 = (((v0_2 << 8) + (unsigned char)v0_1));
    R13 = (0xC0A37DA);
    if ((((v0_2 << 8) + (unsigned char)v0_1) != 0x100)) goto L_C08A17C;
    v0_0 = (0xA);
    v0_1 = (0x9);
    L_C08A368:;
    pl_play_side_se_at_frame(R14, v0_0, v0_1);
    L_C08A36C:;
    v0_1 = *(signed char *)((R14 + 0x71A4));
    v0_2 = *(signed char *)(((0x71A5 + R14) + 0x0));
    v0_0 = (((v0_1 << 8) + (unsigned char)v0_2));
    R13 = (0xC0A395C);
    if ((((v0_1 << 8) + (unsigned char)v0_2) != 21)) goto L_C08A386;
    L_C08A5A4:;
    v0_1 = (0x10);
    L_C08A5EC:;
    v0_0 = (0x4);
    L_C08A6B4:;
    v0_0 = pl_play_voice_at_frame(R14, v0_0, v0_1);
    v0_0 = (v0_0);
    goto L_C08A6B8;
    L_C08A386:;
    if ((v0_0 != 22)) goto L_C08A38E;
    goto L_C08A5A4;
    L_C08A38E:;
    if ((v0_0 != 23)) goto L_C08A396;
    goto L_C08A5A4;
    L_C08A396:;
    if ((v0_0 != 41)) goto L_C08A39E;
    goto L_C08A5A4;
    L_C08A39E:;
    if ((v0_0 != 55)) goto L_C08A3A6;
    goto L_C08A5A4;
    L_C08A3A6:;
    if ((v0_0 != 0x100)) goto L_C08A3B0;
    v0_0 = (0xA);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A3B0:;
    if ((v0_0 != 0x103)) goto L_C08A3BA;
    v0_0 = (0x8);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A3BA:;
    if ((v0_0 != 0x105)) goto L_C08A3C4;
    v0_0 = (0x5);
    v0_1 = (0x3);
    goto L_C08A6B4;
    L_C08A3C4:;
    if ((v0_0 != 0x10A)) goto L_C08A3CE;
    v0_1 = (0x3);
    goto L_C08A5EC;
    L_C08A3CE:;
    if ((v0_0 != 0x10C)) goto L_C08A3D8;
    v0_0 = (0x4);
    v0_1 = (0x3);
    goto L_C08A6B4;
    L_C08A3D8:;
    if ((v0_0 != 0x110)) goto L_C08A3E2;
    v0_0 = (0xA);
    v0_1 = (0x4);
    goto L_C08A6B4;
    L_C08A3E2:;
    if ((v0_0 != 0x111)) goto L_C08A3EC;
    v0_0 = (0xA);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A3EC:;
    if ((v0_0 != 0x112)) goto L_C08A3F6;
    v0_1 = (0x3);
    goto L_C08A5EC;
    L_C08A3F6:;
    if ((v0_0 != 0x113)) goto L_C08A400;
    v0_0 = (0xD);
    v0_1 = (0x6);
    goto L_C08A6B4;
    L_C08A400:;
    if ((v0_0 != 0x114)) goto L_C08A40A;
    v0_0 = (0x9);
    v0_1 = (0x6);
    goto L_C08A6B4;
    L_C08A40A:;
    if ((v0_0 != 0x118)) goto L_C08A414;
    v0_0 = (0x5);
    v0_1 = (0x4);
    goto L_C08A6B4;
    L_C08A414:;
    if ((v0_0 != 0x119)) goto L_C08A41E;
    v0_0 = (0x6);
    v0_1 = (0x6);
    goto L_C08A6B4;
    L_C08A41E:;
    if ((v0_0 != 0x11D)) goto L_C08A428;
    v0_0 = (0x8);
    v0_1 = (0x6);
    goto L_C08A6B4;
    L_C08A428:;
    if ((v0_0 != 0x139)) goto L_C08A432;
    v0_0 = (0xA);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A432:;
    if ((v0_0 != 0x147)) goto L_C08A43C;
    v0_0 = (0x0);
    v0_1 = (0x3);
    goto L_C08A6B4;
    L_C08A43C:;
    if ((v0_0 != 0x14A)) goto L_C08A446;
    v0_0 = (0xA);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A446:;
    if ((v0_0 != 0x160)) goto L_C08A450;
    v0_0 = (0x12);
    v0_1 = (0x18);
    goto L_C08A6B4;
    L_C08A450:;
    if ((v0_0 != 0x161)) goto L_C08A45A;
    v0_0 = (0x10);
    v0_1 = (0x18);
    goto L_C08A6B4;
    L_C08A45A:;
    if ((v0_0 != 0x162)) goto L_C08A496;
    v0_0 = (0x8);
    v0_1 = (0x19);
    goto L_C08A6B4;
    L_C08A496:;
    if ((v0_0 != 0x163)) goto L_C08A4A0;
    v0_0 = (0x1);
    v0_1 = (0x1A);
    goto L_C08A6B4;
    L_C08A4A0:;
    if ((v0_0 != 0x164)) goto L_C08A4AA;
    v0_0 = (0xA);
    v0_1 = (0x1B);
    goto L_C08A6B4;
    L_C08A4AA:;
    if ((v0_0 != 0x165)) goto L_C08A4B4;
    v0_0 = (0x18);
    v0_1 = (0x1B);
    goto L_C08A6B4;
    L_C08A4B4:;
    if ((v0_0 != 0x166)) goto L_C08A4BE;
    v0_0 = (0x27);
    v0_1 = (0x1D);
    goto L_C08A6B4;
    L_C08A4BE:;
    if ((v0_0 != 0x168)) goto L_C08A4C8;
    v0_0 = (0x15);
    v0_1 = (0x1D);
    goto L_C08A6B4;
    L_C08A4C8:;
    if ((v0_0 != 0x16A)) goto L_C08A4D2;
    v0_0 = (0x12);
    v0_1 = (0x1C);
    goto L_C08A6B4;
    L_C08A4D2:;
    if ((v0_0 != 0x16B)) goto L_C08A4DC;
    v0_0 = (0x10);
    v0_1 = (0x1C);
    goto L_C08A6B4;
    L_C08A4DC:;
    if ((v0_0 != 0x197)) goto L_C08A4E6;
    v0_0 = (0x0);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A4E6:;
    if ((v0_0 != 0x19D)) goto L_C08A4F0;
    v0_0 = (0x0);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A4F0:;
    if ((v0_0 != 0x1A0)) goto L_C08A4FA;
    v0_0 = (0x0);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A4FA:;
    if ((v0_0 != 0x1A2)) goto L_C08A504;
    v0_0 = (0x18);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A504:;
    if ((v0_0 != 0x25B)) goto L_C08A50E;
    v0_0 = (0x6);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A50E:;
    if ((v0_0 != 0x300)) goto L_C08A518;
    v0_0 = (0xD);
    v0_1 = (0x0);
    goto L_C08A6B4;
    L_C08A518:;
    if ((v0_0 != 0x301)) goto L_C08A522;
    v0_0 = (0xA);
    v0_1 = (0x1E);
    goto L_C08A6B4;
    L_C08A522:;
    if ((v0_0 != 0x302)) goto L_C08A52C;
    v0_0 = (0x0);
    v0_1 = (0x13);
    goto L_C08A6B4;
    L_C08A52C:;
    if ((v0_0 != 0x303)) goto L_C08A536;
    v0_0 = (0x0);
    v0_1 = (0x14);
    goto L_C08A6B4;
    L_C08A536:;
    if ((v0_0 != 0x400)) goto L_C08A540;
    pl_play_voice_at_frame(R14, 0x2, 0x7);
    pl_play_voice_at_frame(R14, 0x37, 0x3);
    v0_0 = (0x67);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A540:;
    if ((v0_0 != 0x402)) goto L_C08A54A;
    pl_play_voice_at_frame(R14, 0x2, 0x7);
    v0_0 = (0x3D);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A54A:;
    if ((v0_0 != 0x407)) goto L_C08A554;
    v0_0 = (0x1F);
    v0_1 = (0x5);
    goto L_C08A6B4;
    L_C08A554:;
    if ((v0_0 != 0x600)) goto L_C08A55E;
    v0_0 = (0x14);
    v0_1 = (0x19);
    goto L_C08A6B4;
    L_C08A55E:;
    if ((v0_0 != 0x601)) goto L_C08A568;
    v0_0 = (0x7);
    v0_1 = (0x1A);
    goto L_C08A6B4;
    L_C08A568:;
    if ((v0_0 != 0x602)) goto L_C08A572;
    v0_0 = (0xA);
    v0_1 = (0x1B);
    goto L_C08A6B4;
    L_C08A572:;
    goto L_C08A6B8;
    L_C08A17C:;
    if ((v0_0 != 0x103)) goto L_C08A186;
    v0_0 = (0x8);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A186:;
    if ((v0_0 != 0x105)) goto L_C08A190;
    L_C08A2C6:;
    v0_0 = (0x5);
    v0_1 = (0x7);
    goto L_C08A368;
    L_C08A190:;
    if ((v0_0 != 0x10A)) goto L_C08A19A;
    v0_0 = (0x4);
    v0_1 = (0x7);
    goto L_C08A368;
    L_C08A19A:;
    if ((v0_0 != 0x10C)) goto L_C08A1A4;
    v0_0 = (0x4);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A1A4:;
    if ((v0_0 != 0x110)) goto L_C08A1AE;
    v0_0 = (0xA);
    v0_1 = (0x8);
    goto L_C08A368;
    L_C08A1AE:;
    if ((v0_0 != 0x111)) goto L_C08A1B8;
    v0_0 = (0xA);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A1B8:;
    if ((v0_0 != 0x112)) goto L_C08A1C2;
    goto L_C08A2C6;
    L_C08A1C2:;
    if ((v0_0 != 0x113)) goto L_C08A1CC;
    v0_0 = (0xD);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A1CC:;
    if ((v0_0 != 0x114)) goto L_C08A1D6;
    v0_0 = (0x9);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A1D6:;
    if ((v0_0 != 0x118)) goto L_C08A1E0;
    v0_0 = (0x5);
    v0_1 = (0x8);
    goto L_C08A368;
    L_C08A1E0:;
    if ((v0_0 != 0x119)) goto L_C08A1EA;
    v0_0 = (0x6);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A1EA:;
    if ((v0_0 != 0x11D)) goto L_C08A1F4;
    v0_0 = (0x8);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A1F4:;
    if ((v0_0 != 0x139)) goto L_C08A1FE;
    v0_0 = (0xA);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A1FE:;
    if ((v0_0 != 0x147)) goto L_C08A208;
    v0_0 = (0x0);
    v0_1 = (0x7);
    goto L_C08A368;
    L_C08A208:;
    if ((v0_0 != 0x14A)) goto L_C08A212;
    v0_0 = (0xA);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A212:;
    if ((v0_0 != 0x162)) goto L_C08A21C;
    v0_0 = (0x13);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A21C:;
    if ((v0_0 != 0x163)) goto L_C08A226;
    v0_0 = (0x8);
    v0_1 = (0x9);
    goto L_C08A368;
    L_C08A226:;
    if ((v0_0 != 0x164)) goto L_C08A230;
    v0_0 = (0xB);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A230:;
    v0_1 = (((v0_0 == 0x197)));
    if ((v0_1)) goto L_C08A314;
    if ((v0_0 == 0x19D)) goto L_C08A31A;
    if ((v0_0 == 0x1A0)) goto L_C08A320;
    if ((v0_0 == 0x1A2)) goto L_C08A326;
    if ((v0_0 == 0x302)) goto L_C08A33A;
    if ((v0_0 == 0x400)) goto L_C08A350;
    if ((v0_0 == 0x402)) goto L_C08A35E;
    if ((v0_0 == 0x407)) goto L_C08A364;
    goto L_C08A36C;
    L_C08A364:;
    v0_0 = (0x1F);
    v0_1 = (0xB);
    goto L_C08A368;
    L_C08A35E:;
    v0_0 = (0x2F);
    v0_1 = (0xB);
    goto L_C08A368;
    L_C08A350:;
    pl_play_side_se_at_frame(R14, 0x2F, 0xB);
    v0_0 = (0x62);
    v0_1 = (0xB);
    goto L_C08A368;
    L_C08A33A:;
    pl_play_side_se_at_frame(R14, 0x1C, 0x23);
    pl_play_side_se_at_frame(R14, 0x3A, 0x23);
    v0_0 = (0x62);
    v0_1 = (0x23);
    goto L_C08A368;
    L_C08A326:;
    v0_0 = (0x18);
    v0_1 = (0xB);
    goto L_C08A368;
    L_C08A320:;
    v0_0 = (0x0);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A31A:;
    v0_0 = (0x0);
    v0_1 = (0xA);
    goto L_C08A368;
    L_C08A314:;
    v0_0 = (0x0);
    v0_1 = (0xA);
    goto L_C08A368;
}


int demo_spawn_jitter_sparkle(int a4, int a5)
{
    int stk[3];
    register float u2;
    register int t4;
    register int t39;
    register int t8;
    register int t32;
    register int t11;
    register float u12;
    register float u14;
    register float u15;
    register int t38;
    register int t53;
    register int t61;
    register int t56;
    register int t57;
    register int t59;
    register int t81;
    register int t93;
    register int t83;
    register float u85;
    register int t99;
    register int t67;
    register int t5;
    register int t6;
    register float u7;
    register float u13;
    register int t84;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    u2 = 1.0f;
    if ((*(int *)0xC386830) != 0) {
        u2 = 0.833333313f;
    }
    *(unsigned short *)(((int)stk + 8)) = (int)(u2 * 60.0f);
    t4 = *(int *)(((int)stk + 4));
    if (t4 != 0) {
        if (t4 != 1) {
            t39 = t4;
            if (t4 == 2) {
                *(unsigned int *)(((int)stk + 0)) = 0x0;
                for (;;) {
                    t8 = obj_create(0x5, 0x1, 0x1, 0x0);
                    t32 = t8;
                    if (t8 != 0) {
                        *(unsigned int *)((t8 + 0x10)) = 0xC029F6A;
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned char *)((t8 + 0x3)) = 0x6;
                        *(unsigned char *)((t8 + 0x1)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        *(unsigned char *)((t8 + 0x5)) = 0x0;
                        *(unsigned char *)((t8 + 0x4)) = (*(signed char *)(((int)stk + 4)));
                        (((struct oEC_ushort *)(t8))->v) = (*(short *)(((int)stk + 8)));
                        t11 = *(int *)(((int)stk + 0));
                        u7 = (float)t11;
                        u12 = (float)(short)(int)((float)t11 * 2.5f);
                        (((struct oEE_ushort *)(t8))->v) = (int)(u12 * u2);
                        (((struct o24_float *)(t8))->v) = 0.0f;
                        (((struct o20_float *)(t8))->v) = 0.0f;
                        (((struct o28_float *)(t8))->v) = 4.0f;
                        *(unsigned int *)((t8 + 0x34)) = 0x0;
                        *(unsigned int *)((t8 + 0x30)) = 0x0;
                        *(unsigned int *)((t8 + 0x2C)) = 0x0;
                        t5 = 0x0;
                        u14 = 2.5f;
                        u15 = 4.0f;
                        for (;;) {
                            if ((int)t5 >= (int)(*(signed char *)((t8 + 0x2DC)))) {
                                break;
                            }
                            t6 = t5;
                            t6 = (t6 << 2);
                            t6 = (t6 + (0x2E0 + t8));
                            t6 = (*(int *)((t6 + 0x0)));
                            *(unsigned char *)((t6 + 0x0)) = 0x1;
                            *(unsigned char *)((t6 + 0x1)) = 0x0;
                            *(unsigned short *)((t6 + 0x2)) = 0xF;
                            FUN_0c06233a(t6, 0xC6649E8, 0x4F);
                            t5 = (t5 + 0x1);
                            if (((((struct oEE_short *)(t8))->v)) != 0) {
                                u14 = ((((struct o0_float *)0xC02A52C)->v));
                                u13 = u7;
                                u15 = (float)((((struct oEE_short *)(t8))->v));
                                u14 = (u14 / u15);
                                u15 = ((((struct o4_float *)0xC02A52C)->v));
                                u14 = (u14 * u7);
                                u14 = (u14 * u15);
                                u14 = (u14 / 360.0f);
                                *(unsigned int *)((t6 + 0x3C)) = (int)u14;
                                u14 = ((((struct o8_float *)0xC02A52C)->v));
                                u13 = (u13 * u14);
                                u13 = (-u13);
                                u13 = (u13 / 360.0f);
                                *(unsigned int *)((t6 + 0x38)) = (int)u13;
                            } else {
                                *(unsigned int *)((t6 + 0x3C)) = 0x0;
                                *(unsigned int *)((t6 + 0x38)) = 0x0;
                            }
                        }
                        t32 = 0x2DC;
                    }
                    t38 = *(int *)(((int)stk + 0));
                    *(unsigned int *)(((int)stk + 0)) = (t38 + 0x1);
                    if ((int)(t38 + 0x1) < (int)0x18) continue;
                    break;
                }
                t39 = t32;
            }
            t67 = t39;
        } else {
            t53 = obj_create(0x5, 0x1, 0x1, 0x0);
            t61 = t53;
            if (t53 != 0) {
                *(unsigned int *)((t53 + 0x10)) = 0xC029F6A;
                *(unsigned char *)((t53 + 0x0)) = 0x1;
                *(unsigned char *)((t53 + 0x3)) = 0x6;
                *(unsigned char *)((t53 + 0x1)) = 0x1;
                *(unsigned short *)((t53 + 0x6)) = 0xF;
                *(unsigned char *)((t53 + 0x5)) = 0x0;
                *(unsigned char *)((t53 + 0x4)) = (*(signed char *)(((int)stk + 4)));
                (((struct oEC_ushort *)(t53))->v) = (*(short *)(((int)stk + 8)));
                (((struct oEE_ushort *)(t53))->v) = 0x0;
                (((struct o24_float *)(t53))->v) = 0.0f;
                (((struct o20_float *)(t53))->v) = 0.0f;
                (((struct o28_float *)(t53))->v) = 16.0f;
                *(unsigned int *)((t53 + 0x34)) = 0x0;
                *(unsigned int *)((t53 + 0x30)) = 0x0;
                *(unsigned int *)((t53 + 0x2C)) = 0x0;
                t56 = *(int *)(((int)stk + 0));
                t57 = 0x0;
                for (;;) {
                    if ((int)t57 >= (int)(*(signed char *)((t53 + 0x2DC)))) {
                        break;
                    }
                    t59 = *(int *)((((t57 << 2) + (0x2E0 + t53)) + 0x0));
                    *(unsigned char *)((t59 + 0x0)) = 0x1;
                    *(unsigned char *)((t59 + 0x1)) = 0x0;
                    *(unsigned short *)((t59 + 0x2)) = 0xF;
                    FUN_0c06233a(t59, 0xC6649E8, (0x53 - t56));
                    t57 = (t57 + 0x1);
                }
                t61 = 0x2DC;
            }
            t67 = t61;
        }
        t99 = t67;
    } else {
        t81 = obj_create(0x5, 0x1, 0x2, 0x0);
        t93 = t81;
        if (t81 != 0) {
            *(unsigned int *)((t81 + 0x10)) = 0xC029F6A;
            *(unsigned char *)((t81 + 0x0)) = 0x1;
            *(unsigned char *)((t81 + 0x3)) = 0x2;
            *(unsigned char *)((t81 + 0x1)) = 0x1;
            *(unsigned short *)((t81 + 0x6)) = 0xF;
            *(unsigned char *)((t81 + 0x5)) = 0x0;
            *(unsigned char *)((t81 + 0x4)) = (*(signed char *)(((int)stk + 4)));
            (((struct oEC_ushort *)(t81))->v) = (int)(u2 * 180.0f);
            (((struct oEE_ushort *)(t81))->v) = 0x0;
            (((struct o28_float *)(t81))->v) = 0.0f;
            (((struct o24_float *)(t81))->v) = 0.0f;
            (((struct o20_float *)(t81))->v) = 0.0f;
            *(unsigned int *)((t81 + 0x34)) = 0x0;
            *(unsigned int *)((t81 + 0x30)) = 0x0;
            *(unsigned int *)((t81 + 0x2C)) = 0x0;
            t83 = 0x0;
            u85 = 180.0f;
            for (;;) {
                if ((int)t83 >= (int)(*(signed char *)((t81 + 0x2DC)))) {
                    break;
                }
                t84 = t83;
                t84 = (t84 << 2);
                *(unsigned int *)(((int)stk + 0)) = t84;
                t84 = (t84 + (0x2E0 + t81));
                t84 = (*(int *)((t84 + 0x0)));
                *(unsigned char *)((t84 + 0x0)) = 0x1;
                *(unsigned char *)((t84 + 0x1)) = 0x0;
                *(unsigned short *)((t84 + 0x2)) = 0xF;
                FUN_0c06233a(t84, 0xC6649E8, (*(int *)(((*(int *)(((int)stk + 0))) + 0xC148EE8))));
                t83 = (t83 + 0x1);
                u85 = (*(float *)(((*(int *)(((int)stk + 0))) + 0xC148EF0)));
                (((struct oC_float *)(t84))->v) = u85;
            }
            t93 = 0x2DC;
        }
        t99 = t93;
    }
    return t99;
}

int pl_mode08_09_phase1(int a4)
{
    register int t0;

    pl_step_motion(a4);
    if ((*(signed char *)((a4 + 0x4))) == 7) {
        t0 = pl_landed(a4);
        if ((signed char)t0 == 0) {
        } else {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x2C)) = 0x0;
            pl_start_motion(a4, 0x1, 0xA4);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xA)) = 0x6;
        }
        return pl_apply_velocity(a4);
    }
    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            pl_start_motion(a4, 0x1, 0xAA);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0650FC)->v))));
            (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC0650FC)->v))));
            (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC0650FC)->v));
            (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC0650FC)->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o44_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x2C)) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = 0x5;
            return 0x5;
        }
    }
    t0 = pl_landed(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o24_float *)(a4))->v) = ((((struct o2D4_float *)(a4))->v));
        pl_start_motion(a4, 0x1, 0xAB);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x6;
        return 0x6;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        pl_start_motion(a4, 0x1, 0x35);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    return pl_apply_velocity(a4);
}

int pl_mode15_cls02_f1(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = (signed char)(pl_step_motion(v0_0)) != 0;
    v0_0 = (v0_0);
    if (v0_1) goto L_C065FCC;
    w0_0 = (0.0f);
    if ((((((struct o3C_float *)(v0_0))->v)) > 0.0f)) goto L_C066044;
    v0_1 = (signed char)(pl_landed(v0_0)) == 0;
    if (v0_1) goto L_C066044;
    L_C065FCC:;
    v0_1 = (signed char)(FUN_0c09c782(v0_0)) == 0;
    if (v0_1) goto L_C065FEA;
    FUN_0c0634b4(v0_0);
    (((struct o7236_uchar *)(v0_0))->v) = 0x0;
    (((struct o71CC_uint *)(v0_0))->v) = 0x0;
    L_C065FF8:;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    return pl_end_action_choose_state(v0_0, R5, R6);
    L_C065FEA:;
    obj_set_mode_owner(((((struct o71CC_int *)(v0_0))->v)), 0x5, (*(signed char *)((v0_0 + 0x3))));
    goto L_C065FF8;
    L_C066044:;
    pl_apply_motion_translation(v0_0);
    if (((unsigned short)((((struct o719E_short *)(v0_0))->v)) != 18)) goto L_C066068;
    FUN_0c063468(v0_0);
    (((struct o3C_float *)(v0_0))->v) = (((((struct o3C_float *)(v0_0))->v)) / 2.0f);
    FPUL_ = (0x40000000);
    L_C066068:;
    if (((int)(unsigned short)((((struct o719E_short *)(v0_0))->v)) <= (int)0x12)) goto L_C0660DE;
    if ((((((struct oF0_short *)(v0_0))->v)) == 0)) goto L_C0660DE;
    if ((!(0.0f > ((((struct o3C_float *)(v0_0))->v))))) goto L_C0660D6;
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + ((((struct o38_float *)(v0_0))->v)) * (math_cos_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000)));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    w0_0 = (((struct o38_float *)(v0_0))->v);
    w0_1 = ((((struct o28_float *)(v0_0))->v));
    w0_1 = w0_1 + w0_0 * (math_sin_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000)));
    (((struct o28_float *)(v0_0))->v) = w0_1;
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) - ((((struct o48_float *)(v0_0))->v)));
    w0_0 = (w0_0);
    L_C0660D6:;
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) - 1);
    L_C0660DE:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    w0_1 = (((struct o3C_float *)(v0_0))->v);
    w0_2 = (((struct o48_float *)(v0_0))->v);
    (((struct o3C_float *)(v0_0))->v) = (w0_1 + w0_2);
    v0_1 = (0x3C);
    w0_0 = (0.0f);
    if ((!(0.0f > (w0_1 + w0_2)))) goto L_C066110;
    (((struct o4C_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    (((struct o38_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x38);
    L_C066110:;
    return v0_1;
}

int FUN_0c01fb0c(int a4)
{
    int stk[2];

    register int R2;
    register int R3;
    int R4;
    int R9;
    int R10;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    R4 = a4;
    v0_3 = vmu_get_ready_mask();
    v0_0 = (0x0);
    v0_1 = (0xC362A50);
    v0_2 = (R4);
    R4 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C01FB30;
    v0_0 = (0xFFFFFFFF);
    L_C01FC32:;
    return v0_0;
    L_C01FB30:;
    v0_3 = *(int *)((v0_2 + 0x20));
    *(unsigned int *)((v0_2 + 0xC)) = R4;
    R13 = (((int)0x1 << (int)v0_3));
    if (((R4 & ((int)0x1 << (int)v0_3)) != 0)) goto L_C01FB4E;
    if (((*(signed char *)((v0_2 + 0x31))) == 2)) goto L_C01FC0A;
    (((struct o31_uchar *)(v0_1))->v) = 0x2;
    L_C01FBFA:;
    *(unsigned char *)((v0_1 + 0x4)) = v0_0;
    L_C01FC30:;
    v0_0 = (0x1);
    goto L_C01FC32;
    L_C01FC0A:;
    v0_0 = (0x0);
    goto L_C01FC32;
    L_C01FB4E:;
    v0_3 = vmu_get_savefile_mask();
    *(unsigned int *)((v0_2 + 0x14)) = v0_3;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 & R13);
    v0_3 = vmu_get_free_space_mask();
    *(unsigned int *)((v0_2 + 0x10)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 & R13);
    v0_3 = FUN_0c0109e4();
    *(unsigned int *)((v0_2 + 0x1C)) = v0_3;
    v0_4 = vmu_get_vmgame_mask();
    *(unsigned int *)((v0_2 + 0x18)) = v0_4;
    v0_5 = vmu_get_foreign_exec_mask();
    *(unsigned int *)((v0_2 + 0x24)) = v0_5;
    R10 = ((v0_3 & R13));
    R9 = ((v0_4 & R13));
    if (((v0_5 & R13) == 0)) goto L_C01FBA2;
    if (((*(signed char *)((v0_2 + 0x31))) == 17)) goto L_C01FC0A;
    (((struct o31_uchar *)(v0_1))->v) = 0x11;
    *(unsigned char *)((v0_1 + 0x4)) = v0_0;
    (((struct o33_uchar *)(v0_2))->v) = 0x2;
    goto L_C01FC30;
    L_C01FBA2:;
    v0_4 = *(int *)(((int)stk + 0));
    v0_3 = ((v0_4 & R13));
    if ((((v0_4 & R13) & R10) != 0)) goto L_C01FBBC;
    v0_4 = *(int *)(((int)stk + 4));
    R4 = ((v0_4 & R13));
    if ((((v0_4 & R13) & R10) != 0)) goto L_C01FBEC;
    if (!(((v0_3 & R9) == 0))) goto L_C01FBBC;
    if (((R9 & R4) == 0)) goto L_C01FC02;
    goto L_C01FBEC;
    L_C01FBBC:;
    if (((*(signed char *)((v0_2 + 0x31))) == 5)) goto L_C01FC0A;
    (((struct o31_uchar *)(v0_1))->v) = 0x5;
    goto L_C01FBFA;
    L_C01FBEC:;
    if (((*(signed char *)((v0_2 + 0x31))) == 6)) goto L_C01FC0A;
    (((struct o31_uchar *)(v0_1))->v) = 0x6;
    goto L_C01FBFA;
    L_C01FC02:;
    if (((*(signed char *)((v0_2 + 0x31))) != 3)) goto L_C01FC0E;
    goto L_C01FC0A;
    L_C01FC0E:;
    (((struct o31_uchar *)(v0_1))->v) = 0x3;
    *(unsigned char *)((v0_1 + 0x4)) = v0_0;
    if ((v0_3 != 0)) goto L_C01FC2A;
    if ((R4 != 0)) goto L_C01FC28;
    (((struct o33_uchar *)(v0_2))->v) = v0_0;
    goto L_C01FC30;
    L_C01FC28:;
    L_C01FC2A:;
    (((struct o33_uchar *)(v0_2))->v) = 0x1;
    goto L_C01FC30;
}

int FUN_0c05bbc8(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        t1 = (((struct oEC_short *)(a4))->v);
        u0 = math_sin_angle16(((int)(((((float)((t1 << 1) + (t1 << 2)) * ((((struct o0_float *)0xC05BD18)->v))) / ((((struct o4_float *)0xC05BD18)->v)))) + ((((struct o8_float *)0xC05BD18)->v))) & 0xFFFF));
        (((struct o8_float *)(t0))->v) = (u0 * ((((struct o14_float *)0xC05BD18)->v)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xB6);
        t0 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x1E);
        t1 = (int)((int)(math_rand_next()) % (int)0x1E);
        if (t0 == t1) {
            fx_spawn_item_sparkle((a4 + 0x20));
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC336298); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC3362B0); }
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}

int FUN_0c09d710(int a4, int a5, float f4)
{
    int stk[8];
    register float u1;
    register float u2;
    register int t3;
    register float u5;
    register float u6;
    register int t13;
    register int t14;
    register int t15;
    register float u16;
    register float u17;
    register float u18;
    register int t28;
    register int t37;
    register float u4;
    register int t12;
    int t25;

    *(float *)(((int)stk + 0)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    hit_build_part_shape(a4, (((int)stk + 0) + 0x8));
    u1 = (((struct o10_float *)((((int)stk + 0) + 0x8)))->v);
    u2 = (((struct o4_float *)((((int)stk + 0) + 0x8)))->v);
    t3 = 0x0;
    u5 = f4;
    u6 = 0.0f;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x2D8)))) {
            break;
        }
        u4 = (FUN_0c02629e((*(signed char *)((((0x2B8 + a4) + t3) + 0x0))), (*(int *)((((t3 << 2) + (0x2C0 + a4)) + 0x0)))));
        u5 = u4;
        u5 = (u5 - (u2 - u1));
        t3 = (t3 + 0x1);
        if (u5 > u6) {
            u6 = u5;
        }
    }
    t13 = t12;
    t14 = 0x0;
    t15 = t3;
    u16 = u4;
    u17 = u5;
    u18 = u6;
    for (;;) {
        if ((int)t14 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t13 = 0x294;
        t15 = t14;
        t15 = (t15 << 2);
        t13 = (t13 + a4);
        t13 = (t13 + t15);
        t13 = (*(int *)((t13 + 0x0)));
        if (((*(signed char *)((t13 + 0x2))) == 2) && (t25 = *(signed char *)((t13 + 0x2D9)), t25 != 2)) {
            t13 = 0x294;
            t13 = (t13 + a4);
            t13 = (t13 + t15);
            t13 = (*(int *)((t13 + 0x0)));
            t28 = obj_can_interact(t13, 0x0, (*(signed char *)((a4 + 0x3))), 0x0);
            if (t28 != 0) {
                t13 = 0x294;
                t13 = (t13 + a4);
                t13 = (t13 + t15);
                t13 = (*(int *)((t13 + 0x0)));
                u16 = (FUN_0c02649a(t13, 0x0));
                u17 = u16;
                u17 = (u17 - (u2 - u1));
                if (u17 > u18) {
                    u18 = u17;
                }
                t14 = (t14 + 0x1);
                continue;
            }
            return 0x1;
        }
        t14 = (t14 + 0x1);
    }
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u18;
    t37 = 0x0;
    if (u18 != 0.0f) {
        t37 = 0x2;
        if (u18 > (*(float *)(((int)stk + 0)))) {
            t37 = 0x1;
        }
    }
    return t37;
}

int pl_try_grab_target_object(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t57;
    register int t4;
    register int t11;
    register float t18;
    register float t19;
    register float t25;
    register float t26;
    int t1;
    int t12;

    t57 = 0x0;
    if (((*(signed char *)((a4 + 0x71BC))) != 2) && (t1 = (((struct o71C8_int *)(a4))->v), t1 != 0)) {
        t4 = obj_can_interact(((((struct o71C8_int *)(a4))->v)), 0x1, (*(signed char *)((a4 + 0x3))), a7);
        t57 = 0x0;
        if (t4 != 0) {
            t11 = *(signed char *)((a4 + 0x4));
            if ((t11 != 4) && ((t11 != 5) && ((t11 != 9) && (t12 = *(signed char *)((a4 + 0x71F1)), t12 == 0)))) {
                t18 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x0);
                *(float *)(((int)stk + 4)) = t18;
                t19 = FUN_0c02649a(a4, 0x0);
                if (t19 > t18) {
                    (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                }
                t25 = FUN_0c02649a(((((struct o71C8_int *)(a4))->v)), 0x1);
                *(float *)(((int)stk + 0)) = t25;
                t26 = FUN_0c02649a(a4, 0x1);
                if (t25 > t26) {
                    (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 0)));
                }
                pl_change_state(a4, 0xA, 0xA, 0x0);
                t57 = 0x1;
            } else {
                t57 = 0x0;
                if ((*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x30D))) == 0) {
                    obj_set_mode_owner(((((struct o71C8_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
                    pl_change_state(a4, 0xA, 0xA, 0x0);
                    (((struct o7236_uchar *)(a4))->v) = 0x1;
                    t57 = 0x1;
                }
            }
        }
    }
    return t57;
}

int FUN_0c0d780c(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F4726;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o1_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4726) + 0x1);
        (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
        (((struct oE_uchar *)0xC7F4725)->v) = 0x0;
        *(unsigned int *)0xC494B0C = 0xE10;
    }
    FUN_0c0d78fa();
    t0 = *(int *)0xC494B0C;
    *(unsigned int *)0xC494B0C = (t0 - 1);
    if ((t0 - 1) != 0) {
        t0 = FUN_0c0d7a44(0x2);
        if (t0 != 0) {
            return FUN_0c061f9c(0x0);
        }
        if ((*(signed char *)0xC7F473B) == 0) {
            t0 = FUN_0c0d7a0a();
            t1 = FUN_0c0d7a44(0x4);
            if ((t0 != 0) || (t1 != 0)) {
                FUN_0c0d71f4((t0 | t1));
                (((struct o0_uchar *)0xC7F4725)->v) = ((*(signed char *)0xC7F4725) + 0x1);
                (((struct o3_uchar *)0xC7F4725)->v) = 0x0;
                (((struct o2_uchar *)0xC7F4725)->v) = 0x0;
                (((struct o1_uchar *)0xC7F4725)->v) = 0x0;
                snd_play_side_se(0x0, 0x4D);
            }
        }
        obj_tick_class(0x5);
        return FUN_0c0593e0(0x5);
    }
    return FUN_0c061f9c(0x0);
}

int FUN_0c02a9bc(float f4)
{
    register int t14;
    register int t0;
    register int t5;
    register int t1;
    register int t3;

    t14 = 0xC02AA50;
    if (240.0f > f4) {
        t0 = obj_create(0x5, 0x1, 0x1, 0x0);
        t5 = t0;
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x10)) = 0xC02A784;
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x3)) = 0x2;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x1F;
            *(unsigned char *)((t0 + 0x5)) = 0x0;
            (((struct o24_float *)(t0))->v) = f4;
            (((struct o28_float *)(t0))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x34)) = 0x0;
            *(unsigned int *)((t0 + 0x30)) = 0x0;
            *(unsigned int *)((t0 + 0x2C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                if ((int)t1 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                    break;
                }
                t3 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned char *)((t3 + 0x1)) = 0x0;
                *(unsigned short *)((t3 + 0x2)) = 0xF;
                FUN_0c06233a(t3, 0xC6649E8, 0x38);
                t1 = (t1 + 0x1);
            }
            t5 = 0x2DC;
        }
        t14 = t5;
    }
    return t14;
}

int vmu_menu_scan_port_masks(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = vmu_get_ready_mask();
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        *(unsigned int *)((a4 + 0xC)) = t0;
        if (t0 == 0) {
            t0 = 0x0;
            if ((*(signed char *)((a4 + 0x2))) != 2) {
                (((struct o0_uchar *)0xC362A52)->v) = 0x2;
                (((struct o1_uchar *)0xC362A52)->v) = 0x0;
                t0 = 0x1;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (vmu_get_savefile_mask());
            *(unsigned int *)((a4 + 0x10)) = (vmu_get_free_space_mask());
            *(unsigned int *)((a4 + 0x18)) = (vmu_get_vmgame_mask());
            *(unsigned int *)((a4 + 0x1C)) = (FUN_0c0109e4());
            t0 = *(signed char *)((a4 + 0x1));
            if (t0 != 0) {
                t3 = 0x0;
                if ((t0 == 1) || (t0 == 2)) {
                    if ((*(int *)((a4 + 0x14))) != 0) {
                        t0 = 0x0;
                        if ((*(signed char *)((a4 + 0x2))) != 4) {
                            (((struct o0_uchar *)0xC362A52)->v) = 0x4;
                            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
                            t0 = 0x1;
                        }
                        t4 = t0;
                    } else {
                        t0 = 0x0;
                        if ((*(signed char *)((a4 + 0x2))) != 3) {
                            (((struct o0_uchar *)0xC362A52)->v) = 0x3;
                            (((struct o1_uchar *)0xC362A52)->v) = 0x0;
                            t0 = 0x1;
                        }
                        t4 = t0;
                    }
                    t3 = t4;
                }
                t0 = t3;
            } else {
                if (((*(int *)((a4 + 0x14))) | (*(int *)((a4 + 0x10)))) != 0) {
                    t3 = 0x0;
                    if ((*(signed char *)((a4 + 0x2))) != 4) {
                        (((struct o0_uchar *)0xC362A52)->v) = 0x4;
                        (((struct o1_uchar *)0xC362A52)->v) = 0x0;
                        t3 = 0x1;
                    }
                    t4 = t3;
                } else {
                    t3 = 0x0;
                    if ((*(signed char *)((a4 + 0x2))) != 3) {
                        (((struct o0_uchar *)0xC362A52)->v) = 0x3;
                        (((struct o1_uchar *)0xC362A52)->v) = 0x0;
                        t3 = 0x1;
                    }
                    t4 = t3;
                }
                t0 = t4;
            }
            t1 = t0;
        }
    }
    return t1;
}

int FUN_0c0d4ff4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            return (unsigned char)t4;
        }
        if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
            (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
        }
        t4 = (((struct oC_short *)0xC7F2EE6)->v);
        if ((int)t4 <= 0) {
            if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t0 = *(signed char *)0xC7F2DF1, (int)t0 > (int)0x1)) {
                return t0;
            }
            if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t1 = *(signed char *)0xC7F2E69, (int)t1 > (int)0x1)) {
                return t1;
            }
            if ((*(int *)0xC33F6B8) != 0) {
                t0 = FUN_0c0d48ea(0x2);
                *(unsigned int *)0xC33F6B8 = 0x0;
                return t0;
            }
            t0 = FUN_0c0d479e();
            t1 = 0x0;
            if (t0 != 0) {
                t1 = 0x3;
            }
            return FUN_0c0d48ea(t1);
        }
        return t4;
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct oC_ushort *)0xC7F2EE6)->v) = 0x12C;
    *(unsigned char *)0xC7F306E = 0x1;
    if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
        (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
    }
    t0 = (((struct oC_short *)0xC7F2EE6)->v);
    if ((int)t0 <= 0) {
        if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t2 = *(signed char *)0xC7F2DF1, (int)t2 > (int)0x1)) {
            return t2;
        }
        if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t3 = *(signed char *)0xC7F2E69, (int)t3 > (int)0x1)) {
            return t3;
        }
        if ((*(int *)0xC33F6B8) != 0) {
            t1 = FUN_0c0d48ea(0x2);
            *(unsigned int *)0xC33F6B8 = 0x0;
            return t1;
        }
        t1 = FUN_0c0d479e();
        t2 = 0x0;
        if (t1 != 0) {
            t2 = 0x3;
        }
        return FUN_0c0d48ea(t2);
    }
    return t0;
}

int pl_mode15_cls05_07_f1(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            pl_mode15_cls05_07_f1_land(a4);
        }
    } else {
        pl_mode15_cls05_07_f1_move(a4);
    }
    t0 = (((struct o719E_short *)(a4))->v);
    t1 = (unsigned short)t0;
    if ((unsigned short)t0 == 9) {
        t0 = *(signed char *)((a4 + 0xA));
        if (t0 != 5) {
            if (t0 != 6) {
                if (t0 != 7) {
                    t2 = t0;
                    if (t0 != 14) {
                    } else {
                        t2 = (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x1E, 0x43, 0xC14EB34, 0xC14EB40));
                    }
                    t0 = t2;
                } else {
                    t0 = (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x1E, 0x43, 0xC14EB64, 0xC14EB70));
                }
                t2 = t0;
            } else {
                t2 = (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x1E, 0x43, 0xC14EB4C, 0xC14EB58));
            }
            t0 = t2;
        } else {
            t0 = (fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x1E, 0x43, 0xC14EB34, 0xC14EB40));
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c06428a(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o71BC_uchar *)(a4))->v) = 0x2;
        *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
        t0 = *(signed char *)((a4 + 0x4));
        if (t0 != 3) {
            if (t0 != 5) {
                u0 = ((((struct oC_float *)0xC064418)->v));
                u1 = ((((struct o8_float *)0xC064418)->v));
            } else {
                u0 = ((((struct o4_float *)0xC064418)->v));
                u1 = ((((struct o0_float *)0xC064418)->v));
            }
            u2 = u0;
            u0 = u1;
        } else {
            u2 = ((((struct oC_float *)0xC064418)->v));
            u0 = ((((struct o8_float *)0xC064418)->v));
        }
        FUN_0c0641a0(a4, u2, u0);
        pl_start_motion(a4, 0x1, 0x97);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x2;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_mode12_phase0(int a4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x1, 0xA0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_turn_to_opponent(a4, 0x4000);
        t0 = *(signed char *)((a4 + 0x4));
        u0 = 40.0f;
        u1 = -2.5999999f;
        if ((t0 != 5) && (t0 != 9)) {
            u0 = ((((struct o4_float *)0xC065600)->v));
            u1 = ((((struct o0_float *)0xC065600)->v));
        }
        FUN_0c0641a0(a4, u0, u1);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int ai_dist_class(int a4)
{
    register int t0;
    register float t1;

    t0 = pl_rel_angle_to_linked(a4);
    t1 = ai_dist_to_opponent(a4);
    if ((int)(unsigned short)(t0 + 0x271C) > (int)0x4E38) {
        if (700.0f > t1) {
            return 0x4;
        }
        return 0x5;
    }
    if (((((struct o0_float *)0xC08CCE8)->v)) > t1) {
        return 0x0;
    }
    if (((((struct o4_float *)0xC08CCE8)->v)) > t1) {
        return 0x1;
    }
    if (((((struct o8_float *)0xC08CCE8)->v)) > t1) {
        return 0x2;
    }
    if (((((struct oC_float *)0xC08CCE8)->v)) > t1) {
        return 0x3;
    }
    return 0x5;
}

