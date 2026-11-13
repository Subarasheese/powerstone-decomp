/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

int FUN_0c0d3366(void);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int memset(int, int, int);
int obj_create(int, int, int);
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int game_draw_frame(void);
int FUN_0c055562(void);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int attract_run_sequence(int, int, int, int, int, int, int, int, int, int, int);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int gfx_set_background_color(int, int, int);
int thunk_FUN_0c062d78(void);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int bgm_stop_all(void);
int cam_reset_shake(int, int, int);
int ui_fade_start(int, int, int, int);
int obj_system_init(void);
int res_switch_scene(int);
int bgm_play_capcom(void);
int cam_request_mode(int, int, int);
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int fx_spawn_0457d0(void);
struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oC_float { char p[0xC]; float v; };
int ui_draw_sprite_string(int, int, float, float, float, float, float);
int obj_destroy(int, int, int, int);
int sprintf(int, int, int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
int ui_draw_text_stub(int, int, float, float, float, float);
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
int FUN_0c0158d8(void);
float math_rand_float(void);
int _modlu(void);
int FUN_0c031030(void);
extern int game_frame_update();
extern int bgm_play_rank();
extern int rank_screen_time_ranking();
extern int rank_screen_vs_ranking();
int FUN_0c0d5292(void);
int demo_attract_main(int, int, int, int);
int FUN_0c02b828(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int attract_fade_step_timer(void);
struct o0_short { short v; };
struct o14_short { char p[0x14]; short v; };

int savedata_reset_keep_ranking(void);
int FUN_0c0d3fbe(void);
int FUN_0c0d4010(void);
int FUN_0c0d4136(int a4, int a5, int a6, int a7);
int FUN_0c0d45fe(void);

void attract_set_step3_flag(int a4)
{
    *(unsigned int *)0xC494AF0 = a4;
}

int attract_take_step3_flag(void)
{
    register int t0;

    t0 = *(int *)0xC494AF0;
    *(unsigned int *)0xC494AF0 = 0x0;
    return t0;
}

int savedata_reset_keep_ranking(void)
{
    int stk[46];
    register int t0;
    register int t14;
    register int t15;
    register int t20;
    register int t34;
    register int t35;
    register int t36;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xAC + ((int)stk + 0)) + t0)) = (*(signed char *)(((0xC7F3083 + t0) + 0x0)));
        *(unsigned char *)((((0x84 + ((int)stk + 0)) + (t0 << 2)) + 0x0)) = (*(signed char *)(((0xC7F308D + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((0x84 + ((int)stk + 0)) + (t0 << 2)) + 0x1)) = (*(signed char *)(((0xC7F308D + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((0x84 + ((int)stk + 0)) + (t0 << 2)) + 0x2)) = (*(signed char *)(((0xC7F308D + (t0 << 2)) + 0x2)));
        *(unsigned short *)((((signed char)((t0 << 1) + (t0 << 2)) + (((int)stk + 0) + 0x48)) + 0x0)) = (*(short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x0)));
        *(unsigned short *)((((signed char)((t0 << 1) + (t0 << 2)) + (((int)stk + 0) + 0x48)) + 0x2)) = (*(short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)));
        *(unsigned short *)((((signed char)((t0 << 1) + (t0 << 2)) + (((int)stk + 0) + 0x48)) + 0x4)) = (*(short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x4)));
        *(unsigned char *)(((((int)stk + 0) + 0x3C) + t0)) = (*(signed char *)(((0xC7F314C + t0) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (((int)stk + 0) + 0x14)) + 0x0)) = (*(signed char *)(((0xC7F3156 + (t0 << 2)) + 0x0)));
        *(unsigned char *)((((t0 << 2) + (((int)stk + 0) + 0x14)) + 0x1)) = (*(signed char *)(((0xC7F3156 + (t0 << 2)) + 0x1)));
        *(unsigned char *)((((t0 << 2) + (((int)stk + 0) + 0x14)) + 0x2)) = (*(signed char *)(((0xC7F3156 + (t0 << 2)) + 0x2)));
        t14 = (t0 << 1);
        t15 = (t0 << 1);
        t0 = (t0 + 0x1);
        *(unsigned short *)((((int)stk + 0) + t14)) = (*(short *)(((0xC7F317E + t15) + 0x0)));
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    memset(0xC7F302C, 0x0, 0x174);
    t20 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC7F3083 + t20) + 0x0)) = (*(signed char *)(((0xAC + ((int)stk + 0)) + t20)));
        *(unsigned char *)(((0xC7F308D + (t20 << 2)) + 0x0)) = (*(signed char *)((((0x84 + ((int)stk + 0)) + (t20 << 2)) + 0x0)));
        *(unsigned char *)(((0xC7F308D + (t20 << 2)) + 0x1)) = (*(signed char *)((((0x84 + ((int)stk + 0)) + (t20 << 2)) + 0x1)));
        *(unsigned char *)(((0xC7F308D + (t20 << 2)) + 0x2)) = (*(signed char *)((((0x84 + ((int)stk + 0)) + (t20 << 2)) + 0x2)));
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t20 << 1) + (t20 << 2))) + 0x0)) = (*(short *)((((signed char)((t20 << 1) + (t20 << 2)) + (((int)stk + 0) + 0x48)) + 0x0)));
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t20 << 1) + (t20 << 2))) + 0x2)) = (*(short *)((((signed char)((t20 << 1) + (t20 << 2)) + (((int)stk + 0) + 0x48)) + 0x2)));
        *(unsigned short *)((((signed char)((t20 << 1) + (t20 << 2)) + 0xC7F30B6) + 0x4)) = (*(short *)((((signed char)((t20 << 1) + (t20 << 2)) + (((int)stk + 0) + 0x48)) + 0x4)));
        *(unsigned char *)(((0xC7F314C + t20) + 0x0)) = (*(signed char *)(((((int)stk + 0) + 0x3C) + t20)));
        *(unsigned char *)(((0xC7F3156 + (t20 << 2)) + 0x0)) = (*(signed char *)((((t20 << 2) + (((int)stk + 0) + 0x14)) + 0x0)));
        *(unsigned char *)(((0xC7F3156 + (t20 << 2)) + 0x1)) = (*(signed char *)((((t20 << 2) + (((int)stk + 0) + 0x14)) + 0x1)));
        *(unsigned char *)((((t20 << 2) + 0xC7F3156) + 0x2)) = (*(signed char *)((((t20 << 2) + (((int)stk + 0) + 0x14)) + 0x2)));
        t34 = *(short *)((((int)stk + 0) + (t20 << 1)));
        t35 = (t20 << 1);
        t36 = (0xC7F317E + (t20 << 1));
        t20 = (t20 + 0x1);
        *(unsigned short *)((t36 + 0x0)) = t34;
        if ((int)t20 >= (int)0xA) {
            break;
        }
    }
    return t35;
}

