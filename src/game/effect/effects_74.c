/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03dfd0-0c03e354) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
int math_vec3_add(int, int, int);
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int obj_destroy(int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modls(int);
int _modlu(void);
int thunk_FUN_0c062242(int, int);

int FUN_0c03e096(int a4);

int fx_spawn_03dfd0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t10;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x6, 0x1, 0xA, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03E148;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC14983C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149848); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        (((struct oEE_ushort *)(t0))->v) = 0x1;
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        t3 = (0x2E0 + t0);
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            t6 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t5, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x18);
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + 0x2)) = 0x3F;
            if ((int)t4 >= (int)0xA) {
                break;
            }
        }
        t10 = 0x3F;
    }
    return t10;
}

int FUN_0c03e096(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = a4;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 2);
        t3 = (t3 + (0x2E0 + a4));
        t3 = (*(int *)((t3 + 0x0)));
        t4 = (*(signed char *)((t3 + 0x0)));
        t5 = t0;
        if (t4 != 0) {
            t0 = t3;
            t0 = (t0 + 0x34);
            t6 = *(short *)((t0 + 0x0));
            *(unsigned short *)((t0 + 0x0)) = (t6 - 1);
            if ((short)(t6 - 1) == 0) {
                *(unsigned char *)((t3 + 0x0)) = 0x0;
                t6 = t4;
                t5 = t0;
            } else {
                t0 = t3;
                t1 = (t1 + 0x1);
                t0 = (t0 + 0x4);
                math_vec3_add(t0, (t3 + 0x4), (t3 + 0x28));
                u0 = ((((struct o1C_float *)(t3))->v));
                u0 = (u0 - 0.0833333284f);
                (((struct o1C_float *)(t3))->v) = u0;
                u0 = ((((struct o20_float *)(t3))->v));
                u0 = (u0 - 0.0833333284f);
                (((struct o20_float *)(t3))->v) = u0;
            }
            t3 = t6;
        } else {
            t3 = t4;
        }
        t2 = (t2 + 0x1);
        t4 = t3;
        t0 = t5;
    }
    return t1;
}

int fx_tick_03dfd0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.5f);
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (a4 + 0x20));
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c03e096(a4);
            t2 = (signed char)t1;
            if ((signed char)t1 == 0) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            return t2;
        }
        if (t0 == 2) {
            return obj_destroy(a4);
        }
        return t0;
    }
    t0 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = *(int *)((((((((struct oF0_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0));
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
        } else {
            (((struct oEE_ushort *)(a4))->v) = 0x1;
            (((struct oF0_ushort *)(a4))->v) = ((int)((int)(((((struct oF0_short *)(a4))->v)) + 0x1) % (int)0xA));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x1C)) = *(struct mv3 *)(0xC14983C); }
            (((struct oC_float *)(t0))->v) = 100.0f;
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
            u1 = math_cos_angle16((int)((u0 * 65536.0f) / 360.0f));
            (((struct o4_float *)(t0))->v) = (u1 * 100.0f);
            u1 = math_sin_angle16((int)((u0 * 65536.0f) / 360.0f));
            (((struct o8_float *)(t0))->v) = (u1 * 100.0f);
            (((struct o34_ushort *)(t0))->v) = 0xA;
            (((struct o28_float *)(t0))->v) = (-(((((struct o4_float *)(t0))->v)) / 10.0f));
            (((struct o2C_float *)(t0))->v) = (-(((((struct o8_float *)(t0))->v)) / 10.0f));
            (((struct o30_float *)(t0))->v) = (-(((((struct oC_float *)(t0))->v)) / 10.0f));
        }
    }
    FUN_0c03e096(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
