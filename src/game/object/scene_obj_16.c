/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c058ba4-0c058ef4) */

/* named globals (symbols.txt) */
extern char g_res_font[];
typedef struct { int x, y, z; } Vec12;
extern char *obj_create(int, int, int, int);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
typedef struct { int x, y, z; } vec3i;

void fx_spawn_058ba4(void)
{
    Vec12 tmpl;
    char *obj;
    int i;

    tmpl = *(Vec12 *)0xC14BFBC;
    for (i = 0; i < 9; i++) {
        obj = obj_create(6, 1, 2, 0);
        if (obj) {
            *obj = 1;
            obj[4] = i;
            *(int *)(obj + 16) = 0xC058930;
            *(Vec12 *)(obj + 80) = tmpl;
        }
    }
}

int fx_tick_058e62(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

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
                                u0 = (((struct o8_float *)0xC058ECC)->v);
                                if ((*(int *)0xC3673F8) == 1) {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                } else {
                                    (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                                    (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o10_float *)0xC058ECC)->v));
                                }
                                t1 = 0x20;
                            }
                            t0 = t1;
                        } else {
                            t1 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0199999996f);
                            t1 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t1 = (t2 + 0x1);
                            }
                            t0 = t1;
                        }
                        t1 = t0;
                    } else {
                        t0 = (((struct o2E4_int *)(a4))->v);
                        (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - 0.199999988f);
                        t0 = 0xC;
                        if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o0_float *)0xC058ECC)->v)))) {
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
                        (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
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
                t2 = 0xEC;
                if ((short)(t0 - 1) == 0) {
                    (((struct oEC_ushort *)(a4))->v) = 0x1;
                    t0 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                    t2 = (t0 + 0x1);
                }
                t1 = t2;
            }
            return t1;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c06233a(((((struct o2E0_int *)(a4))->v)), ((int)g_res_font), (*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BFC8) + 0x18))));
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E0));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E0_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
    (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
    FUN_0c06233a(((((struct o2E4_int *)(a4))->v)), ((int)g_res_font), ((*(signed char *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x4))) * (unsigned short)0x1C) + 0xC14BFC8) + 0x19))) + 0x1));
    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(volatile int *)((a4 + 0x2E4));
    *(volatile signed char *)((a4 + 0x4));
    FUN_0c0e6fe8();
    *(unsigned short *)(((0x2 + ((((struct o2E4_int *)(a4))->v))) + 0x0)) = 0x31F;
    (((struct o44_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
    (((struct o48_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
    (((struct o4C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.799999952f;
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
                        u0 = (((struct o8_float *)0xC058ECC)->v);
                        if ((*(int *)0xC3673F8) == 1) {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                        } else {
                            (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
                            (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o10_float *)0xC058ECC)->v));
                        }
                        t1 = 0x20;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) - 0.0199999996f);
                    t1 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t1 = (t2 + 0x1);
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                t0 = (((struct o2E4_int *)(a4))->v);
                (((struct oC_float *)(t0))->v) = (((((struct oC_float *)(t0))->v)) - 0.199999988f);
                t0 = 0xC;
                if (!(((((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > ((((struct o0_float *)0xC058ECC)->v)))) {
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
                (((struct oC_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 1.0f;
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
        t2 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            t0 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

void fx_spawn_058e62(void)
{
    vec3i template;
    char *item;
    int i;

    template = *(vec3i *)0xC14C070;
    for (i = 0; i < 6; i++) {
        item = obj_create(6, 1, 2, 0);
        if (item) {
            *item = 1;
            item[4] = i;
            *(int *)(item + 16) = 0xC058C04;
            *(vec3i *)(item + 80) = template;
        }
    }
}
