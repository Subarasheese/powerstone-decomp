/* hit box data converters, per-frame object lists, hit edit draw (0c023d04-0c025958) */

/* named globals (symbols.txt) */
int FUN_0c02565a(int a4, int a5, int a6, int a7);
int FUN_0c0255ae(int a4, int a5, int a6, int a7);
int FUN_0c024992(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0246b2(int a4, int a5, int a6, int a7);
int FUN_0c024446(int a4, int a5, int a6, int a7);
extern char g_obj_list_heads[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_signed_sqrt(float);
struct o10_float { char p[0x10]; float v; };
int FUN_0c0e6fdc(void);
int FUN_0c0e6fe8(void);
typedef struct { int x, y, z; } vec3i;
struct draw_params { int head; vec3i pos; float field_16, field_20; int pad24[4]; int field_40; float field_44; int pad48; int field_52; };
void ui_sprite_queue_add(void *, int, int, int, int, int);
int FUN_0c0dd5d0(int a4, int a5);
int nlObjPutUseViewMatrix(int);
int FUN_0c0dcd20(float, float, float);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int nlScale(float, float, float);
int FUN_0c0e2140(int);
int nlUnitMatrix(void);
int FUN_0c0e2050(int);
struct o27C_uchar { char p[0x27C]; unsigned char v; };
int hit_debug_draw_object_parts(int);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c02466e(int);
int conv_s16x4_to_f32(int, int);
int hit_load_sphere_world(int, int, int);
struct o14_float { char p[0x14]; float v; };
float FUN_0c0211d0(float, float, float, float, float, float, float);
void FUN_0c02114c(float *dir, float ax, float az, float bx, float bz);
#define F(o, n) (*(float *)((o) + (n)))

int FUN_0c024298(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c024300(int a4, float f4, float f5, float f6, float f7);
int FUN_0c0243b0(int a4, int a5, float f4, float f5, float f6);
int FUN_0c02440e(int a4);

int FUN_0c023d04(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct o20_float *)(a4))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    u0 = math_signed_sqrt(u4);
    t0 = 0x0;
    if (!(0.0f > (((((struct oC_float *)(a5))->v)) - u0))) {
        t0 = 0x0;
        if (!((((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v))) > (((((struct o24_float *)(a4))->v)) + 1.0f))) {
            t0 = 0x0;
            if ((((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v))) > ((((struct o2D4_float *)(a4))->v))) {
                (((struct o2D4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct oC_float *)(a5))->v)));
                t0 = 0x1;
            }
        }
    }
    return t0;
}

