/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
int game_reset_objects(void);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int attract_set_step3_flag(int);
int FUN_0c0d320a(void);
int FUN_0c0d3366(void);
int attract_screen_adx_logo(int, int, int, int);
int FUN_0c0d4094(void);
int attract_title_screen(int, int, int, int);
int attract_screen_urls(void);
extern int FUN_0c0d452e();
int thunk_FUN_0c0d45fe(void);
extern void ui_draw_text_stub(int a, int b, float x, float y, float z, float w);
extern void rank_start_time_rows(int n);
extern void FUN_0c055310(int a);
extern void rank_start_vs_rows(int n);
typedef struct { char pad0[5]; unsigned char byte5, phase, state; char pad1[8]; short half16; short pad_18; short timer; } GameRec;
extern void ui_fade_start(int, int, int, int);

int attract_run_sequence(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t7;
    register int t10;
    register int t32;
    register int t35;
    register int t37;

    t0 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t4 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o2_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                (((struct o1F_uchar *)0xC7F2EE4)->v) = 0x0;
                t4 = 0x23;
            }
            return t4;
        }
        t7 = *(signed char *)0xC7F2EE5;
        if ((unsigned char)t7 != 0) {
            if ((unsigned char)t7 != 1) {
                return (unsigned char)t7;
            }
            return ((int (*)(int, int, int, int))(FUN_0c0d452e))(0xC7F2EE5, a5, a6, a7);
        }
        game_reset_objects();
        (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
        return ((int (*)(void))(FUN_0c0d452e))();
    }
    t10 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t10 != 0) {
        if ((unsigned char)t10 != 1) {
            if ((unsigned char)t10 != 2) {
                if ((unsigned char)t10 != 3) {
                    if ((unsigned char)t10 != 4) {
                        if ((unsigned char)t10 != 5) {
                            FUN_0c0d320a();
                        } else {
                            attract_screen_adx_logo(0xC7F2EE5, a5, a6, a7);
                        }
                    } else {
                        attract_screen_urls();
                    }
                } else {
                    FUN_0c0d4094();
                }
            } else {
                attract_title_screen(0xC7F2EE5, a5, a6, a7);
            }
        } else {
            FUN_0c0d3366();
        }
    } else {
        FUN_0c0d320a();
    }
    attract_set_step3_flag(((((unsigned char)(*(signed char *)0xC7F2EE5) == 3)) ? 1 : 0));
    t32 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t32 != 6) {
        if ((*(signed char *)0xC7F2F0B) != 0) {
            t35 = thunk_FUN_0c0d45fe();
            if (t35 != 0) {
                bgm_stop_all();
                return snd_play_side_se(0x0, 0x43);
            }
            return t35;
        }
        t37 = 0x2B;
        if ((unsigned char)((int)stk + 0) != 0) {
            (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
            (((struct o4_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE4)->v) = 0x0;
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
            t37 = 0x0;
        }
        return t37;
    }
    return (unsigned char)t32;
}

int rank_screen_time_ranking(void)
{
    char *game = (char *)0xC7F2EE0;
    unsigned char *phase = (unsigned char *)(game + 9);
    short *counter_a = (short *)(game + 24);
    short *counter_b = (short *)(game + 26);
    ui_draw_text_stub(0xC154688, 2, 128.0f, 96.0f, 1.0f, 2.0f);
    switch (*phase) {
    case 0:
        *phase = *phase + 1;
        *counter_a = 5;
        *counter_b = 1;
        /* fall through */
    case 1:
        *counter_b = *counter_b - 1;
        if (*counter_b != 0) return 0;
        *counter_a = *counter_a - 1;
        rank_start_time_rows(*counter_a);
        if (*counter_a == 1)
            *counter_b = 200;
        else
            *counter_b = 60;
        if (*counter_a != 0) return 0;
        game[9]++;
        *counter_b = 60;
        FUN_0c055310(0);
        return 0;
    case 2:
        *counter_b = *counter_b - 1;
        if (*counter_b != 0) return 0;
        game[9]++;
        *counter_b = 300;
        return 0;
    case 3:
        *counter_b = *counter_b - 1;
        if (*counter_b != 0) return 0;
        game[9]++;
        *counter_b = 420;
        return 0;
    default:
        return 1;
    }
}

int rank_screen_vs_ranking(void)
{
    char *rec = (char *)0xC7F2EE0;
    unsigned char *phase = (unsigned char *)(rec + 9);
    short *count = (short *)(rec + 24);
    short *timer = (short *)(rec + 26);
    ui_draw_text_stub(0xC1546C4, 2, 160.0f, 96.0f, 1.0f, 2.0f);
    switch (*phase) {
    case 0:
        *phase = *phase + 1;
        *count = 5;
        *timer = 1;
        /* fall through */
    case 1:
        *timer = *timer - 1;
        if (*timer != 0) return 0;
        *count = *count - 1;
        rank_start_vs_rows(*count);
        if (*count == 1)
            *timer = 200;
        else
            *timer = 60;
        if (*count != 0) return 0;
        rec[9]++;
        *timer = 60;
        FUN_0c055310(0);
        return 0;
    case 2:
        *timer = *timer - 1;
        if (*timer != 0) return 0;
        rec[9]++;
        *timer = 300;
        return 0;
    case 3:
        *timer = *timer - 1;
        if (*timer != 0) return 0;
        rec[9]++;
        *timer = 420;
        return 0;
    default:
        return 1;
    }
}

void attract_fade_step_timer(void)
{
    GameRec *game = (GameRec *)0x0C7F2EE0;
    if (game->state == 0) {
        game->state = game->state + 1;
        game->timer = 16;
        ui_fade_start(0xff000000, 0, 1, 15);
    }
    game->timer = game->timer - 1;
    if (game->timer == 0) {
        game->byte5 = game->byte5 + 1;
        game->phase = 0;
        game->state = 0;
    }
}
