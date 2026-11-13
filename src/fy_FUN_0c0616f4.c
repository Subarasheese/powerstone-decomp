/* INLINE-ASM: reads and writes the status register (stc sr / ldc sr), which C cannot express; the rest is C */
/* Main-loop step of the title / menu flow (state bytes at 0xC7F2EE0 + 35 / 36 / 37 / 38 / 317 / 319): runs the per-frame services, lowers the interrupt mask, then follows the state: waits for the transition routines (FUN_0c011df6, 0c0d54c0, 0c0d7f30, 0c0d2fde, 0c0d48fc, 0c0d7318) and, when the soft-reset pad combination (A+B+X+Y+Start bits of either pad at 0xC361BF0 / 0xC361C04) is held, calls FUN_0c06144e or FUN_0c061f9c / FUN_0c0a2f52 / FUN_0c061472. */
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
struct Pad { char pad0[8]; unsigned short s8; char pad1[2]; unsigned short s12; };
#define P1 ((struct Pad *)0xC361BF0)
#define P2 ((struct Pad *)0xC361C04)
#define ALL5(p) (((p)->s12 & 8) && ((p)->s8 & 4) && ((p)->s8 & 2) && ((p)->s8 & 0x400) && ((p)->s8 & 0x200))
#define COMBO (ALL5(P1) || ALL5(P2))
#define G ((char *)0xC7F2EE0)
#define PV (*(int *)0xC361BA0)
#define CLR4() (G[3] = 0, G[2] = 0, G[1] = 0, G[0] = 0)
void FUN_0c0f250a(void);
void syRtcExecServer(void);
void FUN_0c0125aa(void);
void FUN_0c0d57a4(void);
void FUN_0c010658(void);
void FUN_0c011df6(void);
void FUN_0c0d54c0(void);
void FUN_0c0d7f30(void);
int FUN_0c06148a(void);
void FUN_0c06144e(void);
void FUN_0c061472(void);
void FUN_0c061f9c(int a);
void FUN_0c0a2f52(void);
void FUN_0c0d2fde(void);
void FUN_0c0d7318(void);
void FUN_0c0d48fc(void);
void FUN_0c0616f4(void)
{
    FUN_0c0f250a();
    syRtcExecServer();
    FUN_0c0125aa();
    FUN_0c0d57a4();
    FUN_0c010658();
    set_sr(get_sr() & -241);
    if (G[317] == 0) {
        FUN_0c011df6();
        if (G[317] != 0) {
            CLR4();
        }
        goto l17dc;
    }
    if (G[37] != 0) {
        FUN_0c0d54c0();
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
    FUN_0c0d2fde();
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
    FUN_0c0a2f52();
    FUN_0c061472();
l1ac6:
    G[319] = 0;
    FUN_0c0d7318();
    if (G[36] != 0)
        return;
    CLR4();
    return;
l1aea:
    FUN_0c0d48fc();
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
    FUN_0c0a2f52();
    FUN_0c061472();
}
