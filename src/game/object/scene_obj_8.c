/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057128-0c057850) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } Vec12;
extern char *obj_create(int, int, int, int);
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
typedef struct { int x, y, z; } S12;

static void setup(char *part, char *row)
{
    *part = 0;
    *(S12 *)(part + 4) = *(S12 *)row;
    *(S12 *)(part + 28) = *(S12 *)(row + 12);
    *(short *)(part + 2) = 0x31F;
    *(float *)(part + 68) = 1.0f;
    *(float *)(part + 72) = 0.0f;
    *(float *)(part + 76) = 0.0f;
}

void fx_spawn_057128(void)
{
    Vec12 tmpl;
    char *obj;
    int i, count, idx;

    tmpl = *(Vec12 *)0xC14B888;
    idx = *(signed char *)0xC7F304F;
    idx = *(signed char *)(0xC7E40C8 + (unsigned short)(idx * 29392));
    count = *(signed char *)(0xC32DE68 + idx);
    if (count > 0) {
        i = 0;
        do {
            obj = obj_create(6, 1, 2, 0);
            if (obj) {
                *obj = 1;
                obj[4] = i;
                *(int *)(obj + 16) = 0xC056E8C;
                *(Vec12 *)(obj + 80) = tmpl;
            }
            i++;
        } while (i < count);
    }
}

