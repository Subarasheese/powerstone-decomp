/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0318e0-0c03202c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int);
float math_sin_angle16(int);
int _quick_odd_mvn(int);

void fx_tick_0318e0(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x37);
                u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
                if ((int)((((struct oEE_short *)(a4))->v)) > (int)0x1E) {
                    u1 = (((u0 + 1.0f) / 2.0f) * 0.199999988f);
                    (((struct o58_float *)(a4))->v) = (u1 + 1.0f);
                    (((struct o50_float *)(a4))->v) = (u1 + 1.0f);
                    u1 = (((((u0 + 1.0f) / 2.0f) * 0.799999952f)) + 1.0f);
                } else {
                    u2 = (((u0 + 1.0f) / 2.0f) * 0.199999988f);
                    (((struct o58_float *)(a4))->v) = (u2 + 0.5f);
                    (((struct o50_float *)(a4))->v) = (u2 + 0.5f);
                    u1 = (((((u0 + 1.0f) / 2.0f) * 0.799999952f)) + 0.799999952f);
                }
                (((struct o54_float *)(a4))->v) = u1;
                *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x4321);
                t3 = (((struct oEE_short *)(a4))->v);
                (((struct oEE_ushort *)(a4))->v) = (t3 - 1);
                if ((short)(t3 - 1) != 0) {
                    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 5) {
                        *(unsigned char *)((a4 + 0x8)) = 0x5;
                    }
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0x5;
                }
                return;
            }
            if (t2 == 3) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.099999994f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.099999994f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.099999994f);
                t3 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
                if (((int)(short)(t3 - 1) > 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = 0x5;
                }
                return;
            }
            if (t2 == 4) {
                obj_destroy(a4);
    return;
            }
            if (t2 == 5) {
                obj_destroy(a4);
    return;
            }
            if (t2 == 10) {
                if (((((struct o71C8_int *)((*(int *)((a4 + 0x1C)))))->v)) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((((((struct o71C8_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x20)); }
                } else {
                    (((struct o28_float *)(a4))->v) = 0.0f;
                    (((struct o24_float *)(a4))->v) = 0.0f;
                    (((struct o20_float *)(a4))->v) = 0.0f;
                }
            }
            return;
        }
        t0 = 0xC031F50;
        t1 = (0x2E0 + a4);
        t2 = (0x2E0 + a4);
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)0x6) {
                break;
            }
            t0 = 0xEC;
            t4 = (*(short *)((a4 + t0)));
            if ((int)t4 < (int)0x1E) {
                t4 = (*(int *)((t2 + 0x0)));
                t0 = 0x20;
                u0 = (*(float *)((t4 + t0)));
                u0 = (u0 + 0.0333333313f);
                *(float *)((t4 + t0)) = u0;
            } else {
                if ((int)t4 > (int)0x64) {
                    t4 = (*(int *)((t1 + 0x0)));
                    t0 = 0x20;
                    u0 = (*(float *)((t4 + t0)));
                    u0 = (u0 - 0.049999997f);
                    *(float *)((t4 + t0)) = u0;
                }
            }
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            t3 = (t3 + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)((t0 + 0x1) - 1) > (int)0x78) {
            *(unsigned char *)((a4 + 0x8)) = 0x5;
        } else {
            if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) == 11) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = 0x5;
            }
        }
        return;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x37);
    u0 = math_sin_angle16((int)(((float)((((struct oEC_short *)(a4))->v)) * 65536.0f) / 360.0f));
    u1 = 0.799999952f;
    u1 = u1 + (((u0 + 1.0f) / 2.0f)) * 0.199999988f;
    (((struct o58_float *)(a4))->v) = u1;
    (((struct o50_float *)(a4))->v) = u1;
    u1 = 0.799999952f;
    u1 = u1 + (((u0 + 1.0f) / 2.0f)) * 0.799999952f;
    (((struct o54_float *)(a4))->v) = u1;
    *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x4321);
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x5;
    }
}
