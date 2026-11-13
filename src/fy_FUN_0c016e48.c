/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c016344(void);
int FUN_0c016558(void);
int FUN_0c0169e0(void);
int FUN_0c016b3e(int);
int FUN_0c016d08(void);
int FUN_0c016d8a(void);
int FUN_0c016e02(void);
int FUN_0c0179ea(void);
int FUN_0c031496(int, int, int, int);
int FUN_0c0488b8(int, int, int, int);
int FUN_0c058f4e(void);
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c0a2f7a(void);
int FUN_0c0a35d2(void);
int FUN_0c0d87aa(int, int, int, int, int, int, int, int);
int FUN_0c0d8f10(int, int, int);
int FUN_0c016e48(void);

int FUN_0c016e48(void)
{
    int stk[6];
    register int t5;
    register int t17;
    register int t30;
    register int t164;
    register int t165;
    register int t11;
    int t12;
    register int t24;
    int t25;
    int t112;
    int t151;

    if ((*(signed char *)0xC7F300B) != 0) {
        return 0x12B;
    }
    if ((*(signed char *)0xC7F300E) != 0) {
        return 0x12E;
    }
    t5 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t5 != 0) {
        if ((unsigned char)t5 != 1) {
            if ((unsigned char)t5 == 2) {
                (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
                (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
                (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
                (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
                FUN_0c016b3e(0x0);
                FUN_0c016d8a();
                (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                if (((int)((((struct oA_short *)0xC7F2EE4)->v)) < (int)0x168) && ((t11 = (((struct o0_short *)0xC361BFC)->v), ((unsigned short)t11 & 8) == 0) && (t12 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t12 & 8) == 0))) {
                } else {
                    t17 = 0xFF;
                    if ((*(signed char *)0xC7F301E) != 0) {
                    } else {
                        t17 = ((*(signed char *)0xC7F2EE5) + 0x1);
                    }
                    (((struct o1_uchar *)0xC7F2EE4)->v) = t17;
                    FUN_0c031496(0xFFFFFFFF, 0x0, 0x1, 0x15);
                    (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                }
            } else {
                if ((unsigned char)t5 == 3) {
                    (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                    if (((int)((((struct oA_short *)0xC7F2EE4)->v)) < (int)0x168) && ((t24 = (((struct o0_short *)0xC361BFC)->v), ((unsigned short)t24 & 8) == 0) && (t25 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t25 & 8) == 0))) {
                        t164 = 0xC7F2EE5;
                        t165 = 0x14;
                    } else {
                        t30 = 0xFF;
                        if ((*(signed char *)0xC7F301E) != 0) {
                        } else {
                            t30 = ((*(signed char *)0xC7F2EE5) + 0x1);
                        }
                        (((struct o1_uchar *)0xC7F2EE4)->v) = t30;
                        FUN_0c031496(0xFFFFFFFF, 0x0, 0x1, 0x15);
                        (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                    }
                } else {
                    if ((unsigned char)t5 == 4) {
                        (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                        if ((int)((((struct oA_short *)0xC7F2EE4)->v)) >= (int)0x14) {
                            (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
                            FUN_0c058f4e();
                            FUN_0c016e02();
                            FUN_0c031496(0xFFFFFFFF, 0x0, 0x0, 0x14);
                            (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                        } else {
                            t164 = 0xC7F2EE5;
                            t165 = 0x14;
                        }
                    } else {
                        if ((unsigned char)t5 == 5) {
                            (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                            if ((int)((((struct oA_short *)0xC7F2EE4)->v)) >= (int)0x78) {
                                (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
                                FUN_0c031496(0xFFFFFFFF, 0x0, 0x1, 0x15);
                                (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                            } else {
                                t164 = 0xC7F2EE5;
                                t165 = 0x14;
                            }
                        } else {
                            if ((unsigned char)t5 == 6) {
                                (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                                if ((int)((((struct oA_short *)0xC7F2EE4)->v)) < (int)0x14) {
                                    t164 = 0xC7F2EE5;
                                    t165 = 0x14;
                                } else {
                                    FUN_0c058f4e();
                                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x5;
                                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
                                }
                            } else {
                                (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
                                if ((int)((((struct oA_short *)0xC7F2EE4)->v)) >= (int)0x14) {
                                    FUN_0c031496(0xFFFFFFFF, 0x0, 0x0, 0x1);
                                    FUN_0c058f4e();
                                    (((struct o0_uchar *)0xC7F2EE4)->v) = 0x5;
                                    (((struct o1_uchar *)0xC7F2EE4)->v) = 0x0;
                                } else {
                                    t164 = 0xC7F2EE5;
                                    t165 = 0x14;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
            if (((((struct oA_short *)0xC7F2EE4)->v)) == 0x19D8) {
                FUN_0c016b3e(0x1);
            }
            if ((int)((((struct oA_short *)0xC7F2EE4)->v)) >= (int)0x1A03) {
                (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t112 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t112 & 0x8) == 0)) {
                t164 = 0xC361BF0;
                t165 = 0x8;
            } else {
                (((struct o1_uchar *)0xC7F2EE4)->v) = 0x3;
                (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
                (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
                (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
                FUN_0c058f4e();
                FUN_0c016b3e(0x0);
                FUN_0c016d8a();
                (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
                FUN_0c0488b8(0x0, 0x0, 0x3C, 0x1);
            }
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x7F7FFF;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x7F7FFF;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x7F7FFF;
        (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
        (((struct oC_ushort *)0xC7F2EE4)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c031496(0xFFFFFFFF, 0x0, 0x0, 0x1E);
        FUN_0c05f2d4(0x3, 0x0);
        FUN_0c0a2f7a();
        FUN_0c0a35d2();
        FUN_0c0d8f10(0x1C, 0x0, 0xF0);
        FUN_0c016344();
        FUN_0c016558();
        FUN_0c0169e0();
        FUN_0c016b3e(0x0);
        FUN_0c016d08();
        FUN_0c0179ea();
        (((struct oA_ushort *)0xC7F2EE4)->v) = (((((struct oA_short *)0xC7F2EE4)->v)) + 0x1);
        if (((((struct oA_short *)0xC7F2EE4)->v)) == 0x19D8) {
            FUN_0c016b3e(0x1);
        }
        if ((int)((((struct oA_short *)0xC7F2EE4)->v)) >= (int)0x1A03) {
            (((struct o1_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t151 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t151 & 0x8) == 0)) {
            t164 = 0xC361BF0;
            t165 = 0x8;
        } else {
            (((struct o1_uchar *)0xC7F2EE4)->v) = 0x3;
            (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
            (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
            (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
            FUN_0c058f4e();
            FUN_0c016b3e(0x0);
            FUN_0c016d8a();
            (((struct oA_ushort *)0xC7F2EE4)->v) = 0x0;
            FUN_0c0488b8(0x0, 0x0, 0x3C, 0x1);
        }
    }
    FUN_0c0d87aa(t164, t165, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    FUN_0c05f952();
    FUN_0c05948c(0x5);
    FUN_0c05948c(0x6);
    return FUN_0c0593e0(0x5);
}
