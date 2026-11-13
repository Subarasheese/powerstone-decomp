/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c029bc0-0c029ec4) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_destroy(int);
int math_vec3_add(int, int, int);
int math_vec3i_add(int, int, int);
float math_rand_float(void);
int _modlu(void);

int FUN_0c029bc0(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t0 = 0x5A;
        if ((*(int *)0xC386830) != 0) {
            t0 = 0x4B;
        }
        (((struct oEC_ushort *)(a4))->v) = t0;
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 < (int)(*(signed char *)((a4 + 0x2DC)))) {
                t1 = t0;
                t1 = (t1 << 2);
                t1 = (t1 + (0x2E0 + a4));
                t1 = (*(int *)((t1 + 0x0)));
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
                u1 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = 4.2949673e+09f;
                    u1 = (u1 + u0);
                }
                u0 = 3.0f;
                u1 = (u1 * u0);
                u1 = (-u1);
                (((struct o4_float *)(t1))->v) = u1;
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
                u1 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = 4.2949673e+09f;
                    u1 = (u1 + u0);
                }
                u2 = 1.5f;
                u3 = 240.0f;
                u3 = u3 + u2 * u1;
                (((struct o8_float *)(t1))->v) = u3;
                (((struct oC_float *)(t1))->v) = 16.0f;
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
                u1 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = 4.2949673e+09f;
                    u1 = (u1 + u0);
                }
                u1 = (u1 * 1.0f);
                u0 = 32.0f;
                u1 = (u1 / u0);
                (((struct o28_float *)(t1))->v) = u1;
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
                u1 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = 4.2949673e+09f;
                    u1 = (u1 + u0);
                }
                u1 = (u1 * 1.0f);
                u0 = -2.0f;
                u1 = (-u1);
                u1 = (u1 / 16.0f);
                u1 = (u1 + u0);
                (((struct o2C_float *)(t1))->v) = u1;
                (((struct o30_float *)(t1))->v) = 0.0f;
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                *(unsigned int *)((t1 + 0x34)) = (((((int)((unsigned int)(int)u1 % (unsigned int)0x80)) - 64) << 2) << 1);
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                *(unsigned int *)((t1 + 0x38)) = (((((int)((unsigned int)(int)u1 % (unsigned int)0x80)) - 64) << 2) << 1);
                u2 = (math_rand_float());
                u1 = u2;
                u1 = (u1 * 255.0f);
                u0 = 2.14748365e+09f;
                if (!(u0 > u1)) {
                    u0 = (u0 + u0);
                    u1 = (u1 - u0);
                }
                t0 = (t0 + 0x1);
                *(unsigned int *)((t1 + 0x3C)) = (((((int)((unsigned int)(int)u1 % (unsigned int)0x80)) - 64) << 2) << 1);
                continue;
            }
            break;
        }
        t0 = 0x80;
        u2 = u0;
        u0 = u1;
    }
    t1 = 0x0;
    t2 = t0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 + (0x2E0 + a4));
        t2 = (*(int *)((t2 + 0x0)));
        math_vec3i_add((t2 + 0x10), (t2 + 0x10), (t2 + 0x34));
        math_vec3_add((t2 + 0x4), (t2 + 0x4), (t2 + 0x28));
        t1 = (t1 + 0x1);
    }
    if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x14) {
        t0 = a4;
        t1 = 0x0;
        u1 = u2;
        u2 = u0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0x2E0 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            t1 = (t1 + 0x1);
            u2 = ((((struct o1C_float *)(t0))->v));
            u2 = (u2 - 0.049999997f);
            (((struct o1C_float *)(t0))->v) = u2;
            u1 = u2;
            (((struct o24_float *)(t0))->v) = u1;
            (((struct o20_float *)(t0))->v) = u1;
        }
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return obj_destroy(a4);
    }
    return 0xEC;
}