int game_clear_win_records(void)
{
    memset(0xC7F2DF0, 0x0, 0x78);
    memset(0xC7F2E68, 0x0, 0x78);
    *(unsigned char *)0xC7F2DF9 = 0x0;
    *(unsigned char *)0xC7F2E71 = 0x1;
    return savedata_reset_keep_ranking();
}

int attract_mode_update(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    int t2;
    int t23;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t2 = *(signed char *)0xC7F300E, t2 == 0)) {
            attract_run_sequence(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            FUN_0c05f952();
            FUN_0c055562();
        }
        return game_draw_frame();
    }
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
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
    if ((*(signed char *)0xC7F3019) != 0) {
        (((struct o5_uchar *)0xC7F2EE0)->v) = 0x5;
    }
    *(unsigned char *)0xC7F3019 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC7F2DF0;
    memset(0xC7F2DF0, 0x0, 0x78);
    *(unsigned int *)(((int)stk + 0)) = 0xC7F2E68;
    memset(0xC7F2E68, 0x0, 0x78);
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x9)) = 0x0;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x9)) = 0x1;
    savedata_reset_keep_ranking();
    game_reset_objects();
    thunk_FUN_0c062d78();
    cam_init_records();
    FUN_0c05f2d4(0x3, 0x0);
    if (((*(signed char *)0xC7F300B) == 0) && (t23 = *(signed char *)0xC7F300E, t23 == 0)) {
        attract_run_sequence(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        FUN_0c05f952();
        FUN_0c055562();
    }
    return game_draw_frame();
}

