/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o42_uchar { char p[0x42]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7200_int { char p[0x7200]; int v; };
struct o7200_uint { char p[0x7200]; unsigned int v; };
struct o7298_float { char p[0x7298]; float v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c01ebc0(int, int, int, int);
int FUN_0c01ec9c(int);
int vmu_menu_spawn_message(int);
int vmu_menu_spawn_choice_cursor(int);
int vmu_menu_update_objs(void);
int vmu_menu_poll_yes_no(int);
int FUN_0c026554(int);
int game_tick_play_time(void);
int game_update_max_combo(void);
int FUN_0c0555b6(void);
int FUN_0c055686(int, ...);
int fx_spawn_0567c4(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c059b04(void);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_mode11_phase0(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int obj_set_record_char(int, int);
int pl_detect_special_input(int, int);
int snd_play_side_se(int, int);
extern int FUN_0c0ac5c4();
int stage_obj_on_break(int);
int fx_spawn_thrown_item_kind(int, int);
int fx_spawn_05(int, int, int);
int attract_take_step3_flag(void);
int FUN_0c0d75bc(int, int, int, int);
int FUN_0c0d7758(float);
int FUN_0c0d780c(void);
int menu_option_run_item(void);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(int);
int FUN_0c0fde72(int, int);
int FUN_0c0fdea0(int);
int FUN_0c0fdeba(int);
int FUN_0c109c06(int, int);
int FUN_0c10a5c0(int, int, int);
int FUN_0c10b260(int, int);
int FUN_0c10b388(void);
int FUN_0c10b3e0(int);
int FUN_0c10b434(int, int);
int thunk_FUN_0c062242(int);
int FUN_0c1096a2(int a4);
int stage_gimmick_35_spawn(void);
int fx_spawn_15(int a4, int a5);
int menu_option_update(int a4, int a5, int a6, int a7, float f4);
int fx_spawn_04b2d4(int a4, int a5, int a6);
int menu_ui_task_02(int a4, int a5, int a6, int a7);
int stage_gimmick_32_spawn(int a4);
int stage_gimmick_14_update(int a4, int a5, int a6, int a7);
int FUN_0c0c54b8(int a4, int a5, int a6, int a7);
int opt_page1_spawn_menu_rows(int a4);
int FUN_0c01ea20(int a4, int a5, int a6, int a7);
int FUN_0c0537fe(void);
int FUN_0c06f6ca(int a4);
int FUN_0c0fdef0(int a4, int a5, int a6, int a7);
int FUN_0c05b400(int a4, float f4);
int pl_garuda_get_state28_action(int a4);
int ai_push_state(void);
int pl_mode11_update(int a4, int a5, int a6, int a7);

int FUN_0c1096a2(int a4)
{
    int stk[7];
    register int t23;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t30;
    register int t58;
    register int t31;
    register int t32;
    register int t36;
    register int t41;
    register int t22;
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    int t12;
    register int t68;
    register int t46;

    FUN_0c10b260((((int)stk + 0) + 0x8), a4);
    t3 = *(int *)0xC347670;
    t23 = 0x0;
    if (t3 != 0) {
        t5 = t4;
        t7 = t6;
        t9 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t3 + 0x0))) & 0xF000) == (*(int *)(((int)stk + 8)))) && (t12 = *(int *)(((int)stk + 24)), t7 = t12, t5 = 0x0, (unsigned int)0x0 < (unsigned int)t7)) {
                for (;;) {
                    t2 = t5;
                    t2 = (t2 << 2);
                    t2 = (t2 + (t3 + 0xC));
                    if ((*(int *)((t2 + 0x0))) == 0) {
                        t8 = t5;
                        t9 = t3;
                        t3 = 0x0;
                        t5 = t7;
                    }
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)t7) {
                        break;
                    }
                }
            }
            if (t9 == 0) {
                t3 = (*(int *)((t3 + 0x4)));
            }
            if (t3 == 0) {
                break;
            }
        }
        t22 = t8;
        t23 = t9;
    }
    if (t23 == 0) {
        t30 = FUN_0c10b388();
        t58 = 0x3;
        if (t30 != 0) {
            t31 = (t30 + 0xC);
            t32 = 0x0;
            for (;;) {
                *(unsigned int *)((t31 + 0x0)) = 0x0;
                t32 = (t32 + 0x2);
                t31 = (t31 + 0x4);
                *(unsigned int *)((t31 + 0x0)) = 0x0;
                t31 = (t31 + 0x4);
                if ((unsigned int)t32 >= (unsigned int)0x10) {
                    break;
                }
            }
            FUN_0c10b434(0xC347670, t30);
            *(unsigned short *)((t30 + 0x0)) = ((*(short *)((t30 + 0x0))) | (*(int *)(((int)stk + 8))));
            t36 = *(int *)(((int)stk + 20));
            if (((*(int *)0xC816FC8) & 4) != 0) {
                FUN_0c109c06(((int)stk + 0), (((int)stk + 0) + 0x4));
                t41 = 0x0;
                if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 4)))) {
                    t41 = 0x1;
                }
                t46 = (FUN_0c10a5c0(t41, t36, t30));
            } else {
                t46 = (FUN_0c10a5c0(0x1, t36, t30));
            }
            if (t46 != 0) {
                FUN_0c10b3e0(t30);
                t58 = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = (((0x0 * ((unsigned int)(*(int *)(((int)stk + 12))) >> 2)) << 2) + (*(int *)((t30 + 0x8))));
                *(unsigned int *)(((0x0 + (t30 + 0xC)) + 0x0)) = a4;
                *(unsigned short *)((t30 + 0x0)) = ((*(short *)((t30 + 0x0))) | 0x2);
                t58 = 0x0;
            }
        }
        t68 = t58;
    } else {
        *(unsigned int *)((a4 + 0x1C)) = (((t22 * ((unsigned int)(*(int *)(((int)stk + 12))) >> 2)) << 2) + (*(int *)((t23 + 0x8))));
        *(unsigned int *)((((t22 << 2) + (t23 + 0xC)) + 0x0)) = a4;
        *(unsigned short *)((t23 + 0x0)) = ((*(short *)((t23 + 0x0))) | 0x2);
        t68 = 0x0;
    }
    return t68;
}

