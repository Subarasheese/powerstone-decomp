/* Two-step state machine on the byte at +3: step 0 advances to step 1 and starts something (FUN_0c01fdc8, FUN_0c01f4c8, FUN_0c01f9a0); in step 0 or 1, when FUN_0c01fff4(0x3060E, 0) reports true it calls FUN_0c01fdc8 and copies the byte at +48 of the block at 0x0C362A50 to its start. */
extern int FUN_0c01fdc8(void);
extern int FUN_0c01f4c8(int);
extern void FUN_0c01f9a0(int, int);
extern char FUN_0c01fff4(int, int);

void FUN_0c01f00a(char *o)
{
    char *b;

    if (o[3] == 0) {
        o[3] = o[3] + 1;
        FUN_0c01fdc8();
        FUN_0c01f4c8(2);
        FUN_0c01f9a0(1, 4);
        FUN_0c01f9a0(2, 0x80);
    } else if (o[3] != 1) {
        return;
    }
    if (FUN_0c01fff4(0x3060E, 0) != 0) {
        FUN_0c01fdc8();
        b = (char *)0x0C362A50;
        b[0] = b[48];
    }
}
