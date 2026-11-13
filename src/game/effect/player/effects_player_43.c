/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c209c-0c0c2a20) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c06231c(int, int, int);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int snd_play_side_se(int, int);
int fx_spawn_28(int, int, int, int, int, int, int, int);
extern int _quick_odd_mvn();

int FUN_0c0c209c(int a4);
int FUN_0c0c20ee(int a4);

int FUN_0c0c209c(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}

int FUN_0c0c20ee(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x3;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}

void fx_update_26(int a4)
{
    int stk[4];
    register int t2;
    register int t4;
    register int t6;
    register float u13;
    register int t28;
    register float u35;
    register float u67;
    register int t73;
    register float u99;
    register int t105;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        obj_destroy(a4);
    return;
    }
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                obj_destroy(a4);
    return;
            }
            FUN_0c0c20ee(a4);
            t4 = *(signed char *)((a4 + 0x9));
            if (t4 != 0) {
                if (t4 != 1) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                } else {
                    t6 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t6 + 0x1);
                    if ((short)(t6 + 0x1) == 5) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                    if (0.0f > ((((struct o50_float *)(a4))->v))) {
                        (((struct o50_float *)(a4))->v) = 0.0f;
                    }
                    u13 = (((struct o50_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = u13;
                    (((struct o54_float *)(a4))->v) = u13;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
                }
            } else {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o105_uchar *)(a4))->v) = 0x1;
                (((struct o106_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x23F;
                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t28 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t28 + 0x1);
                if ((short)(t28 + 0x1) == 5) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                }
                u35 = (((struct o50_float *)(a4))->v);
                (((struct o58_float *)(a4))->v) = u35;
                (((struct o54_float *)(a4))->v) = u35;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
            }
            return;
        }
        FUN_0c0c209c(a4);
        if ((*(signed char *)((a4 + 0x9))) != 0) {
            
        } else {
            if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                fx_spawn_28(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
                fx_spawn_28(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
                (((struct o107_uchar *)(a4))->v) = 0x1;
                snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x1F);
            } else {
                (((struct o48_float *)(a4))->v) = -1.0f;
            }
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
        if (((((struct o50_float *)(a4))->v)) > 2.0f) {
            (((struct o50_float *)(a4))->v) = 2.0f;
        }
        u67 = (((struct o50_float *)(a4))->v);
        (((struct o58_float *)(a4))->v) = u67;
        (((struct o54_float *)(a4))->v) = u67;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t73 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t73 - 1);
        if ((short)(t73 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        return;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    (((struct o48_float *)(a4))->v) = -1.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    FUN_0c0c209c(a4);
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        
    } else {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            fx_spawn_28(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            fx_spawn_28(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            (((struct o107_uchar *)(a4))->v) = 0x1;
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x1F);
        } else {
            (((struct o48_float *)(a4))->v) = -1.0f;
        }
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
    if (((((struct o50_float *)(a4))->v)) > 2.0f) {
        (((struct o50_float *)(a4))->v) = 2.0f;
    }
    u99 = (((struct o50_float *)(a4))->v);
    (((struct o58_float *)(a4))->v) = u99;
    (((struct o54_float *)(a4))->v) = u99;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    t105 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t105 - 1);
    if ((short)(t105 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
    }
}

int FUN_0c0c264a(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x3;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x1));
    }
    return 0xF0;
}
