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
int _modls(int);
int _modlu(void);
int _quick_odd_mvn(int, int);
float math_rand_float(void);
float FUN_0c040260(int, int, float);

float FUN_0c040260(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        if ((*(signed char *)(((*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0))) != 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
            t0 = (((struct oEE_short *)(a4))->v);
            t1 = *(int *)(((((short)t0 << 2) + (0x2E0 + a4)) + 0x0));
            (((struct oEE_ushort *)(a4))->v) = ((int)((int)((short)t0 + 0x1) % (int)0xA));
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x44)) = *(struct mv3 *)(0xC149AB8); }
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x15);
            u0 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct o4_float *)(t1))->v) = (u0 + -500.0f);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x15);
            u0 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct o8_float *)(t1))->v) = (u0 + -500.0f);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x15);
            u1 = (float)(t0 * 0x32);
            if ((int)(t0 * 0x32) < 0) {
                u1 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
            }
            (((struct oC_float *)(t1))->v) = (u1 + -500.0f);
            (((struct o28_float *)(t1))->v) = (-(((((struct o4_float *)(t1))->v)) / 20.0f));
            (((struct o2C_float *)(t1))->v) = (-(((((struct o8_float *)(t1))->v)) / 20.0f));
            (((struct o30_float *)(t1))->v) = (-(((((struct oC_float *)(t1))->v)) / 20.0f));
            *(unsigned int *)((t1 + 0x10)) = 0x14;
            u1 = u0;
        }
        u0 = u1;
    }
    return u0;
}
