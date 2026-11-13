/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7210_uchar { char p[0x7210]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o7217_uchar { char p[0x7217]; unsigned char v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o72A8_short { char p[0x72A8]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c08d65c(int, int);
int FUN_0c0a3792(void);
float math_rand_float(void);
int pl_get_held_item_class(int);
int pl_reduce_life_clamped(int, float);
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_timer_arm_forever(int);
int FUN_0c092412(int a4, float f4);

int FUN_0c092412(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    (((struct o7205_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xB));
    if (((unsigned char)t0 != 4) && (((unsigned char)t0 != 5) && ((unsigned char)t0 != 6))) {
        FUN_0c08d65c(a4, (*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xF))));
    } else {
        pl_reduce_life_clamped(a4, f4);
    }
    if ((int)((((struct o71D4_short *)(a4))->v)) < 0) {
        *(unsigned char *)((a4 + 0x9)) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0xD)) = 0x0;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        (((struct o71BB_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x71BA)));
        (((struct o71BA_uchar *)(a4))->v) = 0x1B;
        t0 = 0x71BA;
    } else {
        (((struct o7216_uchar *)(a4))->v) = 0x1;
        pl_reset_pose(a4);
        pl_timer_arm_forever(a4);
        *(volatile signed char *)((a4 + 0x4));
        FUN_0c0a3792();
        t1 = *(signed char *)((a4 + 0x7210));
        (((struct o7210_uchar *)(a4))->v) = (t1 + 0x1);
        if ((int)(signed char)(t1 + 0x1) > (int)0x63) {
            (((struct o7210_uchar *)(a4))->v) = 0x63;
        }
        t1 = pl_get_held_item_class(a4);
        if ((signed char)t1 == 1) {
            pl_start_motion(a4, 0x0, 0x5B);
        } else {
            if ((*(signed char *)((a4 + 0x4))) != 2) {
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t1 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
                    t2 = 0x21;
                    if (((unsigned char)t1 != 1) && ((unsigned char)t1 != 4)) {
                        t2 = 0x23;
                    }
                    pl_start_motion(a4, 0x0, t2);
                } else {
                    pl_start_motion(a4, 0x0, 0x25);
                }
            } else {
                t1 = *(signed char *)((a4 + 0x7210));
                t2 = t1;
                if ((int)(signed char)t1 > (int)0x5) {
                    t2 = 0x5;
                }
                if ((*(signed char *)((a4 + 0x71BC))) == 0) {
                    t1 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
                    if (((unsigned char)t1 != 1) && ((unsigned char)t1 != 4)) {
                        if ((*(signed char *)((a4 + 0x7217))) == 0) {
                            t1 = *(signed char *)((((signed char)t2 + 0xC1508C4) + 0x0));
                            u0 = math_rand_float();
                            u1 = (u0 * 255.0f);
                            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                            }
                            if ((unsigned int)(unsigned char)t1 > (unsigned int)((int)((unsigned int)(int)u1 % (unsigned int)0x20))) {
                                pl_start_motion(a4, 0x0, 0x23);
                                (((struct o7217_uchar *)(a4))->v) = 0x0;
                            } else {
                                pl_start_motion(a4, 0x0, 0x23);
                                (((struct o7217_uchar *)(a4))->v) = 0x1;
                            }
                        } else {
                            if ((*(signed char *)((a4 + 0x7217))) == 1) {
                                t1 = *(signed char *)((((signed char)t2 + 0xC1508C4) + 0x0));
                                u0 = math_rand_float();
                                u1 = (u0 * 255.0f);
                                if (!(2.14748365e+09f > (u0 * 255.0f))) {
                                    u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                                }
                                if ((unsigned int)(unsigned char)t1 > (unsigned int)((int)((unsigned int)(int)u1 % (unsigned int)0x20))) {
                                    pl_start_motion(a4, 0x0, 0x23);
                                    (((struct o7217_uchar *)(a4))->v) = 0x1;
                                } else {
                                    pl_start_motion(a4, 0x0, 0x23);
                                    (((struct o7217_uchar *)(a4))->v) = 0x0;
                                }
                            } else {
                                pl_start_motion(a4, 0x0, 0x23);
                                (((struct o7217_uchar *)(a4))->v) = 0x0;
                            }
                        }
                    } else {
                        t1 = *(signed char *)((((signed char)t2 + 0xC1508C4) + 0x0));
                        u0 = math_rand_float();
                        u1 = (u0 * 255.0f);
                        if (!(2.14748365e+09f > (u0 * 255.0f))) {
                            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                        }
                        if ((unsigned int)(unsigned char)t1 > (unsigned int)((int)((unsigned int)(int)u1 % (unsigned int)0x20))) {
                            pl_start_motion(a4, 0x0, 0x21);
                            (((struct o7217_uchar *)(a4))->v) = 0x0;
                        } else {
                            pl_start_motion(a4, 0x0, 0x23);
                            (((struct o7217_uchar *)(a4))->v) = 0x1;
                        }
                    }
                } else {
                    pl_start_motion(a4, 0x0, 0x25);
                    (((struct o7217_uchar *)(a4))->v) = 0x2;
                }
            }
        }
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t1 = (((struct o72A8_short *)(a4))->v);
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + 0x8000);
        (((struct o7248_uint *)(a4))->v) = (unsigned short)((unsigned short)(t1 + 0x8000) + 0x8000);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = (unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0xA)));
        t1 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
