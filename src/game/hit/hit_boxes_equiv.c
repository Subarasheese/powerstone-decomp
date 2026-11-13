/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

/* named globals (symbols.txt) */
int FUN_0c021238(int a4, int a5, int a6, int a7);
int hit_list_save_positions(int a4, int a5, int a6, int a7);
int FUN_0c0207ca(int a4, int a5, int a6, int a7);
int FUN_0c02067e(int a4, int a5, int a6, int a7);
extern char g_obj_list_heads[];
int FUN_0c062d78(void);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int hit_world_reset(void);
int FUN_0c025706(void);
int FUN_0c025d10(void);
int FUN_0c025f38(void);
int hit_world_calc_displacement(void);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02078c(void);
int FUN_0c020886(int);
int FUN_0c020998(int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int nlStoreMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetTranslate(int);
int FUN_0c0e24f0(int, int, int, float, float, float, float);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
typedef struct { float x, y, z; } Vec3f;
int FUN_0c08d6ec(int, int);
int FUN_0c08dbc8(int, int);
int FUN_0c08dc24(int, int);
int hit_find_part_entry(int, int, int, int);
float math_signed_sqrt(float);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o26_short { char p[0x26]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2E_short { char p[0x2E]; short v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
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
struct vec3f { float x, y, z; };
extern void math_mat_transform_point(float *, char *);
typedef struct { int w[6]; } Stk6;

int vec3f_to_vec3s(int a4, int a5);
int vec3s_to_vec3f(int a4, int a5);
int FUN_0c0210f4(int a4, int a5, int a6);

int thunk_FUN_0c062d78(void)
{
    return FUN_0c062d78();
}

int hit_world_step(void)
{
    hit_world_reset();
    FUN_0c025706();
    FUN_0c025d10();
    FUN_0c025f38();
    return hit_world_calc_displacement();
}

int FUN_0c0203f6(void)
{
    FUN_0c02078c();
    FUN_0c020886(0xC7E40C4);
    FUN_0c020886(((((struct o0_int *)g_obj_list_heads)->v)));
    FUN_0c020886(((((struct o4_int *)g_obj_list_heads)->v)));
    FUN_0c020998(0xC7E40C4);
    FUN_0c020998(((((struct o0_int *)g_obj_list_heads)->v)));
    return FUN_0c020998(((((struct o4_int *)g_obj_list_heads)->v)));
}

int vec3f_to_vec3s(int a4, int a5)
{
    register float u2;

    *(unsigned short *)((a5 + 0x0)) = (int)(*(float *)((a4 + 0x0)));
    *(unsigned short *)((a5 + 0x2)) = (int)((((struct o4_float *)(a4))->v));
    u2 = (((struct o8_float *)(a4))->v);
    *(unsigned short *)((a5 + 0x4)) = (int)u2;
    return (int)u2;
}

int vec3s_to_vec3f(int a4, int a5)
{
    *(float *)((a5 + 0x0)) = (float)(*(short *)((a4 + 0x0)));
    (((struct o4_float *)(a5))->v) = (float)(*(short *)((a4 + 0x2)));
    (((struct o8_float *)(a5))->v) = (float)(*(short *)((a4 + 0x4)));
    return 0x8;
}

int FUN_0c020468(int a4)
{
    nlPushMatrix((a4 + 0x6C));
    nlSetTranslate((a4 + 0x20));
    nlStoreMatrix((a4 + 0x6C));
    return nlPopMatrix(0x1);
}

int FUN_0c02048e(int a4, int a5, int a6)
{
    int stk[9];
    register int t4;
    register int t5;
    int t3;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    vec3s_to_vec3f((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
    if (((*(signed char *)((a4 + 0x2))) == 0) && (t3 = *(signed char *)(((int)stk + 0)), t3 != -1)) {
        t4 = *(signed char *)((a4 + 0x71F1));
        t5 = *(signed char *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 8)) = (short)((short)t5 * (short)0xB0);
        math_mat_get_translate((((short)((short)t4 * (short)0xDC0) + (0x300 + a4)) + (short)((short)t5 * (short)0xB0)), (((int)stk + 0) + 0x18));
        math_mat_transform_vector((((int)stk + 0) + 0xC), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (*(int *)(((int)stk + 8)))));
    } else {
        math_mat_get_translate((a4 + 0x6C), (((int)stk + 0) + 0x18));
        math_mat_transform_vector((((int)stk + 0) + 0xC), (a4 + 0x6C));
    }
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)(((int)stk + 24))));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)(((int)stk + 28))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 32))));
    return (vec3f_to_vec3s((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4)))));
}

