/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0380d4-0c0382a8) */

struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_0380d4(int a4)
{
    register int t0;
    register int t26;
    register int t11;
    register float u20;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t26 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03819E;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
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
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0x1);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = ((((struct o0_float *)0xC0381D8)->v));
        u20 = (((struct o4_float *)0xC0381D8)->v);
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u20;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u20;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x10)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x14)) = 0x0;
        *(unsigned int *)((((((struct o2E0_int *)(t0))->v)) + 0x18)) = 0x0;
        t26 = 0x2E0;
    }
    return t26;
}

int fx_tick_0380d4(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return obj_destroy(a4);
        }
    } else {
        (((struct oEC_ushort *)(a4))->v) = 0x14;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o20_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o20_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o24_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)((*(int *)((a4 + 0x1C)))))->v)) - ((((struct o28_float *)(a4))->v))) / ((-(float)((((struct oEC_short *)(a4))->v))) + 30.0f)));
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x238E);
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
