/* nl screen/frame buffer wrappers (0c0ddf30-0c0dfe20) */

int FUN_0c0fd8c0(int, int);
int FUN_0c0fb3fe(int);
float math_exp_float(float x);
float math_pow_float(float x, float y);
float math_ln_float(float x);
float math_ldexp_float(float value, int exp_add);
struct o0_uint { unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
float math_sin_angle16(int);
float math_sin_float(float);
int kmFlipFrameBuffer(void);
int FUN_0c0f61c0(void);
int FUN_0c0f9bb2(void);
extern float _builtin_sqrtf(float);
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c0f8180(int);
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c0f8920(int);
int kmSetBackGroundRenderState(int a4);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0ddeb0(void);
int kmActivateFrameBuffer(int, int, int, int);
extern int FUN_0c0f7b60();
int FUN_0c0f94a0(int, int, int, int);
typedef struct { unsigned int bits; } PackedColor;
int kmSetFogTableColor(PackedColor argb);
typedef struct { unsigned int value; } packed_color;
int kmSetFogVertexColor(packed_color color);
typedef struct { unsigned int v; } PACKED;
int kmSetBorderColor(PACKED c);
int FUN_0c0efc6a(int, int, int, int, int, int);
int FUN_0c0fb236(int);
int FUN_0c0fdaca(int, int);
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
int FUN_0c0f9c20(int, int);
int gfx_set_frame_time_weights(int, int, int, int);
int _divls(void);
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
int kmSetColorClampValue(PACKED lo, PACKED hi);
struct o6_short { char p[0x6]; short v; };
int kmSetBackGroundPlane(int, int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o20_int { char p[0x20]; int v; };
float math_tan_reduce_quadrant(int *quadrant, float x);

int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int a4);
int nlSysMetricsDiffTime(int a4, int a5);
int gfx_set_background_plane(int a4, int a5, int a6, float f4);
float math_signed_sqrt(float f4);
float math_floor_float(float x);
int math_rand_next(void);
float math_tan_angle16(int angle_arg);

void FUN_0c0ddf30(void)
{
    int stk[2];
    register int t0;
    register int t1;

    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x1201;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = (((struct o20_int *)0xFFA00020)->v);
        *(unsigned int *)(((int)stk + 4)) = t1;
        if (t1 == 0x8201) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x10000) {
                break;
            }
            t0 = (*(int *)(((int)stk + 0)));
            t0 = (t0 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t0;
        }
        (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    }
}

int gfx_flip_frame_buffer(void)
{
    *(unsigned int *)0xC7F8E94 = 0x1;
    FUN_0c0f61c0();
    *(unsigned int *)0xC7F8E94 = 0x0;
    return kmFlipFrameBuffer();
}

int FUN_0c0ddfa0(int a4)
{
    *(unsigned int *)(((*(int *)0xC7FCAF8) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0xC7FCAF8) + 0x8)) = (*(int *)((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x0)));
    *(unsigned int *)(((*(int *)0xC7FCAF8) + 0xC)) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0xC7FCAF8) + 0x20)) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x8) + 0x0)));
    (((struct o44_uint *)((*(int *)0xC7FCAF8)))->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0xC) + 0x0)));
    (((struct o40_uint *)((*(int *)0xC7FCAF8)))->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x10) + 0x0)));
    (((struct o0_uint *)0xC7F88D8)->v) = (*(int *)((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x0)));
    (((struct o4_uint *)0xC7F88D8)->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x4) + 0x0)));
    (((struct o8_uint *)0xC7F88D8)->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x8) + 0x0)));
    (((struct oC_uint *)0xC7F88D8)->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0xC) + 0x0)));
    (((struct o10_uint *)0xC7F88D8)->v) = (*(int *)(((((short)(((a4 << 2) + a4) << 2) + 0xC1556AC) + 0x10) + 0x0)));
    return FUN_0c0f8180((*(int *)0xC7FCAF8));
}

int FUN_0c0de120(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x0;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x3;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    FUN_0c0f8180(a4);
    return FUN_0c0f8920(a4);
}

