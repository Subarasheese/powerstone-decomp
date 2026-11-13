/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int opt_page1_obj_in_mask(int);
int FUN_0c0210c8(int, int, int);
int FUN_0c0210f4(int, int, int);
int FUN_0c021120(int, int, int);
int hit_find_part_entry(int, int, int, int);
int FUN_0c0229d8(int, int, int);
int hit_offset_point_by_owner(int, int, int);
int FUN_0c022e90(int, int, int);
int FUN_0c023ebc(int);
int FUN_0c024298(int, float, float, float, float, float);
int FUN_0c024300(int, float, float, float, float);
int FUN_0c0243b0(int, int, float, float, float);
float FUN_0c02649a(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int res_switch_scene(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int obj_set_owner_hit_record(int, int);
int pl_reset_pose(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_held_item_class(int);
int hit_find_interactable_contact(int, int);
int FUN_0c09ce3a(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int pl_stick_dir_angle(int);
int pl_button_jump_pressed(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_change_state(int, int, int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int cam_set_shake_ramp(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _divls(void);
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(void);
int FUN_0c0fb0da(int, int);
int FUN_0c0fb0fc(int, int);
int FUN_0c0fcea0(int, int, int, int);
int FUN_0c0fddce(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kdGetDevice(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetGetLastError(int, int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int memset(int, int, int);
int thunk_FUN_0c062242(int, int);
int thunk_FUN_0c111b54(int, int);
int thunk_FUN_0c111b6e(int);
int thunk_FUN_0c1155a8(void);
int vmsio_ismount(int);
int vmsio_block_write(int a4, int a5, int a6);
int pl_state06_init(int a4);
int FUN_0c0fd660(int a4, int a5, int a6, int a7);
int FUN_0c09f2e2(int a4, int a5, int a6, int a7);
int stage_gimmick_26_spawn_b(int a4, int a5);
int ending_tick_uv_scroll(int a4);
int pl_ryoma_special2_phase1(int a4);
int fx_tick_036598(int a4);
int fx_spawn_046360(int a4);
int FUN_0c0240e8(int a4, int a5, int a6);
int pl_state17_phase1(int a4, int a5, int a6);
int opt_page1_tick_menu_rows(int a4);
int FUN_0c0ff1ac(int a4, int a5, int a6, int a7);

int vmsio_block_write(int a4, int a5, int a6)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F3;
    register float F15;
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
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 32)) = (((*(int *)(((int)stk + 20))) * 0x148) + 0xC80DBC8);
    v0_4 = (vmsio_ismount((*(int *)(((int)stk + 20))))) != 0;
    v0_3 = (0xC100490);
    v0_3 = (0xC100742);
    v0_3 = (0xC112FCA);
    v0_3 = (v0_0);
    if (v0_4) goto L_C113374;
    thunk_FUN_0c1155a8();
    L_C1134D6:;
    v0_6 = (0xFFFFFF01);
    L_C1134D8:;
    return v0_6;
    L_C113374:;
    v0_2 = *(int *)((((*(int *)(((int)stk + 20))) << 2) + 0xC15B6C4));
    kdGetDevice(v0_2);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o48_int *)((*(int *)(((*(int *)(((int)stk + 32))) + 0x1C)))))->v));
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    v0_4 = (v0_2);
    v0_2 = (0x0);
    v0_5 = (0x0);
    L_C113414:;
    if (((int)(*(int *)(((int)stk + 40))) < (int)((((struct o40_int *)((*(int *)(((*(int *)(((int)stk + 32))) + 0x1C)))))->v)))) goto L_C113398;
    L_C113422:;
    v0_6 = (thunk_FUN_0c111b6e(v0_4)) != 0;
    if (v0_6) goto L_C11346A;
    v0_6 = v0_3;
    *(int *)((int)stk + 8) = v0_6;
    v0_7 = kdSetGetLastError(v0_4, 0x2, 0x0, v0_5, v0_6);
    v0_6 = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C113448;
    thunk_FUN_0c1155a8();
    goto L_C113422;
    L_C113448:;
    v0_7 = (thunk_FUN_0c111b54(v0_4, v0_6)) != 0;
    if (v0_7) goto L_C11345A;
    thunk_FUN_0c1155a8();
    goto L_C113448;
    L_C11345A:;
    *(unsigned int *)(((int)stk + 16)) = (kdGetDevice(v0_4));
    v0_6 = (thunk_FUN_0c111b6e(v0_4)) == 0;
    if (!(v0_6)) goto L_C11346A;
    v0_6 = *(int *)0xC347700;
    *(unsigned int *)(((int)stk + 12)) = v0_6;
    if ((v0_6 == 0)) goto L_C1134A8;
    v0_6 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 12)))))((*(int *)(((int)stk + 20))), v0_3, (((int)stk + 12) + 0xC), (((int)stk + 12) + 0x10), *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24))) != 0;
    if (v0_6) goto L_C1134B4;
    goto L_C1134A8;
    L_C11346A:;
    v0_6 = (0xFFFFFF30);
    goto L_C1134D8;
    L_C1134A8:;
    *(unsigned char *)(((int)stk + 24)) = (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0xC)));
    L_C1134B4:;
    v0_7 = *(signed char *)(((int)stk + 24));
    v0_6 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 == 7)) goto L_C1134CC;
    if ((v0_6 == 0xFC)) goto L_C113422;
    if ((v0_6 == 0xFB)) goto L_C1134D0;
    goto L_C1134D6;
    L_C1134D0:;
    v0_6 = (0xFFFFFF40);
    goto L_C1134D8;
    L_C1134CC:;
    v0_6 = (0x0);
    goto L_C1134D8;
    L_C113398:;
    v0_7 = thunk_FUN_0c111b6e(v0_4);
    v0_6 = (v0_7);
    if ((v0_7 != 0)) goto L_C11346A;
    v0_6 = ((int)((int)(*(int *)(((int)stk + 12))) / (int)0x4));
    *(int *)((int)stk + 8) = v0_6;
    v0_7 = (*(int *)(((int)stk + 16)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = v0_3;
    *(int *)((int)stk + 0) = v0_8;
    v0_7 = kdSetBlockWrite(v0_4, 0x2, 0x0, v0_5, v0_8, v0_7, v0_6);
    v0_6 = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C1133CE;
    thunk_FUN_0c1155a8();
    goto L_C113398;
    L_C1133CE:;
    v0_7 = (thunk_FUN_0c111b54(v0_4, v0_6)) != 0;
    if (v0_7) goto L_C1133E0;
    thunk_FUN_0c1155a8();
    goto L_C1133CE;
    L_C1133E0:;
    *(unsigned int *)(((int)stk + 36)) = (kdGetDevice(v0_4));
    v0_6 = (thunk_FUN_0c111b6e(v0_4)) != 0;
    if (v0_6) goto L_C11346A;
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x4));
    v0_6 = ((unsigned char)v0_7);
    if (((unsigned char)v0_7 == 7)) goto L_C113404;
    if ((v0_6 == 0xFC)) goto L_C113398;
    goto L_C1134D6;
    L_C113404:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
    v0_5 = ((v0_5 + 0x1));
    goto L_C113414;
}

