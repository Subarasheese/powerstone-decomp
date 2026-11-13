/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4010-0c0b4494) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_sin_angle16(int);
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int, int, int);

int stage_gimmick_31_update(int a4)
{
    int stk[4];
    register int t0;
    register int t4;
    register int t21;
    register int t6;
    register int t8;
    register float t13;
    register float u15;
    register int t29;
    register int t31;
    register int t74;
    register int t39;
    register int t56;
    register int t41;
    register int t43;
    register float t48;
    register float u50;
    register int t64;
    register int t66;
    register int t84;
    register int t101;
    register int t86;
    register int t88;
    register float t93;
    register float u95;
    register int t109;
    register int t111;
    register int t124;
    register int t139;
    register int t126;
    register int t128;
    register float t133;
    register int t147;
    register int t149;
    register int t157;
    register int t119;
    register int t79;
    register int t34;
    register int t69;
    register int t114;
    register int t152;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t4 = *(signed char *)((a4 + 0x8));
                if (t4 != 0) {
                    t21 = t4;
                    if (t4 != 1) {
                    } else {
                        (((struct oEE_ushort *)(a4))->v) = 0x0;
                        t6 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                        *(unsigned int *)(((int)stk + 0)) = t6;
                        mdl_vtx_iter_begin(t6, t6);
                        for (;;) {
                            t8 = mdl_vtx_iter_next();
                            if (t8 != 0) {
                                break;
                            }
                            mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                            t13 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                            u15 = ((*(float *)(((int)stk + 8))) * (t13 + 1.0f));
                            *(float *)(((int)stk + 4)) = (u15 * 0.00999999978f);
                            mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                        }
                        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                        if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                            (((struct oEC_ushort *)(a4))->v) = 0x0;
                        }
                        t21 = 0xEC;
                    }
                    t34 = t21;
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                    t29 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                    *(unsigned int *)(((int)stk + 0)) = t29;
                    mdl_vtx_iter_begin(t29, t29);
                    for (;;) {
                        t31 = mdl_vtx_iter_next();
                        if (t31 != 0) {
                            break;
                        }
                        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                        *(float *)(((int)stk + 4)) = 0.0f;
                        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                    }
                    t34 = t31;
                }
                t79 = t34;
            } else {
                t74 = t0;
                if (t0 == 3) {
                    t39 = *(signed char *)((a4 + 0x8));
                    if (t39 != 0) {
                        t56 = t39;
                        if (t39 != 1) {
                        } else {
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            t41 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                            *(unsigned int *)(((int)stk + 0)) = t41;
                            mdl_vtx_iter_begin(t41, t41);
                            for (;;) {
                                t43 = mdl_vtx_iter_next();
                                if (t43 != 0) {
                                    break;
                                }
                                mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                                t48 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                                u50 = ((*(float *)(((int)stk + 4))) * t48);
                                *(float *)(((int)stk + 12)) = (u50 * 0.0299999993f);
                                mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                            }
                            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5);
                            if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                                (((struct oEC_ushort *)(a4))->v) = 0x0;
                            }
                            t56 = 0xEC;
                        }
                        t69 = t56;
                    } else {
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                        t64 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                        *(unsigned int *)(((int)stk + 0)) = t64;
                        mdl_vtx_iter_begin(t64, t64);
                        for (;;) {
                            t66 = mdl_vtx_iter_next();
                            if (t66 != 0) {
                                break;
                            }
                            mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                            *(float *)(((int)stk + 12)) = 0.0f;
                            mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                        }
                        t69 = t66;
                    }
                    t74 = t69;
                }
                t79 = t74;
            }
            t119 = t79;
        } else {
            t84 = *(signed char *)((a4 + 0x8));
            if (t84 != 0) {
                t101 = t84;
                if (t84 != 1) {
                } else {
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    t86 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                    *(unsigned int *)(((int)stk + 0)) = t86;
                    mdl_vtx_iter_begin(t86, t86);
                    for (;;) {
                        t88 = mdl_vtx_iter_next();
                        if (t88 != 0) {
                            break;
                        }
                        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                        t93 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                        u95 = ((*(float *)(((int)stk + 4))) * t93);
                        *(float *)(((int)stk + 12)) = (u95 * 0.049999997f);
                        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                    }
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1E);
                    if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                        (((struct oEC_ushort *)(a4))->v) = 0x0;
                    }
                    t101 = 0xEC;
                }
                t114 = t101;
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x0;
                t109 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                *(unsigned int *)(((int)stk + 0)) = t109;
                mdl_vtx_iter_begin(t109, t109);
                for (;;) {
                    t111 = mdl_vtx_iter_next();
                    if (t111 != 0) {
                        break;
                    }
                    mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                    *(float *)(((int)stk + 12)) = 0.0f;
                    mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                }
                t114 = t111;
            }
            t119 = t114;
        }
        t157 = t119;
    } else {
        t124 = *(signed char *)((a4 + 0x8));
        if (t124 != 0) {
            t139 = t124;
            if (t124 != 1) {
            } else {
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                t126 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
                *(unsigned int *)(((int)stk + 0)) = t126;
                mdl_vtx_iter_begin(t126, t126);
                for (;;) {
                    t128 = mdl_vtx_iter_next();
                    if (t128 != 0) {
                        break;
                    }
                    mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                    t133 = math_sin_angle16(((int)(((((float)(((((struct oEC_short *)(a4))->v)) + ((((struct oEE_short *)(a4))->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(float *)(((int)stk + 8)) = (t133 * 25.0f);
                    mdl_vtx_set_pos((((int)stk + 0) + 0x4));
                    (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1E);
                }
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x2);
                if ((int)((((struct oEC_short *)(a4))->v)) >= (int)0x168) {
                    (((struct oEC_ushort *)(a4))->v) = 0x0;
                }
                t139 = 0xEC;
            }
            t152 = t139;
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            t147 = (((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v);
            *(unsigned int *)(((int)stk + 0)) = t147;
            mdl_vtx_iter_begin(t147, t147);
            for (;;) {
                t149 = mdl_vtx_iter_next();
                if (t149 != 0) {
                    break;
                }
                mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                *(float *)(((int)stk + 8)) = 0.0f;
                mdl_vtx_set_pos((((int)stk + 0) + 0x4));
            }
            t152 = t149;
        }
        t157 = t152;
    }
    return t157;
}

int stage_gimmick_31_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xC)) = (*(signed char *)((a4 + 0x1)));
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B4010;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + (((t2 << 1) + t2) << 2))); }
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + (((t2 << 1) + t2) << 2))); }
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}
