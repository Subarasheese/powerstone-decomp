/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02f328(int);
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c7be(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0356de(int a4, int a5, int a6, int a7);
int FUN_0c098d1e(int a4, int a5, int a6, int a7);
int FUN_0c039b7a(int a4, int a5, int a6, int a7);

int FUN_0c0356de(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 21) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct o2E4_int *)(a4))->v);
    FUN_0c062050((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
    t0 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x2000);
    t0 = (((struct o2E4_int *)(a4))->v);
    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - 1.0f);
    if (((((struct oF0_short *)(a4))->v)) != ((((struct o7198_short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))->v))) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0)) + 0x1));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c098d1e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return FUN_0c0a2e26(a4, 0xF, 0x1, a7);
            }
            if (((((struct oF2_short *)(a4))->v)) != 0) {
                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
            }
            if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                FUN_0c09a910(a4);
                FUN_0c09c7be(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x3;
            return 0x3;
        }
        if (0.0f > ((((struct o3C_float *)(a4))->v))) {
            t0 = FUN_0c09e7b8(a4);
            if ((signed char)t0 == 0) {
                FUN_0c09a910(a4);
                FUN_0c09d990(a4);
                FUN_0c09d9bc(a4);
                FUN_0c09c7be(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x2;
            FUN_0c09a808(a4, 0x2, 0x91);
            (((struct oF2_ushort *)(a4))->v) = 0xF0;
            return 0xF2;
        }
        FUN_0c09a910(a4);
        FUN_0c09d990(a4);
        FUN_0c09d9bc(a4);
        FUN_0c09c7be(a4, (0xF0 + a4));
        return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
    }
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    FUN_0c09a808(a4, 0x2, 0x98);
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = (*(float *)0xC098E44);
    (((struct oF0_ushort *)(a4))->v) = 0x28;
    return 0xF0;
}

int FUN_0c039b7a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((t0 << 2) + (0x2E0 + a4)) + 0x0));
            if (t0 == 0) {
                *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0x5B0);
            } else {
                t2 = (*(int *)((t1 + 0x18)));
                t2 = (t2 - 0x5B0);
                *(unsigned int *)((t1 + 0x18)) = t2;
            }
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.199999988f);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.199999988f);
            (((struct o44_float *)(t1))->v) = (((((struct o44_float *)(t1))->v)) - 0.0899999961f);
            (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) - 0.0899999961f);
            (((struct o4C_float *)(t1))->v) = (((((struct o4C_float *)(t1))->v)) - 0.0899999961f);
            if (!(((((struct o44_float *)(t1))->v)) > 0.0f)) {
                (((struct o44_float *)(t1))->v) = 0.0f;
            }
            if (!(((((struct o48_float *)(t1))->v)) > 0.0f)) {
                (((struct o48_float *)(t1))->v) = 0.0f;
            }
            t0 = (t0 + 0x1);
            if (!(((((struct o4C_float *)(t1))->v)) > 0.0f)) {
                (((struct o4C_float *)(t1))->v) = 0.0f;
            }
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t0 = 0xEC;
        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0xA) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
