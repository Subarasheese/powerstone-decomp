/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03dca8-0c03de24) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03dca8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = obj_create(0x5, 0x1, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0xF;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned int *)((t3 + 0x10)) = 0xC03DD66;
        t5 = ((int (*)(int, int))(FUN_0c0e6fe8))(t3, 0x1);
        (((struct o58_float *)(t0))->v) = 0.5f;
        (((struct o54_float *)(t0))->v) = 0.5f;
        (((struct o50_float *)(t0))->v) = 0.5f;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        (((struct o118_uint *)(t1))->v) = (a4 + 0x6C);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        t0 = (((struct o2E0_int *)(t1))->v);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned short *)((t0 + 0x2)) = 0x41F;
        (((struct o20_float *)(t0))->v) = 0.75f;
        (((struct o1C_float *)(t0))->v) = 0.75f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct oC_float *)(t0))->v) = 200.0f;
        (((struct o8_float *)(t0))->v) = 230.0f;
        *(unsigned int *)((t0 + 0x10)) = 0xFFFFEAAB;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t4 = 0x40;
    }
    return t4;
}

int fx_tick_03dca8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.5f);
    if ((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) != 11) {
        *(unsigned char *)((a4 + 0x8)) = 0x3;
    }
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return obj_destroy(a4, t0, a6, a7);
            }
            u0 = (((struct o40_float *)(t0))->v);
            (((struct o40_float *)(t0))->v) = (u0 - 0.125f);
            t0 = 0x40;
            if (!((u0 - 0.125f) > 0.0f)) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x4;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
