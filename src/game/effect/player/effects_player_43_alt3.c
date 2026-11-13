/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c209c-0c0c2a20) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
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
int FUN_0c0c264a(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);

void fx_update_28(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        obj_destroy(a4);
    return;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c0c264a(a4);
                t0 = *(signed char *)((a4 + 0x9));
                if (t0 != 0) {
                    if (t0 != 1) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        *(unsigned char *)((a4 + 0x9)) = 0x0;
                    } else {
                        t0 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                        if ((short)(t0 + 0x1) == 5) {
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        }
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                        if (0.0f > ((((struct o50_float *)(a4))->v))) {
                            (((struct o50_float *)(a4))->v) = 0.0f;
                        }
                        u0 = (((struct o50_float *)(a4))->v);
                        (((struct o58_float *)(a4))->v) = u0;
                        (((struct o54_float *)(a4))->v) = u0;
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
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
                    if ((short)(t0 + 0x1) == 5) {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    }
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.199999988f);
                    if (0.0f > ((((struct o50_float *)(a4))->v))) {
                        (((struct o50_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct o50_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = u0;
                    (((struct o54_float *)(a4))->v) = u0;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
                }
                return;
            }
            obj_destroy(a4);
    return;
        }
        FUN_0c0c264a(a4);
        if ((*(signed char *)((a4 + 0x9))) != 0) {
            
        } else {
            if (((((struct o274_float *)(a4))->v)) > 0.0f) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                (((struct o107_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o48_float *)(a4))->v) = -1.0f;
            }
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
        if (((((struct o50_float *)(a4))->v)) > 2.0f) {
            (((struct o50_float *)(a4))->v) = 2.0f;
        }
        u0 = (((struct o50_float *)(a4))->v);
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        return;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    (((struct o48_float *)(a4))->v) = -1.0f;
    (((struct o3C_float *)(a4))->v) = 20.0f;
    t0 = *(int *)((a4 + 0x30));
    t1 = 0xFFFFC000;
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        t1 = 0x4000;
    }
    (((struct o38_float *)(a4))->v) = ((math_sin_angle16((t1 + t0))) * 5.0f);
    t0 = *(int *)((a4 + 0x30));
    t1 = 0xFFFFC000;
    if ((*(signed char *)((a4 + 0x4))) != 0) {
        t1 = 0x4000;
    }
    (((struct o40_float *)(a4))->v) = ((math_cos_angle16((t1 + t0))) * 5.0f);
    FUN_0c0c264a(a4);
    if ((*(signed char *)((a4 + 0x9))) != 0) {
        
    } else {
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o38_float *)(a4))->v) = 0.0f;
            (((struct o40_float *)(a4))->v) = 0.0f;
            (((struct o3C_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o107_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o48_float *)(a4))->v) = -1.0f;
        }
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
    if (((((struct o50_float *)(a4))->v)) > 2.0f) {
        (((struct o50_float *)(a4))->v) = 2.0f;
    }
    u0 = (((struct o50_float *)(a4))->v);
    (((struct o58_float *)(a4))->v) = u0;
    (((struct o54_float *)(a4))->v) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((a4 + 0x50)); }
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
}