int gfx_init_background_render_state(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x1;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x1;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    FUN_0c0f8180(a4);
    return kmSetBackGroundRenderState(a4);
}

int gfx_set_background_color(int a4, int a5, int a6)
{
    return gfx_set_background_plane(a4, a5, a6, (*(float *)0xC0DE308));
}

int FUN_0c0de290(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(volatile int *)0xC7F8878;
    FUN_0c0f94a0(0xC7F8E98, a4, a5, a6);
    t0 = ((int (*)(int, int, int, int))(FUN_0c0f7b60))(0xC7F8884, 0x0, 0x0, 0x0);
    t0 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c0f7b60))(0xC7F88AC, 0x0, 0x0, 0x0, 0x0, 0x0, a7);
    kmActivateFrameBuffer(0xC7F8884, 0xC7F88AC, 0x0, 0x1);
    if ((*(int *)0xC7F88F4) == 0) {
        FUN_0c0ddeb0();
        *(unsigned int *)0xC7F88F4 = 0x1;
    }
    return 0x1;
}

void gfx_set_fog_table_color(unsigned int argb)
{
    PackedColor packed;
    packed.bits = argb;
    kmSetFogTableColor(packed);
}

void gfx_set_fog_vertex_color(unsigned int color)
{
    packed_color packed;
    packed.value = color;
    kmSetFogVertexColor(packed);
}

void gfx_set_border_color(unsigned int c)
{
    PACKED p;
    p.v = c | 0xFF000000;
    kmSetBorderColor(p);
}

int FUN_0c0de640(int a4, int a5, int a6, int a7, int a8)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t0;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = a7;
    t5 = 0x0;
    t6 = a8;
    for (;;) {
        if ((t6 & 0x1) != 0) {
            t1 = 0xC7F8E98;
            t3 = a4;
            t4 = a5;
            t2 = t5;
            t0 = (FUN_0c0efc6a(t1, t2, t3, t4, a6, a7));
        } else {
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
        }
        t5 = (t5 + 0x1);
        t1 = t9;
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t6 = (t6 >> 1);
        if ((int)t5 >= (int)0x5) {
            break;
        }
    }
    return t0;
}

