/* Starts a stage-intro step: bumps the counter at 1 of the state block 0xC7F302C and clears byte 2, then by the high nibble of byte 39 (0 and 16 arm a 90-frame wait and flag 76, 32 a 180-frame one) plays the matching sound/effect calls, and finally scans the two player records for entries in state 34/36/39 and sends them FUN_0c0a2e26. */
void FUN_0c0a3f30(int);
void FUN_0c056340(void);
void FUN_0c056b2c(void);
void FUN_0c0565b4(void);
void FUN_0c0a3796(int, int);
void FUN_0c0dc1c0(int, int, int, int);
void FUN_0c0a2e26(char *, int, int);
void FUN_0c053e66(void)
{
    signed char *g = (signed char *)0xC7F302C;
    signed char *t;
    int i, v;

    g[1] = g[1] + 1;
    g[2] = 0;
    switch (g[39] & 0xF0) {
    case 0:
        *(short *)(g + 10) = 90;
        g[76] = 1;
        t = (signed char *)(0xC7F2DF0 + (unsigned char)(((g[39] & 15) - 1) * 120));
        v = t[80 + t[79] - 1];
        if (v == 48 || v == 64)
            FUN_0c0a3f30(10);
        else
            FUN_0c0a3f30(9);
        FUN_0c056340();
        goto common;
    case 16:
        *(short *)(g + 10) = 90;
        g[76] = 1;
        FUN_0c0a3f30(9);
        FUN_0c056b2c();
    common:
        FUN_0c0a3796(0, 47);
        FUN_0c0a3796(0, 48);
        FUN_0c0dc1c0(5, 30, 2, 5);
        break;
    case 32:
        *(short *)(g + 10) = 180;
        FUN_0c0a3f30(27);
        FUN_0c0565b4();
        break;
    }
    for (i = 0; i < 2; i++) {
        char *p = (char *)(0xC7E40C4 + (unsigned short)(i * 0x72D0));
        v = p[0x71BA];
        if (v == 36 || v == 39 || v == 34)
            FUN_0c0a2e26(p, 14, 0);
    }
}
