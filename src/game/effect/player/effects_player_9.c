/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b97c0-0c0b9b0c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int thunk_FUN_0c062242(int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_spawn_0367e4(int, int);
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);

int fx_spawn_14(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t18;
    register int t5;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x1, 0x0);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0B989E;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC33C328))) * (short)0xB0)), t0 + 0x20);
        obj_set_record_char(t0, 0x70);
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        t11 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t18 = 0xF;
    }
    return t18;
}

int fx_update_14(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t1 + 0x18)) = ((*(int *)((t1 + 0x18))) + 0xC16);
            if ((*(signed char *)((a4 + 0x2D8))) == 0) {
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
                    (((struct o101_uchar *)(a4))->v) = 0x0;
                    (((struct o102_uchar *)(a4))->v) = 0x0;
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                } else {
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    t2 = 0x28;
                }
                t1 = t2;
            } else {
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
                (((struct o101_uchar *)(a4))->v) = 0x0;
                (((struct o102_uchar *)(a4))->v) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
                t2 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                t1 = (t2 + 0x1);
            }
            return t1;
        }
        if (t0 == 2) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.399999976f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.399999976f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
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
        if (t0 == 3) {
            return obj_destroy(a4);
        }
        return t0;
    }
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x1C));
    u0 = (((struct o20_float *)(t0))->v);
    u1 = (((struct o20_float *)(t1))->v);
    u2 = (((struct o24_float *)(t1))->v);
    u3 = (((struct o24_float *)(t0))->v);
    u4 = (((struct o28_float *)(t1))->v);
    u5 = (((struct o28_float *)(t0))->v);
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = 9.99999997e-07f;
    }
    u1 = (u4 - u5);
    if ((u4 - u5) == 0.0f) {
        u1 = 9.99999997e-07f;
    }
    u2 = (u1 * u1);
    u2 = u2 + u6 * u6;
    u1 = math_signed_sqrt(u2);
    t0 = math_atan_angle16(((-u1) / u0));
    t1 = t0;
    if (0.0f > u0) {
        t1 = (t0 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x2C)) = (-(unsigned short)(t1 + 0x4000));
    u0 = math_sin_angle16(((-(-(unsigned short)(t1 + 0x4000))) + 0x14000));
    u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(a4))->v) = (u1 * 50.0f);
    (((struct o3C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 50.0f);
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000));
    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))));
    (((struct o40_float *)(a4))->v) = (u1 * 50.0f);
    obj_spawn_0367e4(a4, 0x0);
    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0xC16);
    if ((*(signed char *)((a4 + 0x2D8))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
            (((struct o101_uchar *)(a4))->v) = 0x0;
            (((struct o102_uchar *)(a4))->v) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        } else {
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            t1 = 0x28;
        }
        t0 = t1;
    } else {
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
        (((struct o101_uchar *)(a4))->v) = 0x0;
        (((struct o102_uchar *)(a4))->v) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
