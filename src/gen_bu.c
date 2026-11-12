/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0fddbe(int a4, int a5, int a6);
void vmsfs_memcpyl(int a4, int a5, int a6);

int FUN_0c0fddbe(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
    return t3;
}

void vmsfs_memcpyl(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}
