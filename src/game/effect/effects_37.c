/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0387ec-0c038a0c) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_0387ec(int a4)
{
    register int t0;
    register int t27;
    register int t11;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t27 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0388C8;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = ((((struct o50_float *)(a4))->v));
        (((struct o54_float *)(t0))->v) = ((((struct o54_float *)(a4))->v));
        (((struct o58_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
        t11 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0xA);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        (((struct o4_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o8_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct oC_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x10)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x14)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x0;
        t27 = 0x2E0;
    }
    return t27;
}

int fx_tick_0387ec(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x6;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if ((t0 != 5) && (t0 != 6)) {
                            return t0;
                        }
                        return obj_destroy(a4);
                    }
                    t0 = (((struct o2E0_int *)(a4))->v);
                    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xB6);
                    t0 = (((struct o2E0_int *)(a4))->v);
                    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.049999997f);
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
                t0 = (((struct o2E0_int *)(a4))->v);
                *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xB6);
                t0 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x8));
                t1 = t0;
                if ((int)t0 > (int)0x3) {
                    (((struct oEC_ushort *)(a4))->v) = 0xA;
                    t0 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.149999991f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0xB6);
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
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0xA;
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.00999999978f);
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}
