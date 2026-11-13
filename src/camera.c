/* camera records (0c0d80d4-0c0d8f10) */

typedef struct { int x, y, z; } vec3i;
struct o1E0_float { char p[0x1E0]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_float { char p[0x1E8]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
float math_signed_sqrt(float);
typedef struct { int x, y, z; } S12;
extern void nlProjectScreen(void *, float *);
struct o0_float { float v; };
struct o114_int { char p[0x114]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F0_float { char p[0x1F0]; float v; };
struct o1F8_float { char p[0x1F8]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oC_float { char p[0xC]; float v; };
int memset(int, int, int);
struct vec3i_r7 { int w0, w1, w2; };
int cam_update_by_mode(char *cam);
int FUN_0c0e1550(int mode);
void nlUnitMatrix(void);
void FUN_0c0e0ae0(char *m);
int nlInvertMatrix(char *m);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };

void cam_publish_active_position(int record_idx)
{
    char *records = (char *)0x0C7F29F8;
    char *rec;
    if (*(char *)0x0C7F319E)
        rec = records + (short)((signed char)record_idx * 508);
    else
        rec = records;
    *(vec3i *)0x0C7F31E4 = *(vec3i *)(rec + 496);
    *(int *)0x0C7F31E0 = *(int *)(rec + 492);
}

float FUN_0c0d811e(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x0));
    u0 = (((struct o20_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
    (((struct o1E0_float *)(a4))->v) = (((((struct o20_float *)(((unsigned short)((unsigned short)((-t0) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v)) - u0);
    t0 = *(signed char *)((a4 + 0x0));
    u0 = (((struct o24_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
    (((struct o1E4_float *)(a4))->v) = (((((struct o24_float *)(((unsigned short)((unsigned short)((-t0) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v)) - u0);
    t0 = *(signed char *)((a4 + 0x0));
    u0 = (((struct o28_float *)(((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v);
    (((struct o1E8_float *)(a4))->v) = (((((struct o28_float *)(((unsigned short)((unsigned short)((-t0) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v)) - u0);
    u0 = (((struct o1E0_float *)(a4))->v);
    u1 = (((struct o1E4_float *)(a4))->v);
    u2 = (((struct o1E8_float *)(a4))->v);
    u3 = (u1 * u1);
    u3 = u3 + u0 * u0;
    u0 = u3;
    u0 = u0 + u2 * u2;
    u1 = math_signed_sqrt(u0);
    u0 = u1;
    if (u1 == 0.0f) {
        u0 = 9.99999975e-06f;
    }
    (((struct o1E0_float *)(a4))->v) = (((((struct o1E0_float *)(a4))->v)) / u0);
    (((struct o1E4_float *)(a4))->v) = (((((struct o1E4_float *)(a4))->v)) / u0);
    (((struct o1E8_float *)(a4))->v) = (((((struct o1E8_float *)(a4))->v)) / u0);
    return u1;
}

void cam_calc_side_of_targets(char *obj)
{
    S12 point;
    float proj_a[2];
    float proj_b[2];

    point = *(S12 *)(0xC7E40C4 + 32);
    nlProjectScreen(&point, proj_a);
    point = *(S12 *)(0xC7EB394 + 32);
    nlProjectScreen(&point, proj_b);
    if (proj_b[0] > proj_a[0]) {
        obj[20] = 0;
    } else {
        obj[20] = 1;
    }
}

float FUN_0c0d827e(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((*(signed char *)((a4 + 0x14))) != 0) {
        u0 = ((((struct o8_float *)0xC7E40E4)->v));
        u1 = (((((struct o0_float *)0xC7E40E4)->v)) - ((((struct o0_float *)0xC7EB3B4)->v)));
        u2 = ((((struct o8_float *)0xC7EB3B4)->v));
    } else {
        u0 = ((((struct o8_float *)0xC7EB3B4)->v));
        u1 = (((((struct o0_float *)0xC7EB3B4)->v)) - ((((struct o0_float *)0xC7E40E4)->v)));
        u2 = ((((struct o8_float *)0xC7E40E4)->v));
    }
    u3 = ((u0 - u2) * (u0 - u2));
    u3 = u3 + u1 * u1;
    u4 = math_signed_sqrt(u3);
    u3 = u4;
    if (u4 == 0.0f) {
        u3 = 9.99999997e-07f;
    }
    (((struct o1E0_float *)(a4))->v) = (u1 / u3);
    (((struct o1E8_float *)(a4))->v) = ((u0 - u2) / u3);
    (((struct o1EC_uint *)(a4))->v) = ((((struct o114_int *)(a4))->v));
    (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & 0xFFFF);
    (((struct o1F0_float *)(a4))->v) = (math_sin_angle16(((((struct o1EC_int *)(a4))->v))));
    u0 = math_cos_angle16(((((struct o1EC_int *)(a4))->v)));
    (((struct o1F8_float *)(a4))->v) = u0;
    return u0;
}

int cam_init_records(void)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t6;

    u0 = (((struct o0_float *)0xC0D844C)->v);
    u1 = (((struct o4_float *)0xC0D844C)->v);
    u2 = (((struct o8_float *)0xC0D844C)->v);
    u3 = (((struct oC_float *)0xC0D844C)->v);
    t4 = 0x0;
    for (;;) {
        memset(((short)((short)t4 * (short)0x1FC) + 0xC7F29F8), 0x0, 0x1FC);
        *(unsigned char *)((((short)((short)t4 * (short)0x1FC) + 0xC7F29F8) + 0x0)) = t4;
        (((struct o18_float *)(((short)((short)t4 * (short)0x1FC) + 0xC7F29F8)))->v) = u3;
        (((struct o1C_float *)(((short)((short)t4 * (short)0x1FC) + 0xC7F29F8)))->v) = u3;
        (((struct o20_float *)(((short)((short)t4 * (short)0x1FC) + 0xC7F29F8)))->v) = u1;
        t6 = ((short)((short)t4 * (short)0x1FC) + 0xC7F29F8);
        t4 = (t4 + 0x1);
        (((struct o24_float *)(t6))->v) = u0;
        (((struct o28_float *)(t6))->v) = u2;
        if ((int)t4 >= (int)0x2) {
            break;
        }
    }
    return 0x28;
}

int cam_select_mode0_variant(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC7F301C) == 0) {
        t0 = *(signed char *)0xC7F3073;
        t1 = 0x0;
        if (((unsigned char)t0 != 3) && ((unsigned char)t0 != 3)) {
            t0 = *(signed char *)0xC7F3051;
            if ((*(signed char *)0xC7F319D) == 0) {
                t2 = 0x1;
                if (t0 != 10) {
                    t2 = 0x0;
                }
                t1 = t2;
            } else {
                t2 = 0x3;
                if (t0 == 10) {
                    t2 = 0x1;
                }
                t1 = t2;
            }
        }
        t0 = t1;
    } else {
        t1 = 0x0;
        if ((*(signed char *)0xC7F319E) != 0) {
            t2 = 0x4;
            if ((*(signed char *)((0xC7E40C8 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x0))) * (unsigned short)0x72D0)))) == 10) {
                t2 = 0x2;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

void cam_set_view_matrix(char *cam)
{
    struct vec3i_r7 target;
    struct vec3i_r7 eye;
    cam_update_by_mode(cam);
    eye = *(struct vec3i_r7 *)(cam + 188);
    target = *(struct vec3i_r7 *)(cam + 236);
    cam_apply_shake(cam, &eye, &target);
    FUN_0c0e1550(2);
    nlUnitMatrix();
    nlLookAt(&eye, &target, *(int *)(cam + 292));
    FUN_0c0e0ae0(cam + 108);
    FUN_0c0e0ae0(cam + 44);
    nlInvertMatrix(cam + 108);
    FUN_0c0e1550(1);
}

int cam_set_priority(int a4, int a5)
{
    *(unsigned char *)(((short)((short)a4 * (short)0x1FC) + 0xC7F2AA4)) = a5;
    return 0xC7F2AA4;
}

int cam_request_mode(int a4, int a5, int a6)
{
    register int t1;

    t1 = 0x0;
    if ((int)(unsigned char)a6 >= (int)(unsigned char)(*(signed char *)0xC7F2AA4)) {
        (((struct o0_uchar *)0xC7F29FA)->v) = a4;
        (((struct o3_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o2_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o1_uchar *)0xC7F29FA)->v) = 0x0;
        (((struct o4_uchar *)0xC7F29FA)->v) = 0x0;
        *(unsigned char *)0xC7F2AA4 = a6;
        (((struct o0_uchar *)0xC7F2B7C)->v) = a5;
        (((struct o1C_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)(signed char)a5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
        (((struct o20_uint *)0xC7F2B7C)->v) = (((unsigned short)((unsigned short)((((signed char)a5 == 0)) ? 1 : 0) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20);
        t1 = 0x1;
    }
    return t1;
}
