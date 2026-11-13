/* win counter text (0c0d46e4-0c0d54c0) */

/* named globals (symbols.txt) */
extern char g_select_ready_mask[];
int memset(int, int, int);
extern int sprintf(char *, const char *, ...);
extern float FUN_0c0d5bc0(void);
extern void ui_draw_text_stub(const char *, int, float, float, float, float);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
int vib_stop_all(void);
int bgm_duck(void);
int bgm_unduck(void);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int game_reset_objects(void);
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int FUN_0c01d304(int);
int FUN_0c01d328(void);
int FUN_0c01d336(void);
int FUN_0c01d924(void);
int game_draw_frame(void);
int FUN_0c055562(void);
int FUN_0c0555c4(void);
extern int FUN_0c05f952();
int snd_play_side_se(int, int);
extern int ui_draw_win_counts_both();
int game_play_dispatch_state(void);
int ui_draw_challenger_info(void);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int thunk_FUN_0c062d78(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int menu_scene1_update(void);
int menu_player_select_scene_update(void);
int menu_stage_select_scene_update(void);
int game_frame_update(int, int);
int ui_fade_reset(void);
int fx_spawn_058460(void);
int bgm_stop_streams(void);
int bgm_play_game_over(void);
int FUN_0c0a3f30(int);
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int fx_spawn_0586de(void);
int FUN_0c05fc00(void);
int FUN_0c05fc08(void);
int bgm_stop_all(void);
int bgm_play_here(void);
int cam_reset_shake(int, int, int, int);
struct oC_int { char p[0xC]; int v; };

int input_get_active_pads_mask(void);
int input_get_start_pressed_pad(void);
int FUN_0c0d48d6(void);
int thunk_FUN_0c0a3180(void);
int FUN_0c0d48ea(int a4);
int game_play_start_game_over(void);
int FUN_0c0d4ff4(int a4, int a5, int a6, int a7);
int FUN_0c0d54ac(void);

int rank_init_default_entries(void)
{
    register int t0;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x1)) = 0x41;
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x2)) = 0x50;
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x0)) = 0x1E;
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)) = 0x0;
        *(unsigned short *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC7F30B6) + 0x4)) = 0x0;
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x0)) = 0x43;
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x1)) = 0x41;
        *(unsigned char *)((((t0 << 2) + 0xC7F3156) + 0x2)) = 0x50;
        t3 = (t0 << 1);
        t0 = (t0 + 0x1);
        *(unsigned short *)(((t3 + 0xC7F317E) + 0x0)) = 0x2;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return 0x50;
}

int savedata_reset_default(void)
{
    memset(0xC7F302C, 0x0, 0x174);
    return ((int (*)(void))(0xC0D46E4))();
}

int FUN_0c0d479e(void)
{
    if ((*(signed char *)0xC7F4768) != 0) {
        return 0x1;
    }
    if ((*(signed char *)0xC7F4769) != 0) {
        return 0x2;
    }
    return 0x0;
}

void ui_draw_win_count(unsigned short index)
{
    char *rec = (char *)0x0C7F2DF0 + (unsigned char)(index * 120);
    char *text_buf = (char *)0x0C7F36B8;
    short value = *(short *)(rec + 68);
    const char *fmt;
    float pos_x;

    if (value > 1) {
        if (rec[9] == 0)
            fmt = (const char *)0x0C154828;
        else
            fmt = (const char *)0x0C154834;
    } else {
        if (rec[9] == 0)
            fmt = (const char *)0x0C15484C;
        else
            fmt = (const char *)0x0C154854;
    }
    sprintf(text_buf, fmt, value);
    pos_x = FUN_0c0d5bc0();
    ui_draw_text_stub(text_buf, 0, (float)(rec[9] * 19 + 1) * 16.0f, pos_x + 16.0f, 1.0f, 1.0f);
}

void FUN_0c0d487e(void)
{
    *(unsigned int *)0xC33F6B8 = 0x1;
}

int input_get_active_pads_mask(void)
{
    if (((((struct o0_int *)0xC361BF0)->v)) != 0) {
        if (((((struct o14_int *)0xC361BF0)->v)) != 0) {
            return 0x3;
        }
        if (((((struct o0_int *)0xC361BF0)->v)) != 0) {
            return 0x1;
        }
    }
    if (((((struct o14_int *)0xC361BF0)->v)) != 0) {
        return 0x2;
    }
    return 0x0;
}

