/* Initialises an effect object (flags, a short, a byte, the short argument scaled << 12 at +48, callback FUN_0c042304 at +16, a 12-byte vector at +32) and sets up its 8 sub-blocks at +0x2E0 (clear byte, short 31, FUN_0c06233a with a table and 58 + index). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c042304(void);
extern void FUN_0c06233a(char *, char *, int);

void FUN_0c042150(char *o, S12 *v, char b, short s)
{
    int i;
    char *blk;

    o[0] = 1;
    o[1] = 1;
    *(short *)(o + 6) = 31;
    o[5] = 1;
    o[4] = b;
    *(short *)(o + 0xEE) = s;
    *(int *)(o + 52) = 0;
    *(int *)(o + 44) = 0;
    *(int *)(o + 48) = s << 12;
    *(void (**)(void))(o + 16) = FUN_0c042304;
    *(S12 *)(o + 32) = *v;
    for (i = 0; i < 8; i++) {
        blk = ((char **)(o + 0x2E0))[i];
        *blk = 0;
        blk = ((char **)(o + 0x2E0))[i];
        *(short *)(blk + 2) = 31;
        FUN_0c06233a(((char **)(o + 0x2E0))[i], (char *)0x0C4CFA68, i + 58);
    }
}
