/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o718C_int { char p[0x718C]; int v; };
struct o718C_uint { char p[0x718C]; unsigned int v; };
struct o7190_int { char p[0x7190]; int v; };
struct o7190_uint { char p[0x7190]; unsigned int v; };
struct o7194_uint { char p[0x7194]; unsigned int v; };
struct o7198_short { char p[0x7198]; short v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_float { char p[0xC0]; float v; };
struct oC4_float { char p[0xC4]; float v; };
struct oE0_float { char p[0xE0]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_foreign_exec_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
int pad_get_type(int);
int ui_draw_element_sprite(int);
int vec3f_to_vec3s(int, int);
int vec3s_to_vec3f(int, int);
float FUN_0c02651e(int);
int fx_spawn_spark_rings(int, int, float, float);
int ai_clear_op_state(void);
int ai_angle_to_pad_dir(int);
int FUN_0c050a12(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c06233a(int, int, int);
int pl_mode15_cls14_f1_phase0(int);
int pl_mode15_cls14_f1_phase2(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_motion_translation(int);
int obj_set_record(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int snd_play_stage_obj_se(int, int, int);
int stage_obj_on_break(int);
int cam_set_shake_ramp(int, int);
extern int math_atan2_angle16();
float math_cos_angle16(int);
extern float math_pow_float();
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e5d22(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fdc(int);
int FUN_0c0e6fe8(void);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
extern float _builtin_sqrtf(float);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int fx_spawn_03b4d0(int a4, int a5, int a6, int a7, float f4);
int pl_kraken_mode04_phase2(int a4, float f4);
int fx_spawn_033ba8(int a4, int a5, int a6);
int fx_spawn_04aa24(int a4, int a5);
int kmiProcessVertex_09(int a4);
int FUN_0c02048e(int a4, int a5, int a6);
int ai_op86(int a4, int a5, int a6, int a7);
float pl_enter_state_39(int a4, int a5);
int stage_gimmick_22_update_b(int a4, int a5, int a6, int a7);
int FUN_0c0e5b20(int a4, int a5, int a6);
int FUN_0c01fc44(int a4);
int FUN_0c02a4e0(int a4, int a5, int a6, int a7);
int pl_load_motion_prev_key(int a4, int a5);
int cam_push_keyframe_history(int a4, int a5, int a6, int a7);
int nl_display_strip_spd(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01dde2(int a4);
int FUN_0c02743c(int a4, int a5);
int pl_mode15_cls14_f1(int a4, int a5, int a6, int a7);
int pl_load_motion_key(int a4, int a5);
int FUN_0c0c68cc(int a4, int a5, int a6, int a7);
int FUN_0c0e6364(int a4, int a5, int a6, int a7);

int kmiProcessVertex_09(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t31;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC81715C)->v));
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    (((struct o18_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10)));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    (((struct o28_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x10)));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    (((struct o38_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x10)));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0e5b20(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        t0 = 0xFFFFFFFE;
                        if (a5 != 0x50A5) {
                        } else {
                            t0 = (FUN_0c0e5d22(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
                        }
                        t1 = t0;
                    } else {
                        t1 = (FUN_0c0e5d22(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
                    }
                    t0 = t1;
                } else {
                    t0 = (FUN_0c0e5d22(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0x7F) << 16))));
                }
                t1 = t0;
            } else {
                t1 = (FUN_0c0e5d22(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
            t0 = t1;
        } else {
            t0 = (FUN_0c0e5d22(((a5 + ((a4 & 0xF) << 8)) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1)))));
        }
        t1 = t0;
    } else {
        t0 = FUN_0c0e5d22(((((a6 & 0x7F00) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
        t1 = t0;
        if (t0 != 0) {
        } else {
            t1 = (FUN_0c0e5d22(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5)));
        }
    }
    return t1;
}

int FUN_0c0e6364(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t12;
    register int t15;
    register int t25;
    register int t39;
    register int t42;
    register int t52;
    int t19;
    register int t20;
    register int t21;
    register int t22;
    int t46;
    register int t47;
    register int t48;
    register int t49;

    *(unsigned short *)(((((int)stk + 0) + 0xA) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = 0x0;
    if ((*(short *)(((int)stk + 10))) == 1) {
        *(unsigned short *)(((int)stk + 2)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 2))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 0))) == 0) {
                    return 0xFFFFFFFF;
                }
                t12 = *(short *)(((int)stk + 2));
                *(unsigned short *)(((unsigned char)((((t12 << 1) + t12) << 2) << 1) + 0xC7FD110)) = 0x1;
                return ((int (*)(int, int, int, int))(0xC0E6462))(a4, a5, a6, a7);
            }
            t15 = *(short *)(((int)stk + 2));
            if (((*(short *)(((unsigned char)((((t15 << 1) + t15) << 2) << 1) + 0xC7FD110))) == 0) && (t19 = *(short *)(((int)stk + 2)), t20 = (int)(((unsigned int)t19) >> 31), t21 = (int)(((unsigned int)(((t19 << 1) + t19) << 2)) >> 31), t22 = *(int *)(((unsigned char)((((t19 << 1) + t19) << 2) << 1) + 0xC7FD118)), t22 == 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 0)) = 0x1;
        if ((*(short *)(((int)stk + 0))) == 0) {
            return 0xFFFFFFFF;
        }
        t25 = *(short *)(((int)stk + 2));
        *(unsigned short *)(((unsigned char)((((t25 << 1) + t25) << 2) << 1) + 0xC7FD110)) = 0x1;
        return ((int (*)(int, int, int, int))(0xC0E6462))(a4, a5, a6, a7);
    }
    if ((*(short *)(((int)stk + 10))) == 2) {
        *(unsigned short *)(((int)stk + 2)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 2))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 0))) == 0) {
                    return 0xFFFFFFFF;
                }
                t39 = *(short *)(((int)stk + 2));
                *(unsigned short *)(((unsigned char)((((t39 << 1) + t39) << 2) << 1) + 0xC7FD110)) = 0x1;
                return ((int (*)(int, int, int, int))(0xC0E6462))(a4, a5, a6, a7);
            }
            t42 = *(short *)(((int)stk + 2));
            if (((*(short *)(((unsigned char)((((t42 << 1) + t42) << 2) << 1) + 0xC7FD110))) == 0) && (t46 = *(short *)(((int)stk + 2)), t47 = (int)(((unsigned int)t46) >> 31), t48 = (int)(((unsigned int)(((t46 << 1) + t46) << 2)) >> 31), t49 = *(int *)(((unsigned char)((((t46 << 1) + t46) << 2) << 1) + 0xC7FD118)), t49 != 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 0)) = 0x1;
        if ((*(short *)(((int)stk + 0))) == 0) {
            return 0xFFFFFFFF;
        }
        t52 = *(short *)(((int)stk + 2));
        *(unsigned short *)(((unsigned char)((((t52 << 1) + t52) << 2) << 1) + 0xC7FD110)) = 0x1;
        return ((int (*)(int, int, int, int))(0xC0E6462))(a4, a5, a6, a7);
    }
    return 0xFFFFFFFF;
}
