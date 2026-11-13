/* start-button poll, per-frame update, mode handlers 0..4 (0c052708-0c053680) */

extern void obj_system_init(void);
extern void ui_init_hud(void);
extern void ui_disable_hud(void);
extern void FUN_0c02d83c(void);
extern void bgm_stop_streams(void);
extern void res_switch_scene(int a);
extern void res_load_match_sound_banks(int a, int b, int c);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int game_reset_state_block(void);
int FUN_0c0597ce(void);
int FUN_0c05986c(int, int);
int FUN_0c059934(int, int);
int FUN_0c05a138(void);
int FUN_0c05f2d4(int, int);
int pl_init_player_record(int);
int bgm_play_stage_theme(int);

void game_reset_match_screen(void)
{
    int *block = (int *)0xC7F31BC;
    char *state = (char *)0xC7F302C;
    char *players = (char *)0xC7E40C4;
    unsigned char mode;
    int player_idx;

    obj_system_init();
    ui_init_hud();
    ui_disable_hud();
    FUN_0c02d83c();
    block[2] = 0;
    block[1] = 0;
    block[0] = 0;
    if (*(char *)0xC7F2F03 == 0)
        bgm_stop_streams();
    mode = state[69];
    if (mode == 1 || mode == 2) {
        player_idx = mode - 1;
        if (*(signed char *)(0xC7F2E46 + (unsigned char)(player_idx * 120)) == 8) {
            state[37] = 10;
            players[(unsigned short)((1 - player_idx) * 29392) + 4] = 10;
        }
    }
    res_switch_scene(7);
    res_load_match_sound_banks(state[37], players[4], players[29396]);
    state[86] = 0;
}

int FUN_0c052b9e(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = 0x0;
    for (;;) {
        pl_init_player_record(t2);
        t3 = ((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t3 + 0x1)) = 0x0;
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    FUN_0c05a138();
    if ((*(signed char *)0xC7F2F03) == 0) {
        t2 = 0xB;
        if (((unsigned char)(*(signed char *)0xC7F2F08) == 1) && ((t0 = *(signed char *)0xC7F3051, t0 == 1) && (t1 = *(signed char *)0xC7F2F10, t1 == 0))) {
        } else {
            t2 = (*(signed char *)0xC7F3051);
        }
        bgm_play_stage_theme(t2);
    }
    (((struct oA_uchar *)0xC7F304B)->v) = 0x0;
    t0 = *(signed char *)0xC7F3071;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
            (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F15) + 0x1);
        } else {
            (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F14) + 0x1);
        }
    } else {
        (((struct o1_uchar *)0xC7F304B)->v) = ((*(signed char *)0xC7F2F15) + 0x1);
    }
    (((struct o0_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o5_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o9_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o8_uchar *)0xC7F304B)->v) = 0x0;
    (((struct oC_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o2C_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o0_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o2D_uchar *)0xC7F304B)->v) = 0x0;
    (((struct o2_ushort *)0xC7F3192)->v) = 0x0;
    (((struct o2_uchar *)0xC7F304B)->v) = (*(int *)((((*(signed char *)0xC7F2F18) << 2) + 0xC14AC34)));
    (((struct o3_uchar *)0xC7F304B)->v) = 0x3C;
    (((struct o4_uchar *)0xC7F3192)->v) = 0x0;
    (((struct oA_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o9_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o8_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o7_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o6_uchar *)0xC7F3192)->v) = 0x0;
    (((struct o35_uchar *)0xC7F304B)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o4F_uchar *)(((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
        t1 = ((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0);
        t2 = (((unsigned char)((unsigned short)t0 * (unsigned short)0x78) + 0xC7F2DF0) + 0x50);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x4)) = 0x0;
        *(unsigned char *)((t2 + 0x3)) = 0x0;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        *(unsigned char *)((t2 + 0x1)) = 0x0;
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        *(unsigned short *)((t1 + 0x18)) = 0x0;
        *(unsigned short *)((t1 + 0x1A)) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        (((struct o46_uchar *)(t1))->v) = 0x0;
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    (((struct o28_uchar *)0xC7F304B)->v) = (*(signed char *)0xC7F3071);
    FUN_0c05f2d4(0x2, (*(signed char *)0xC7F3051));
    if ((*(signed char *)0xC7F2F03) != 0) {
        *(unsigned char *)0xC7F2E46 = 0x7;
        *(unsigned char *)0xC7F2EBE = 0x7;
    }
    t0 = *(signed char *)0xC7F3073;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
        } else {
            if ((*(signed char *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x4D))) != 0) {
                FUN_0c059934(((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0), ((unsigned char)t0 - 1));
            } else {
                if ((*(signed char *)((((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))) == 0) {
                    FUN_0c0597ce();
                } else {
                    FUN_0c05986c(((unsigned char)((unsigned short)((unsigned char)t0 - 1) * (unsigned short)0x78) + 0xC7F2DF0), ((unsigned char)t0 - 1));
                }
            }
        }
    }
    return game_reset_state_block();
}
