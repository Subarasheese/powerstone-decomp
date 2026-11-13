/* One tick of a four-phase countdown sequence on the record at 0xC7F2EE0 (phase byte 9, counters at 24 and 26); returns 1 once the phases are over. */
extern void FUN_0c02d9e0(int a, int b, float x, float y, float z, float w);
extern void FUN_0c0d361e(int n);
extern void FUN_0c055310(int a);
int FUN_0c0d366c(void)
{
    char *g = (char *)0xC7F2EE0;
    unsigned char *ph = (unsigned char *)(g + 9);
    short *c24 = (short *)(g + 24);
    short *c26 = (short *)(g + 26);
    FUN_0c02d9e0(0xC154688, 2, 128.0f, 96.0f, 1.0f, 2.0f);
    switch (*ph) {
    case 0:
        *ph = *ph + 1;
        *c24 = 5;
        *c26 = 1;
        /* fall through */
    case 1:
        *c26 = *c26 - 1;
        if (*c26 != 0) return 0;
        *c24 = *c24 - 1;
        FUN_0c0d361e(*c24);
        if (*c24 == 1)
            *c26 = 200;
        else
            *c26 = 60;
        if (*c24 != 0) return 0;
        g[9]++;
        *c26 = 60;
        FUN_0c055310(0);
        return 0;
    case 2:
        *c26 = *c26 - 1;
        if (*c26 != 0) return 0;
        g[9]++;
        *c26 = 300;
        return 0;
    case 3:
        *c26 = *c26 - 1;
        if (*c26 != 0) return 0;
        g[9]++;
        *c26 = 420;
        return 0;
    default:
        return 1;
    }
}
