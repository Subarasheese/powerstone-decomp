/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o170_float { char p[0x170]; float v; };
struct o174_int { char p[0x174]; int v; };
struct o174_uint { char p[0x174]; unsigned int v; };
struct o178_int { char p[0x178]; int v; };
struct o178_uint { char p[0x178]; unsigned int v; };
struct o17C_int { char p[0x17C]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o304_int { char p[0x304]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_short { char p[0x70]; short v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct o76_ushort { char p[0x76]; unsigned short v; };
int keycfg_menu_init(void);
int keycfg_menu_main(void);
int keycfg_settings_changed(void);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c026076(int, int, int, int);
int logo_spawn_overlay(float);
int fx_spawn_double_ring(int, int);
int fx_spawn_spark_rings(int, int, float, float);
int ai_clear_op_state(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
extern int pl_get_held_item_class();
int pl_get_hit_count_of_opponent(int);
int hit_find_contact_direction(int);
int hit_probe_step_first(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int FUN_0c0a18f8(int, int, int);
int pl_try_start_pickup_touched(int);
int obj_set_record(int, int);
int pl_try_grab_target_object(int);
int pl_change_state(int, int, int, int);
int FUN_0c0a3062(int);
int snd_play_char_voice(int, int);
int FUN_0c0a3d5c(int, int);
int stage_obj_on_break(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e5178(int, int, int);
int FUN_0c0e51d0(void);
int snd_send_command(int);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0ff8aa(void);
int FUN_0c0ff8b4(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int gdFsWaitCompleteReq(int);
int memcpy(int, int, int);
int memset(int, int, int);
int syCfgSetSoundMode(int, int, int);
int thunk_FUN_0c062242(int);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0265de(int a4);
int snd_bank_unload(int a4);
int fx_spawn_03f2c8(int a4);
int pl_mode08_09_phase1(int a4);
int pl_try_dual_button_action(int a4, int a5, int a6);
int pl_valgas_special_id4(int a4);
int menu_ui_task_10(int a4, int a5, int a6, int a7);
int fx_spawn_34(int a4, int a5);
int menu_option_item_sound_mode(int a4, int a5, int a6);
int FUN_0c024ea6(int a4, int a5, int a6);
int stage_gimmick_20_spawn(void);
int fx_spawn_19(int a4, int a5);
int cam_apply_shake(int a4, int a5, int a6, int a7);
int FUN_0c101b58(int a4, int a5, int a6);
int FUN_0c1128ee(int a4, int a5, int a6);
int ai_op11_return(void);
int fx_tick_03c3ca(int a4, int a5, int a6, int a7);
int stage_gimmick_26_update_b(int a4, int a5, int a6, int a7);
int FUN_0c0f1c72(int a4, int a5, int a6, int a7);
int FUN_0c04c0ea(void);

int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_7 = a5;
    v0_0 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_1 = (0x1);
    v0_2 = (v0_2);
    v0_6 = (a8);
    R8 = (0x1);
    v0_3 = (0x0);
    L_C0FE7A2:;
    v0_4 = (*(signed char *)((v0_6 + 0x0))) != 0;
    v0_6 = ((v0_6 + 0x1));
    if (v0_4) goto L_C0FE79C;
    *(unsigned int *)(((int)stk + 36)) = R8;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + 0x800);
    *(unsigned int *)(((int)stk + 24)) = v0_3;
    v0_4 = (R8);
    v0_2 = ((v0_2 + 0x1));
    v0_5 = ((v0_5 + 0x800));
    L_C0FE7BA:;
    v0_6 = (v0_5);
    if (((unsigned int)v0_5 >= (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C0FE7D8;
    if (((unsigned int)((((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0x1)) + 0x8) + v0_5) < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C0FE802;
    L_C0FE7D8:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_8 = *(int *)(((int)stk + 0));
    gdFsMemcpy(v0_5, (v0_8 - ((v0_6 - v0_5) + 0x800)), ((v0_6 - v0_5) + 0x800));
    v0_7 = (gdFsReadWG((*(int *)(((int)stk + 16))), 0x1, (*(int *)(((int)stk + 0))))) != 0;
    v0_6 = ((v0_8 - ((v0_6 - v0_5) + 0x800)));
    v0_5 = (0xC0F0538);
    if (v0_7) goto L_C0FE8A6;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    v0_5 = (v0_6);
    L_C0FE802:;
    gdFsMemcpy((v0_6 + 0x6), (((int)stk + 0) + 0xC), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 12))) != (*(int *)(((int)stk + 36))))) goto L_C0FE88A;
    if ((v0_4 == 1)) goto L_C0FE888;
    if ((v0_1 != 1)) goto L_C0FE82E;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 4)));
    v0_7 = (a8);
    L_C0FE834:;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != (*(int *)(((int)stk + 28))))) goto L_C0FE88A;
    v0_7 = (gdFsStrncmpi((v0_6 + 0x8), v0_7, (*(int *)(((int)stk + 28))))) == 0;
    if (v0_7) goto L_C0FE88A;
    if ((v0_1 != 0)) goto L_C0FE852;
    v0_2 = ((v0_2 + (*(int *)(((int)stk + 24)))));
    L_C0FE852:;
    if (((*(signed char *)((v0_2 + 0x0))) != 0)) goto L_C0FE864;
    v0_0 = ((gdFsGetLE4((v0_6 + 0x2))));
    v0_5 = (0xC0F0260);
    return v0_0;
    L_C0FE864:;
    if ((v0_1 != 1)) goto L_C0FE878;
    v0_1 = (v0_3);
    L_C0FE880:;
    *(unsigned int *)(((int)stk + 24)) = (gdFsGetTokenSize(v0_2, 0xC15AF30, v0_0));
    L_C0FE888:;
    *(unsigned int *)(((int)stk + 36)) = v0_4;
    L_C0FE88A:;
    v0_7 = *(signed char *)((v0_6 + 0x0));
    v0_8 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)));
    v0_6 = (((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    if (((int)(v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)) < (int)(*(int *)(((int)stk + 32))))) goto L_C0FE7BA;
    L_C0FE8A6:;
    return 0x0;
    L_C0FE878:;
    if ((v0_4 == 1)) goto L_C0FE880;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0FE880;
    L_C0FE82E:;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 24)));
    v0_7 = (v0_2);
    goto L_C0FE834;
    L_C0FE79C:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0FE7A2;
}

