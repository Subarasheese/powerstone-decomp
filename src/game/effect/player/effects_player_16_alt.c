/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bc1ec-0c0bc690) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int pl_get_hit_count_of_opponent(int);
int snd_play_char_voice(int, int);
int fx_spawn_17(int, int);
int fx_spawn_20(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int fx_update_gunrock_spark(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t2 = FUN_0c0555dc();
    if (t2 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 == 1) {
            t2 = *(signed char *)((a4 + 0x9));
            if (t2 != 0) {
                t3 = t2;
                if (t2 != 1) {
                } else {
                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x32);
                    *(unsigned char *)((a4 + 0x8)) = 0xA;
                    t3 = 0xA;
                }
                t2 = t3;
            } else {
                u0 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                (((struct o38_float *)(a4))->v) = (u1 * 40.0f);
                u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                (((struct o40_float *)(a4))->v) = (u1 * 40.0f);
                (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 40.0f));
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                if ((signed char)(((((struct oEC_short *)(a4))->v)) & 0x3) == 0) {
                    fx_spawn_20(a4);
                }
                t3 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
                if (((short)(t3 - 1) != 0) && (t0 = *(signed char *)((a4 + 0x2D8)), t0 == 0)) {
                    t0 = pl_get_hit_count_of_opponent(a4);
                    t3 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        t0 = 0xA;
                        for (;;) {
                            if (t0 == 0) {
                                break;
                            }
                            fx_spawn_17(a4, 0x2);
                            t0 = (t0 - 1);
                        }
                        t0 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                        t3 = (t0 + 0x1);
                    }
                    t0 = t3;
                } else {
                    t3 = 0xA;
                    for (;;) {
                        if (t3 == 0) {
                            break;
                        }
                        fx_spawn_17(a4, 0x0);
                        t3 = (t3 - 1);
                    }
                    t3 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                    t0 = (t3 + 0x1);
                }
                t2 = t0;
            }
            return t2;
        }
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        t2 = t0;
        if (t0 == 1) {
            snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x32);
            *(unsigned char *)((a4 + 0x8)) = 0xA;
            t2 = 0xA;
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a4 + 0x2C)) = (unsigned short)((*(int *)((a4 + 0x2C))) + 0xB6);
        u0 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o38_float *)(a4))->v) = (u1 * 40.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
        (((struct o40_float *)(a4))->v) = (u1 * 40.0f);
        (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 40.0f));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        if ((signed char)(((((struct oEC_short *)(a4))->v)) & 0x3) == 0) {
            fx_spawn_20(a4);
        }
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        if (((short)(t2 - 1) != 0) && (t1 = *(signed char *)((a4 + 0x2D8)), t1 == 0)) {
            t1 = pl_get_hit_count_of_opponent(a4);
            t2 = (signed char)t1;
            if ((signed char)t1 != 0) {
                t1 = 0xA;
                for (;;) {
                    if (t1 == 0) {
                        break;
                    }
                    fx_spawn_17(a4, 0x2);
                    t1 = (t1 - 1);
                }
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t1 = t2;
        } else {
            t2 = 0xA;
            for (;;) {
                if (t2 == 0) {
                    break;
                }
                fx_spawn_17(a4, 0x0);
                t2 = (t2 - 1);
            }
            t2 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
            t1 = (t2 + 0x1);
        }
        t0 = t1;
    }
    return t0;
}