int input_get_start_pressed_pad(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x1;
    }
    if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
        return 0x2;
    }
    return 0x0;
}

int FUN_0c0d48d6(void)
{
    vib_stop_all();
    return bgm_duck();
}

int thunk_FUN_0c0a3180(void)
{
    return bgm_unduck();
}

int FUN_0c0d48ea(int a4)
{
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x4;
    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = a4;
    return a4;
}

int game_play_step(int a4, int a5, int a6, int a7)
{
    int stk[9];
    int t1;
    register int t5;
    register int t6;
    register int t13;
    register int t24;
    register int t43;
    register int t44;
    register int t54;
    register int t63;
    register int t68;
    register int t90;
    register int t105;
    register int t110;
    register int t132;
    register int t150;
    register int t155;
    register int t174;
    register int t189;
    register int t190;
    register int t197;
    register int t202;
    register int t212;
    int t217;
    register int t220;
    int t230;
    register int t233;
    register int t253;
    register int t258;
    register int t264;
    int t269;
    register int t272;
    int t282;
    register int t285;
    register int t39;
    register int t40;
    int t69;
    int t70;
    register int t71;
    int t111;
    int t112;
    register int t113;
    int t156;
    int t157;
    register int t158;
    int t192;
    int t213;
    int t214;
    register int t215;
    int t219;
    int t232;
    int t248;
    int t265;
    int t266;
    register int t267;
    int t271;
    int t284;

    (((struct o4_uint *)0xC494AF8)->v) = ((((struct o0_int *)0xC494AF8)->v));
    t1 = input_get_active_pads_mask();
    (((struct o0_uint *)0xC494AF8)->v) = t1;
    (((struct o8_uint *)0xC494AF8)->v) = ((~((((struct o4_int *)0xC494AF8)->v))) & t1);
    (((struct oC_uint *)0xC494AF8)->v) = ((~((((struct o0_int *)0xC494AF8)->v))) & ((((struct o4_int *)0xC494AF8)->v)));
    t5 = *(signed char *)0xC7F3071;
    t6 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t6 != 0) {
        if ((unsigned char)t6 != 1) {
            if ((unsigned char)t6 == 2) {
                if ((((((struct o0_int *)0xC494AF8)->v)) & (unsigned char)t5) != (unsigned char)t5) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    t39 = 0xC7F2EE1;
                    t40 = 0xC7F2EE0;
                } else {
                    if ((unsigned char)(*(signed char *)0xC7F2EE1) == 0) {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        snd_play_side_se(0x0, 0x4D);
                        t13 = 0x0;
                        if (((unsigned char)(*(signed char *)0xC7F2EE2) - 0x1) != 0) {
                            t13 = 0x1;
                        }
                        FUN_0c01d304(t13);
                        (((struct o0_uint *)0xC7F3028)->v) = 0x1;
                    }
                    t24 = FUN_0c01d336();
                    switch (t24) {
                    case 0:
                        break;
                    case 1:
                        (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) - 1);
                        (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                        thunk_FUN_0c0a3180();
                        snd_play_side_se(0x0, 0x4D);
                        break;
                    case 2:
                        FUN_0c0d48ea(0x1);
                        break;
                    }
                }
                t43 = ((int (*)(int, int))(FUN_0c05f952))(t39, t40);
                return game_draw_frame();
            }
            if ((unsigned char)t6 == 3) {
                t44 = *(signed char *)0xC7F2EE1;
                if ((unsigned char)t44 != 0) {
                    if ((unsigned char)t44 != 1) {
                        if ((unsigned char)t44 != 2) {
                            if ((((((struct o0_int *)0xC494AF8)->v)) & (unsigned char)t5) == (unsigned char)t5) {
                                (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) - 1);
                                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                                if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                                    t54 = 0x1;
                                    if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) == 3) {
                                    } else {
                                        t54 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                                    }
                                    (((struct o2_uchar *)0xC7F2EE0)->v) = t54;
                                }
                            }
                        } else {
                            t63 = (((struct o10_short *)0xC7F2EE0)->v);
                            (((struct o10_ushort *)0xC7F2EE0)->v) = (t63 + 0x1);
                            if ((int)(short)(t63 + 0x1) >= (int)0x1E) {
                                (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                            }
                            if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                                t68 = FUN_0c0555c4();
                                if ((t68 != 0) && (t69 = *(signed char *)0xC7F3071, t70 = (((struct o0_int *)0xC494AF8)->v), t71 = *(signed char *)0xC7F3071, ((unsigned char)t69 & t70) != (unsigned char)t71)) {
                                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                                }
                            }
                            if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                                t90 = 0x1;
                                if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                                    t90 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                                }
                                (((struct o2_uchar *)0xC7F2EE0)->v) = t90;
                            }
                        }
                    } else {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        (((struct o10_ushort *)0xC7F2EE0)->v) = 0x0;
                        (((struct o12_ushort *)0xC7F2EE0)->v) = 0x0;
                        t105 = (((struct o10_short *)0xC7F2EE0)->v);
                        (((struct o10_ushort *)0xC7F2EE0)->v) = (t105 + 0x1);
                        if ((int)(short)(t105 + 0x1) >= (int)0x1E) {
                            (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                        }
                        if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                            t110 = FUN_0c0555c4();
                            if ((t110 != 0) && (t111 = *(signed char *)0xC7F3071, t112 = (((struct o0_int *)0xC494AF8)->v), t113 = *(signed char *)0xC7F3071, ((unsigned char)t111 & t112) != (unsigned char)t113)) {
                                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                            }
                        }
                        if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                            t132 = 0x1;
                            if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                                t132 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                            }
                            (((struct o2_uchar *)0xC7F2EE0)->v) = t132;
                        }
                    }
                } else {
                    (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    snd_play_side_se(0x0, 0x4D);
                    FUN_0c01d328();
                    (((struct o0_uint *)0xC7F3028)->v) = 0x1;
                    (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    (((struct o10_ushort *)0xC7F2EE0)->v) = 0x0;
                    (((struct o12_ushort *)0xC7F2EE0)->v) = 0x0;
                    t150 = (((struct o10_short *)0xC7F2EE0)->v);
                    (((struct o10_ushort *)0xC7F2EE0)->v) = (t150 + 0x1);
                    if ((int)(short)(t150 + 0x1) >= (int)0x1E) {
                        (((struct o1_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE1) + 0x1);
                    }
                    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
                        t155 = FUN_0c0555c4();
                        if ((t155 != 0) && (t156 = *(signed char *)0xC7F3071, t157 = (((struct o0_int *)0xC494AF8)->v), t158 = *(signed char *)0xC7F3071, ((unsigned char)t156 & t157) != (unsigned char)t158)) {
                            (((struct o1_uchar *)0xC7F2EE0)->v) = 0x1;
                        }
                    }
                    if (((((struct o8_int *)0xC494AF8)->v)) != 0) {
                        t174 = 0x1;
                        if (((unsigned char)(*(signed char *)0xC7F3071) & ((((struct o8_int *)0xC494AF8)->v))) != 3) {
                            t174 = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC494B00));
                        }
                        (((struct o2_uchar *)0xC7F2EE0)->v) = t174;
                    }
                }
                FUN_0c01d924();
                t189 = ((int (*)(void))(FUN_0c05f952))();
                return game_draw_frame();
            }
            t190 = *(signed char *)0xC7F2EE1;
            if ((unsigned char)t190 != 0) {
                if ((unsigned char)t190 != 1) {
                    return ((int (*)(int, int, int, int))(0xC0D4C90))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0D4C6A))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0D4C62))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8, a7);
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t192 = *(signed char *)0xC7F300E, t192 == 0)) {
            if ((*(signed char *)0xC7F301C) == 0) {
                ui_draw_challenger_info();
            } else {
                t197 = ((int (*)(int, int, int))(ui_draw_win_counts_both))(0xC7F2EE1, 0xC7F2EE0, 0xC494AF8);
            }
            game_play_dispatch_state();
            cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            t202 = ((int (*)(void))(FUN_0c05f952))();
            FUN_0c055562();
        }
        (((struct o0_uint *)0xC7F3028)->v) = 0x0;
        if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
            t212 = FUN_0c0555c4();
            if ((t212 != 0) && (t213 = *(signed char *)0xC7F3071, t214 = (((struct o0_int *)0xC494AF8)->v), t215 = *(signed char *)0xC7F3071, ((unsigned char)t213 & t214) != (unsigned char)t215)) {
                (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                FUN_0c0d48d6();
            } else {
                t217 = input_get_start_pressed_pad();
                if ((((unsigned char)(*(signed char *)0xC7F3071) & t217) != 0) && (t219 = *(signed char *)0xC7F2EE4, (unsigned char)t219 == 4)) {
                    t220 = FUN_0c0555c4();
                    if (t220 != 0) {
                        (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                        (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                        (((struct o2_uchar *)0xC7F2EE0)->v) = t217;
                        FUN_0c0d48d6();
                    }
                }
            }
        } else {
            t230 = input_get_start_pressed_pad();
            if ((((unsigned char)(*(signed char *)0xC7F3071) & t230) != 0) && (t232 = *(signed char *)0xC7F2EE4, (unsigned char)t232 == 4)) {
                t233 = FUN_0c0555c4();
                if (t233 != 0) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE0)->v) = t230;
                    FUN_0c0d48d6();
                }
            }
        }
        return game_draw_frame();
    }
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
    (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)g_select_ready_mask)->v) = 0x0;
    (((struct o0_uchar *)g_select_ready_mask)->v) = 0x0;
    (((struct o29_uchar *)0xC7F3028)->v) = 0x0;
    game_reset_objects();
    thunk_FUN_0c062d78();
    cam_init_records();
    *(unsigned int *)0xC33F6B8 = 0x0;
    if (((*(signed char *)0xC7F300B) == 0) && (t248 = *(signed char *)0xC7F300E, t248 == 0)) {
        if ((*(signed char *)0xC7F301C) == 0) {
            ui_draw_challenger_info();
        } else {
            t253 = ((int (*)(void))(ui_draw_win_counts_both))();
        }
        game_play_dispatch_state();
        cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        t258 = ((int (*)(void))(FUN_0c05f952))();
        FUN_0c055562();
    }
    (((struct o0_uint *)0xC7F3028)->v) = 0x0;
    if ((unsigned char)(*(signed char *)0xC7F2EE4) == 4) {
        t264 = FUN_0c0555c4();
        if ((t264 != 0) && (t265 = *(signed char *)0xC7F3071, t266 = (((struct o0_int *)0xC494AF8)->v), t267 = *(signed char *)0xC7F3071, ((unsigned char)t265 & t266) != (unsigned char)t267)) {
            (((struct o0_uchar *)0xC7F2EE0)->v) = 0x3;
            (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
            FUN_0c0d48d6();
        } else {
            t269 = input_get_start_pressed_pad();
            if ((((unsigned char)(*(signed char *)0xC7F3071) & t269) != 0) && (t271 = *(signed char *)0xC7F2EE4, (unsigned char)t271 == 4)) {
                t272 = FUN_0c0555c4();
                if (t272 != 0) {
                    (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE0)->v) = t269;
                    FUN_0c0d48d6();
                }
            }
        }
    } else {
        t282 = input_get_start_pressed_pad();
        if ((((unsigned char)(*(signed char *)0xC7F3071) & t282) != 0) && (t284 = *(signed char *)0xC7F2EE4, (unsigned char)t284 == 4)) {
            t285 = FUN_0c0555c4();
            if (t285 != 0) {
                (((struct o0_uchar *)0xC7F2EE0)->v) = ((*(signed char *)0xC7F2EE0) + 0x1);
                (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE0)->v) = t282;
                FUN_0c0d48d6();
            }
        }
    }
    return game_draw_frame();
}