int FUN_0c0de730(void)
{
    int stk[1];

    FUN_0c0fb236(((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c0de820(int a4)
{
    (((struct o0_uint *)0xC7F8810)->v) = 0x60;
    (((struct o4_uint *)0xC7F8810)->v) = 0x0;
    (((struct o4_uint *)0xC7F886C)->v) = 0xC7F8884;
    (((struct o8_uint *)0xC7F886C)->v) = 0xC7F88AC;
    (((struct o8_uint *)0xC7F8810)->v) = 0xC7F8870;
    (((struct oC_uint *)0xC7F8810)->v) = 0x2;
    (((struct o10_uint *)0xC7F8810)->v) = 0x280;
    (((struct o14_uint *)0xC7F8810)->v) = 0x0;
    (((struct o18_uint *)0xC7F8810)->v) = 0x0;
    (((struct o1C_uint *)0xC7F8810)->v) = a4;
    (((struct o20_uint *)0xC7F8810)->v) = 0xC7F8E98;
    (((struct o24_uint *)0xC7F8810)->v) = 0xACC00000;
    (((struct o28_uint *)0xC7F8810)->v) = 0x100000;
    (((struct o2C_float *)0xC7F8810)->v) = ((((struct o0_float *)0xC0DE934)->v));
    (((struct o30_float *)0xC7F8810)->v) = ((((struct o4_float *)0xC0DE934)->v));
    (((struct o34_float *)0xC7F8810)->v) = ((((struct o8_float *)0xC0DE934)->v));
    (((struct o38_float *)0xC7F8810)->v) = 0.0f;
    (((struct o3C_float *)0xC7F8810)->v) = 0.0f;
    (((struct o0_uint *)0xC7F886C)->v) = 0x0;
    (((struct oC_uint *)0xC7F886C)->v) = 0x3;
    (((struct o10_uint *)0xC7F886C)->v) = 0x0;
    return 0x5C;
}

void gfx_set_buffer_size(int a4)
{
    *(unsigned int *)0xC7F882C = a4;
}

void gfx_init_renderer(void)
{
    if (*(int *)0xC7F8880 == 1) {
        *(int *)0xC7F886C = 32;
        *(int *)0xC7F8814 = *(int *)0xC7F8814 | 0x10;
        *(int *)0xC7F8878 = 2;
    } else {
        FUN_0c0f9c20(1, 32);
    }
}

int gfx_set_display_mode(int a4, int a5, int a6, int a7)
{
    int depth;      /* the frame buffer's depth code: 32, 34 for mode 2, 36 for mode 4 */

    depth = 32;
    if (a4 == 2) {
        depth = 34;
    } else if (a4 == 4) {
        depth = 36;
    }
    if (*(int *)0xC7F8880 == 1) {
        *(int *)0xC7F886C = depth;
        return 1;
    }
    return FUN_0c0f9c20(1, depth);
}

void FUN_0c0dea20(int a4)
{
    *(unsigned int *)0xC7F887C = a4;
}

int gfx_set_vertex_buffer(int a4)
{
    register int t0;

    t0 = *(int *)0xC7F8880;
    if (t0 == 1) {
        *(unsigned int *)0xC7F8834 = (0xA0000000 | a4);
        return t0;
    }
    return FUN_0c0fd8c0((0xA0000000 | a4), 0x0);
}

int gfx_set_list_buffers(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((*(int *)0xC7F8880) == 1) {
        t3 = (gfx_set_frame_time_weights(a4, a5, a6, a7));
    } else {
        t3 = (FUN_0c0de290(a4, a5, a6, a7));
    }
    return t3;
}

int nlSysMetricsGetFrameBuffer(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC7F893C;
    t1 = *(int *)0xC7F88EC;
    t2 = (((struct o0_short *)0xC7FD49C)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((int)t3 / (int)0x4);
    t3 = 0xC0E6D00;
    t4 = t1;
    t1 = 0x0;
    t5 = a4;
    t6 = (t0 + 0xA5000000);
    for (;;) {
        t0 = (((struct o2_short *)0xC7FD49C)->v);
        if ((int)t1 >= (int)t0) {
            break;
        }
        t4 = 0x0;
        if ((int)t2 > 0) {
            for (;;) {
                t3 = *(int *)((t6 + 0x0));
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x4);
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}

int nlSysMetricsGetFrameBufferUser(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC7F893C;
    t1 = *(int *)0xC7F88EC;
    t2 = (((struct o0_short *)0xC7FD49C)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u));
    t3 = 0x1000;
    t4 = (t0 + 0xA5000000);
    t0 = t1;
    t1 = 0x0;
    t5 = (a4 + 0x1000);
    for (;;) {
        t6 = (((struct o2_short *)0xC7FD49C)->v);
        if ((int)t1 >= (int)t6) {
            break;
        }
        t0 = 0x0;
        if ((int)(t2 >> 1) > 0) {
            for (;;) {
                t3 = (*(short *)((t4 + 0x0)));
                t0 = (t0 + 0x5);
                t4 = (t4 + 0xA);
                *(unsigned short *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x2);
                if ((int)t0 >= (int)(t2 >> 1)) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x5);
        t4 = (t4 + 0x1400);
    }
    return t6;
}

int nlSysMetricsReadTimer(void)
{
    return (*(int *)0xFFD8000C);
}

int nlSysMetricsScaleTime(int a4)
{
    return (int)((float)a4 * (*(float *)0xC7F88F0));
}

int nlSysMetricsDiffTime(int a4, int a5)
{
    return (a4 - a5);
}

int nlSysMetricsCpuPowerStart(void)
{
    register int t0;

    t0 = nlSysMetricsReadTimer();
    *(unsigned int *)0xC7F89DC = t0;
    return t0;
}

int nlSysMetricsCpuPowerGet(void)
{
    register int t0;
    register int t2;

    t0 = nlSysMetricsReadTimer();
    t2 = nlSysMetricsDiffTime((*(int *)0xC7F89DC), t0);
    return nlSysMetricsScaleTime(t2);
}

int nlSysMetricsCpuPowerEnd(void)
{
    register int t0;
    register int t2;

    t0 = nlSysMetricsReadTimer();
    t2 = nlSysMetricsDiffTime((*(int *)0xC7F89DC), t0);
    return nlSysMetricsScaleTime(t2);
}

void nlSetColorClampValue(unsigned int lo, unsigned int hi)
{
    PACKED a, b;
    a.v = lo;
    b.v = hi;
    kmSetColorClampValue(a, b);
}

void FUN_0c0df070(void)
{
    
}

int FUN_0c0df080(int a4)
{
    register int t0;

    t0 = 0xC0DF070;
    if (a4 == 0) {
        t0 = 0xC0DEFE0;
    }
    return FUN_0c0fb3fe(t0);
}

void FUN_0c0df0b0(int a4)
{
    *(unsigned int *)0xA05F811C = a4;
}

int FUN_0c0df0d0(void)
{
    return (*(int *)0xC7F8954);
}

int FUN_0c0df0e0(void)
{
    return (*(int *)0xC7F8958);
}

int FUN_0c0df0f0(int a4, int a5)
{
    return FUN_0c0fdaca(a4, a5);
}

int FUN_0c0df100(void)
{
    return FUN_0c0f9bb2();
}

int gfx_set_background_plane(int a4, int a5, int a6, float f4)
{
    int stk[27];
    register int t0;
    register int t3;

    (((struct o0_uint *)0xC3468F0)->v) = a4;
    (((struct o4_uint *)0xC3468F0)->v) = a5;
    (((struct o8_uint *)0xC3468F0)->v) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xE0000000;
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct oC_float *)((((int)stk + 0) + 0xC)))->v) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = (((struct o0_short *)0xC7FD49C)->v);
    t3 = (short)t0;
    if (((((struct o6_short *)0xC7FD49C)->v)) != 0) {
        t3 = ((short)t0 << 1);
    }
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (float)t3;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = 0.0f;
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x18)) = a5;
    (((struct o40_uint *)((((int)stk + 0) + 0xC)))->v) = 0xF0000000;
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = 0.0f;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (float)((((struct o2_short *)0xC7FD49C)->v));
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((int)stk + 0) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((int)stk + 0) + 0xC) + 0x40);
    return (kmSetBackGroundPlane(((int)stk + 0), 0x0, 0x20, 0xC7FD498));
}

