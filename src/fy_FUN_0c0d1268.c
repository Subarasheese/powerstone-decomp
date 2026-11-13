/* Debug / test screen update for a player block: adjusts a counter (short +156, 0..255) with the pad bits 16 / 32, steps the player's record byte (+6 of the 168-byte records at 0xC4949A0) down on bit 64 and up (to 10) on bit 128 and then re-initialises the player's sound and display with the thunk / FUN_0c09939c / FUN_0c0993e4 / FUN_0c05f2d4 / FUN_0c05fddc / FUN_0c05fe24 / FUN_0c062cf4 calls; sets up the sub-object model of the linked object (+36) and prints four values with sprintf and FUN_0c0ccefc at fixed screen positions. */
int sprintf(char *, int, int, int, const char *, int);
void thunk_FUN_0c05fff4(void);
void FUN_0c09939c(void);
void FUN_0c0993e4(int slot);
void FUN_0c05f2d4(int a, int b);
void FUN_0c05fddc(void);
void FUN_0c05fe24(int slot, int v);
void FUN_0c062cf4(int slot, int v);
void FUN_0c06233a(char *s, int tbl, int n);
void FUN_0c0ccefc(char *s, int a, float x, float y, float sx, float sy);
#define REC(slot) ((signed char *)(0xC4949A0 + (short)((slot) * 168)))
void FUN_0c0d1268(char *o)
{
    char *blk;
    char *link;
    signed char *rec;
    int flags;
    blk = (char *)0xC7E40C4 + (unsigned short)(o[5] * 0x72D0);
    link = *(char **)(o + 36);
    if (*(int *)(o + 72) & 16) {
        *(short *)(o + 156) = *(short *)(o + 156) - 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 255;
    }
    if (*(int *)(o + 72) & 32) {
        *(short *)(o + 156) = *(short *)(o + 156) + 1;
        if ((unsigned short)*(short *)(o + 156) > 255)
            *(short *)(o + 156) = 0;
    }
    if (*(int *)(o + 72) & 64) {
        if (REC((signed char)o[5])[6] > 0)
            REC((signed char)o[5])[6] = REC((signed char)o[5])[6] - 1;
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        blk[4] = REC((signed char)o[5])[6];
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        FUN_0c0993e4(o[5]);
        FUN_0c05f2d4(0, 0);
        blk[1] = 0;
        FUN_0c05fddc();
        FUN_0c05fe24((signed char)o[5], REC((signed char)o[5])[6]);
        FUN_0c062cf4((signed char)o[5], REC((signed char)o[5])[6]);
    }
    if (*(int *)(o + 72) & 128) {
        if (REC((signed char)o[5])[6] < 10)
            REC((signed char)o[5])[6] = REC((signed char)o[5])[6] + 1;
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        blk[4] = REC((signed char)o[5])[6];
        thunk_FUN_0c05fff4();
        FUN_0c09939c();
        FUN_0c0993e4(o[5]);
        FUN_0c05f2d4(0, 0);
        blk[1] = 0;
        FUN_0c05fddc();
        FUN_0c05fe24((signed char)o[5], REC((signed char)o[5])[6]);
        FUN_0c062cf4((signed char)o[5], REC((signed char)o[5])[6]);
    }
    FUN_0c06233a(*(char **)(link + 736), 0xC6002D0, *(short *)(o + 156));
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544B8, 0);
    FUN_0c0ccefc((char *)0xC7F36B8, 7, 80.0f, 104.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544C8, REC((signed char)o[5])[6]);
    FUN_0c0ccefc((char *)0xC7F36B8, 7, 200.0f, 104.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544D0, 0);
    FUN_0c0ccefc((char *)0xC7F36B8, 7, 80.0f, 112.0f, 8.0f, 8.0f);
    sprintf((char *)0xC7F36B8, 0, 0, 0, (const char *)0xC1544C8, (unsigned short)*(short *)(o + 156));
    FUN_0c0ccefc((char *)0xC7F36B8, 7, 200.0f, 112.0f, 8.0f, 8.0f);
}
