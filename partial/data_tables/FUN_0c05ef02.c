/* Draft: proven, but its cases embedded slices of the game data tables, so it is withdrawn until synthetic cases exist. */
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