int fx_tick_0574d2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            t1 = *(int *)0xC386830;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 == 4) {
                                t2 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                                t3 = 0xEC;
                                if ((short)(t2 - 1) == 0) {
                                    t2 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                    t3 = (t2 + 0x1);
                                }
                                t2 = t3;
                            } else {
                                t3 = t0;
                                if (t0 == 5) {
                                    if (t1 != 0) {
                                        t0 = (((struct o2E0_int *)(a4))->v);
                                        (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.119999997f);
                                    } else {
                                        t0 = (((struct o2E0_int *)(a4))->v);
                                        (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                                    }
                                    t0 = 0x40;
                                    if (!(((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                                        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                                        t4 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                                        t0 = (t4 + 0x1);
                                    }
                                    t3 = t0;
                                }
                                t2 = t3;
                            }
                            t0 = t2;
                        } else {
                            if (t1 != 0) {
                                t2 = (((struct o2E4_int *)(a4))->v);
                                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0599999987f);
                            } else {
                                t2 = (((struct o2E4_int *)(a4))->v);
                                (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.049999997f);
                            }
                            t2 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                (((struct oEC_ushort *)(a4))->v) = ((-((*(signed char *)((a4 + 0x4))) << 2)) + 0x2C);
                                if ((*(int *)0xC386830) != 0) {
                                    (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                                }
                                t3 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                                t2 = (t3 + 0x1);
                            }
                            t0 = t2;
                        }
                        t2 = t0;
                    } else {
                        if (t1 != 0) {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            t1 = t0;
                            u0 = (((((struct o24_float *)(t0))->v)) + 0.0599999987f);
                        } else {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            t1 = t0;
                            u0 = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                        }
                        (((struct o24_float *)(t1))->v) = u0;
                        t0 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                            t0 = (t1 + 0x1);
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                        t1 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                        t2 = (t1 + 0x1);
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = (((*(signed char *)((a4 + 0x4))) << 2) + 0x1);
                    if ((*(int *)0xC386830) != 0) {
                        (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                        if (((((struct oEC_short *)(a4))->v)) == 0) {
                            (((struct oEC_ushort *)(a4))->v) = 0x1;
                        }
                    }
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xEC;
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return obj_destroy(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = *(signed char *)0xC7F2F08;
    if (t0 == 0) {
        t1 = 0xC32DE74;
        t2 = (((((struct oF2_short *)(a4))->v)) << 2);
    } else {
        t1 = 0xC32DE9C;
        t2 = (((((struct oF2_short *)(a4))->v)) << 2);
    }
    t3 = *(int *)((t2 + t1));
    t2 = t1;
    t1 = 0xC7F2F08;
    t4 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x2) {
            break;
        }
        t2 = (*(signed char *)((a4 + 0x4)));
        t5 = t0;
        t6 = ((short)t2 * (short)0x1C);
        t2 = 0x18;
        t4 = 0xC06233A;
        t5 = (t5 << 2);
        t2 = (FUN_0c06233a((*(int *)((((0x2E0 + a4) + t5) + 0x0))), 0xC4CFA80, ((*(signed char *)(((t6 + t3) + t2))) + t0)));
        t1 = 0x2E0;
        t6 = 0x2E0;
        t1 = (t1 + a4);
        t1 = (t1 + t5);
        t4 = (*(int *)((t1 + 0x0)));
        t1 = 0x1C;
        t6 = (t6 + a4);
        t6 = (t6 + t5);
        *(unsigned char *)((t4 + 0x0)) = 0x0;
        t2 = (*(signed char *)((a4 + 0x4)));
        t6 = (*(int *)((t6 + 0x0)));
        t4 = 0xC0E6FE8;
        t6 = (t6 + 0x4);
        t1 = ((short)t2 * (short)t1);
        t1 = (t1 + t3);
        t2 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t1); }
        t2 = (*(signed char *)((a4 + 0x4)));
        t1 = 0x1C;
        t6 = 0x2E0;
        t6 = (t6 + a4);
        t6 = (t6 + t5);
        t6 = (*(int *)((t6 + 0x0)));
        t1 = ((short)t2 * (short)t1);
        t6 = (t6 + 0x1C);
        t1 = (t1 + t3);
        t1 = (t1 + 0xC);
        t2 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t1); }
        t6 = t0 == 0;
        t0 = (t0 + 0x1);
        if (t6) {
            t4 = 0x2E0;
            t2 = 0x71F;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(unsigned short *)((t1 + 0x2)) = t2;
            t2 = 0x40;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x44;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x48;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            t4 = 0x2E0;
            *(float *)((t1 + t2)) = 1.0f;
            t2 = 0x4C;
            t4 = (t4 + a4);
            t4 = (t4 + t5);
            t1 = (*(int *)((t4 + 0x0)));
            *(float *)((t1 + t2)) = 1.0f;
        } else {
            t1 = 0x2E0;
            t2 = 0x11F;
            t1 = (t1 + a4);
            t1 = (t1 + t5);
            t4 = (*(int *)((t1 + 0x0)));
            *(unsigned short *)((t4 + 0x2)) = t2;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    t1 = *(int *)0xC386830;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t2 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
                        t3 = 0xEC;
                        if ((short)(t2 - 1) == 0) {
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t3 = (t2 + 0x1);
                        }
                        t2 = t3;
                    } else {
                        t3 = t0;
                        if (t0 == 5) {
                            if (t1 != 0) {
                                t0 = (((struct o2E0_int *)(a4))->v);
                                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.119999997f);
                            } else {
                                t0 = (((struct o2E0_int *)(a4))->v);
                                (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                            }
                            t0 = 0x40;
                            if (!(((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f)) {
                                (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
                                t4 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t4 + 0x1);
                                t0 = (t4 + 0x1);
                            }
                            t3 = t0;
                        }
                        t2 = t3;
                    }
                    t0 = t2;
                } else {
                    if (t1 != 0) {
                        t2 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.0599999987f);
                    } else {
                        t2 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t2))->v) = (((((struct o24_float *)(t2))->v)) - 0.049999997f);
                    }
                    t2 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        (((struct oEC_ushort *)(a4))->v) = ((-((*(signed char *)((a4 + 0x4))) << 2)) + 0x2C);
                        if ((*(int *)0xC386830) != 0) {
                            (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                        }
                        t3 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t3 + 0x1);
                        t2 = (t3 + 0x1);
                    }
                    t0 = t2;
                }
                t2 = t0;
            } else {
                if (t1 != 0) {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    t1 = t0;
                    u0 = (((((struct o24_float *)(t0))->v)) + 0.0599999987f);
                } else {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    t1 = t0;
                    u0 = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                }
                (((struct o24_float *)(t1))->v) = u0;
                t0 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t0 = (t1 + 0x1);
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                t1 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = (((*(signed char *)((a4 + 0x4))) << 2) + 0x1);
            if ((*(int *)0xC386830) != 0) {
                (((struct oEC_ushort *)(a4))->v) = (int)((float)((((struct oEC_short *)(a4))->v)) / 1.19999993f);
                if (((((struct oEC_short *)(a4))->v)) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                }
            }
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) != 0) {
        } else {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
