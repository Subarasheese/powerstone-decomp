/* same module: helpers and update state machine (0c0c8460-0c0c8acc) */

struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c06231c(int, int, int);
float math_rand_float(void);
int _modls(void);
int _modlu(void);

float FUN_0c0c8460(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x1;
        } else {
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            (((struct oF2_ushort *)(a4))->v) = (((int)((unsigned int)(int)u1 % (unsigned int)0x4)) + 0x1);
            (((struct oF0_ushort *)(a4))->v) = ((int)((int)(((((struct oF0_short *)(a4))->v)) + 0x1) % (int)0x3));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            t1 = *(signed char *)((a4 + 0x3));
            FUN_0c06231c(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x1C);
            u0 = math_rand_float();
            u1 = (u0 * 255.0f);
            if (!(2.14748365e+09f > (u0 * 255.0f))) {
                u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
            }
            t1 = (int)((unsigned int)(int)u1 % (unsigned int)0x20);
            u0 = (float)(((t1 << 8) << 2) << 1);
            if ((int)(((t1 << 8) << 2) << 1) < 0) {
                u0 = ((float)(((t1 << 8) << 2) << 1) + 4.2949673e+09f);
            }
            *(unsigned int *)((t0 + 0x18)) = (int)((u0 * 65536.0f) / 360.0f);
            (((struct o34_uchar *)(t0))->v) = 0x0;
            (((struct o35_uchar *)(t0))->v) = 0x2;
            u0 = 360.0f;
        }
        u1 = u0;
    }
    return u1;
}
