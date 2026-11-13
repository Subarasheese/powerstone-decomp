/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b1ec-0c03b384) */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int math_rand_next(void);
int FUN_0c0e6e5c(void);
extern int FUN_0c0e6fe8();
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03b1ec(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t21;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t11;
    register float u20;
    register int t4;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 4));
        t3 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x0);
        t5 = ((int (*)(int))(FUN_0c0e6fe8))(t4);
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        *(unsigned int *)((t8 + 0x10)) = 0xC03B2D6;
        t9 = *(signed char *)(((int)stk + 0));
        t11 = (((struct o2E0_int *)(t8))->v);
        FUN_0c06233a(t11, ((signed char)((((t9 << 1) + t9) << 2) << 1) + 0xC6002D0), 0x17);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        *(unsigned short *)((t11 + 0x2)) = 0x239;
        math_rand_next();
        *(unsigned int *)((t11 + 0x18)) = ((int)(((((float)(FUN_0c0e6e5c()) * ((((struct o0_float *)0xC03B368)->v))) / ((((struct o4_float *)0xC03B368)->v)))) + ((((struct o8_float *)0xC03B368)->v))) & 0xFFFF);
        u20 = (((struct o10_float *)0xC03B368)->v);
        (((struct o1C_float *)(t11))->v) = u20;
        (((struct o20_float *)(t11))->v) = u20;
        (((struct o24_float *)(t11))->v) = u20;
        (((struct o44_float *)(t11))->v) = 1.0f;
        (((struct o48_float *)(t11))->v) = 1.0f;
        (((struct o4C_float *)(t11))->v) = 1.0f;
        t21 = 0x4C;
    }
    return t21;
}

int fx_tick_03b1ec(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x8) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.199999988f);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.199999988f);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.199999988f);
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
        (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
        return 0x4C;
    }
    return obj_destroy(a4, a5, a6, a7);
}
