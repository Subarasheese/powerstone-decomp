/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0be7dc-0c0bed78) */

typedef struct { int x, y, z; } vec3_int;
extern char *obj_create(int, int, int, int);
extern void FUN_0c06233a(int shooter, char *b, int c);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

void fx_spawn_four_particle_trail(char *shooter)
{
    char *effect;
    char *particle;
    float zero_f, one_f, tenth_f;

    effect = obj_create(1, 1, 4, 0);
    if (effect == 0)
        return;
    effect[0] = 1;
    effect[3] = shooter[3];
    effect[1] = 1;
    *(short *)(effect + 6) = 31;
    effect[5] = 25;
    *(int *)(effect + 16) = 0xC0BEA16;
    *(vec3_int *)(effect + 32) = *(vec3_int *)(shooter + 32);
    zero_f = 0.0f;
    one_f = 1.0f;
    *(int *)(effect + 52) = 0;
    *(int *)(effect + 48) = 0;
    *(int *)(effect + 44) = 0;
    *(float *)(effect + 64) = zero_f;
    *(float *)(effect + 60) = zero_f;
    *(float *)(effect + 56) = zero_f;
    *(float *)(effect + 88) = one_f;
    *(float *)(effect + 84) = one_f;
    *(float *)(effect + 80) = one_f;
    *(int *)(effect + 28) = (int)shooter;
    effect[15] = 0;
    effect[8] = 0;
    effect[9] = 0;
    effect[10] = 0;
    effect[11] = 0;
    tenth_f = 0.0999999940f;

    FUN_0c06233a(*(int *)(effect + 736), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), 4);
    particle = (char *)*(int *)(effect + 736);
    *particle = 1;
    *(short *)(*(int *)(effect + 736) + 2) = 1055;
    *(float *)(*(int *)(effect + 736) + 64) = one_f;
    *(float *)(*(int *)(effect + 736) + 28) = one_f;
    *(float *)(*(int *)(effect + 736) + 32) = tenth_f;
    *(float *)(*(int *)(effect + 736) + 36) = one_f;
    *(int *)(*(int *)(effect + 736) + 16) = 0;
    *(int *)(*(int *)(effect + 736) + 20) = 0;
    *(int *)(*(int *)(effect + 736) + 24) = 0;
    *(short *)(effect + 236) = 20;

    FUN_0c06233a(*(int *)(effect + 740), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), 5);
    particle = (char *)*(int *)(effect + 740);
    *particle = 1;
    *(short *)(*(int *)(effect + 740) + 2) = 1055;
    *(float *)(*(int *)(effect + 740) + 64) = one_f;
    *(float *)(*(int *)(effect + 740) + 28) = tenth_f;
    *(float *)(*(int *)(effect + 740) + 32) = tenth_f;
    *(float *)(*(int *)(effect + 740) + 36) = tenth_f;
    *(int *)(*(int *)(effect + 740) + 16) = 0;
    *(int *)(*(int *)(effect + 740) + 20) = 0;
    *(int *)(*(int *)(effect + 740) + 24) = 0;
    *(short *)(effect + 238) = 18;

    FUN_0c06233a(*(int *)(effect + 744), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), 6);
    particle = (char *)*(int *)(effect + 744);
    *particle = 1;
    *(short *)(*(int *)(effect + 744) + 2) = 31;
    *(float *)(*(int *)(effect + 744) + 64) = one_f;
    *(float *)(*(int *)(effect + 744) + 28) = zero_f;
    *(float *)(*(int *)(effect + 744) + 32) = one_f;
    *(float *)(*(int *)(effect + 744) + 36) = zero_f;
    *(int *)(*(int *)(effect + 744) + 16) = 0;
    *(int *)(*(int *)(effect + 744) + 20) = 0;
    *(int *)(*(int *)(effect + 744) + 24) = 0;
    *(short *)(effect + 240) = 1;

    FUN_0c06233a(*(int *)(effect + 748), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), 6);
    particle = (char *)*(int *)(effect + 748);
    *particle = 1;
    *(short *)(*(int *)(effect + 748) + 2) = 31;
    *(float *)(*(int *)(effect + 748) + 64) = one_f;
    *(float *)(*(int *)(effect + 748) + 28) = zero_f;
    *(float *)(*(int *)(effect + 748) + 32) = one_f;
    *(float *)(*(int *)(effect + 748) + 36) = zero_f;
    *(int *)(*(int *)(effect + 748) + 16) = 0;
    *(int *)(*(int *)(effect + 748) + 20) = 0;
    *(int *)(*(int *)(effect + 748) + 24) = 0;
    *(short *)(effect + 242) = 10;
}

int FUN_0c0bea16(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0xF)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0xF))) != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.049999997f);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct o2E4_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
            if (!(((float)t0 / 2.0f) > 0.0f)) {
                (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        }
    } else {
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct oEE_ushort *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0xA));
    switch (t0) {
    case 0:
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x12;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 1:
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x2;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        break;
    case 2:
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct o2E8_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
        if (!(((float)t0 / 2.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        }
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        break;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
                t0 = (((struct o2EC_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct o2EC_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x1000);
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = ((float)t0 / 2.0f);
                if (!(((float)t0 / 2.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((a4 + 0xF)) = 0xA;
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
                (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                t1 = 0xF2;
            }
            t0 = t1;
        } else {
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct o2EC_int *)(a4))->v);
            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0x1000);
            t1 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xF2;
            if ((short)((t1 - 1) + 0x1) == 0) {
                (((struct oF2_ushort *)(a4))->v) = 0x2;
                t1 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xF2;
        if ((short)(t0 - 1) == 0) {
            (((struct oF2_ushort *)(a4))->v) = 0x12;
            t0 = *(signed char *)((a4 + 0xB));
            *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
