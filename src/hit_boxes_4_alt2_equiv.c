/* hit box data converters, per-frame object lists, hit edit draw (0c0228ac-0c02380c) */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
extern int FUN_0c0229d8();
int hit_offset_point_by_owner(int, int, int);
int FUN_0c022e90(int, int, int);
float math_signed_sqrt(float);
int FUN_0c0e24f0(int);
extern int FUN_0c022a5a();
extern char *hit_find_part_entry(char *, int, int, int);
extern void hit_get_sphere_entry(char *, int, char *);
extern void hit_load_sphere_world(char *, int, char *);
extern void hit_get_cylinder_entry(char *, int, char *);
extern void hit_load_cylinder_world(char *, int, char *);
extern void hit_get_box_entry(char *, int, char *);
extern void hit_load_box_world(char *, int, char *);

int FUN_0c022ed8(int a4, int a5, int a6, int a7, int a8)
{
    int stk[14];
    register int t1;
    register int t3;
    register int t63;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u24;
    register float u27;
    register float t28;
    register float u37;
    register float u41;
    register float u46;
    register float u51;
    register float u56;
    float u13;
    float u36;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0229d8))(a4, (*(short *)((a6 + 0x2))), (((int)stk + 0) + 0x28), a7);
    t3 = ((int (*)(int, int, int))(FUN_0c0229d8))(a5, (*(short *)((a7 + 0x2))), (((int)stk + 0) + 0x18));
    hit_offset_point_by_owner(a4, (((int)stk + 0) + 0x28), (*(signed char *)((a6 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x18), (*(signed char *)((a7 + 0x0))));
    FUN_0c022e90(a4, (((int)stk + 0) + 0x28), (*(signed char *)((a6 + 0x0))));
    FUN_0c022e90(a5, (((int)stk + 0) + 0x18), (*(signed char *)((a7 + 0x0))));
    t63 = 0x0;
    if (((*(float *)(((int)stk + 52))) != 0.0f) && (u13 = *(float *)(((int)stk + 36)), u13 != 0.0f)) {
        u14 = *(float *)(((int)stk + 36));
        u15 = *(float *)(((int)stk + 52));
        u16 = *(float *)(((int)stk + 24));
        u17 = *(float *)(((int)stk + 40));
        *(float *)(((int)stk + 8)) = (u17 - u16);
        u18 = *(float *)(((int)stk + 28));
        u19 = *(float *)(((int)stk + 44));
        *(float *)(((int)stk + 4)) = (u19 - u18);
        u20 = *(float *)(((int)stk + 32));
        u21 = *(float *)(((int)stk + 48));
        u24 = ((u19 - u18) * (u19 - u18));
        u24 = u24 + ((u17 - u16)) * ((u17 - u16));
        *(float *)(((int)stk + 0)) = (u21 - u20);
        u27 = u24;
        u27 = u27 + ((u21 - u20)) * ((u21 - u20));
        t28 = math_signed_sqrt(u27);
        t63 = 0x0;
        if (((u15 + u14) - t28) > 0.0f) {
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 24))) - (*(float *)(((int)stk + 40))));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 28))) - (*(float *)(((int)stk + 44))));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 32))) - (*(float *)(((int)stk + 48))));
            if (((*(float *)(((int)stk + 12))) == 0.0f) && (u36 = *(float *)(((int)stk + 20)), u36 == 0.0f)) {
                u37 = (((struct o0_float *)0xC02313C)->v);
                *(float *)(((int)stk + 20)) = u37;
                *(float *)(((int)stk + 12)) = u37;
            }
            FUN_0c0e24f0((((int)stk + 0) + 0xC));
            u41 = (((struct o8_float *)0xC02313C)->v);
            u46 = (*(float *)(((int)stk + 40)));
            u46 = u46 + (*(float *)(((int)stk + 12))) * (((*(float *)(((int)stk + 52))) - (((u15 + u14) - t28) / u41)));
            *(float *)((a8 + 0x0)) = u46;
            u51 = (*(float *)(((int)stk + 44)));
            u51 = u51 + (*(float *)(((int)stk + 16))) * (((*(float *)(((int)stk + 52))) - (((u15 + u14) - t28) / u41)));
            (((struct o4_float *)(a8))->v) = u51;
            u56 = (*(float *)(((int)stk + 48)));
            u56 = u56 + (*(float *)(((int)stk + 20))) * (((*(float *)(((int)stk + 52))) - (((u15 + u14) - t28) / u41)));
            (((struct o8_float *)(a8))->v) = u56;
            t63 = 0x1;
        }
    }
    return t63;
}

int FUN_0c0232ca(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t1;
    register int t3;

    t1 = ((int (*)(int, int, int, int))(FUN_0c022a5a))(a4, (*(short *)((a6 + 0x2))), (((int)stk + 0) + 0x1C), a7);
    t3 = ((int (*)(int, int, int))(FUN_0c022a5a))(a5, (*(short *)((a7 + 0x2))), ((int)stk + 0));
    hit_offset_point_by_owner(a4, (((int)stk + 0) + 0x1C), (*(signed char *)((a6 + 0x0))));
    hit_offset_point_by_owner(a4, (((int)stk + 0) + 0x28), (*(signed char *)((a6 + 0x0))));
    hit_offset_point_by_owner(a5, ((int)stk + 0), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0xC), (*(signed char *)((a7 + 0x0))));
    return 0x0;
}

int hit_build_part_shape(char *obj, int arg)
{
    char data_buf[60];
    char *entry;

    entry = hit_find_part_entry(obj, 1, obj[0x102], 0);
    switch (entry[1] & 15) {
    case 0:
        hit_get_sphere_entry(obj, *(short *)(entry + 2), data_buf + 44);
        hit_load_sphere_world(obj, arg, data_buf + 44);
        break;
    case 1:
        hit_get_cylinder_entry(obj, *(short *)(entry + 2), data_buf);
        hit_load_cylinder_world(obj, arg, data_buf);
        break;
    case 2:
        hit_get_box_entry(obj, *(short *)(entry + 2), data_buf + 20);
        hit_load_box_world(obj, arg, data_buf + 20);
        break;
    }
    return entry[1] & 15;
}
