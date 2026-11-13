/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71DF_uchar { char p[0x71DF]; unsigned char v; };
struct o720C_ushort { char p[0x720C]; unsigned short v; };
struct o7214_uchar { char p[0x7214]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
extern int hit_update_object_list();
extern int FUN_0c0255ae();
float FUN_0c02649a(int, int);
float FUN_0c02651e(int);
int fx_spawn_linked_effect(int, int, int, int, int, int, int, int, int);
int fx_spawn_048aa0(int);
int FUN_0c049288(void);
int fx_spawn_04a294(int);
int fx_spawn_04a4c4(int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int);
int ai_calc_angle_to_goal_point(int);
int ai_calc_dist_to_goal_obj(int);
int ai_angle_to_pad_dir(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int);
int obj_spawn_05ca54(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int pl_reset_pose(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_reset_combo_counter(int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int pl_stick_dir_angle(int);
int obj_set_record_char(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int snd_play_stage_obj_se(int, int, int);
int stage_obj_load_layout_pos(int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int stage_spawn_layout_objects(void);
int fx_spawn_04(int, int);
int FUN_0c0ccbfe(void);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(int);
int _quick_odd_mvn(int, int, float);
int FUN_0c0ffdba(void);
int FUN_0c100260(int, int, int);
extern int mpdrv_frame_send();
int thunk_FUN_0c062242(int, int);
int pl_enter_state_24(int a4, int a5);
int fx_spawn_22(int a4);
int FUN_0c0fffb8(int a4, int a5, int a6, int a7);
int FUN_0c0cc074(int a4, int a5, int a6, int a7);
int FUN_0c025706(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int ai_op3(int a4, int a5, int a6, int a7);
int pl_enter_state_13(int a4, int a5);
int pl_enter_state_34(int a4, int a5);
int ai_op47(int a4, float f4);
int fx_tick_04a294(int a4);
int stage_gimmick_32_update(int a4, int a5);

int FUN_0c0fffb8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = 0x0;
    if (((((struct o0_int *)0xC805708)->v)) == 0) {
    } else {
        (((struct o18_uint *)0xC805708)->v) = (((((struct o1C_int *)0xC805708)->v)) - 1);
        (((struct o1C_uint *)0xC805708)->v) = 0x0;
        t1 = a5;
        if (((((struct o14_int *)0xC805708)->v)) != 0) {
            (((struct o20_uint *)0xC805708)->v) = (((((struct o0_int *)0xA05F80C4)->v)) & 0x3FF);
            (((struct o24_uint *)0xC805708)->v) = ((short)((unsigned int)((((struct o0_int *)0xA05F80C4)->v)) >> 16) & 0x3FF);
            t1 = 0xA05F80C4;
        }
        (((struct o14_uint *)0xC805708)->v) = 0x0;
        if (((((struct o10_int *)0xC805708)->v)) != 0) {
            *(unsigned int *)0xA05F8040 = ((((struct oC_int *)0xC805708)->v));
            (((struct o24_uint *)0xA05F80C4)->v) = (((((struct o24_int *)0xA05F80C4)->v)) & 0xFFFFFFF7);
            (((struct o10_uint *)0xC805708)->v) = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            t2 = 0xC805718;
            t0 = t1;
            t4 = 0xC80571C;
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                (((struct o1C_uint *)0xC805488)->v) = (((((struct o1C_int *)0xC805488)->v)) + 0x1);
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t5 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFFE, ((((struct o8_int *)0xC805488)->v)), (*(int *)0xA05F6908));
                } else {
                    t5 = 0xC805718;
                    t6 = t1;
                    t7 = 0xC80571C;
                }
                t2 = t5;
                t0 = t6;
                t4 = t7;
            }
            t5 = t2;
            t6 = t0;
            t7 = t4;
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                (((struct o20_uint *)0xC805488)->v) = (((((struct o20_int *)0xC805488)->v)) + 0x1);
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFFD, ((((struct o8_int *)0xC805488)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t2;
                    t2 = t0;
                    t0 = t4;
                }
                t5 = t8;
                t6 = t2;
                t7 = t0;
            }
            t2 = t5;
            t0 = t6;
            t4 = t7;
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                (((struct o24_uint *)0xC805488)->v) = (((((struct o24_int *)0xC805488)->v)) + 0x1);
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFFC, ((((struct o8_int *)0xC805488)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t5;
                    t5 = t6;
                    t6 = t7;
                }
                t2 = t8;
                t0 = t5;
                t4 = t6;
            }
            t5 = t2;
            t6 = t0;
            t7 = t4;
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                (((struct o28_uint *)0xC805488)->v) = (((((struct o28_int *)0xC805488)->v)) + 0x1);
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFFB, ((((struct o8_int *)0xC805488)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t2;
                    t2 = t0;
                    t0 = t4;
                }
                t5 = t8;
                t6 = t2;
                t7 = t0;
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            t2 = ((int (*)(int, int, int))(FUN_0c100260))(t5, t6, t7);
            t2 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t2 >= 0) {
                FUN_0c0ffdba();
            } else {
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t0 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFFA, ((((struct o8_int *)0xC805488)->v)), t2);
                }
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, int))(mpdrv_frame_send))(0xC805718, t1, 0xC80571C, a7);
            if ((int)t2 >= 0) {
                (((struct o34_uint *)0xC805708)->v) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC805708)->v)) << 1) + 0xC8054BC) + 0x0)) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC805708)->v)) << 1) + 0xC8054B4) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                FUN_0c0ffdba();
                (((struct o0_uint *)0xC805488)->v) = (((((struct o0_int *)0xC805488)->v)) + 0x1);
            } else {
                t1 = ((int (*)(void))(FUN_0c100260))();
                (((struct o10_uint *)0xC805488)->v) = (((((struct o10_int *)0xC805488)->v)) + 0x1);
                if (((((struct o38_int *)0xC805488)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC805488)->v))))(0x1, 0xFFFFFFF9, ((((struct o8_int *)0xC805488)->v)), t2);
                }
            }
            t0 = t2;
        }
    }
    return t0;
}