int FUN_0c0d320a(void)
{
    game_reset_objects();
    bgm_stop_all();
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
    (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return cam_reset_shake(0x0, 0x0, 0x63);
}

int FUN_0c0d3270(void)
{
    if ((unsigned char)(*(signed char *)0xC7F2EE7) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        obj_system_init();
        bgm_stop_all();
        res_switch_scene(0x3);
        bgm_play_capcom();
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c05f2d4(0x3, 0x0);
        cam_request_mode(0x1C, 0x0, 0xF0);
        ui_fade_start(0xFF000000, 0x0, 0x0, 0x1);
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c0d32dc(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t0 = (((struct oE_short *)0xC7F2EE6)->v);
            (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
                (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x168;
        fx_spawn_0457d0();
    }
    t0 = (((struct oE_short *)0xC7F2EE6)->v);
    (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x11;
        return ui_fade_start(0xFF000000, 0x0, 0x1, 0xF);
    }
    return (short)(t0 - 1);
}

int FUN_0c0d3350(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}


int rank_draw_time_rows(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = a5;
    w0_0 = f4;
    w0_0 = f6;
    w0_0 = f7;
    w0_0 = f8;
    v0_4 = *(signed char *)((v0_1 + 0x8));
    v0_3 = (v0_4);
    v0_2 = (0x0);
    v0_1 = (v0_1);
    if ((v0_4 == 0)) goto L_C0D33FC;
    if ((v0_3 == 1)) goto L_C0D3410;
    return obj_destroy(v0_1, v0_0, a6, a7);
    L_C0D3410:;
    v0_4 = *(signed char *)((v0_1 + 0x9));
    v0_3 = (v0_4);
    w0_1 = (2.0f);
    if ((v0_4 == 0)) goto L_C0D3426;
    if ((v0_3 == 1)) goto L_C0D3472;
    if (!((v0_3 == 2))) goto L_C0D34F8;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0D34F8;
    if ((v0_3 == 1)) goto L_C0D34D8;
    if ((v0_3 == 2)) goto L_C0D34D8;
    if ((v0_3 == 3)) goto L_C0D34D8;
    if ((v0_3 == 4)) goto L_C0D34D8;
    goto L_C0D34F8;
    L_C0D34F8:;
    v0_3 = (0xC0E71D4);
    v0_3 = (0xC7F36B8);
    v0_4 = (v0_2);
    v0_2 = (0xC7F302C);
    v0_5 = (0xC02D9E4);
    w0_0 = (7.0999999f);
    L_C0D357E:;
    if (((int)v0_4 < (int)0x3)) goto L_C0D353C;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    *(unsigned char *)(((int)stk + 20)) = v0_4;
    *(int *)((int)stk + 16) = (int)((float)(*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x4))) * ((((struct o0_float *)0xC0D3650)->v)));
    *(int *)((int)stk + 12) = ((*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x2))));
    *(int *)((int)stk + 8) = ((*(short *)((((signed char)((v0_4 << 1) + (v0_4 << 2)) + (0x8A + v0_2)) + 0x0))));
    *(int *)((int)stk + 4) = ((*(int *)((((*(signed char *)(((int)stk + 20))) << 2) + 0xC33F6A0))));
    *(int *)((int)stk + 0) = 0xC154674;
    sprintf(v0_3, v0_0, a6, a7, 0xC154674);
    v0_3 = ((ui_draw_sprite_string(v0_3, 0x2, (((((struct o20_float *)(v0_1))->v)) + ((((struct oC_float *)0xC0D3650)->v))), ((((struct o24_float *)(v0_1))->v)), ((((struct o50_float *)(v0_1))->v)), ((((struct o54_float *)(v0_1))->v)), w0_0)));
    return v0_3;
    L_C0D353C:;
    *(int *)((int)stk + 16) = ((*(signed char *)((v0_4 + (((*(signed char *)((v0_1 + 0x4))) << 2) + (v0_2 + 0x61))))));
    *(int *)((int)stk + 12) = 0xC154670;
    sprintf(v0_3, v0_0, 0x0, 0x0, 0xC154670);
    ui_draw_sprite_string(v0_3, 0x2, (((((struct o20_float *)(v0_1))->v)) + (float)((((v0_4 + 0xF) << 2) << 2) << 1)), ((((struct o24_float *)(v0_1))->v)), ((((struct o50_float *)(v0_1))->v)), ((((struct o54_float *)(v0_1))->v)), w0_0);
    v0_4 = ((v0_4 + 0x1));
    goto L_C0D357E;
    L_C0D34D8:;
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + w0_1);
    if ((!(((((struct o24_float *)(v0_1))->v)) > 500.0f))) goto L_C0D34F8;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    *(unsigned char *)((v0_1 + 0x9)) = v0_2;
    goto L_C0D34F8;
    L_C0D3472:;
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    w0_0 = (10.0f);
    if ((v0_4 == 0)) goto L_C0D34A2;
    if ((v0_3 == 1)) goto L_C0D3490;
    if ((v0_3 == 2)) goto L_C0D34A2;
    if ((v0_3 == 3)) goto L_C0D3490;
    if ((v0_3 == 4)) goto L_C0D34A2;
    goto L_C0D34F8;
    L_C0D34A2:;
    w0_1 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_1 - w0_0);
    if ((!(0.0f > (w0_1 - w0_0)))) goto L_C0D34F8;
    L_C0D34B0:;
    (((struct o20_float *)(v0_1))->v) = 0.0f;
    *(unsigned char *)((v0_1 + 0x9)) = ((*(signed char *)((v0_1 + 0x9))) + 0x1);
    goto L_C0D34F8;
    L_C0D3490:;
    w0_1 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_1 + w0_0);
    if (((w0_1 + w0_0) > 0.0f)) goto L_C0D34B0;
    goto L_C0D34F8;
    L_C0D3426:;
    *(unsigned char *)((v0_1 + 0x9)) = ((*(signed char *)((v0_1 + 0x9))) + 0x1);
    v0_4 = *(signed char *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    w0_0 = (1.0f);
    if ((v0_4 == 0)) goto L_C0D3456;
    if ((v0_3 == 1)) goto L_C0D3448;
    if ((v0_3 == 2)) goto L_C0D3460;
    if ((v0_3 == 3)) goto L_C0D3448;
    if ((v0_3 == 4)) goto L_C0D3460;
    goto L_C0D34F8;
    L_C0D3460:;
    (((struct o54_float *)(v0_1))->v) = w0_0;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    L_C0D3468:;
    w0_0 = (640.0f);
    L_C0D346C:;
    (((struct o20_float *)(v0_1))->v) = w0_0;
    goto L_C0D34F8;
    L_C0D3448:;
    (((struct o54_float *)(v0_1))->v) = w0_0;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    w0_0 = (-640.0f);
    goto L_C0D346C;
    L_C0D3456:;
    (((struct o50_float *)(v0_1))->v) = w0_0;
    (((struct o54_float *)(v0_1))->v) = w0_1;
    goto L_C0D3468;
    L_C0D33FC:;
    *(unsigned char *)((v0_1 + 0x8)) = ((*(signed char *)((v0_1 + 0x8))) + 0x1);
    *(unsigned char *)((v0_1 + 0x9)) = v0_2;
    (((struct o24_float *)(v0_1))->v) = 240.0f;
    goto L_C0D3410;
}

