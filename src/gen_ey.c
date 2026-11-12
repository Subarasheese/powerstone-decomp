/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c059330(int, int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
float FUN_0c0dfce0(int);
int FUN_0c0e6f24(void);
int FUN_0c0c5140(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c5140(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = ((int (*)(int, int, int, int))(0xC0C5108))(a4, a5, a6, a7);
            if ((*(signed char *)((a4 + 0x4))) != 0) {
                if (((((struct o3C_float *)(a4))->v)) > 10.0f) {
                    (((struct o3C_float *)(a4))->v) = 10.0f;
                    (((struct o48_float *)(a4))->v) = 0.0f;
                }
            }
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0xF;
                (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * 2.0f);
                (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 2.0f);
                (((struct o3C_float *)(a4))->v) = 2.0f;
                t1 = 0x3C;
            } else {
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                t1 = 0x28;
            }
            return t1;
        }
        if (t0 == 2) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            u0 = *(float *)0xC0C54FC;
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - u0);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - u0);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            return ((int (*)(int, int, int, int, float))(0xC0C5108))(a4, a5, a6, a7, u0);
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 50.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        FUN_0c0df940();
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = FUN_0c0dfa50((0xFFFF & (((int)((u0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30)))) - 8192)));
        (((struct o38_float *)(a4))->v) = (u1 * 20.0f);
        FUN_0c0df940();
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = FUN_0c0df4d0((0xFFFF & (((int)((u0 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x30)))) - 8192)));
        (((struct o40_float *)(a4))->v) = (u1 * 20.0f);
        FUN_0c0df940();
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o48_float *)(a4))->v) = (u0 + 0.5f);
        (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfce0((*(int *)((a4 + 0x2C))))) * 20.0f));
        if (-10.0f > ((((struct o3C_float *)(a4))->v))) {
            (((struct o3C_float *)(a4))->v) = -10.0f;
        }
        u0 = -10.0f;
    } else {
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        u0 = f4;
    }
    t0 = ((int (*)(int, int, int, int, float))(0xC0C5108))(a4, a5, a6, a7, u0);
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        if (((((struct o3C_float *)(a4))->v)) > 10.0f) {
            (((struct o3C_float *)(a4))->v) = 10.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xF;
        (((struct o38_float *)(a4))->v) = ((FUN_0c0dfa50((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o40_float *)(a4))->v) = ((FUN_0c0df4d0((*(int *)((a4 + 0x30))))) * 2.0f);
        (((struct o3C_float *)(a4))->v) = 2.0f;
        t0 = 0x3C;
    } else {
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t0 = 0x28;
    }
    return t0;
}