int FUN_0c0fdef0(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t51;
    register int t37;
    register int t6;
    register int t7;
    register int t10;
    register int t19;
    register int t24;
    register int t25;
    register int t28;
    register int t5;

    t51 = 0xFFFFFFFF;
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        t37 = 0xFFFFFFFE;
        if (((*(signed char *)((a4 + 0x3))) + ((*(signed char *)((a4 + 0x2))) << 8)) == 100) {
            t6 = 0x0;
            t7 = (a4 + 0x4);
            for (;;) {
                if ((int)t6 >= (int)0xC) {
                    t6 = ((unsigned char)(*(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0xA))) << 8);
                    t6 = (t6 | (unsigned char)(*(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0xB))));
                    t10 = FUN_0c0fde72(((((int)stk + 4) + 0x4) + 0xC), t6);
                    if (t10 != 0) {
                        return 0xFFFFFFFD;
                    }
                    *(unsigned int *)((a5 + 0x0)) = (FUN_0c0fdea0((*(signed char *)(((((int)stk + 4) + 0x4) + 0xD)))));
                    *(unsigned int *)((a5 + 0x4)) = (FUN_0c0fdea0((*(signed char *)(((((int)stk + 4) + 0x4) + 0xF)))));
                    *(unsigned int *)((a5 + 0x8)) = (FUN_0c0fdea0((*(signed char *)(((((int)stk + 4) + 0x4) + 0x10)))));
                    *(unsigned int *)((a5 + 0xC)) = (FUN_0c0fdea0((*(signed char *)(((((int)stk + 4) + 0x4) + 0x11)))));
                    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0xC);
                    t19 = *(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0));
                    *(int *)((int)stk + 0) = ((t19 << 16) << 8);
                    *(unsigned int *)((a5 + 0x10)) = ((FUN_0c0fdeba(((*(int *)(((int)stk + 4))) + 0x7))) | ((t19 << 16) << 8));
                    *(unsigned int *)((a5 + 0x14)) = (FUN_0c0fdea0((*(signed char *)(((((int)stk + 4) + 0x4) + 0xE)))));
                    return 0x0;
                }
                *(unsigned char *)((((((int)stk + 4) + 0x4) + t6) + 0x0)) = 0x0;
                *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = 0x0;
                t24 = 0x7;
                for (;;) {
                    if (t24 == 7) {
                        t25 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = ((*(signed char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0))) | ((t25 & 0x40) << 1));
                    } else {
                        t28 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        t5 = (*(signed char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)));
                        t5 = (t5 | ((int)(t28 & 0x40) << (int)(-(0x6 - t24))));
                        *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = t5;
                    }
                    t24 = (t24 - 1);
                    if ((int)t24 < 0) {
                        break;
                    }
                }
                if (((*(signed char *)(((((int)stk + 4) + 0x4) + 0xC))) & 0xF) != 1) {
                    break;
                }
                t6 = (t6 + 0x1);
            }
            t37 = 0xFFFFFFFB;
        }
        t51 = t37;
    }
    return t51;
}

