/* Fills slot idx (144-byte records at 0x0C7F3238) if the new level is not below the slot's current level; returns the slot. */
typedef struct { int a, b, c, d; } S16;
typedef struct {
    char b0, b1, b2, b3, b4;
    char pad5[3];
    int w8;
    int w12;
    short h16;
    short h18;
    char pad20[60];
    S16 s80;
    char pad96[20];
    float f116;
    char pad120[24];
} Rec;
Rec *FUN_0c05ef02(int idx, int level, int b3, int w8, float f, S16 *src, signed char *tbl)
{
    Rec *r = (Rec *)(0x0C7F3238 + (short)((signed char)idx * 144));
    if ((unsigned char)level >= (unsigned char)r->b1) {
        r->b0 = 1;
        r->b4 = 0;
        r->b1 = level;
        r->b2 = 1;
        r->w8 = w8;
        r->w12 = (int)tbl;
        r->f116 = f;
        if (tbl != 0)
            r->h16 = tbl[(unsigned char)r->b2 * 32 + 1];
        r->h18 = 0;
        r->s80 = *src;
        r->b3 = b3;
    }
    return r;
}
