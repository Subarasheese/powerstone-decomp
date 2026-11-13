/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o72A4_short { char p[0x72A4]; short v; };
struct o72AC_uchar { char p[0x72AC]; unsigned char v; };
struct o72BC_short { char p[0x72BC]; short v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o72BC_ushort { char p[0x72BC]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c02e00a(int);
int FUN_0c02f328(int);
int FUN_0c032262(int, int);
int fx_spawn_04b2d4(int, int, int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0634b4(int);
int pl_valgas_play_motion_sounds(int);
int ai_difficulty_tier(void);
int ai_dist_class(int);
int FUN_0c08ee66(int);
int pl_hitreact_01_phase0(int);
int pl_hitreact_01_phase1(int);
int pl_hitreact_01_phase2(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c09c782(int);
int pl_mash_reduce_counter(int, int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_gravity(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_landed(int);
int pl_no_ground(int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int FUN_0c0a2666(int, int);
int pl_change_state(int, int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int, int);
int FUN_0c0ac640(int);
int fx_calc_orbit_position(int, int, float);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rsqrt_float(float);
float math_rand_float(void);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
extern int FUN_0c0e09f0();
int nlStoreMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2260(int, int, int);
int _divls(void);
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0fcea0(int, int, int, int);
int vmsfs_unmount(int);
int FUN_0c10a2e0(int, int, int);
int FUN_0c10b5f2(int);
extern int kmiCopyToFrameBuffer();
int vmsio_isready(int);
int vmsio_ismount(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int pl_falcon_attack_kind24_phase1(int a4);
int FUN_0c041574(int a4);
float stage_type02_start_thrown(int a4);
int pl_state13_update(int a4);
int pl_wangtang_special2_phase0(int a4);
int FUN_0c0dcf10(int a4);
int pl_mode15_cls14_f1_phase2(int a4);
int FUN_0c0e23b0(int a4, int a5, int a6, int a7);
int FUN_0c0e2450(int a4, int a5, int a6, int a7);
int fx_tick_04b1f0(int a4);
int FUN_0c09dcd2(int a4, int a5);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
int FUN_0c109382(int a4, int a5, int a6);
int FUN_0c0258ae(int a4, int a5);
int ai_op61(int a4, float f4);
int FUN_0c06f56c(int a4);
int ai_reaction_mode0(int a4, int a5);
int pl_enter_state_18(int a4);
int nlGetNormalCalcMatrix(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int stage_gimmick_30_update(int a4, float f4, float f5);
int nlSysMetricsGetFrameBuffer(int a4);
int FUN_0c02e092(int a4);
int fx_tick_038a0c(int a4);
int ai_op9_goto_script(int a4);
int pl_falcon_attack_kind24_phase3(int a4);
int pl_jack_mode11_update(int a4, int a5, int a6, int a7);
int pl_valgas_frame_hook(int a4);
int fx_update_06(int a4, float f4);
int FUN_0c0fc99e(int a4, int a5, int a6, int a7);
int pl_falcon_state11_update(int a4);
int pl_hitreact_01_02_update(int a4);
int stage_gimmick_29_update(int a4);
int FUN_0c104168(int a4, int a5);
int item_tick_falling(int a4, int a5, int a6, int a7);
int pl_garuda_victim_phase5(int a4);
int FUN_0c08740a(int a4);

int FUN_0c0e23b0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 4)) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    FUN_0c0e2260((((int)stk + 0) + 0xC), ((int)stk + 0), a7);
    t13 = FUN_0c0e2220(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = math_rsqrt_float(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    (((struct o4_float *)(a7))->v) = (((((struct o4_float *)(a7))->v)) * t14);
    (((struct o8_float *)(a7))->v) = (((((struct o8_float *)(a7))->v)) * t14);
    return 0x1;
}

int FUN_0c0e2450(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 4)) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    FUN_0c0e2260(((int)stk + 0), (((int)stk + 0) + 0xC), a7);
    t13 = FUN_0c0e2220(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = math_rsqrt_float(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    (((struct o4_float *)(a7))->v) = (((((struct o4_float *)(a7))->v)) * t14);
    (((struct o8_float *)(a7))->v) = (((((struct o8_float *)(a7))->v)) * t14);
    return 0x1;
}

int gdFsDaGetInfoG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x3C)))))(0x0, 0x64, ((*(int *)0xC346BD8) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0x7;
            *(unsigned int *)((t0 + 0x8)) = a4;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int nlGetNormalCalcMatrix(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[18];
    register int t2;
    register int t4;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (a4 == 0) {
        t4 = nlStoreMatrix(0x0);
        nlStoreMatrix((((int)stk + 0) + 0x8));
    } else {
        t2 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c0e09f0))((((int)stk + 0) + 0x8), a4, a6, a7, f4, f5, f6, f7);
        t4 = a4;
    }
    *(unsigned int *)(((int)stk + 0)) = t4;
    FUN_0c0e2260(((*(int *)(((int)stk + 0))) + 0x10), (t4 + 0x20), (((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 0)) = t4;
    FUN_0c0e2260((t4 + 0x20), t4, (((int)stk + 0) + 0x18));
    *(unsigned int *)(((int)stk + 0)) = t4;
    FUN_0c0e2260((*(int *)(((int)stk + 0))), (t4 + 0x10), (((int)stk + 0) + 0x28));
    if ((*(int *)(((int)stk + 4))) == 0) {
        t14 = (nlLoadMatrix((((int)stk + 0) + 0x8)));
    } else {
        t14 = (((int (*)(int, int, int, int, int))(FUN_0c0e09f0))(t4, (((int)stk + 0) + 0x8), 0x0, 0x0, *(int *)((int)stk + 0)));
    }
    return t14;
}

int FUN_0c0fc99e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t0 = *(int *)((a4 + 0xC));
        t1 = FUN_0c0fcea0(t0, t0, a6, a7);
        t0 = 0xC15AAF0;
        if (((*(int *)((a4 + 0x18))) & 1) != 0) {
            t0 = 0xC15AB0C;
        }
        t2 = ((int (*)(int, int, int))(kmiCopyToFrameBuffer))((*(int *)((a4 + 0x1C))), a5, (*(int *)(((t1 << 2) + t0))));
        t0 = 0x0;
    } else {
        t1 = 0x4;
        if (((*(int *)((a4 + 0x18))) & 8) != 0) {
            t2 = ((int (*)(int, int, int, int))(kmiCopyToFrameBuffer))((*(int *)((a4 + 0x1C))), a5, 0x800, a7);
            t1 = 0x0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c104168(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t6;
    register int t11;
    register int t12;
    int t4;
    register int t5;
    register int t9;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((a4 * 0x148) + 0xC80DBC8);
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC80DBC8) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t11 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x20))) + 0x10);
            t12 = 0x0;
            for (;;) {
                if ((int)t12 >= (int)0x20) {
                    break;
                }
                t9 = (*(int *)(((int)stk + 4)));
                t12 = (t12 + 0x1);
                t9 = (t9 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t9;
                t10 = (*(signed char *)((t11 + 0x0)));
                t11 = (t11 + 0x1);
                *(unsigned char *)(((t9 - 0x1) + 0x0)) = t10;
                t9 = (t9 - 0x1);
            }
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

