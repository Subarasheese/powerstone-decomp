/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c033114-0c0332a0) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
extern int FUN_0c0e6fe8();

int fx_tick_032fd4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
    if (((short)(t3 - 1) != 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x10B))) != 0) {
        return 0x10B;
    }
    *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + 0x5B0);
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0xA));
            t3 = t1;
            if (t1 == 2) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                *(unsigned char *)((a4 + 0x8)) = 0x0;
                t3 = 0x0;
            }
            return t3;
        }
        if (t0 == 4) {
            return obj_destroy(a4, a5, a6, a7);
        }
        if (t0 == 5) {
            return obj_destroy(a4, a5, a6, a7);
        }
        return t0;
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0xA))) == 2) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            t0 = (((struct o2E0_int *)(a4))->v);
            math_vec3_sub((t0 + 0x1C), (t0 + 0x1C), 0xC14961C);
            if (!(((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.799999952f)) {
                *(volatile int *)((a4 + 0x2E0));
                t0 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
            }
        } else {
            t0 = (((struct o2E0_int *)(a4))->v);
            math_vec3_add((t0 + 0x1C), (t0 + 0x1C), 0xC14961C);
            if (!(1.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
                *(volatile int *)((a4 + 0x2E0));
                t0 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
            }
        }
        if (1.0f > ((((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v))) {
            t0 = (((struct o2E8_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.199999988f);
        }
        t0 = 0x20;
    } else {
        *(volatile int *)((a4 + 0x2E0));
        t1 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        (((struct o20_float *)(((((struct o2E8_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x1)) = t2;
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
