/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
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
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o721B_uchar { char p[0x721B]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ui_draw_text_stub(int, int, float, float, float, float);
int fx_spawn_03cb28(int, int);
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_button_jump_pressed(int);
int pl_end_action_choose_state(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int);
int pl_change_state(int, int, int, int);
int snd_play_char_voice(int, int);
int snd_play_stage_obj_se(int, int, int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
extern int _quick_odd_mvn();
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int buIsFormat(int);
int check_fat_xross(int, int);
int get_fat(int, int);
int lsfts(int, int, int);
int memcpy(int, int, int);
int mvito4b(int, int);
int sprintf(int, int, ...);
int thunk_math_mat_get_translate(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_memcmp(int, int);
int vmsfs_unmount(int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int nl_display_triangle_spd(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c10274c(int a4, int a5);
int fx_spawn_038a0c(int a4, int a5);
int stage_gimmick_28_spawn_c(int a4);
int fx_spawn_0332a0(int a4);
int fx_tick_0372a8(int a4);
int pl_state17_phase2(int a4, int a5, int a6);
int pl_state04_init(int a4);
int stage_gimmick_21_spawn(int a4);
int stage_gimmick_28_spawn_b(int a4);
int FUN_0c0eec98(int a4, int a5, int a6, float f4, float f5);
int FUN_0c10563c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c105438(int a4, int a5, int a6, int a7, int a8, int a9);
int fx_spawn_03c904(int a4, int a5);
int fx_spawn_03ed0c(int a4);
int obj_spawn_05ca54(int a4);
int stage_gimmick_21_spawn_b(int a4, int a5);
int rank_screen_1p_points(void);
int FUN_0c0e4454(float f4, float f5, float f6, float f7);
int FUN_0c01b274(int a4);
int FUN_0c02067e(int a4, int a5, int a6, int a7);
int fx_spawn_037d88(int a4, int a5);
int fx_spawn_03598c(int a4);
int fx_spawn_on_player_part(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int pl_rouge_state21_update(int a4);

int FUN_0c10274c(int a4, int a5)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_2 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 * 0x148);
    v0_0 = (((v0_4 * 0x148) + 0xC80DBC8));
    v0_1 = (v0_4);
    if (((*(signed char *)((((v0_4 * 0x148) + 0xC80DBC8) + 0x2))) == 0)) goto L_C102798;
    v0_3 = (vmsio_isready(v0_1)) != 0;
    if (v0_3) goto L_C102782;
    vmsfs_unmount(v0_1);
    L_C102798:;
    v0_0 = (0xFFFFFF01);
    L_C102852:;
    return v0_0;
    L_C102782:;
    v0_3 = (vmsio_ismount(v0_1)) == 0;
    if (v0_3) goto L_C102798;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC80DBC8) + 0x8))) != 0)) goto L_C10279E;
    goto L_C102798;
    L_C10279E:;
    v0_2 = (int)(buIsFormat(v0_1)) >= 0;
    if (v0_2) goto L_C1027AE;
    v0_0 = (0xFFFFFF03);
    goto L_C102852;
    L_C1027AE:;
    v0_3 = (0x0);
    v0_2 = (0xFFFC);
    v0_4 = (0x0);
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C1027FC;
    v0_4 = (v0_4);
    L_C1027CE:;
    if (!(((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x38)))))) goto L_C1027D6;
    v0_3 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    if (v0_3) goto L_C1027D6;
    v0_4 = ((v0_4 + 0x1));
    goto L_C1027CE;
    L_C1027D6:;
    v0_3 = (v0_4);
    L_C102850:;
    v0_0 = (v0_3);
    goto L_C102852;
    L_C1027FC:;
    if (((*(int *)0xC15B0AC) == 0)) goto L_C102832;
    v0_4 = (v0_4);
    L_C102826:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C102808;
    goto L_C102850;
    L_C102808:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    if (v0_5) goto L_C102824;
    v0_5 = (int)(check_fat_xross(v0_1, v0_4)) < 0;
    if (v0_5) goto L_C102824;
    v0_3 = ((v0_3 + 0x1));
    L_C102824:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C102826;
    L_C102832:;
    v0_4 = (v0_4);
    L_C102848:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C102836;
    goto L_C102850;
    L_C102836:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C102848;
    v0_3 = ((v0_3 + 0x1));
    goto L_C102848;
}

