/* hit box data converters, per-frame object lists, hit edit draw (0c0228ac-0c02380c) */

/* named globals (symbols.txt) */
char *hit_get_box_entry(char *obj, int index, int out);
extern char g_hit_table_desc[];
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c0211d0(float, float, float, float);
float math_signed_sqrt(float);
int FUN_0c020d20(int, int);
int conv_s16x7_to_f32(int, int);
int FUN_0c0e7140(int);
int conv_s16x4_to_f32_b(int, int);
typedef struct { char bytes[8]; } Entry8;
extern void conv_s16x4_to_f32(int, Entry8 *);
typedef struct { char b[10]; } Rec10;
extern void conv_s16x5_to_f32(int, Rec10 *);
void math_mat_get_translate(char *m, float *offset_vec);
void math_mat_transform_vector(float *vec, char *m);
struct o0_float { float v; };
int FUN_0c0e24f0(int);
int FUN_0c0210f4(int, int, int);
struct o14_float { char p[0x14]; float v; };

int hit_find_part_entry(int a4, int a5, int a6, int a7);

int FUN_0c0228ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a6))->v);
    u1 = (((struct oC_float *)(a7))->v);
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a7 + 0x0));
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a7))->v);
    u4 = (((struct o10_float *)(a7))->v);
    u5 = (((struct o4_float *)(a6))->v);
    u6 = (((struct oC_float *)(a6))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u0 + u1) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int hit_find_part_entry(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)((a4 + 0x3));
            t2 = t1;
            if ((int)t1 >= (int)0x2) {
                t2 = (t1 - 2);
            }
            t0 = ((t2 << 1) + 0x1);
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x3));
        t2 = t0;
        if ((int)t0 >= (int)0x2) {
            t2 = (t0 - 2);
        }
        t1 = (t2 << 1);
    }
    return (((*(int *)((((signed char)a5 << 2) + ((((t1 << 2) << 2) << 1) + ((int)g_hit_table_desc))))) + (((short)(unsigned char)a6 * (short)(*(signed char *)((((signed char)a5 + (0xC320034 + ((*(signed char *)((a4 + 0x2))) << 1))) + 0x0)))) << 2)) + (a7 << 2));
}

int FUN_0c0229d8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    int t0;
    register int t5;
    register int t6;
    register int t13;
    register int t14;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t19 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t19 = 0x0;
            }
        } else {
            t5 = *(signed char *)((a4 + 0x3));
            t6 = t5;
            if ((int)t5 >= (int)0x2) {
                t6 = (t5 - 2);
            }
            t19 = ((t6 << 1) + 0x1);
        }
    } else {
        t13 = *(signed char *)((a4 + 0x3));
        t14 = t13;
        if ((int)t13 >= (int)0x2) {
            t14 = (t13 - 2);
        }
        t19 = (t14 << 1);
    }
    *(volatile int *)(((((t19 << 2) << 2) << 1) + 0xC7D08E8));
    FUN_0c0e7140(a4);
    return (conv_s16x4_to_f32_b((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4)));
}

int FUN_0c022a5a(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t0;
    register int t5;
    register int t6;
    register int t13;
    register int t14;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t19 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t19 = 0x0;
            }
        } else {
            t5 = *(signed char *)((a4 + 0x3));
            t6 = t5;
            if ((int)t5 >= (int)0x2) {
                t6 = (t5 - 2);
            }
            t19 = ((t6 << 1) + 0x1);
        }
    } else {
        t13 = *(signed char *)((a4 + 0x3));
        t14 = t13;
        if ((int)t13 >= (int)0x2) {
            t14 = (t13 - 2);
        }
        t19 = (t14 << 1);
    }
    *(volatile int *)(((((t19 << 2) << 2) << 1) + 0xC7D08EC));
    FUN_0c0e7140(a4);
    return (conv_s16x7_to_f32((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4)));
}

int FUN_0c022b08(int a4, int a5, int a6, int a7)
{
    int stk[13];
    int t0;
    register int t5;
    register int t6;
    register int t13;
    register int t14;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            t19 = 0x4;
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
                t19 = 0x0;
            }
        } else {
            t5 = *(signed char *)((a4 + 0x3));
            t6 = t5;
            if ((int)t5 >= (int)0x2) {
                t6 = (t5 - 2);
            }
            t19 = ((t6 << 1) + 0x1);
        }
    } else {
        t13 = *(signed char *)((a4 + 0x3));
        t14 = t13;
        if ((int)t13 >= (int)0x2) {
            t14 = (t13 - 2);
        }
        t19 = (t14 << 1);
    }
    *(volatile int *)(((((t19 << 2) << 2) << 1) + 0xC7D08F0));
    FUN_0c0e7140(a4);
    return (FUN_0c020d20((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4)));
}

