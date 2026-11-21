/* Straight-line functions with calls and guards (batch gen_ez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXB_EntryData(int, int, int);
int ADXB_Start(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int FUN_0c0fcea0(int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107602(int);
int FUN_0c1076ba(int);
int FUN_0c1077d4(int);
int FUN_0c107e7e(int);
int FUN_0c108fe8(int, int, int, int);
int FUN_0c114338(int);
int kmiCopyFromFrameBuffer(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int FUN_0c0fa966(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c10dbe0(int a4, int a5, int a6, int a7);
int FUN_0c107872(int a4, int a5, int a6, int a7);
int FUN_0c106048(int a4, int a5, int a6, int a7);
int FUN_0c0fd240(int a4, int a5, int a6, int a7);

int FUN_0c0fa966(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[5];
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t10;
    register int t19;
    register int t21;
    register int t30;
    register int t32;
    register int t41;
    register int t43;
    register int t52;
    register int t54;
    register int t63;

    (((struct o0_uint *)0xC81747C)->v) = (a4 << 2);
    (((struct o4_uint *)0xC81747C)->v) = (a5 << 2);
    (((struct o8_uint *)0xC81747C)->v) = (a6 << 2);
    (((struct oC_uint *)0xC81747C)->v) = (a7 << 2);
    (((struct o10_uint *)0xC81747C)->v) = (a8 << 2);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = (*(int *)0xC8173F8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0xC) + 0x4);
    if ((unsigned int)0x0 >= (unsigned int)a10) {
    } else {
        t1 = 0x0;
        t2 = a10;
        t3 = ((((int)stk + 0) + 0xC) + 0x4);
        t4 = 0x0;
        for (;;) {
            if (((*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2)))) & 31) != 0) {
                t2 = t4;
                t2 = (t2 << 2);
                t2 = (t2 + (((int)stk + 0) + 0xC));
                t1 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 0)) = t2;
                t3 = (*(int *)((t2 + 0x0)));
                t3 = (t3 + 0x1F);
                t3 = (t3 & t1);
                *(unsigned int *)((t2 + 0x0)) = t3;
            }
            t2 = t4;
            t2 = (t2 << 2);
            t3 = t4;
            t2 = (t2 + t3);
            t2 = (t2 << 2);
            t3 = 0xC8172FC;
            t2 = (signed char)t2;
            t2 = (t2 + 0xC803E04);
            *(unsigned int *)(((int)stk + 0)) = t2;
            if (((*(int *)((t3 + 0x0))) == 1) && (t1 = 0xC8173D8, t10 = *(int *)((t1 + 0x0)), t10 == 32)) {
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t2 + 0x0)) = 0x10000000;
                t19 = 0x0;
            } else {
                t2 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t2) {
                    t3 = (*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2))));
                    t1 = (*(int *)(((int)stk + 0)));
                    t3 = (t3 + 0x0);
                    *(unsigned int *)((t1 + 0x0)) = t3;
                    t19 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t1 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t1 + 0x0)) = 0x0;
                    t19 = 0x0;
                }
            }
            t3 = t4;
            t3 = (t3 << 2);
            t2 = t4;
            t3 = (t3 + t2);
            t3 = (t3 << 2);
            t2 = 0xC8172FC;
            t3 = (signed char)t3;
            t3 = (t3 + 0xC803E04);
            *(unsigned int *)(((int)stk + 0)) = t3;
            if (((*(int *)((t2 + 0x0))) == 1) && (t1 = 0xC8173D8, t21 = *(int *)((t1 + 0x0)), t21 == 33)) {
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t2 + 0x4)) = 0x10000000;
                t30 = t19;
            } else {
                t2 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t2) {
                    t3 = (*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2))));
                    t1 = (*(int *)(((int)stk + 0)));
                    t3 = (t3 + (t19 << 2));
                    *(unsigned int *)((t1 + 0x4)) = t3;
                    t30 = (((t19 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t1 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t1 + 0x4)) = 0x0;
                    t30 = t19;
                }
            }
            t3 = t4;
            t3 = (t3 << 2);
            t2 = t4;
            t3 = (t3 + t2);
            t3 = (t3 << 2);
            t2 = 0xC8172FC;
            t3 = (signed char)t3;
            t3 = (t3 + 0xC803E04);
            *(unsigned int *)(((int)stk + 0)) = t3;
            if (((*(int *)((t2 + 0x0))) == 1) && (t1 = 0xC8173D8, t32 = *(int *)((t1 + 0x0)), t32 == 34)) {
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t2 + 0x8)) = 0x10000000;
                t41 = t30;
            } else {
                t2 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t2) {
                    t3 = (*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2))));
                    t1 = (*(int *)(((int)stk + 0)));
                    t3 = (t3 + (t30 << 2));
                    *(unsigned int *)((t1 + 0x8)) = t3;
                    t41 = (((t30 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t1 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t1 + 0x8)) = 0x0;
                    t41 = t30;
                }
            }
            t3 = t4;
            t3 = (t3 << 2);
            t2 = t4;
            t3 = (t3 + t2);
            t3 = (t3 << 2);
            t2 = 0xC8172FC;
            t3 = (signed char)t3;
            t3 = (t3 + 0xC803E04);
            *(unsigned int *)(((int)stk + 0)) = t3;
            if (((*(int *)((t2 + 0x0))) == 1) && (t1 = 0xC8173D8, t43 = *(int *)((t1 + 0x0)), t43 == 35)) {
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t2 + 0xC)) = 0x10000000;
                t52 = t41;
            } else {
                t2 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t2) {
                    t3 = (*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2))));
                    t1 = (*(int *)(((int)stk + 0)));
                    t3 = (t3 + (t41 << 2));
                    *(unsigned int *)((t1 + 0xC)) = t3;
                    t52 = (((t41 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t1 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t1 + 0xC)) = 0x0;
                    t52 = t41;
                }
            }
            t3 = t4;
            t3 = (t3 << 2);
            t2 = t4;
            t3 = (t3 + t2);
            t3 = (t3 << 2);
            t2 = 0xC8172FC;
            t3 = (signed char)t3;
            t3 = (t3 + 0xC803E04);
            *(unsigned int *)(((int)stk + 0)) = t3;
            if (((*(int *)((t2 + 0x0))) == 1) && (t1 = 0xC8173D8, t54 = *(int *)((t1 + 0x0)), t54 == 36)) {
                t2 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t2 + 0x10)) = 0x10000000;
                t63 = t52;
            } else {
                t3 = a8;
                t2 = 0x0;
                if ((unsigned int)t3 > (unsigned int)t2) {
                    t1 = (*(int *)(((((int)stk + 0) + 0xC) + (t4 << 2))));
                    t3 = (*(int *)(((int)stk + 0)));
                    t1 = (t1 + (t52 << 2));
                    *(unsigned int *)((t3 + 0x10)) = t1;
                    t3 = a8;
                    t63 = (((t52 + t3) + 0x17) & 0xFFFFFFF8);
                } else {
                    t3 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t3 + 0x10)) = 0x0;
                    t63 = t52;
                }
            }
            t2 = (*(int *)(((int)stk + 4)));
            t3 = (*(int *)(((int)stk + 8)));
            t4 = (t4 + 0x1);
            t1 = (*(int *)((t2 + 0x0)));
            *(unsigned int *)((t3 + 0x0)) = ((t63 << 2) + t1);
            t3 = a10;
            if ((unsigned int)t4 < (unsigned int)t3) continue;
            break;
        }
    }
    return 0x0;
}

int FUN_0c10dbe0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t33;
    register int t44;
    register int t45;
    register int t46;
    register int t66;
    register int t43;
    register int t61;
    register int t64;

    if (a4 != 0) {
        if (a4 == 1) {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t0 = 0x0;
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)(((int)stk + 0));
                if ((unsigned int)((*(int *)(((((t2 << 2) << 2) << 1) + 0xC817434))) - 2048) > (unsigned int)((*(int *)(((((t2 << 2) << 2) << 1) + 0xC81743C))) + 0x140)) {
                    if ((unsigned int)(*(int *)(((0xC8426F0 + t0) + 0x0))) < (unsigned int)((*(int *)(((0xC817424 + (*(int *)(((int)stk + 4)))) + 0x10))) - 2048)) {
                        *(unsigned int *)((t1 + 0xC817434)) = ((*(int *)((t1 + 0xC817434))) - 0x800);
                        *(unsigned int *)(((0xC817440 + t1) + 0x0)) = ((*(int *)((t1 + 0xC817434))) - 192);
                    }
                    (((struct o0_uint *)0xC8426DC)->v) = 0x0;
                } else {
                    if ((unsigned int)((((struct o0_int *)0xC8426DC)->v)) > (unsigned int)0xA) {
                        FUN_0c108fe8(0x3, a5, a6, a7);
                    }
                }
                t33 = *(int *)(((int)stk + 0));
                t1 = (t1 + 0x20);
                *(unsigned int *)(((int)stk + 0)) = (t33 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
                t0 = (t0 + 0x4);
                if ((int)(t33 + 0x1) >= (int)0x2) {
                    break;
                }
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t44 = a4;
        t45 = 0x0;
        t46 = 0x0;
        for (;;) {
            if ((unsigned int)((*(int *)((t45 + 0xC817440))) + 0x2000) < (unsigned int)((*(int *)((t45 + 0xC817430))) - 192)) {
                *(unsigned int *)((t46 + 0xC817440)) = ((*(int *)((t46 + 0xC817440))) + 0x2000);
                t43 = (*(int *)((t46 + 0xC817440)));
                t43 = (t43 + 0xC0);
                *(unsigned int *)((t46 + 0xC817434)) = t43;
                (((struct o4_uint *)0xC8426DC)->v) = 0x0;
                t61 = t43;
                t64 = t44;
            } else {
                if ((unsigned int)((((struct o4_int *)0xC8426DC)->v)) > (unsigned int)0x0) {
                    t44 = 0x3;
                    FUN_0c108fe8(t44, a5, a6, a7);
                } else {
                    t61 = t43;
                    t64 = t44;
                }
            }
            t66 = *(int *)(((int)stk + 0));
            t43 = t61;
            t44 = t64;
            t46 = (t46 + 0x20);
            *(unsigned int *)(((int)stk + 0)) = (t66 + 0x1);
            t45 = (t45 + 0x20);
            if ((int)(t66 + 0x1) >= (int)0x2) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_0c107872(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t7;
    register int t8;
    register int t21;
    register int t24;
    register int t25;
    register int t42;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 == 0) {
        t42 = (mwRnaErrCallFunc(0xC15B31C, a5, a6, a7));
    } else {
        FUN_0c1070a0(((int)stk + 0));
        if ((*(int *)(((int)stk + 4))) == 0) {
            t4 = FUN_0c107e7e(a4);
            if (t4 != 0) {
                if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                    t7 = 0x0;
                    for (;;) {
                        t8 = FUN_0c107602(a4);
                        if (t8 == 1) {
                            break;
                        }
                        t7 = (t7 + 0x1);
                        if ((int)t7 >= (int)0x186A0) {
                            (((struct o54_uint *)(a4))->v) = (*(int *)((a4 + 0x34)));
                            (((struct o58_uint *)(a4))->v) = 0x0;
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
                            return (FUN_0c1070b8(((int)stk + 0)));
                        }
                    }
                    FUN_0c1076ba(a4);
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                }
                (((struct o54_uint *)(a4))->v) = (*(int *)((a4 + 0x34)));
                (((struct o58_uint *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if ((*(int *)(((int)stk + 4))) == 1) {
                t21 = FUN_0c107e7e(a4);
                if (t21 != 1) {
                    if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                        t24 = 0x0;
                        for (;;) {
                            t25 = FUN_0c107602(a4);
                            if (t25 == 1) {
                                break;
                            }
                            t24 = (t24 + 0x1);
                            if ((int)t24 >= (int)0x186A0) {
                                *(unsigned int *)((a4 + 0x34)) = 0x0;
                                *(unsigned int *)((a4 + 0x38)) = 0x0;
                                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                                *(unsigned char *)((a4 + 0x5)) = 0x0;
                                *(unsigned char *)((a4 + 0x6)) = 0x0;
                                (((struct o50_uint *)(a4))->v) = 0x0;
                                *(unsigned char *)((a4 + 0x4)) = 0x0;
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                                (((struct o84_uint *)(a4))->v) = 0x0;
                                return (FUN_0c1070b8(((int)stk + 0)));
                            }
                        }
                        FUN_0c1077d4(a4);
                        *(unsigned char *)((a4 + 0x5)) = 0x0;
                    }
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned int *)((a4 + 0x38)) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o50_uint *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                    (((struct o84_uint *)(a4))->v) = 0x0;
                }
            }
        }
        t42 = (FUN_0c1070b8(((int)stk + 0)));
    }
    return t42;
}

int FUN_0c106048(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t12;
    register int t14;
    register int t17;
    register int t21;
    register int t26;
    register int t27;
    register int t30;
    register int t32;
    register int t35;
    register int t39;
    int t6;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)((a4 + 0x8));
    t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x1, 0x7FFFFFFF, (a4 + 0x14), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t5 = FUN_0c114338(t0);
    if ((t5 == 0) && (t6 = *(int *)((a4 + 0x18)), (int)t6 >= (int)0x2)) {
        t8 = *(short *)(((*(int *)((a4 + 0x14))) + 0x0));
        if ((unsigned short)((unsigned char)((int)t8 >> 8) | ((t8 << 8) & 0xFF00)) != 0x8001) {
            t9 = ADXSJD_GetTotalNumSmpl(a4);
            if ((int)(*(int *)((a4 + 0x34))) >= (int)t9) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
                t12 = *(int *)(((*(int *)((t1 + 0x0))) + 0x1C));
                return ((int (*)(int, int, int, int))(t12))(t1, 0x1, (a4 + 0x14), a7);
            }
            *(unsigned int *)(((int)stk + 4)) = (ADXSJD_GetBlkSmpl(a4));
            t14 = *(int *)((a4 + 0xC));
            *(unsigned int *)(((int)stk + 0)) = t14;
            t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t14 + 0x0))) + 0x24)))))(t14, 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((int)((unsigned int)t17 >> 1) < (int)(*(int *)(((int)stk + 4)))) {
                t21 = *(int *)(((*(int *)((t1 + 0x0))) + 0x1C));
                return ((int (*)(int, int, int, int))(t21))(t1, 0x1, (a4 + 0x14), a7);
            }
            ADXB_EntryData(t0, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
            return ADXB_Start(t0);
        }
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t26 = *(int *)(((*(int *)((t1 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t26))(t1, 0x1, (a4 + 0x14), a7);
    }
    t27 = ADXSJD_GetTotalNumSmpl(a4);
    if ((int)(*(int *)((a4 + 0x34))) >= (int)t27) {
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t30 = *(int *)(((*(int *)((t1 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t30))(t1, 0x1, (a4 + 0x14), a7);
    }
    *(unsigned int *)(((int)stk + 4)) = (ADXSJD_GetBlkSmpl(a4));
    t32 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 0)) = t32;
    t35 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t32 + 0x0))) + 0x24)))))(t32, 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if ((int)((unsigned int)t35 >> 1) < (int)(*(int *)(((int)stk + 4)))) {
        t39 = *(int *)(((*(int *)((t1 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t39))(t1, 0x1, (a4 + 0x14), a7);
    }
    ADXB_EntryData(t0, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
    return ADXB_Start(t0);
}

int FUN_0c0fd240(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t8;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)(((int)stk + 0));
    t1 = FUN_0c0fcea0(t0, t0);
    if (((*(int *)(((int)stk + 4))) & 1) != 0) {
        t8 = ((*(int *)(((t1 << 2) + 0xC15AC04))) + 0xA);
        t9 = (*(int *)(((t1 << 2) + 0xC15AB0C)));
    } else {
        t8 = (*(int *)(((t1 << 2) + 0xC15ABD8)));
        t9 = (*(int *)(((t1 << 2) + 0xC15AAF0)));
    }
    kmiCopyFromFrameBuffer(a4, a5, t9);
    return kmiCopyFromFrameBuffer((a4 + t9), (a5 + 0x800), t8);
}