int FUN_0c0d4d00(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)0xC7F3072;
    t2 = *(signed char *)0xC7F3071;
    if (((~(unsigned char)t1) & (unsigned char)t2) != 0) {
        if ((*(signed char *)0xC7F306E) == 0) {
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x1) {
                if (((unsigned char)t1 == 0) && (t0 = *(signed char *)0xC7F3071, t0 != 0)) {
                    if ((unsigned char)t2 != 0) {
                        if (((unsigned char)t2 != 1) && ((unsigned char)t2 != 2)) {
                            if ((unsigned char)t2 != 3) {
                                return ((int (*)(int, int, int, int))(0xC0D4DDC))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                            }
                        } else {
                            if ((*(signed char *)(((unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78) + 0xC7F2E3C))) == 0) {
                                (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
                                return ((int (*)(int, int, int, int))(0xC0D4DD8))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                            }
                        }
                    }
                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x2;
                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x1;
                    return ((int (*)(int, int, int, int))(0xC0D4DDC))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                }
                t0 = *(signed char *)0xC7F2EE4;
                if ((int)(unsigned char)t0 <= (int)0x2) {
                    if ((unsigned char)t0 == 2) {
                        if ((int)(unsigned char)(*(signed char *)0xC7F2EE5) >= (int)0x3) {
                            return ((int (*)(int, int, int, int))(0xC0D4DCE))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                        }
                        return ((int (*)(int, int, int, int))(0xC0D4DDC))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                    }
                    return ((int (*)(int, int, int, int))(0xC0D4DDC))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
                }
                return ((int (*)(int, int, int, int))(0xC0D4DCE))(0xC7F302C, 0xC7F2EE4, 0xC7F2EE0, 0x2);
            }
            return ((int (*)(int, int, int, int))(0xC0D4DE4))(0xC7F302C, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0D4DE4))(0xC7F302C, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0D4DE4))(0xC7F302C, a5, a6, a7);
}

