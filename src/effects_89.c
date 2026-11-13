/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0416d8-0c041820) */

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
struct oEE_short { char p[0xEE]; short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_0416d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC04179A;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        t2 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x0);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0x4000);
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x4;
        t1 = 0xEE;
    }
    return t1;
}

int fx_tick_0416d8(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 == 1) {
        *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
        if (!(((float)t0 / 4.0f) > 0.0f)) {
            (((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        return 0xEE;
    }
    return obj_destroy(a4);
}
