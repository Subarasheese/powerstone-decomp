/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c04b6b8(int, int, int, int);
extern int FUN_0c04b840();
int FUN_0c04baa6(int, int, int, int);
int FUN_0c04bc94(int, int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c0a6b6e(int a4, int a5, int a6, int a7);
int FUN_0c0aa5bc(int a4, int a5, int a6, int a7);
void FUN_0c04bef2(int a4, int a5, int a6, int a7);
int FUN_0c0ab97c(int a4, int a5, int a6, int a7);

int FUN_0c0a6b6e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            u0 = (((struct o58_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = (u0 + 0.099999994f);
            if (!(1.0f > (u0 + 0.099999994f))) {
                (((struct o58_float *)(a4))->v) = 1.0f;
            }
            u0 = (((struct o58_float *)(a4))->v);
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            t0 = 0x58;
            if (((((struct o58_float *)(a4))->v)) > (*(float *)0xC0A6CF0)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x78;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A30, 0x6);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
        (((struct o58_float *)(a4))->v) = 0.0299999993f;
        (((struct o54_float *)(a4))->v) = 0.0299999993f;
        (((struct o50_float *)(a4))->v) = 0.0299999993f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
    }
    return 0xEC;
}

int FUN_0c0aa5bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        t0 = *(signed char *)0xC7F2EE6;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 2) {
            t0 = *(signed char *)0xC7F2EE7;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 == 3) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664A60, 0x1F);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    return (FUN_0c0e6fe8());
}

void FUN_0c04bef2(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(signed char)a7 < (int)0xA) {
        if ((signed char)a7 != 0) {
            if ((signed char)a7 != 1) {
                if ((signed char)a7 != 2) {
                    if ((signed char)a7 != 3) {
                        if ((signed char)a7 != 4) {
                            if ((signed char)a7 != 5) {
                                if ((signed char)a7 != 6) {
                                    if ((signed char)a7 != 7) {
                                        if ((signed char)a7 != 8) {
                                            if ((signed char)a7 != 9) {
                                                return;
                                            }
                                            FUN_0c04b6b8(0x0, 0x0, a4, a5);
    return;
                                        }
                                        FUN_0c04b6b8(0x0, 0x0, a4, a5);
                                        FUN_0c04baa6(0x0, 0x0, a4, a5);
    return;
                                    }
                                    FUN_0c04b6b8(0x0, 0x0, a4, a5);
                                    t0 = ((int (*)(int, int, int, int, int))(FUN_0c04b840))(0x0, 0x0, a4, a5, 0x0);
                                    return;
                                }
                                FUN_0c04b6b8(0x0, 0x0, a4, a5);
    return;
                            }
                            FUN_0c04b6b8(0x0, 0x0, a4, a5);
                            t0 = ((int (*)(int, int, int, int, int))(FUN_0c04b840))(0x0, 0x0, a4, a5, 0x0);
                            return;
                        }
                        FUN_0c04b6b8(0x0, 0x0, a4, a5);
                        t0 = ((int (*)(int, int, int, int))(FUN_0c04b840))(0x0, 0x0, a4, a5);
                        t0 = ((int (*)(int, int, int, int, int, int))(FUN_0c04b840))(0x0, 0x0, a4, a5, 0x1, 0x1);
                        FUN_0c04bc94(0x0, 0x0, a4, a5);
    return;
                    }
                    FUN_0c04b6b8(0x0, 0x0, a4, a5);
                    FUN_0c04baa6(0x0, 0x0, a4, a5);
    return;
                }
                FUN_0c04b6b8(0x0, 0x0, a4, a5);
                t0 = ((int (*)(int, int, int, int, int))(FUN_0c04b840))(0x0, 0x0, a4, a5, 0x0);
                return;
            }
            FUN_0c04b6b8(0x0, 0x0, a4, a5);
    return;
        }
        FUN_0c04b6b8(0x0, 0x0, a4, a5);
    return;
    }
}

int FUN_0c0ab97c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        return t0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664A78, 0x4);
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x11F;
    (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = -20.0000095f;
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct oC_float *)(t0))->v)) * ((((struct o4_float *)(t0))->v)));
    (((struct o4_float *)(t0))->v) = ((-(u0 * 1.0f)) / 640.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((((struct oC_float *)(t0))->v)) * ((((struct o8_float *)(t0))->v)));
    (((struct o8_float *)(t0))->v) = ((-(u0 * 1.0f)) / 480.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = ((-(((((struct oC_float *)(t0))->v)) * 1.0f)) / 640.0f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = ((-(((((struct oC_float *)(t0))->v)) * 1.0f)) / 480.0f);
    (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    return 0x24;
}
