/* debug attack/defence/hit parameter editor (0c0d24ec-0c0d2a70) */

extern int sprintf(char *s, const char *fmt, ...);
void dbg_print_at(char *text, int colour, float x, float y, float sx, float sy);
#define BUF ((char *)0x0C7F36B8)
#define UH(o, n) (*(unsigned short *)((o) + (n)))
#define X(p, col) ((float)((*(signed char *)((p) + 5) * 30 + (col)) * 8))
#define TEXT(x, y) dbg_print_at(BUF, 7, (x), (y), 8.0f, 8.0f)

void dbgatk_edit_params(char *p)
{
    struct { int i; int col; } s;
    signed char *e;
    short *h;
    int j;

    sprintf(BUF, (const char *)0x0C154520);
    TEXT(X(p, 5), 168.0f);
    sprintf(BUF, (const char *)0x0C154524, UH(p, 100));
    TEXT(X(p, 6), 176.0f);
    sprintf(BUF, (const char *)0x0C15452C);
    TEXT(X(p, 5), 200.0f);
    sprintf(BUF, (const char *)0x0C154524, UH(p, 104));
    TEXT(X(p, 6), 208.0f);
    e = *(signed char **)(p + 108);
    for (s.i = 0; s.i < UH(p, 128); s.i++, e += 4) {
        sprintf(BUF, (const char *)0x0C1544C8, e[0]);
        s.col = s.i * 4;
        TEXT(X(p, s.col + 10), 168.0f);
        sprintf(BUF, (const char *)0x0C1544C8, e[1]);
        TEXT(X(p, s.col + 10), 176.0f);
        sprintf(BUF, (const char *)0x0C1544C8, UH((char *)e, 2));
        TEXT(X(p, s.col + 10), 184.0f);
    }
    e = *(signed char **)(p + 112);
    for (s.i = 0; s.i < UH(p, 130); s.i++, e += 4) {
        sprintf(BUF, (const char *)0x0C1544C8, e[0]);
        s.col = s.i * 4;
        TEXT(X(p, s.col + 10), 200.0f);
        sprintf(BUF, (const char *)0x0C1544C8, e[1]);
        TEXT(X(p, s.col + 10), 208.0f);
        sprintf(BUF, (const char *)0x0C1544C8, UH((char *)e, 2));
        TEXT(X(p, s.col + 10), 216.0f);
    }
    if (!(UH(p, 86) > 2)) {
        sprintf(BUF, (const char *)0x0C1544B4);
        if (*(short *)(p + 86) == 0) {
            if (*(short *)(p + 84) == 0)
                TEXT(X(p, 8), 176.0f);
            else
                TEXT(X(p, 8), 208.0f);
        } else if (*(short *)(p + 84) == 0) {
            TEXT(X(p, UH(p, 134) * 4 + 9), (float)((UH(p, 132) + 21) * 8));
        } else {
            TEXT(X(p, UH(p, 138) * 4 + 9), (float)((UH(p, 136) + 25) * 8));
        }
    }
    if (UH(p, 86) >= 2) {
        sprintf(BUF, (const char *)0x0C154530);
        TEXT(X(p, 5), 232.0f);
        sprintf(BUF, (const char *)0x0C1544C8, UH(*(char **)(p + 140), 2));
        TEXT(X(p, 5), 240.0f);
        h = *(short **)(p + 144);
        for (j = 0; j < UH(p, 154); j++) {
            sprintf(BUF, (const char *)0x0C154534, *h++);
            TEXT(X(p, 10), (float)((j + 29) * 8));
        }
        sprintf(BUF, (const char *)0x0C1544B4);
        TEXT(X(p, 9), (float)((UH(p, 152) + 29) * 8));
    }
    if (*(short *)(p + 86) == 0) {
        sprintf(BUF, (const char *)0x0C15453C);
        TEXT(X(p, 5), 152.0f);
    }
    if (UH(p, 86) == 1) {
        sprintf(BUF, (const char *)0x0C154554);
        TEXT(X(p, 5), 152.0f);
    }
    if (UH(p, 86) == 2) {
        sprintf(BUF, (const char *)0x0C154564);
        TEXT(X(p, 5), 152.0f);
    }
    if (UH(p, 86) == 3) {
        sprintf(BUF, (const char *)0x0C154574);
        TEXT(X(p, 5), 152.0f);
    }
}
