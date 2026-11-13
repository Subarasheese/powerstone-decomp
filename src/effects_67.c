/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03cf50-0c03d0d4) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int, int, int);
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c06231c(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int FUN_0c03d010(int a4);

int fx_spawn_03cf50(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = obj_create(0x5, 0x1, 0x1);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC03D062;
        *(unsigned char *)((t1 + 0x4)) = a5;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        u0 = *(float *)0xC03D0B0;
        (((struct o58_float *)(t1))->v) = u0;
        (((struct o54_float *)(t1))->v) = u0;
        (((struct o50_float *)(t1))->v) = u0;
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x26);
        (((struct o1C_float *)(((((struct o2E0_int *)(t1))->v))))->v) = ((((struct o50_float *)(t1))->v));
        (((struct o20_float *)(((((struct o2E0_int *)(t1))->v))))->v) = ((((struct o54_float *)(t1))->v));
        (((struct o24_float *)(((((struct o2E0_int *)(t1))->v))))->v) = ((((struct o58_float *)(t1))->v));
        t2 = 0x24;
    }
    return t2;
}

int FUN_0c03d010(int a4)
{
    register int t0;

    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x4;
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), ((*(signed char *)((a4 + 0xF2))) + 0x26));
    }
    return 0xF0;
}

int fx_tick_03cf50(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
    }
    FUN_0c03d010(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((int)(short)(t0 - 1) < 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