int rank_start_time_rows(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x6, 0x1, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC0D33D6;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
    }
    return t2;
}

int rank_screen_1p_points(void)
{
    register float u3;
    register float u4;
    register int t5;
    register float u7;
    register float u8;
    register int t11;
    register int t20;

    ui_draw_text_stub(0xC154698, 0x2, ((((struct o4_float *)0xC0D387C)->v)), ((((struct o0_float *)0xC0D387C)->v)), 1.0f, 1.0f);
    u3 = (((struct oC_float *)0xC0D387C)->v);
    u4 = (((struct o10_float *)0xC0D387C)->v);
    t5 = 0x0;
    for (;;) {
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1546AC);
        u7 = (((struct o24_float *)0xC0D387C)->v);
        u8 = (((struct o28_float *)0xC0D387C)->v);
        ui_draw_text_stub(0xC7F36B8, 0x1, ((((struct o2C_float *)0xC0D387C)->v)), (((float)t5 + u7) * u8), 1.0f, 1.0f);
        t11 = 0x0;
        for (;;) {
            *(volatile signed char *)((t11 + (0xC7F30FC + (t5 << 2))));
            sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC154670);
            ui_draw_text_stub(0xC7F36B8, 0x1, (((float)t11 + u4) * u3), (((float)t5 + u7) * u8), 1.0f, 1.0f);
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x3) {
                break;
            }
        }
        *(volatile int *)(((0xC7F3124 + (t5 << 2)) + 0x0));
        sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1546B0);
        t20 = ui_draw_text_stub(0xC7F36B8, 0x1, ((((struct o38_float *)0xC0D387C)->v)), (((float)t5 + u7) * u8), 1.0f, 1.0f);
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0xA) {
            break;
        }
    }
    return t20;
}

