/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bce68-0c0bcfbc) */

struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int fx_spawn_19(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t35;
    register int t5;
    register int t6;
    register int t19;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1);
    t35 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0BCFBC;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o38_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x8)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        t5 = *(signed char *)(((int)stk + 0));
        if (t5 != 0) {
            t35 = t5;
            if (t5 != 1) {
            } else {
                t6 = *(signed char *)((a4 + 0x3));
                FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x4);
                *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
                (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
                (((struct o50_float *)(t0))->v) = 0.299999982f;
                (((struct o54_float *)(t0))->v) = 0.299999982f;
                (((struct o58_float *)(t0))->v) = 0.299999982f;
                *(unsigned int *)((t0 + 0x1C)) = a4;
                (((struct oEC_ushort *)(t0))->v) = 0x3C;
                t35 = 0xEC;
            }
        } else {
            t19 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t19 << 1) + t19) << 2) << 1) + 0xC6002D0), 0x3);
            *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
            (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
            (((struct o50_float *)(t0))->v) = 0.299999982f;
            (((struct o54_float *)(t0))->v) = 0.299999982f;
            (((struct o58_float *)(t0))->v) = 0.299999982f;
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 50.0f);
            *(unsigned int *)((t0 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t0))->v) = 0x3C;
            t35 = 0xEC;
        }
    }
    return t35;
}
