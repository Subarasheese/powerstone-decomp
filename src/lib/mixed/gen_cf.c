/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c010134(void);
int FUN_0c010138(void);
int FUN_0c0158e4(void);
int FUN_0c01d31a(void);
int FUN_0c01d7ee(void);
int FUN_0c054114(void);
int FUN_0c05414e(void);
int FUN_0c05590c(int);
int FUN_0c0a2f66(int);
int FUN_0c0a3308(int);
int FUN_0c0a3f30(int);
int FUN_0c0a3fce(int);
int FUN_0c0a4030(int);
int FUN_0c0a4070(int, int);
int FUN_0c0a40b0(int);
int FUN_0c0a40e4(int);
int FUN_0c0a413a(int);
int FUN_0c0a416c(int);
int FUN_0c0a502e(void);
int FUN_0c0ad254(int);
int FUN_0c0ad7a4(int);
int FUN_0c0cd0de(int, int, int, int);
int FUN_0c0ce404(int, int, int, int);
int FUN_0c0d48ea(int);
int FUN_0c0d51d2(int);
int FUN_0c0e21b0(int, int);
extern float _builtin_sqrtf(float);
int bgm_play_win(void);
extern int bgm_stop_all();
int bgm_stop_streams(void);
int cam_request_mode_06(int, int);
int dbg_print_at(int, float, float);
int dbgedit_update(float, float, float, float, float, float);
int dbgmotion_update(void);
int ending_mode_frame(int, int, int, int);
int fx_spawn_0488b8(int, int, int, int);
int fx_spawn_056e2c(void);
int fx_spawn_0577ca(void);
int fx_spawn_057ab6(void);
int game_poll_start_button(void);
int game_poll_start_button_pl(int);
int math_atan_angle16(float);
float math_rand_float(void);
int obj_set_mode_owner(int, int, int);
int pl_add_gauge_by_percent(int);
int pl_add_gauge_by_value(int);
int pl_add_gauge_random(void);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_reset(int);
int pl_get_hit_count_of_opponent(int);
int pl_gunrock_mode08_09_update_v0(int);
int pl_gunrock_mode08_09_update_v1(int);
int pl_step_motion(int);
int res_load_match_sound_banks(int, int, int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int sprintf(int, int, ...);
int stage_type01_init_thrown_from_owner(int);
int stage_type01_spawn_ground_fx(int);
int testmode_check_exit_combo(void);
int testmode_draw_text_table(int, int);
int testmode_draw_title_and_footer(int);
int testmode_move_cursor(int, int, int, int);
int FUN_0c0cd58e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c05436c(void);
int FUN_0c054760(int a4, int a5, int a6, int a7);
int FUN_0c05426a(void);
int FUN_0c05499c(int a4);
int FUN_0c0cd1ea(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0a5506(void);
int FUN_0c0cd028(int a4, int a5, int a6, int a7);
int FUN_0c0adaa6(int a4);
int FUN_0c0ae3ec(int a4);
int FUN_0c0548e4(void);
int FUN_0c0ae682(int a4);
int FUN_0c077824(int a4);
int FUN_0c0adf60(int a4);
int FUN_0c0ad91c(int a4);
int FUN_0c0adc60(int a4);
int FUN_0c0ad2f2(int a4);
int FUN_0c054886(void);
int FUN_0c0df2e0(float f4);
int FUN_0c0546c6(void);
int FUN_0c0adcf4(int a4);
int FUN_0c054ab8(void);
int FUN_0c0ae224(int a4);
int FUN_0c077db2(int a4, int a5, int a6, int a7);
int FUN_0c0ad744(int a4, int a5, int a6, int a7);
int FUN_0c054870(void);
int FUN_0c0adce2(int a4);
int FUN_0c0546b6(void);
int FUN_0c054af6(void);
int FUN_0c0ae4b2(int a4);
int FUN_0c0add38(int a4);
int FUN_0c0ae3e4(int a4);
int FUN_0c0ae488(int a4);
int FUN_0c097e76(int a4);
void FUN_0c0ae258(void);
int FUN_0c0d51d0(void);

int FUN_0c0cd58e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    int R5;
    int R7;
    int R11;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    R4 = a4;
    v0_0 = a6;
    R7 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    w0_0 = f7;
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 8) + 0x34)) = *(struct mv7 *)(0xC153428); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 8) + 0x4)) = *(struct mv12 *)(0xC153444); }
    v0_4 = *(signed char *)0xC7F2EE7;
    v0_6 = ((unsigned char)v0_4);
    v0_1 = (0x6);
    v0_2 = (0xC7F2EE0);
    v0_3 = (0x0);
    if (((unsigned char)v0_4 == 0)) goto L_C0CD620;
    if ((v0_6 == 1)) goto L_C0CD650;
    L_C0CD9B2:;
    dbg_print_at(0xC153474, 128.0f, ((float)(*(int *)(((((int)stk + 8) + 0x34) + ((unsigned char)(*(signed char *)((v0_2 + 0x8))) << 2)))) * 8.0f));
    testmode_draw_title_and_footer((*(int *)0xC33EC58));
    testmode_draw_text_table(0xC33EDB4, 0xB);
    dbg_print_at((*(int *)(((((*(short *)((v0_2 + 0xE))) << 2) + (((int)stk + 8) + 0x4)) + 0x0))), 304.0f, 80.0f);
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    v0_5 = (0xC7F36B8);
    R11 = (0x0);
    v0_4 = (0x10);
    v0_3 = (0xC0CCEFC);
    w0_0 = (320.0f);
    w0_1 = (16.0f);
    w0_1 = (8.0f);
    L_C0CDA90:;
    if (((int)(*(int *)(((int)stk + 8))) < (int)v0_1)) goto L_C0CDA5C;
    v0_1 = testmode_check_exit_combo();
    v0_6 = ((signed char)v0_1);
    if (((signed char)v0_1 == 0)) goto L_C0CDAA6;
    v0_6 = ((((int (*)(int, int, int, int))(bgm_stop_all))(R4, R5, v0_0, R7)));
    L_C0CDAA6:;
    return v0_6;
    L_C0CDA5C:;
    *(int *)((int)stk + 4) = ((*(short *)((((v0_2 + 0xE) + R11) + 0x2))));
    *(int *)((int)stk + 0) = 0xC153478;
    sprintf(v0_5, 0xC153478, *(int *)((int)stk + 4));
    dbg_print_at(v0_5, w0_0, ((float)v0_4 * w0_1));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    R11 = ((R11 + 0x2));
    v0_4 = ((v0_4 + 0x1));
    goto L_C0CDA90;
    L_C0CD650:;
    v0_4 = (0xC361BF0);
    if ((((unsigned short)(*(short *)0xC361BFC) & 16) == 0)) goto L_C0CD676;
    v0_0 = *(signed char *)((v0_2 + 0x8));
    *(unsigned char *)((v0_2 + 0x8)) = (v0_0 - 1);
    if (((int)(unsigned char)(v0_0 - 1) > (int)v0_1)) goto L_C0CD670;
    if (((int)(unsigned char)(*(signed char *)0xC7F2EE8) >= 0)) goto L_C0CD676;
    L_C0CD670:;
    *(unsigned char *)((v0_2 + 0x8)) = v0_1;
    L_C0CD676:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & 32) == 0)) goto L_C0CD690;
    v0_0 = *(signed char *)((v0_2 + 0x8));
    *(unsigned char *)((v0_2 + 0x8)) = (v0_0 + 0x1);
    if (((int)(unsigned char)(v0_0 + 0x1) <= (int)v0_1)) goto L_C0CD690;
    *(unsigned char *)((v0_2 + 0x8)) = v0_3;
    L_C0CD690:;
    v0_7 = *(signed char *)((v0_2 + 0x8));
    v0_6 = ((unsigned char)v0_7);
    v0_5 = (0xC0A2F66);
    R11 = (0x2);
    R4 = (0x80);
    R5 = (0x40);
    v0_0 = (v0_4);
    R7 = (0x4);
    if (((unsigned char)v0_7 == 0)) goto L_C0CD6CA;
    if ((v0_6 == 1)) goto L_C0CD72A;
    if ((v0_6 == 2)) goto L_C0CD78C;
    if ((v0_6 != 3)) goto L_C0CD6B6;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD81A;
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) - 1);
    L_C0CD81A:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD828;
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) + 0x1);
    L_C0CD828:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD838;
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) - 16);
    L_C0CD838:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD848;
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) + 0x10);
    L_C0CD848:;
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) & 0xFF);
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) == 0)) goto L_C0CD85E;
    FUN_0c0a4030((*(short *)((v0_2 + 0x14))));
    L_C0CD85E:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R11) != 0)) goto L_C0CD86A;
    goto L_C0CD9B2;
    L_C0CD86A:;
    FUN_0c0a2f66(0x2);
    goto L_C0CD9B2;
    L_C0CD6B6:;
    if ((v0_6 != 4)) goto L_C0CD6BE;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD880;
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) - 1);
    L_C0CD880:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD88E;
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) + 0x1);
    L_C0CD88E:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD89E;
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) - 16);
    L_C0CD89E:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD8AE;
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) + 0x10);
    L_C0CD8AE:;
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) & 0xFF);
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) == 0)) goto L_C0CD8E0;
    if (((*(signed char *)((v0_2 + 0xE))) != 11)) goto L_C0CD8CE;
    FUN_0c0a416c((*(short *)((v0_2 + 0x16))));
    L_C0CD8E0:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R11) == 0)) goto L_C0CD9B2;
    FUN_0c0a2f66(0x4);
    goto L_C0CD9B2;
    L_C0CD8CE:;
    *(unsigned int *)(((int)stk + 8)) = (v0_2 + 0xE);
    FUN_0c0a4070((*(short *)(((*(int *)(((int)stk + 8))) + 0x8))), (*(short *)(((v0_2 + 0xE) + 0x0))));
    goto L_C0CD8E0;
    L_C0CD6BE:;
    if ((v0_6 != 5)) goto L_C0CD6C6;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD8FE;
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) - 1);
    L_C0CD8FE:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD90C;
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) + 0x1);
    L_C0CD90C:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD91C;
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) - 16);
    L_C0CD91C:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD92C;
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) + 0x10);
    L_C0CD92C:;
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) & 0xFF);
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) == 0)) goto L_C0CD942;
    FUN_0c0a40e4((*(short *)((v0_2 + 0x18))));
    L_C0CD942:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R11) == 0)) goto L_C0CD9B2;
    FUN_0c0a2f66(0x6);
    goto L_C0CD9B2;
    L_C0CD6C6:;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD960;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) - 1);
    L_C0CD960:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD96E;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) + 0x1);
    L_C0CD96E:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD97E;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) - 16);
    L_C0CD97E:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD98E;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) + 0x10);
    L_C0CD98E:;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) & 0xFF);
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) == 0)) goto L_C0CD9A4;
    FUN_0c0a413a((*(short *)((v0_2 + 0x1A))));
    L_C0CD9A4:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R11) == 0)) goto L_C0CD9B2;
    L_C0CD9AC:;
    v0_4 = ((int (*)(int, int, int, int))(bgm_stop_all))(R4, R5, v0_0, R7);
    goto L_C0CD9B2;
    L_C0CD78C:;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD79A;
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) - 1);
    L_C0CD79A:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD7A8;
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) + 0x1);
    L_C0CD7A8:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD7B8;
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) - 16);
    L_C0CD7B8:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD7C8;
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) + 0x10);
    L_C0CD7C8:;
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) & 0xFF);
    v0_4 = *(short *)((v0_4 + 0xC));
    v0_6 = ((unsigned short)v0_4);
    if ((((unsigned short)v0_4 & R7) == 0)) goto L_C0CD7E2;
    FUN_0c0a40b0((*(short *)((v0_2 + 0x12))));
    goto L_C0CD9B2;
    L_C0CD7E2:;
    if (((v0_6 & R11) != 0)) goto L_C0CD7EA;
    goto L_C0CD9B2;
    L_C0CD7EA:;
    goto L_C0CD9AC;
    L_C0CD72A:;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD738;
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) - 1);
    L_C0CD738:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD746;
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) + 0x1);
    L_C0CD746:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R5) == 0)) goto L_C0CD756;
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) - 16);
    L_C0CD756:;
    if ((((unsigned short)((((struct o20_short *)(v0_4))->v)) & R4) == 0)) goto L_C0CD766;
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) + 0x10);
    L_C0CD766:;
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) & 0xFF);
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) == 0)) goto L_C0CD77C;
    FUN_0c0a3fce((*(short *)((v0_2 + 0x10))));
    L_C0CD77C:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R11) == 0)) goto L_C0CD788;
    goto L_C0CD9AC;
    L_C0CD788:;
    goto L_C0CD9B2;
    L_C0CD6CA:;
    if ((((unsigned short)(*(short *)((v0_0 + 0xC))) & R5) == 0)) goto L_C0CD6E2;
    v0_5 = *(short *)((v0_2 + 0xE));
    *(unsigned short *)((v0_2 + 0xE)) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) >= 0)) goto L_C0CD6E2;
    *(unsigned short *)((v0_2 + 0xE)) = 0xB;
    L_C0CD6E2:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R4) == 0)) goto L_C0CD6FE;
    v0_5 = *(short *)((v0_2 + 0xE));
    *(unsigned short *)((v0_2 + 0xE)) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) < (int)0xC)) goto L_C0CD6FE;
    *(unsigned short *)((v0_2 + 0xE)) = v0_3;
    L_C0CD6FE:;
    if ((((unsigned short)(*(short *)((v0_4 + 0xC))) & R7) != 0)) goto L_C0CD70A;
    goto L_C0CD9B2;
    L_C0CD70A:;
    if (((*(signed char *)((v0_2 + 0xE))) != 11)) goto L_C0CD71A;
    FUN_0c0a3308(0x0);
    goto L_C0CD9B2;
    L_C0CD71A:;
    v0_4 = *(short *)((v0_2 + 0xE));
    res_load_match_sound_banks(v0_4, v0_4, v0_4);
    goto L_C0CD9B2;
    L_C0CD620:;
    res_load_match_sound_banks((*(short *)(((v0_2 + 0xE) + 0x2))), (*(short *)(((v0_2 + 0xE) + 0x0))), (*(short *)(((v0_2 + 0xE) + 0x0))));
    *(unsigned char *)((v0_2 + 0x7)) = ((*(signed char *)((v0_2 + 0x7))) + 0x1);
    *(unsigned char *)((v0_2 + 0x8)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0xE)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0xC)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0xA)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0x8)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0x6)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0x4)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0x2)) = v0_3;
    *(unsigned short *)(((v0_2 + 0xE) + 0x0)) = v0_3;
    goto L_C0CD650;
}

