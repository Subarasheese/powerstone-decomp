/* Per-frame update of the record at 0x0C7F302C: decrements its timer (halfword at +10), then either advances byte 1 or sets byte 76 from the timer. */
typedef struct {
    char pad0;
    char b1;
    char b2;
    char pad3[7];
    short h10;
    char pad12[27];
    unsigned char b39;
    char pad40[36];
    char b76;
} Rec;
void FUN_0c054050(void)
{
    Rec *g = (Rec *)0x0C7F302C;
    signed char *e = (signed char *)0x0C7E40C4;
    signed char v1, v2;
    if (g->h10 != 0)
        g->h10 = g->h10 - 1;
    v1 = e[0x71ba];
    if (v1 == 15 || v1 == 0) {
        v2 = e[0xe48a];
        if (v2 == 15 || v2 == 0)
            goto advance;
    }
    if (g->h10 <= 0)
        goto advance;
    if ((g->b39 & 0xf0) == 32)
        return;
    if (g->h10 > 240) {
        g->b76 = (g->h10 & 3) ? 1 : 0;
        return;
    }
    g->b76 = 0;
    return;
advance:
    g->b1 = g->b1 + 1;
    g->b2 = 0;
    g->b76 = 0;
}