int rank_draw_vs_rows(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_0 = f4;
    w0_0 = f6;
    w0_0 = f7;
    w0_0 = f8;
    v0_6 = *(signed char *)((v0_3 + 0x8));
    v0_5 = (v0_6);
    v0_3 = (v0_3);
    v0_4 = (0x0);
    if ((v0_6 == 0)) goto L_C0D38B8;
    if ((v0_5 == 1)) goto L_C0D38CC;
    return obj_destroy(v0_3, v0_0, v0_1, v0_2);
    L_C0D38CC:;
    v0_6 = *(signed char *)((v0_3 + 0x9));
    v0_5 = (v0_6);
    w0_1 = (2.0f);
    if ((v0_6 == 0)) goto L_C0D38E2;
    if ((v0_5 == 1)) goto L_C0D392E;
    if (!((v0_5 == 2))) goto L_C0D39B4;
    v0_6 = *(signed char *)((v0_3 + 0x4));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C0D39B4;
    if ((v0_5 == 1)) goto L_C0D3994;
    if ((v0_5 == 2)) goto L_C0D3994;
    if ((v0_5 == 3)) goto L_C0D3994;
    if ((v0_5 == 4)) goto L_C0D3994;
    goto L_C0D39B4;
    L_C0D39B4:;
    v0_5 = (0xC02D9E4);
    v0_5 = (0xC7F302C);
    v0_6 = (0xC7F36B8);
    v0_4 = (v0_4);
    v0_7 = (0xC0E71D4);
    w0_0 = (7.0999999f);
    L_C0D3A32:;
    if (((int)v0_4 < (int)0x3)) goto L_C0D39F0;
    v0_4 = *(signed char *)((v0_3 + 0x4));
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(int *)((int)stk + 8) = ((*(short *)((((v0_4 << 1) + (0x152 + v0_5)) + 0x0))));
    *(int *)((int)stk + 4) = ((*(int *)((((*(int *)(((int)stk + 12))) << 2) + 0xC33F6A0))));
    *(int *)((int)stk + 0) = 0xC1546B8;
    sprintf(v0_6, v0_0, v0_1, v0_2, 0xC1546B8);
    v0_5 = ((ui_draw_sprite_string(v0_6, 0x2, (((((struct o20_float *)(v0_3))->v)) + (*(float *)0xC0D3B28)), ((((struct o24_float *)(v0_3))->v)), ((((struct o50_float *)(v0_3))->v)), ((((struct o54_float *)(v0_3))->v)), w0_0)));
    return v0_5;
    L_C0D39F0:;
    *(int *)((int)stk + 8) = ((*(signed char *)((v0_4 + (((*(signed char *)((v0_3 + 0x4))) << 2) + (0x12A + v0_5))))));
    *(int *)((int)stk + 4) = 0xC154670;
    sprintf(v0_6, v0_0, v0_1, v0_2, 0xC154670);
    ui_draw_sprite_string(v0_6, 0x2, (((((struct o20_float *)(v0_3))->v)) + (float)((((v0_4 + 0xF) << 2) << 2) << 1)), ((((struct o24_float *)(v0_3))->v)), ((((struct o50_float *)(v0_3))->v)), ((((struct o54_float *)(v0_3))->v)), w0_0);
    v0_4 = ((v0_4 + 0x1));
    goto L_C0D3A32;
    L_C0D3994:;
    (((struct o24_float *)(v0_3))->v) = (((((struct o24_float *)(v0_3))->v)) + w0_1);
    if ((!(((((struct o24_float *)(v0_3))->v)) > 500.0f))) goto L_C0D39B4;
    *(unsigned char *)((v0_3 + 0x8)) = ((*(signed char *)((v0_3 + 0x8))) + 0x1);
    *(unsigned char *)((v0_3 + 0x9)) = v0_4;
    goto L_C0D39B4;
    L_C0D392E:;
    v0_6 = *(signed char *)((v0_3 + 0x4));
    v0_5 = (v0_6);
    w0_0 = (10.0f);
    if ((v0_6 == 0)) goto L_C0D395E;
    if ((v0_5 == 1)) goto L_C0D394C;
    if ((v0_5 == 2)) goto L_C0D395E;
    if ((v0_5 == 3)) goto L_C0D394C;
    if ((v0_5 == 4)) goto L_C0D395E;
    goto L_C0D39B4;
    L_C0D395E:;
    w0_1 = (((struct o20_float *)(v0_3))->v);
    (((struct o20_float *)(v0_3))->v) = (w0_1 - w0_0);
    if ((!(0.0f > (w0_1 - w0_0)))) goto L_C0D39B4;
    L_C0D396C:;
    (((struct o20_float *)(v0_3))->v) = 0.0f;
    *(unsigned char *)((v0_3 + 0x9)) = ((*(signed char *)((v0_3 + 0x9))) + 0x1);
    goto L_C0D39B4;
    L_C0D394C:;
    w0_1 = (((struct o20_float *)(v0_3))->v);
    (((struct o20_float *)(v0_3))->v) = (w0_1 + w0_0);
    if (((w0_1 + w0_0) > 0.0f)) goto L_C0D396C;
    goto L_C0D39B4;
    L_C0D38E2:;
    *(unsigned char *)((v0_3 + 0x9)) = ((*(signed char *)((v0_3 + 0x9))) + 0x1);
    v0_6 = *(signed char *)((v0_3 + 0x4));
    v0_5 = (v0_6);
    w0_0 = (1.0f);
    if ((v0_6 == 0)) goto L_C0D3912;
    if ((v0_5 == 1)) goto L_C0D3904;
    if ((v0_5 == 2)) goto L_C0D391C;
    if ((v0_5 == 3)) goto L_C0D3904;
    if ((v0_5 == 4)) goto L_C0D391C;
    goto L_C0D39B4;
    L_C0D391C:;
    (((struct o54_float *)(v0_3))->v) = w0_0;
    (((struct o50_float *)(v0_3))->v) = w0_0;
    L_C0D3924:;
    w0_0 = (640.0f);
    L_C0D3928:;
    (((struct o20_float *)(v0_3))->v) = w0_0;
    goto L_C0D39B4;
    L_C0D3904:;
    (((struct o54_float *)(v0_3))->v) = w0_0;
    (((struct o50_float *)(v0_3))->v) = w0_0;
    w0_0 = (-640.0f);
    goto L_C0D3928;
    L_C0D3912:;
    (((struct o50_float *)(v0_3))->v) = w0_0;
    (((struct o54_float *)(v0_3))->v) = w0_1;
    goto L_C0D3924;
    L_C0D38B8:;
    *(unsigned char *)((v0_3 + 0x8)) = ((*(signed char *)((v0_3 + 0x8))) + 0x1);
    *(unsigned char *)((v0_3 + 0x9)) = v0_4;
    (((struct o24_float *)(v0_3))->v) = 240.0f;
    goto L_C0D38CC;
}

