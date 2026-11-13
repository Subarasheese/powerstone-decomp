/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c0dde30(void);
int FUN_0c0dd980(void);

int FUN_0c0dd980(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c0dde30();
    t0 = 0xC3468E0;
    if (((((struct o0_int *)0xC3468E0)->v)) != 0) {
        t1 = 0xFFFFFFF8;
        t2 = 0xFFFFFFFF;
        for (;;) {
            if ((int)t2 >= (int)((((struct o0_int *)0xC3468E0)->v))) {
                break;
            }
            t2 = (t2 + 0x1);
            *(unsigned int *)(((((((struct o0_int *)0xC7F87C8)->v)) + t1) + 0x0)) = 0x0;
            t3 = ((((struct o0_int *)0xC7F87C8)->v));
            t3 = (t3 + t1);
            t1 = (t1 + 0x8);
            *(unsigned int *)((t3 + 0x4)) = 0xFFFFFFFF;
        }
        t1 = 0xC3468E0;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct o4_int *)0xC3468E0)->v))) {
                break;
            }
            t1 = ((((struct o4_int *)0xC7F87C8)->v));
            t3 = (t3 + 0x1);
            *(unsigned int *)((t2 + t1)) = 0x0;
            t2 = (t2 + 0x4);
        }
        t0 = t1;
    }
    return t0;
}
