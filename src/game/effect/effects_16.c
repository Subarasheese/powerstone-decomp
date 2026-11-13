/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0350e0-0c035444) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);

int fx_spawn_0350e0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0351DA;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x2C)) = 0xFFFFF8E4;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x13);
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x41F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x14);
        (((struct o40_float *)(((((struct o2E4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E8_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E8_int *)(t0))->v)) + 0x2)) = 0x41F;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E8_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x15);
        (((struct o40_float *)(((((struct o2E8_int *)(t0))->v))))->v) = 1.0f;
        t1 = 0x40;
    }
    return t1;
}

int fx_tick_0350e0(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((0x7223 + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))) != 4) {
        return obj_destroy(a4);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20)); }
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 30.0f);
        t0 = (((struct o2E8_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
        t0 = (((struct o2E8_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) - 0x38E);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        t0 = *(signed char *)((a4 + 0x9));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.199999988f);
                if (0.0f > ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o40_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v));
                t0 = (((struct o2E8_int *)(a4))->v);
                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                if (0.0f > ((((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                    (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
                }
                t0 = (((struct o2E8_int *)(a4))->v);
                *(volatile int *)((a4 + 0x2E8));
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.099999994f);
                if (0.0f > ((((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                    (((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
                }
                t0 = (((struct o2E8_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = ((((struct o24_float *)(t0))->v));
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
                t0 = (((struct o2E0_int *)(a4))->v);
                t1 = *(int *)(((0x2E0 + a4) + 0x4));
                u0 = (((struct o1C_float *)(t0))->v);
                (((struct o24_float *)(t0))->v) = u0;
                (((struct o1C_float *)(t1))->v) = u0;
                (((struct o24_float *)(t1))->v) = u0;
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
                if (((((struct oEE_short *)(a4))->v)) == 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
            }
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            u0 = ((((struct o20_float *)(t0))->v));
            u0 = u0 + 0.099999994f * (math_sin_angle16((((((struct oEC_short *)(a4))->v)) << 14)));
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v));
            if ((int)(*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0xB))) > (int)0x1) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0xA;
            }
            if ((*(signed char *)((0x71BA + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))) == 11) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        t0 = FUN_0c0555dc();
        t1 = t0;
        if (t0 != 0) {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20)); }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 30.0f);
    t0 = (((struct o2E8_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
    t0 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x18E3);
    t0 = (((struct o2E8_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) - 0x38E);
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.199999988f);
            if (0.0f > ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v) = ((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v));
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                (((struct o40_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            t0 = (((struct o2E8_int *)(a4))->v);
            *(volatile int *)((a4 + 0x2E8));
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.099999994f);
            if (0.0f > ((((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
                (((struct o24_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
            }
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = ((((struct o24_float *)(t0))->v));
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            t1 = *(int *)(((0x2E0 + a4) + 0x4));
            u0 = (((struct o1C_float *)(t0))->v);
            (((struct o24_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t1))->v) = u0;
            (((struct o24_float *)(t1))->v) = u0;
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
            if (((((struct oEE_short *)(a4))->v)) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
    } else {
        t0 = (((struct o2E0_int *)(a4))->v);
        u0 = ((((struct o20_float *)(t0))->v));
        u0 = u0 + 0.099999994f * (math_sin_angle16((((((struct oEC_short *)(a4))->v)) << 14)));
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o20_float *)((*(int *)(((0x2E0 + a4) + 0x4)))))->v));
        if ((int)(*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0xB))) > (int)0x1) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEE_ushort *)(a4))->v) = 0xA;
        }
        if ((*(signed char *)((0x71BA + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))) == 11) {
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = FUN_0c0555dc();
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