int FUN_0c020594(int a4, int a5, int a6)
{
    int stk[5];
    int t3;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    vec3s_to_vec3f((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    if (((*(signed char *)((a4 + 0x2))) == 0) && (t3 = *(signed char *)(((int)stk + 0)), t3 != -1)) {
        math_mat_transform_vector((((int)stk + 0) + 0x8), (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (short)((short)(*(signed char *)(((int)stk + 0))) * (short)0xB0)));
    } else {
        math_mat_transform_vector((((int)stk + 0) + 0x8), (a4 + 0x6C));
    }
    return (vec3f_to_vec3s((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 4)))));
}

void vec3s_midpoint_to_vec3f(short *vec_a, short *vec_b, int unused_a, int unused_b, Vec3f *dst)
{
    Vec3f mid;

    mid.x = (vec_a[0] + vec_b[0]) / 2;
    mid.y = (vec_a[1] + vec_b[1]) / 2;
    mid.z = (vec_a[2] + vec_b[2]) / 2;
    *dst = mid;
}


int FUN_0c0207a2(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x144)))) {
            return 0x1;
        }
        if ((*(int *)((((t0 << 2) + (0x11C + a4)) + 0x0))) == a5) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x0;
}


int FUN_0c0208ec(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)((a5 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x2));
            if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
                return t0;
            }
            FUN_0c08dbc8(a4, a5);
            return FUN_0c08dc24(a4, a5);
        }
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
            return t0;
        }
        return FUN_0c08dbc8(a4, a5);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4))))) {
        return t0;
    }
    return FUN_0c08d6ec(a4, a5);
}

int FUN_0c0209c6(int a4, float f4)
{
    int stk[16];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u19;
    register float u22;
    register float t23;

    *(float *)(((int)stk + 0)) = f4;
    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 8)) = (hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0));
    *(unsigned int *)(((int)stk + 4)) = (hit_find_part_entry(t1, 0x1, (*(signed char *)((t1 + 0x102))), 0x0));
    FUN_0c0210f4(a4, (((int)stk + 0) + 0x2C), (*(int *)(((int)stk + 8))));
    FUN_0c0210f4(t1, (((int)stk + 0) + 0x18), (*(int *)(((int)stk + 4))));
    u9 = *(float *)(((int)stk + 0));
    u10 = *(float *)(((int)stk + 36));
    u11 = *(float *)(((int)stk + 24));
    u12 = *(float *)(((int)stk + 44));
    *(float *)(((int)stk + 20)) = (u12 - u11);
    u13 = *(float *)(((int)stk + 28));
    u14 = *(float *)(((int)stk + 48));
    *(float *)(((int)stk + 12)) = (u14 - u13);
    u15 = *(float *)(((int)stk + 32));
    u16 = *(float *)(((int)stk + 52));
    u19 = ((u14 - u13) * (u14 - u13));
    u19 = u19 + ((u12 - u11)) * ((u12 - u11));
    *(float *)(((int)stk + 16)) = (u16 - u15);
    u22 = u19;
    u22 = u22 + ((u16 - u15)) * ((u16 - u15));
    t23 = math_signed_sqrt(u22);
    return (((((u9 + u10) - t23) > 0.0f)) ? 1 : 0);
}

