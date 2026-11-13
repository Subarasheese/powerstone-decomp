/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c038418-0c038640) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_0387ec(int);
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_sin_angle16(int);
int _modls(void);

int fx_tick_0382a8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = FUN_0c0555dc();
    if (t1 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x6;
    }
    t1 = *(int *)((a4 + 0x1C));
    if (((int)(*(signed char *)((t1 + 0xB))) <= (int)0x2) && (t0 = *(signed char *)((t1 + 0x71BA)), t0 == 11)) {
    } else {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x3);
                        t1 = (((struct o2E0_int *)(a4))->v);
                        u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        (((struct o40_float *)(t1))->v) = (((u0 + 1.0f) / 2.0f) * 1.0f);
                        t1 = (((struct o2E4_int *)(a4))->v);
                        u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                        (((struct o40_float *)(t1))->v) = (((u0 + 1.0f) / 2.0f) * 1.0f);
                        t1 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x168);
                        t2 = t1;
                        if (t1 == 0x10E) {
                            t1 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        return t2;
                    }
                    if (t0 == 5) {
                        return obj_destroy(a4);
                    }
                    if (t0 == 6) {
                        return obj_destroy(a4);
                    }
                    return t0;
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x3);
                t0 = (((struct o2E0_int *)(a4))->v);
                u0 = (((math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f))) + 1.0f) / 2.0f);
                u1 = 0.299999982f;
                u1 = u1 + 0.699999988f * u0;
                (((struct o40_float *)(t0))->v) = u1;
                t0 = (int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x168);
                t1 = t0;
                if (t0 == 90) {
                    t0 = 0xEE;
                    if (((((struct oEE_short *)(a4))->v)) != 0) {
                        t2 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                        t0 = (t2 + 0x1);
                    }
                    t1 = t0;
                }
                return t1;
            }
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x3);
            t0 = (((struct o2E0_int *)(a4))->v);
            u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
            (((struct o40_float *)(t0))->v) = (((u0 + 1.0f) / 2.0f) * 1.0f);
            t0 = (((struct o2E4_int *)(a4))->v);
            u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
            (((struct o40_float *)(t0))->v) = (((u0 + 1.0f) / 2.0f) * 1.0f);
            t0 = 0xEC;
            if (((((struct oEC_short *)(a4))->v)) == 0x1C2) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) != 0) {
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x10E;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    fx_spawn_0387ec(a4);
    (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o40_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