int FUN_0c05436c(void)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t14;
    register int t19;
    register int t26;
    register int t28;
    register int t29;
    register int t44;
    register int t49;
    register float u50;
    register int t51;
    register float u52;
    register float t53;
    register float u56;
    register int t58;
    register int t60;
    register int t62;
    register float t64;
    register float u67;
    register int t84;
    register int t95;
    register int t100;
    register int t106;
    register int t3;
    int t4;
    register int t20;
    register int t32;
    register int t85;
    int t86;
    register int t101;

    t0 = *(signed char *)0xC7F302F;
    if (t0 != 0) {
        if (t0 == 1) {
            if ((*(signed char *)0xC7F301C) == 0) {
                t2 = FUN_0c054114();
                if ((t2 == 0) && ((t3 = (((struct o8_short *)0xC7F302E)->v), (int)t3 <= (int)0x3C) && (t4 = *(signed char *)0xC7F3071, t4 != 0))) {
                    *(unsigned char *)0xC7F306E = 0x0;
                }
            }
            t14 = (((struct o8_short *)0xC7F302E)->v);
            (((struct o8_ushort *)0xC7F302E)->v) = (t14 - 1);
            if ((int)(short)(t14 - 1) <= 0) {
                if ((*(signed char *)0xC7F3054) != 0) {
                    (((struct o8_ushort *)0xC7F302E)->v) = 0x1E;
                    fx_spawn_0488b8(0x0, 0x0, 0x1E, 0x0);
                    t19 = *(signed char *)0xC7F302F;
                    (((struct o1_uchar *)0xC7F302E)->v) = (t19 + 0x1);
                    t20 = (t19 + 0x1);
                } else {
                    (((struct o1_uchar *)0xC7F302E)->v) = 0x63;
                    t20 = 0x63;
                }
                return t20;
            }
            t26 = *(signed char *)0xC7F3073;
            if ((unsigned char)t26 != 0) {
                if (((unsigned char)t26 != 1) && ((unsigned char)t26 != 2)) {
                    return game_poll_start_button();
                }
                return game_poll_start_button_pl((t26 - 1));
            }
            return game_poll_start_button();
        }
        if (t0 == 2) {
            t28 = (((struct o8_short *)0xC7F302E)->v);
            (((struct o8_ushort *)0xC7F302E)->v) = (t28 - 1);
            t32 = (short)(t28 - 1);
            if ((int)(short)(t28 - 1) <= 0) {
                t29 = *(signed char *)0xC7F302F;
                (((struct o1_uchar *)0xC7F302E)->v) = (t29 + 0x1);
                t32 = (t29 + 0x1);
            }
        } else {
            (((struct o0_uchar *)0xC7F302E)->v) = 0x63;
            t32 = 0x63;
        }
        return t32;
    }
    (((struct o1_uchar *)0xC7F302E)->v) = ((*(signed char *)0xC7F302F) + 0x1);
    (((struct o8_ushort *)0xC7F302E)->v) = 0xF0;
    FUN_0c05414e();
    if ((*(signed char *)0xC7F3054) != 0) {
        bgm_stop_streams();
        bgm_play_win();
    }
    *(unsigned char *)(((0x1 + ((unsigned short)((unsigned short)((((*(signed char *)0xC7F304F) == 0)) ? 1 : 0) * (unsigned short)0x72D0) + 0xC7E40C4)) + 0x0)) = 0x0;
    t44 = *(signed char *)0xC7F3051;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20)) = *(struct mv3 *)(((((t44 << 1) + t44) << 2) + 0xC345DF4)); }
    *(unsigned int *)(((((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30) + 0x0)) = (*(int *)((((*(signed char *)0xC7F3051) << 2) + 0xC345EE4)));
    t49 = *(signed char *)0xC7F304F;
    u50 = (((struct o20_float *)(((unsigned short)((unsigned short)t49 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
    (((struct o20_float *)(((unsigned short)((unsigned short)((-t49) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (u50 + -400.0f);
    t51 = *(signed char *)0xC7F304F;
    u52 = (((struct o28_float *)(((unsigned short)((unsigned short)t51 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
    (((struct o28_float *)(((unsigned short)((unsigned short)((-t51) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (u52 + -400.0f);
    t53 = math_rand_float();
    u56 = (t53 * 255.0f);
    if (!(2.14748365e+09f > (t53 * 255.0f))) {
        u56 = (((t53 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t58 = (int)((unsigned int)(int)u56 % (unsigned int)0x2);
    t60 = *(signed char *)0xC7F304F;
    *(unsigned char *)(((int)stk + 4)) = t60;
    *(int *)((int)stk + 0) = t60;
    t62 = *(signed char *)((((unsigned short)((unsigned short)(*(signed char *)(((int)stk + 4))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
    t64 = math_rand_float();
    u67 = (t64 * 255.0f);
    if (!(2.14748365e+09f > (t64 * 255.0f))) {
        u67 = (((t64 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    cam_request_mode_06((*(signed char *)((((((t62 << 2) << 1) + 0xC155400) + (t58 << 2)) + ((int)((unsigned int)(int)u67 % (unsigned int)0x4))))), t60);
    pl_change_state(((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7E40C4), 0x15, t58, 0x0);
    pl_change_state(((unsigned short)((unsigned short)(signed char)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4), 0x8, 0x0, 0x0);
    if ((*(signed char *)0xC7F302E) == 2) {
        FUN_0c0a3f30(0x19);
        fx_spawn_057ab6();
    } else {
        FUN_0c0a3f30(0x18);
        fx_spawn_0577ca();
    }
    if ((*(signed char *)0xC7F301C) == 0) {
        t84 = FUN_0c054114();
        if ((t84 == 0) && ((t85 = (((struct o8_short *)0xC7F302E)->v), (int)t85 <= (int)0x3C) && (t86 = *(signed char *)0xC7F3071, t86 != 0))) {
            *(unsigned char *)0xC7F306E = 0x0;
        }
    }
    t95 = (((struct o8_short *)0xC7F302E)->v);
    (((struct o8_ushort *)0xC7F302E)->v) = (t95 - 1);
    if ((int)(short)(t95 - 1) <= 0) {
        if ((*(signed char *)0xC7F3054) != 0) {
            (((struct o8_ushort *)0xC7F302E)->v) = 0x1E;
            fx_spawn_0488b8(0x0, 0x0, 0x1E, 0x0);
            t100 = *(signed char *)0xC7F302F;
            (((struct o1_uchar *)0xC7F302E)->v) = (t100 + 0x1);
            t101 = (t100 + 0x1);
        } else {
            (((struct o1_uchar *)0xC7F302E)->v) = 0x63;
            t101 = 0x63;
        }
        return t101;
    }
    t106 = *(signed char *)0xC7F3073;
    if ((unsigned char)t106 != 0) {
        if (((unsigned char)t106 != 1) && ((unsigned char)t106 != 2)) {
            return game_poll_start_button();
        }
        return game_poll_start_button_pl((t106 - 1));
    }
    return game_poll_start_button();
}

int FUN_0c054760(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)0xC7F2E3E = 0x0;
    *(unsigned char *)0xC7F2EB6 = 0x0;
    if (((*(signed char *)0xC7F3054) & 0xF) != 0) {
        if ((*(signed char *)0xC7F2F16) != 0) {
            (((struct o0_uchar *)0xC7F302E)->v) = 0x5;
            t0 = 0x5;
        } else {
            if (((*(signed char *)0xC7F3054) & 0xF) != 0) {
                FUN_0c0a2f66(0x4);
            }
            t1 = *(signed char *)0xC7F3054;
            t2 = *(signed char *)0xC7F301C;
            if ((t1 & 0xF) != 0) {
                if (((t1 & 0xF) != 1) && ((t1 & 0xF) != 2)) {
                    if ((t1 & 0xF) != 3) {
                    } else {
                        if ((signed char)t2 != 0) {
                            (((struct o0_uchar *)0xC7F302E)->v) = 0x7;
                        } else {
                            (((struct o0_uchar *)0xC7F302E)->v) = 0x5;
                        }
                    }
                } else {
                    if ((signed char)t2 == 0) {
                        t1 = *(signed char *)0xC7F3073;
                        if ((unsigned char)t1 != 0) {
                            if (((unsigned char)t1 != 1) && ((unsigned char)t1 != 2)) {
                                if ((unsigned char)t1 != 3) {
                                } else {
                                    (((struct o0_uchar *)0xC7F302E)->v) = 0x2;
                                }
                            } else {
                                if ((*(signed char *)0xC7F3071) != 0) {
                                    if ((int)(*(signed char *)((((unsigned char)((unsigned short)(t1 + 0xFF) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) > (int)0x8) {
                                        (((struct o0_uchar *)0xC7F302E)->v) = 0x4;
                                    } else {
                                        if ((*(signed char *)((0x56 + ((unsigned char)((unsigned short)(t1 + 0xFF) * (unsigned short)0x78) + 0xC7F2DF0)))) == 8) {
                                            (((struct o0_uchar *)0xC7F302E)->v) = 0x6;
                                        } else {
                                            (((struct o0_uchar *)0xC7F302E)->v) = 0x3;
                                        }
                                    }
                                } else {
                                    (((struct o0_uchar *)0xC7F302E)->v) = 0x5;
                                }
                            }
                        } else {
                            (((struct o0_uchar *)0xC7F302E)->v) = 0x2;
                        }
                    } else {
                        (((struct o0_uchar *)0xC7F302E)->v) = 0x7;
                    }
                }
            } else {
                (((struct o0_uchar *)0xC7F302E)->v) = 0x1;
            }
            (((struct o1_uchar *)0xC7F302E)->v) = 0x0;
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)0xC7F3054;
        t2 = *(signed char *)0xC7F301C;
        if ((t0 & 0xF) != 0) {
            if (((t0 & 0xF) != 1) && ((t0 & 0xF) != 2)) {
                if ((t0 & 0xF) != 3) {
                } else {
                    if ((signed char)t2 != 0) {
                        (((struct o0_uchar *)0xC7F302E)->v) = 0x7;
                    } else {
                        (((struct o0_uchar *)0xC7F302E)->v) = 0x5;
                    }
                }
            } else {
                if ((signed char)t2 == 0) {
                    t0 = *(signed char *)0xC7F3073;
                    if ((unsigned char)t0 != 0) {
                        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
                            if ((unsigned char)t0 != 3) {
                            } else {
                                (((struct o0_uchar *)0xC7F302E)->v) = 0x2;
                            }
                        } else {
                            if ((*(signed char *)0xC7F3071) != 0) {
                                if ((int)(*(signed char *)((((unsigned char)((unsigned short)(t0 + 0xFF) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) > (int)0x8) {
                                    (((struct o0_uchar *)0xC7F302E)->v) = 0x4;
                                } else {
                                    if ((*(signed char *)((0x56 + ((unsigned char)((unsigned short)(t0 + 0xFF) * (unsigned short)0x78) + 0xC7F2DF0)))) == 8) {
                                        (((struct o0_uchar *)0xC7F302E)->v) = 0x6;
                                    } else {
                                        (((struct o0_uchar *)0xC7F302E)->v) = 0x3;
                                    }
                                }
                            } else {
                                (((struct o0_uchar *)0xC7F302E)->v) = 0x5;
                            }
                        }
                    } else {
                        (((struct o0_uchar *)0xC7F302E)->v) = 0x2;
                    }
                } else {
                    (((struct o0_uchar *)0xC7F302E)->v) = 0x7;
                }
            }
        } else {
            (((struct o0_uchar *)0xC7F302E)->v) = 0x1;
        }
        (((struct o1_uchar *)0xC7F302E)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c05426a(void)
{
    int stk[3];
    register int t0;
    int t1;
    register int t5;
    register int t17;
    register int t19;
    register int t20;
    register int t27;
    register int t38;
    register int t40;
    register int t41;
    register int t6;
    int t7;
    register int t28;
    int t29;

    t0 = *(signed char *)0xC7F302F;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = *(signed char *)0xC7F3054;
            if ((t1 != 1) && (t1 != 2)) {
                (((struct o0_uchar *)0xC7F302E)->v) = 0x63;
            } else {
                (((struct o0_uchar *)0xC7F302E)->v) = 0x1;
            }
            (((struct o1_uchar *)0xC7F302E)->v) = 0x0;
            return 0x0;
        }
        if ((*(signed char *)0xC7F301C) == 0) {
            t5 = FUN_0c054114();
            if ((t5 == 0) && ((t6 = (((struct o8_short *)0xC7F302E)->v), (int)t6 <= (int)0x3C) && (t7 = *(signed char *)0xC7F3071, t7 != 0))) {
                *(unsigned char *)0xC7F306E = 0x0;
            }
        }
        t17 = (((struct o8_short *)0xC7F302E)->v);
        (((struct o8_ushort *)0xC7F302E)->v) = (t17 - 1);
        if ((int)(short)(t17 - 1) <= 0) {
            t19 = *(signed char *)0xC7F302F;
            (((struct o1_uchar *)0xC7F302E)->v) = (t19 + 0x1);
            return (t19 + 0x1);
        }
        t20 = *(signed char *)0xC7F3073;
        if ((unsigned char)t20 != 0) {
            if (((unsigned char)t20 != 1) && ((unsigned char)t20 != 2)) {
                
                return game_poll_start_button();
            }
            return game_poll_start_button_pl((t20 - 1));
        }
        return game_poll_start_button();
    }
    (((struct o1_uchar *)0xC7F302E)->v) = ((*(signed char *)0xC7F302F) + 0x1);
    (((struct o8_ushort *)0xC7F302E)->v) = 0xF0;
    fx_spawn_056e2c();
    pl_change_state(0xC7E40C4, 0x15, 0x3, 0x0);
    pl_change_state(0xC7EB394, 0x15, 0x3, 0x0);
    if ((*(signed char *)0xC7F301C) == 0) {
        t27 = FUN_0c054114();
        if ((t27 == 0) && ((t28 = (((struct o8_short *)0xC7F302E)->v), (int)t28 <= (int)0x3C) && (t29 = *(signed char *)0xC7F3071, t29 != 0))) {
            *(unsigned char *)0xC7F306E = 0x0;
        }
    }
    t38 = (((struct o8_short *)0xC7F302E)->v);
    (((struct o8_ushort *)0xC7F302E)->v) = (t38 - 1);
    if ((int)(short)(t38 - 1) <= 0) {
        t40 = *(signed char *)0xC7F302F;
        (((struct o1_uchar *)0xC7F302E)->v) = (t40 + 0x1);
        return (t40 + 0x1);
    }
    t41 = *(signed char *)0xC7F3073;
    if ((unsigned char)t41 != 0) {
        if (((unsigned char)t41 != 1) && ((unsigned char)t41 != 2)) {
            
            return game_poll_start_button();
        }
        return game_poll_start_button_pl((t41 - 1));
    }
    return game_poll_start_button();
}

int FUN_0c05499c(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)0xC7F302F;
    if (t1 != 0) {
        if (t1 != 1) {
            t2 = t1;
            if (t1 != 2) {
            } else {
                t1 = 0x1;
                if ((unsigned char)(*(signed char *)0xC7F3071) == 1) {
                    t1 = 0x0;
                }
                (((struct o13_uchar *)0xC7F306E)->v) = (*(signed char *)(((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C8)));
                if (((*(signed char *)0xC7F301C) == 0) && (t0 = *(signed char *)0xC7F4768, t0 == 0)) {
                    t0 = 0x1;
                    if ((unsigned char)(*(signed char *)0xC7F3071) == 1) {
                        t0 = 0x0;
                    }
                    FUN_0c05590c((*(signed char *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C7))));
                }
                (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                *(unsigned char *)0xC7F2EE4 = 0x8;
                (((struct o12_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o3_uchar *)0xC7F306E)->v) = ((*(signed char *)0xC7F3071) & 0xFC);
                (((struct o7_uchar *)0xC7F306E)->v) = (*(signed char *)0xC7F3074);
                t0 = *(signed char *)0xC7F3071;
                (((struct o6_uchar *)0xC7F306E)->v) = t0;
                (((struct o4_uchar *)0xC7F306E)->v) = t0;
                t2 = 0x46;
            }
            t0 = t2;
        } else {
            t1 = (((struct o10_short *)0xC7F302C)->v);
            (((struct o10_ushort *)0xC7F302C)->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                t1 = *(signed char *)0xC7F302F;
                (((struct o3_uchar *)0xC7F302C)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        bgm_stop_streams();
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        (((struct o10_ushort *)0xC7F302C)->v) = 0x1F;
        (((struct o14_uchar *)0xC7F306E)->v) = 0x1;
        FUN_0c0158e4();
        t0 = (((struct o10_short *)0xC7F302C)->v);
        (((struct o10_ushort *)0xC7F302C)->v) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            t0 = *(signed char *)0xC7F302F;
            (((struct o3_uchar *)0xC7F302C)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0cd1ea(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        t0 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 != 3) {
                        if ((unsigned char)t0 != 4) {
                            if ((unsigned char)t0 != 5) {
                                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
                                (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
                                return 0x0;
                            }
                            return ending_mode_frame(a4, a5, a6, a7);
                        }
                        return ((int (*)(void))(0xC01565E))();
                    }
                    return FUN_0c010138();
                }
                return FUN_0c010134();
            }
            return dbgedit_update(f4, f5, f6, f7, f8, f9);
        }
        return dbgmotion_update();
    }
    testmode_draw_text_table(0xC33ECEC, 0x1);
    FUN_0c0ce404(0xA, 0x7, 0x7, 0xC33F178);
    testmode_draw_text_table(0xC33ECF4, 0x2);
    testmode_move_cursor(0x8, 0x7, 0x7, 0x4);
    t0 = *(short *)0xC361BFC;
    t1 = (unsigned short)t0;
    if (((unsigned short)t0 & 4) != 0) {
        (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o5_uchar *)0xC7F2EE5)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c0a5506(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = *(signed char *)0xC7F2EE7;
    v0_0 = ((unsigned char)v0_3);
    v0_1 = (0xC7F2EE0);
    v0_4 = (0x0);
    v0_2 = (0xC7F2EE7);
    if (((unsigned char)v0_3 == 0)) goto L_C0A551E;
    if ((v0_0 == 1)) goto L_C0A552A;
    *(unsigned char *)((v0_1 + 0x6)) = ((*(signed char *)((v0_1 + 0x6))) + 0x1);
    *(unsigned char *)((v0_1 + 0x7)) = v0_4;
    v0_0 = (v0_4);
    L_C0A55C2:;
    return v0_0;
    L_C0A552A:;
    v0_5 = *(signed char *)(((v0_1 + 0x8) + 0x0));
    v0_0 = ((unsigned char)v0_5);
    v0_2 = ((v0_1 + 0x8));
    v0_3 = (0xC7F302C);
    if (((unsigned char)v0_5 == 0)) goto L_C0A5544;
    if ((v0_0 == 1)) goto L_C0A556C;
    if ((v0_0 == 2)) goto L_C0A55A8;
    goto L_C0A55C2;
    L_C0A55A8:;
    *(unsigned char *)((v0_1 + 0x7)) = ((*(signed char *)((v0_1 + 0x7))) + 0x1);
    *(unsigned char *)((v0_1 + 0x8)) = v0_4;
    v0_0 = (v0_4);
    goto L_C0A55C2;
    L_C0A556C:;
    v0_2 = *(short *)((v0_3 + 0xA));
    *(unsigned short *)((v0_3 + 0xA)) = (v0_2 - 1);
    v0_0 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0A55C2;
    v0_0 = *(signed char *)((v0_1 + 0x8));
    *(unsigned char *)((v0_1 + 0x8)) = (v0_0 + 0x1);
    v0_0 = ((v0_0 + 0x1));
    goto L_C0A55C2;
    L_C0A5544:;
    v0_1 = ((*(int *)0xC7E4084));
    L_C0A554C:;
    if (((*(int *)((v0_1 + 0x10))) != 0xC0A6CAE)) goto L_C0A554A;
    v0_4 = *(signed char *)((v0_1 + 0x8));
    v0_0 = (v0_4);
    if ((v0_4 != 2)) goto L_C0A55C2;
    v0_1 = *(signed char *)((v0_1 + 0x9));
    v0_0 = (v0_1);
    if ((v0_1 != 3)) goto L_C0A55C2;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned short *)((v0_3 + 0xA)) = 0x3C;
    v0_0 = (0x3C);
    goto L_C0A55C2;
    L_C0A554A:;
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    goto L_C0A554C;
    L_C0A551E:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned char *)((v0_1 + 0x8)) = v0_4;
    goto L_C0A552A;
}

int FUN_0c0cd028(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        return FUN_0c0cd0de(0xC7F2EE0, 0xC7F2EE4, a6, a7);
    }
    *(unsigned char *)0xC7F2EE4 = ((*(signed char *)0xC7F2EE4) + 0x1);
    t0 = *(signed char *)0xC7F31B6;
    if ((unsigned char)t0 == 1) {
        (((struct o0_uchar *)0xC4948A0)->v) = ((*(signed char *)0xC7F31B7) + 0xFF);
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC4948A0)->v) = (t0 + 0x7);
        t1 = (t0 + 0x7);
    }
    if ((*(signed char *)0xC7F31B5) != 0) {
        (((struct o0_uchar *)0xC4948A0)->v) = 0x11;
    }
    if ((*(signed char *)0xC7F2F0B) != 0) {
        (((struct o0_uchar *)0xC4948A0)->v) = 0x12;
    }
    (((struct o1_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F31B4);
    (((struct o2_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F0D);
    (((struct o3_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F0C);
    (((struct o4_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F0E);
    (((struct o5_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F08);
    (((struct o6_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F0F);
    (((struct o7_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F10);
    (((struct oA_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F11);
    (((struct oB_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F12);
    (((struct oC_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F13);
    (((struct oD_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F14);
    (((struct oE_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F15);
    (((struct oF_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F16);
    (((struct o10_uchar *)0xC4948A0)->v) = (*(signed char *)0xC7F2F17);
    return FUN_0c0cd0de(0xC7F2EE0, 0xC4948B0, 0xC4948A0, t1);
}

int FUN_0c0adaa6(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            return obj_set_mode_owner(a4, 0x2, (*(signed char *)((a4 + 0x3))));
        }
    }
    t0 = FUN_0c0ad7a4(a4);
    if ((signed char)t0 == 0) {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
            stage_type01_spawn_ground_fx(a4);
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    return (signed char)t0;
}

int FUN_0c0ae3ec(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    if (((int)((int)(((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1) % (int)0x2)) != 0) {
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 3.0f;
    } else {
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)0xC0AE558);
    }
    if (((((struct oEC_short *)(a4))->v)) == 15) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    return 0xEC;
}

int FUN_0c0548e4(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F302F;
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c0a502e();
            (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            pl_add_gauge_by_percent((*(signed char *)0xC7F304D));
            pl_add_gauge_by_value((*(short *)(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)0xC7F3073) + 0xFFFF) * (unsigned short)0x72D0) + 0xC7EB298))));
            return pl_add_gauge_random();
        }
    } else {
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        (((struct o10_ushort *)0xC7F302C)->v) = 0x1F;
        bgm_stop_streams();
        *(unsigned char *)0xC7F3082 = 0x1;
        FUN_0c0158e4();
    }
    t0 = (((struct o10_short *)0xC7F302C)->v);
    (((struct o10_ushort *)0xC7F302C)->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        t0 = *(signed char *)0xC7F302F;
        (((struct o3_uchar *)0xC7F302C)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0ae682(int a4)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x78) {
        return obj_set_mode_owner(a4, 0x3, 0x2);
    }
    FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
    FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0xB6);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x16C);
    t0 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t0 + 0x222);
    return (t0 + 0x222);
}

int FUN_0c077824(int a4)
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
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC07793C)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC07793C)->v));
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x9);
        snd_play_char_voice(a4, 0x4);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0adf60(int a4)
{
    register int t0;
    register float u0;

    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((short)(t0 + 0x1) == 2) {
            return obj_set_mode_owner(a4, 0x0, (*(signed char *)((a4 + 0x3))));
        }
        u0 = ((((struct o3C_float *)(a4))->v));
        u0 *= -0.5f;
        (((struct o3C_float *)(a4))->v) = u0;
    }
    FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
    FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0xB6);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x16C);
    t0 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t0 + 0x222);
    return (t0 + 0x222);
}

int FUN_0c0ad91c(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            return obj_set_mode_owner(a4, 0x2, (*(signed char *)((a4 + 0x3))));
        }
    }
    t0 = FUN_0c0ad7a4(a4);
    if ((signed char)t0 == 0) {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
            stage_type01_spawn_ground_fx(a4);
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    return (signed char)t0;
}

int FUN_0c0adc60(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        t0 = pl_get_hit_count_of_opponent(a4);
        if ((signed char)t0 != 0) {
            return obj_set_mode_owner(a4, 0x2, (*(signed char *)((a4 + 0x3))));
        }
    }
    t0 = FUN_0c0ad7a4(a4);
    if ((signed char)t0 == 0) {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o3C_float *)(a4))->v) = 0.0f;
            stage_type01_spawn_ground_fx(a4);
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    return (signed char)t0;
}

int FUN_0c0ad2f2(int a4)
{
    register int t5;

    if (((((struct o274_float *)(a4))->v)) > 0.0f) {
        if ((*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x8))) == 1) {
            t5 = FUN_0c0ad254(a4);
            if ((signed char)t5 != 0) {
                (((struct o2D9_uchar *)(a4))->v) = (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x8)));
            }
        }
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    if ((*(signed char *)((a4 + 0x2D9))) == 0) {
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        return FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
    }
    return 0x2D9;
}

int FUN_0c054886(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F302F;
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c0a502e();
            (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            t0 = 0x0;
        } else {
            t1 = (((struct o10_short *)0xC7F302C)->v);
            (((struct o10_ushort *)0xC7F302C)->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                t1 = *(signed char *)0xC7F302F;
                (((struct o3_uchar *)0xC7F302C)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o3_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302F) + 0x1);
        bgm_stop_streams();
        (((struct o10_ushort *)0xC7F302C)->v) = 0x1F;
        *(unsigned char *)0xC7F3082 = 0x1;
        FUN_0c0158e4();
        t0 = (((struct o10_short *)0xC7F302C)->v);
        (((struct o10_ushort *)0xC7F302C)->v) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            t0 = *(signed char *)0xC7F302F;
            (((struct o3_uchar *)0xC7F302C)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0df2e0(float f4)
{
    register float u0;
    register int t1;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    u0 = (f4 * f4);
    if (_builtin_sqrtf((1.0f - u0)) != 0.0f) {
        return math_atan_angle16((f4 / _builtin_sqrtf((1.0f - u0))));
    }
    t1 = 0xC000;
    if (f4 > 0.0f) {
        t1 = 0x4000;
    }
    return t1;
}

int FUN_0c0546c6(void)
{
    register int t0;

    t0 = FUN_0c01d7ee();
    if (t0 != 0) {
        if (t0 != 1) {
            
            return FUN_0c0d48ea(0x1);
        }
        (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
        (((struct o6_uchar *)0xC7F306E)->v) = 0x0;
        (((struct o4_uchar *)0xC7F306E)->v) = 0x0;
        (((struct o3_uchar *)0xC7F306E)->v) = 0x3;
        *(unsigned char *)0xC7F2E3C = 0x1;
        *(unsigned char *)0xC7F2EB4 = 0x1;
        *(unsigned char *)0xC7EB395 = 0x0;
        *(unsigned char *)0xC7E40C5 = 0x0;
        return 0x0;
    }
    return t0;
}

int FUN_0c0adcf4(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEC_short *)(a4))->v);
    if (((int)((int)(((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1) % (int)0x2)) != 0) {
        *(unsigned int *)((a4 + 0x2C)) = 0x38E;
    } else {
        *(unsigned int *)((a4 + 0x2C)) = 0xFC73;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x16C);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((short)(t0 + 0x1) == 15) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c054ab8(void)
{
    (((struct o0_uchar *)0xC7F302D)->v) = 0x3;
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    pl_add_gauge_by_percent((*(signed char *)0xC7F304D));
    pl_add_gauge_by_value((*(short *)(((unsigned short)((unsigned short)((unsigned char)(*(signed char *)0xC7F3073) + 0xFFFF) * (unsigned short)0x72D0) + 0xC7EB298))));
    return pl_add_gauge_random();
}

int FUN_0c0ae224(int a4)
{
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)(0xC339FC0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC339FC0); }
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}

int FUN_0c077db2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC077CC8))(a4, a5, a6, a7);
        }
        return pl_gunrock_mode08_09_update_v1(a4);
    }
    return pl_gunrock_mode08_09_update_v0(a4);
}

int FUN_0c0ad744(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0AD670))(a4, a5, a6, a7);
    }
    return stage_type01_init_thrown_from_owner(a4);
}

int FUN_0c054870(void)
{
    (((struct o0_uchar *)0xC7F302C)->v) = 0x2;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o1F_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F304B) + 0x1);
    return 0x1F;
}

int FUN_0c0adce2(int a4)
{
    register int t0;

    *(unsigned char *)((a4 + 0x3)) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0546b6(void)
{
    (((struct o0_uchar *)0xC7F302E)->v) = ((*(signed char *)0xC7F302E) + 0x1);
    (((struct o1_uchar *)0xC7F302E)->v) = 0x0;
    return FUN_0c01d31a();
}

int FUN_0c054af6(void)
{
    (((struct o0_uchar *)0xC7F302D)->v) = 0x4;
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302D)->v) = 0x0;
    return 0x0;
}

int FUN_0c0ae4b2(int a4)
{
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o107_uchar *)(a4))->v) = 0x1;
    return 0x107;
}

int FUN_0c0add38(int a4)
{
    return obj_set_mode_owner(a4, 0x0, 0x2);
}

int FUN_0c0ae3e4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0ae488(int a4)
{
    return obj_set_mode_owner(a4, 0x0, 0x2);
}

int FUN_0c097e76(int a4)
{
    return pl_end_action_reset(a4);
}

void FUN_0c0ae258(void)
{
    
}

int FUN_0c0d51d0(void)
{
    return FUN_0c0d51d2(0xC7F2EE0);
}