int game_play_state_00(void)
{
    register int t1;

    game_reset_objects();
    *(unsigned char *)0xC7F2EE4 = 0x1;
    (((struct o0_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o2_uchar *)0xC7F306E)->v) = 0x0;
    (((struct o12_uchar *)0xC7F306E)->v) = 0x0;
    t1 = FUN_0c0d54ac();
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    return t1;
}

int game_play_state_01(void)
{
    FUN_0c0d54ac();
    menu_scene1_update();
    obj_tick_class(0x5);
    FUN_0c0593e0(0x5);
    obj_tick_class(0x6);
    return FUN_0c0593e0(0x6);
}

int game_play_state_02(void)
{
    FUN_0c0d54ac();
    menu_player_select_scene_update();
    obj_tick_class(0x5);
    FUN_0c0593e0(0x5);
    obj_tick_class(0x6);
    return FUN_0c0593e0(0x6);
}

int game_play_state_03(void)
{
    FUN_0c0d54ac();
    menu_stage_select_scene_update();
    obj_tick_class(0x5);
    FUN_0c0593e0(0x5);
    obj_tick_class(0x6);
    return FUN_0c0593e0(0x6);
}

int game_play_state_04(void)
{
    register int t0;

    FUN_0c0d54ac();
    if ((*(signed char *)0xC7F301C) == 0) {
        t0 = 0x0;
        if ((*(signed char *)0xC7F4768) != 0) {
            t0 = 0x1;
        }
        (((struct o0_uchar *)0xC7F319D)->v) = t0;
    } else {
        t0 = 0x0;
        if ((*(signed char *)0xC7F4769) != 0) {
            t0 = 0x1;
        }
        (((struct o1_uchar *)0xC7F319D)->v) = t0;
    }
    return game_frame_update(0xC7F302C, 0xC7F4750);
}