int FUN_0c0eec98(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t5;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t25;

    (((struct o4_float *)(((int)stk + 0)))->v) = f5;
    (((struct o8_float *)(((int)stk + 0)))->v) = f4;
    t1 = 0x1;
    if (((unsigned short)(*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0))) & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    *(unsigned short *)((a5 + 0x0)) = (*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0)));
    t4 = *(short *)((a5 + 0x0));
    t5 = _builtin_get_fpscr();
    *(unsigned short *)((a5 + 0x0)) = ((int)(t4 & 0x7FF0) >> 4);
    _builtin_set_fpscr((t5 & 0xFFE7FFFF));
    mvito4b(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 2));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memcpy(a6, (((int)stk + 0) + 0x1), 0x3);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    mvito4b(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 6));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memcpy((a6 + 0x3), ((int)stk + 0), 0x4);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    lsfts(a6, 0x7, 0x3);
    if ((int)(*(short *)((a5 + 0x0))) > 0) {
        t16 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t16 | 0x80);
        t25 = (t16 | 0x80);
    } else {
        t17 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t17 + 0x1);
        t18 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t18 & 0x7F);
        t19 = (t18 & 0x7F);
        t20 = (t17 + 0x1);
        for (;;) {
            if (((unsigned char)(*(signed char *)((a6 + 0x0))) & 0x80) != 0) {
                break;
            }
            t20 = (_builtin_get_fpscr());
            t20 = (t20 & 0xFFE7FFFF);
            _builtin_set_fpscr(t20);
            t19 = (lsfts(a6, 0x7, 0x1));
            t20 = (*(short *)((a5 + 0x0)));
            t20 = (t20 - 1);
            *(unsigned short *)((a5 + 0x0)) = t20;
        }
        t25 = t19;
    }
    return t25;
}

int FUN_0c10563c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_2 = vmsfs_xcreate(v0_6, (*(int *)(((int)stk + 4))), a8, ((int)stk + 0));
    v0_0 = (v0_0);
    v0_5 = (v0_2);
    v0_1 = (v0_6);
    if (((int)v0_2 < 0)) goto L_C105716;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = a9;
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x34)) = ((v0_0 << 1) + (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC347230))));
    v0_2 = (0x0);
    v0_4 = (v0_3);
    v0_3 = (0x200);
    v0_6 = (((v0_1 * 0x148) + 0xC80DBC8));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C1056B6;
    L_C1056A0:;
    v0_6 = vmsfs_xwrite1((*(int *)(((int)stk + 0))), v0_4);
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C10570E;
    v0_5 = (unsigned int)(v0_2 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + v0_3));
    if (v0_5) goto L_C1056A0;
    L_C1056B6:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    v0_2 = vmsfs_fopen(v0_1, (*(int *)(((int)stk + 4))), ((int)stk + 0));
    v0_5 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C105716;
    v0_2 = ((*(int *)(((int)stk + 8))));
    v0_4 = (0x0);
    v0_6 = (((((v0_1 << 8) << 2) << 1) + 0xC80E628));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C10570C;
    v0_1 = (0xFFFFFF10);
    L_C1056E6:;
    v0_7 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_6);
    v0_5 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C10570E;
    v0_5 = (vmsfs_memcmp(v0_6, v0_2)) == 0;
    if (v0_5) goto L_C105704;
    v0_5 = (v0_1);
    L_C10570E:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C105716:;
    return v0_5;
    L_C105704:;
    v0_5 = (unsigned int)(v0_4 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + v0_3));
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C1056E6;
    L_C10570C:;
    v0_5 = (0x0);
    goto L_C10570E;
}

