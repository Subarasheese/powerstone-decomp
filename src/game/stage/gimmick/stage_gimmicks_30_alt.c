/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b33fc-0c0b3d30) */

/* named globals (symbols.txt) */
extern char g_res_stage_c[];
struct o0_float { float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o315_uchar { char p[0x315]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int snd_play_stage_obj_se(int, int, int);
extern int _quick_odd_mvn();
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int obj_set_record(int, int);
int FUN_0c0b3614(int);
int FUN_0c0b36bc(int);
int cam_set_shake_ramp(int, int);

int stage_gimmick_28_spawn_c(int);

int stage_gimmick_28_spawn_b(int a4)
{
    register int t0;
    register int t14;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x2, 0x1, 0x1, 0x0);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B36FC;
        *(unsigned char *)((t0 + 0x4)) = 0x10;
        (((struct o315_uchar *)(t0))->v) = 0x1;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x30E)));
        (((struct o101_uchar *)(t0))->v) = 0x31;
        (((struct o102_uchar *)(t0))->v) = 0x70;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x0;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A7DC); }
        (((struct o38_float *)(t0))->v) = ((((struct o0_float *)0xC0B36A0)->v));
        (((struct o3C_float *)(t0))->v) = ((((struct o4_float *)0xC0B36A0)->v));
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t14 = 0x40;
    }
    return t14;
}

int stage_gimmick_28_update_b(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 20) {
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x8));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if ((t0 != 3) && (t0 != 4)) {
                            if (t0 == 5) {
                                stage_gimmick_28_spawn_c(a4);
                                return ((int (*)(int))(obj_destroy))(a4);
                            }
                            if (t0 == 6) {
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
                            return ((int (*)(int, int, int, int))(obj_destroy))(a4, a5, a6, a7);
                        }
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            FUN_0c0b3614(a4);
                            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                            (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) - 1.0f);
                            t0 = 0xC0B38B4;
                            if (!((((((struct o24_float *)(a4))->v)) + -80.0f) > 60.0f)) {
                                t1 = 0x3C;
                                if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                                    (((struct o3C_float *)(a4))->v) = 0.0f;
                                    (((struct o24_float *)(a4))->v) = 140.0f;
                                    FUN_0c0b36bc(a4);
                                    t2 = *(signed char *)((a4 + 0x8));
                                    *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                                    if ((signed char)(t2 + 0x1) == 4) {
                                        cam_set_shake_ramp(0x1E, 0x1E);
                                        (((struct o3C_float *)(a4))->v) = 10.0f;
                                        (((struct oEC_ushort *)(a4))->v) = 0x1;
                                    } else {
                                        (((struct oEC_ushort *)(a4))->v) = 0x3C;
                                    }
                                    t1 = 0xEC;
                                }
                                t0 = t1;
                            }
                            t1 = t0;
                        } else {
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                            t1 = 0xEC;
                        }
                        return t1;
                    }
                    FUN_0c0b3614(a4);
                    t0 = 0x20;
                    if (((((struct o20_float *)(a4))->v)) > -480.0f) {
                        t1 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                        t0 = (t1 + 0x1);
                    }
                    return t0;
                }
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                obj_set_record(a4, 0x2F);
                (((struct o105_uchar *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x100;
                t1 = 0xEE;
            }
            return t1;
        }
        (((struct o30D_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8));
    t1 = t0;
    if (t0 == 0) {
    } else {
        (((struct o30D_uchar *)(a4))->v) = 0x14;
        (((struct o106_uchar *)(a4))->v) = 0x1;
        t1 = 0x106;
    }
    return t1;
}

int stage_gimmick_28_spawn_c(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t1 = *(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3));
    if (t1 != -1) {
        t2 = obj_create(0x5, 0x1, 0x5, 0x0);
        if (t2 != 0) {
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned char *)((t2 + 0x1)) = 0x1;
            *(unsigned char *)((t2 + 0x3)) = 0x2;
            *(unsigned short *)((t2 + 0x6)) = 0x1;
            *(unsigned char *)((t2 + 0x5)) = 0x19;
            *(unsigned char *)((t2 + 0x8)) = 0x0;
            *(unsigned char *)((t2 + 0x9)) = 0x0;
            *(unsigned char *)((t2 + 0xA)) = 0x0;
            *(unsigned char *)((t2 + 0xB)) = 0x0;
            (((struct oEC_ushort *)(t2))->v) = 0x0;
            (((struct oEE_ushort *)(t2))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x2C)) = *(struct mv3 *)(0xC33A7E8); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x50)) = *(struct mv3 *)(0xC33A7DC); }
            (((struct o118_uint *)(t2))->v) = 0x0;
            *(unsigned int *)((t2 + 0x10)) = 0xC0B39BE;
            t3 = 0x0;
            for (;;) {
                t5 = *(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3));
                t6 = *(int *)((((t3 << 2) + (0x2E0 + t2)) + 0x0));
                FUN_0c06233a(t6, 0xC664970, (((t5 << 2) + t5) + t3));
                *(unsigned char *)((t6 + 0x0)) = 0x1;
                t3 = (t3 + 0x1);
                *(unsigned short *)((t6 + 0x2)) = 0xF;
                if ((int)t3 >= (int)0x5) {
                    break;
                }
            }
            return snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)((t2 + 0x3))), 0x4);
        }
        return t2;
    }
    return t1;
}
