/* @unit 0c0d7f30-0c0d80d4 */
struct G { unsigned char s; char pd[3]; unsigned char a[10]; char pad[285]; char b299; char pad2[2]; char b302; };
struct Z { int a, b, c; };
extern struct G g_game_work;
extern unsigned char g_game_work_sub;
extern struct Z g_screen_fade_rgb;
extern char g_7f2f06;
void gfx_set_background_color(int, int, int);
void game_reset_objects();
void cam_init_records(void);
void FUN_0c05f2d4(int, int);
void vmu_menu_init(void);
void bgm_stop_streams(void);
void FUN_0c0a2f66(int);
void cam_request_mode(int, int, int);
void cam_update_view_matrices(void);
void FUN_0c05f952(void);
void FUN_0c055562(void);
void game_draw_frame(void);
void bgm_stop_all(void);
void cam_reset_shake(int, int, int, int);
void res_switch_scene(int);
void logo_spawn_overlay(float);
void FUN_0c01e7ac(void);
void obj_tick_class(int);
void FUN_0c0593e0(int);
void FUN_0c0d7f30(void);
void FUN_0c0d7ff0(void);
void FUN_0c0d7f30(void)
{
    unsigned char *p;
    switch (g_game_work.s) {
    case 0:
        gfx_set_background_color(0xff000000, 0xff000000, 0xff000000);
        g_game_work.s = 1;
        p = &g_game_work.a[0];
        p[0] = p[1] = p[2] = p[3] = p[4] = p[5] = p[6] = p[7] = p[8] = p[9] = 0;
        game_reset_objects(p);
        cam_init_records();
        FUN_0c05f2d4(3, 0);
        vmu_menu_init();
        bgm_stop_streams();
        FUN_0c0a2f66(0);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(3);
        FUN_0c0a2f66(4);
        cam_request_mode(28, 0, 240);
    case 1:
        if (!g_game_work.b299 && !g_game_work.b302) {
            FUN_0c0d7ff0();
            cam_update_view_matrices();
            FUN_0c05f952();
            FUN_0c055562();
        }
        game_draw_frame();
    }
}
void FUN_0c0d7ff0(void)
{
    switch (g_game_work_sub) {
    case 0:
        g_game_work_sub = 1;
        game_reset_objects();
        bgm_stop_all();
        g_screen_fade_rgb.a = g_screen_fade_rgb.b = g_screen_fade_rgb.c = 0;
        cam_reset_shake(0, 0, 99, 0);
        res_switch_scene(2);
        res_switch_scene(13);
        logo_spawn_overlay(0.5f);
    case 1:
        FUN_0c01e7ac();
        break;
    case 2:
        game_reset_objects();
        g_7f2f06 = 0;
        break;
    }
    obj_tick_class(5);
    FUN_0c0593e0(5);
}
