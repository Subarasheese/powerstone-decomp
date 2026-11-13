/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3268-0c0c3544) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
int FUN_0c06231c(int, int, int);
int FUN_0c0c339a(int);

int FUN_0c0c3408(int a4, int a5)
{
    register int t0;
    register float u0;

    *(unsigned char *)((a4 + 0x4)) = a5;
    u0 = *(float *)0xC0C3538;
    if (a5 != 0) {
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x30);
        *(unsigned short *)((((((struct o2E4_int *)(a4))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x33);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        t0 = (((struct o2E4_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        return 0x2E4;
    }
    t0 = *(signed char *)((a4 + 0x3));
    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x2E);
    *(unsigned short *)((((((struct o2E4_int *)(a4))->v)) + 0x2)) = 0x3F;
    t0 = *(signed char *)((a4 + 0x3));
    FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x2F);
    t0 = (((struct o2E0_int *)(a4))->v);
    (((struct o24_float *)(t0))->v) = u0;
    (((struct o20_float *)(t0))->v) = u0;
    (((struct o1C_float *)(t0))->v) = u0;
    return FUN_0c0c339a(a4);
}