int FUN_0c023d8e(void)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t10;
    register int t11;
    register int t20;
    register int t21;
    register int t23;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t1 << 1) + t1) + 0xC33EC20) + 0x1)))) {
            break;
        }
        *(volatile int *)((0xC33EB20 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fdc();
        FUN_0c0243b0((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0xC), 1.0f, 0.0f, 1.0f);
        t0 = (t0 + 0x1);
    }
    t10 = 0x0;
    for (;;) {
        t11 = *(signed char *)0xC7F3051;
        if ((int)t10 >= (int)(*(signed char *)(((((t11 << 1) + t11) + 0xC33EC20) + 0x0)))) {
            break;
        }
        *(volatile int *)((0xC33EAA0 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fe8();
        FUN_0c024298(((int)stk + 0), ((((struct o10_float *)(((int)stk + 0)))->v)), ((((struct oC_float *)(((int)stk + 0)))->v)), 1.0f, 0.0f, 1.0f);
        t10 = (t10 + 0x1);
    }
    t20 = 0x0;
    for (;;) {
        t21 = *(signed char *)0xC7F3051;
        t23 = *(signed char *)(((((t21 << 1) + t21) + 0xC33EC20) + 0x2));
        if ((int)t20 >= (int)t23) {
            break;
        }
        *(volatile int *)((0xC33EBA0 + ((*(signed char *)0xC7F3051) << 2)));
        FUN_0c0e6fdc();
        FUN_0c024300((((int)stk + 0) + 0x2C), ((((struct oC_float *)((((int)stk + 0) + 0x2C)))->v)), 1.0f, 0.0f, 1.0f);
        t20 = (t20 + 0x1);
    }
    return t23;
}

void FUN_0c023ebc(vec3i *vec)
{
    struct draw_params params;
    params.field_40 = 0;
    params.field_52 = 10;
    params.field_44 = 1.0f;
    params.field_16 = 10.0f;
    params.field_20 = 10.0f;
    params.head = *(short *)0x0C17FDB2;
    params.pos = *vec;
    ui_sprite_queue_add(&params, 0x0c17fdb0, 3, 0, 0, 2);
}

int FUN_0c024274(void)
{
    FUN_0c0dd5d0(0xC178D88, 0xC320008);
    FUN_0c0dd5d0(0xC178FC0, 0xC320008);
    return (FUN_0c0dd5d0(0xC179D00, 0xC320008));
}

int FUN_0c024298(int a4, float f4, float f5, float f6, float f7, float f8)
{
    FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    FUN_0c0e2140(a4);
    nlScale(f5, f4, f5);
    FUN_0c0dcd20(f6, f7, f8);
    nlObjPutUseViewMatrix(0xC178FC0);
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c024300(int a4, float f4, float f5, float f6, float f7)
{
    FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    FUN_0c0e2140(a4);
    nlScale(f4, f4, f4);
    FUN_0c0dcd20(f5, f6, f7);
    nlObjPutUseViewMatrix(0xC179D00);
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c0243b0(int a4, int a5, float f4, float f5, float f6)
{
    FUN_0c0e19b0(0x0);
    nlUnitMatrix();
    FUN_0c0e2140(a4);
    FUN_0c0e2050(a5);
    FUN_0c0dcd20(f4, f5, f6);
    nlObjPutUseViewMatrix(0xC178D88);
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c02440e(int a4)
{
    register int t1;
    register int t0;

    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = (hit_debug_draw_object_parts(t1));
        t1 = (*(int *)((t1 + 0x18)));
    }
    return t0;
}

int FUN_0c024426(void)
{
    FUN_0c02440e(0xC7E40C4);
    FUN_0c02440e(((((struct o0_int *)g_obj_list_heads)->v)));
    FUN_0c02440e(((((struct o4_int *)g_obj_list_heads)->v)));
    FUN_0c02440e(((((struct o8_int *)g_obj_list_heads)->v)));
    return FUN_0c02440e(((((struct oC_int *)g_obj_list_heads)->v)));
}


int hit_world_reset(void)
{
    (((struct o0_uint *)0xC7E40D8)->v) = 0x0;
    (((struct o4_uint *)0xC7E40D8)->v) = 0xC7EB394;
    (((struct o0_uint *)0xC7EB3A8)->v) = 0xC7E40C4;
    (((struct o4_uint *)0xC7EB3A8)->v) = 0x0;
    *(unsigned char *)0xC7E4340 = 0x0;
    *(unsigned char *)0xC7EB610 = 0x0;
    FUN_0c02466e(0xC7E40C4);
    FUN_0c02466e(((((struct o0_int *)g_obj_list_heads)->v)));
    FUN_0c02466e(((((struct o4_int *)g_obj_list_heads)->v)));
    FUN_0c02466e(((((struct o8_int *)g_obj_list_heads)->v)));
    return FUN_0c02466e(((((struct oC_int *)g_obj_list_heads)->v)));
}


int FUN_0c0247d0(int a4, int a5)
{
    (((struct o27C_uchar *)(a4))->v) = a5;
    return 0x27C;
}

/* Box-box overlap test: returns 0 for none, 1 for overlap, 2..7 for the axis/side of least penetration, pushing the owner's offsets. */
int hit_box_vs_box_side(float *box_a, char *owner, float *box_b)
{
    float pen_x, pen_y, pen_z, delta, push;

    delta = box_a[0] - box_b[0];
    if (0.0f > delta)
        delta = box_b[0] - box_a[0];
    pen_x = (box_a[3] + box_b[3]) - delta;

    delta = box_a[1] - box_b[1];
    if (0.0f > delta)
        delta = box_b[1] - box_a[1];
    pen_y = (box_a[4] + box_b[4]) - delta;

    delta = box_a[2] - box_b[2];
    if (0.0f > delta)
        delta = box_b[2] - box_a[2];
    pen_z = (box_a[5] + box_b[5]) - delta;

    if (0.0f > pen_x)
        return 0;
    if (0.0f > pen_z)
        return 0;
    if (0.0f > pen_y)
        return 0;
    if (owner[0x2D9] != 0)
        return 1;
    if (!(pen_x > pen_y) && !(pen_x > pen_z)) {
        if (box_a[0] > box_b[0])
            push = box_a[0] - box_a[3] - box_b[3];
        else
            push = box_a[0] + box_a[3] + box_b[3];
        push = push - box_b[0];
        *(float *)(owner + 32) = push + *(float *)(owner + 32);
        return box_a[0] > box_b[0] ? 5 : 7;
    }
    if (!(pen_z > pen_x) && !(pen_z > pen_y)) {
        if (box_a[2] > box_b[2])
            push = box_a[2] - box_a[5] - box_b[5];
        else
            push = box_a[2] + box_a[5] + box_b[5];
        push = push - box_b[2];
        *(float *)(owner + 40) = push + *(float *)(owner + 40);
        return box_a[2] > box_b[2] ? 4 : 6;
    }
    if (pen_y > pen_x)
        return 1;
    if (pen_y > pen_z)
        return 1;
    if (box_a[1] > box_b[1])
        push = box_a[1] - box_a[4] - box_b[4];
    else
        push = box_a[1] + box_a[4] + box_b[4];
    push = push - box_b[1];
    *(float *)(owner + 36) = push + *(float *)(owner + 36);
    return box_a[1] > box_b[1] ? 3 : 2;
}


int FUN_0c024b5e(int a4, int a5, int a6)
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
    register float u160;
    float u161;
    register float u193;
    register float u194;
    register float u205;
    register float u218;
    register float u219;
    register float u234;
    register float u235;
    float u162;
    register float u199;
    register float u224;
    register float u240;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a6))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct oC_float *)(a6))->v);
    u7 = (((struct o14_float *)(a4))->v);
    u8 = (((struct o8_float *)(a4))->v);
    u9 = (((struct o8_float *)(a6))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a6))->v);
    u13 = (((struct o10_float *)(a4))->v);
    u14 = (((struct o4_float *)(a4))->v);
    u15 = (((struct o4_float *)(a6))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u13 + u12) - u16);
    if (0.0f > (*(float *)((((int)stk + 0) + 0x0)))) {
        return 0x0;
    }
    if (0.0f > ((((struct o8_float *)(((int)stk + 0)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
        return 0x0;
    }
    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        return 0x1;
    }
    u160 = *(float *)((((int)stk + 0) + 0x0));
    u161 = (((struct o4_float *)(((int)stk + 0)))->v);
    if (!(u160 > u161) && (u162 = (((struct o8_float *)(((int)stk + 0)))->v), !(u160 > u162))) {
        u193 = *(float *)((a6 + 0x0));
        u194 = *(float *)((a4 + 0x0));
        if (u194 > u193) {
            u199 = ((u194 - ((((struct oC_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
        } else {
            u199 = ((u194 + ((((struct oC_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
        }
        (((struct o20_float *)(a5))->v) = ((u199 - u193) + ((((struct o20_float *)(a5))->v)));
        if ((*(float *)((a4 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            return 0x5;
        }
        return 0x7;
    }
    u205 = (((struct o8_float *)(((int)stk + 0)))->v);
    if ((u160 > u205) && (u161 > u205)) {
        u218 = (((struct o8_float *)(a6))->v);
        u219 = (((struct o8_float *)(a4))->v);
        if (u219 > u218) {
            u224 = ((u219 - ((((struct o14_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
        } else {
            u224 = ((u219 + ((((struct o14_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
        }
        (((struct o28_float *)(a5))->v) = ((u224 - u218) + ((((struct o28_float *)(a5))->v)));
        if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
            return 0x4;
        }
        return 0x6;
    }
    if (!(u161 > u160) && !(u161 > u205)) {
        u234 = (((struct o4_float *)(a6))->v);
        u235 = (((struct o4_float *)(a4))->v);
        if (u235 > u234) {
            u240 = ((u235 - ((((struct o10_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
        } else {
            u240 = ((u235 + ((((struct o10_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
        }
        (((struct o24_float *)(a5))->v) = ((u240 - u234) + ((((struct o24_float *)(a5))->v)));
        if (((((struct o4_float *)(a4))->v)) > ((((struct o4_float *)(a6))->v))) {
            return 0x3;
        }
        return 0x2;
    }
    return 0x1;
}

int FUN_0c02512e(float *a, char *o, float *b)
{
    struct { float dir[3]; float pen[3]; } s;
    float d, m;

    d = b[0] - a[0];
    s.pen[0] = b[3] + a[3] - (0.0f > d ? a[0] - b[0] : d);
    d = b[2] - a[2];
    s.pen[2] = b[5] + a[3] - (0.0f > d ? a[2] - b[2] : d);
    d = b[1] - a[1];
    s.pen[1] = b[4] + a[3] - (0.0f > d ? a[1] - b[1] : d);
    if (0.0f > s.pen[0])
        return 0;
    if (0.0f > s.pen[2])
        return 0;
    if (0.0f > s.pen[1])
        return 0;
    if (o[0x2D9] != 0)
        return 1;
    FUN_0c02114c(s.dir, a[0], a[2], b[0], b[2]);
    if (!(s.pen[0] > s.pen[1]) && !(s.pen[0] > s.pen[2])) {
        if (a[0] > b[0])
            d = a[0] - a[3] - b[3];
        else
            d = a[0] + a[3] + b[3];
        F(o, 32) = d - b[0] + F(o, 32);
        return a[0] > b[0] ? 5 : 7;
    }
    if (s.pen[0] > s.pen[2] && s.pen[1] > s.pen[2]) {
        if (a[2] > b[2])
            d = a[2] - a[3] - b[5];
        else
            d = a[2] + a[3] + b[5];
        F(o, 40) = d - b[2] + F(o, 40);
        return a[2] > b[2] ? 4 : 6;
    }
    if (s.pen[1] > s.pen[0] || s.pen[1] > s.pen[2])
        return 1;
    if (a[1] > b[1]) {
        F(o, 36) = a[1] - a[3] - b[4] - b[1] + F(o, 36);
        return 2;
    }
    m = s.pen[2] > s.pen[0] ? s.pen[0] : s.pen[2];
    F(o, 32) = F(o, 32) + m * s.dir[0];
    m = s.pen[2] > s.pen[0] ? s.pen[0] : s.pen[2];
    F(o, 40) = F(o, 40) + m * s.dir[2];
    return 8;
}



int FUN_0c0258ae(int a4, int a5)
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
    register float u19;
    float u20;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct o10_float *)(a5))->v);
    u8 = (((struct o4_float *)(a4))->v);
    u9 = (((struct o4_float *)(a5))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u10);
    u12 = (((struct o14_float *)(a4))->v);
    u13 = (((struct o14_float *)(a5))->v);
    u14 = (((struct o8_float *)(a4))->v);
    u15 = (((struct o8_float *)(a5))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u12 + u13) - u16);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u19 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u19)) && (u20 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u20)))) {
        return 0x1;
    }
    return 0x0;
}