int snd_bank_unload(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = 0xFFFFFFFF;
    if (((int)a4 >= 0) && ((int)a4 < (int)0x8)) {
        t1 = 0xFFFFFFFE;
        if ((*(int *)((0xC7FD1D0 + (signed char)(((a4 << 1) + a4) << 2)))) == -1) {
        } else {
            *(unsigned int *)(((signed char)(((a4 << 1) + a4) << 2) + 0xC7FD1D0)) = 0xFFFFFFFF;
            t2 = *(int *)(((signed char)(((a4 << 1) + a4) << 2) + 0xC7FD1D8));
            t3 = *(int *)0xC7FD0F0;
            *(unsigned int *)0xC7FD0F0 = (t3 - t2);
            t4 = 0xC7FD1D8;
            t5 = 0xFFFFFFFF;
            t6 = (t3 - t2);
            t3 = (a4 + 0x1);
            t7 = 0x0;
            t8 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)0x8) {
                    break;
                }
                t4 = t3;
                t9 = t4;
                t4 = (t4 << 1);
                t4 = (t4 + t9);
                t4 = (t4 << 2);
                t4 = (signed char)t4;
                t5 = 0xC7FD1D0;
                t4 = (*(int *)((t5 + t4)));
                if (t4 != -1) {
                    if (t8 == 0) {
                        t8 = t3;
                        t9 = t8;
                        t8 = (t8 << 1);
                        t8 = (t8 + t9);
                        t8 = (t8 << 2);
                        t8 = (signed char)t8;
                        t4 = 0xC7FD1D4;
                        t8 = (*(int *)((t8 + t4)));
                    }
                    t6 = t3;
                    t4 = 0xC7FD1D8;
                    t5 = (*(int *)(((signed char)(((t3 << 1) + t6) << 2) + t4)));
                    t7 = (t7 + t5);
                    t6 = t3;
                    t4 = 0xC7FD1D4;
                    t5 = (*(int *)(((signed char)(((t3 << 1) + t6) << 2) + t4)));
                    t5 = (t5 - t2);
                    *(unsigned int *)(((signed char)(((t3 << 1) + t6) << 2) + t4)) = t5;
                }
                t3 = (t3 + 0x1);
            }
            *(unsigned int *)((((a4 << 2) + 0xA0800060) + 0x0)) = 0xFFFFFFFF;
            for (;;) {
                t3 = snd_send_command(0x18A0);
                if (t3 != -1) {
                    break;
                }
            }
            for (;;) {
                if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                    break;
                }
            }
            if (t8 != 0) {
                FUN_0c0e5178(t8, (t8 - t2), t7);
                for (;;) {
                    t2 = FUN_0c0e51d0();
                    if (t2 == 0) {
                        break;
                    }
                }
            }
            (((struct o0_uint *)0xA08000B0)->v) = 0x1;
            for (;;) {
                if (((((struct o4_int *)0xA08000B0)->v)) == 0) {
                    break;
                }
            }
            (((struct o0_uint *)0xA08000B0)->v) = 0x0;
            t1 = 0x0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c101b58(int a4, int a5, int a6)
{
    int stk[5];

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
    register int v0_8;
    v0_4 = a4;
    v0_6 = a5;
    v0_5 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_7 = (v0_4);
    v0_0 = (0x1);
    v0_3 = (0xC3471E0);
    v0_1 = (0x0);
    v0_2 = (0xC80DBC8);
    v0_6 = (0xC3471F0);
    v0_8 = ((*(int *)0xC80DBC4));
    if ((v0_4 == 15)) goto L_C101B90;
    if ((v0_7 == 33)) goto L_C101B98;
    if ((v0_7 == 65)) goto L_C101BA2;
    if ((v0_7 == 122)) goto L_C101BAC;
    v0_7 = (0xFFFFFF00);
    L_C101C9A:;
    return v0_7;
    L_C101BAC:;
    *(unsigned int *)((v0_8 + 0x4)) = 0x3;
    v0_7 = ((*(int *)((v0_6 + 0xC))));
    v0_6 = ((*(int *)((v0_3 + 0xC))));
    L_C101BB4:;
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    L_C101BE4:;
    *(unsigned int *)(((int)stk + 8)) = (((v0_4 << 8) << 1) + 0x20);
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = (((v0_6 + 0x1) << 8) << 1);
    v0_4 = (v0_5);
    v0_3 = (0xC0E71BC);
    v0_3 = (v0_1);
    L_C101C92:;
    if (((int)v0_3 < (int)0x8)) goto L_C101C00;
    v0_7 = (0x0);
    goto L_C101C9A;
    L_C101C00:;
    if ((((*(int *)(((int)stk + 4))) & (*(int *)(((int)stk + 0)))) == 0)) goto L_C101C86;
    *(unsigned char *)((v0_2 + 0x2)) = v0_0;
    *(unsigned short *)((v0_2 + 0x0)) = v0_3;
    *(unsigned int *)((v0_2 + 0x1C)) = ((v0_3 * 0x4C) + 0xC812628);
    *(unsigned char *)((v0_2 + 0xA)) = v0_1;
    *(unsigned char *)((v0_2 + 0xB)) = v0_1;
    *(unsigned char *)((v0_2 + 0xC)) = v0_1;
    *(unsigned int *)((v0_2 + 0x2C)) = v0_4;
    *(unsigned int *)((v0_2 + 0x20)) = (v0_4 + 0x20);
    *(unsigned int *)((v0_2 + 0x24)) = (0x220 + v0_4);
    *(unsigned int *)((v0_2 + 0x28)) = (((*(int *)(((int)stk + 12))) + v0_4) + 0x20);
    *(unsigned char *)((v0_2 + 0x8)) = v0_1;
    *(unsigned char *)((v0_2 + 0x9)) = v0_1;
    *(unsigned short *)((v0_2 + 0xE)) = v0_0;
    *(unsigned short *)((v0_2 + 0x10)) = v0_6;
    *(unsigned short *)((v0_2 + 0x12)) = (*(short *)(((int)stk + 16)));
    *(unsigned short *)((v0_2 + 0x14)) = 0x20;
    memset((v0_2 + 0x38), 0x0, 0x10);
    memset((v0_2 + 0x48), 0x0, 0x100);
    memset((*(int *)((v0_2 + 0x2C))), 0x47, 0x20);
    memset((*(int *)((v0_2 + 0x20))), 0x53, 0x20);
    memset((*(int *)((v0_2 + 0x24))), 0x46, 0x20);
    memset((*(int *)((v0_2 + 0x28))), 0x44, 0x20);
    v0_4 = ((v0_4 + (*(int *)(((int)stk + 8)))));
    L_C101C86:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) << 1);
    v0_2 = ((v0_2 + 0x148));
    v0_3 = ((v0_3 + 0x1));
    goto L_C101C92;
    L_C101BA2:;
    *(unsigned int *)((v0_8 + 0x4)) = 0x2;
    v0_7 = ((*(int *)((v0_6 + 0x8))));
    v0_6 = ((*(int *)((v0_3 + 0x8))));
    goto L_C101BB4;
    L_C101B98:;
    *(unsigned int *)((v0_8 + 0x4)) = v0_0;
    v0_7 = ((*(int *)((v0_6 + 0x4))));
    v0_6 = ((*(int *)((v0_3 + 0x4))));
    L_C101B9E:;
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    goto L_C101BE4;
    L_C101B90:;
    *(unsigned int *)((v0_8 + 0x4)) = v0_1;
    v0_7 = ((*(int *)((v0_6 + 0x0))));
    v0_6 = ((*(int *)((v0_3 + 0x0))));
    goto L_C101B9E;
}

