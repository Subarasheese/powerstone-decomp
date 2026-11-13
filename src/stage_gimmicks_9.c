/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0af7e8-0c0afac2) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int math_rand_next(void);
extern int FUN_0c0e6e5c();

int stage_gimmick_09_spawn(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = obj_create(0x5, 0x1, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = 0x2;
        *(unsigned short *)((t3 + 0x6)) = 0x41F;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t3))->v) = 0x0;
        (((struct oEE_ushort *)(t3))->v) = 0x0;
        *(unsigned int *)((t3 + 0x10)) = 0xC0AF89C;
        *(unsigned char *)((t3 + 0x4)) = 0xD;
        *(volatile int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18));
        t5 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x1D4, 0xC350B60, 0xC7F302C);
        *(volatile int *)((((short)((short)(*(signed char *)((t0 + 0x25))) * (short)0x34) + t1) + 0x1C));
        t5 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t2, t1, t0);
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        FUN_0c06233a(((((struct o2E0_int *)(t3))->v)), 0xC664958, 0x27);
        *(unsigned char *)((((((struct o2E0_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t3))->v)) + 0x2)) = 0xF;
        t4 = 0xF;
    }
    return t4;
}

int stage_gimmick_09_update(int a4)
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
                        t1 = 0xEE;
                        if ((int)((((struct oEC_short *)(a4))->v)) > (int)((((struct oEE_short *)(a4))->v))) {
                            *(unsigned char *)((a4 + 0x8)) = 0x0;
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                            *(unsigned char *)((a4 + 0x1)) = 0x1;
                            t1 = 0x1;
                        }
                        t2 = t1;
                    }
                    t1 = t2;
                } else {
                    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x27));
                    (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
                    t2 = 0xEC;
                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)0x46) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((a4 + 0x1)) = 0x0;
                        math_rand_next();
                        t3 = ((int (*)(void))(FUN_0c0e6e5c))();
                        (((struct oEE_ushort *)(a4))->v) = (t3 + 0x78);
                        t2 = (t3 + 0x78);
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x27));
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
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x27));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.199999988f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.199999988f);
            t0 = 0x50;
            if (1.0f > ((((struct o50_float *)(a4))->v))) {
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
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t0 = 0x58;
    }
    return t0;
}
