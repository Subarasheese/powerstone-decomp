/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03f004-0c03f2c8) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);

int fx_tick_03ef18(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t2 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t2 + 0x71BA))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x1;
    }
    t3 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0), a4 + 0x20);
    u0 = math_sin_angle16((*(int *)((t2 + 0x30))));
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u1 = (((struct o8_float *)(((signed char)(((t3 << 1) + t3) << 2) + 0xC149958)))->v);
    u2 = (((struct o20_float *)(a4))->v);
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u3 = ((math_cos_angle16((*(int *)((t2 + 0x30))))) * (*(float *)((((signed char)(((t3 << 1) + t3) << 2) + 0xC149958) + 0x0))));
    u3 = u3 + u1 * u0;
    (((struct o20_float *)(a4))->v) = (u2 + u3);
    u0 = math_cos_angle16((*(int *)((t2 + 0x30))));
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u1 = (((struct o8_float *)(((signed char)(((t3 << 1) + t3) << 2) + 0xC149958)))->v);
    t3 = *(signed char *)(((0xEE + a4) + 0x0));
    u2 = (((struct o28_float *)(a4))->v);
    u3 = ((math_sin_angle16((*(int *)((t2 + 0x30))))) * (*(float *)((((signed char)(((t3 << 1) + t3) << 2) + 0xC149958) + 0x0))));
    (((struct o28_float *)(a4))->v) = (u2 + (((u0 * u1)) - u3));
    t2 = *(signed char *)(((0xEE + a4) + 0x0));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)((0xC149958 + (signed char)(((t2 << 1) + t2) << 2))))->v)));
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 == 1) {
            return obj_destroy(a4);
        }
        return t2;
    }
    t2 = (((struct o2E0_int *)(a4))->v);
    if (((int)(*(signed char *)((a4 + 0x9))) <= (int)0x2) && (t0 = *(int *)((a4 + 0x1C)), t1 = (((struct oEE_short *)(t0))->v), t1 != 0)) {
        *(unsigned char *)((a4 + 0x9)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                    (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
                    u0 = (((struct o1C_float *)(t2))->v);
                    u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                    (((struct o1C_float *)(t2))->v) = (u0 - u1);
                    t3 = 0x1C;
                    if (!((u0 - u1) > 0.0f)) {
                        t4 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                        *(unsigned char *)((t2 + 0x0)) = 0x0;
                        t3 = (t4 + 0x1);
                    }
                    t1 = t3;
                }
                t3 = t1;
            } else {
                (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
                u0 = (((struct o1C_float *)(t2))->v);
                u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
                (((struct o1C_float *)(t2))->v) = (u0 - u1);
                t1 = 0xC1499B8;
                if (!((u0 - u1) > (*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499B8))))) {
                    t4 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t4 - 1);
                    t1 = (t4 - 1);
                }
                t3 = t1;
            }
            t1 = t3;
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) + (*(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0))));
            (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) + (*(float *)((((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499D0) + 0x0))));
            u0 = (((struct o1C_float *)(t2))->v);
            u1 = *(float *)(((0xC1499D0 + (((((struct oEE_short *)(a4))->v)) << 2)) + 0x0));
            (((struct o1C_float *)(t2))->v) = (u0 + u1);
            t3 = 0xC1499A0;
            if (!((*(float *)(((((((struct oEE_short *)(a4))->v)) << 2) + 0xC1499A0))) > (u0 + u1))) {
                t4 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t4 + 0x1);
                t3 = (t4 + 0x1);
            }
            t1 = t3;
        }
        t3 = t1;
    } else {
        t1 = *(signed char *)(((t2 + 0x28) + 0x0));
        (((struct o28_uchar *)(t2))->v) = (t1 - 1);
        t4 = t0;
        if ((int)(unsigned char)(t1 - 1) > 0) {
        } else {
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            t4 = (t0 + 0x1);
        }
        t3 = t4;
    }
    return t3;
}
