/* player-select and stage-select flow (init update and VS announce); pad button helpers (0c0a41a0-0c0a71c4) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int menu_ui_spawn_23(int);
int menu_stage_select_spawn_marker(int);
int menu_ui_spawn_26(void);
int menu_ui_spawn_30(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0158d8(void);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int bgm_stop_streams(void);
int FUN_0c0a32dc(void);
int bgm_play_demo_00(void);
int menu_ui_spawn_01(void);
int menu_ui_spawn_02(void);
int menu_ui_spawn_03(void);
int menu_ui_spawn_04(void);
int menu_ui_spawn_05(void);
int menu_ui_spawn_06(void);
int cam_set_priority(int, int);
int cam_request_mode_with_args(int, int, int, int);
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o0_int { int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int ui_fade_start(int, int, int, int);
int bgm_stop_all(void);
int bgm_play_player_select(void);
int snd_play_announcer(int, int);
int menu_ui_spawn_08(void);
int menu_ui_spawn_09(int);
int menu_ui_spawn_11(void);
int menu_ui_spawn_12(void);
int menu_ui_spawn_15(void);
int menu_ui_spawn_17(void);
int menu_ui_spawn_18(void);
int menu_ui_spawn_19(void);
int menu_ui_spawn_20(void);
int menu_ui_spawn_22(void);
int cam_force_mode_23(int);
int bgm_play_stage_select(void);
extern int menu_player_select_slot_update();
int menu_ui_spawn_24(void);
int menu_ui_spawn_28(void);
int menu_ui_spawn_35(int);
struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int FUN_0c0158e4(void);
int fx_spawn_0488b8(int, int, int, int);
int FUN_0c0d5292(void);
int item_clear_state(void);
int FUN_0c058f44(void);
int obj_system_init(void);
struct o24_int { char p[0x24]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
int snd_play_side_se(int, int);
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int ui_draw_text_stub(int, int, float, float, float, float);
int sprintf(int, int, int, int, int);
struct o74_uchar { char p[0x74]; unsigned char v; };
int menu_ui_spawn_25(int, int, int);
int menu_ui_spawn_36(int);
int cam_reset_shake(int, int, int, int);
struct oD_short { char p[0xD]; short v; };
struct oD_ushort { char p[0xD]; unsigned short v; };
int menu_ui_spawn_32(int);
int menu_ui_spawn_33(void);
int menu_stage_select_step_dispatch(int, int, int, int);
typedef struct { int x, y, z; } S12;
extern char *obj_create(int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o94_float { char p[0x94]; float v; };
int FUN_0c0e6fe8(void);
struct o40_float { char p[0x40]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
float math_rand_float(void);
int FUN_0c0e6f24(void);

int menu_pad_any_button(int a4);
int FUN_0c0a43b8(int a4);
int menu_player_select_init(void);
int menu_player_select_update_slots(void);
int FUN_0c0a4604(void);
int menu_find_cursor_task(void);
int menu_stage_select_spawn_ui(void);
int FUN_0c0a5086(void);
int FUN_0c0a519c(int a4, int a5);

int menu_pad_any_button(int a4)
{
    int t1;

    t1 = *(int *)(((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F8));
    if ((0x4 & t1) == 0) {
        if ((0x2 & t1) == 0) {
            if ((0x400 & t1) == 0) {
                if ((0x200 & t1) != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int menu_scene1_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t0 = *(signed char *)0xC7F3071;
                if ((unsigned char)t0 != 1) {
                    if ((unsigned char)t0 != 2) {
                        if ((unsigned char)t0 != 3) {
                            return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0A4340))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                    }
                    if ((0x8 & (*(int *)0xC7F321C)) != 0) {
                        return ((int (*)(int, int, int, int))(0xC0A4352))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                }
                if ((0x8 & ((((struct o3C_int *)0xC7F31BC)->v))) == 0) {
                    return ((int (*)(int, int, int, int))(0xC0A4358))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4352))(0xC7F31F0, 0x8, 0xC7F31F0, a7);
            }
            return ((int (*)(void))(0xC0A4390))();
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        game_reset_objects();
        bgm_stop_streams();
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c0158d8();
        res_switch_scene(0x4);
        FUN_0c0a32dc();
        bgm_play_demo_00();
        FUN_0c05f2d4(0x1, 0x0);
        (((struct o0_float *)0xC494060)->v) = 0.0f;
        (((struct o4_float *)0xC494060)->v) = 110.0f;
        (((struct o8_float *)0xC494060)->v) = 0.0f;
        (((struct oC_float *)0xC494060)->v) = 0.0f;
        (((struct o10_float *)0xC494060)->v) = 110.0f;
        (((struct o14_float *)0xC494060)->v) = 0.0f;
        cam_set_priority(0x0, 0x40);
        cam_request_mode_with_args(0x17, 0x40, 0xC494060, 0xC49406C);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    *(unsigned short *)0xC7F3036 = 0xB4;
    menu_ui_spawn_01();
    menu_ui_spawn_02();
    menu_ui_spawn_03();
    menu_ui_spawn_04();
    menu_ui_spawn_05();
    return menu_ui_spawn_06();
}

int FUN_0c0a43b8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2E45) + 0x0));
    t1 = *(signed char *)(((0xC1525BF + (signed char)(((t0 << 2) << 1) + t0)) + (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2E45) + 0x1)))));
    (((struct o0_uchar *)0xC7F3051)->v) = t1;
    (((struct o1_uchar *)0xC7F3051)->v) = t1;
    *(unsigned char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)) = (*(signed char *)0xC7F3051);
    (((struct o71EC_uchar *)(((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
    t0 = *(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4));
    t1 = t0;
    if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == t0) {
        if ((*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == (*(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC)))) {
            t0 = 0x1;
            if ((*(signed char *)((((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == 1) {
                t0 = 0x2;
            }
            (((struct o71EC_uchar *)(((unsigned short)((unsigned short)(0x1 - (signed char)a4) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = t0;
        }
        t1 = 0x71EC;
    }
    return t1;
}

int menu_player_select_init(void)
{
    (((struct o31_uchar *)0xC7F2EB6)->v) = 0x0;
    (((struct o30_uchar *)0xC7F2EB6)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2E3E)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2EB6)->v) = 0x0;
    (((struct o0_uchar *)0xC7F2E3E)->v) = 0x0;
    (((struct o0_uchar *)0xC7F2EB6)->v) = 0x0;
    *(unsigned char *)0xC7EB395 = 0x0;
    *(unsigned char *)0xC7E40C5 = 0x0;
    if ((*(signed char *)0xC7F301C) != 0) {
        (((struct o3_uchar *)0xC7F3071)->v) = 0x0;
        (((struct o0_uchar *)0xC7F3071)->v) = 0x3;
    }
    (((struct o0_uint *)0xC7F31BC)->v) = ((((struct o0_int *)0xC1525A8)->v));
    (((struct o4_uint *)0xC7F31BC)->v) = ((((struct o4_int *)0xC1525A8)->v));
    (((struct o8_uint *)0xC7F31BC)->v) = ((((struct o8_int *)0xC1525A8)->v));
    menu_ui_spawn_17();
    menu_ui_spawn_18();
    menu_ui_spawn_19();
    menu_ui_spawn_20();
    menu_ui_spawn_15();
    menu_ui_spawn_08();
    menu_ui_spawn_09(0x0);
    menu_ui_spawn_09(0x1);
    menu_ui_spawn_11();
    menu_ui_spawn_12();
    if ((*(signed char *)0xC7F4751) != 0) {
        menu_ui_spawn_22();
    }
    bgm_stop_all();
    bgm_play_player_select();
    snd_play_announcer(0x0, 0x17);
    snd_play_announcer(0x0, 0x18);
    FUN_0c05f2d4(0x1, 0x0);
    cam_force_mode_23(0x2);
    ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0xF);
    return FUN_0c0158d8();
}

int menu_player_select_update_slots(void)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t8;
    register int t14;

    t0 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 1) {
        if ((unsigned char)t0 != 2) {
            if ((unsigned char)t0 != 3) {
            } else {
                t1 = ((int (*)(int))(menu_player_select_slot_update))(0xC7E40C4);
                t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(menu_player_select_slot_update))(0xC7EB394, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            }
        } else {
            t5 = ((int (*)(int))(menu_player_select_slot_update))(0xC7EB394);
        }
    } else {
        t8 = ((int (*)(int))(menu_player_select_slot_update))(0xC7E40C4);
    }
    t14 = 0x45;
    if ((*(signed char *)0xC7F3074) == (unsigned char)(*(signed char *)0xC7F3071)) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c0a4604(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x4;
                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
                    return FUN_0c0d5292();
                }
                t0 = (((struct o0_short *)0xC7F3036)->v);
                (((struct o0_ushort *)0xC7F3036)->v) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    t0 = *(signed char *)0xC7F2EE6;
                    (((struct o2_uchar *)0xC7F2EE4)->v) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            t0 = *(signed char *)0xC7F3071;
            if ((int)(unsigned char)t0 <= (int)0x2) {
                if ((*(signed char *)(((unsigned char)((unsigned short)(0xFF + t0) * (unsigned short)0x78) + 0xC7F2E3D))) != 0) {
                    (((struct o2_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
                    (((struct o38_uchar *)0xC7F3036)->v) = 0x1;
                    (((struct o0_ushort *)0xC7F3036)->v) = 0x1F;
                    FUN_0c0a43b8(((unsigned char)(*(signed char *)0xC7F3071) - 1));
                    *(unsigned char *)0xC7F3082 = 0x1;
                    return FUN_0c0158e4();
                }
            }
            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x3;
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o3_uchar *)0xC7F2EE4)->v) = 0x1;
            return 0x1;
        }
    } else {
        (((struct o2_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
        (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
    }
    (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
    if (((((struct oA_short *)0xC7F2EE4)->v)) == 40) {
        fx_spawn_0488b8(0x0, 0x0, 0x14, 0x0);
    }
    t0 = (((struct oA_short *)0xC7F2EE4)->v);
    t1 = t0;
    if ((int)t0 < (int)0x3C) {
    } else {
        t0 = *(signed char *)0xC7F2EE6;
        (((struct o2_uchar *)0xC7F2EE4)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int menu_player_select_scene_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return FUN_0c0a4604();
            }
            return menu_player_select_update_slots();
        }
        *(unsigned char *)0xC7F2EE5 = ((*(signed char *)0xC7F2EE5) + 0x1);
        item_clear_state();
        FUN_0c058f44();
        obj_system_init();
        FUN_0c0a32dc();
        res_switch_scene(0x5);
        *(unsigned char *)0xC7F3082 = 0x0;
        return menu_player_select_init();
    }
    *(unsigned char *)0xC7F2EE5 = 0x2;
    item_clear_state();
    FUN_0c058f44();
    obj_system_init();
    res_switch_scene(0x5);
    return menu_player_select_init();
}

int menu_check_start_button(int a4)
{
    if (((*(int *)((0xC7F31F8 + (signed char)((((a4 << 2) << 1) + a4) << 2)))) & 8) != 0) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x63;
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        FUN_0c0a43b8(a4);
        return 0x1;
    }
    return 0x0;
}

int menu_check_start_any_pad(void)
{
    int t1;

    if (((((((struct o0_int *)0xC7F31F8)->v)) & 0x8) == 0) && (t1 = (((struct o24_int *)0xC7F31F8)->v), (t1 & 0x8) == 0)) {
        return 0x0;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x63;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x1;
}

int FUN_0c0a502e(void)
{
    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
    return 0x0;
}

int menu_find_cursor_task(void)
{
    register int t1;

    t1 = (*(int *)0xC7E4084);
    for (;;) {
        if ((*(int *)((t1 + 0x10))) == 0xC0A6CAE) {
            break;
        }
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t1;
}

int menu_stage_select_spawn_ui(void)
{
    register int t0;

    t0 = menu_find_cursor_task();
    if (t0 != 0) {
        menu_ui_spawn_23(t0);
        menu_stage_select_spawn_marker(t0);
        menu_ui_spawn_26();
        return menu_ui_spawn_30();
    }
    return t0;
}

int FUN_0c0a5086(void)
{
    register int t6;

    if ((unsigned char)(*(signed char *)0xC7F2EE6) == 0) {
        (((struct o1_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
        bgm_stop_streams();
    }
    t6 = *(signed char *)0xC7F3071;
    if ((unsigned char)t6 != 0) {
        if (((unsigned char)t6 != 1) && ((unsigned char)t6 != 2)) {
            if ((unsigned char)t6 != 3) {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x2;
                (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
            } else {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
                (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
            }
        } else {
            (((struct o0_uchar *)0xC7F2EE5)->v) = 0x2;
            (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
        (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    }
    return 0x0;
}

int menu_stage_select_init(int a4)
{
    int stk[1];
    register int t0;
    register int t2;
    register int t3;
    register int t18;
    register int t19;
    register int t22;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
            (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
            t22 = 0x0;
        } else {
            t2 = *(short *)0xC7F303C;
            *(unsigned short *)0xC7F303C = (t2 - 1);
            t22 = (unsigned char)t0;
            if ((int)(short)(t2 - 1) <= 0) {
                t3 = *(signed char *)0xC7F2EE7;
                (((struct o1_uchar *)0xC7F2EE6)->v) = (t3 + 0x1);
                t22 = (t3 + 0x1);
            }
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        bgm_play_stage_select();
        *(unsigned short *)0xC7F303C = 0x1E;
        cam_force_mode_23(0x1);
        menu_ui_spawn_24();
        menu_ui_spawn_28();
        menu_ui_spawn_35((*(signed char *)(((int)stk + 0))));
        t22 = menu_stage_select_spawn_ui();
        t18 = *(short *)0xC7F303C;
        *(unsigned short *)0xC7F303C = (t18 - 1);
        if ((int)(short)(t18 - 1) <= 0) {
            t19 = *(signed char *)0xC7F2EE7;
            (((struct o1_uchar *)0xC7F2EE6)->v) = (t19 + 0x1);
            t22 = (t19 + 0x1);
        }
    }
    return t22;
}

int FUN_0c0a519c(int a4, int a5)
{
    int stk[1];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = a5;
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    v0_0 = (0xC7F302C);
    v0_2 = (0xC7F4750);
    if (((signed char)v0_1 != 0)) goto L_C0A51F2;
    *(unsigned short *)((v0_0 + 0x16)) = ((*(short *)((v0_0 + 0x16))) + 0x1);
    v0_2 = *(signed char *)((v0_2 + 0x1));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0A51C8;
    if ((v0_1 == 1)) goto L_C0A51D8;
    if ((v0_1 == 2)) goto L_C0A51E4;
    if ((v0_1 == 3)) goto L_C0A51E4;
    L_C0A51C8:;
    if (((*(short *)((v0_0 + 0x16))) == 2)) goto L_C0A51DE;
    if (((*(short *)((v0_0 + 0x16))) != 7)) goto L_C0A51E4;
    L_C0A51DE:;
    *(unsigned short *)((v0_0 + 0x16)) = ((*(short *)((v0_0 + 0x16))) + 0x1);
    L_C0A51E4:;
    if (((int)(*(short *)((v0_0 + 0x16))) <= (int)0x9)) goto L_C0A5234;
    *(unsigned short *)((v0_0 + 0x16)) = 0x0;
    L_C0A5234:;
    return snd_play_side_se((*(signed char *)(((int)stk + 0))), 0x41);
    L_C0A51D8:;
    if (((*(short *)((v0_0 + 0x16))) != 7)) goto L_C0A51E4;
    goto L_C0A51DE;
    L_C0A51F2:;
    *(unsigned short *)((v0_0 + 0x16)) = ((*(short *)((v0_0 + 0x16))) - 1);
    v0_2 = *(signed char *)((v0_2 + 0x1));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0A520E;
    if ((v0_1 == 1)) goto L_C0A521E;
    if ((v0_1 == 2)) goto L_C0A522A;
    if ((v0_1 == 3)) goto L_C0A522A;
    L_C0A520E:;
    if (((*(short *)((v0_0 + 0x16))) == 2)) goto L_C0A5224;
    if (((*(short *)((v0_0 + 0x16))) != 7)) goto L_C0A522A;
    L_C0A5224:;
    *(unsigned short *)((v0_0 + 0x16)) = ((*(short *)((v0_0 + 0x16))) - 1);
    L_C0A522A:;
    if (((int)(*(short *)((v0_0 + 0x16))) >= 0)) goto L_C0A5234;
    *(unsigned short *)((v0_0 + 0x16)) = 0x9;
    goto L_C0A5234;
    L_C0A521E:;
    if (((*(short *)((v0_0 + 0x16))) != 7)) goto L_C0A522A;
    goto L_C0A5224;
}

int FUN_0c0a5240(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t5 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t5 != 0) {
        if ((unsigned char)t5 != 1) {
            (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
            (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
            return 0x0;
        }
        if (((((struct o0_short *)0xC7F303C)->v)) != 0) {
            t5 = (((struct o2_short *)0xC7F303C)->v);
            (((struct o2_ushort *)0xC7F303C)->v) = (t5 - 1);
            if ((short)(t5 - 1) == 0) {
                (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
                (((struct o0_ushort *)0xC7F303C)->v) = (((((struct o0_short *)0xC7F303C)->v)) - 1);
            }
        }
        t5 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t5 != 0) {
            t6 = 0xC7F2EE7;
            t7 = 0xA;
            t8 = 0x14;
            if ((unsigned char)t5 != 1) {
            } else {
                if (((*(signed char *)0xC7E40C8) != 10) && (t0 = *(signed char *)0xC7EB398, t0 != 10)) {
                    if ((int)((((struct o0_short *)0xC7F303C)->v)) > 0) {
                        t0 = menu_pad_any_button(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                            snd_play_side_se(a4, 0x42);
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                            t0 = *(signed char *)0xC7F3051;
                            *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                        } else {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            if (((((struct o8_short *)0xC7F303C)->v)) != 0) {
                                (((struct o8_ushort *)0xC7F303C)->v) = (((((struct o8_short *)0xC7F303C)->v)) - 1);
                                if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                                    if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                } else {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                }
                            } else {
                                t0 = *(int *)((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)));
                                if ((t0 & 128) != 0) {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                } else {
                                    if ((t0 & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                }
                            }
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        snd_play_side_se(a4, 0x42);
                        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        t0 = *(signed char *)0xC7F3051;
                        *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                    }
                } else {
                    (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
                    (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                    t0 = 0xC7E40C4;
                    t5 = 0xA;
                    t9 = 0x14;
                }
                t6 = t0;
                t7 = t5;
                t8 = t9;
            }
            t0 = t6;
            t5 = t7;
            t6 = t8;
        } else {
            t7 = (*(int *)0xC7E4084);
            for (;;) {
                if ((*(int *)((t7 + 0x10))) == 0xC0A6CAE) {
                    break;
                }
                t7 = (*(int *)((t7 + 0x18)));
            }
            if (((*(signed char *)((t7 + 0x8))) == 2) && (t1 = *(signed char *)((t7 + 0x9)), t1 == 3)) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                t1 = 0xC7F2EE7;
                t7 = 0xA;
                t8 = 0x14;
            } else {
                (((struct o8_ushort *)0xC7F303C)->v) = 0x14;
                t9 = *(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8));
                if ((t9 & 128) != 0) {
                    t10 = (((struct o6_short *)0xC7F303C)->v);
                    t11 = (((struct o4_short *)0xC7F303C)->v);
                    t12 = (t10 + 0x1);
                    if ((int)(short)(t10 + 0x1) > (int)0x9) {
                        t12 = 0x0;
                    }
                    if (t11 != (short)t12) {
                        t10 = 0xC7F3040;
                        t11 = 0x9;
                        t12 = 0x14;
                    } else {
                        (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                        FUN_0c0a519c(0x0, a4);
                    }
                    t13 = t10;
                    t10 = t11;
                    t11 = t12;
                } else {
                    t12 = 0xC7F3040;
                    t14 = 0x9;
                    t11 = 0x14;
                    if ((t9 & 64) != 0) {
                        t9 = (((struct o6_short *)0xC7F303C)->v);
                        t14 = (((struct o4_short *)0xC7F303C)->v);
                        t11 = (t9 - 1);
                        if ((int)(short)(t9 - 1) < 0) {
                            t11 = 0x9;
                        }
                        if (t14 == (short)t11) {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            FUN_0c0a519c(0x1, a4);
                        } else {
                            t9 = 0xC7F3040;
                            t14 = 0x9;
                            t11 = 0x14;
                        }
                        t12 = t9;
                    }
                    t13 = t12;
                    t10 = t14;
                }
                t1 = t13;
                t7 = t10;
                t8 = t11;
            }
            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
            t0 = t1;
            t5 = t7;
            t6 = t8;
        }
        *(volatile short *)0xC7F303C;
        sprintf(0xC7F36B8, t0, t5, t6, 0xC152A78);
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        (((struct o0_ushort *)0xC7F303C)->v) = 0x14;
        (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
        (((struct o6_ushort *)0xC7F303C)->v) = (*(signed char *)((0xC15262F + (*(signed char *)((((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))))));
        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
        if (((*(signed char *)0xC7E40C8) != 10) && (t2 = *(signed char *)0xC7EB398, t2 != 10)) {
        } else {
            (((struct o6_ushort *)0xC7F303C)->v) = (*(signed char *)0xC152638);
            (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
        }
        if (((((struct o0_short *)0xC7F303C)->v)) != 0) {
            t0 = (((struct o2_short *)0xC7F303C)->v);
            (((struct o2_ushort *)0xC7F303C)->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o2_ushort *)0xC7F303C)->v) = 0x3C;
                (((struct o0_ushort *)0xC7F303C)->v) = (((((struct o0_short *)0xC7F303C)->v)) - 1);
            }
        }
        t0 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t0 != 0) {
            t1 = 0xC15262F;
            t2 = 0xA;
            t5 = 0x14;
            if ((unsigned char)t0 != 1) {
            } else {
                if (((*(signed char *)0xC7E40C8) != 10) && (t3 = *(signed char *)0xC7EB398, t3 != 10)) {
                    if ((int)((((struct o0_short *)0xC7F303C)->v)) > 0) {
                        t0 = menu_pad_any_button(a4);
                        if ((signed char)t0 != 0) {
                            (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                            snd_play_side_se(a4, 0x42);
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                            t0 = *(signed char *)0xC7F3051;
                            *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                        } else {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            if (((((struct o8_short *)0xC7F303C)->v)) != 0) {
                                (((struct o8_ushort *)0xC7F303C)->v) = (((((struct o8_short *)0xC7F303C)->v)) - 1);
                                if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 128) == 0) {
                                    if (((*(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8))) & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                } else {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                }
                            } else {
                                t0 = *(int *)((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)));
                                if ((t0 & 128) != 0) {
                                    FUN_0c0a519c(0x0, a4);
                                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                } else {
                                    if ((t0 & 64) != 0) {
                                        FUN_0c0a519c(0x1, a4);
                                        (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) - 1);
                                    }
                                }
                            }
                            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        snd_play_side_se(a4, 0x42);
                        (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
                        t0 = *(signed char *)0xC7F3051;
                        *(unsigned int *)((((t0 << 2) + 0xC7F2FB8) + 0x0)) = ((*(int *)((((t0 << 2) + 0xC7F2FB8) + 0x0))) + 0x1);
                    }
                } else {
                    (((struct o15_uchar *)0xC7F303C)->v) = 0xA;
                    (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                    t0 = 0xC7E40C4;
                    t3 = 0xA;
                    t6 = 0x14;
                }
                t1 = t0;
                t2 = t3;
                t5 = t6;
            }
            t0 = t1;
            t1 = t2;
            t2 = t5;
        } else {
            t3 = (*(int *)0xC7E4084);
            for (;;) {
                if ((*(int *)((t3 + 0x10))) == 0xC0A6CAE) {
                    break;
                }
                t3 = (*(int *)((t3 + 0x18)));
            }
            if (((*(signed char *)((t3 + 0x8))) == 2) && (t1 = *(signed char *)((t3 + 0x9)), t1 == 3)) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                t3 = 0xC15262F;
                t1 = 0xA;
                t5 = 0x14;
            } else {
                (((struct o8_ushort *)0xC7F303C)->v) = 0x14;
                t6 = *(int *)((((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0) + 0x8));
                if ((t6 & 128) != 0) {
                    t7 = (((struct o6_short *)0xC7F303C)->v);
                    t8 = (((struct o4_short *)0xC7F303C)->v);
                    t9 = (t7 + 0x1);
                    if ((int)(short)(t7 + 0x1) > (int)0x9) {
                        t9 = 0x0;
                    }
                    if (t8 != (short)t9) {
                        t7 = 0xC7F3040;
                        t8 = 0x9;
                        t9 = 0x14;
                    } else {
                        (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                        FUN_0c0a519c(0x0, a4);
                    }
                    t10 = t7;
                    t7 = t8;
                    t8 = t9;
                } else {
                    t9 = 0xC7F3040;
                    t11 = 0x9;
                    t12 = 0x14;
                    if ((t6 & 64) != 0) {
                        t6 = (((struct o6_short *)0xC7F303C)->v);
                        t13 = (((struct o4_short *)0xC7F303C)->v);
                        t14 = (t6 - 1);
                        if ((int)(short)(t6 - 1) < 0) {
                            t14 = 0x9;
                        }
                        if (t13 == (short)t14) {
                            (((struct o4_ushort *)0xC7F303C)->v) = ((((struct o6_short *)0xC7F303C)->v));
                            FUN_0c0a519c(0x1, a4);
                        } else {
                            t6 = 0xC7F3040;
                            t13 = 0x9;
                            t14 = 0x14;
                        }
                        t9 = t6;
                        t11 = t13;
                        t12 = t14;
                    }
                    t10 = t9;
                    t7 = t11;
                    t8 = t12;
                }
                t3 = t10;
                t1 = t7;
                t5 = t8;
            }
            (((struct o15_uchar *)0xC7F303C)->v) = (*(signed char *)((0xC152639 + ((((struct o6_short *)0xC7F303C)->v)))));
            t0 = t3;
            t2 = t5;
        }
        *(volatile short *)0xC7F303C;
        sprintf(0xC7F36B8, t0, t1, t2, 0xC152A78);
    }
    t0 = 0x17C;
    if ((signed char)a4 == 0) {
        t0 = 0x104;
    }
    return ui_draw_text_stub(0xC7F36B8, 0x1, (float)t0, 280.0f, 1.0f, 1.0f);
}

int menu_stage_select_open(int a4)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t4;
    register int t11;
    register int t12;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            
            (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x2);
            (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
            t7 = 0x0;
        } else {
            t3 = (((struct o0_short *)0xC7F3036)->v);
            (((struct o0_ushort *)0xC7F3036)->v) = (t3 - 1);
            t7 = (short)(t3 - 1);
            if ((int)(short)(t3 - 1) <= 0) {
                t4 = *(signed char *)0xC7F2EE7;
                (((struct o1_uchar *)0xC7F2EE6)->v) = (t4 + 0x1);
                t7 = (t4 + 0x1);
            }
        }
        return t7;
    }
    (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
    bgm_play_stage_select();
    t11 = *(signed char *)(((int)stk + 0));
    t12 = *(signed char *)((((unsigned char)((unsigned short)t11 * (unsigned short)0x78) + 0xC7F2E45) + 0x0));
    (((struct o1B_uchar *)0xC7F3036)->v) = (*(signed char *)(((0xC1525BF + (signed char)(((t12 << 2) << 1) + t12)) + (*(signed char *)((((unsigned char)((unsigned short)t11 * (unsigned short)0x78) + 0xC7F2E45) + 0x1))))));
    (((struct o1C_uchar *)0xC7F3036)->v) = (*(signed char *)0xC7F3051);
    menu_ui_spawn_28();
    menu_stage_select_spawn_ui();
    (((struct o0_ushort *)0xC7F3036)->v) = 0x1E;
    return cam_force_mode_23(0x1);
}

int FUN_0c0a58f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 == 3) {
                    t1 = *(signed char *)0xC7F2EE8;
                    if ((unsigned char)t1 != 0) {
                        if ((unsigned char)t1 != 1) {
                            if ((unsigned char)t1 != 2) {
                                (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                                (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
                                *(unsigned short *)0xC7F3036 = 0x1E;
                                return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                            }
                            if (((*(int *)(((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F8))) & 0x604) != 0) {
                                *(unsigned short *)0xC7F3036 = 0x1;
                            }
                            t1 = *(short *)0xC7F3036;
                            *(unsigned short *)0xC7F3036 = (t1 - 1);
                            if ((int)(short)(t1 - 1) <= 0) {
                                (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                                return ((int (*)(int, int, int, int))(0xC0A5AD8))((signed char)((((a4 << 2) << 1) + a4) << 2), 0xC7F2EE7, 0x0, 0xC7F3036);
                            }
                            return ((int (*)(int, int, int, int))(0xC0A5AD8))((signed char)((((a4 << 2) << 1) + a4) << 2), 0xC7F2EE7, 0x0, 0xC7F3036);
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        *(unsigned short *)0xC7F3036 = 0x78;
                    }
                    t1 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        *(unsigned short *)0xC7F3036 = 0x78;
                        return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                if ((unsigned char)t0 == 4) {
                    t0 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        return ((int (*)(int, int, int, int))(0xC0A5AC6))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                return ((int (*)(int, int, int, int))(0xC0A5ACE))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
            }
            t0 = *(signed char *)0xC7F2EE8;
            if ((unsigned char)t0 != 0) {
                if ((unsigned char)t0 == 1) {
                    t0 = *(short *)0xC7F3036;
                    *(unsigned short *)0xC7F3036 = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
                        return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(a4, 0xC7F2EE7, 0x0, 0xC7F3036);
                }
                (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
                t0 = 0x7;
                if ((int)(*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) >= (int)0x7) {
                    t0 = 0x8;
                }
                menu_ui_spawn_25(a4, (*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))), t0);
                t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56));
                if ((int)t0 > 0) {
                    if ((int)t0 <= (int)0xA) {
                        return menu_ui_spawn_36((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))));
                    }
                    return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            t0 = menu_find_cursor_task();
            if ((*(signed char *)((t0 + 0x8))) != 2) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            if ((*(signed char *)((t0 + 0x9))) != 3) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(t0, a5, a6, a7);
            }
            (((struct o1_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
            *(unsigned short *)0xC7F3036 = 0x3C;
            if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) != 7) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0), a5, a6, a7);
            }
            if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x74))) != 0) {
                return ((int (*)(int, int, int, int))(0xC0A5AD8))(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0), a5, a6, a7);
            }
            cam_reset_shake(0x5, 0x3C, 0x2, 0x5);
            (((struct o74_uchar *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x1;
            *(unsigned short *)0xC7F3036 = 0x78;
            return ((int (*)(void))(0xC0A5AD8))();
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    }
    (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    (((struct o1_uchar *)0xC7F2EE7)->v) = 0x0;
    return FUN_0c0a43b8(a4);
}

int menu_vs_announce_names(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            return ((int (*)(int, int, int, int))(0xC0A5CA0))(0xC7F2EE7, 0x0, a6, a7);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 0) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)0xC7E40C8, t0 == 0)) {
                t0 = ((*(signed char *)0xC7E40C8) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
            }
            snd_play_announcer(0x0, t0);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 40) {
            snd_play_announcer(0x0, 0x16);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 80) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t1 = *(signed char *)0xC7EB398, t1 == 0)) {
                t0 = ((*(signed char *)0xC7EB398) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
            }
            snd_play_announcer(0x1, t0);
        }
    } else {
        (((struct o0_uchar *)0xC7F2EE7)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oD_ushort *)0xC7F2EE7)->v) = 0x0;
        menu_ui_spawn_32(0x0);
        menu_ui_spawn_32(0x1);
        menu_ui_spawn_33();
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 0) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t2 = *(signed char *)0xC7E40C8, t2 == 0)) {
                t0 = ((*(signed char *)0xC7E40C8) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7E40C8))));
            }
            snd_play_announcer(0x0, t0);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 40) {
            snd_play_announcer(0x0, 0x16);
        }
        if (((((struct oD_short *)0xC7F2EE7)->v)) == 80) {
            if (((*(signed char *)0xC7F2F08) != 0) && (t3 = *(signed char *)0xC7EB398, t3 == 0)) {
                t0 = ((*(signed char *)0xC7EB398) + 0xA);
            } else {
                t0 = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7EB398))));
            }
            snd_play_announcer(0x1, t0);
        }
    }
    t0 = (((struct oD_short *)0xC7F2EE7)->v);
    (((struct oD_ushort *)0xC7F2EE7)->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA0) {
        t0 = *(signed char *)0xC7F2EE7;
        (((struct o0_uchar *)0xC7F2EE7)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int menu_stage_select_scene_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    return ((int (*)(void))(0xC0A5CEA))();
                }
                return ((int (*)(void))(0xC0A5CB8))();
            }
            return menu_stage_select_step_dispatch(a4, a5, a6, a7);
        }
        return ((int (*)(void))(0xC0A55C6))();
    }
    return FUN_0c0a5086();
}

char *ui_task_create(void)
{
    S12 tmpl;
    char *obj;

    tmpl = *(S12 *)0x0C152A7C;
    obj = obj_create(5, 1, 1, 0);
    if (obj) {
        *obj = 1;
        *(S12 *)(obj + 80) = tmpl;
    }
    return obj;
}

int menu_ui_task_01(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t1 = t0;
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    t0 = 0x50;
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int menu_ui_task_02(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                t0 = *(signed char *)((a4 + 0x9));
                if (t0 != 0) {
                    t1 = t0;
                } else {
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        t0 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                        t0 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
                        if ((int)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x18))) > (int)0x8000) {
                            *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x18)) = 0x8000;
                        }
                        t0 = 0x2E0;
                    } else {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t0 = (t3 + 0x1);
                    }
                    t1 = t0;
                }
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    return 0xEC;
}

int menu_ui_task_03(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                t0 = *(signed char *)((a4 + 0x9));
                if (t0 != 0) {
                    t1 = t0;
                } else {
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                        t0 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                        t0 = (((struct o2E0_int *)(a4))->v);
                        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
                        if ((int)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x18))) > (int)0x4000) {
                            *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x18)) = 0x4000;
                        }
                        t0 = 0x2E0;
                    } else {
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t0 = (t3 + 0x1);
                    }
                    t1 = t0;
                }
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x2);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x18)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    return 0xEC;
}

int menu_ui_task_04(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
                if ((int)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x18))) > (int)0x8000) {
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x18)) = 0x8000;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x1E) {
                    u0 = (((struct o50_float *)(a4))->v);
                    (((struct o50_float *)(a4))->v) = (u0 + 0.049999997f);
                    if (!(1.0f > (u0 + 0.049999997f))) {
                        (((struct o50_float *)(a4))->v) = 1.0f;
                    }
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.049999997f);
                    if (!(1.5f > ((((struct o54_float *)(a4))->v)))) {
                        (((struct o54_float *)(a4))->v) = 1.5f;
                    }
                    u0 = (((struct o58_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = (u0 + 0.049999997f);
                    if (!(1.0f > (u0 + 0.049999997f))) {
                        (((struct o58_float *)(a4))->v) = 1.0f;
                    }
                    t0 = 0x58;
                } else {
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.049999997f);
                    u0 = *(float *)0xC0A6524;
                    if (!(((((struct o54_float *)(a4))->v)) > u0)) {
                        (((struct o54_float *)(a4))->v) = u0;
                    }
                    t0 = 0x54;
                }
                t1 = t0;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o24_float *)(a4))->v) = -10.0f;
        t0 = 0x0;
        for (;;) {
            FUN_0c0623a6((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A30, (t0 + 0x3));
            t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            *(unsigned int *)((t1 + 0x18)) = 0x0;
            *(unsigned int *)((t1 + 0x14)) = 0x0;
            *(unsigned int *)((t1 + 0x10)) = 0x0;
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x1;
            t1 = *(int *)((((t0 << 2) + (0x2E0 + a4)) + 0x0));
            t0 = (t0 + 0x1);
            *(unsigned short *)((t1 + 0x2)) = 0xF;
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        (((struct o50_float *)(a4))->v) = 0.5f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.5f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    return 0xEC;
}

int menu_ui_task_05(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o8_float *)(t0))->v) = (((((struct o8_float *)(t0))->v)) + 4.0f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) + 0.0249999985f);
            if (!(1.0f > ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            return 0x40;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x82;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x5);
        (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 150.0f;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c0a65a8(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    u0 = (((struct o58_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = (u0 + 0.049999997f);
                    (((struct o54_float *)(a4))->v) = (u0 + 0.049999997f);
                    (((struct o50_float *)(a4))->v) = (u0 + 0.049999997f);
                    t0 = 0x58;
                    if (((((struct o58_float *)(a4))->v)) > 1.0f) {
                        (((struct o58_float *)(a4))->v) = 1.0f;
                        (((struct o54_float *)(a4))->v) = 1.0f;
                        (((struct o50_float *)(a4))->v) = 1.0f;
                        t0 = 0x50;
                    }
                    t1 = t0;
                } else {
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = 1.0f;
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    t1 = 0x50;
                }
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x55;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x7);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
        (((struct o58_float *)(a4))->v) = 0.299999982f;
        (((struct o54_float *)(a4))->v) = 0.299999982f;
        (((struct o50_float *)(a4))->v) = 0.299999982f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
    }
    return 0xEC;
}

int menu_ui_task_06(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, 0x0, a6, a7);
            }
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                t0 = 0xC7F2EE4;
                if (((((struct oEE_short *)(a4))->v)) == 10) {
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x9) {
                        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
                    }
                    t0 = 0x9;
                }
                if (((((struct oF0_short *)(a4))->v)) != 0) {
                    t2 = t0;
                    t0 = 0x0;
                    t3 = 0x0;
                    for (;;) {
                        if ((int)t0 >= (int)((((struct oF0_short *)(a4))->v))) {
                            break;
                        }
                        t3 = 0x2E0;
                        t4 = t0;
                        t4 = (t4 << 2);
                        u0 = 1.0f;
                        t3 = (t3 + a4);
                        t3 = (t3 + t4);
                        t3 = (*(int *)((t3 + 0x0)));
                        u1 = ((((struct o1C_float *)(t3))->v));
                        t2 = (*(int *)((t3 + 0x14)));
                        u0 = (u0 / u1);
                        u0 = (u0 + 12.0f);
                        u0 = (u0 * 65536.0f);
                        u0 = (u0 / 360.0f);
                        t2 = (t2 + (int)u0);
                        *(unsigned int *)((t3 + 0x14)) = t2;
                        t5 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
                        t2 = (*(int *)((t5 + 0x14)));
                        t2 = (t2 & 0xFFFF);
                        *(unsigned int *)((t5 + 0x14)) = t2;
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        u1 = (u1 - 0.00999999978f);
                        (((struct o1C_float *)(t2))->v) = u1;
                        t3 = 0x2E0;
                        t3 = (t3 + a4);
                        t3 = (t3 + t4);
                        t3 = (*(int *)((t3 + 0x0)));
                        u1 = ((((struct o1C_float *)(t3))->v));
                        (((struct o24_float *)(t3))->v) = u1;
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        if (!(u1 > 0.0299999993f)) {
                            t2 = 0x2E0;
                            t2 = (t2 + a4);
                            t2 = (t2 + t4);
                            (((struct o1C_float *)((*(int *)((t2 + 0x0)))))->v) = 0.599999964f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            (((struct o24_float *)(t2))->v) = 0.599999964f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            (((struct o40_float *)(t2))->v) = 1.0f;
                        }
                        t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                        u1 = ((((struct o1C_float *)(t2))->v));
                        if (!(u1 > 0.099999994f)) {
                            t2 = 0x2E0;
                            t2 = (t2 + a4);
                            t2 = (t2 + t4);
                            t5 = *(int *)((t2 + 0x0));
                            u1 = ((((struct o40_float *)(t5))->v));
                            u1 = (u1 - 0.199999988f);
                            (((struct o40_float *)(t5))->v) = u1;
                            u1 = 0.0f;
                            t2 = (*(int *)((((0x2E0 + a4) + t4) + 0x0)));
                            u0 = ((((struct o40_float *)(t2))->v));
                            if (!(u0 > u1)) {
                                t2 = 0x2E0;
                                t2 = (t2 + a4);
                                t2 = (t2 + t4);
                                (((struct o40_float *)((*(int *)((t2 + 0x0)))))->v) = 0.0f;
                            }
                        }
                        t0 = (t0 + 0x1);
                    }
                }
                t1 = 0xF0;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            FUN_0c0623a6((*(int *)((((0x2E0 + a4) + t1) + 0x0))), 0xC664A30, 0x8);
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x1;
            t0 = (t0 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x2)) = 0x41F;
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 0.599999964f;
            (((struct o40_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 1.0f;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int menu_ui_task_07(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;
    float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        if (((int)(unsigned char)(*(signed char *)0xC7F2EE4) < (int)0x2) && (u0 = (((struct o1C_float *)0xC0A6AC4)->v), u1 = (((struct o24_float *)(a4))->v), !(u1 > u0))) {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            t0 = 0x24;
        } else {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x78;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0xD);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x30;
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = 1.0f;
    (((struct o20_float *)(t0))->v) = 1.0f;
    (((struct o1C_float *)(t0))->v) = 1.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o20_float *)(a4))->v) = ((((struct o0_float *)0xC0A6AC4)->v));
    (((struct o24_float *)(a4))->v) = 0.0f;
    math_rand_float();
    *(volatile float *)0xC0A6ACC;
    
    t0 = FUN_0c0e6f24();
    u0 = (float)(t0 + 0x14);
    if (0.0f > (float)(t0 + 0x14)) {
        u0 = ((float)(t0 + 0x14) + ((((struct o14_float *)0xC0A6AC4)->v)));
    }
    (((struct o3C_float *)(a4))->v) = u0;
    if (((int)(unsigned char)(*(signed char *)0xC7F2EE4) < (int)0x2) && (u2 = (((struct o1C_float *)0xC0A6AC4)->v), u3 = (((struct o24_float *)(a4))->v), !(u3 > u2))) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t0 = 0x24;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0a6b6e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            u0 = (((struct o58_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = (u0 + 0.099999994f);
            if (!(1.0f > (u0 + 0.099999994f))) {
                (((struct o58_float *)(a4))->v) = 1.0f;
            }
            u0 = (((struct o58_float *)(a4))->v);
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            t0 = 0x58;
            if (((((struct o58_float *)(a4))->v)) > (*(float *)0xC0A6CF0)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x6);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        (((struct o58_float *)(a4))->v) = 0.0299999993f;
        (((struct o54_float *)(a4))->v) = 0.0299999993f;
        (((struct o50_float *)(a4))->v) = 0.0299999993f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
    }
    return 0xEC;
}

int menu_ui_task_08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = *(signed char *)0xC7F3051;
        t1 = *(signed char *)((a4 + 0x9));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    t2 = t1;
                    if (t1 == 3) {
                        t1 = *(signed char *)((a4 + 0x4));
                        t3 = t1;
                        if (t1 != (*(signed char *)((((*(signed char *)(((t0 + 0xC1525B4) + 0x0))) + 0xC15262F) + 0x0)))) {
                            *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)(((t0 + 0xC1525B4) + 0x0))))));
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 - 1);
                            t3 = (t1 - 1);
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                } else {
                    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)(((t0 + 0xC1525B4) + 0x0))))));
                    if (((((struct oEC_short *)(a4))->v)) != (*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1))))) {
                        (((struct oEE_ushort *)(a4))->v) = ((*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1)))) - ((((struct oEC_short *)(a4))->v)));
                        if ((int)((((struct oEE_short *)(a4))->v)) >= (int)0x168) {
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 0x168);
                        }
                        if ((int)((((struct oEE_short *)(a4))->v)) < 0) {
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x168);
                        }
                        if ((int)((((struct oEE_short *)(a4))->v)) < (int)0xB4) {
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                            (((struct oF0_ushort *)(a4))->v) = 0x1;
                        } else {
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 2);
                            (((struct oF0_ushort *)(a4))->v) = 0x0;
                        }
                    } else {
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 0x168);
                    }
                    if ((int)((((struct oEC_short *)(a4))->v)) < 0) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x168);
                    }
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (int)(((float)((((struct oEC_short *)(a4))->v)) * ((((struct o0_float *)0xC0A6F88)->v))) / ((((struct o4_float *)0xC0A6F88)->v)));
                    t0 = (((struct o2E0_int *)(a4))->v);
                    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
                    t1 = 0x2E0;
                }
                t0 = t1;
            } else {
                t1 = *(signed char *)0xC7F2EE6;
                t2 = (unsigned char)t1;
                if ((int)(unsigned char)t1 <= 0) {
                } else {
                    t1 = *(signed char *)0xC7F2EE7;
                    t3 = (unsigned char)t1;
                    if ((int)(unsigned char)t1 <= 0) {
                    } else {
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x20);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
            t0 = *(signed char *)0xC7F2EE4;
            t2 = (unsigned char)t0;
            if ((int)(unsigned char)t0 < (int)0x3) {
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (int)(((float)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14))) * 360.0f) / 65536.0f);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xFFFFFFFE);
                t2 = 0xEC;
            }
            t1 = t2;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, 0x1);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)0xC7F2EE4;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < (int)0x3) {
    } else {
        *(unsigned char *)((a4 + 0x9)) = 0x2;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC15262F + (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))))));
        (((struct oEC_ushort *)(a4))->v) = (*(short *)((0xC1528E4 + ((*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051)))) << 1))));
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (int)(((float)((((struct oEC_short *)(a4))->v)) * ((((struct o0_float *)0xC0A6F88)->v))) / ((((struct o4_float *)0xC0A6F88)->v)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        t1 = 0x2E0;
    }
    return t1;
}

int menu_ui_task_09(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x4));
        t1 = t0;
        if (t0 == 0) {
            t0 = (((struct o2E0_int *)(a4))->v);
            t2 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (t2 ^ 0x1);
            t1 = (t2 ^ 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x2;
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        t0 = 0x0;
    }
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, t0);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    return 0x50;
}

int FUN_0c0a703e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            if (((((struct o24_float *)(a4))->v)) > (*(float *)0xC1528D0)) {
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            }
            if ((int)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x14))) < (int)0x8000) {
                t1 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x38E);
                t1 = 0x2E0;
            } else {
                t1 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t1 + 0x14)) = 0x8000;
            }
            return t1;
        }
        t1 = t0;
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o3C_float *)(a4))->v) = (((*(float *)0xC1528D0) - ((((struct o24_float *)(a4))->v))) / (*(float *)0xC0A71B0));
            t1 = 0x3C;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A78, 0x2);
    (((struct o94_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    FUN_0c0e6fe8();
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    t0 = 0x50;
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
        FUN_0c0e6fe8();
        t1 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t1 + 0x14)) = 0x8000;
        t0 = t1;
    }
    return t0;
}
