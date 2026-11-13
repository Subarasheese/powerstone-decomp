/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0588d8-0c058ba4) */

/* named globals (symbols.txt) */
extern char g_res_font[];
struct vec3 { float x, y, z; };
struct spawned {
    char live;
    char pad_01[3];
    char tag;               /* 4 */
    char pad_05[11];
    void (*update)(void);   /* 16 */
    char pad_14[12];
    struct vec3 from;         /* 32 */
    char pad_2c[36];
    struct vec3 pos;          /* 80 */
};
struct spawned *obj_create(int, int, int, int);
void fx_tick_0588d8(void);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

void fx_spawn_0588d8(char tag, struct vec3 *from)
{
    struct vec3 spawn_pos;
    struct spawned *obj;
    spawn_pos = *(struct vec3 *)0xC14BEB4;
    obj = obj_create(6, 1, 2, 0);
    if (obj != 0) {
        obj->live = 1;
        obj->pos = spawn_pos;
        obj->update = fx_tick_0588d8;
        obj->tag = tag;
        obj->from = *from;
    }
}

int fx_tick_058ba4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            t1 = t0;
                            if (t0 != 4) {
                            } else {
                                if ((*(int *)0xC3673F8) == 0) {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0799999982f;
                                } else {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                                }
                                t1 = 0x20;
                            }
                            t0 = t1;
                        } else {
                            t1 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.049999997f);
                            t1 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t1 = (t2 + 0x1);
                            }
                            t0 = t1;
                        }
                        t1 = t0;
                    } else {
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                        t0 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t0 = (t2 + 0x1);
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0xEC;
                    if ((short)(t1 - 1) == 0) {
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
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                t2 = 0xEC;
                if ((short)(t0 - 1) == 0) {
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
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), 0xC4CFA80, (*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0x18))));
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x4)) = *(struct mv3 *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0xC)); }
    *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), 0xC4CFA80, ((*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0x19))) + 0x1));
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E4_int *)(a4))->v)) + 0x4)) = *(struct mv3 *)(((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E4_int *)(a4))->v)) + 0x1C)) = *(struct mv3 *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BEC0) + 0xC)); }
    *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        if ((*(int *)0xC3673F8) == 0) {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0799999982f;
                        } else {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0399999991f;
                        }
                        t1 = 0x20;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.049999997f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.049999997f);
                t0 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t0 = (t2 + 0x1);
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0xEC;
            if ((short)(t1 - 1) == 0) {
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
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
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
