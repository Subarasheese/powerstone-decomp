/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0555c4(void);
int FUN_0c05d338(int, int);
int FUN_0c0cc212(void);
int FUN_0c0cc2a6(void);
int FUN_0c0cc72e(int);
int FUN_0c0cc832(int);
int FUN_0c0cc9de(void);
int FUN_0c0cc9fe(void);
int FUN_0c0ccaa8(void);
int FUN_0c0ccad6(void);
int FUN_0c0ccb12(void);
int FUN_0c0ccbca(void);
int FUN_0c0cc8e8(void);

int FUN_0c0cc8e8(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c0555c4();
    t2 = t1;
    if (t1 != 0) {
        if ((*(signed char *)0xC7F319E) == 0) {
            FUN_0c0ccbca();
        }
        if (((*(signed char *)0xC7E40C8) == 10) && (t0 = *(signed char *)0xC7EB398, t0 == 10)) {
            t1 = t0;
        } else {
            (((struct o0_uchar *)0xC7F2977)->v) = (FUN_0c0cc212());
            (((struct o1_uchar *)0xC7F2977)->v) = 0x0;
            t0 = *(signed char *)0xC7F266C;
            switch (t0) {
            case 0:
                FUN_0c0cc9de();
                break;
            case 1:
                FUN_0c0cc9fe();
                break;
            case 2:
                FUN_0c0ccaa8();
                break;
            case 3:
                FUN_0c0ccad6();
                break;
            case 4:
                FUN_0c0ccb12();
                break;
            }
            t0 = 0x314;
            if ((*(signed char *)0xC7F2978) != 0) {
                t3 = FUN_0c0cc2a6();
                if ((*(signed char *)0xC7F2991) != 0) {
                    t0 = (FUN_0c0cc832(t3));
                } else {
                    t0 = FUN_0c0cc72e((*(signed char *)0xC7F2670));
                    FUN_0c05d338(t3, t0);
                    t3 = *(signed char *)0xC7F2670;
                    *(unsigned char *)0xC7F2670 = (t3 + 0x1);
                    t0 = (signed char)(t3 + 0x1);
                    if ((int)(signed char)(t3 + 0x1) >= (int)0xA) {
                        *(unsigned char *)0xC7F2670 = 0x0;
                        t0 = 0x0;
                    }
                }
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}
