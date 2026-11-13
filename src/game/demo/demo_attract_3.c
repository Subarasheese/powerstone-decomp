/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c028c88-0c028dec) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
float math_rand_float(void);
extern int _modls();
int _modlu(void);

int FUN_0c028c88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x3);
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x3);
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o8_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    t1 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x3);
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x2);
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o4_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    u0 = math_rand_float();
    u1 = (u0 * 255.0f);
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u0 = 1.0f;
    if (((int)((unsigned int)(int)u1 % (unsigned int)0x5)) == 0) {
        u0 = 0.099999994f;
    }
    (((struct o68_float *)(a4))->v) = u0;
    (((struct o64_float *)(a4))->v) = u0;
    (((struct o60_float *)(a4))->v) = u0;
    if ((int)((((struct oEC_short *)(a4))->v)) <= 0) {
        return obj_destroy(a4);
    }
    return 0xEC;
}
