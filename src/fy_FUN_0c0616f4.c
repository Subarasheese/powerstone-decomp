/* INLINE-ASM: reads and writes the status register (stc sr / ldc sr), which C cannot express; the rest is C */
/* Main-loop step of the title / menu flow (state bytes at 0xC7F2EE0 + 35 / 36 / 37 / 38 / 317 / 319): runs the per-frame services, lowers the interrupt mask, follows the state and, when the soft-reset pad combination is held, calls the reset helpers. */
#pragma inline_asm(get_sr)
int get_sr(void)
{
    STC SR,R0
}
#pragma inline_asm(set_sr)
void set_sr(int v)
{
    LDC R4,SR
}
struct pad_state { char gap0[8]; unsigned short bits_8; char gap1[2]; unsigned short bits_12; };
#define P1 ((struct pad_state *)0xC361BF0)
#define P2 ((struct pad_state *)0xC361C04)
#define ALL5(pad) (((pad)->bits_12 & 8) && ((pad)->bits_8 & 4) && ((pad)->bits_8 & 2) && ((pad)->bits_8 & 0x400) && ((pad)->bits_8 & 0x200))
#define COMBO (ALL5(P1) || ALL5(P2))
#define G ((char *)0xC7F2EE0)
#define PV (*(int *)0xC361BA0)
#define CLR4() (G[3] = 0, G[2] = 0, G[1] = 0, G[0] = 0)
void FUN_0c0f250a(void);
void syRtcExecServer(void);
void pad_poll_all(void);
void FUN_0c0d57a4(void);
void vmu_unmount_current(void);
void vmu_check_task(void);
void boot_screens_update(void);
void FUN_0c0d7f30(void);
int FUN_0c06148a(void);
void FUN_0c06144e(void);
void FUN_0c061472(void);
void FUN_0c061f9c(int arg);
void bgm_stop_all(void);
void attract_mode_update(void);
void FUN_0c0d7318(void);
void game_play_step(void);
void sys_main_loop_step(void)
{
    FUN_0c0f250a();
    syRtcExecServer();
    pad_poll_all();
    FUN_0c0d57a4();
    vmu_unmount_current();
    set_sr(get_sr() & -241);
    if (G[317] == 0) {
        vmu_check_task();
        if (G[317] != 0) {
            CLR4();
        }
        goto l17dc;
    }
    if (G[37] != 0) {
        boot_screens_update();
        if (G[37] != 0)
            return;
        CLR4();
        G[300] = 0;
        G[299] = 0;
        G[301] = 0;
        G[35] = 1;
        return;
    }
    if (G[38] != 0) {
        FUN_0c0d7f30();
        if (G[38] == 0) {
            CLR4();
            G[35] = 1;
        }
        goto l17dc;
    }
    if (G[35] == 0)
        goto l1980;
    attract_mode_update();
    if (G[35] == 0) {
        CLR4();
        G[36] = 1;
        G[319] = 0;
        FUN_0c061472();
        return;
    }
    if (PV != 0)
        return;
    if (FUN_0c06148a() != 0)
        goto l1964;
    if (*(int *)0xC38682C != 0)
        goto l1964;
    if (COMBO)
        goto l1964;
    return;
l17dc:
    if (PV != 0)
        return;
    if (FUN_0c06148a() != 0)
        goto l1964;
    if (*(int *)0xC38682C != 0)
        goto l1964;
    if (COMBO)
        goto l1964;
    return;
l1964:
    FUN_0c06144e();
    *(int *)(G + 324) = 0;
    return;
l1980:
    if (G[36] == 0)
        goto l1aea;
    if (G[319] != 0) {
        if (PV != 0)
            goto l1ac6;
        if (FUN_0c06148a() != 0)
            goto l1a18;
        if (*(int *)0xC38682C != 0)
            goto l1a18;
        if (COMBO)
            goto l1a18;
        goto l1ac6;
    l1a18:
        FUN_0c06144e();
        *(int *)(G + 324) = 0;
        goto l1ac6;
    }
    if (PV != 0)
        goto l1ac6;
    if (FUN_0c06148a() != 0)
        goto l1ab8;
    if (*(int *)0xC38682C != 0)
        goto l1ab8;
    if (COMBO)
        goto l1ab8;
    goto l1ac6;
l1ab8:
    FUN_0c061f9c(1);
    bgm_stop_all();
    FUN_0c061472();
l1ac6:
    G[319] = 0;
    FUN_0c0d7318();
    if (G[36] != 0)
        return;
    CLR4();
    return;
l1aea:
    game_play_step();
    if (G[35] != 0) {
        CLR4();
        FUN_0c06144e();
        return;
    }
    if (G[36] != 0) {
        G[319] = 0;
        FUN_0c06144e();
        return;
    }
    if (PV != 0)
        return;
    if (FUN_0c06148a() != 0)
        goto l1bc0;
    if (*(int *)0xC38682C != 0)
        goto l1bc0;
    if (COMBO)
        goto l1bc0;
    return;
l1bc0:
    FUN_0c061f9c(1);
    bgm_stop_all();
    FUN_0c061472();
}
