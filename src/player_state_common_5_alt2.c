/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064cc8-0c06588c) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
int pl_step_motion(int);
int pl_change_state(int, int, int, int);

int pl_mode12_phase3(int a4)
{
    int stk[2];
    register int t0;
    register int t3;

    t0 = pl_step_motion(a4);
    t3 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o7205_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        pl_change_state(a4, 0x10, 0x0, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t3 = 0x71A8;
    }
    return t3;
}
