/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03cc48-0c03cf50) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_sin_angle16(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);

int FUN_0c03cc48(int a4);

int FUN_0c03cc48(int a4)
{
    int stk[4];
    register int t1;
    register int t4;
    register int t10;
    register float u15;

    *(unsigned int *)(((int)stk + 0)) = ((((struct o2E0_int *)(a4))->v));
    t1 = *(int *)(((0x308 + a4) + 0x8));
    *(unsigned int *)(((0x308 + a4) + 0x8)) = (t1 + 0xE38);
    *(unsigned int *)(((0x308 + a4) + 0xC)) = (t1 + 0xE38);
    *(unsigned int *)(((0x308 + a4) + 0x4)) = 0x0;
    t4 = *(signed char *)((a4 + 0x3));
    mdl_vtx_iter_begin((*(int *)(((*(int *)(((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D8))) + 0x0))), ((((struct o9C_int *)((*(int *)(((int)stk + 0)))))->v)));
    for (;;) {
        t10 = mdl_vtx_iter_next();
        if (t10 != 0) {
            break;
        }
        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
        u15 = (*(float *)(((int)stk + 8)));
        u15 = u15 + 30.0f * (math_sin_angle16((*(int *)(((0x308 + a4) + 0xC)))));
        *(float *)(((int)stk + 8)) = u15;
        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
        if ((*(int *)(((0x308 + a4) + 0x4))) != 0) {
            *(unsigned int *)(((0x308 + a4) + 0xC)) = ((*(int *)(((0x308 + a4) + 0xC))) + 0x2AAA);
        }
        *(unsigned int *)(((0x308 + a4) + 0x4)) = ((-(*(int *)(((0x308 + a4) + 0x4)))) + 0x1);
    }
    return t10;
}

int fx_tick_03cb28(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(int *)((a4 + 0x1C));
    if (t0 == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        FUN_0c03cc48(a4);
        t1 = *(signed char *)((a4 + 0x4));
        if ((t1 != 0) && (t1 != 1)) {
            if (t1 != 2) {
                t2 = t1;
                if (t1 == 3) {
                    FUN_0c0e6fe8();
                    t1 = *(signed char *)((t0 + 0x3));
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 35.0f);
                    t1 = *(signed char *)((t0 + 0x71BA));
                    t3 = t1;
                    if (t1 != 21) {
                        t1 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                        t3 = (t1 + 0x1);
                    }
                    t2 = t3;
                }
                t1 = t2;
            } else {
                FUN_0c0e6fe8();
                t2 = *(signed char *)((t0 + 0x3));
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 28.0f);
                u0 = ((((struct o20_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x30))) + 0x4000)));
                (((struct o20_float *)(a4))->v) = u0;
                u0 = ((((struct o28_float *)(a4))->v));
                u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x30))) + 0x4000)));
                (((struct o28_float *)(a4))->v) = u0;
                t2 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                if ((short)(t2 - 1) != 0) {
                    t2 = *(signed char *)((t0 + 0x71BA));
                    t3 = t2;
                    if (t2 != 22) {
                        t2 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                        t3 = (t2 + 0x1);
                    }
                    t2 = t3;
                } else {
                    t3 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                    t2 = (t3 + 0x1);
                }
                t1 = t2;
            }
            t2 = t1;
        } else {
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            if ((*(signed char *)((t0 + 0x71BA))) != 11) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t3 = (t1 + 0x1);
            } else {
                t1 = *(signed char *)((t0 + 0xA));
                t3 = t1;
                if ((int)t1 < (int)0x2) {
                } else {
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
            }
            t2 = t3;
        }
        return t2;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 0) && (t1 != 1)) {
        if (t1 != 2) {
            if (t1 != 3) {
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x258;
            }
        } else {
            (((struct oEC_ushort *)(a4))->v) = 0x46;
        }
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    FUN_0c03cc48(a4);
    t1 = *(signed char *)((a4 + 0x4));
    if ((t1 != 0) && (t1 != 1)) {
        if (t1 != 2) {
            t2 = t1;
            if (t1 == 3) {
                FUN_0c0e6fe8();
                t1 = *(signed char *)((t0 + 0x3));
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 35.0f);
                t1 = *(signed char *)((t0 + 0x71BA));
                t3 = t1;
                if (t1 != 21) {
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t3 = (t1 + 0x1);
                }
                t2 = t3;
            }
            t1 = t2;
        } else {
            FUN_0c0e6fe8();
            t2 = *(signed char *)((t0 + 0x3));
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 28.0f);
            u0 = ((((struct o20_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_sin_angle16(((*(int *)((a4 + 0x30))) + 0x4000)));
            (((struct o20_float *)(a4))->v) = u0;
            u0 = ((((struct o28_float *)(a4))->v));
            u0 = u0 + 30.0f * (math_cos_angle16(((*(int *)((a4 + 0x30))) + 0x4000)));
            (((struct o28_float *)(a4))->v) = u0;
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
            if ((short)(t2 - 1) != 0) {
                t2 = *(signed char *)((t0 + 0x71BA));
                t3 = t2;
                if (t2 != 22) {
                    t2 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                    t3 = (t2 + 0x1);
                }
                t2 = t3;
            } else {
                t3 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t3 + 0x1);
                t2 = (t3 + 0x1);
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if ((*(signed char *)((t0 + 0x71BA))) != 11) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            t3 = (t1 + 0x1);
        } else {
            t1 = *(signed char *)((t0 + 0xA));
            t0 = t1;
            if ((int)t1 < (int)0x2) {
            } else {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            t3 = t0;
        }
        t2 = t3;
    }
    return t2;
}
