/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0d437a.json (synthetic). */
/* State machine tick on the record at 0xC7F2EE0 (phase byte 7, sub-phase byte 8, timer halfword 20): intro, a timed wait, a three-step sequence, and a fade-out wait. */
extern void FUN_0c0d5292(void);
extern void attract_draw_press_start(void);
extern void FUN_0c031030(void);
extern void game_frame_update(void);
extern void bgm_stop_streams(void);
extern void bgm_play_rank(void);
extern void cam_reset_shake(int a, int b, int c, int d);
extern int rank_screen_time_ranking(void);
extern int rank_screen_vs_ranking(void);
extern void ui_fade_start(int a, int b, int c, int d);
void attract_ranking_step(void)
{
    unsigned char *g = (unsigned char *)0xC7F2EE0;
    short *tm = (short *)(g + 20);
    switch (g[7]) {
    case 0:
        g[7]++;
        g[8] = 0;
        *tm = 1800;
        FUN_0c0d5292();
        /* fall through */
    case 1:
        if (*(int *)(g + 0x134) & 16)
            attract_draw_press_start();
        FUN_0c031030();
        game_frame_update();
        *tm = *tm - 1;
        if (*tm != 0) return;
        g[7]++;
        g[8] = 0;
        bgm_stop_streams();
        bgm_play_rank();
        cam_reset_shake(0, 0, 99, 0);
        return;
    case 2:
        switch (g[8]) {
        case 0:
            g[9] = 0;
            g[8] = g[0x138] + 1;
            break;
        case 1:
            if (rank_screen_time_ranking() != 0)
                g[8] = 3;
            break;
        case 2:
            if (rank_screen_vs_ranking() != 0)
                g[8] = 3;
            break;
        default:
            g[7]++;
            g[8] = 0;
            *tm = 16;
            ui_fade_start(0xFF000000, 0, 1, 15);
            break;
        }
        FUN_0c031030();
        game_frame_update();
        return;
    default:
        *tm = *tm - 1;
        if (*tm == 0) {
            g[6]++;
            g[7] = 0;
            g[8] = 0;
        }
        game_frame_update();
        FUN_0c031030();
        return;
    }
}