int FUN_0c105438(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_2 = vmsfs_fcreate(v0_6, (*(int *)(((int)stk + 4))), a8, ((int)stk + 0));
    v0_0 = (v0_0);
    v0_5 = (v0_2);
    v0_1 = (v0_6);
    if (((int)v0_2 < 0)) goto L_C105512;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = a9;
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC80DBC8) + 0x34)) = ((v0_0 << 1) + (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC347230))));
    v0_2 = (0x0);
    v0_4 = (v0_3);
    v0_3 = (0x200);
    v0_6 = (((v0_1 * 0x148) + 0xC80DBC8));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C1054B2;
    L_C10549C:;
    v0_6 = vmsfs_fwrite1((*(int *)(((int)stk + 0))), v0_4);
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C10550A;
    v0_5 = (unsigned int)(v0_2 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + v0_3));
    if (v0_5) goto L_C10549C;
    L_C1054B2:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    v0_2 = vmsfs_fopen(v0_1, (*(int *)(((int)stk + 4))), ((int)stk + 0));
    v0_5 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C105512;
    v0_2 = ((*(int *)(((int)stk + 8))));
    v0_4 = (0x0);
    v0_6 = (((((v0_1 << 8) << 2) << 1) + 0xC80E628));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C105508;
    v0_1 = (0xFFFFFF10);
    L_C1054E2:;
    v0_7 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_6);
    v0_5 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C10550A;
    v0_5 = (vmsfs_memcmp(v0_6, v0_2)) == 0;
    if (v0_5) goto L_C105500;
    v0_5 = (v0_1);
    L_C10550A:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C105512:;
    return v0_5;
    L_C105500:;
    v0_5 = (unsigned int)(v0_4 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + v0_3));
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C1054E2;
    L_C105508:;
    v0_5 = (0x0);
    goto L_C10550A;
}

int FUN_0c0e4454(float f4, float f5, float f6, float f7)
{
    int stk[4];
    register float u2;
    register float u4;
    register float u6;
    register float u8;
    register float u10;
    register float u14;
    register float u16;
    register float u18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;

    (((struct oC_float *)(((int)stk + 0)))->v) = f4;
    (((struct o8_float *)(((int)stk + 0)))->v) = f5;
    (((struct o4_float *)(((int)stk + 0)))->v) = f6;
    *(float *)(((int)stk + 0)) = f7;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 255.0f);
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 255.0f);
    u2 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 4)) = (u2 * 255.0f);
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 255.0f);
    u4 = *(float *)(((int)stk + 12));
    u6 = u4;
    if (!(2.14748365e+09f > u4)) {
        u6 = (u4 - (2.14748365e+09f + 2.14748365e+09f));
    }
    u8 = *(float *)(((int)stk + 8));
    u10 = u8;
    if (!(2.14748365e+09f > u8)) {
        u10 = (u8 - (2.14748365e+09f + 2.14748365e+09f));
    }
    u14 = (u2 * 255.0f);
    if (!(2.14748365e+09f > (u2 * 255.0f))) {
        u14 = (((u2 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u16 = *(float *)(((int)stk + 0));
    u18 = u16;
    if (!(2.14748365e+09f > u16)) {
        u18 = (u16 - (2.14748365e+09f + 2.14748365e+09f));
    }
    t20 = (int)u6;
    if ((unsigned int)(int)u6 > (unsigned int)0xFF) {
        t20 = 0xFF;
    }
    t22 = (int)u10;
    if ((unsigned int)(int)u10 > (unsigned int)0xFF) {
        t22 = 0xFF;
    }
    t24 = (int)u14;
    if ((unsigned int)(int)u14 > (unsigned int)0xFF) {
        t24 = 0xFF;
    }
    t26 = (int)u18;
    if ((unsigned int)(int)u18 > (unsigned int)0xFF) {
        t26 = 0xFF;
    }
    return ((((((t20 << 8) | t22) << 8) | t24) << 8) | t26);
}

