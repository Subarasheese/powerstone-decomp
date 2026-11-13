/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c033c-0c0c07bc) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int pl_tick_hitstop(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_math_mat_get_translate(int, int);

int FUN_0c0c0532(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = FUN_0c0555dc();
    if (t1 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 10) {
        if (t1 != 11) {
            if (t1 != 12) {
                if (t1 == 13) {
                    u0 = math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o38_float *)(a4))->v) = (u1 * 80.0f);
                    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))));
                    (((struct o40_float *)(a4))->v) = (u1 * 80.0f);
                    (((struct o3C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 80.0f));
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
                    t1 = (((struct oEE_short *)(a4))->v);
                    (((struct oEE_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x2D8;
                    if (((short)(t1 - 1) != 0) && (t0 = *(signed char *)((a4 + 0x2D8)), t0 == 0)) {
                    } else {
                        t0 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                        t2 = (t0 + 0x1);
                    }
                    return t2;
                }
                return obj_destroy(a4);
            }
            t0 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
            t1 = (signed char)t0;
            if ((signed char)t0 != 0) {
            } else {
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xF0;
                if ((short)(t0 - 1) != 0) {
                } else {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x78;
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct o118_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x2C)));
                    *(unsigned int *)((a4 + 0x30)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x34)));
                    if ((*(signed char *)((a4 + 0x9))) == 0) {
                        t0 = *(signed char *)((a4 + 0x3));
                        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), a4 + 0x20);
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x31C7);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 0x4000);
                    }
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = 0x2E4;
                }
                t1 = t2;
            }
            return t1;
        }
        t0 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
        } else {
            (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0666666627f);
            t0 = (((struct oEE_short *)(a4))->v);
            (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
            t1 = 0xF0;
        }
        return t1;
    }
    t0 = pl_tick_hitstop((*(int *)((a4 + 0x1C))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.049999997f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.049999997f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
        t1 = 0xF0;
    }
    return t1;
}
