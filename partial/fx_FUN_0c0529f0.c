/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0529f0.json (synthetic). */
/* Scene setup: clears three state fields, copies a 12-byte descriptor chosen by byte 37 into the record at 0xC7F31BC, runs the init calls and, if either slot holds mode 10, FUN_0c08a6c0. */
extern void obj_system_init(void);
extern void pl_place_start_positions(void);
extern void FUN_0c041e14(int a);
extern void ui_init_hud(void);
extern void ui_disable_hud(void);
extern void FUN_0c02d83c(void);
extern void FUN_0c026c7c(void);
extern void FUN_0c04c0ea(void);
extern void FUN_0c0cc074(void);
extern void FUN_0c05fc00(void);
extern void FUN_0c08a6c0(void);
void game_reset_state_block(void)
{
    char *g = (char *)0xC7F302C;
    int *o = (int *)0xC7F31BC;
    int *e;
    g[0x166] = 0;
    g[76] = 0;
    *(short *)(g + 0x168) = 0;
    e = (int *)(0xC14AB90 + (unsigned char)(g[37] * 12));
    o[0] = e[0];
    o[1] = e[1];
    o[2] = e[2];
    obj_system_init();
    pl_place_start_positions();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    ui_init_hud();
    ui_disable_hud();
    FUN_0c02d83c();
    FUN_0c026c7c();
    FUN_0c04c0ea();
    FUN_0c0cc074();
    FUN_0c05fc00();
    g[0x16b] = 0;
    if (((char *)0xC7E40C4)[4] == 10)
        FUN_0c08a6c0();
    if (((char *)0xC7EB394)[4] == 10)
        FUN_0c08a6c0();
}
