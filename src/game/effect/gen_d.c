/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c06231c(int, int, int);
int _modls(void);
int _modlu(void);
int _quick_odd_mvn(void);
float math_rand_float(void);
float FUN_0c03f434(int);

float FUN_0c03f434(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(int *)((((((((struct oEC_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        } else {
            (((struct oEE_ushort *)(a4))->v) = ((((struct oF0_short *)(a4))->v));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t1 = 0x0;
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x4)) == 0) {
                t1 = 0x1;
            }
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t2 = *(int *)((a4 + 0x2C));
            t3 = t1;
            if ((int)(unsigned short)(*(short *)(((signed char)((t2 << 1) + (t2 << 2)) + 0xC149A40))) > (int)((int)((unsigned int)(int)u1 % (unsigned int)0x10))) {
                t3 = (t1 + 0x2);
            }
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), (t3 + 0x22));
            *(unsigned short *)((t0 + 0x2)) = 0x1F;
            if ((0x1 & (signed char)t3) != 0) {
                *(unsigned short *)((t0 + 0x2)) = ((*(short *)((t0 + 0x2))) | 0x200);
                u0 = math_rand_float();
                u1 = (u0 * 255.0f);
                if (!(2.14748365e+09f > (u0 * 255.0f))) {
                    u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t1 = (int)((unsigned int)(int)u1 % (unsigned int)0x4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC149A60)); }
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x1C)) = *(struct mv3 *)(0xC149A24); }
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t1 = (int)((unsigned int)(int)u1 % (unsigned int)0x10);
            u0 = (float)t1;
            if ((int)t1 < 0) {
                u0 = ((float)t1 + 4.2949673e+09f);
            }
            *(unsigned int *)((t0 + 0x18)) = (int)((u0 * 1474560.0f) / 360.0f);
            (((struct oEC_ushort *)(a4))->v) = ((int)((int)(((((struct oEC_short *)(a4))->v)) + 0x1) % (int)0x9));
            *(unsigned int *)((t0 + 0x34)) = (signed char)t3;
            (((struct o2C_float *)(t0))->v) = 0.0f;
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)((t0 + 0x3C)) = ((((int)((unsigned int)(int)u1 % (unsigned int)0x4)) + 0x1) * 0xB6);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            if (((int)((unsigned int)(int)u1 % (unsigned int)0x2)) != 0) {
                *(unsigned int *)((t0 + 0x3C)) = (-(*(int *)((t0 + 0x3C))));
            }
            u1 = u0;
        }
        u0 = u1;
    }
    return u0;
}
