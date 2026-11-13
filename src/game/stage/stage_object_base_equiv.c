/* stage object helpers: layout position load contact lists mode/owner setters (0c0abd20-0c0abe44) */

int FUN_0c0e6fe8(int, int, int);

int FUN_0c0abd84(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        *(volatile int *)((((0x2E0 + a4) + (t5 << 2)) + 0x0));
        t6 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(a4, t5, (t5 << 2), 0xC339C90);
        *(volatile int *)((((0x2E0 + t0) + t1) + 0x0));
        t6 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t0, 0x0, t1);
        *(volatile int *)((((0x2E0 + t2) + t3) + 0x0));
        t6 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t2, 0x0, t3);
        t5 = (t4 + 0x1);
    }
    return 0x2DC;
}
