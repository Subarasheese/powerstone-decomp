/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b1e50-0c0b217c) */

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
int obj_destroy(int, int, int, int);
int obj_find_hitting_player(int);
struct o308_int { char p[0x308]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
int fx_spawn_spark_rings(int, int, float, float);
int obj_set_record(int, int);
int snd_play_stage_obj_se(int, int, int);
int stage_obj_on_break(int);
int cam_set_shake_ramp(int, int);

int stage_gimmick_22_spawn_b(int a4, int a5);

int stage_gimmick_22_spawn(int a4)
{
    register int t0;
    register int t12;

    t0 = obj_create(0x4, 0x1, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B1EFE;
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

int stage_gimmick_22_update(int a4, int a5, int a6, int a7)
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
        stage_gimmick_22_spawn_b(a4, 0x2);
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int stage_gimmick_22_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x9;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B2044;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o101_uchar *)(t0))->v) = 0x12;
        (((struct o102_uchar *)(t0))->v) = 0x3D;
        (((struct o105_uchar *)(t0))->v) = 0x0;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct oEC_ushort *)(t0))->v) = 0x5A;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t14 = 0x40;
    }
    return t14;
}

int stage_gimmick_22_update_b(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 24.0f);
        *(unsigned int *)((a4 + 0x34)) = (int)((float)(*(int *)((a4 + 0x34))) - (u0 + 24.0f));
        t0 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t0 & 0xFFFF);
        if ((int)(t0 & 0xFFFF) <= (int)0xC000) {
            (((struct o105_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x34)) = 0xC000;
            fx_spawn_spark_rings((*(signed char *)((a4 + 0x3))), (a4 + 0x20), 2.0f, 240.0f);
            snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)((a4 + 0x3))), 0x3);
            cam_set_shake_ramp(0x14, 0x14);
            (((struct oEC_ushort *)(a4))->v) = 0x3C;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return stage_obj_on_break(a4);
        }
        return 0x40;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= (int)0x3C) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - (*(int *)((((((((struct oEC_short *)(a4))->v)) & 0x3) << 2) + 0xC33A634))));
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_set_record(a4, 0x23);
        }
        return 0xEC;
    }
    return 0xEC;
}
