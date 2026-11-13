/* stage object helpers: layout position load contact lists mode/owner setters (0c0abd20-0c0abe44) */

int _quick_odd_mvn(int, int, int);

int FUN_0c0abd84(int a4, int a5, int a6)
{
    register int t2;
    register int t3;
    register int t0;

    t2 = 0x0;
    t3 = a6;
    for (;;) {
        if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t0 = 0x2E0;
        t3 = t2;
        t3 = (t3 << 2);
        t0 = (t0 + a4);
        t0 = (t0 + t3);
        t0 = (*(int *)((t0 + 0x0)));
        t0 = (t0 + 0x4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(0xC339C90); }
        t0 = 0x2E0;
        t0 = (t0 + a4);
        t0 = (t0 + t3);
        t0 = (*(int *)((t0 + 0x0)));
        t0 = (t0 + 0x10);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(0xC339CA8); }
        t0 = 0x2E0;
        t0 = (t0 + a4);
        t0 = (t0 + t3);
        t0 = (*(int *)((t0 + 0x0)));
        t0 = (t0 + 0x1C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(0xC339C9C); }
        t2 = (t2 + 0x1);
    }
    return 0x2DC;
}
