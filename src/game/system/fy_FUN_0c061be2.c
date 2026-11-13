/* INLINE-ASM: reads and writes the status register (stc sr / ldc sr) to set and clear the interrupt mask during start-up; no C form exists */
/* Game start-up: masks interrupts, initialises the GD file system (retrying up to 256 times, halting on error -23/-33), the clock, the sound mode flag, the renderer and the game-state block at 0xC7F2EE0, then runs the first-stage initialisers. */
#pragma inline_asm(ia_getsr)
static int ia_getsr(void)
{
    STC SR,R0
}
#pragma inline_asm(ia_setsr)
static void ia_setsr(int v)
{
    LDC R4,SR
}
extern void FUN_0c06143c(void);
extern int FUN_0c0f2114(int, int, int);
extern void pad_state_clear(void);
extern int gdFsInit(int, int, int, int);
extern void FUN_0c0f2664(void);
extern void FUN_0c0f283e(void);
extern void FUN_0c0df100(void);
extern void FUN_0c0f4104(void);
extern int gdFsCreateDirhn(int, int);
extern void syRtcInit(void);
extern void syRtcSetServerMode(int);
extern void syCfgInit(int);
extern void syCfgGetSoundMode(int *);
extern void FUN_0c0f4644(void);
extern void FUN_0c0f1ffe(int, int);
extern void FUN_0c0de890(int);
extern void FUN_0c0de8a0(void);
extern void FUN_0c0de960(int);
extern void FUN_0c0dea30(int);
extern void FUN_0c0debe0(int, int, int, int);
extern void FUN_0c0dfe20(void);
extern void FUN_0c0e0580(void);
extern void FUN_0c0dd8e0(int, int, int);
extern void FUN_0c0e3564(int, int, int);
extern void nlInitMatrix(int, int);
extern void gfx_set_border_color(int);
extern void gfx_set_background_color(int, int, int);
extern void thunk_FUN_0c0fbcf0(int);
extern void FUN_0c0e07c0(int);
extern void FUN_0c0e0800(int);
extern void FUN_0c0e1550(int);
extern void nlUnitMatrix(void);
extern void FUN_0c0e2790(int, float, float, float);
extern void FUN_0c0dd310(void);
extern void nlObjPutInit(void);
extern void FUN_0c05eed2(void);
extern void FUN_0c024274(void);
extern void FUN_0c027c74(void);
extern void ui_fade_init(void);
extern void snd_init_adx(void);
extern void bgm_stop_all(void);
extern void FUN_0c0a3062(int);
extern void vmu_init(void);
extern void FUN_0c061434(void);

void sys_init_all(void)
{
    unsigned char *state = (unsigned char *)0xC7F2EE0;
    int count = 0;
    int status;
    int work_a = (0xC3A289C & ~31) + 32;
    int work_b = (0xC3A3C90 & ~31) + 32;
    int mode;
    float *zero_ptr;
    int idx;

    FUN_0c06143c();
    ia_setsr((ia_getsr() & ~0xF0) | 0xE0);
    FUN_0c0f2114(0, 0xC38683C, 0xC39285C);
    pad_state_clear();
    for (;;) {
        status = gdFsInit(8, work_a, 1024, work_b);
        *(int *)0xC3B9D3C = status;
        if (status == 0)
            break;
        count++;
        if (status == -23 || status == -33 || count > 256) {
            ia_setsr(ia_getsr() & ~0xF0);
            FUN_0c0f2664();
            FUN_0c0f283e();
            FUN_0c0df100();
            FUN_0c0f4104();
            for (;;)
                ;
        }
    }
    *(int *)0xC3B9D30 = gdFsCreateDirhn((0xC3AED20 & ~31) + 32, 1024);
    *(int *)0xC3B9D38 = 0;
    *(int *)0xC3B9D40 = 0;
    *(int *)0xC3B9D44 = 0;
    *(int *)0xC38682C = 0;
    syRtcInit();
    syRtcSetServerMode(1);
    syCfgInit((0xC39E87C & ~31) + 32);
    syCfgGetSoundMode(&mode);
    state[46] = (mode == 0) ? 1 : 0;
    ia_setsr(ia_getsr() & ~0xF0);
    FUN_0c0f4644();
    FUN_0c0f1ffe(0xC0614FC, 0);
    FUN_0c0de890(0x100000);
    FUN_0c0de8a0();
    FUN_0c0de960(0);
    FUN_0c0dea30(0xCE00000);
    FUN_0c0debe0(0, 0, 0x70000, 0);
    FUN_0c0dfe20();
    FUN_0c0e0580();
    FUN_0c0dd8e0(0xC494D68, 2048, 4096);
    FUN_0c0e3564(0xC4BB0A8, 2048, 4096);
    nlInitMatrix(0xC7F370C, 63);
    gfx_set_border_color(0);
    gfx_set_background_color(0, 0, 0);
    zero_ptr = (float *)0xC494B18;
    for (idx = 0; idx < 129; idx++)
        *zero_ptr++ = 0.0f;
    thunk_FUN_0c0fbcf0(0xC494B18);
    FUN_0c0e07c0(0x101010);
    FUN_0c0e0800(0xFF09);
    FUN_0c0e1550(3);
    nlUnitMatrix();
    FUN_0c0e2790(7464, 1.33333325f, 0.299999982f, 12000.0f);
    FUN_0c0e1550(1);
    FUN_0c0dd310();
    nlObjPutInit();
    FUN_0c05eed2();
    state[37] = 1;
    state[35] = 1;
    state[36] = 0;
    state[319] = 0;
    state[43] = 1;
    *(unsigned char *)0xC7F31B5 = 0;
    state[45] = 1;
    state[44] = 1;
    state[47] = 0;
    state[48] = 0;
    state[40] = 4;
    state[49] = 3;
    state[50] = 1;
    state[51] = 1;
    state[52] = 1;
    state[53] = 1;
    state[54] = 0;
    state[55] = 1;
    FUN_0c024274();
    FUN_0c027c74();
    ui_fade_init();
    snd_init_adx();
    bgm_stop_all();
    FUN_0c0a3062((signed char)state[46]);
    FUN_0c06143c();
    vmu_init();
    FUN_0c061434();
}
