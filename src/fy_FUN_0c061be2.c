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
extern void FUN_0c012568(void);
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
extern void FUN_0c0de590(int);
extern void FUN_0c0de280(int, int, int);
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
extern void FUN_0c03148c(void);
extern void FUN_0c0a31b8(void);
extern void FUN_0c0a2f52(void);
extern void FUN_0c0a3062(int);
extern void FUN_0c0105c8(void);
extern void FUN_0c061434(void);

void FUN_0c061be2(void)
{
    unsigned char *g = (unsigned char *)0xC7F2EE0;
    int count = 0;
    int r;
    int a = (0xC3A289C & ~31) + 32;
    int b = (0xC3A3C90 & ~31) + 32;
    int mode;
    float *p;
    int i;

    FUN_0c06143c();
    ia_setsr((ia_getsr() & ~0xF0) | 0xE0);
    FUN_0c0f2114(0, 0xC38683C, 0xC39285C);
    FUN_0c012568();
    for (;;) {
        r = gdFsInit(8, a, 1024, b);
        *(int *)0xC3B9D3C = r;
        if (r == 0)
            break;
        count++;
        if (r == -23 || r == -33 || count > 256) {
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
    g[46] = (mode == 0) ? 1 : 0;
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
    FUN_0c0de590(0);
    FUN_0c0de280(0, 0, 0);
    p = (float *)0xC494B18;
    for (i = 0; i < 129; i++)
        *p++ = 0.0f;
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
    g[37] = 1;
    g[35] = 1;
    g[36] = 0;
    g[319] = 0;
    g[43] = 1;
    *(unsigned char *)0xC7F31B5 = 0;
    g[45] = 1;
    g[44] = 1;
    g[47] = 0;
    g[48] = 0;
    g[40] = 4;
    g[49] = 3;
    g[50] = 1;
    g[51] = 1;
    g[52] = 1;
    g[53] = 1;
    g[54] = 0;
    g[55] = 1;
    FUN_0c024274();
    FUN_0c027c74();
    FUN_0c03148c();
    FUN_0c0a31b8();
    FUN_0c0a2f52();
    FUN_0c0a3062((signed char)g[46]);
    FUN_0c06143c();
    FUN_0c0105c8();
    FUN_0c061434();
}