int FUN_0c1128ee(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned int *)((a4 + 0x0)) = ((((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x1))) << 16) & 0xFF0000) | (((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x2))) << 8) & 0xFF00)) | ((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)(((a6 + 0x4) + 0x3))));
    t0 = 0xFF000000;
    t1 = ((a6 + 0x4) + 0x4);
    t2 = (a4 + 0x4);
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)(a4 + 0x8)) {
            break;
        }
        t0 = (*(signed char *)((t1 + 0x0)));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t0;
        t2 = (t2 + 0x1);
    }
    t2 = t0;
    t0 = t1;
    t1 = (a4 + 0x8);
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0xC)) {
            break;
        }
        t2 = (*(signed char *)((t0 + 0x0)));
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t2;
        t1 = (t1 + 0x1);
    }
    t1 = t2;
    t2 = t0;
    t0 = (a4 + 0xC);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x10)) {
            break;
        }
        t1 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x1);
    }
    (((struct o11_uchar *)(a4))->v) = (*(signed char *)((t2 + 0x0)));
    if ((*(signed char *)((a4 + 0x10))) != 0) {
        (((struct o12_uchar *)(a4))->v) = ((*(signed char *)(((t2 + 0x1) + 0x0))) & 0x3);
        (((struct o13_uchar *)(a4))->v) = (((unsigned int)(unsigned char)(*(signed char *)(((t2 + 0x1) + 0x0))) >> 2) & 0x3);
    } else {
        (((struct o12_uchar *)(a4))->v) = (*(signed char *)((0xC3476F0 + ((unsigned char)(*(signed char *)(((t2 + 0x1) + 0x0))) & 0xF))));
        (((struct o13_uchar *)(a4))->v) = 0x0;
    }
    if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
        t0 = 0xC843924;
        t1 = (t2 + 0x1);
        t3 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t3 >= (unsigned int)(a4 + 0x33)) {
                break;
            }
            t0 = (*(signed char *)((t1 + 0x0)));
            t1 = (t1 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t0;
            t3 = (t3 + 0x1);
        }
        t3 = t0;
        t0 = t1;
    } else {
        t1 = 0xC843924;
        t4 = ((t2 + 0x1) + 0x1);
        t2 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t2 >= (unsigned int)(a4 + 0x32)) {
                break;
            }
            t1 = (*(signed char *)((t4 + 0x0)));
            t4 = (t4 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = t1;
            t2 = (t2 + 0x1);
        }
        (((struct o32_uchar *)(a4))->v) = 0x0;
        t3 = t1;
        t0 = t4;
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    t1 = t3;
    t2 = t0;
    t0 = (a4 + 0x34);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x70)) {
            break;
        }
        t1 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t1;
        t0 = (t0 + 0x1);
    }
    (((struct o70_uchar *)(a4))->v) = 0x0;
    (((struct o74_ushort *)(a4))->v) = (((unsigned char)(*(signed char *)((t2 + 0x1))) << 8) | (unsigned char)(*(signed char *)((t2 + 0x0))));
    (((struct o76_ushort *)(a4))->v) = (((unsigned char)(*(signed char *)((t2 + 0x3))) << 8) | (unsigned char)(*(signed char *)((t2 + 0x2))));
    return 0x0;
}

