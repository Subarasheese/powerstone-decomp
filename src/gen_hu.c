/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2DC_uchar { char p[0x2DC]; unsigned char v; };
struct o2DD_uchar { char p[0x2DD]; unsigned char v; };
int FUN_0c01628c(int);
int FUN_0c0162ba(int, int);
int FUN_0c058f60(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int);
int FUN_0c059538(void);
int FUN_0c0595fa(void);
int FUN_0c059698(void);
int FUN_0c0e6fe8(int);
int FUN_0c05923a(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0169e0(void);

int FUN_0c05923a(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t0 = FUN_0c058f60();
    t1 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x2)) = a4;
        if (a6 != 0) {
            if (a6 != 1) {
            } else {
                t2 = *(int *)((a5 + 0x18));
                if (t2 == 0) {
                    *(unsigned int *)(((a4 << 2) + 0xC7E4098)) = t0;
                } else {
                    *(unsigned int *)((t2 + 0x14)) = t0;
                }
                *(unsigned int *)((t0 + 0x18)) = t2;
                *(unsigned int *)((t0 + 0x14)) = a5;
                *(unsigned int *)((a5 + 0x18)) = t0;
            }
        } else {
            t2 = *(int *)((a5 + 0x14));
            if (t2 == 0) {
                *(unsigned int *)(((a4 << 2) + 0xC7E4070)) = t0;
            } else {
                *(unsigned int *)((t2 + 0x18)) = t0;
            }
            *(unsigned int *)((t0 + 0x14)) = t2;
            *(unsigned int *)((t0 + 0x18)) = a5;
            *(unsigned int *)((a5 + 0x14)) = t0;
        }
        (((struct o2DD_uchar *)(t0))->v) = a8;
        t2 = t0;
        if ((int)a7 > 0) {
            t3 = a8;
            t4 = (0x2E0 + t0);
            t5 = (a4 << 2);
            t6 = (0x2E0 + t0);
            t7 = (0x2E0 + t0);
            t8 = (0x2E0 + t0);
            t9 = 0x0;
            for (;;) {
                t10 = *(signed char *)((t0 + 0x2DD));
                if (t10 != 0) {
                    if (t10 != 1) {
                        if (t10 != 2) {
                            t10 = t4;
                            t4 = t5;
                        } else {
                            *(unsigned int *)((t7 + 0x0)) = (FUN_0c059698());
                        }
                        t5 = t10;
                        t10 = t4;
                    } else {
                        *(unsigned int *)((t6 + 0x0)) = (FUN_0c0595fa());
                    }
                    t4 = t5;
                    t5 = t10;
                } else {
                    t3 = 0x2E0;
                    t3 = (t3 + t0);
                    *(unsigned int *)(((((t9 << 2) + t3)) + 0x0)) = (FUN_0c059538());
                }
                t3 = (*(int *)((t8 + 0x0)));
                if (t3 == 0) {
                    break;
                }
                t9 = (t9 + 0x1);
                t7 = (t7 + 0x4);
                t3 = (*(signed char *)((t0 + 0x2DC)));
                t8 = (t8 + 0x4);
                t3 = (t3 + 0x1);
                (((struct o2DC_uchar *)(t0))->v) = t3;
                t6 = (t6 + 0x4);
                if ((int)t9 >= (int)a7) {
                    return t0;
                }
            }
            FUN_0c059330(t0, t5);
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

