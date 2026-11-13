/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c06231c(int, int, int);
int FUN_0c0e6e5c(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
float math_rand_float(void);
int FUN_0c03f434(int a4);

int FUN_0c03f434(int a4)
{
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEE;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(int *)((((((((struct oEC_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
            t1 = 0xEE;
        } else {
            (((struct oEE_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            math_rand_float();
            t1 = FUN_0c0e6f24();
            t4 = 0x0;
            if (t1 == 0) {
                t4 = 0x1;
            }
            math_rand_float();
            t1 = FUN_0c0e6f24();
            t5 = *(int *)((a4 + 0x2C));
            t6 = t4;
            if ((int)(unsigned short)(*(short *)(((signed char)((t5 << 1) + (t5 << 2)) + 0xC149A40))) > (int)t1) {
                t6 = (t4 + 0x2);
            }
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), (t6 + 0x22));
            *(unsigned short *)((t0 + 0x2)) = 0x1F;
            if ((0x1 & (signed char)t6) != 0) {
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x200);
                math_rand_float();
                FUN_0c0e6f24();
                FUN_0c0e6fe8();
            }
            FUN_0c0e6fe8();
            math_rand_float();
            t1 = FUN_0c0e6f24();
            u0 = (float)t1;
            if ((int)t1 < 0) {
                u0 = ((float)t1 + 4.2949673e+09f);
            }
            *(unsigned int *)((t0 + 0x18)) = (int)((u0 * 1474560.0f) / 360.0f);
            *(volatile short *)((a4 + 0xEC));
            (((struct oEC_ushort *)(a4))->v) = (FUN_0c0e6e5c());
            *(unsigned int *)((t0 + 0x34)) = (signed char)t6;
            (((struct o2C_float *)(t0))->v) = 0.0f;
            math_rand_float();
            *(unsigned int *)((t0 + 0x3C)) = (((FUN_0c0e6f24()) + 0x1) * 0xB6);
            math_rand_float();
            t1 = FUN_0c0e6f24();
            if (t1 != 0) {
                *(unsigned int *)((t0 + 0x3C)) = (-(*(int *)((t0 + 0x3C))));
            }
        }
    }
    return t1;
}
