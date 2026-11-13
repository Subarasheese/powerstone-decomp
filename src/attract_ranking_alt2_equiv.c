/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

int FUN_0c0d3be6(void);
int FUN_0c0d3d50(int, int, int, int, float, float, float, float, float, float);
extern void game_reset_objects(void);
extern void bgm_stop_all(void);
extern void FUN_0c0158d8(void);
extern float math_rand_float(void);
extern void ui_fade_start(int, int, int, int);
extern void FUN_0c05f2d4(int a, int b);
extern void bgm_stop_streams(void);
extern void FUN_0c0a2f66(int a);
extern void res_switch_scene(int a);
extern int cam_request_mode(int a, int b, int c);
extern void FUN_0c02b828(void);
extern void obj_tick_class(int a);
extern void FUN_0c0593e0(int a);
extern void FUN_0c0d4696(void);
extern int thunk_FUN_0c0d45fe(void);
extern void snd_play_side_se(int a, int b);

int attract_screen_adx_logo(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC0D3E60))();
        }
        return FUN_0c0d3d50(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
    }
    return FUN_0c0d3be6();
}

void attract_setup_demo_round(void)
{
    char *game = (char *)0x0C7F2EE0;
    char *players = (char *)0x0C7E40C4;
    char *player1;
    char *pl;
    char *other;
    int idx;

    if ((unsigned char)game[7] == 0) {
        game[7] = game[7] + 1;
        game[8] = 0;
        game_reset_objects();
        bgm_stop_all();
        ((int *)0x0C7F31BC)[2] = -1;
        ((int *)0x0C7F31BC)[1] = -1;
        ((int *)0x0C7F31BC)[0] = -1;
        FUN_0c0158d8();
        game[0x138] = game[0x138] ^ 1;
        players[3] = 0;
        if (game[0x138] == 0)
            players[4] = *(char *)0x0C7F3083;
        else
            players[4] = *(char *)0x0C7F314C;
        player1 = players + 0x72D0;
        players[0x71ED] = 1;
        players[0x71EC] = 1;
        player1[3] = 1;
        player1[4] = (unsigned int)(math_rand_float() * 255.0f) % 8;
        player1[0x71ED] = 1;
        player1[0x71EC] = (unsigned int)(math_rand_float() * 255.0f) % 2 + 1;
        *(char *)0x0C7F3051 = player1[4];
        for (idx = 0; idx < 2; idx++) {
            pl = players + (unsigned short)(idx * 29392);
            other = *(char **)(pl + 28);
            if (pl[4] == other[4] && pl[0x71EC] == other[0x71EC]) {
                pl = players + (unsigned short)(idx * 29392);
                if (pl[0x71EC] == 1)
                    pl[0x71EC] = 2;
                else
                    pl[0x71EC] = 1;
            }
        }
        ui_fade_start(0xFF000000, 0, 0, 15);
    }
    game[6] = game[6] + 1;
    game[7] = 0;
    game[8] = 0;
}

void FUN_0c0d452e(void)
{
    char *game = (char *)0xC7F2EE0;
    int *blk;

    switch ((unsigned char)game[6]) {
    case 0:
        game[6] = game[6] + 1;
        game[7] = 0;
        FUN_0c05f2d4(3, 0);
        blk = (int *)0xC7F31BC;
        blk[2] = -1;
        blk[1] = -1;
        blk[0] = -1;
        bgm_stop_streams();
        FUN_0c0a2f66(0);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(3);
        FUN_0c0a2f66(4);
        res_switch_scene(2);
        cam_request_mode(28, 0, 240);
    case 1:
        FUN_0c02b828();
        obj_tick_class(5);
        FUN_0c0593e0(5);
    default:
        break;
    }
    if (*(int *)(game + 308) & 16)
        FUN_0c0d4696();
    if (thunk_FUN_0c0d45fe()) {
        bgm_stop_all();
        snd_play_side_se(0, 67);
    }
    /* the original ends by branching to a bare rts at 0x0C0D46E0 (a shared return in the literal pool); the checker sees that branch as a call */
    ((void (*)(void))0x0C0D46E0)();
}
