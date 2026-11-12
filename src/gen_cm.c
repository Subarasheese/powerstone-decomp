/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c0c2bd8(int, int);
int FUN_0c0c2c06(int);
int FUN_0c0c2c6a(int a4, int a5, int a6, int a7);
int FUN_0c0a6280(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c0c2c6a(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register float u1;
    register int t2;
    register int t8;
    register int t10;
    register int t12;
    register float u32;
    register float u35;
    register int t39;
    register int t56;
    register float u64;
    register int t68;
    register int t85;
    int t42;
    int t71;

    t0 = *(signed char *)((a4 + 0x8));
    u1 = (float)((((int)stk + 0) * 0x3C) + 0x78);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
            if ((int)(short)(t2 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            t8 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t8))->v) = (((((struct o44_float *)(t8))->v)) - 0.0799999982f);
            t10 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t10))->v) = (((((struct o48_float *)(t10))->v)) - 0.0799999982f);
            t12 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t12))->v) = (((((struct o4C_float *)(t12))->v)) - 0.0799999982f);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.049999997f);
            if (9.99999975e-05f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = 9.99999975e-05f;
            }
            u32 = (((struct o58_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = (u32 - 0.049999997f);
            if (9.99999975e-05f > (u32 - 0.049999997f)) {
                (((struct o58_float *)(a4))->v) = 9.99999975e-05f;
            }
            return 0x58;
        }
        FUN_0c0c2c06(a4);
        u35 = (((struct o54_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u35 + 0.099999994f);
        if ((u35 + 0.099999994f) > 1.0f) {
            (((struct o54_float *)(a4))->v) = 1.0f;
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        t39 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t39 - 1);
        t56 = 0xEC;
        if ((short)(t39 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            if (((*(signed char *)((a4 + 0x4))) == 0) && (t42 = *(signed char *)(((0x308 + a4) + 0x2)), (int)t42 < (int)0x3)) {
                FUN_0c0c2bd8(a4, ((*(signed char *)(((0x308 + a4) + 0x2))) + 0x1));
            }
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            t56 = 0x4C;
        }
        return t56;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    (((struct o105_uchar *)(a4))->v) = 0x0;
    FUN_0c0c2c06(a4);
    u64 = (((struct o54_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = (u64 + 0.099999994f);
    if ((u64 + 0.099999994f) > 1.0f) {
        (((struct o54_float *)(a4))->v) = 1.0f;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    t68 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t68 - 1);
    t85 = 0xEC;
    if ((short)(t68 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        if (((*(signed char *)((a4 + 0x4))) == 0) && (t71 = *(signed char *)(((0x308 + a4) + 0x2)), (int)t71 < (int)0x3)) {
            FUN_0c0c2bd8(a4, ((*(signed char *)(((0x308 + a4) + 0x2))) + 0x1));
        }
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        t85 = 0x4C;
    }
    return t85;
}

int FUN_0c0a6280(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
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
            if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x2) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x444);
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) & 0xFFFF);
                if ((int)(*(int *)((((((struct o2E0_int *)(a4))->v)) + 0x18))) > (int)0x8000) {
                    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x18)) = 0x8000;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x1E) {
                    u0 = (((struct o50_float *)(a4))->v);
                    (((struct o50_float *)(a4))->v) = (u0 + 0.049999997f);
                    if (!(1.0f > (u0 + 0.049999997f))) {
                        (((struct o50_float *)(a4))->v) = 1.0f;
                    }
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.049999997f);
                    if (!(1.5f > ((((struct o54_float *)(a4))->v)))) {
                        (((struct o54_float *)(a4))->v) = 1.5f;
                    }
                    u0 = (((struct o58_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = (u0 + 0.049999997f);
                    if (!(1.0f > (u0 + 0.049999997f))) {
                        (((struct o58_float *)(a4))->v) = 1.0f;
                    }
                    t0 = 0x58;
                } else {
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.049999997f);
                    u0 = *(float *)0xC0A6524;
                    if (!(((((struct o54_float *)(a4))->v)) > u0)) {
                        (((struct o54_float *)(a4))->v) = u0;
                    }
                    t0 = 0x54;
                }
                t1 = t0;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        (((struct o24_float *)(a4))->v) = -10.0f;
        t0 = 0x0;
        for (;;) {
            FUN_0c0623a6((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A30, (t0 + 0x3));
            t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            *(unsigned int *)((t1 + 0x18)) = 0x0;
            *(unsigned int *)((t1 + 0x14)) = 0x0;
            *(unsigned int *)((t1 + 0x10)) = 0x0;
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x1;
            t1 = *(int *)((((t0 << 2) + (0x2E0 + a4)) + 0x0));
            t0 = (t0 + 0x1);
            *(unsigned short *)((t1 + 0x2)) = 0xF;
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        (((struct o50_float *)(a4))->v) = 0.5f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.5f;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    return 0xEC;
}
