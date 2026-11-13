/* staff roll: fade object and credit line spawner (0c0172e0-0c017a24) */

/* named globals (symbols.txt) */
extern char g_res_font[];
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int staffroll_spawn_line(int a4, int a5);

int staffroll_spawn_line(int a4, int a5)
{
    int stk[9];
    register int t2;
    register int t160;
    register int t6;
    register int t7;
    register int t8;
    register int t14;
    register int t86;
    register float u93;
    register int t77;
    register float u84;
    register int t17;
    register float u18;
    register int t19;
    register int t20;
    register float u29;
    register int t57;
    register int t63;
    register int t69;
    register int t76;
    register int t95;
    register int t97;
    register int t107;
    register float u109;
    register int t177;
    register int t206;
    register int t235;
    register int t247;
    register int t11;

    *(unsigned int *)(((int)stk + 4)) = ((a5 << 2) << 1);
    t2 = *(signed char *)(((*(int *)((0xC17EB9C + ((a5 << 2) << 1)))) + 0x0));
    if (t2 != 125) {
        if (t2 != 126) {
            if (t2 != 127) {
                *(float *)(((int)stk + 0)) = 0.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                t6 = *(int *)((((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x0));
                t160 = 0x18;
                if ((*(signed char *)((t6 + 0x0))) == 0) {
                } else {
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(signed char *)((t6 + 0x0));
                        t6 = (t6 + 0x1);
                        if (t8 == 0) {
                            break;
                        }
                        t7 = (t7 + 0x1);
                    }
                    *(unsigned int *)(((int)stk + 32)) = (*(int *)((((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x0)));
                    if ((int)t7 > (int)0xA) {
                        *(unsigned int *)(((int)stk + 20)) = 0xA;
                        t11 = (t7 - 10);
                    } else {
                        *(unsigned int *)(((int)stk + 20)) = t7;
                        t11 = 0x0;
                    }
                    t14 = obj_create(0x5, 0x1, (*(int *)(((int)stk + 20))));
                    t86 = t14;
                    u93 = 0.0f;
                    if (t14 != 0) {
                        *(unsigned char *)((t14 + 0x0)) = 0x1;
                        *(unsigned char *)((t14 + 0x1)) = 0x1;
                        *(unsigned short *)((t14 + 0x6)) = 0x41F;
                        *(unsigned char *)((t14 + 0x5)) = 0x20;
                        *(unsigned int *)((t14 + 0x10)) = 0xC017240;
                        (((struct o5C_float *)(t14))->v) = 0.0f;
                        (((struct o20_float *)(t14))->v) = -2.0f;
                        (((struct o24_float *)(t14))->v) = -2.0f;
                        (((struct o28_float *)(t14))->v) = -5.0f;
                        (((struct o50_float *)(t14))->v) = 0.0199999996f;
                        (((struct o54_float *)(t14))->v) = 0.0199999996f;
                        (((struct o58_float *)(t14))->v) = 0.0199999996f;
                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                        *(unsigned int *)(((int)stk + 16)) = (0x2E0 + t14);
                        *(unsigned int *)(((int)stk + 12)) = (0x2E0 + t14);
                        *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x4);
                        t77 = 0x58;
                        u84 = 0.0f;
                        if ((int)(*(int *)(((int)stk + 20))) <= 0) {
                        } else {
                            t17 = 0x0;
                            u18 = 0.0f;
                            for (;;) {
                                t19 = *(int *)(((int)stk + 32));
                                *(unsigned int *)(((int)stk + 32)) = (t19 + 0x1);
                                t20 = *(signed char *)((((t19 + 0x1) - 1) + 0x0));
                                if ((signed char)t20 != 32) {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0)) = 0x1;
                                } else {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0)) = 0x0;
                                }
                                u29 = (((struct o18_float *)(((int)stk + 0)))->v);
                                if (((*(float *)((((signed char)t20 << 2) + 0xC117300))) + u29) > ((*(float *)((((signed char)t20 << 2) + 0xC117500))) + u18)) {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((((signed char)t20 << 2) + 0xC117300))) + u29) / 2.0f));
                                } else {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((((signed char)t20 << 2) + 0xC117500))) + u18) / 2.0f));
                                }
                                (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)((((signed char)t20 << 2) + 0xC117300)));
                                u18 = (*(float *)((((signed char)t20 << 2) + 0xC117500)));
                                FUN_0c06233a((*(int *)((((0x2E0 + t14) + t17) + 0x0))), ((int)g_res_font), (*(short *)((((signed char)t20 << 1) + 0xC117200))));
                                *(unsigned short *)(((*(int *)((((0x2E0 + t14) + t17) + 0x0))) + 0x2)) = 0x31F;
                                (((struct o4_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = (*(float *)(((int)stk + 0)));
                                (((struct o8_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 0.0f;
                                (((struct oC_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 0.0f;
                                (((struct o1C_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                (((struct o20_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                (((struct o24_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = 1.0f;
                                t57 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o44_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = (*(float *)((((signed char)(((t57 << 1) + t57) << 2) + 0xC1171BC) + 0x0)));
                                t63 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o48_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = ((((struct o4_float *)(((signed char)(((t63 << 1) + t63) << 2) + 0xC1171BC)))->v));
                                t69 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0));
                                (((struct o4C_float *)((*(int *)((((0x2E0 + t14) + t17) + 0x0)))))->v) = ((((struct o8_float *)(((signed char)(((t69 << 1) + t69) << 2) + 0xC1171BC)))->v));
                                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
                                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
                                t76 = *(int *)(((int)stk + 28));
                                t17 = (t17 + 0x4);
                                if ((int)t76 < (int)(*(int *)(((int)stk + 20)))) continue;
                                break;
                            }
                            t77 = t76;
                            u84 = u18;
                        }
                        t86 = t77;
                        u93 = u84;
                    }
                    t160 = t86;
                    if (t11 == 0) {
                    } else {
                        t95 = obj_create(0x5, 0x1, t11);
                        t160 = t95;
                        if (t95 == 0) {
                        } else {
                            *(unsigned char *)((t95 + 0x0)) = 0x1;
                            *(unsigned char *)((t95 + 0x1)) = 0x1;
                            *(unsigned short *)((t95 + 0x6)) = 0x41F;
                            *(unsigned char *)((t95 + 0x5)) = 0x20;
                            *(unsigned int *)((t95 + 0x10)) = 0xC017240;
                            (((struct o5C_float *)(t95))->v) = 0.0f;
                            (((struct o20_float *)(t95))->v) = -2.0f;
                            (((struct o24_float *)(t95))->v) = -2.0f;
                            (((struct o28_float *)(t95))->v) = -5.0f;
                            (((struct o50_float *)(t95))->v) = 0.0199999996f;
                            (((struct o54_float *)(t95))->v) = 0.0199999996f;
                            (((struct o58_float *)(t95))->v) = 0.0199999996f;
                            *(unsigned int *)(((int)stk + 8)) = 0x0;
                            *(unsigned int *)(((int)stk + 20)) = (0x2E0 + t95);
                            *(unsigned int *)(((int)stk + 16)) = (0x2E0 + t95);
                            *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 4))) + 0xC17EB98) + 0x4);
                            t160 = 0x58;
                            if ((int)t11 <= 0) {
                            } else {
                                t97 = *(int *)(((int)stk + 32));
                                *(unsigned int *)(((int)stk + 32)) = (t97 + 0x1);
                                *(unsigned char *)(((int)stk + 12)) = (*(signed char *)((((t97 + 0x1) - 1) + 0x0)));
                                if ((*(signed char *)(((int)stk + 12))) != 32) {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0)) = 0x1;
                                } else {
                                    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0x0)) = 0x0;
                                }
                                t107 = *(signed char *)(((((int)stk + 0) + 0xC) + 0x0));
                                u109 = (((struct o18_float *)(((int)stk + 0)))->v);
                                if (((*(float *)((0xC117300 + (t107 << 2)))) + u109) > ((*(float *)((0xC117500 + (t107 << 2)))) + u93)) {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((0xC117300 + (t107 << 2)))) + u109) / 2.0f));
                                } else {
                                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (((*(float *)((0xC117500 + (t107 << 2)))) + u93) / 2.0f));
                                }
                                (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)((0xC117300 + (t107 << 2))));
                                *(volatile float *)((0xC117500 + (t107 << 2)));
                                FUN_0c06233a(((((struct o2E0_int *)(t95))->v)), ((int)g_res_font), (*(short *)((((*(signed char *)(((int)stk + 12))) << 1) + 0xC117200))));
                                *(unsigned short *)((((((struct o2E0_int *)(t95))->v)) + 0x2)) = 0x31F;
                                (((struct o4_float *)(((((struct o2E0_int *)(t95))->v))))->v) = (*(float *)(((int)stk + 0)));
                                (((struct o8_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 0.0f;
                                (((struct oC_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 0.0f;
                                (((struct o1C_float *)(((((struct o2E0_int *)(t95))->v))))->v) = 1.0f;
                                t160 = 0x1C;
                            }
                        }
                    }
                }
                t247 = t160;
            } else {
                t177 = obj_create(0x5, 0x1, 0x1);
                t247 = t177;
                if (t177 == 0) {
                } else {
                    *(unsigned char *)((t177 + 0x0)) = 0x1;
                    *(unsigned char *)((t177 + 0x1)) = 0x1;
                    *(unsigned short *)((t177 + 0x6)) = 0x41F;
                    *(unsigned char *)((t177 + 0x5)) = 0x20;
                    *(unsigned int *)((t177 + 0x10)) = 0xC017240;
                    (((struct o5C_float *)(t177))->v) = 0.0f;
                    (((struct o20_float *)(t177))->v) = -1.0f;
                    (((struct o24_float *)(t177))->v) = -2.0f;
                    (((struct o28_float *)(t177))->v) = -5.0f;
                    (((struct o50_float *)(t177))->v) = 0.0078125f;
                    (((struct o54_float *)(t177))->v) = 0.0078125f;
                    (((struct o58_float *)(t177))->v) = 0.0078125f;
                    FUN_0c06233a(((((struct o2E0_int *)(t177))->v)), 0xC6649D0, 0x1C);
                    *(unsigned char *)((((((struct o2E0_int *)(t177))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2E0_int *)(t177))->v)) + 0x2)) = 0x100;
                    (((struct o4_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    (((struct o8_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    (((struct oC_float *)(((((struct o2E0_int *)(t177))->v))))->v) = 0.0f;
                    t247 = 0xC;
                }
            }
        } else {
            t206 = obj_create(0x5, 0x1, 0x1);
            t247 = t206;
            if (t206 == 0) {
            } else {
                *(unsigned char *)((t206 + 0x0)) = 0x1;
                *(unsigned char *)((t206 + 0x1)) = 0x1;
                *(unsigned short *)((t206 + 0x6)) = 0x41F;
                *(unsigned char *)((t206 + 0x5)) = 0x20;
                *(unsigned int *)((t206 + 0x10)) = 0xC017240;
                (((struct o5C_float *)(t206))->v) = 0.0f;
                (((struct o20_float *)(t206))->v) = -0.5f;
                (((struct o24_float *)(t206))->v) = -2.0f;
                (((struct o28_float *)(t206))->v) = -5.0f;
                (((struct o50_float *)(t206))->v) = 0.0078125f;
                (((struct o54_float *)(t206))->v) = 0.0078125f;
                (((struct o58_float *)(t206))->v) = 0.0078125f;
                FUN_0c06233a(((((struct o2E0_int *)(t206))->v)), 0xC6649D0, 0x1D);
                *(unsigned char *)((((((struct o2E0_int *)(t206))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(t206))->v)) + 0x2)) = 0x100;
                (((struct o4_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                (((struct o8_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                (((struct oC_float *)(((((struct o2E0_int *)(t206))->v))))->v) = 0.0f;
                t247 = 0xC;
            }
        }
    } else {
        t235 = obj_create(0x5, 0x1, 0x1);
        t247 = t235;
        if (t235 == 0) {
        } else {
            *(unsigned char *)((t235 + 0x0)) = 0x1;
            *(unsigned char *)((t235 + 0x1)) = 0x1;
            *(unsigned short *)((t235 + 0x6)) = 0x41F;
            *(unsigned char *)((t235 + 0x5)) = 0x20;
            *(unsigned int *)((t235 + 0x10)) = 0xC017240;
            (((struct o5C_float *)(t235))->v) = 0.0f;
            (((struct o20_float *)(t235))->v) = -0.0f;
            (((struct o24_float *)(t235))->v) = -2.0f;
            (((struct o28_float *)(t235))->v) = -5.0f;
            (((struct o50_float *)(t235))->v) = 0.0078125f;
            (((struct o54_float *)(t235))->v) = 0.0078125f;
            (((struct o58_float *)(t235))->v) = 0.0078125f;
            FUN_0c06233a(((((struct o2E0_int *)(t235))->v)), 0xC6649D0, 0x1E);
            *(unsigned char *)((((((struct o2E0_int *)(t235))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t235))->v)) + 0x2)) = 0x100;
            (((struct o4_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            (((struct o8_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            (((struct oC_float *)(((((struct o2E0_int *)(t235))->v))))->v) = 0.0f;
            t247 = 0xC;
        }
    }
    return t247;
}

int staffroll_task_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                } else {
                    if ((*(int *)(((((*(int *)0xC3622B8) << 2) << 1) + 0xC17EB98))) == 0) {
                        t0 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                        t1 = (t0 + 0x1);
                    } else {
                        t0 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                        t1 = 0xEC;
                        if ((short)(t0 - 1) == 0) {
                            t0 = *(int *)0xC3622B8;
                            *(unsigned int *)0xC3622B8 = (t0 + 0x1);
                            staffroll_spawn_line(a4, ((t0 + 0x1) - 1));
                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                            t1 = 0x0;
                        }
                    }
                }
                t0 = t1;
            } else {
                (((struct oEC_ushort *)(a4))->v) = 0x14;
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned int *)0xC3622B8 = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x474;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
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

int staffroll_create(void)
{
    register int t0;

    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC017940;
    }
    return t0;
}
