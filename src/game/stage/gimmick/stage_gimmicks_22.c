/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b13c8-0c0b1b34) */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
int math_vec3_sub(int, int, int);
int math_atan_angle16(float);
extern float math_rand_float(void);
extern float math_sin_angle16(int a);
extern float math_cos_angle16(int a);
typedef struct { int x, y, z; } vec3i;
extern void stage_gimmick_20_run(char *, char *);

int FUN_0c0b146e(int a4, int a5);

int FUN_0c0b13c8(int a4, int a5)
{
    register float u25;
    register int t41;

    (((struct o1A_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x19)));
    (((struct o19_uchar *)(a5))->v) = 0x0;
    if (!(((((struct o0_float *)0xC0B14E0)->v)) > ((((struct o4_float *)(a4))->v)))) {
        (((struct o19_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x19))) + 0x1);
    }
    if (!(((((struct o4_float *)0xC0B14E0)->v)) > ((((struct o4_float *)(a4))->v)))) {
        (((struct o19_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x19))) + 0x1);
    }
    if (((((struct oC_float *)(a4))->v)) > ((((struct o8_float *)0xC0B14E0)->v))) {
        (((struct o19_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x19))) + 0x3);
    }
    if (((((struct oC_float *)(a4))->v)) > ((((struct oC_float *)0xC0B14E0)->v))) {
        (((struct o19_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x19))) + 0x3);
    }
    u25 = (((struct o10_float *)0xC0B14E0)->v);
    if (!(((((struct o4_float *)(a4))->v)) > u25)) {
        (((struct o19_uchar *)(a5))->v) = 0x9;
    }
    if (!(((((struct o14_float *)0xC0B14E0)->v)) > ((((struct o4_float *)(a4))->v)))) {
        (((struct o19_uchar *)(a5))->v) = 0xA;
    }
    if (!(((((struct oC_float *)(a4))->v)) > u25)) {
        (((struct o19_uchar *)(a5))->v) = 0xB;
    }
    t41 = 0xC;
    if (!(((((struct o18_float *)0xC0B14E0)->v)) > ((((struct oC_float *)(a4))->v)))) {
        (((struct o19_uchar *)(a5))->v) = 0xC;
        t41 = 0x19;
    }
    return t41;
}

int FUN_0c0b146e(int a4, int a5)
{
    return ((((int)(unsigned short)(a4 - a5) >= (int)0x8000)) ? 1 : 0);
}

int FUN_0c0b147c(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x1B;
    if ((unsigned char)(*(signed char *)((a5 + 0x1B))) != 0xFF) {
        if ((*(signed char *)((a5 + 0x1B))) != 0) {
            t0 = ((*(int *)((a4 + 0x14))) - (int)(((float)a6 * 65536.0f) / 360.0f));
        } else {
            t0 = ((*(int *)((a4 + 0x14))) + (int)(((float)a6 * 65536.0f) / 360.0f));
        }
        *(unsigned int *)((a4 + 0x14)) = t0;
        t2 = *(signed char *)((a5 + 0x1B));
        t3 = FUN_0c0b146e((*(int *)((a5 + 0x10))), t0);
        t0 = (signed char)t3;
        if ((unsigned char)t2 != (signed char)t3) {
            (((struct o1B_uchar *)(a5))->v) = 0xFF;
            t0 = 0x1B;
        }
    }
    return t0;
}

int FUN_0c0b1508(int a4, int a5, int a6)
{
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC0B1698)->v);
    u1 = (((struct o4_float *)0xC0B1698)->v);
    if ((*(signed char *)((a5 + 0x1B))) != 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - (int)(((float)a6 * u0) / u1));
    } else {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + (int)(((float)a6 * u0) / u1));
    }
    return 0x1B;
}

int FUN_0c0b1536(int a4, int a5)
{
    int stk[4];
    register int t16;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 4)) = ((((struct o4_float *)(a5))->v));
    *(float *)(((int)stk + 8)) = (*(float *)0xC0B16A0);
    *(float *)(((int)stk + 12)) = ((((struct oC_float *)(a5))->v));
    math_vec3_sub((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), ((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)((a5 + 0x10)) = (math_atan_angle16(((*(float *)(((int)stk + 4))) / (*(float *)(((int)stk + 12))))));
    if (0.0f > (*(float *)(((int)stk + 12)))) {
        *(unsigned int *)((a5 + 0x10)) = ((*(int *)((a5 + 0x10))) + 0x8000);
    }
    t16 = FUN_0c0b146e((*(int *)((a5 + 0x10))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x14))));
    (((struct o1B_uchar *)(a5))->v) = t16;
    return t16;
}

void stage_gimmick_20_pick_random_point(int unused, char *obj)
{
    signed char *pair = (signed char *)(0xC152F68 + obj[25] * 2);
    int row_idx = pair[(unsigned)(math_rand_float() * 255.0f) % 2];
    float *row = (float *)(0xC152F84 + (signed char)(row_idx * 12));
    float amplitude = row[2];
    int angle = ((unsigned)(math_rand_float() * 255.0f) % 32) << 11;
    float trig = math_sin_angle16(angle);
    *(float *)(obj + 4) = row[0] + amplitude * trig;
    trig = math_cos_angle16(angle);
    *(float *)(obj + 12) = row[1] + amplitude * trig;
}

void stage_gimmick_20_update(char *actor)
{
    int i;
    char *rec0, *rec1, *rec2;
    char *table_a, *table_b;

    table_a = (char *)0xC152ED8;
    table_b = (char *)0xC152F20;
    for (i = 0; i < 3; i++) {
        rec0 = *(char **)(actor + 0x2E0 + i * 12);
        stage_gimmick_20_run(rec0, rec0 + 40);
        rec1 = *(char **)(actor + 0x2E4 + i * 12);
        *(vec3i *)(rec1 + 4) = *(vec3i *)(table_a + (signed char)(rec0[64] * 12));
        *(vec3i *)(rec1 + 16) = *(vec3i *)(table_b + (signed char)(rec0[64] * 12));
        rec2 = *(char **)(actor + 0x2E8 + i * 12);
        *(vec3i *)(rec2 + 4) = *(vec3i *)(table_a + (signed char)(rec0[64] * 12) + 36);
        *(vec3i *)(rec2 + 16) = *(vec3i *)(table_b + (signed char)(rec0[64] * 12) + 36);
    }
}
