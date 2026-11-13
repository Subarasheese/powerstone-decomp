/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c01628c-0c017240) */

struct V { int x, y, z; };
extern unsigned char *obj_create(int, int, int, int);
extern void ending_obj_init_basic(unsigned char *);
extern void ending_obj_set_sprite(unsigned char *, int);
extern int ending_tick_vtx_wave(void);
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int obj_destroy(int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0e6fe8(int);

void ending_spawn_vtx_wave(void)
{
    unsigned char *o;
    unsigned char *p;
    int i;

    o = obj_create(5, 1, 4, 0);
    if (o) {
        ending_obj_init_basic(o);
        *(void **)(o + 16) = (void *)ending_tick_vtx_wave;
        *(struct V *)(o + 32) = *(struct V *)(0xC1169D8 + 8);
        *(struct V *)(o + 44) = *(struct V *)(0xC1169D8 + 20);
        for (i = 0; i < (signed char)o[0x2DC]; i++) {
            p = *(unsigned char **)(o + 0x2E0 + 4 * i);
            ending_obj_set_sprite(p, *(int *)(0xC116BCC + 4 * i));
            *(struct V *)(p + 4) = *(struct V *)(0xC17EB38 + (signed char)(i * 12));
            *(struct V *)(p + 16) = *(struct V *)(0xC17EB68 + (signed char)(i * 12));
        }
    }
}

int FUN_0c016ac2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        if ((*(signed char *)((a4 + 0x4))) == 0) {
            (((struct o4C_float *)(t0))->v) = 1.0f;
            (((struct o48_float *)(t0))->v) = 1.0f;
            (((struct o44_float *)(t0))->v) = 1.0f;
        } else {
            (((struct o4C_float *)(t0))->v) = 0.0f;
            (((struct o48_float *)(t0))->v) = 0.0f;
            (((struct o44_float *)(t0))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0x4))) == 0) {
        (((struct o4C_float *)(t0))->v) = (((((struct o4C_float *)(t0))->v)) - 0.00555555522f);
        if (((((struct o4C_float *)(t0))->v)) > 0.0f) {
            u0 = (((struct o4C_float *)(t0))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            return 0x44;
        }
        return obj_destroy(a4, t0, a6, a7);
    }
    u0 = (((struct o4C_float *)(t0))->v);
    (((struct o4C_float *)(t0))->v) = (u0 + 0.0222222209f);
    if (!(1.0f > (u0 + 0.0222222209f))) {
        return obj_destroy(a4, t0, a6, a7);
    }
    u0 = (((struct o4C_float *)(t0))->v);
    (((struct o48_float *)(t0))->v) = u0;
    (((struct o44_float *)(t0))->v) = u0;
    return 0x44;
}

int FUN_0c016bd2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct o20_float *)(a4))->v) = 17.0157051f;
        (((struct o24_float *)(a4))->v) = 238.219894f;
        (((struct o28_float *)(a4))->v) = -10.0f;
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 0.00255491049f);
    t1 = *(signed char *)((a4 + 0x9));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 1.02094233f);
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.510471165f);
            if ((int)(*(short *)0xC7F2EEE) >= (int)0x1950) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
    } else {
        if ((int)(*(short *)0xC7F2EEE) < (int)0x18EC) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = 0x2E0;
        t2 = (t2 + a4);
        t2 = (t2 + (t1 << 2));
        t2 = (*(int *)((t2 + 0x0)));
        FUN_0c0e6fe8((t1 << 2));
        (((struct oC_float *)(t2))->v) = 0.0f;
        u0 = (*(float *)((0xC116BDC + t0)));
        math_vec3_mul_xyz((t2 + 0x4), u0, u0, u0);
        t1 = (t1 + 0x1);
    }
    t0 = *(signed char *)0xC7F2EE5;
    if ((int)(unsigned char)t0 > (int)0x1) {
        return obj_destroy(a4, a5, a6, a7);
    }
    return (unsigned char)t0;
}
