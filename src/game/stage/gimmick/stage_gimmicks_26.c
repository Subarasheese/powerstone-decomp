/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b2518-0c0b28a4) */

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
int stage_gimmick_24_spawn_b(int, int);
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_spark_rings(int, int, float, float);
int obj_set_record(int, int);
int snd_play_stage_obj_se(int, int, int);

int stage_gimmick_24_spawn(int a4)
{
    register int t0;
    register int t10;

    t0 = obj_create(0x4, 0x1, 0x1, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x3;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B25D2;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        stage_obj_load_layout_pos(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A698); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A68C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)(0xC33A680); }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t10 = 0xF;
    }
    return t10;
}

int stage_gimmick_24_update(int a4, int a5, int a6, int a7)
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
        stage_gimmick_24_spawn_b(a4, ((-(*(signed char *)((t0 + 0x3)))) + 0x1));
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int stage_gimmick_24_update_b(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
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
        u0 = (((struct o38_float *)(a4))->v);
        (((struct o38_float *)(a4))->v) = (u0 + 24.0f);
        *(unsigned int *)((a4 + 0x2C)) = (int)((float)(*(int *)((a4 + 0x2C))) - (u0 + 24.0f));
        t0 = *(int *)((a4 + 0x2C));
        *(unsigned int *)((a4 + 0x2C)) = (t0 & 0xFFFF);
        t1 = 0x38;
        if ((int)(t0 & 0xFFFF) <= (int)0xC000) {
            (((struct o105_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x2C)) = 0xC000;
            fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 2.0f, 300.0f);
            snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x2);
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) > (int)0x3C) {
        return 0xEC;
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A6A4))));
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        return 0xEC;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    return obj_set_record(a4, 0x35);
}
