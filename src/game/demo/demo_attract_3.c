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
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(void);

int FUN_0c028c88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

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
    *(volatile short *)((a4 + 0xEC));
    t1 = ((int (*)(int))(FUN_0c0e6e5c))(a4);
    math_rand_float();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o8_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    *(volatile short *)((a4 + 0xEC));
    t1 = ((int (*)(void))(FUN_0c0e6e5c))();
    math_rand_float();
    
    t2 = FUN_0c0e6f24();
    u0 = (float)t2;
    if ((int)t2 < 0) {
        u0 = ((float)t2 + 4.2949673e+09f);
    }
    (((struct o4_float *)(t0))->v) = ((float)(t1 - 1) * u0);
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = 1.0f;
    if (t0 == 0) {
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
