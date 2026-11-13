/* Countdown on the game-state block at 0xC7F302C (short at +10): when it runs out, bump the stage byte at +1, clear +2 and +76, call FUN_0c0d8f10(0,0,128), reload the countdown with 300 and, by the high nibble of byte +39, start sound effect FUN_0c0a3914 on the table entry chosen by byte +35 (nibble 0) or on 0xC7E40C4 and 0xC7EB394 (nibble 1). */
extern int FUN_0c0d8f10(int, int, int);
extern int FUN_0c0a3914(int, int);

void FUN_0c053fae(void)
{
    unsigned char *g = (unsigned char *)0xC7F302C;

    if (--*(short *)(g + 10) <= 0) {
        g[1]++;
        g[2] = 0;
        g[76] = 0;
        FUN_0c0d8f10(0, 0, 128);
        *(short *)(g + 10) = 300;
        switch (g[39] & 0xF0) {
        case 0:
            FUN_0c0a3914(0xC7E40C4 + (unsigned short)((1 - (signed char)g[35]) * 29392), 2);
            break;
        case 16:
            FUN_0c0a3914(0xC7E40C4, 2);
            FUN_0c0a3914(0xC7EB394, 2);
            break;
        }
    }
}
