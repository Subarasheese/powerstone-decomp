/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bd4fc-0c0bd640) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o105_uchar { char p[0x105]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_20(int a4)
{
    register int t0;
    register int t12;
    register int t4;

    t0 = obj_create(0x1, 0x1, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BD5AE;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t4 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        (((struct oEE_ushort *)(t0))->v) = 0xA;
        t12 = 0xEE;
    }
    return t12;
}

int fx_update_20(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    *(unsigned char *)(((0x105 + a4) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + a4) + 0x1)) = 0x2;
    (((struct o105_uchar *)(a4))->v) = 0x2;
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
        if (!(((float)t0 / 10.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return obj_destroy(a4);
}