Entry8 *hit_get_sphere_entry(char *obj, unsigned short idx, int arg)
{
    Entry8 entry;
    Entry8 *slot;
    int table_idx = 0;
    int sub_kind;

    switch (obj[2]) {
    case 0:
        sub_kind = obj[3];
        table_idx = (sub_kind >= 2 ? sub_kind - 2 : sub_kind) << 1;
        break;
    case 1:
        sub_kind = obj[3];
        table_idx = ((sub_kind >= 2 ? sub_kind - 2 : sub_kind) << 1) + 1;
        break;
    case 2:
    case 3:
    case 4:
        table_idx = 4;
        break;
    }
    slot = ((Entry8 **)0x0C7D08EC)[table_idx * 8] + idx;
    entry = *slot;
    conv_s16x4_to_f32(arg, &entry);
    return slot;
}

Rec10 *hit_get_cylinder_entry(char *obj, unsigned short idx, int extra_arg)
{
    Rec10 rec_copy;
    Rec10 *rec_ptr;
    int sub_kind, list_idx;

    sub_kind = obj[3];
    switch (obj[2]) {
    case 0:
        list_idx = (sub_kind >= 2 ? sub_kind - 2 : sub_kind) << 1;
        break;
    case 1:
        list_idx = ((sub_kind >= 2 ? sub_kind - 2 : sub_kind) << 1) + 1;
        break;
    case 2:
    case 3:
    case 4:
        list_idx = 4;
        break;
    default:
        list_idx = 0;
        break;
    }
    rec_ptr = ((Rec10 **)0xC7D08F0)[list_idx * 8] + idx;
    rec_copy = *rec_ptr;
    conv_s16x5_to_f32(extra_arg, &rec_copy);
    return rec_ptr;
}


void hit_offset_point_by_owner(char *obj, float *vec, char sel_idx)
{
    float offset_vec[3];
    int sel_off;
    if (obj[2] == 0 && sel_idx != -1) {
        sel_off = (short)(sel_idx * 176);
        math_mat_get_translate(obj + 768 + (short)(*(signed char *)(obj + 0x71F1) * 3520) + sel_off, offset_vec);
        math_mat_transform_vector(vec, obj + 768 + (short)(*(signed char *)(obj + 0x71F1) * 3520) + sel_off);
    } else {
        math_mat_get_translate(obj + 108, offset_vec);
        math_mat_transform_vector(vec, obj + 108);
    }
    vec[0] = vec[0] + offset_vec[0];
    vec[1] = vec[1] + offset_vec[1];
    vec[2] = vec[2] + offset_vec[2];
}

float FUN_0c022dfc(int a4, int a5)
{
    int stk[4];
    register float u15;
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    u15 = 1.0f;
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        t1 = *(signed char *)((a4 + 0x71F1));
        t2 = *(signed char *)(((int)stk + 0));
        u3 = *(float *)(((((0x300 + a4) + (short)((short)t1 * (short)0xDC0)) + (short)((short)t2 * (short)0xB0)) + 0x0));
        *(float *)(((int)stk + 12)) = u3;
        u4 = (((struct o4_float *)((((0x300 + a4) + (short)((short)t1 * (short)0xDC0)) + (short)((short)t2 * (short)0xB0))))->v);
        *(float *)(((int)stk + 8)) = u4;
        u6 = (((struct o8_float *)((((0x300 + a4) + (short)((short)t1 * (short)0xDC0)) + (short)((short)t2 * (short)0xB0))))->v);
        u7 = (u4 * u4);
        u7 = u7 + u3 * (*(float *)(((int)stk + 12)));
        *(float *)(((int)stk + 4)) = u6;
        u8 = u7;
        u8 = u8 + u6 * u6;
        u15 = (math_signed_sqrt(u8));
    }
    return u15;
}

