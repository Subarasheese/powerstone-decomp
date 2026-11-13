/* float helper loops and weapon pose setup (059C44..05A6E8) (0c059c44-0c05a6e8) */

int FUN_0c059d7e(int, int, int);

int FUN_0c05a138(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC37E1E8 = 0x0;
    *(unsigned int *)0xC3837EC = 0x0;
    t0 = 0x2;
    t1 = 0xC7E40C4;
    for (;;) {
        t2 = FUN_0c059d7e(t1, a5, a6);
        t0 = (t0 - 0x1);
        t1 = (t1 + 0x72D0);
        if (t0 == 0) {
            break;
        }
    }
    return t2;
}
