/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d774-0c02d9e0) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
extern void *memset(void *p, int c, unsigned n);
extern void FUN_0c02d8e0(void);
extern void FUN_0c02d84a(void);
int fx_spawn_049b7c(void);

void ui_init_hud(void)
{
    char *rec = (char *)g_hud_state;
    float *fvals = (float *)rec;
    memset(rec + 44, 0, 48);
    memset(rec + 92, 0, 120);
    memset(rec + 212, 0, 384);
    memset(rec + 596, 0, 480);
    rec[46] = 0;
    rec[70] = 0;
    rec[3] = 40;
    rec[2] = 40;
    fvals[6] = 1.0f;
    fvals[5] = 1.0f;
    FUN_0c02d8e0();
    FUN_0c02d84a();
    if (*(int *)0xC7F3020 == 0) {
        fvals[2] = 0.0f;
        fvals[1] = 0.0f;
        fvals[4] = 0.0f;
        fvals[3] = 0.0f;
    } else {
        fvals[1] = 16.0f;
        fvals[2] = -16.0f;
        fvals[3] = 16.0f;
        fvals[4] = -16.0f;
    }
    memset((void *)0xC366EEC, 0, 20);
}

int ui_enable_hud(void)
{
    *(unsigned char *)g_hud_state = 0x1;
    if ((*(signed char *)0xC7F4769) == 0) {
        return fx_spawn_049b7c();
    }
    return 0xC7F4769;
}

int FUN_0c02d82c(void)
{
    *(unsigned char *)g_hud_state = 0x0;
    return ((int)g_hud_state);
}

void FUN_0c02d834(void)
{
    *(unsigned char *)0xC366A71 = 0x1;
}

int FUN_0c02d83c(void)
{
    *(unsigned char *)0xC366A71 = 0x0;
    return 0xC366A71;
}

int FUN_0c02d844(void)
{
    return (*(signed char *)g_hud_state);
}
