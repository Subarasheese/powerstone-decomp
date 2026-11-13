/* win counter text (0c0d46e4-0c0d54c0) */

/* named globals (symbols.txt) */
int FUN_0c0d54ac(void);
int FUN_0c0d4ff4(int a4, int a5, int a6, int a7);
int game_play_step(int a4, int a5, int a6, int a7);
int FUN_0c0d4d00(int a4, int a5, int a6, int a7);
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

