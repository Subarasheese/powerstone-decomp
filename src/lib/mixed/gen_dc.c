/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
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
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o721C_uchar { char p[0x721C]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0158d8(void);
int FUN_0c01a800(int);
int FUN_0c01a928(int);
int opt_page2_spawn_bg_scroll(int);
extern int opt_page2_run_objects_in_mask();
int opt_page2_pad_pressed(int);
float FUN_0c02649a(int, int);
float FUN_0c02651e(int);
int ui_fade_start(int, int, int, int);
int fx_spawn_04512c(int, int, int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06233a(int, int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int bgm_stop_all(void);
int bgm_stop_streams(void);
int bgm_set_volume(int, int);
int FUN_0c0a32dc(void);
int bgm_play_demo_00(void);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int menu_ui_spawn_01(void);
int menu_ui_spawn_02(void);
int menu_ui_spawn_03(void);
int menu_ui_spawn_04(void);
int menu_ui_spawn_05(void);
int menu_ui_spawn_06(void);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d5188(void);
int cam_set_priority(int, int);
int cam_request_mode(int, int, int);
int cam_request_mode_with_args(int, int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(int, int, float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int nlStoreMatrix(int);
int nlLoadMatrix(int, int, int, int);
int _modlu(void);
extern int _quick_odd_mvn();
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int memset(int, int, int);
int thunk_FUN_0c062242(int);
int fx_thrown_object_create(int a4, int a5);
int opt_page2_main(int a4, int a5, int a6, int a7);
int fx_tick_0488b8(int a4);
int pl_enter_state_26(int a4, int a5);
int kmiProcessVertex_03(int a4);
int fx_spawn_0457d0(void);
int ai_calc_goal_angle(int a4, int a5, float f4);
int menu_scene1_update(int a4, int a5, int a6, int a7);
int FUN_0c0d3be6(void);
int FUN_0c0e12e0(int a4, int a5, float f4, float f5);
int pl_hitreact_23_phase0(int a4);
int FUN_0c0c9394(int a4);

int kmiProcessVertex_03(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
    register int t54;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t12 = *(int *)(((((int)stk + 0) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t12 + 0x14))));
    *(unsigned int *)(((t16 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    t28 = *(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    t44 = *(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((int)stk + 0))) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0e12e0(int a4, int a5, float f4, float f5)
{
    int stk[8];
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register float u12;
    register float u13;
    register int t18;
    register float u20;
    register int t6;
    register int t7;
    register int t10;
    register float u11;
    register int t14;
    register int t16;
    register int t17;
    register float u19;

    *(unsigned int *)(((int)stk + 12)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t2 = nlStoreMatrix(0x0);
        t5 = t2;
    }
    t8 = t7;
    t9 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            t9 = 0x0;
            t18 = 0x0;
            u20 = 1.0f;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t18 = t9;
                t10 = t9;
                u13 = -1.0f;
                t10 = (t10 << 2);
                if ((int)t18 < (int)0x4) {
                    for (;;) {
                        t5 = t18;
                        t17 = (*(signed char *)((a5 + t5)));
                        t6 = t2;
                        t5 = t17;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t6);
                        u11 = (*(float *)((t10 + t5)));
                        t5 = t17;
                        t5 = (t5 << 2);
                        u19 = (*(float *)(((((int)stk + 0) + 0x10) + t5)));
                        u11 = _builtin_fabsf(u11);
                        u12 = u11;
                        u12 = (u12 * u19);
                        if (u12 > u13) {
                            t8 = t18;
                            u13 = u12;
                        }
                        t18 = (t18 + 0x1);
                        if ((int)t18 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t16 = t8;
                t16 = (t16 + a5);
                t18 = (*(signed char *)((t16 + 0x0)));
                if (t8 != t9) {
                    t17 = t9;
                    t17 = (t17 + a5);
                    t14 = (*(signed char *)((t17 + 0x0)));
                    u20 = (-u20);
                    *(unsigned char *)((t16 + 0x0)) = t14;
                    *(unsigned char *)((t17 + 0x0)) = t18;
                }
                t16 = t18;
                t16 = (t16 << 2);
                t5 = t2;
                t16 = (t16 << 2);
                t5 = (t5 + t16);
                u11 = 0.0f;
                u12 = (*(float *)((t10 + t5)));
                u20 = (u20 * u12);
                if (u12 != u11) {
                    t17 = t9;
                    t17 = (t17 + 0x1);
                    t6 = t17;
                    t6 = (t6 + a5);
                    *(unsigned int *)(((int)stk + 0)) = t17;
                    *(unsigned int *)(((int)stk + 8)) = t6;
                    for (;;) {
                        if ((int)t17 >= (int)0x4) {
                            break;
                        }
                        t8 = (*(int *)(((int)stk + 8)));
                        t5 = t2;
                        t8 = (t8 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t8;
                        t8 = (t8 - 1);
                        t8 = (*(signed char *)((t8 + 0x0)));
                        t18 = t8;
                        t18 = (t18 << 2);
                        t18 = (t18 << 2);
                        t5 = (t5 + t18);
                        u13 = (*(float *)((t10 + t5)));
                        u13 = (u13 / u12);
                        *(float *)((t10 + t5)) = u13;
                        t8 = (*(int *)(((int)stk + 0)));
                        if ((int)t8 < (int)0x4) {
                            for (;;) {
                                t14 = (t2);
                                t6 = t8;
                                t14 = (t14 + t16);
                                t6 = (t6 << 2);
                                u19 = u13;
                                t14 = (t14 + t6);
                                t5 = t2;
                                t5 = (t5 + t18);
                                *(unsigned int *)(((int)stk + 4)) = t6;
                                u11 = (*(float *)((t14 + 0x0)));
                                t5 = (t5 + t6);
                                t8 = (t8 + 0x1);
                                u19 = (u19 * u11);
                                u11 = (*(float *)((t5 + 0x0)));
                                u11 = (u11 - u19);
                                *(float *)((t5 + 0x0)) = u11;
                                if ((int)t8 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                        t17 = (t17 + 0x1);
                    }
                    t9 = (t9 + 0x1);
                    continue;
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, -1.0f, 1.0f);
            }
            if ((*(int *)(((int)stk + 12))) == 0) {
                t6 = 0xC0E1240;
                t5 = (nlLoadMatrix(t2, 0x4, t8, t9));
                return ((int (*)(void))(0xC0E1448))();
            }
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, -1.0f, 1.0f);
        }
        t5 = t9;
        t10 = t5;
        t10 = (t10 << 2);
        t8 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u12 = 0.0f;
        t10 = (t10 << 2);
        for (;;) {
            if ((int)t8 >= (int)0x4) {
                break;
            }
            t6 = t8;
            t5 = t2;
            t6 = (t6 << 2);
            t5 = (t5 + t10);
            u11 = (*(float *)((t6 + t5)));
            u11 = _builtin_fabsf(u11);
            u13 = u11;
            t8 = (t8 + 0x1);
            if (u13 > u12) {
                u12 = u13;
            }
        }
        u11 = 0.0f;
        if (u12 == u11) {
            break;
        }
        u11 = 1.0f;
        u11 = (u11 / u12);
        t5 = t9;
        t5 = (t5 << 2);
        t9 = (t9 + 0x1);
        *(float *)(((((int)stk + 0) + 0x10) + t5)) = u11;
    }
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E1448))(t2, 0x4, t8, t9, u12, u13, 0.0f, 1.0f);
}

