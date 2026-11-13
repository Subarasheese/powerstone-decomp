/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c040260-0c040550) */

struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
float math_rand_float(void);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(int, int);

int FUN_0c040260(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    if ((short)(t2 - 1) != 0) {
        return ((int (*)(int, int, int, int))(0xC0403FE))(a4, a5, a6, a7);
    }
    if ((*(signed char *)(((*(int *)((((((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x0))) != 0) {
        return ((int (*)(int, int, int, int))(0xC0403FA))(a4, 0x1, a6, a7);
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    t2 = *(int *)(((((short)((((struct oEE_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
    (((struct oEE_ushort *)(t0))->v) = (FUN_0c0e6e5c(a4));
    *(unsigned char *)((t2 + 0x0)) = t1;
    FUN_0c0e6fe8(t0, t1);
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)(t0 * 0x32);
    if ((int)(t0 * 0x32) < 0) {
        u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
    }
    (((struct o4_float *)(t2))->v) = (u0 + -500.0f);
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)(t0 * 0x32);
    if ((int)(t0 * 0x32) < 0) {
        u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
    }
    (((struct o8_float *)(t2))->v) = (u0 + -500.0f);
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)(t0 * 0x32);
    if ((int)(t0 * 0x32) < 0) {
        u0 = (((float)(t0 * 0x32)) + 4.2949673e+09f);
    }
    (((struct oC_float *)(t2))->v) = (u0 + -500.0f);
    (((struct o28_float *)(t2))->v) = (-(((((struct o4_float *)(t2))->v)) / 20.0f));
    *(volatile float *)((t2 + 0x8));
    return ((int (*)(float))(0xC0403E4))(20.0f);
}
