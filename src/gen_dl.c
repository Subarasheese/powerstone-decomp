/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02f328(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c7be(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c098fbe(int a4, int a5, int a6, int a7);

int FUN_0c098fbe(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        return FUN_0c0a2e26(a4, 0xF, 0x1, a7);
                    }
                    return t1;
                }
                if (((((struct oF2_short *)(a4))->v)) != 0) {
                    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                }
                if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                    FUN_0c09c7be(a4, (0xF0 + a4));
                    return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
                }
                *(unsigned char *)((a4 + 0xC)) = 0x4;
                (((struct o54_float *)(a4))->v) = 1.0f;
                return 0x54;
            }
            t0 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                FUN_0c09a910(a4);
                FUN_0c09c7be(a4, (0xF0 + a4));
                return FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            }
            *(unsigned char *)((a4 + 0xC)) = 0x3;
            (((struct o54_float *)(a4))->v) = 0.099999994f;
            (((struct oF2_ushort *)(a4))->v) = 0x78;
            return 0xF2;
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
            (((struct oF2_ushort *)(a4))->v) = 0x3C;
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
    (((struct o38_float *)(a4))->v) = 10.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -2.17599988f;
    (((struct oF0_ushort *)(a4))->v) = 0x28;
    return 0xF0;
}
