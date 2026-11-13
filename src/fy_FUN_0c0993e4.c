/* Initialises the player record a4 (records of 0x72D0 bytes at 0xC7E40C4): links it to the other player's record, sets the turn-order flags at +0x71EC/+0x71ED from the mode byte at 0xC7F3071, clears the state bytes, runs the setup helpers, computes the table pointers for FUN_0c0624ea and then falls into FUN_0c099582(record). */
extern void FUN_0c09a7ba(unsigned char *);
extern void FUN_0c099a84(unsigned char *);
extern void FUN_0c0998a8(unsigned char *);
extern void FUN_0c099b60(unsigned char *);
extern void FUN_0c09e0dc(unsigned char *);
extern void FUN_0c0624ea(unsigned char *, int, int);
extern void FUN_0c099a24(unsigned char *);
extern void FUN_0c099582(unsigned char *);

void FUN_0c0993e4(char a4)
{
    int k = a4;
    unsigned char *G = (unsigned char *)0xC7E40C4;
    unsigned char *rec = G + (unsigned short)(k * 0x72D0);
    unsigned char *oth;
    unsigned char v;
    int x;

    *(unsigned char **)(rec + 28) = G + (unsigned short)((1 - (k & 1)) * 0x72D0);
    v = *(unsigned char *)0xC7F3071;
    if (v == 0) {
        rec[0x71ED] = 1;
        rec[0x71EC] = 1;
        oth = *(unsigned char **)(rec + 28);
        if ((signed char)rec[4] == (signed char)oth[4] && oth[0x71EC] == rec[0x71EC])
            rec[0x71EC] = (rec[0x71EC] == 1) ? 2 : 1;
    } else if (v == 3) {
        rec[0x71ED] = 0;
    } else if (k == v - 1) {
        rec[0x71ED] = 0;
    } else {
        rec[0x71EC] = 1;
        oth = *(unsigned char **)(rec + 28);
        if ((signed char)rec[4] == (signed char)oth[4] && oth[0x71EC] == rec[0x71EC])
            rec[0x71EC] = (rec[0x71EC] == 1) ? 2 : 1;
        rec[0x71ED] = 1;
    }
    rec[0] = 1;
    rec[1] = 1;
    *(short *)(rec + 6) = 0;
    rec[5] = (rec[3] == 0) ? 26 : 28;
    rec[3] = a4;
    rec[13] = 0;
    rec[12] = 0;
    rec[11] = 0;
    rec[10] = 0;
    rec[9] = 0;
    rec[8] = 0;
    rec[0x71F1] = 0;
    rec[0x7226] = 0;
    *(short *)(rec + 0x7228) = 0;
    FUN_0c09a7ba(rec);
    rec[0x2DA] = 1;
    rec[0x7236] = 0;
    FUN_0c099a84(rec);
    FUN_0c0998a8(rec);
    FUN_0c099b60(rec);
    FUN_0c09e0dc(rec);
    x = (short)((signed char)rec[4] * 288) + 0xC34BBA0 + (short)(144 * (1 - (rec[0x71EC] & 1)));
    FUN_0c0624ea(rec, x, x + 72);
    FUN_0c099a24(rec);
    FUN_0c099582(rec);
}
