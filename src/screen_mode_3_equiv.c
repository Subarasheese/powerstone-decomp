/* game mode function using camera mode 28 (0c0d7f30-0c0d80d4) */

struct o0_uchar { unsigned char v; };
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
int vmu_menu_init(void);
int game_draw_frame(void);
int FUN_0c055562(void);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
extern int FUN_0c0d7ff0();
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_request_mode(int, int, int);
int gfx_set_background_color(int, int, int, float);

int FUN_0c0d7f30(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t25;
    int t2;
    int t24;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t2 = *(signed char *)0xC7F300E, t2 == 0)) {
            t3 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(FUN_0c0d7ff0))(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
            cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            FUN_0c05f952();
            FUN_0c055562();
        }
        return game_draw_frame();
    }
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000, f4);
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
    game_reset_objects();
    cam_init_records();
    FUN_0c05f2d4(0x3, 0x0);
    vmu_menu_init();
    bgm_stop_streams();
    FUN_0c0a2f66(0x0);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x3);
    FUN_0c0a2f66(0x4);
    cam_request_mode(0x1C, 0x0, 0xF0);
    if (((*(signed char *)0xC7F300B) == 0) && (t24 = *(signed char *)0xC7F300E, t24 == 0)) {
        t25 = ((int (*)(void))(FUN_0c0d7ff0))();
        cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        FUN_0c05f952();
        FUN_0c055562();
    }
    return game_draw_frame();
}
