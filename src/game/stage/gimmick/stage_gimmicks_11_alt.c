/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0150-0c0b0324) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c06233a(int, int, int);
int math_rand_next(void);
extern int FUN_0c0e6e5c();
int FUN_0c0e6fe8(void);

int stage_gimmick_11_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    *(volatile short *)((a4 + 0xEC));
    t0 = ((int (*)(int))(FUN_0c0e6e5c))(a4);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    t2 = t1;
                    if (t1 != 4) {
                    } else {
                        t1 = 0xEC;
                        if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x78) {
                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            *(unsigned char *)((a4 + 0x1)) = 0x1;
                            t1 = 0x1;
                        }
                        t2 = t1;
                    }
                    t1 = t2;
                } else {
                    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
                    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
                    t2 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x46) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((a4 + 0x1)) = 0x0;
                        t2 = 0x0;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
                t1 = 0xEC;
                if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x3C) {
                    t3 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                    t1 = (t3 + 0x1);
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0xE));
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.199999988f);
            t0 = 0x54;
            if (1.0f > ((((struct o54_float *)(a4))->v))) {
            } else {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t0 = (t2 + 0x1);
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o5C_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        math_rand_next();
        t1 = ((int (*)(void))(FUN_0c0e6e5c))();
        t0 = (FUN_0c0e6fe8());
    }
    return t0;
}
