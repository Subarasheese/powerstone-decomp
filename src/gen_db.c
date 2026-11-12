/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o107_uchar { char p[0x107]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c040550(int, int, int);
int FUN_0c040a84(int, int, int, int, int, int, int, int, int, int);
int FUN_0c04512c(int, int, int);
int FUN_0c059330(int);
int FUN_0c06206e(int, int, int);
float FUN_0c0620a4(int);
int FUN_0c0a3796(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6fe8(int);
int FUN_0c0c9eb8(int a4, int a5, int a6, int a7);
int FUN_0c05e9d2(int a4, int a5, int a6, int a7);

int FUN_0c0c9eb8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t17;
    register int t20;
    register int t21;
    register int t27;
    register int t31;
    register int t54;
    register int t63;
    register int t9;
    register int t58;
    register int t59;
    register int t61;
    register int t19;
    int t23;
    int t28;
    float u35;
    int t64;

    t0 = *(signed char *)((a4 + 0xE));
    t4 = *(int *)((a4 + 0x18));
    if ((int)t0 > 0) {
        t2 = a4;
        t3 = 0x0;
        for (;;) {
            if ((*(signed char *)((t4 + 0x108))) != 0) {
                t2 = t4;
                t2 = (t2 + 0x20);
                FUN_0c04512c(t2, (t4 + 0x2C), 0x1);
            } else {
                t9 = t2;
            }
            t3 = (t3 + 0x1);
            t2 = t9;
            t4 = (*(int *)((t4 + 0x18)));
            if ((int)t3 >= (int)t0) {
                break;
            }
        }
    }
    *(unsigned char *)((a4 + 0xF)) = 0x0;
    t17 = *(signed char *)((a4 + 0xE));
    t21 = *(int *)((a4 + 0x18));
    if ((int)t17 <= 0) {
        t58 = 0x0;
        t59 = t21;
        t61 = 0x1;
    } else {
        t20 = 0x0;
        for (;;) {
            if (((*(signed char *)((t21 + 0x2D8))) == 0) && (t23 = *(signed char *)((t21 + 0x108)), t19 = t23, t19 == 0)) {
                t20 = (t20 + 0x1);
                t21 = (*(int *)((t21 + 0x18)));
                if ((int)t20 >= (int)t17) {
                    t27 = *(signed char *)((a4 + 0xF));
                    if ((t27 != 0) && (t28 = *(int *)((t21 + 0x18)), t21 = t28, (int)t20 < (int)(t17 - 1))) {
                        if ((*(int *)((t21 + 0x10))) == 0xC0CA198) {
                            return (FUN_0c059330(t21));
                        }
                        return ((int (*)(int, int, int, int))(0xC0CA034))(0x1, a5, a6, a7);
                    }
                    return t27;
                }
                continue;
            }
            break;
        }
        *(unsigned char *)((a4 + 0xF)) = 0x1;
        t31 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        FUN_0c06206e(((int)stk + 4), ((int)stk + 4), (a4 + 0x20));
        *(int *)((int)stk + 0) = (0xF0 + a4);
        (((struct oF0_float *)(a4))->v) = (FUN_0c0620a4((((int)stk + 0) + 0x4)));
        *(unsigned char *)((a4 + 0xD)) = 0x5;
        *(unsigned char *)((a4 + 0xC)) = 0x4;
        if (((*(signed char *)((t21 + 0x2D8))) != 0) && (u35 = (((struct o274_float *)(t21))->v), u35 != 0.0f)) {
            FUN_0c040550((*(signed char *)((a4 + 0x3))), (*(signed char *)(((0x308 + a4) + 0xE))), (t21 + 0x20));
            if (((((struct oF0_short *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
                (((struct o11_uchar *)((0x308 + a4)))->v) = ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1);
                FUN_0c040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), (*(signed char *)(((0x308 + a4) + 0x11))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
            } else {
                FUN_0c040a84((*(signed char *)((a4 + 0x3))), (*(int *)((a4 + 0x30))), (t21 + 0x20), ((*(signed char *)(((0x308 + a4) + 0x11))) ^ 0x1), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                (((struct o11_uchar *)((0x308 + a4)))->v) = 0x1;
            }
            *(unsigned char *)(((0x308 + a4) + 0xE)) = ((*(signed char *)(((0x308 + a4) + 0xE))) ^ 0x1);
            t54 = ((int (*)(void))(FUN_0c0e6fe8))();
            *(unsigned char *)(((0x308 + a4) + 0xD)) = 0x8;
        } else {
            FUN_0c04512c((t21 + 0x20), (t21 + 0x2C), 0x1);
        }
        t58 = t20;
        t59 = t21;
    }
    t63 = *(signed char *)((a4 + 0xF));
    if ((t63 != 0) && (t64 = *(int *)((t59 + 0x18)), (int)t58 < (int)(t17 - 1))) {
        if ((*(int *)((t64 + 0x10))) == 0xC0CA198) {
            return (FUN_0c059330(t64));
        }
        return ((int (*)(int, int, int, int))(0xC0CA034))(t61, a5, a6, a7);
    }
    return t63;
}

int FUN_0c05e9d2(int a4, int a5, int a6, int a7)
{
    register int t0;

    FUN_0c0a3796((*(signed char *)((a4 + 0x3))), 0x32);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC05EB42))(a4, a5, a6, a7);
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0xB6);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x16C);
        *(volatile int *)(((0x2E0 + a4) + 0x0));
        *(volatile int *)(((0x2E0 + a4) + 0x4));
        return (FUN_0c0e6fe8((0x2E0 + a4)));
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c0e6fe8(a4);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 180.0f);
    (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 180.0f);
    (((struct o48_float *)(a4))->v) = -2.0f;
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 180.0f);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}