int rank_start_vs_rows(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x6, 0x1, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC0D384E;
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x4)) = t2;
    }
    return t2;
}

int FUN_0c0d3be6(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    if ((unsigned char)(*(signed char *)0xC7F2EE7) != 0) {
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        game_reset_objects();
        bgm_stop_all();
        (((struct o8_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0xFFFFFFFF;
        FUN_0c0158d8();
        (((struct o0_uchar *)0xC7E40C7)->v) = 0x0;
        t2 = 0xC7F314C;
        if ((*(signed char *)0xC7F3018) == 0) {
            t2 = 0xC7F3083;
        }
        (((struct o1_uchar *)0xC7E40C7)->v) = (*(signed char *)((t2 + 0x0)));
        (((struct o1_uchar *)0xC7EB2B0)->v) = 0x1;
        (((struct o0_uchar *)0xC7EB2B0)->v) = 0x1;
        (((struct o0_uchar *)0xC7EB397)->v) = 0x1;
        u0 = math_rand_float();
        u1 = *(float *)0xC0D3D7C;
        u2 = (u0 * u1);
        if (!(2.14748365e+09f > (u0 * u1))) {
            u2 = (((u0 * u1)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        (((struct o1_uchar *)0xC7EB397)->v) = ((int)((unsigned int)(int)u2 % (unsigned int)0x8));
        (((struct o1_uchar *)0xC7F2580)->v) = 0x1;
        u0 = math_rand_float();
        u1 = *(float *)0xC0D3D7C;
        u2 = (u0 * u1);
        if (!(2.14748365e+09f > (u0 * u1))) {
            u2 = (((u0 * u1)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        (((struct o0_uchar *)0xC7F2580)->v) = (((int)((unsigned int)(int)u2 % (unsigned int)0x2)) + 0x1);
        *(unsigned char *)0xC7F3051 = (*(signed char *)0xC7EB398);
        t2 = 0xC0E6F24;
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x1C));
            if (((*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == (*(signed char *)((t4 + 0x4)))) && (t0 = *(signed char *)((t4 + 0x71EC)), t2 = t0, t1 = *(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC)), t1 == t2)) {
                t4 = 0x1;
                if ((*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71EC))) == 1) {
                    t4 = 0x2;
                }
                (((struct o71EC_uchar *)(((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = t4;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        ui_fade_start(0xFF000000, 0x0, 0x0, 0xF);
    }
    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
    return 0x0;
}

int FUN_0c0d3d50(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t0 = (((struct oE_short *)0xC7F2EE6)->v);
            (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
                (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
            }
            t0 = ((int (*)(int, int, int))(game_frame_update))(0xC7F2EE7, a5, a6);
            return FUN_0c031030();
        }
        t0 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 != 3) {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x10;
                        ui_fade_start(0xFF000000, 0x0, 0x1, 0xF);
                    } else {
                        t0 = ((int (*)(float))(rank_screen_vs_ranking))(f4);
                        if (t0 != 0) {
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x63;
                        }
                    }
                } else {
                    t0 = ((int (*)(float))(rank_screen_time_ranking))(f4);
                    if (t0 == 0) {
                    } else {
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x63;
                    }
                }
            } else {
                t0 = (((struct oE_short *)0xC7F2EE6)->v);
                (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F3018) + 0x2);
                    t0 = ((int (*)(int, int, int, int))(bgm_play_rank))(0xC7F2EE8, a5, a6, a7);
                }
            }
        } else {
            (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
            (((struct o3_uchar *)0xC7F2EE6)->v) = 0x0;
            (((struct oE_ushort *)0xC7F2EE6)->v) = 0x96;
            t0 = (((struct oE_short *)0xC7F2EE6)->v);
            (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F3018) + 0x2);
                t0 = ((int (*)(int, int, int, int))(bgm_play_rank))(0xC7F2EE8, a5, a6, a7);
            }
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        FUN_0c0d5292();
        t0 = *(signed char *)0xC7F2EE8;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 != 3) {
                        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x10;
                        ui_fade_start(0xFF000000, 0x0, 0x1, 0xF);
                    } else {
                        t0 = ((int (*)(void))(rank_screen_vs_ranking))();
                        if (t0 != 0) {
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x63;
                        }
                    }
                } else {
                    t0 = ((int (*)(void))(rank_screen_time_ranking))();
                    if (t0 == 0) {
                    } else {
                        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x63;
                    }
                }
            } else {
                t0 = (((struct oE_short *)0xC7F2EE6)->v);
                (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F3018) + 0x2);
                    t0 = ((int (*)(int))(bgm_play_rank))(0xC7F2EE8);
                }
            }
        } else {
            (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE8) + 0x1);
            (((struct o3_uchar *)0xC7F2EE6)->v) = 0x0;
            (((struct oE_ushort *)0xC7F2EE6)->v) = 0x96;
            t0 = (((struct oE_short *)0xC7F2EE6)->v);
            (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F3018) + 0x2);
                t0 = ((int (*)(int))(bgm_play_rank))(0xC7F2EE8);
            }
        }
    }
    FUN_0c031030();
    return ((int (*)(void))(game_frame_update))();
}