float FUN_0c020a80(int a4, float f4)
{
    int stk[17];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u18;
    register float u21;
    register float t22;
    register float u23;
    register float u24;
    register float u25;
    register float u28;
    register float u31;
    register float u36;
    register float u39;
    register float u41;
    register float u42;
    register float u43;
    register float u46;
    register float u49;
    register float u54;
    register float u57;
    register float u63;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 8)) = (hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0));
    *(unsigned int *)(((int)stk + 12)) = (hit_find_part_entry(t1, 0x1, (*(signed char *)((t1 + 0x102))), 0x0));
    FUN_0c0210f4(a4, (((int)stk + 8) + 0x28), (*(int *)(((int)stk + 8))));
    FUN_0c0210f4(t1, (((int)stk + 8) + 0x14), (*(int *)(((int)stk + 12))));
    u9 = *(float *)(((int)stk + 40));
    u10 = *(float *)(((int)stk + 28));
    u11 = *(float *)(((int)stk + 48));
    *(float *)(((int)stk + 20)) = (u11 - u10);
    u12 = *(float *)(((int)stk + 32));
    u13 = *(float *)(((int)stk + 52));
    *(float *)(((int)stk + 16)) = (u13 - u12);
    u14 = *(float *)(((int)stk + 36));
    u15 = *(float *)(((int)stk + 56));
    u18 = ((u13 - u12) * (u13 - u12));
    u18 = u18 + ((u11 - u10)) * ((u11 - u10));
    u21 = u18;
    u21 = u21 + ((u15 - u14)) * ((u15 - u14));
    *(float *)(((int)stk + 24)) = (u15 - u14);
    t22 = math_signed_sqrt(u21);
    if (0.0f > ((f4 + u9) - t22)) {
        u23 = *(float *)(((int)stk + 40));
        *(float *)(((int)stk + 4)) = ((-f4) - u23);
        u24 = *(float *)(((int)stk + 36));
        u25 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 0)) = (u25 - u24);
        u28 = *(float *)(((int)stk + 28));
        u31 = *(float *)(((int)stk + 32));
        u36 = (((*(float *)(((int)stk + 52))) - u31) * ((*(float *)(((int)stk + 52))) - u31));
        u36 = u36 + (((*(float *)(((int)stk + 48))) - u28)) * (((*(float *)(((int)stk + 48))) - u28));
        u39 = u36;
        u39 = u39 + (((*(float *)(((int)stk + 56))) - (*(float *)(((int)stk + 36))))) * ((u25 - u24));
        u63 = (((-f4) - u23) + (math_signed_sqrt(u39)));
    } else {
        u41 = *(float *)(((int)stk + 40));
        *(float *)(((int)stk + 4)) = (f4 + u41);
        u42 = *(float *)(((int)stk + 36));
        u43 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 0)) = (u43 - u42);
        u46 = *(float *)(((int)stk + 28));
        u49 = *(float *)(((int)stk + 32));
        u54 = (((*(float *)(((int)stk + 52))) - u49) * ((*(float *)(((int)stk + 52))) - u49));
        u54 = u54 + (((*(float *)(((int)stk + 48))) - u46)) * (((*(float *)(((int)stk + 48))) - u46));
        u57 = u54;
        u57 = u57 + (((*(float *)(((int)stk + 56))) - (*(float *)(((int)stk + 36))))) * ((u43 - u42));
        u63 = ((f4 + u41) - (math_signed_sqrt(u57)));
    }
    return u63;
}


int hit_list_calc_displacement(int a4)
{
    register int t1;
    register int t0;
    register float u2;
    register float u3;

    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = 0x270;
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x20;
        u2 = (*(float *)((t1 + t0)));
        t0 = 0x270;
        u2 = (u2 - u3);
        *(float *)((t1 + t0)) = u2;
        t0 = (t0 + 0x4);
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x24;
        u2 = (*(float *)((t1 + t0)));
        t0 = 0x274;
        u2 = (u2 - u3);
        *(float *)((t1 + t0)) = u2;
        t0 = (t0 + 0x4);
        u3 = (*(float *)((t1 + t0)));
        t0 = 0x28;
        u2 = (*(float *)((t1 + t0)));
        t0 = 0x278;
        u2 = (u2 - u3);
        *(float *)((t1 + t0)) = u2;
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t0;
}

int FUN_0c020cc2(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    (((struct o10_float *)(a4))->v) = (float)(*(short *)((a5 + 0x8)));
    (((struct o14_float *)(a4))->v) = (float)(*(short *)((a5 + 0xA)));
    return 0x14;
}

int FUN_0c020d20(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    (((struct o10_float *)(a4))->v) = (float)(*(short *)((a5 + 0x8)));
    (((struct o14_float *)(a4))->v) = (float)(*(short *)((a5 + 0xA)));
    (((struct o18_float *)(a4))->v) = (float)(*(short *)((a5 + 0xC)));
    (((struct o1C_float *)(a4))->v) = (float)(*(short *)((a5 + 0xE)));
    (((struct o20_float *)(a4))->v) = (float)(*(short *)((a5 + 0x10)));
    (((struct o24_float *)(a4))->v) = (float)(*(short *)((a5 + 0x12)));
    (((struct o28_float *)(a4))->v) = (float)(*(short *)((a5 + 0x14)));
    (((struct o2C_float *)(a4))->v) = (float)(*(short *)((a5 + 0x16)));
    (((struct o30_float *)(a4))->v) = (float)(*(short *)((a5 + 0x18)));
    (((struct o34_float *)(a4))->v) = (float)(*(short *)((a5 + 0x1A)));
    (((struct o38_float *)(a4))->v) = (float)(*(short *)((a5 + 0x1C)));
    (((struct o3C_float *)(a4))->v) = (float)(*(short *)((a5 + 0x1E)));
    (((struct o40_float *)(a4))->v) = (float)((((struct o20_short *)(a5))->v));
    (((struct o44_float *)(a4))->v) = (float)((((struct o22_short *)(a5))->v));
    (((struct o48_float *)(a4))->v) = (float)((((struct o24_short *)(a5))->v));
    (((struct o4C_float *)(a4))->v) = (float)((((struct o26_short *)(a5))->v));
    (((struct o50_float *)(a4))->v) = (float)((((struct o28_short *)(a5))->v));
    (((struct o54_float *)(a4))->v) = (float)((((struct o2A_short *)(a5))->v));
    (((struct o58_float *)(a4))->v) = (float)((((struct o2C_short *)(a5))->v));
    (((struct o5C_float *)(a4))->v) = (float)((((struct o2E_short *)(a5))->v));
    return 0x5C;
}

