/* same module (continues) (0c0cb00c-0c0cb50c) */

typedef struct { int x, y, z; } vec3_int;
extern char *obj_create(int, int, int, int);
extern void FUN_0c06233a(int shooter, char *b, int c);
extern float math_rand_float(void);
extern void FUN_0c0cb3b8(char *effect);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o38_float { char p[0x38]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int obj_set_record_char(int, int);

void fx_spawn_spark_pair(char *shooter)
{
    char *effect;
    char *particle;
    vec3_int *tmpl_a = (vec3_int *)0xC1533A4;
    vec3_int *tmpl_b = (vec3_int *)0xC1533B0;
    float rnd_f;
    unsigned rnd_u;

    effect = obj_create(1, 1, 2, 0);
    if (effect == 0)
        return;
    effect[0] = 1;
    effect[3] = shooter[3];
    effect[1] = 1;
    *(short *)(effect + 6) = 15;
    effect[5] = 25;
    *(int *)(effect + 16) = 0xC0CB344;
    *(vec3_int *)(effect + 32) = *(vec3_int *)(shooter + 32);
    *(vec3_int *)(effect + 80) = *tmpl_a;
    *(vec3_int *)(effect + 44) = *tmpl_b;
    *(int *)(effect + 280) = 0;
    effect[257] = 0;
    effect[258] = 0;
    effect[261] = 1;
    effect[262] = 1;
    effect[263] = 1;
    particle = (char *)*(int *)(effect + 736);
    *particle = 1;
    FUN_0c06233a((int)particle, (char *)(0xC6002D0 + (signed char)(effect[3] * 24)), 8);
    *(short *)(particle + 2) = 543;
    *(vec3_int *)(particle + 4) = *(vec3_int *)0xC153398;
    *(vec3_int *)(particle + 16) = *tmpl_b;
    *(float *)(particle + 28) = 0.899999976f;
    *(float *)(particle + 32) = 0.0999999940f;
    *(float *)(particle + 40) = 0.0199999996f;
    *(float *)(particle + 44) = 0.399999976f;
    *(int *)(particle + 52) = 8;
    *(vec3_int *)(particle + 68) = *tmpl_a;
    particle = (char *)*(int *)(effect + 740);
    *particle = 0;
    FUN_0c06233a((int)particle, (char *)(0xC6002D0 + (signed char)(effect[3] * 24)), 34);
    *(short *)(particle + 2) = 1055;
    *(vec3_int *)(particle + 4) = *(vec3_int *)0xC153398;
    *(float *)(particle + 12) = *(float *)(particle + 12) + 30.0f;
    *(vec3_int *)(particle + 16) = *tmpl_b;
    *(vec3_int *)(particle + 28) = *tmpl_a;
    *(float *)(particle + 64) = 0.0f;
    rnd_u = (unsigned)(math_rand_float() * 255.0f);
    rnd_f = (float)(rnd_u % 6);
    *(float *)(particle + 68) = rnd_f / 10.0f + 0.5f;
    *(float *)(particle + 72) = *(float *)(particle + 68) / 4.0f;
    rnd_u = (unsigned)(math_rand_float() * 255.0f);
    *(int *)(particle + 52) = rnd_u % 4 + 1;
    *(float *)(particle + 44) = 50.0f;
    *(float *)(particle + 48) = 8.0f;
    FUN_0c0cb3b8(effect);
}

int FUN_0c0cb252(int a4, float f4)
{
    register int t0;
    register float u9;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((struct o28_float *)(t0))->v)));
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((struct o2C_float *)(t0))->v)));
    if ((*(int *)((t0 + 0x34))) != 0) {
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) - 1);
    } else {
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
        u9 = (((struct o4C_float *)(t0))->v);
        (((struct o4C_float *)(t0))->v) = (u9 - 0.099999994f);
        if (!((u9 - 0.099999994f) > 0.0f)) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    return (*(signed char *)((t0 + 0x0)));
}

int FUN_0c0cb456(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_destroy(a4);
        }
        u0 = (((struct o24_float *)(a4))->v);
        (((struct o24_float *)(a4))->v) = (u0 + 100.0f);
        t0 = 0x38;
        if (!(((((struct o38_float *)(a4))->v)) > (u0 + 100.0f))) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o105_uchar *)(a4))->v) = 0x0;
        return obj_set_record_char(a4, 0x71);
    }
    return 0xEC;
}
