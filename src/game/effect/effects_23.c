/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c036598-0c0367e4) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_rand_float(void);
int _modlu(void);

int fx_spawn_036598(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03662C;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t8 = *(signed char *)((a4 + 0x3));
        t14 = (FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((int)stk + 0))) + 0x1)));
    }
    return t14;
}

int fx_tick_036598(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t1 = FUN_0c0555dc();
    if (t1 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t2 = (((struct o2E0_int *)(a4))->v);
                    u0 = (((struct o24_float *)(t2))->v);
                    (((struct o24_float *)(t2))->v) = (u0 - 0.099999994f);
                    (((struct o1C_float *)(t2))->v) = (u0 - 0.099999994f);
                    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
                    (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
                    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x182D);
                    t2 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                    t3 = 0xEC;
                    if ((short)(t2 - 1) == 0) {
                        t2 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    return t3;
                }
                if (t1 == 4) {
                    return obj_destroy(a4);
                }
                if (t1 == 5) {
                    return obj_destroy(a4);
                }
                return t1;
            }
            if (((((struct oF2_short *)(a4))->v)) == 3) {
                t1 = (((struct o2E0_int *)(a4))->v);
                u0 = math_rand_float();
                u1 = (u0 * 255.0f);
                if (!(2.14748365e+09f > (u0 * 255.0f))) {
                    u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t2 = (int)((unsigned int)(int)u1 % (unsigned int)0x3C);
                u0 = (float)t2;
                if ((int)t2 < 0) {
                    u0 = ((float)t2 + 4.2949673e+09f);
                }
                (((struct o24_float *)(t1))->v) = ((u0 / 100.0f) + 0.699999988f);
                (((struct o1C_float *)(t1))->v) = ((u0 / 100.0f) + 0.699999988f);
            }
            (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
            (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x182D);
            t1 = *(int *)((a4 + 0x1C));
            if (((int)(*(signed char *)((t1 + 0xB))) <= (int)0x2) && (t0 = *(signed char *)((t1 + 0x71BA)), t0 == 11)) {
                t1 = t0;
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = (((struct o24_float *)(t0))->v);
    (((struct o24_float *)(t0))->v) = (u0 + 0.099999994f);
    (((struct o1C_float *)(t0))->v) = (u0 + 0.099999994f);
    (((struct o20_float *)(a4))->v) = ((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o24_float *)(a4))->v) = ((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x182D);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
