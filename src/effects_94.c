/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042514-0c042728) */

struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int FUN_0c04258a(int a4);

int fx_spawn_042514(int a4, int a5)
{
    register int t0;
    register int t3;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0425E0;
        FUN_0c0e6fe8(0x1, 0x1F);
        *(unsigned int *)((t0 + 0x30)) = a5;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = t3;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = t5;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC4CFA68, 0x55);
    }
    return t0;
}

int FUN_0c04258a(int a4)
{
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    return 0x40;
}

int fx_tick_042514(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return obj_destroy(a4, a5, a6, a7);
            }
            FUN_0c04258a(a4);
            if (!(((((struct o38_float *)(a4))->v)) > 0.0f)) {
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
            }
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + -0.0357142836f);
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o5C_float *)(a4))->v) = 0.0f;
                t1 = 0x5C;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 0.5f;
        (((struct o3C_float *)(a4))->v) = 0.5f;
        (((struct o38_float *)(a4))->v) = 0.5f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
    }
    FUN_0c04258a(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 28) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o38_float *)(a4))->v) = 0.149999991f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.149999991f;
        (((struct o44_float *)(a4))->v) = -0.0199999996f;
        (((struct o48_float *)(a4))->v) = -0.00399999972f;
        (((struct o4C_float *)(a4))->v) = -0.0199999996f;
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
        (((struct o5C_float *)(a4))->v) = 1.0f;
        t1 = 0x5C;
    }
    return t1;
}
