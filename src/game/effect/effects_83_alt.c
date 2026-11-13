/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03fd08-0c040260) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_aim_at_target(int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06231c(int, int, int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(int, float);

int fx_tick_03fd08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x71BA))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x9;
    }
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    t1 = (((struct o2E0_int *)(a4))->v);
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    if (t2 == 4) {
                        fx_aim_at_target(a4, t0);
                        t3 = *(signed char *)((t0 + 0x71A5));
                        t4 = (unsigned char)t3;
                        if ((unsigned char)t3 != 99) {
                            t3 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                            (((struct o28_ushort *)(t1))->v) = 0x1000;
                            t4 = (t3 + 0x1);
                        }
                        return t4;
                    }
                    if (t2 == 5) {
                        fx_aim_at_target(a4, t0);
                        u0 = math_sin_angle16(((((struct o28_short *)(t1))->v)));
                        (((struct o20_float *)(t1))->v) = (u0 * 1.0f);
                        (((struct o1C_float *)(t1))->v) = (u0 * 1.0f);
                        (((struct o28_ushort *)(t1))->v) = ((((((struct o28_short *)(t1))->v)) + 0x1000) & 0x3FFF);
                        t3 = 0xEE;
                        if (((((struct oEE_short *)(t0))->v)) != 0) {
                            *(unsigned char *)((a4 + 0x8)) = 0x8;
                            (((struct o2C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) / 10.0f);
                            t3 = 0x2C;
                        }
                        return t3;
                    }
                    if (t2 == 8) {
                        fx_aim_at_target(a4, t0);
                        t1 = (((struct o2E0_int *)(a4))->v);
                        (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - ((((struct o2C_float *)(t1))->v)));
                        u0 = (((struct o20_float *)(t1))->v);
                        u1 = (((struct o2C_float *)(t1))->v);
                        (((struct o20_float *)(t1))->v) = (u0 - u1);
                        t1 = 0x20;
                        if (!((u0 - u1) > 0.0f)) {
                            t3 = *(signed char *)((a4 + 0x8));
                            *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                            t1 = (t3 + 0x1);
                        }
                        return t1;
                    }
                    if (t2 == 9) {
                        return obj_destroy(a4, a5, a6, a7);
                    }
                    return t2;
                }
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.133333325f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 - 0.133333325f);
                if ((u0 - 0.133333325f) > 0.0f) {
                    return 0x20;
                }
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                (((struct o118_uint *)(a4))->v) = 0x0;
                t2 = *(signed char *)((a4 + 0x3));
                FUN_0c06231c(t1, ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0xD);
                (((struct o28_float *)(a4))->v) = 130.0f;
                *(unsigned short *)((t1 + 0x2)) = 0x10;
                (((struct o20_float *)(t1))->v) = 0.5f;
                (((struct o1C_float *)(t1))->v) = 0.5f;
                (((struct o24_float *)(t1))->v) = 1.0f;
                return fx_aim_at_target(a4, t0);
            }
            t0 = 0xEE;
            if (((((struct oEE_short *)(a4))->v)) != 0) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oF2_ushort *)(a4))->v) = 0x1;
                t0 = 0xF2;
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x3C;
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    t1 = t0;
    u0 = 0.0333333313f;
    if (1.0f > ((((struct o44_float *)(t0))->v))) {
        (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) + 0.0333333313f);
        (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) + 0.0333333313f);
        u1 = (((struct o4C_float *)(t0))->v);
        (((struct o4C_float *)(t0))->v) = (u1 + 0.0333333313f);
        if (!(1.0f > (u1 + 0.0333333313f))) {
            FUN_0c0e6fe8(t0, 0.0333333313f);
        } else {
            t2 = t0;
            u1 = 0.0333333313f;
        }
        t1 = t2;
        u0 = u1;
    }
    if (2.0f > ((((struct o1C_float *)(t1))->v))) {
        (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + u0);
        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + u0);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
