/* Menu-cursor step for slot a4: moves the 0..7 row with pad bits, then hands over to FUN_0c018394 (or FUN_0c01869c) depending on the row. */
extern void FUN_0c0a3796(int, int);
extern void FUN_0c018394(int, int);
extern void FUN_0c01869c(int);

void FUN_0c0181c0(int a4)
{
    char *e;
    char *P;
    unsigned short w;

    P = (char *)0xC361BF0;
    e = (char *)0xC3622C0 + 42 + ((signed char)a4 << 4);
    e[3] = e[2];
    if (*(unsigned short *)(P + (signed char)(e[1] * 20) + 12) & 16) {
        e[2] = e[2] - 1;
        FUN_0c0a3796(0, 75);
    }
    if (*(unsigned short *)(P + (signed char)(e[1] * 20) + 12) & 32) {
        e[2] = e[2] + 1;
        FUN_0c0a3796(0, 75);
    }
    if (e[2] < 0)
        e[2] = 7;
    if (e[2] > 7)
        e[2] = 0;
    w = *(unsigned short *)(P + (signed char)(a4 * 20) + 12);
    switch (e[2]) {
    case 0:
        FUN_0c018394(a4, 0);
        return;
    case 1:
        FUN_0c018394(a4, 1);
        return;
    case 2:
        if (e[13] != 0)
            FUN_0c018394(a4, 6);
        else
            FUN_0c018394(a4, 2);
        return;
    case 3:
        if (e[13] != 0)
            FUN_0c018394(a4, 2);
        else
            FUN_0c018394(a4, 3);
        return;
    case 4:
        if (e[13] != 0)
            FUN_0c018394(a4, 3);
        else
            FUN_0c018394(a4, 4);
        return;
    case 5:
        if (e[13] != 0)
            FUN_0c018394(a4, 7);
        else
            FUN_0c018394(a4, 5);
        return;
    case 6:
        if (w & 4) {
            FUN_0c0a3796(0, 77);
            FUN_0c01869c(a4);
        }
        return;
    default:
        if (w & 4) {
            FUN_0c0a3796(0, 77);
            e[0] = 0;
        }
        return;
    }
}
