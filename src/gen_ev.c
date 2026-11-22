/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int FUN_0c10b7b0(int a4, int a5, int a6, int a7, int a8);

int FUN_0c10b7b0(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t1 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
        t2 = 0x103;
    } else {
        t3 = *(int *)(((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC8426A8));
        t2 = 0x100;
        t5 = a6;
        if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18))) & 3) == 0) {
            t6 = a5;
            if ((0x1F & a5) != 0) {
                t6 = ((a5 + 0x1F) & 0xFFFFFFE0);
            }
            t5 = a6;
            if ((0x1F & a6) != 0) {
                t5 = ((a6 + 0x1F) & 0xFFFFFFE0);
            }
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x0)) = ((((struct o0_int *)0xC8426B0)->v));
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x4)) = t6;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0xC)) = a4;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x14)) = t5;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18)) = (a7 | 0x1);
            *(unsigned int *)((a8 + 0x0)) = (((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1));
            *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC8426A8) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC8426A8) + 0x0))) + 0x1) & 0x7);
            (((struct o0_uint *)0xC8426B0)->v) = (((((struct o0_int *)0xC8426B0)->v)) + 0x1);
            t2 = 0x0;
        }
        if (t2 == 0x100) {
            t6 = (((t1 & 0xF) << 2) << 2);
        } else {
            if ((((*(int *)(((((((((struct o10_int *)0xC8426B0)->v)) << 8) + 0xC8424A8) + (((((((struct oC_int *)0xC8426B0)->v)) << 2) << 2) << 1)) + 0x18))) & 3) == 0) && (t0 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18)), (t0 & 0x3) == 1)) {
                *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
                *(volatile unsigned int *)0xFFA00020 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x4)));
                *(volatile unsigned int *)0xFFA00024 = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
                *(volatile unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)t5 >> 2) >> 2) >> 1);
                t0 = 0x241;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
                    t0 = 0x2C1;
                }
                t5 = t0;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
                    t5 = (t0 | 0x1000);
                }
                *(volatile unsigned int *)0xFFA0002C = t5;
                *(volatile unsigned int *)0xA05F6800 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0xC)));
                *(volatile unsigned int *)0xA05F6804 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC8424A8) + (((t3 << 2) << 2) << 1)) + 0x14)));
                *(volatile unsigned int *)0xA05F6808 = 0x1;
                (((struct oC_uint *)0xC8426B0)->v) = t3;
                (((struct o10_uint *)0xC8426B0)->v) = ((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1);
                *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC8426B4) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC8426B4) + 0x0))) + 0x1) & 0x7);
            }
            t6 = (((t1 & 0xF) << 2) << 2);
        }
        _builtin_set_imask(((unsigned int)t6 >> 4));
    }
    return t2;
}
