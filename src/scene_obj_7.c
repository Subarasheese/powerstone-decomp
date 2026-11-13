/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c056e2c-0c057128) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } Vec3i;
typedef struct { char used; char pad[3]; char idx; char pad1[11]; void (*fn)(void); char pad2[0x50 - 20]; Vec3i rec; } Slot;
extern Slot *obj_create(int, int, int, int);
extern void fx_tick_056e2c(void);
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

void fx_spawn_056e2c(void)
{
    Vec3i rec_copy;
    Slot *slot;
    int idx;

    rec_copy = *(Vec3i *)0xC14B17C;
    for (idx = 0; idx < 4; idx++) {
        slot = obj_create(6, 1, 2, 0);
        if (slot != 0) {
            slot->used = 1;
            slot->idx = idx;
            slot->fn = fx_tick_056e2c;
            slot->rec = rec_copy;
        }
    }
}

int fx_tick_057128(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 != 4) {
                                t1 = t0;
                                if (t0 != 5) {
                                } else {
                                    t0 = (((struct o2E0_int *)(a4))->v);
                                    (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                                    t0 = 0x40;
                                    if (((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) != 0.0f) {
                                        t2 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
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
                                    t1 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                                    t2 = (t1 + 0x1);
                                }
                                t0 = t2;
                            }
                            t1 = t0;
                        } else {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
                            t0 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t2 = *(signed char *)((a4 + 0x4));
                                (((struct oEC_ushort *)(a4))->v) = ((-(((t2 << 2) + t2) << 1)) + 0x64);
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t0 = (t2 + 0x1);
                            }
                            t1 = t0;
                        }
                        t0 = t1;
                    } else {
                        t1 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.049999997f);
                        t1 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t1 = (t2 + 0x1);
                        }
                        t0 = t1;
                    }
                    t1 = t0;
                } else {
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
                t0 = t1;
            } else {
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    t1 = *(signed char *)((a4 + 0x4));
                    (((struct oEC_ushort *)(a4))->v) = ((((t1 << 2) + t1) << 1) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
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
            return t0;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = *(int *)((((*(signed char *)(((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7E40C8))) << 2) + 0xC32DE74));
    t1 = 0xC32DE74;
    t2 = 0x72D0;
    t3 = 0xC7F304F;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)0x2) {
            break;
        }
        t1 = (*(signed char *)((a4 + 0x4)));
        t5 = t4;
        t6 = ((short)t1 * (short)0x1C);
        t1 = 0x18;
        t3 = 0xC06233A;
        t5 = (t5 << 2);
        t1 = (FUN_0c06233a((*(int *)((((0x2E0 + a4) + t5) + 0x0))), ((int)g_res_font), ((*(signed char *)(((t6 + t0) + t1))) + t4)));
        t2 = 0x2E0;
        t2 = (t2 + a4);
        t2 = (t2 + t5);
        t3 = (*(int *)((t2 + 0x0)));
        t2 = 0x1C;
        *(unsigned char *)((t3 + 0x0)) = 0x0;
        t1 = (*(signed char *)((a4 + 0x4)));
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t3 = 0xC0E6FE8;
        t2 = ((short)t1 * (short)t2);
        t2 = (t2 + t0);
        t1 = 0xC;
        t1 = (FUN_0c0e6fe8());
        t1 = (*(signed char *)((a4 + 0x4)));
        t2 = 0x1C;
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t2 = ((short)t1 * (short)t2);
        t2 = (t2 + t0);
        t2 = (t2 + 0xC);
        t1 = 0xC;
        t1 = (FUN_0c0e6fe8());
        t6 = t4 == 0;
        t4 = (t4 + 0x1);
        if (t6) {
            t3 = 0x2E0;
            t1 = 0x71F;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(unsigned short *)((t2 + 0x2)) = t1;
            t1 = 0x40;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x44;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x48;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x4C;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            *(float *)((t2 + t1)) = 0.0f;
        } else {
            t2 = 0x2E0;
            t1 = 0x11F;
            t2 = (t2 + a4);
            t2 = (t2 + t5);
            t3 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t3 + 0x2)) = t1;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t1 = t0;
                        if (t0 != 5) {
                        } else {
                            t0 = (((struct o2E0_int *)(a4))->v);
                            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                            t0 = 0x40;
                            if (((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) != 0.0f) {
                                t2 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
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
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        t0 = t2;
                    }
                    t1 = t0;
                } else {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
                    t0 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t2 = *(signed char *)((a4 + 0x4));
                        (((struct oEC_ushort *)(a4))->v) = ((-(((t2 << 2) + t2) << 1)) + 0x64);
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t0 = (t2 + 0x1);
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                t1 = (((struct o2E4_int *)(a4))->v);
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.049999997f);
                t1 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
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
        t0 = t1;
    } else {
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = *(signed char *)((a4 + 0x4));
            (((struct oEC_ushort *)(a4))->v) = ((((t1 << 2) + t1) << 1) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
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
    return t0;
}