int game_play_state_05(void)
{
    FUN_0c0d54ac();
    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x6;
    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
    return 0x0;
}

int game_play_start_game_over(void)
{
    register int t5;

    FUN_0c0d54ac();
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    ui_fade_reset();
    bgm_stop_streams();
    bgm_play_game_over();
    t5 = FUN_0c0a3f30(0x1E);
    if ((*(signed char *)0xC7F3080) == 0) {
        return fx_spawn_058460();
    }
    return t5;
}

int FUN_0c0d4ff4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            return (unsigned char)t4;
        }
        if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
            (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
        }
        t4 = (((struct oC_short *)0xC7F2EE6)->v);
        if ((int)t4 <= 0) {
            if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t0 = *(signed char *)0xC7F2DF1, (int)t0 > (int)0x1)) {
                return t0;
            }
            if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t1 = *(signed char *)0xC7F2E69, (int)t1 > (int)0x1)) {
                return t1;
            }
            if ((*(int *)0xC33F6B8) != 0) {
                t0 = FUN_0c0d48ea(0x2);
                *(unsigned int *)0xC33F6B8 = 0x0;
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0D50A4))(0xC7F2EE0, 0xC7F2EF2, a6, a7);
        }
        return t4;
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct oC_ushort *)0xC7F2EE6)->v) = 0x12C;
    *(unsigned char *)0xC7F306E = 0x1;
    if (((((struct oC_short *)0xC7F2EE6)->v)) != 0) {
        (((struct oC_ushort *)0xC7F2EE6)->v) = (((((struct oC_short *)0xC7F2EE6)->v)) - 1);
    }
    t0 = (((struct oC_short *)0xC7F2EE6)->v);
    if ((int)t0 <= 0) {
        if (((int)(*(signed char *)0xC7F2DF1) <= (int)0x4) && (t2 = *(signed char *)0xC7F2DF1, (int)t2 > (int)0x1)) {
            return t2;
        }
        if (((int)(*(signed char *)0xC7F2E69) <= (int)0x4) && (t3 = *(signed char *)0xC7F2E69, (int)t3 > (int)0x1)) {
            return t3;
        }
        if ((*(int *)0xC33F6B8) != 0) {
            t1 = FUN_0c0d48ea(0x2);
            *(unsigned int *)0xC33F6B8 = 0x0;
            return t1;
        }
        return ((int (*)(int, int, int, int))(0xC0D50A4))(0xC7F2EE0, 0xC7F2EF2, a6, a7);
    }
    return t0;
}