int FUN_0c0df2b0(float f4)
{
    if (f4 == 0.0f) {
        return 0x0;
    }
    return ((int (*)(float))(0xC0DF210))((1.0f / f4));
}

float math_signed_sqrt(float f4)
{
    if (0.0f > f4) {
        return (-_builtin_sqrtf((-f4)));
    }
    return _builtin_sqrtf(f4);
}

int math_atan_angle16(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t0 = 0xD;
    u1 = 0.0f;
    for (;;) {
        t1 = (t0 << 1);
        t2 = t0;
        t0 = (t0 - 1);
        u2 = ((float)t2 * (float)t2);
        u3 = (u2 * u0);
        u2 = (((float)t1 + u1) + 1.0f);
        u1 = (u3 * u0);
        u1 = (u1 / u2);
        if ((int)t0 < (int)0x1) {
            break;
        }
    }
    u2 = ((((u0 / (u1 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    if (-1.0f > f4) {
        return (unsigned short)(0xC000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    return ((int)(u2 + 0.5f) & 0xFFFF);
}

float math_ceil_float(float f4)
{
    register float t0;

    t0 = math_floor_float((-f4));
    return (-t0);
}

float math_cos_angle16(int a4)
{
    register int t1;

    t1 = (unsigned short)a4;
    if ((int)(unsigned short)a4 > (int)0x8000) {
        t1 = (0x10000 - (unsigned short)a4);
    }
    return math_sin_angle16((0x4000 - t1));
}

float math_cos_float(float f4)
{
    return math_sin_float(((-_builtin_fabsf(f4)) + 1.57079625f));
}

float math_cot_angle16(int a4)
{
    register float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = math_tan_angle16((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

/* e to the power x: x = k ln 2 + r (k rounded to nearest), e^r = (2 + r + t) / (2 - r + t) with the continued fraction
   t = r^2 / (6 + r^2 / (10 + r^2 / 14)), then scaled by 2^k */
float math_exp_float(float x)
{
    float ln2 = 0.693147123f, half, t, r2;
    int k, d;

    half = 0.0f > x ? -0.5f : 0.5f;
    k = (int)(x / ln2 + half);
    x = x - (float)k * ln2;
    r2 = x * x;
    t = r2 / 14.0f;
    for (d = 10; d >= 6; d -= 4)
        t = r2 / ((float)d + t);
    return math_ldexp_float((x + t + 2.0f) / (t - x + 2.0f), k);
}

/* floorf: largest integer value not above x (values with |x| >= 2^23 and NaN are returned unchanged). */
float math_floor_float(float x)
{
    float abs_x = x < 0.0f ? -x : x;
    float int_part;
    int int_val;
    if (!(8388608.0f > abs_x))
        return x;
    int_val = (int)abs_x;
    int_part = (float)int_val;
    if (!(x < 0.0f))
        return int_part;
    if (abs_x - int_part == 0.0f)
        return x;
    return (float)(-1 - int_val);
}

float math_inv_signed_sqrt(float value)
{
    unsigned int max_bits = 0x7F7FFFFF;
    if (value == 0.0f)
        return *(float *)&max_bits;
    return 1.0f / math_signed_sqrt(value);
}

float math_rsqrt_float(float x)
{
    if (x == 0.0f)
        return 3.40282347e+38f;
    return 1.0f / _builtin_sqrtf(x);
}

/* ldexpf-style helper: returns value * 2^exp_add by adjusting the exponent field of the float. */
float math_ldexp_float(float value, int exp_add)
{
    union { float as_float; int as_int; } bits;
    int exp;

    if (value == 0.0f) {
        return 0.0f;
    }
    bits.as_float = value;
    exp = exp_add + (unsigned char)(bits.as_int >> 23);
    if (exp < 1) {
        bits.as_int = (bits.as_int & 0x80000000) | (((bits.as_int & 0x7FFFFF) | 0x800000) >> (1 - exp));
    } else if (exp > 254) {
        bits.as_int = (bits.as_int & 0x80000000) | 0x7F800000;
    } else {
        bits.as_int = (bits.as_int & 0x807FFFFF) | (exp << 23);
    }
    return bits.as_float;
}

float math_ln_float(float f4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    if (!(0.0f > f4) && (f4 != 0.0f)) {
        u0 = *(float *)0xC0DF898;
        u1 = f4;
        u2 = 0.0f;
        if (!((1.0f + 1.0f) > f4)) {
            u3 = f4;
            u4 = 0.0f;
            for (;;) {
                u3 = (u3 / (1.0f + 1.0f));
                u4 = (u4 + u0);
                if ((1.0f + 1.0f) > u3) {
                    break;
                }
            }
            u1 = u3;
            u2 = u4;
        }
        u3 = u1;
        u4 = u2;
        if (1.0f > u1) {
            u5 = u1;
            u1 = u2;
            for (;;) {
                u5 = (u5 * (1.0f + 1.0f));
                u1 = (u1 - u0);
                if (!(1.0f > u5)) {
                    break;
                }
            }
            u3 = u5;
            u4 = u1;
        }
        t0 = 0x1;
        u0 = (((u3 + -1.0f) / (u3 + 1.0f)) * (1.0f + 1.0f));
        u1 = u4;
        for (;;) {
            u2 = (((u3 + -1.0f) / (u3 + 1.0f)) * ((u3 + -1.0f) / (u3 + 1.0f)));
            u4 = u0;
            u0 = (u0 * u2);
            u2 = u1;
            u1 = (u1 + (u4 / (float)t0));
            t0 = (t0 + 0x2);
            if (u1 == u2) {
                break;
            }
        }
        return u1;
    }
    return 0.0f;
}

/* x to the power y: whole powers by repeated squaring (a negative one through 1 / x), others as exp(y ln x); 0 for a
   negative x, and for 0 to a positive power; 1 for 0 to any other */
float math_pow_float(float x, float y)
{
    int n = (int)y;
    float b, r;

    if (x == 0.0f) {
        if (y > 0.0f)
            return 0.0f;
        return 1.0f;
    }
    if ((float)n == y) {
        b = x;
        if (n < 0) {
            n = -n;
            b = 1.0f / x;
        }
        r = 1.0f;
        for (;;) {
            if (n & 1)
                r = r * b;
            n = (n + (0 > n)) >> 1;
            if (n == 0)
                return r;
            b = b * b;
        }
    }
    if (0.0f > x)
        return 0.0f;
    return math_exp_float(y * math_ln_float(x));
}

int math_rand_next(void)
{
    register int t0;

    t0 = *(int *)0xC346A50;
    *(unsigned int *)0xC346A50 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

float math_rand_float(void)
{
    register int t0;

    t0 = math_rand_next();
    return ((float)t0 * 3.05175781e-05f);
}

void math_set_rand_seed(int a4)
{
    *(unsigned int *)0xC346A50 = a4;
}

float math_round_away_float(float f4)
{
    register int t0;
    register int t1;
    float s1;

    s1 = _builtin_fabsf(f4);
    if ((*(float *)0xC0DFAC0) > s1) {
        if ((s1 - (float)(int)s1) != 0.0f) {
            t0 = (int)s1;
            if (f4 > 0.0f) {
                t0 = ((int)s1 + 0x1);
                t0 = ((int)s1 + 0x1);
            } else {
                t1 = (0xFFFFFFFF - (int)s1);
                t0 = (0xFFFFFFFF - (int)s1);
            }
            return (float)t0;
        }
        return f4;
    }
    return f4;
}

float math_sin_reduce_quadrant(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (!(0.0f > f4)) {
        u0 = ((((struct o0_float *)0xC0DFCC0)->v));
    } else {
        u0 = ((((struct o4_float *)0xC0DFCC0)->v));
    }
    u1 = (((struct o8_float *)0xC0DFCC0)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / u1));
    u2 = (f4 - (((float)(int)(u0 + (f4 / u1)) * ((((struct oC_float *)0xC0DFCC0)->v)))));
    u2 = u2 + ((((struct o10_float *)0xC0DFCC0)->v)) * ((float)(int)(u0 + (f4 / u1)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u1 = ((float)t1 - u0);
        u0 = (u2 * u2);
        u0 = (u0 / u1);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return (u2 / (1.0f - u0));
}

float math_tan_float(float x)
{
    int quadrant;
    float reduced;

    reduced = math_tan_reduce_quadrant(&quadrant, x);
    if (quadrant % 2 == 0)
        return reduced;
    if (reduced == 0.0f)
        return 3.40282347e+38f;
    return -1.0f / reduced;
}

/* Tangent of a 16-bit angle (65536 = one turn) via a continued fraction after reducing to the nearest quarter turn */
float math_tan_angle16(int angle_arg)
{
    unsigned short angle = angle_arg;
    float radians, delta, delta_sq, frac;
    int quarter, i;

    if ((angle & 0x7FFF) == 0x4000)
        return 3.40282347e+38f;
    radians = (float)angle * 6.28318501f / 65536.0f;
    quarter = (int)(radians / 1.57079625f + 0.5f);
    delta = radians - (float)quarter * 1.57079625f;
    delta_sq = delta * delta;
    frac = 0.0f;
    for (i = 13; i >= 3; i -= 2)
        frac = delta_sq / ((float)i - frac);
    delta = delta / (1.0f - frac);
    if ((quarter & 1) == 0)
        return delta;
    if (delta == 0.0f)
        return 3.40282347e+38f;
    return -1.0f / delta;
}