int FUN_0c0f1c72(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;

    t1 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        t0 = (((struct o50_short *)(a4))->v);
        if ((t0 != 2) && (t0 != 4)) {
            (((struct o50_ushort *)(a4))->v) = 0x0;
            t0 = 0x0;
        } else {
            t2 = 0xFFFFFFF3;
            if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
            } else {
                t3 = FUN_0c0ff8aa();
                for (;;) {
                    if (((((struct o40_int *)(a4))->v)) == 1) {
                        t4 = FUN_0c0ff8aa();
                        for (;;) {
                            t5 = FUN_0c0ff8aa();
                            t6 = FUN_0c0ff8b4(t4, t5);
                            if ((unsigned int)t6 >= (unsigned int)0x61B) {
                                break;
                            }
                        }
                        t4 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t5 = (((struct o50_short *)(a4))->v);
                        if ((t5 != 2) && (t5 != 4)) {
                            (((struct o50_ushort *)(a4))->v) = 0x0;
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0x0;
                        }
                        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0xFFFFFFF3;
                        }
                        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x14)))))((*(int *)((a4 + 0x3C))), 0xFFFFFFF3, a6, a7);
                        (((struct o48_ushort *)(a4))->v) = 0x3;
                        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                        return (gdFsWaitCompleteReq(a4));
                    }
                    t4 = (((struct o50_short *)(a4))->v);
                    if ((t4 != 2) && (t4 != 4)) {
                        break;
                    }
                    t4 = FUN_0c0ff8aa();
                    t5 = FUN_0c0ff8b4(t3, t4);
                    if ((unsigned int)t5 > (unsigned int)0xEE6B28) {
                        return 0xFFFFFFEB;
                    }
                    t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t5, 0xEE6B28, a6, a7);
                }
                (((struct o50_ushort *)(a4))->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

