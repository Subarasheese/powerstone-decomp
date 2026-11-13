/* play-time/max-combo stats and mode handlers (0c053680-0c054114) */

/* named globals (symbols.txt) */
extern char g_game_substate[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c0537fe(int);
int FUN_0c053b62(void);
int FUN_0c053dcc(void);
int game_stage_intro_start(void);
int game_stage_intro_countdown(void);
int game_state_timer_tick(void);

int game_mode_handler_3(void)
{
    register int t0;

    t0 = *(signed char *)g_game_substate;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o0_uchar *)0xC7F31D0)->v) = 0x1;
            (((struct o1_uchar *)0xC7F31D0)->v) = 0x6;
            return 0x15;
        }
        return FUN_0c053b62();
    }
    return FUN_0c0537fe(0xC7F302C);
}

int game_mode_handler_4(void)
{
    register int t1;

    FUN_0c053dcc();
    t1 = *(signed char *)g_game_substate;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                (((struct o0_uchar *)0xC7F302C)->v) = ((*(signed char *)0xC7F302C) + 0x1);
                (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                return 0x0;
            }
            return game_state_timer_tick();
        }
        return game_stage_intro_countdown();
    }
    return game_stage_intro_start();
}
