/* Round setup: clears three fields of the game-state record (0x0C7F302C), copies the 12-byte entry the record's byte
   at +0x25 selects from the table at 0x0C14AB90 into 0x0C7F31BC, runs the setup calls, and calls FUN_0c08a6c0 for each
   of the two player records whose state byte (+4) is 10. */
extern void FUN_0c058fa2(int *dst, char *rec);
extern void FUN_0c099738(void);
extern void FUN_0c041e14(int n);
extern void FUN_0c02d774(void);
extern void FUN_0c02d82c(void);
extern void FUN_0c02d83c(void);
extern void FUN_0c026c7c(void);
extern void FUN_0c04c0ea(void);
extern void FUN_0c0cc074(void);
extern void FUN_0c05fc00(void);
extern void FUN_0c08a6c0(char *player);

void FUN_0c0529f0(void)
{
    char *g = (char *)0x0C7F302C;
    char *table = (char *)0x0C14AB90;
    int *dst = (int *)0x0C7F31BC;
    char *p0 = (char *)0x0C7E40C4;
    char *p1 = (char *)0x0C7EB394;

    g[0x166] = 0;
    g[0x4C] = 0;
    *(short *)(g + 0x168) = 0;
    dst[0] = *(int *)(table + (unsigned char)(g[0x25] * 12));
    dst[1] = *(int *)(table + (unsigned char)(g[0x25] * 12) + 4);
    dst[2] = *(int *)(table + (unsigned char)(g[0x25] * 12) + 8);
    FUN_0c058fa2(dst, table + (unsigned char)(g[0x25] * 12));
    FUN_0c099738();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    FUN_0c02d774();
    FUN_0c02d82c();
    FUN_0c02d83c();
    FUN_0c026c7c();
    FUN_0c04c0ea();
    FUN_0c0cc074();
    FUN_0c05fc00();
    g[0x16B] = 0;
    if (p0[4] == 10)
        FUN_0c08a6c0(p0);
    if (p1[4] == 10)
        FUN_0c08a6c0(p1);
}
