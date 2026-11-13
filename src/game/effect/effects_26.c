/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c036fe4-0c0372a8) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int snd_play_char_voice(int, int);

int fx_spawn_036fe4(int a4, int a5)
{
    register int t0;
    register int t10;
    register float u2;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)a5;
        *(unsigned int *)((t0 + 0x10)) = 0xC0370A4;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x11F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        u2 = -3.0f;
        u2 = u2 + 2.0f * (float)(unsigned char)a5;
        (((struct o20_float *)(t0))->v) = u2;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = -8.0f;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0199999996f;
        (((struct o54_float *)(t0))->v) = 0.0199999996f;
        (((struct o58_float *)(t0))->v) = 0.0199999996f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t3 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (a5 + 0xB));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x11F;
        t10 = 0x11F;
    }
    return t10;
}

int fx_tick_036fe4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x6;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                        t2 = 0xEC;
                        if ((short)(t1 - 1) == 0) {
                            t1 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        return t2;
                    }
                    if (t0 == 5) {
                        return obj_destroy(a4);
                    }
                    if (t0 == 6) {
                        return obj_destroy(a4);
                    }
                    return t0;
                }
                t0 = *(signed char *)(((0xF2 + a4) + 0x0));
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((*(float *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC321358) + 0x0))) + -0.0f) / 5.0f));
                t0 = *(signed char *)(((0xF2 + a4) + 0x0));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC321358)))->v)) + -0.0f) / 5.0f));
                t0 = *(signed char *)(((0xF2 + a4) + 0x0));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o8_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC321358)))->v)) + 3.0f) / 5.0f));
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0xEC;
                if ((short)(t0 - 1) == 0) {
                    t0 = *(signed char *)((a4 + 0xF2));
                    (((struct o20_float *)(a4))->v) = (*(float *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC321358) + 0x0)));
                    t0 = *(signed char *)((a4 + 0xF2));
                    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)(((signed char)(((t0 << 1) + t0) << 2) + 0xC321358)))->v));
                    t0 = *(signed char *)((a4 + 0xF2));
                    (((struct o28_float *)(a4))->v) = ((((struct o8_float *)((0xC321358 + (signed char)(((t0 << 1) + t0) << 2))))->v));
                    snd_play_char_voice((*(int *)((a4 + 0x1C))), 0x34);
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = ((-(((t0 << 2) << 2) - t0)) + 0x50);
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x5;
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
    } else {
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = ((((t0 << 2) << 2) - t0) + 0x28);
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o20_float *)(a4))->v) = -0.0f;
        (((struct o24_float *)(a4))->v) = -0.0f;
        (((struct o28_float *)(a4))->v) = -3.0f;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
