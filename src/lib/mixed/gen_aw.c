/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7198_short { char p[0x7198]; short v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7244_uint { char p[0x7244]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int staffroll_spawn_line(int, int);
int opt_page1_obj_in_mask(int);
int opt_page3_obj_in_mask(int);
int FUN_0c026200(int, int);
float FUN_0c02651e(int);
int fx_spawn_table_burst(int, int, float);
int fx_tick_model_effect(int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int math_mat_transform_point(int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int pl_mode01_03_update(int);
int pl_mode05_update(int);
int pl_mode06_update(int);
int pl_mode07_update(int);
int pl_mode10_update(int, int, int, int);
int pl_mode08_update(int, int, int, int);
int pl_mode09_update(int, int, int, int);
int pl_mode11_update(int);
int pl_mode12_update(int, int, int, int);
int pl_mode13_update(int);
int pl_mode14_update(int);
int pl_mode15_update(int);
int pl_garuda_mode04_update(int);
int pl_valgas_mode04_update(int);
int pl_timer_disable(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int FUN_0c09c2ce(int, int, int, int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int stage_obj_load_layout_pos(int);
int obj_set_mode_owner(int, int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int stage_obj_on_break(int);
int stage_type11_scroll_uv(int);
int stage_gimmick_28_spawn_b(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int nlMultiMatrix(int);
int FUN_0c0e3510(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0eb5dc(int, int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c108734(void);
int FUN_0c10874c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int memcpy(int, int, int);
int thunk_FUN_0c062242(int);
int opt_page3_tick_bg_scroll(int a4);
int pl_enter_state_41(int a4);
int stage_gimmick_28_spawn(int a4);
int opt_page1_tick_bg_scroll(int a4);
int fx_spawn_034bfc(int a4);
int stage_gimmick_14_spawn(int a4);
int gdFsDaPauseG(void);
int stage_gimmick_23_spawn(int a4);
int stage_gimmick_24_spawn(int a4);
int stage_gimmick_25_spawn(int a4);
int stage_gimmick_34_spawn(int a4);
int gdDcfRepStat_(int a4, int a5);
int FUN_0c10893a(int a4, int a5, int a6, int a7);
int pl_enter_state_37(int a4, int a5);
int pl_falcon_special0_start(int a4);
int FUN_0c08c210(int a4);
int pl_valgas_attack_update(int a4, int a5, int a6, int a7);
int FUN_0c0aa93c(int a4, int a5, int a6, int a7);
int nlSysMetricsGetFrameBufferUser(int a4);
int FUN_0c028dec(int a4, int a5, int a6, int a7);
int fx_tick_03dca8(int a4, int a5, int a6, int a7);
int pl_garuda_attack_update(int a4, int a5, int a6, int a7);
int stage_gimmick_09_spawn(void);
int stage_gimmick_06_spawn(int a4);
int FUN_0c0e2590(float f4, float f5, float f6, float f7, float f8, float f9);
int fx_spawn_03743c(int a4);
int fx_tick_0357e0(int a4, int a5, int a6, int a7, float f4);
int ai_op2(int a4);
int pl_special_a_start(int a4);
int pl_special_b_start(int a4);
int FUN_0c0497fc(int a4);
int FUN_0c0e2650(float f4, float f5, float f6, float f7, float f8, float f9);
int pl_kraken_mode13_update_v1(int a4);
int cam_request_mode_19(int a4, int a5);
int stage_gimmick_21_update_b(int a4, int a5, int a6, int a7);
int stage_type11_update(int a4, int a5, int a6, int a7);
void FUN_0c0f1aec(int a4, int a5, int a6, int a7);
int staffroll_task_update(int a4, int a5, int a6, int a7);
int FUN_0c0a7320(int a4, int a5, int a6, int a7);

int gdFsDaPauseG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC346BD8)))->v)) != 0) && (t3 = *(int *)0xC346BD8, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC7FE6FC;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int gdDcfRepStat_(int a4, int a5)
{
    int stk[4];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = FUN_0c0eb5dc(v0_0, ((int)stk + 0));
    v0_2 = (v0_4);
    v0_1 = (v0_3);
    v0_0 = (v0_4);
    v0_3 = ((*(int *)(((int)stk + 8))));
    if ((v0_4 == 0)) goto L_C0FE142;
    if ((v0_2 == 1)) goto L_C0FE146;
    if ((v0_2 == 2)) goto L_C0FE150;
    if ((v0_2 == 3)) goto L_C0FE156;
    if ((v0_2 == 4)) goto L_C0FE15A;
    if ((v0_2 == -1)) goto L_C0FE15E;
    L_C0FE1C2:;
    return v0_0;
    L_C0FE15E:;
    *(unsigned int *)((v0_1 + 0x4)) = (*(int *)(((int)stk + 4)));
    v0_3 = *(int *)(((int)stk + 0));
    v0_2 = (v0_3);
    v0_0 = (0x5);
    if ((v0_3 == 0)) goto L_C0FE192;
    if ((v0_2 == 1)) goto L_C0FE198;
    if ((v0_2 == 2)) goto L_C0FE19C;
    if ((v0_2 == 3)) goto L_C0FE1A0;
    if ((v0_2 == 4)) goto L_C0FE1A4;
    if ((v0_2 == 5)) goto L_C0FE1A8;
    if ((v0_2 == 6)) goto L_C0FE1AC;
    if ((v0_2 == 7)) goto L_C0FE1B0;
    if ((v0_2 == 11)) goto L_C0FE1B4;
    if ((v0_2 == 16)) goto L_C0FE1B8;
    v0_2 = (0xFFFFFFE6);
    L_C0FE1C0:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_C0FE1C2;
    L_C0FE1B8:;
    v0_2 = (0xFFFFFFDC);
    L_C0FE1BA:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_C0FE1C2;
    L_C0FE1B4:;
    v0_2 = (0xFFFFFFDD);
    goto L_C0FE1C0;
    L_C0FE1B0:;
    v0_2 = (0xFFFFFFDE);
    goto L_C0FE1BA;
    L_C0FE1AC:;
    v0_2 = (0xFFFFFFDF);
    goto L_C0FE1C0;
    L_C0FE1A8:;
    v0_2 = (0xFFFFFFE0);
    goto L_C0FE1BA;
    L_C0FE1A4:;
    v0_2 = (0xFFFFFFE1);
    goto L_C0FE1C0;
    L_C0FE1A0:;
    v0_2 = (0xFFFFFFE2);
    goto L_C0FE1BA;
    L_C0FE19C:;
    v0_2 = (0xFFFFFFE3);
    goto L_C0FE1C0;
    L_C0FE198:;
    v0_2 = (0xFFFFFFE4);
    goto L_C0FE1BA;
    L_C0FE192:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFE5;
    goto L_C0FE1C2;
    L_C0FE15A:;
    v0_0 = (0x43);
    goto L_C0FE1C2;
    L_C0FE156:;
    v0_0 = (0x41);
    goto L_C0FE1C2;
    L_C0FE150:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    v0_0 = (0x1);
    goto L_C0FE1C2;
    L_C0FE146:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    *(unsigned int *)((v0_1 + 0x8)) = (*(int *)(((int)stk + 12)));
    v0_0 = (0x4);
    goto L_C0FE1C2;
    L_C0FE142:;
    v0_0 = (0x0);
    goto L_C0FE1C2;
}

int FUN_0c10893a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c108734();
    if (a5 == 1) {
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
        t1 = *(int *)((a4 + 0x1C));
        t2 = *(int *)((a6 + 0x0));
        if ((int)(t2 - t1) < (int)(*(int *)((a4 + 0x24)))) {
            t3 = *(int *)((a6 + 0x4));
            t4 = *(int *)((a4 + 0x24));
            t5 = (t4 - (t2 - t1));
            if ((int)t3 < (int)(t4 - (t2 - t1))) {
                t5 = t3;
            }
            memcpy((((*(int *)((a4 + 0x20))) + (t2 - t1)) + (*(int *)((a4 + 0x1C)))), (*(int *)((a6 + 0x0))), t5);
        }
        t1 = *(int *)((a4 + 0x1C));
        t2 = *(int *)((a6 + 0x0));
        t3 = *(int *)((a6 + 0x4));
        if ((int)((t2 - t1) + t3) > (int)(*(int *)((a4 + 0x20)))) {
            t4 = *(int *)((a6 + 0x4));
            t5 = *(int *)((a4 + 0x20));
            t6 = (((t2 - t1) + t3) - t5);
            if ((int)t4 < (int)(((t2 - t1) + t3) - t5)) {
                t6 = t4;
            }
            t4 = *(int *)((a4 + 0x1C));
            memcpy(t4, (t4 + (((t2 - t1) + t3) - t6)), t6);
        }
    } else {
        if (a5 == 0) {
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return FUN_0c10874c(a4, t0);
}

int FUN_0c0e2590(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[16];
    register float u0;
    register float u1;

    *(float *)(((int)stk + 0)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 36)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 40)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 44)) = -1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    u0 = (f8 * f9);
    u1 = (u0 * (1.0f + 1.0f));
    u1 = -u1;
    *(float *)(((int)stk + 56)) = (u1 / (f9 - f8));
    *(float *)(((int)stk + 60)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f8;
    (((struct o4_float *)0xC7FD63C)->v) = f9;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f8);
    (((struct o18_float *)0xC7FCC8C)->v) = f8;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f8);
    (((struct o1C_float *)0xC7FCC8C)->v) = f9;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f8);
    nlMultiMatrix(((int)stk + 0));
    return (FUN_0c0e3510());
}

int FUN_0c0e2650(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[16];
    register float u0;

    *(float *)(((int)stk + 0)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 36)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 40)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    u0 = (f8 * f9);
    *(float *)(((int)stk + 56)) = ((u0 * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 60)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f8;
    (((struct o4_float *)0xC7FD63C)->v) = f9;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f8);
    (((struct o18_float *)0xC7FCC8C)->v) = f8;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f8);
    (((struct o1C_float *)0xC7FCC8C)->v) = f9;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f8);
    nlMultiMatrix(((int)stk + 0));
    return (FUN_0c0e3510());
}

void FUN_0c0f1aec(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((a6 & 0x1F) != 0) {
        } else {
            if ((0x1F & a5) != 0) {
            } else {
                if (((((struct o48_short *)(a4))->v)) != 4) {
                } else {
                    t0 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0xC)))))((*(int *)((a4 + 0x3C))), a6, a5, a7);
                    if (t1 == 0) {
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        *(unsigned int *)((a4 + 0x20)) = a5;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))(t1, a5, a6, a7);
                    }
                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                }
            }
        }
    }
}

