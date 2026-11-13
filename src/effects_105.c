/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04512c-0c0454b4) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int FUN_0c06231c(int, int, int);

int fx_spawn_04512c(int a4, int a5, int a6)
{
    int stk[6];
    register float t2;
    register int t5;
    register int t7;
    register int t13;
    register int t27;
    register float u30;
    register int t34;
    register int t35;
    register int t36;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    math_vec3_sub((((int)stk + 0) + 0xC), 0xC7F2AB4, (*(int *)(((int)stk + 4))));
    t2 = math_vec3_length((((int)stk + 0) + 0xC));
    if (!(t2 > 300.0f)) {
        return 0xC045188;
    }
    t5 = 0x3;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        t5 = 0x1;
    }
    t7 = obj_create(0x5, 0x1, (signed char)t5);
    if (t7 == 0) {
        return t7;
    }
    *(unsigned char *)((t7 + 0x0)) = 0x1;
    *(unsigned char *)((t7 + 0x1)) = 0x1;
    *(unsigned char *)((t7 + 0x3)) = 0x2;
    *(unsigned short *)((t7 + 0x6)) = 0x1F;
    *(unsigned char *)((t7 + 0x5)) = 0x1;
    *(unsigned int *)((t7 + 0x10)) = 0xC045354;
    (((struct o118_uint *)(t7))->v) = 0x0;
    *(volatile int *)(((int)stk + 8));
    FUN_0c0e6fe8();
    *(volatile int *)(((int)stk + 4));
    FUN_0c0e6fe8();
    FUN_0c0e6fe8();
    t13 = (((struct o2E0_int *)(t7))->v);
    FUN_0c06233a(t13, 0xC4CFA68, 0x69);
    *(unsigned char *)((t13 + 0x0)) = 0x1;
    *(unsigned short *)((t13 + 0x2)) = 0x218;
    math_rand_float();
    
    *(unsigned int *)((t13 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
    math_rand_float();
    
    t27 = FUN_0c0e6f24();
    u30 = (float)(t27 + 0x5);
    if ((int)(t27 + 0x5) < 0) {
        u30 = ((float)(t27 + 0x5) + 4.2949673e+09f);
    }
    (((struct o24_float *)(t13))->v) = (u30 / 10.0f);
    FUN_0c0e6fe8();
    t34 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)((t7 + 0xB)) = t34;
    if ((signed char)t34 != 0) {
        (((struct o58_float *)(t7))->v) = 1.19999993f;
        (((struct o54_float *)(t7))->v) = 1.19999993f;
        (((struct o50_float *)(t7))->v) = 1.19999993f;
        *(unsigned int *)(((int)stk + 0)) = ((0x2E0 + t7) + 0x4);
        t35 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t35 + 0x4);
        t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
        FUN_0c06233a(t36, 0xC4CFA68, 0x7A);
        *(unsigned char *)((t36 + 0x0)) = 0x1;
        *(unsigned short *)((t36 + 0x2)) = 0x21C;
        *(unsigned int *)((t36 + 0x14)) = 0x8000;
        math_rand_float();
        
        *(unsigned int *)((t36 + 0x18)) = ((((FUN_0c0e6f24()) << 8) << 2) << 1);
        return ((int (*)(void))(0xC045320))();
    }
    return (signed char)t34;
}

int fx_tick_04512c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0xB))) != 0) {
        t0 = *(signed char *)0xC7F307C;
        t1 = ((0x2E0 + a4) + 0x4);
        t2 = 0x1;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.399999976f);
            (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.399999976f);
            (((struct o24_float *)(t3))->v) = (((((struct o24_float *)(t3))->v)) + 0.399999976f);
            FUN_0c06231c(t3, 0xC4CFA68, ((t0 & 0x1) + 0x7A));
            if ((*(signed char *)((a4 + 0x8))) == 2) {
                (((struct o44_float *)(t3))->v) = (((((struct o44_float *)(t3))->v)) - 0.099999994f);
                (((struct o48_float *)(t3))->v) = (((((struct o48_float *)(t3))->v)) - 0.099999994f);
                (((struct o4C_float *)(t3))->v) = (((((struct o4C_float *)(t3))->v)) - 0.099999994f);
            }
            t2 = (t2 + 0x1);
            if ((int)(signed char)t2 >= (int)0x3) {
                break;
            }
        }
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return obj_destroy(a4);
            }
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            t1 = 0x44;
            if (!(((((struct o44_float *)(t0))->v)) > 0.0f)) {
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x8;
    }
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
