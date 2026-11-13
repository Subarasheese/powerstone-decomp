/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c67c4-0c0c6e6c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o308_float { char p[0x308]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_destroy(int, int, int, int);
int obj_set_record_char(int, int);
int obj_integrate_motion(int);
int FUN_0c0c681a(int);
int FUN_0c0c688a(int, float);
int FUN_0c0c68cc(int, int);
int FUN_0c0c69e8(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int fx_update_34(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register float u0;
    register float u1;
    register float u2;

    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
            if (t5 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4, a5, a6, a7);
            }
            if (t5 == 3) {
                return obj_destroy(a4, a5, a6, a7);
            }
            return t5;
        }
        t5 = *(signed char *)((a4 + 0x9));
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 != 2) {
                    if (t5 == 3) {
                        t6 = FUN_0c0c69e8(a4);
                        t7 = (signed char)t6;
                        if ((signed char)t6 == 0) {
                            u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                            (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                            (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
                            u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                            (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                            obj_integrate_motion(a4);
                            FUN_0c0c68cc(a4, 0x800);
                            FUN_0c0c681a(a4);
                            FUN_0c0c688a(a4, 30.0f);
                            t6 = (((struct oEE_short *)(a4))->v);
                            if (t6 == 0) {
                                (((struct oEE_ushort *)(a4))->v) = 0x2D;
                                u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
                                u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                                (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                                (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
                                u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
                                u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                                (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                                t8 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t8 + 0x1);
                                t9 = (t8 + 0x1);
                            } else {
                                t8 = (((struct oEE_short *)(a4))->v);
                                (((struct oEE_ushort *)(a4))->v) = (t8 - 1);
                                t9 = 0xEE;
                                t10 = (t8 - 1);
                                t8 = t6;
                            }
                            t7 = t9;
                            t6 = t10;
                            t9 = t8;
                        }
                        t8 = t7;
                        t7 = t6;
                        t6 = t9;
                    } else {
                        t9 = t5;
                        if (t5 == 4) {
                            obj_integrate_motion(a4);
                            FUN_0c0c681a(a4);
                            (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0222222209f);
                            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0222222209f);
                            (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0222222209f);
                            FUN_0c0c688a(a4, 30.0f);
                            t5 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t5 - 1);
                            t10 = 0xEE;
                            if ((short)(t5 - 1) == 0) {
                                t11 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t11 + 0x1);
                                t10 = (t11 + 0x1);
                            }
                            t9 = t10;
                            t10 = (short)(t5 - 1);
                        } else {
                            t5 = (0x308 + a4);
                        }
                        t8 = t9;
                        t7 = t10;
                        t9 = t5;
                    }
                    t5 = t8;
                    t8 = t7;
                    t7 = t6;
                    t6 = t9;
                } else {
                    t9 = FUN_0c0c69e8(a4);
                    t10 = (signed char)t9;
                    if ((signed char)t9 != 0) {
                    } else {
                        FUN_0c0c68cc(a4, 0x200);
                        FUN_0c0c681a(a4);
                        t9 = (((struct oEE_short *)(a4))->v);
                        if (t9 == 0) {
                            (((struct o101_uchar *)(a4))->v) = 0x3;
                            (((struct o102_uchar *)(a4))->v) = 0x3;
                            obj_set_record_char(a4, (((int)(*(signed char *)((a4 + 0x4))) >> 4) + 0x76));
                            (((struct oEE_ushort *)(a4))->v) = 0xF;
                            (((struct oF0_ushort *)(a4))->v) = 0x3;
                            (((struct oF2_ushort *)(a4))->v) = 0x1;
                            t11 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t11 + 0x1);
                            t12 = (t11 + 0x1);
                            t11 = 0x1;
                        } else {
                            t13 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t13 - 1);
                            t12 = 0xEE;
                            t14 = (t13 - 1);
                            t11 = t9;
                        }
                        t10 = t12;
                        t9 = t14;
                        t12 = t11;
                    }
                    t5 = t10;
                    t8 = t9;
                    t7 = t12;
                }
                t9 = t5;
                t5 = t8;
                t8 = t7;
                t7 = t6;
            } else {
                t6 = FUN_0c0c69e8(a4);
                t10 = (signed char)t6;
                if ((signed char)t6 != 0) {
                } else {
                    FUN_0c0c68cc(a4, 0x200);
                    FUN_0c0c681a(a4);
                    t6 = *(int *)((a4 + 0x1C));
                    t11 = (((struct oF2_short *)(t6))->v);
                    t12 = t6;
                    t6 = t11;
                    if (t11 != 0) {
                    } else {
                        t11 = *(signed char *)((a4 + 0x4));
                        (((struct oEE_ushort *)(a4))->v) = ((((t11 & 0xF) << 2) + (t11 & 0xF)) << 1);
                        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                        (((struct oF0_ushort *)(a4))->v) = 0x4;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        t12 = 0x1;
                        t6 = 0x4;
                    }
                    t10 = 0xF2;
                    t11 = t12;
                    t12 = t6;
                }
                t9 = t10;
                t5 = t11;
                t8 = t12;
            }
            t6 = t9;
            t9 = t5;
            t5 = t8;
            t8 = t7;
        } else {
            t7 = FUN_0c0c69e8(a4);
            t10 = (signed char)t7;
            if ((signed char)t7 != 0) {
            } else {
                obj_integrate_motion(a4);
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.699999988f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.699999988f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.699999988f);
                FUN_0c0c688a(a4, 10.0f);
                t7 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t7 - 1);
                t11 = 0xEE;
                t12 = (short)(t7 - 1);
                if ((short)(t7 - 1) != 0) {
                } else {
                    (((struct o58_float *)(a4))->v) = 8.0f;
                    (((struct o54_float *)(a4))->v) = 8.0f;
                    (((struct o50_float *)(a4))->v) = 8.0f;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                    (((struct oF2_ushort *)(a4))->v) = 0x1;
                    t11 = 0xF2;
                    t12 = 0x1;
                    t7 = 0x4;
                    u0 = 8.0f;
                }
                t10 = t11;
                t11 = t12;
                t12 = t7;
                u1 = u0;
            }
            t6 = t10;
            t9 = t11;
            t5 = t12;
            u0 = u1;
        }
        t7 = t6;
        t6 = ((0x2E0 + a4) + 0x4);
        t10 = t9;
        t9 = t5;
        t5 = t8;
        t8 = 0xC33C8B0;
        t11 = t0;
        t0 = 0x0;
        u1 = u0;
        for (;;) {
            if ((int)t0 >= (int)0x3) {
                break;
            }
            t7 = 0x50;
            t11 = t8;
            u0 = (*(float *)((t11 + 0x0)));
            t0 = (t0 + 0x1);
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x1C;
            t12 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            t5 = t12;
            t8 = (t8 + 0x8);
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t7 = 0x54;
            u0 = (*(float *)((t11 + 0x0)));
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x20;
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t7 = 0x58;
            u0 = (*(float *)((t11 + 0x0)));
            u1 = (*(float *)((a4 + t7)));
            t7 = 0x24;
            u0 = (u0 * u1);
            *(float *)((t5 + t7)) = u0;
            t9 = (*(int *)((t5 + 0x18)));
            t9 = (t9 + 0x400);
            t10 = t9;
            t10 = (t10 & 0xFFFF);
            *(unsigned int *)((t5 + 0x18)) = t10;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t5 = 0x2D8;
        if (((short)(t0 - 1) != 0) && (t1 = *(signed char *)((a4 + 0x2D8)), t1 == 0)) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = 0x2;
            t5 = 0x2;
        }
        return t5;
    }
    (((struct o308_float *)(a4))->v) = 0.199999988f;
    t0 = 0xC0C6AF4;
    t1 = ((0x2E0 + a4) + 0x4);
    t5 = (0x308 + a4);
    t6 = 0xC33C8B0;
    t7 = a6;
    t8 = 0x0;
    u0 = 0.199999988f;
    for (;;) {
        if ((int)t8 >= (int)0x3) {
            break;
        }
        t7 = t6;
        t7 = (t7 + 0x4);
        u0 = (*(float *)((t7 + 0x0)));
        t0 = 0x44;
        t9 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t5 = t9;
        t6 = (t6 + 0x8);
        t8 = (t8 + 0x1);
        *(float *)((t5 + t0)) = u0;
        t0 = 0x48;
        u0 = (*(float *)((t7 + 0x0)));
        *(float *)((t5 + t0)) = u0;
        t0 = 0x4C;
        u0 = (*(float *)((t7 + 0x0)));
        *(float *)((t5 + t0)) = u0;
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC33C7B0) + 0x4))));
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((0xC33C7B0 + (((*(signed char *)((a4 + 0x4))) << 2) << 1)));
    *(unsigned int *)((a4 + 0x30)) = (t0 + t1);
    u0 = math_sin_angle16((t0 + t1));
    u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
    (((struct o38_float *)(a4))->v) = (u1 * 10.0f);
    (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 10.0f));
    u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
    u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
    (((struct o40_float *)(a4))->v) = (u1 * 10.0f);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    (((struct o68_float *)(a4))->v) = 1.0f;
    (((struct o64_float *)(a4))->v) = 1.0f;
    (((struct o60_float *)(a4))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x96;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t1 = FUN_0c0c69e8(a4);
                    t5 = (signed char)t1;
                    if ((signed char)t1 == 0) {
                        u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
                        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                        (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                        (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
                        u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
                        u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                        (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                        obj_integrate_motion(a4);
                        FUN_0c0c68cc(a4, 0x800);
                        FUN_0c0c681a(a4);
                        FUN_0c0c688a(a4, 30.0f);
                        t1 = (((struct oEE_short *)(a4))->v);
                        if (t1 == 0) {
                            (((struct oEE_ushort *)(a4))->v) = 0x2D;
                            u0 = math_sin_angle16((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                            (((struct o38_float *)(a4))->v) = (u1 * 30.0f);
                            (((struct o3C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x2C))))) * 30.0f));
                            u0 = math_cos_angle16((*(int *)((a4 + 0x30))));
                            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
                            (((struct o40_float *)(a4))->v) = (u1 * 30.0f);
                            t6 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t6 + 0x1);
                            t7 = (t6 + 0x1);
                        } else {
                            t6 = (((struct oEE_short *)(a4))->v);
                            (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
                            t7 = 0xEE;
                            t8 = (t6 - 1);
                            t6 = t1;
                        }
                        t5 = t7;
                        t1 = t8;
                        t7 = t6;
                    }
                    t6 = t5;
                    t5 = t1;
                    t1 = t7;
                } else {
                    t7 = t0;
                    t8 = 0xA;
                    if (t0 == 4) {
                        obj_integrate_motion(a4);
                        FUN_0c0c681a(a4);
                        (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + -0.0222222209f);
                        (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0222222209f);
                        (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + -0.0222222209f);
                        FUN_0c0c688a(a4, 30.0f);
                        t0 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
                        t9 = 0xEE;
                        if ((short)(t0 - 1) == 0) {
                            t10 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t10 + 0x1);
                            t9 = (t10 + 0x1);
                        }
                        t7 = t9;
                        t8 = (short)(t0 - 1);
                    } else {
                        t0 = 0x96;
                        u0 = 0.0f;
                    }
                    t6 = t7;
                    t5 = t8;
                    t1 = t0;
                    u1 = u0;
                }
                t0 = t6;
                t6 = t5;
                t5 = t1;
                u0 = u1;
            } else {
                t1 = FUN_0c0c69e8(a4);
                t7 = (signed char)t1;
                if ((signed char)t1 != 0) {
                } else {
                    FUN_0c0c68cc(a4, 0x200);
                    FUN_0c0c681a(a4);
                    t1 = (((struct oEE_short *)(a4))->v);
                    if (t1 == 0) {
                        (((struct o101_uchar *)(a4))->v) = 0x3;
                        (((struct o102_uchar *)(a4))->v) = 0x3;
                        obj_set_record_char(a4, (((int)(*(signed char *)((a4 + 0x4))) >> 4) + 0x76));
                        (((struct oEE_ushort *)(a4))->v) = 0xF;
                        (((struct oF0_ushort *)(a4))->v) = 0x3;
                        (((struct oF2_ushort *)(a4))->v) = 0x1;
                        t8 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t8 + 0x1);
                        t9 = (t8 + 0x1);
                        t8 = 0x1;
                    } else {
                        t10 = (((struct oEE_short *)(a4))->v);
                        (((struct oEE_ushort *)(a4))->v) = (t10 - 1);
                        t9 = 0xEE;
                        t11 = (t10 - 1);
                        t8 = t1;
                    }
                    t7 = t9;
                    t1 = t11;
                    t9 = t8;
                }
                t0 = t7;
                t6 = t1;
                t5 = t9;
            }
            t1 = t0;
            t0 = t6;
            t6 = t5;
            u1 = u0;
        } else {
            t5 = FUN_0c0c69e8(a4);
            t7 = (signed char)t5;
            if ((signed char)t5 != 0) {
            } else {
                FUN_0c0c68cc(a4, 0x200);
                FUN_0c0c681a(a4);
                t5 = *(int *)((a4 + 0x1C));
                t8 = (((struct oF2_short *)(t5))->v);
                t9 = t5;
                t5 = t8;
                if (t8 != 0) {
                } else {
                    t8 = *(signed char *)((a4 + 0x4));
                    (((struct oEE_ushort *)(a4))->v) = ((((t8 & 0xF) << 2) + (t8 & 0xF)) << 1);
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                    (((struct oF0_ushort *)(a4))->v) = 0x4;
                    (((struct oF2_ushort *)(a4))->v) = 0x1;
                    t9 = 0x1;
                    t5 = 0x4;
                }
                t7 = 0xF2;
                t8 = t9;
                t9 = t5;
            }
            t1 = t7;
            t0 = t8;
            t6 = t9;
        }
        t5 = t1;
        t1 = t0;
        t0 = t6;
        u0 = u1;
    } else {
        t6 = FUN_0c0c69e8(a4);
        t7 = (signed char)t6;
        if ((signed char)t6 != 0) {
        } else {
            obj_integrate_motion(a4);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.699999988f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.699999988f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.699999988f);
            FUN_0c0c688a(a4, 10.0f);
            t6 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t6 - 1);
            t8 = 0xEE;
            t9 = (short)(t6 - 1);
            if ((short)(t6 - 1) != 0) {
            } else {
                (((struct o58_float *)(a4))->v) = 8.0f;
                (((struct o54_float *)(a4))->v) = 8.0f;
                (((struct o50_float *)(a4))->v) = 8.0f;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oF0_ushort *)(a4))->v) = 0x4;
                (((struct oF2_ushort *)(a4))->v) = 0x1;
                t8 = 0xF2;
                t9 = 0x1;
                t6 = 0x4;
                u1 = 8.0f;
            }
            t7 = t8;
            t8 = t9;
            t9 = t6;
            u2 = u1;
        }
        t5 = t7;
        t1 = t8;
        t0 = t9;
        u0 = u2;
    }
    t6 = t5;
    t5 = ((0x2E0 + a4) + 0x4);
    t7 = t1;
    t1 = t0;
    t0 = t2;
    t2 = 0xC33C8B0;
    t8 = t3;
    t3 = 0x0;
    u1 = u0;
    for (;;) {
        if ((int)t3 >= (int)0x3) {
            break;
        }
        t6 = 0x50;
        t8 = t2;
        u0 = (*(float *)((t8 + 0x0)));
        t3 = (t3 + 0x1);
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x1C;
        t9 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t0 = t9;
        t2 = (t2 + 0x8);
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t6 = 0x54;
        u0 = (*(float *)((t8 + 0x0)));
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x20;
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t6 = 0x58;
        u0 = (*(float *)((t8 + 0x0)));
        u1 = (*(float *)((a4 + t6)));
        t6 = 0x24;
        u0 = (u0 * u1);
        *(float *)((t0 + t6)) = u0;
        t1 = (*(int *)((t0 + 0x18)));
        t1 = (t1 + 0x400);
        t7 = t1;
        t7 = (t7 & 0xFFFF);
        *(unsigned int *)((t0 + 0x18)) = t7;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x2D8;
    if (((short)(t0 - 1) != 0) && (t4 = *(signed char *)((a4 + 0x2D8)), t4 == 0)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t1 = 0x2;
    }
    return t1;
}
