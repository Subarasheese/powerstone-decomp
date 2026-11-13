
void game_reset_state_block(void)
{
    struct St *g = (struct St *)0xC7F302C;
    struct Pos *dst = (struct Pos *)0xC7F31BC;
    int *tbl = (int *)0xC14AB90;
    g->b358 = 0;
    g->b76 = 0;
    g->w360 = 0;
    dst->a = *(int *)((char *)tbl + (unsigned char)(g->sel * 12));
    dst->b = *(int *)((char *)tbl + (unsigned char)(g->sel * 12) + 4);
    dst->c = *(int *)((char *)tbl + (unsigned char)(g->sel * 12) + 8);
    obj_system_init();
    pl_place_start_positions();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    ui_init_hud();
    FUN_0c02d82c();
    FUN_0c02d83c();
    FUN_0c026c7c();
    FUN_0c04c0ea();
    FUN_0c0cc074();
    FUN_0c05fc00();
    g->b363 = 0;
    if (*(signed char *)0xC7E40C8 == 10)
        FUN_0c08a6c0();
    if (*(signed char *)0xC7EB398 == 10)
        FUN_0c08a6c0();
}
