/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b2c50-0c0b30c8) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int FUN_0c0e6fe8(void);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int obj_find_hitting_player(int);
int cam_set_shake_ramp(int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o308_int { char p[0x308]; int v; };
struct o3C_float { char p[0x3C]; float v; };
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o274_float { char p[0x274]; float v; };
struct o40_float { char p[0x40]; float v; };
int fx_spawn_spark_rings(int, int, float, float);
int obj_set_record(int, int);
int stage_obj_on_break(int);

int stage_gimmick_26_spawn_b(int a4, int a5);

int stage_gimmick_26_spawn(int a4)
{
    register int t0;
    register int t12;

    t0 = obj_create(0x4, 0x1, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x3;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B2CFE;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t12 = 0xF;
    }
    return t12;
}

int stage_gimmick_26_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return obj_destroy(a4, a5, a6, a7);
        }
        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A714))));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            cam_set_shake_ramp(0x14, 0x14);
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = obj_find_hitting_player(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = 0xA;
        for (;;) {
            if (t0 == 0) {
                break;
            }
            stage_gimmick_26_spawn_b(a4, 0x2);
            t0 = (t0 - 1);
        }
        (((struct oEC_ushort *)(a4))->v) = 0x50;
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int stage_gimmick_26_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t40;
    register int t4;
    register int t5;
    register int t6;
    register int t13;
    register float u16;
    register int t26;
    register float u29;
    register float u32;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1);
    t40 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x3;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B2F8E;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x30E)));
        (((struct o101_uchar *)(t0))->v) = 0x16;
        (((struct o102_uchar *)(t0))->v) = 0x4B;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t4 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o3C_float *)(t0))->v) = -2.0f;
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 200.0f);
        math_rand_float();
        
        t13 = FUN_0c0e6f24();
        u16 = (float)t13;
        if ((int)t13 < 0) {
            u16 = ((float)t13 + 4.2949673e+09f);
        }
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - ((u16 * 10.0f)));
        math_rand_float();
        
        t26 = FUN_0c0e6f24();
        u29 = (float)t26;
        if ((int)t26 < 0) {
            u29 = ((float)t26 + 4.2949673e+09f);
        }
        u32 = -200.0f;
        u32 = u32 + 10.0f * u29;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + u32);
        math_rand_float();
        
        t40 = (FUN_0c0e6f24());
    }
    return t40;
}

int stage_gimmick_26_update_b(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return obj_destroy(a4, 0x0, a6, a7);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 8.0f);
                if (!(((float)t0 / 8.0f) > 0.0f)) {
                    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                return 0xEC;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x8;
                t0 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            }
            return t1;
        }
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - 1.0f);
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t0 = 0x274;
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            (((struct o105_uchar *)(a4))->v) = 0x1;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            stage_obj_on_break(a4);
            fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 1.0f, 100.0f);
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0xA);
            t0 = (t1 + 0xA);
        }
        return t0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o105_uchar *)(a4))->v) = 0x0;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        (((struct o107_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return obj_set_record(a4, 0x25);
    }
    return 0xEC;
}
