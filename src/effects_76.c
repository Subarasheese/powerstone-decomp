/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03e918-0c03ed0c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6e5c(int);
extern int FUN_0c0e6fe8();
typedef struct { int x, y, z; } vec3_int;
extern float math_sin_angle16(int a);
extern float math_cos_angle16(int a);

int fx_spawn_03e918(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t19;
    register int t2;
    register int t4;
    register int t6;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t3;
    register int t5;
    register int t7;
    register int t8;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x4);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03EC80;
        t2 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, 0x1);
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(t3);
        t6 = ((int (*)(int))(FUN_0c0e6fe8))(t5);
        (((struct o118_uint *)(t7))->v) = 0x0;
        *(unsigned int *)((t7 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t7))->v) = t8;
        *(volatile signed char *)(((int)stk + 0));
        (((struct oEE_ushort *)(t11))->v) = (FUN_0c0e6e5c(t7));
        (((struct oF0_ushort *)(t11))->v) = 0x0;
        t12 = (0x2E0 + t11);
        t13 = 0x0;
        for (;;) {
            t14 = *(int *)((t12 + 0x0));
            t12 = (t12 + 0x4);
            *(unsigned char *)((t14 + 0x0)) = 0x0;
            t15 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t14, ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x1B);
            t13 = (t13 + 0x1);
            *(unsigned short *)((t14 + 0x2)) = 0x1F;
            if ((int)t13 >= (int)0x4) {
                break;
            }
        }
        t19 = 0x1F;
    }
    return t19;
}

void fx_spawn_next_spark(char *obj)
{
    char *particle, *owner, *row;
    float tmp_a, tmp_b, tmp_c, four_f, sin_val, cos_val;
    int row_index;

    *(short *)(obj + 236) = *(short *)(obj + 236) - 1;
    if (*(short *)(obj + 236) != 0)
        return;
    particle = *(char **)(obj + 736 + *(short *)(obj + 240) * 4);
    if (*particle != 0) {
        *(short *)(obj + 236) = 1;
        return;
    }
    *(short *)(obj + 236) = 30;
    *(short *)(obj + 240) = (*(short *)(obj + 240) + 1) % 4;
    owner = *(char **)(obj + 28);
    *particle = 1;
    *(vec3_int *)(particle + 28) = *(vec3_int *)0xC149914;
    *(float *)(particle + 36) = 0.0999999940f;
    *(vec3_int *)(particle + 4) = *(vec3_int *)(owner + 32);
    *(vec3_int *)(particle + 16) = *(vec3_int *)(owner + 44);
    *(int *)(particle + 16) = *(int *)(particle + 16) + *(int *)(0xC1498FC + *(short *)(obj + 238) * 4);
    row_index = obj[238];
    row = (char *)(0xC1498D8 + (signed char)(row_index * 12));
    sin_val = math_sin_angle16(*(int *)(particle + 20));
    tmp_a = *(float *)(row + 8);
    cos_val = math_cos_angle16(*(int *)(particle + 20));
    tmp_b = cos_val * *(float *)row;
    tmp_b = tmp_b + tmp_a * sin_val;
    *(float *)(particle + 4) = *(float *)(particle + 4) + tmp_b;
    cos_val = math_cos_angle16(*(int *)(particle + 20));
    tmp_a = cos_val * *(float *)(row + 8);
    sin_val = math_sin_angle16(*(int *)(particle + 20));
    tmp_b = sin_val * *(float *)row;
    tmp_a = tmp_a - tmp_b;
    *(float *)(particle + 12) = *(float *)(particle + 12) + tmp_a;
    cos_val = math_cos_angle16(*(int *)(particle + 16));
    *(float *)(particle + 8) = *(float *)(particle + 8) + *(float *)(row + 4) * cos_val;
    four_f = 4.0f;
    tmp_a = math_sin_angle16(*(int *)(owner + 48));
    cos_val = math_cos_angle16(*(int *)(particle + 16));
    tmp_a = tmp_a * cos_val;
    tmp_a = tmp_a * four_f;
    *(float *)(particle + 40) = -tmp_a;
    tmp_a = math_cos_angle16(*(int *)(owner + 48));
    cos_val = math_cos_angle16(*(int *)(particle + 16));
    tmp_a = tmp_a * cos_val;
    tmp_a = tmp_a * four_f;
    *(float *)(particle + 48) = -tmp_a;
    sin_val = math_sin_angle16(*(int *)(particle + 16));
    *(float *)(particle + 44) = sin_val * four_f;
    *(int *)(particle + 52) = 0;
}

int FUN_0c03ebf4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = 0xC03ECEC;
    t1 = 0x0;
    t2 = 0x0;
    t3 = (0x2E0 + a4);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t5 = 0x28;
            t5 = (t5 + t4);
            t0 = 0x4;
            u0 = (*(float *)((t5 + 0x0)));
            u1 = (*(float *)((t4 + t0)));
            t5 = 0x2C;
            t5 = (t5 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0x8;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t5 + 0x0)));
            t5 = 0x30;
            t5 = (t5 + t4);
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = 0xC;
            u1 = (*(float *)((t4 + t0)));
            u0 = (*(float *)((t5 + 0x0)));
            u1 = (u1 + u0);
            *(float *)((t4 + t0)) = u1;
            t0 = (*(int *)((t4 + 0x34)));
            t2 = (t2 + 0x1);
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    t0 = 0x24;
                    u1 = 0.0f;
                    u0 = (*(float *)((t4 + t0)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t4 + t0)) = u0;
                    if (!(u0 > u1)) {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                }
            } else {
                t0 = 0x24;
                u0 = (*(float *)((t4 + t0)));
                u0 = (u0 + 0.049999997f);
                *(float *)((t4 + t0)) = u0;
                if (!(1.0f > u0)) {
                    t5 = (*(int *)((t4 + 0x34)));
                    t5 = (t5 + 0x1);
                    *(unsigned int *)((t4 + 0x34)) = t5;
                }
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t2;
}