int conv_s16x5_to_f32(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct o10_float *)(a4))->v) = (float)(*(short *)((a5 + 0x8)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    return 0xC;
}

int conv_s16x4_to_f32(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    return 0xC;
}

int conv_s16x4_to_f32_b(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    return 0xC;
}

int conv_s16x7_to_f32(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (float)(*(short *)((a5 + 0x0)));
    (((struct o4_float *)(a4))->v) = (float)(*(short *)((a5 + 0x2)));
    (((struct o8_float *)(a4))->v) = (float)(*(short *)((a5 + 0x4)));
    (((struct oC_float *)(a4))->v) = (float)(*(short *)((a5 + 0x6)));
    (((struct o10_float *)(a4))->v) = (float)(*(short *)((a5 + 0x8)));
    (((struct o14_float *)(a4))->v) = (float)(*(short *)((a5 + 0xA)));
    (((struct o18_float *)(a4))->v) = (float)(*(short *)((a5 + 0xC)));
    return 0x18;
}

void hit_load_box_world_dup(char *obj, float *dst, float *src)
{
    math_mat_transform_point(src, obj + 108);
    *(struct vec3f *)dst = *(struct vec3f *)src;
    dst[3] = src[3] * *(float *)(obj + 80);
    dst[4] = src[4] * *(float *)(obj + 84);
    dst[5] = src[5] * *(float *)(obj + 88);
}

void hit_load_box_world(char *obj, float *dst, float *src)
{
    math_mat_transform_point(src, obj + 108);
    *(struct vec3f *)dst = *(struct vec3f *)src;
    dst[3] = src[3] * *(float *)(obj + 80);
    dst[4] = src[4] * *(float *)(obj + 84);
    dst[5] = src[5] * *(float *)(obj + 88);
}

int FUN_0c0210f4(int a4, int a5, int a6)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    hit_get_cylinder_entry((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (hit_load_cylinder_world((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}

int FUN_0c021120(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    hit_get_sphere_entry((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (((int)stk + 0) + 0xC));
    return (hit_load_sphere_world((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC)));
}

int FUN_0c02114c(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    float u0;

    *(float *)((a4 + 0x0)) = (f6 - f4);
    (((struct o4_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)(a4))->v) = (f7 - f5);
    if (((*(float *)((a4 + 0x0))) == 0.0f) && (u0 = (((struct o8_float *)(a4))->v), u0 == 0.0f)) {
        u0 = *(float *)0xC0212BC;
        (((struct o8_float *)(a4))->v) = u0;
        *(float *)((a4 + 0x0)) = u0;
    }
    return FUN_0c0e24f0(a4, a5, a6, f4, f5, (f6 - f4), (f7 - f5));
}

int FUN_0c021178(int a4, Stk6 s, float f4, float f5, float f6, float f7)
{
    int stk[15];
    register float u9;
    register float u7;
    float u8;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    *(float *)((a4 + 0x0)) = (((((struct o10_float *)(((int)stk + 4)))->v)) - ((((struct o4_float *)(((int)stk + 4)))->v)));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x10)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x10)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
    if (((*(float *)((a4 + 0x0))) == 0.0f) && ((u7 = (((struct o8_float *)(a4))->v), u7 == 0.0f) && (u8 = (((struct o4_float *)(a4))->v), u8 == 0.0f))) {
        u9 = *(float *)0xC0212BC;
        (((struct o4_float *)(a4))->v) = u9;
        (((struct o8_float *)(a4))->v) = u9;
        *(float *)((a4 + 0x0)) = u9;
    }
    return (FUN_0c0e24f0(a4, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), f4, f5, f6, f7));
}

float FUN_0c0211d0(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((f4 > f6) && (f7 > f5)) {
        u0 = (f7 - f5);
        if ((f7 - f5) > (f4 - f6)) {
            u0 = (f4 - f6);
        }
        u1 = ((u0 + f6) - f7);
    } else {
        if ((f6 > f4) && (f5 > f7)) {
            u0 = (f5 - f7);
            if ((f5 - f7) > (f6 - f4)) {
                u0 = (f6 - f4);
            }
            u2 = ((u0 + f4) - f5);
        } else {
            u0 = f6;
            if (!(f6 > f4)) {
                u0 = f4;
            }
            u3 = f7;
            if (!(f5 > f7)) {
                u3 = f5;
            }
            u2 = (((((f4 - f5) + f6) - f7) - u0) + u3);
        }
        u1 = u2;
    }
    return u1;
}