int FUN_0c0fd660(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t15;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t36;
    register int t37;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;

    t0 = FUN_0c0fcea0(a6, a6, a6, a7);
    if (a6 != 1) {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
        if ((int)a6 <= (int)0x4) {
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 0))), ((*(int *)((a4 + 0x1C))) + 0x800), 0x10);
            if (a6 == 2) {
                *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x1)) = (*(signed char *)((a5 + 0x0)));
            } else {
                t5 = ((((int)stk + 0) + 0x8) + 0x2);
                t6 = 0x0;
                t7 = a5;
                for (;;) {
                    t8 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    t6 = (t6 + 0x2);
                    *(unsigned char *)((t5 + 0x0)) = t8;
                    t5 = (t5 + 0x1);
                    t9 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    *(unsigned char *)((t5 + 0x0)) = t9;
                    t5 = (t5 + 0x1);
                    if ((int)t6 >= (int)0x4) {
                        break;
                    }
                }
            }
            t15 = *(int *)((a4 + 0x1C));
            FUN_0c0fddce((((int)stk + 0) + 0x8));
            FUN_0c0fddce(((((int)stk + 0) + 0x8) + 0x20));
            kmiCopyToFrameBuffer((t15 + 0x800), (((int)stk + 0) + 0x8), 0x10);
        } else {
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 0))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC15AC04 + ((t0 - 1) << 2)))) + 0x7FA)), 0x10);
            t23 = ((((int)stk + 0) + 0x8) + 0x6);
            t24 = 0x0;
            t25 = a5;
            for (;;) {
                t26 = *(signed char *)((t25 + 0x0));
                t25 = (t25 + 0x1);
                t24 = (t24 + 0x2);
                *(unsigned char *)((t23 + 0x0)) = t26;
                t23 = (t23 + 0x1);
                t27 = *(signed char *)((t25 + 0x0));
                t25 = (t25 + 0x1);
                *(unsigned char *)((t23 + 0x0)) = t27;
                t23 = (t23 + 0x1);
                if ((int)t24 >= (int)0xA) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x1C)));
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + ((*(int *)((0xC15AC04 + ((t0 - 1) << 2)))) + 0x7FA));
            FUN_0c0fddce((((int)stk + 0) + 0x8));
            FUN_0c0fddce(((((int)stk + 0) + 0x8) + 0x20));
            kmiCopyToFrameBuffer((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x8), 0x10);
            if ((unsigned int)((*(int *)(((t0 << 2) + 0xC15ABD8))) - 16) > (unsigned int)0x0) {
                t36 = *(int *)((0xC15AC04 + ((t0 - 1) << 2)));
                t37 = *(int *)((a4 + 0x1C));
                *(unsigned int *)(((int)stk + 0)) = (a5 + 0xA);
                kmiCopyToFrameBuffer((t37 + (t36 + 0x80A)), (a5 + 0xA), ((*(int *)(((t0 << 2) + 0xC15ABD8))) - 16));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x8);
            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 0))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC15AC04 + (t0 << 2)))) + 0x7FA)), 0x10);
            t50 = (*(int *)(((int)stk + 4)));
            t51 = 0x0;
            t52 = (((*(int *)(((t0 << 2) + 0xC15ABD8))) + a5) - 6);
            for (;;) {
                t53 = *(signed char *)((t52 + 0x0));
                t52 = (t52 + 0x1);
                t51 = (t51 + 0x3);
                *(unsigned char *)((t50 + 0x0)) = t53;
                t50 = (t50 + 0x1);
                t54 = *(signed char *)((t52 + 0x0));
                t52 = (t52 + 0x1);
                *(unsigned char *)((t50 + 0x0)) = t54;
                t50 = (t50 + 0x1);
                t55 = *(signed char *)((t52 + 0x0));
                t52 = (t52 + 0x1);
                *(unsigned char *)((t50 + 0x0)) = t55;
                t50 = (t50 + 0x1);
                if ((int)t51 >= (int)0x6) {
                    break;
                }
            }
        }
    }
    return 0x0;
}

