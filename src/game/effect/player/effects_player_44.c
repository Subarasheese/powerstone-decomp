/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c2a20-0c0c2e5c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int pl_angle_to_opponent(int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
int FUN_0c06231c(int, int, int);
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_29(int a4, int a5, int a6);
int fx29_spawn_burst8(int a4, int a5);
int fx29_advance_kid_frame(int a4);

int fx_spawn_29(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t11;
    register float u12;
    register float u13;
    register float u20;
    register int t25;
    register int t30;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = obj_create(0x1, 0x1, 0x1, 0x0);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x3)));
    *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
    *(unsigned short *)((t0 + 0x6)) = 0x1F;
    *(unsigned char *)((t0 + 0x5)) = 0x19;
    *(unsigned int *)((t0 + 0x10)) = 0xC0C2C6A;
    t5 = pl_angle_to_opponent(((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4));
    t11 = *(signed char *)(((int)stk + 0));
    u12 = (float)(((short)t11 * (short)0x96) + 0xC8);
    u13 = ((((struct o20_float *)(((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
    u13 = u13 + u12 * (math_sin_angle16((unsigned short)((((((*(signed char *)((t0 + 0x4))) << 8) << 2) << 2) << 1) + t5)));
    (((struct oC_float *)(((int)stk + 0)))->v) = (float)(((short)t11 * (short)0x96) + 0xC8);
    (((struct o20_float *)(t0))->v) = u13;
    u20 = ((((struct o28_float *)(((unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)))->v));
    u20 = u20 + (*(float *)(((int)stk + 12))) * (math_cos_angle16((unsigned short)((((((*(signed char *)((t0 + 0x4))) << 8) << 2) << 2) << 1) + t5)));
    (((struct o28_float *)(t0))->v) = u20;
    (((struct o24_float *)(t0))->v) = ((((struct o2D4_float *)((0xC7E40C4 + (unsigned short)((unsigned short)(*(signed char *)((t0 + 0x3))) * (unsigned short)0x72D0))))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC1531C0); }
    (((struct oEC_ushort *)(t0))->v) = 0x0;
    (((struct o105_uchar *)(t0))->v) = 0x1;
    (((struct o107_uchar *)(t0))->v) = 0x1;
    *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
    t25 = *(signed char *)((t0 + 0x3));
    FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t25 << 1) + t25) << 2) << 1) + 0xC6002D0), 0x1D);
    t30 = (((struct o2E0_int *)(t0))->v);
    (((struct o24_float *)(t30))->v) = 1.0f;
    (((struct o20_float *)(t30))->v) = 1.0f;
    (((struct o1C_float *)(t30))->v) = 1.0f;
    (((struct o101_uchar *)(t0))->v) = 0x5;
    (((struct o102_uchar *)(t0))->v) = 0x5;
    *(unsigned char *)(((0x308 + t0) + 0x1)) = 0x0;
    (((struct o308_uchar *)(t0))->v) = 0x0;
    *(unsigned char *)(((0x308 + t0) + 0x2)) = (*(signed char *)(((int)stk + 0)));
    return obj_set_record_char(t0, 0x7C);
}

int fx29_spawn_burst8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = 0x0;
    for (;;) {
        t3 = fx_spawn_29((*(int *)(((int)stk + 0))), t0, (*(signed char *)(((int)stk + 4))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int fx29_advance_kid_frame(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)(((0x308 + a4) + 0x0));
    (((struct o308_uchar *)(a4))->v) = (t0 - 1);
    if ((signed char)(t0 - 1) != 0) {
        (((struct o308_uchar *)(a4))->v) = 0x2;
        t0 = *(signed char *)(((0x308 + a4) + 0x1));
        *(unsigned char *)(((0x308 + a4) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)0x5) {
            *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x0;
        }
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x3));
        t1 = (FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((0x308 + a4) + 0x1))) + 0x1D)));
    }
    return t1;
}

int fx_update_29(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register float u1;
    register int t2;
    register int t8;
    register int t10;
    register int t12;
    register float u32;
    register float u35;
    register int t39;
    register int t56;
    register float u64;
    register int t68;
    register int t85;
    int t42;
    int t71;

    t0 = *(signed char *)((a4 + 0x8));
    u1 = (float)((((int)stk + 0) * 0x3C) + 0x78);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
            if ((int)(short)(t2 - 1) < 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
            t8 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t8))->v) = (((((struct o44_float *)(t8))->v)) - 0.0799999982f);
            t10 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t10))->v) = (((((struct o48_float *)(t10))->v)) - 0.0799999982f);
            t12 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t12))->v) = (((((struct o4C_float *)(t12))->v)) - 0.0799999982f);
            if (0.0f > ((((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            if (0.0f > ((((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            }
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.049999997f);
            if (9.99999975e-05f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = 9.99999975e-05f;
            }
            u32 = (((struct o58_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = (u32 - 0.049999997f);
            if (9.99999975e-05f > (u32 - 0.049999997f)) {
                (((struct o58_float *)(a4))->v) = 9.99999975e-05f;
            }
            return 0x58;
        }
        fx29_advance_kid_frame(a4);
        u35 = (((struct o54_float *)(a4))->v);
        (((struct o54_float *)(a4))->v) = (u35 + 0.099999994f);
        if ((u35 + 0.099999994f) > 1.0f) {
            (((struct o54_float *)(a4))->v) = 1.0f;
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        t39 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t39 - 1);
        t56 = 0xEC;
        if ((short)(t39 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            if (((*(signed char *)((a4 + 0x4))) == 0) && (t42 = *(signed char *)(((0x308 + a4) + 0x2)), (int)t42 < (int)0x3)) {
                fx29_spawn_burst8(a4, ((*(signed char *)(((0x308 + a4) + 0x2))) + 0x1));
            }
            *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            t56 = 0x4C;
        }
        return t56;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0xA;
    (((struct o105_uchar *)(a4))->v) = 0x0;
    fx29_advance_kid_frame(a4);
    u64 = (((struct o54_float *)(a4))->v);
    (((struct o54_float *)(a4))->v) = (u64 + 0.099999994f);
    if ((u64 + 0.099999994f) > 1.0f) {
        (((struct o54_float *)(a4))->v) = 1.0f;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (int)((u1 * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    t68 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t68 - 1);
    t85 = 0xEC;
    if ((short)(t68 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        if (((*(signed char *)((a4 + 0x4))) == 0) && (t71 = *(signed char *)(((0x308 + a4) + 0x2)), (int)t71 < (int)0x3)) {
            fx29_spawn_burst8(a4, ((*(signed char *)(((0x308 + a4) + 0x2))) + 0x1));
        }
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        t85 = 0x4C;
    }
    return t85;
}
