/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0d437a.json (synthetic). */
/* State machine tick on the record at 0xC7F2EE0 (phase byte 7, sub-phase byte 8, timer halfword 20): intro, a timed wait, a three-step sequence, and a fade-out wait. */
extern void FUN_0c0d5292(void);
extern void FUN_0c0d4692(void);
extern void FUN_0c031030(void);
extern void FUN_0c0527a2(void);
extern void FUN_0c0a2f7a(void);
extern void FUN_0c0a3538(void);
extern void FUN_0c0dc1c0(int a, int b, int c, int d);
extern int FUN_0c0d366c(void);
extern int FUN_0c0d3ada(void);
extern void FUN_0c031496(int a, int b, int c, int d);
void FUN_0c0d437a(void)
{
    unsigned char *g = (unsigned char *)0xC7F2EE0;
    short *tm = (short *)(g + 20);
    switch (g[7]) {
    case 0:
        g[7]++;
        g[8] = 0;
        *tm = 1800;
        FUN_0c0d5292();
        /* fall through */
    case 1:
        if (*(int *)(g + 0x134) & 16)
            FUN_0c0d4692();
        FUN_0c031030();
        FUN_0c0527a2();
        *tm = *tm - 1;
        if (*tm != 0) return;
        g[7]++;
        g[8] = 0;
        FUN_0c0a2f7a();
        FUN_0c0a3538();
        FUN_0c0dc1c0(0, 0, 99, 0);
        return;
    case 2:
        switch (g[8]) {
        case 0:
            g[9] = 0;
            g[8] = g[0x138] + 1;
            break;
        case 1:
            if (FUN_0c0d366c() != 0)
                g[8] = 3;
            break;
        case 2:
            if (FUN_0c0d3ada() != 0)
                g[8] = 3;
            break;
        default:
            g[7]++;
            g[8] = 0;
            *tm = 16;
            FUN_0c031496(0xFF000000, 0, 1, 15);
            break;
        }
        FUN_0c031030();
        FUN_0c0527a2();
        return;
    default:
        *tm = *tm - 1;
        if (*tm == 0) {
            g[6]++;
            g[7] = 0;
            g[8] = 0;
        }
        FUN_0c0527a2();
        FUN_0c031030();
        return;
    }
}