int game_play_state_06(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
        } else {
            FUN_0c0d4ff4(a4, a5, a6, a7);
        }
    } else {
        game_play_start_game_over();
    }
    return ((int (*)(void))(0xC0D50BE))();
}

int FUN_0c0d5188(void)
{
    return ((((unsigned char)(*(signed char *)0xC7F2EE4) == 7)) ? 1 : 0);
}

int FUN_0c0d51d2(int a4)
{
    *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
    *(unsigned char *)((a4 + 0x6)) = 0x0;
    FUN_0c0d54ac();
    FUN_0c05fc00();
    bgm_stop_all();
    bgm_play_here();
    FUN_0c0a3f30(0x1D);
    fx_spawn_0586de();
    *(unsigned char *)0xC7F2E3E = 0x0;
    *(unsigned char *)0xC7F2EB6 = 0x0;
    FUN_0c05fc08();
    return cam_reset_shake(0x0, 0x0, 0x63, 0x0);
}

int game_play_state_07(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        return ((int (*)(void))(0xC0D5222))();
    }
    return ((int (*)(void))(0xC0D51D0))();
}

void FUN_0c0d5292(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC7F302C + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
}

void FUN_0c0d52aa(void)
{
    
}

int FUN_0c0d5428(void)
{
    register int t0;

    t0 = (((struct oC_int *)0xC7F2F1C)->v);
    (((struct oC_uint *)0xC7F2F1C)->v) = (t0 + 0x1);
    if ((unsigned int)(t0 + 0x1) > (unsigned int)0x3C) {
        (((struct o8_uint *)0xC7F2F1C)->v) = (((((struct o8_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct oC_uint *)0xC7F2F1C)->v) = 0x0;
    }
    if ((unsigned int)((((struct o8_int *)0xC7F2F1C)->v)) > (unsigned int)0x3C) {
        (((struct o4_uint *)0xC7F2F1C)->v) = (((((struct o4_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct o8_uint *)0xC7F2F1C)->v) = 0x0;
    }
    if ((unsigned int)((((struct o4_int *)0xC7F2F1C)->v)) > (unsigned int)0x3C) {
        (((struct o0_uint *)0xC7F2F1C)->v) = (((((struct o0_int *)0xC7F2F1C)->v)) + 0x1);
        (((struct o4_uint *)0xC7F2F1C)->v) = 0x0;
    }
    return 0x40;
}

int FUN_0c0d54ac(void)
{
    (((struct o1_uchar *)0xC7F319D)->v) = 0x0;
    (((struct o0_uchar *)0xC7F319D)->v) = 0x0;
    return 0x171;
}
