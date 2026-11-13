/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bed78-0c0bf488) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int pl_tick_hitstop(int);
int snd_play_char_voice(int, int);
int fx_spawn_four_particle_trail(int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int thunk_FUN_0c062242(int);

int FUN_0c0bf046(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t9;
    register float u10;
    register int t12;
    register float u13;
    register int t14;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;
    register int t30;
    register int t36;
    register int t38;
    register int t39;
    register int t44;
    register int t74;
    register int t76;
    register int t80;
    register int t120;
    register int t123;
    register int t132;
    register float u135;
    register float u139;
    register int t145;
    register float u148;
    register float u152;
    register int t169;
    register int t189;
    register int t192;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 == 1) {
            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            t9 = (((struct o2E4_int *)(a4))->v);
            u10 = *(float *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0x7) << 2) + 0xC33C578));
            (((struct o24_float *)(t9))->v) = u10;
            (((struct o20_float *)(t9))->v) = u10;
            (((struct o1C_float *)(t9))->v) = u10;
            t12 = (((struct o2E8_int *)(a4))->v);
            u13 = *(float *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33C598));
            (((struct o24_float *)(t12))->v) = u13;
            (((struct o20_float *)(t12))->v) = u13;
            (((struct o1C_float *)(t12))->v) = u13;
            t14 = (((struct o2E8_int *)(a4))->v);
            *(unsigned int *)((t14 + 0x18)) = ((*(int *)((t14 + 0x18))) + 0x2000);
            t16 = (((struct o2EC_int *)(a4))->v);
            (((struct o1C_float *)(t16))->v) = (((((struct o1C_float *)(t16))->v)) + 0.25f);
            t18 = (((struct o2EC_int *)(a4))->v);
            (((struct o20_float *)(t18))->v) = (((((struct o20_float *)(t18))->v)) + 0.25f);
            t20 = (((struct o2EC_int *)(a4))->v);
            (((struct o24_float *)(t20))->v) = (((((struct o24_float *)(t20))->v)) + 0.25f);
            t22 = (((struct o2EC_int *)(a4))->v);
            *(unsigned int *)((t22 + 0x18)) = ((*(int *)((t22 + 0x18))) + 0x2000);
            t24 = (((struct o2EC_int *)(a4))->v);
            (((struct oC_float *)(t24))->v) = (((((struct oC_float *)(t24))->v)) + 20.0f);
            t26 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t26 - 1);
            if ((short)(t26 - 1) == 0) {
                (((struct oEE_ushort *)(a4))->v) = 0xA;
                (((struct o1C_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o20_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2EC_int *)(a4))->v))))->v) = 0.0f;
                t30 = (((struct o2EC_int *)(a4))->v);
                (((struct oC_float *)(t30))->v) = (((((struct oC_float *)(t30))->v)) + 0.0f);
            }
            t36 = (((struct o2F0_int *)(a4))->v);
            (((struct o24_float *)(t36))->v) = (((((struct o24_float *)(t36))->v)) + 0.0299999993f);
            t38 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t38 - 1);
            if ((short)(t38 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = 0x4;
                t192 = 0x4;
            } else {
                t39 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t39) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                t44 = 0x0;
                if (((((struct o24_float *)(a4))->v)) > ((*(float *)(((int)stk + 8))) + 0.0f)) {
                    t44 = 0x1;
                }
                *(unsigned char *)(((0x105 + a4) + 0x2)) = t44;
                *(unsigned char *)(((0x105 + a4) + 0x1)) = t44;
                (((struct o105_uchar *)(a4))->v) = t44;
                t192 = 0x2D8;
                if ((*(signed char *)((a4 + 0x2D8))) != 0) {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x1;
                    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x1;
                    (((struct o105_uchar *)(a4))->v) = 0x1;
                    fx_spawn_four_particle_trail(a4);
                    (((struct oEC_ushort *)(a4))->v) = 0x8;
                    *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
                    t192 = 0xFFFFFFFF;
                }
            }
        } else {
            if (t3 == 2) {
                *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + (*(int *)((((signed char)(((((struct oEC_short *)(a4))->v)) & 0xF) << 2) + 0xC33C538)))) & 0xFFFF);
                (((struct o40_float *)(((((struct o2F0_int *)(a4))->v))))->v) = ((float)((((struct oEC_short *)(a4))->v)) / 8.0f);
                t74 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t74 - 1);
                t192 = 0xEC;
                if ((short)(t74 - 1) == 0) {
                    *(unsigned char *)((((((struct o2F0_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t76 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t76 + 0x1);
                    t192 = (t76 + 0x1);
                }
            } else {
                if (t3 == 3) {
                    t80 = (((struct oEC_short *)(a4))->v);
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t80 / 8.0f);
                    if (!(((float)t80 / 8.0f) > 0.0f)) {
                        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t192 = 0xEC;
                } else {
                    t192 = (obj_destroy(a4));
                }
            }
        }
    } else {
        t120 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
        if ((signed char)t120 != 0) {
        } else {
            if (((((struct oEC_short *)(a4))->v)) == 10) {
                t123 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242(((((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t123) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
                if ((int)(*(signed char *)((a4 + 0xF))) > (int)0x2) {
                    math_rand_float();
                    t132 = FUN_0c0e6f24();
                    u135 = (float)t132;
                    if ((int)t132 < 0) {
                        u135 = ((float)t132 + 4.2949673e+09f);
                    }
                    u139 = -100.0f;
                    u139 = u139 + 10.0f * u135;
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u139);
                    math_rand_float();
                    t145 = FUN_0c0e6f24();
                    u148 = (float)t145;
                    if ((int)t145 < 0) {
                        u148 = ((float)t145 + 4.2949673e+09f);
                    }
                    u152 = -100.0f;
                    u152 = u152 + 10.0f * u148;
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u152);
                }
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 700.0f);
            }
            t169 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t169 - 1);
            if ((short)((t169 - 1) + 0x1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0xB4;
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x32);
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        t189 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
        t192 = t189;
        if (t189 != 11) {
            *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
            t192 = 0xFFFFFFFF;
        }
    }
    return t192;
}
