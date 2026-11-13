/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b28a4-0c0b2c50) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int _quick_odd_mvn(void);
int obj_destroy(int, int, int, int);
int obj_find_hitting_player(int);
struct o308_int { char p[0x308]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int fx_spawn_spark_rings(int, int, float, float);
int obj_set_record(int, int);
int snd_play_stage_obj_se(int, int, int);

int stage_gimmick_25_spawn_b(int, int);

int stage_gimmick_25_spawn(int a4)
{
    register int t0;
    register int t10;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x4, 0x1, 0x1, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B295E;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A6C4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)(0xC33A6B8); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t10 = 0xF;
    }
    return t10;
}

int stage_gimmick_25_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = obj_find_hitting_player(a4);
    t1 = t0;
    if (t0 != 0) {
        stage_gimmick_25_spawn_b(a4, ((-(*(signed char *)((t0 + 0x3)))) + 0x1));
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int stage_gimmick_25_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t22;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1, 0x0);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B2AD4;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x30E)));
        t4 = *(signed char *)((t0 + 0x30E));
        if (t4 != 0) {
            if (t4 != 1) {
            } else {
                (((struct o101_uchar *)(t0))->v) = 0x25;
                (((struct o102_uchar *)(t0))->v) = 0x8E;
            }
        } else {
            (((struct o101_uchar *)(t0))->v) = 0x13;
            (((struct o102_uchar *)(t0))->v) = 0x3E;
        }
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A6C4); }
        (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B2B18);
        (((struct oEC_ushort *)(t0))->v) = 0x50;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t22 = 0x40;
    }
    return t22;
}

int stage_gimmick_25_update_b(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return obj_destroy(a4, a5, a6, a7);
                    }
                    (((struct o105_uchar *)(a4))->v) = 0x1;
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
                (((struct o105_uchar *)(a4))->v) = 0x1;
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
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x1E;
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
            (((struct o3C_float *)(a4))->v) = 0.0f;
            fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 1.0f, 100.0f);
            snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A6DC))));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        return obj_set_record(a4, 0x22);
    }
    return 0xEC;
}
