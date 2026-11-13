/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int, int);
float math_rand_float(void);
int FUN_0c040260(int a4, int a5, float f4);

int FUN_0c040260(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    t3 = 0xEC;
    if ((short)(t2 - 1) != 0) {
    } else {
        if ((*(signed char *)(((*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0))) != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t2 = 0xEC;
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
            t4 = *(int *)(((((short)((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
            (((struct oEE_ushort *)(t0))->v) = (FUN_0c0e6e5c(a4));
            *(unsigned char *)((t4 + 0x0)) = t1;
            FUN_0c0e6fe8(t0, t1);
            math_rand_float();
            t0 = FUN_0c0e6f24();
            u0 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct o4_float *)(t4))->v) = (u0 + -500.0f);
            math_rand_float();
            t0 = FUN_0c0e6f24();
            u0 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct o8_float *)(t4))->v) = (u0 + -500.0f);
            math_rand_float();
            t0 = FUN_0c0e6f24();
            u0 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct oC_float *)(t4))->v) = (u0 + -500.0f);
            (((struct o28_float *)(t4))->v) = (-(((((struct o4_float *)(t4))->v)) / 20.0f));
            (((struct o2C_float *)(t4))->v) = (-(((((struct o8_float *)(t4))->v)) / 20.0f));
            (((struct o30_float *)(t4))->v) = (-(((((struct oC_float *)(t4))->v)) / 20.0f));
            *(unsigned int *)((t4 + 0x10)) = 0x14;
            t2 = 0x30;
        }
        t3 = t2;
    }
    return t3;
}
