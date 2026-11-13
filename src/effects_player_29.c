/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0be698-0c0be7dc) */

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
extern int FUN_0c0e6fe8();
struct o105_uchar { char p[0x105]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_21(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = obj_create(0x1, 0x1, 0x1);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0x1F;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned int *)((t1 + 0x10)) = 0xC0BE74A;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct o3C_float *)(t1))->v) = 0.0f;
        (((struct o38_float *)(t1))->v) = 0.0f;
        (((struct o58_float *)(t1))->v) = 1.0f;
        (((struct o54_float *)(t1))->v) = 1.0f;
        (((struct o50_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(t1))->v)) + 0x0)) = t0;
        *(unsigned short *)((((((struct o2E0_int *)(t1))->v)) + 0x2)) = 0x41F;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t1))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct o40_float *)(((((struct o2E0_int *)(t1))->v))))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x8;
        t2 = 0xEE;
    }
    return t2;
}

int fx_update_21(int a4)
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
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 8.0f);
        if (!(((float)t0 / 8.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return obj_destroy(a4);
}
