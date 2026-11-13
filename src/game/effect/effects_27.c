/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0372a8-0c03743c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o1C_float { char p[0x1C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);

int fx_spawn_0372a8(int a4)
{
    register int t0;
    register int t15;
    register int t8;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03733E;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        t8 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), 0xF);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        t15 = 0x1F;
    }
    return t15;
}

int fx_tick_0372a8(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    return t0;
                }
                return obj_destroy(a4);
            }
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o44_float *)(t0))->v) = (((((struct o44_float *)(t0))->v)) - 0.0333333313f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o48_float *)(t0))->v) = (((((struct o48_float *)(t0))->v)) - 0.0333333313f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.0333333313f);
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
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x21F;
        (((struct o44_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o48_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o4C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct oEC_ushort *)(a4))->v) = 0x1E;
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
