/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b4d0-0c03b86c) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
struct o308_uchar { char p[0x308]; unsigned char v; };
int FUN_0c06231c(int, int, int);

int fx_spawn_03b4d0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t29;
    register float u3;
    register float t7;
    register float u8;
    register float u11;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t29 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03B660;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        u3 = *(float *)(((int)stk + 0));
        (((struct o58_float *)(t0))->v) = u3;
        (((struct o54_float *)(t0))->v) = u3;
        (((struct o50_float *)(t0))->v) = u3;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        t7 = math_rand_float();
        u8 = *(float *)0xC03B648;
        u11 = (t7 * u8);
        if (!(2.14748365e+09f > (t7 * u8))) {
            u11 = (((t7 * u8)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t14 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t14 << 1) + t14) << 2) << 1) + 0xC6002D0), (((int)((unsigned int)(int)u11 % (unsigned int)0x10)) + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct oEC_ushort *)(t0))->v) = (*(int *)(((int)stk + 12)));
        t29 = 0xEC;
    }
    return t29;
}

void FUN_0c03b5da(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) < 0) {
        (((struct o308_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x10) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0xA));
    return;
    }
}
