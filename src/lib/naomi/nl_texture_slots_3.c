/* same module (0c0eb0c0-0c0eb0f0) */

int FUN_0c0eb0c0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)(((int)_builtin_get_gbr() + 1))) != 3) {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 0x1);
            *(unsigned short *)((t0 + 0xC7FD6A0)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    } else {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = (t2 - 0x1);
            *(unsigned int *)((t0 + 0xC7FD6A0)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    }
    *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
    return 0x1;
}