int hit_part_pair_overlap(int a4, int a5, int a6, float f4)
{
    int stk[6];
    register int t51;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u12;
    register float u15;
    register float t16;
    register float u25;
    register float u29;
    register float u34;
    register float u39;
    register float u44;
    float u1;
    float u24;

    t51 = 0x0;
    if ((((((struct oC_float *)(a4))->v)) != 0.0f) && (u1 = (((struct oC_float *)(a5))->v), u1 != 0.0f)) {
        u2 = (((struct oC_float *)(a4))->v);
        u3 = (((struct oC_float *)(a5))->v);
        u4 = *(float *)((a4 + 0x0));
        u5 = *(float *)((a5 + 0x0));
        *(float *)(((int)stk + 8)) = (u4 - u5);
        u6 = (((struct o4_float *)(a5))->v);
        u7 = (((struct o4_float *)(a4))->v);
        *(float *)(((int)stk + 0)) = (u7 - u6);
        u8 = (((struct o8_float *)(a5))->v);
        u9 = (((struct o8_float *)(a4))->v);
        u12 = ((u7 - u6) * (u7 - u6));
        u12 = u12 + ((u4 - u5)) * ((u4 - u5));
        u15 = u12;
        u15 = u15 + ((u9 - u8)) * ((u9 - u8));
        *(float *)(((int)stk + 4)) = (u9 - u8);
        t16 = math_signed_sqrt(u15);
        t51 = 0x0;
        if (((u2 + u3) - t16) > 0.0f) {
            *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
            *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
            if (((*(float *)(((int)stk + 12))) == 0.0f) && (u24 = *(float *)(((int)stk + 20)), u24 == 0.0f)) {
                u25 = (((struct o0_float *)0xC023468)->v);
                *(float *)(((int)stk + 20)) = u25;
                *(float *)(((int)stk + 12)) = u25;
            }
            FUN_0c0e24f0((((int)stk + 0) + 0xC));
            u29 = (((struct o8_float *)0xC023468)->v);
            u34 = (*(float *)((a4 + 0x0)));
            u34 = u34 + (*(float *)(((int)stk + 12))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            *(float *)((a6 + 0x0)) = u34;
            u39 = ((((struct o4_float *)(a4))->v));
            u39 = u39 + (*(float *)(((int)stk + 16))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            (((struct o4_float *)(a6))->v) = u39;
            u44 = ((((struct o8_float *)(a4))->v));
            u44 = u44 + (*(float *)(((int)stk + 20))) * ((((((struct oC_float *)(a4))->v)) - (((u2 + u3) - t16) / u29)));
            (((struct o8_float *)(a6))->v) = u44;
            t51 = 0x1;
        }
    }
    return t51;
}

int FUN_0c0234ca(int a4, int a5)
{
    register int t1;

    t1 = hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0);
    return FUN_0c0210f4(a4, a5, t1);
}

int FUN_0c0235ca(void)
{
    return 0x8;
}

int FUN_0c0235ce(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct oC_float *)(a4))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

int FUN_0c023680(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u51;
    float u19;
    register int t75;
    float u52;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o14_float *)(a5))->v);
    u7 = (((struct oC_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o10_float *)(a5))->v);
    u13 = (((struct oC_float *)(a4))->v);
    u14 = (((struct o4_float *)(a4))->v);
    u15 = (((struct o4_float *)(a5))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    u18 = *(float *)((((int)stk + 0) + 0x0));
    if (!(u18 > ((u13 + u12) - u16)) && (u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(u18 > u19))) {
        t75 = 0x7;
        if ((*(float *)((a5 + 0x0))) > (*(float *)((a4 + 0x0)))) {
            t75 = 0x5;
        }
    } else {
        u51 = (((struct o8_float *)(((int)stk + 0)))->v);
        if (((*(float *)((((int)stk + 0) + 0x0))) > u51) && (u52 = (((struct o4_float *)(((int)stk + 0)))->v), u52 > u51)) {
            t75 = 0x6;
            if (((((struct o8_float *)(a5))->v)) > ((((struct o8_float *)(a4))->v))) {
                t75 = 0x4;
            }
        } else {
            t75 = 0x2;
            if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
                t75 = 0x3;
            }
        }
    }
    return t75;
}

int FUN_0c02374e(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u5 - u4) * (u5 - u4));
    u6 = u6 + ((u2 - u3)) * ((u2 - u3));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o10_float *)(a4))->v);
    u5 = (((struct o4_float *)(a5))->v);
    u6 = (((struct oC_float *)(a5))->v);
    u7 = FUN_0c0211d0((u6 + u5), (u5 - u6), (u4 + u3), (u3 - u4));
    t0 = 0x8;
    if (u7 > ((u0 + u1) - u2)) {
    } else {
        t0 = 0x2;
        if (((((struct o4_float *)(a5))->v)) > ((((struct o4_float *)(a4))->v))) {
            t0 = 0x3;
        }
    }
    return t0;
}

/* the 12-byte hit box entry `index` of the object's table (by kind and side), handed to FUN_0c020cc2 with `out`; returns it */
struct HitBox12 { char b[12]; };      /* copied byte by byte (_slow_mvn), as the original does */
extern char g_hit_table_desc[];
extern int FUN_0c020cc2(int out, struct HitBox12 *box);

char *hit_get_box_entry(char *obj, int index, int out)
{
    int slot = 0;
    int side;
    char *entry;
    struct HitBox12 box;

    switch (obj[2]) {
    case 0:
        side = obj[3];
        slot = (side >= 2 ? side - 2 : side) << 1;
        break;
    case 1:
        side = obj[3];
        slot = ((side >= 2 ? side - 2 : side) << 1) + 1;
        break;
    case 2:
    case 3:
    case 4:
        slot = 4;
        break;
    }
    entry = *(char **)(g_hit_table_desc + 0x14 + slot * 32) + (unsigned short)index * 12;
    box = *(struct HitBox12 *)entry;
    FUN_0c020cc2(out, &box);
    return entry;
}