int FUN_0c0d3fbe(void)
{
    FUN_0c02b828();
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c0d4010(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            FUN_0c0d3fbe();
            t0 = (((struct oC_short *)0xC7F2EE6)->v);
            (((struct oC_ushort *)0xC7F2EE6)->v) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
                (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oC_ushort *)0xC7F2EE6)->v) = 0x258;
    }
    FUN_0c0d3fbe();
    t0 = (((struct oC_short *)0xC7F2EE6)->v);
    (((struct oC_ushort *)0xC7F2EE6)->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct oC_ushort *)0xC7F2EE6)->v) = 0x10;
        return ui_fade_start(0xFF000000, 0x0, 0x1, 0xF);
    }
    return (short)(t0 - 1);
}

int FUN_0c0d4094(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return ((int (*)(void))(0xC0D407E))();
        }
        return FUN_0c0d4010();
    }
    return ((int (*)(void))(0xC0D3F6E))();
}

int FUN_0c0d4136(int a4, int a5, int a6, int a7)
{
    demo_attract_main(a4, a5, a6, a7);
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int attract_title_screen(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return attract_fade_step_timer();
        }
        return FUN_0c0d4136(a4, a5, a6, a7);
    }
    return ((int (*)(void))(0xC0D40CC))();
}

int FUN_0c0d44c4(void)
{
    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}

int FUN_0c0d45fe(void)
{
    register int t1;
    register int t2;
    int t4;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t4 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t4 & 0x8) == 0)) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
            continue;
        }
        t1 = 0xC7F2EE0;
        t1 = (t1 + 0x4);
        *(unsigned char *)0xC7F2EE4 = 0x2;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        *(unsigned char *)((t1 + 0x1)) = 0x0;
        t1 = 0x1;
        if (((*(signed char *)0xC7F2F16)) == 0) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
            continue;
        }
        break;
    }
    return t1;
}

int thunk_FUN_0c0d45fe(void)
{
    return FUN_0c0d45fe();
}

int attract_draw_text_item(int a4)
{
    register float u1;

    u1 = *(float *)0xC0D46D8;
    return ui_draw_text_stub((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710) + 0x8))), 0x0, ((*(float *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710) + 0x0))) * u1), (((((struct o4_float *)(((unsigned char)(((a4 << 1) + a4) << 2) + 0xC154710)))->v)) * u1), 1.0f, 1.0f);
}

int attract_draw_press_start(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC0D4660))(0x0, a5, a6, a7);
}

void FUN_0c0d4696(void)
{
    
}
