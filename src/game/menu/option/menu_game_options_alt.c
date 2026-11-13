/* game settings screen (7 option bytes, defaults item) (0c0195f0-0c019bf4) */

/* named globals (symbols.txt) */
extern char g_opt_unlock_flags[];
int ui_sprite_queue_add(int, int, int, int, int, int);
int _quick_evn_mvn(int);
int opt_game_settings_queue_row(int, int, int);
int opt_game_settings_queue_cursor(int, int);

int FUN_0c019a06(int);

int opt_game_settings_move_cursor(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    register int t8;

    if ((signed char)a5 != 0) {
        t8 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((a4 + 0x1)) = (t8 + 0x1);
        if ((int)(signed char)(t8 + 0x1) > (int)0x7) {
            *(unsigned char *)((a4 + 0x1)) = 0x0;
        }
        if (((*(signed char *)((a4 + 0x1))) == 0) && (t0 = *(signed char *)g_opt_unlock_flags, t0 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        }
        if (((*(signed char *)((a4 + 0x1))) == 1) && (t1 = *(signed char *)0xC7F4745, t1 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        }
        if (((*(signed char *)((a4 + 0x1))) == 2) && (t2 = *(signed char *)0xC7F4746, t2 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x1));
        t1 = t0;
        if ((t0 == 3) && (t3 = *(signed char *)0xC7F4747, t3 == 0)) {
            t0 = *(signed char *)((a4 + 0x1));
            *(unsigned char *)((a4 + 0x1)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((a4 + 0x1)) = (t1 - 1);
        if ((int)(signed char)(t1 - 1) < 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x7;
        }
        if (((*(signed char *)((a4 + 0x1))) == 3) && (t4 = *(signed char *)0xC7F4747, t4 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) - 1);
        }
        if (((*(signed char *)((a4 + 0x1))) == 2) && (t5 = *(signed char *)0xC7F4746, t5 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) - 1);
        }
        if (((*(signed char *)((a4 + 0x1))) == 1) && (t6 = *(signed char *)0xC7F4745, t6 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) - 1);
        }
        t1 = *(signed char *)((a4 + 0x1));
        t2 = t1;
        if ((t1 == 0) && (t7 = *(signed char *)g_opt_unlock_flags, t7 == 0)) {
            *(unsigned char *)((a4 + 0x1)) = 0x7;
            t2 = 0x7;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c019a06(int a4)
{
    int stk[17];

    *(unsigned int *)(((int)stk + 8)) = ((short)(((a4 << 1) + a4) << 2) + 0xC11B7C8);
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 8) + 0x8)) = *(struct mv2 *)((((short)(((a4 << 1) + a4) << 2) + 0xC11B7C8) + 0x4)); }
    *(float *)(((int)stk + 24)) = (*(float *)0xC019B10);
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(float *)(((int)stk + 56)) = 1.0f;
    *(unsigned int *)(((int)stk + 64)) = 0x5;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (ui_sprite_queue_add((((int)stk + 0) + 0xC), 0xC17FEA4, 0x1, (*(short *)(((*(int *)(((int)stk + 8))) + 0x0))), 0x0, 0x0));
}

int opt_game_settings_draw(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        FUN_0c019a06(t0);
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2C) {
            break;
        }
    }
    opt_game_settings_queue_cursor(a4, (*(signed char *)((a4 + 0x4))));
    if ((*(signed char *)((a5 + 0x0))) != 0) {
        opt_game_settings_queue_row(a4, 0x0, (*(signed char *)((a5 + 0x4))));
    }
    if ((*(signed char *)((a5 + 0x1))) != 0) {
        opt_game_settings_queue_row(a4, 0x1, (*(signed char *)((a5 + 0x5))));
    }
    if ((*(signed char *)((a5 + 0x2))) != 0) {
        opt_game_settings_queue_row(a4, 0x2, (*(signed char *)((a5 + 0x6))));
    }
    if ((*(signed char *)((a5 + 0x3))) != 0) {
        opt_game_settings_queue_row(a4, 0x3, (*(signed char *)((a5 + 0x7))));
    }
    opt_game_settings_queue_row(a4, 0x4, (*(signed char *)((a5 + 0x8))));
    opt_game_settings_queue_row(a4, 0x5, (*(signed char *)((a5 + 0x9))));
    return opt_game_settings_queue_row(a4, 0x6, (*(signed char *)((a5 + 0xA))));
}