int FUN_0c0ff1ac(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t4;
    int t5;
    register int t8;
    register int t48;
    register int t3;
    int t6;
    register int t79;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t5 = *(int *)((0xC804EA8 + (((int)t1 >> 4) << 2)));
    t4 = t5;
    for (;;) {
        if ((t4 != 0) && (t6 = *(int *)((t4 + 0xC)), t3 = t6, (unsigned int)t3 < (unsigned int)(a6 | 0x80000000))) {
            t5 = t4;
            t4 = (*(int *)((t4 + 0x4)));
            continue;
        }
        break;
    }
    t8 = 0x1;
    for (;;) {
        if (((*(int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0xC))) & 0x80000000) != 0) {
            t8 = (t8 + 0x1);
            if ((unsigned int)t8 >= (unsigned int)0x100) {
                break;
            }
            continue;
        }
        break;
    }
    if ((unsigned int)t8 >= (unsigned int)0x100) {
        t79 = 0x0;
    } else {
        if ((t4 == 0) && (t5 == 0)) {
            if ((int)t1 < (int)0x900) {
                (((struct o200_uint *)((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + t1) >> 1) >> 1) >> 1))))->v) = 0xC0FF35A;
            } else {
                if (t1 == 0x900) {
                    FUN_0c0fb0da(0xC0FF37E, 0x0);
                } else {
                    if (t1 == 0x920) {
                        FUN_0c0fb0fc(0xC0FF3C8, 0x0);
                    } else {
                        (((struct o22C_uint *)(((int)_builtin_get_vbr())))->v) = 0xC0FF3EE;
                    }
                }
            }
            *(unsigned int *)((0xC804EA8 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC803EA8);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x4)) = 0x0;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0xC)) = (a6 | 0x80000000);
            t48 = *(short *)(((int)stk + 4));
            if (((int)t1 >> 8) == 10) {
                (((struct o0_uint *)0xA05F6920)->v) = (((((struct o0_int *)0xA05F6920)->v)) | ((int)0x1 << (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1) + 0xC)));
            } else {
                if (((int)t1 >> 8) == 11) {
                    (((struct o4_uint *)0xA05F6920)->v) = (((((struct o4_int *)0xA05F6920)->v)) | ((int)0x1 << (int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1)));
                }
            }
        } else {
            if (t4 == (*(int *)((0xC804EA8 + (((int)t1 >> 4) << 2))))) {
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x4)) = t4;
                *(unsigned int *)((0xC804EA8 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC803EA8);
            } else {
                *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC803EA8);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x4)) = t4;
            }
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC803EA8) + 0xC)) = (a6 | 0x80000000);
        }
        t79 = t8;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
    return t79;
}
