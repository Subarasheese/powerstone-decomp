/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0afac2-0c0b0150) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c06233a(int, int, int);
int snd_play_stage_obj_se(int, int, int);
int FUN_0c0afac2(int);
int FUN_0c0afb0a(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);

int FUN_0c0afb68(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        return t0;
    }
    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        (((struct o105_uchar *)(a4))->v) = 0x1;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        (((struct o107_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x9)) = 0x1;
        return 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(volatile short *)((a4 + 0xEC));
    t0 = FUN_0c0e6e5c();
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        FUN_0c0afac2(a4);
                        u0 = 0.199999988f;
                        u0 = u0 + 0.099999994f * (math_sin_angle16(((((struct oF2_short *)(a4))->v))));
                        (((struct o54_float *)(a4))->v) = u0;
                        (((struct oF2_ushort *)(a4))->v) = ((((((struct oF2_short *)(a4))->v)) + 0x2000) & 0x7FFF);
                        if (((((struct oF0_short *)(a4))->v)) != 0) {
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                        }
                        t2 = 0xF0;
                        if (((((struct oF0_short *)(a4))->v)) != 0) {
                        } else {
                            t3 = 0xF2;
                            if (((((struct oF2_short *)(a4))->v)) != 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                (((struct oF2_ushort *)(a4))->v) = 0x8;
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t3 = 0x2E4;
                            }
                            t2 = t3;
                        }
                        return t2;
                    }
                    if (t1 == 5) {
                        t2 = (((struct oF2_short *)(a4))->v);
                        (((struct oF2_ushort *)(a4))->v) = (t2 - 1);
                        if ((short)(t2 - 1) != 0) {
                            return 0xF2;
                        }
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o105_uchar *)(a4))->v) = 0x0;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        FUN_0c0afb0a(a4);
                        return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x3);
                    }
                    if (t1 == 6) {
                        FUN_0c0afac2(a4);
                        FUN_0c0afb0a(a4);
                        u0 = (((struct o54_float *)(a4))->v);
                        (((struct o54_float *)(a4))->v) = (u0 + 0.125f);
                        t2 = 0x54;
                        if (!(1.0f > (u0 + 0.125f))) {
                            (((struct o54_float *)(a4))->v) = 1.0f;
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            (((struct oF0_ushort *)(a4))->v) = 0x78;
                            t2 = 0xF0;
                        }
                        t3 = t2;
                    } else {
                        if (t1 == 7) {
                            FUN_0c0afac2(a4);
                            FUN_0c0afb0a(a4);
                            t2 = (((struct oF0_short *)(a4))->v);
                            (((struct oF0_ushort *)(a4))->v) = (t2 - 1);
                            t4 = 0xF0;
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                (((struct o105_uchar *)(a4))->v) = 0x1;
                                t4 = 0x105;
                            }
                            t2 = t4;
                        } else {
                            if (t1 == 8) {
                                FUN_0c0afac2(a4);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o44_float *)(t4))->v) = (((((struct o44_float *)(t4))->v)) - 0.125f);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o48_float *)(t4))->v) = (((((struct o48_float *)(t4))->v)) - 0.125f);
                                t4 = (((struct o2E4_int *)(a4))->v);
                                (((struct o4C_float *)(t4))->v) = (((((struct o4C_float *)(t4))->v)) - 0.125f);
                                t4 = 0x44;
                                if (!(((((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.0f)) {
                                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    t4 = 0x2E4;
                                }
                                t2 = t4;
                            } else {
                                t4 = t1;
                                if (t1 == 9) {
                                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                                    t1 = 0xEE;
                                    if ((int)((((struct oEC_short *)(a4))->v)) > (int)((((struct oEE_short *)(a4))->v))) {
                                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                                        t1 = 0xEC;
                                    }
                                    t4 = t1;
                                }
                                t2 = t4;
                            }
                        }
                        t3 = t2;
                    }
                    return t3;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
                (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.099999994f);
                t1 = 0xEC;
                if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x46) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    math_rand_float();
                    (((struct oEE_ushort *)(a4))->v) = (((short)(FUN_0c0e6f24()) * (short)0x3C) + 0x1E0);
                    FUN_0c0e6fe8();
                    (((struct o5C_float *)(a4))->v) = 1.0f;
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned int *)(((((((struct o2E4_int *)(a4))->v)) + 0x28) + 0x0)) = 0x2;
                    *(unsigned int *)(((((((struct o2E4_int *)(a4))->v)) + 0x2C) + 0x0)) = 0x1;
                    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
                    FUN_0c0afac2(a4);
                    (((struct oF0_ushort *)(a4))->v) = 0x3C;
                    (((struct oF2_ushort *)(a4))->v) = 0x0;
                    t1 = 0xF2;
                }
                return t1;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
            t1 = 0xEC;
            if ((int)((((struct oEC_short *)(a4))->v)) <= (int)0x3C) {
            } else {
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            return t1;
        }
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC664958, (t0 + 0x2F));
        u0 = (((struct o54_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u0 + 0.199999988f);
        t0 = 0x54;
        if (1.0f > (u0 + 0.199999988f)) {
        } else {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x2);
}
