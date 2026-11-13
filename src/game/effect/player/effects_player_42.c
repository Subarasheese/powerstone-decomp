/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c1b64-0c0c209c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_rand_float(void);
int _modlu(void);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e21b0(int, int);

int fx_spawn_25(int a4, int a5);

int fx_spawn_25(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t3;
    register float t8;
    register float u11;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C1D94;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o58_float *)(t0))->v) = 0.049999997f;
        (((struct o54_float *)(t0))->v) = 0.049999997f;
        (((struct o50_float *)(t0))->v) = 0.049999997f;
        t3 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (t0 + 0x20));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x23F;
        t8 = math_rand_float();
        u11 = (t8 * 255.0f);
        if (!(2.14748365e+09f > (t8 * 255.0f))) {
            u11 = (((t8 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t14 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t14 << 1) + t14) << 2) << 1) + 0xC6002D0), (((int)((unsigned int)(int)u11 % (unsigned int)0x10)) + 0xA));
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o50_float *)(t0))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o54_float *)(t0))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o58_float *)(t0))->v));
        (((struct o44_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o101_uchar *)(t0))->v) = 0x4;
        (((struct o102_uchar *)(t0))->v) = 0x4;
        obj_set_record_char(t0, 0x71);
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
    }
    return t0;
}

int fx25_spawn_burst10(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = fx_spawn_25(a4, t0);
        t2 = t1;
        if (t1 != 0) {
            (((struct oEC_ushort *)(t1))->v) = ((t0 << 2) + t0);
            t2 = 0xEC;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}

int fx_update_25(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x9));
        switch (t0) {
        case 0:
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) + 0.099999994f);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00999999978f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.00999999978f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
            if (((((struct o50_float *)(a4))->v)) > 1.0f) {
                (((struct o50_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o54_float *)(a4))->v)) > 1.0f) {
                (((struct o54_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o58_float *)(a4))->v)) > 1.0f) {
                (((struct o58_float *)(a4))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                (((struct o3C_float *)(a4))->v) = 2.0f;
                (((struct o105_uchar *)(a4))->v) = 0x1;
                (((struct o106_uchar *)(a4))->v) = 0x1;
            }
            break;
        case 1:
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) + 0.099999994f);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00999999978f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.00999999978f);
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.00999999978f);
            if (((((struct o50_float *)(a4))->v)) > 1.0f) {
                (((struct o50_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o54_float *)(a4))->v)) > 1.0f) {
                (((struct o54_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o58_float *)(a4))->v)) > 1.0f) {
                (((struct o58_float *)(a4))->v) = 1.0f;
            }
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x1E) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                (((struct o3C_float *)(a4))->v) = 2.0f;
                (((struct o105_uchar *)(a4))->v) = 0x1;
                (((struct o106_uchar *)(a4))->v) = 0x1;
            }
            break;
        case 2:
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.099999994f);
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
            }
            break;
        }
        if (((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        }
        if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
        }
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o58_float *)(a4))->v));
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        return ((int (*)(int, int, int, int))(0xC0C1D42))(a4, a5, a6, a7);
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t0 = 0xEC;
    if (((((struct oEC_short *)(a4))->v)) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        (((struct o38_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * 40.0f);
        (((struct o40_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * 40.0f);
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) / -40.0f);
        (((struct o48_float *)(a4))->v) = 0.099999994f;
        (((struct o4C_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) / -40.0f);
        (((struct o58_float *)(a4))->v) = 0.00999999978f;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        (((struct o105_uchar *)(a4))->v) = 0x0;
        t0 = 0x105;
    }
    return t0;
}
