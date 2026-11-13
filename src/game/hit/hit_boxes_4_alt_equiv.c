/* hit box data converters, per-frame object lists, hit edit draw (0c0228ac-0c02380c) */

struct o50_float { char p[0x50]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c022dfc(int, int, float);
int FUN_0c0229d8(int, int, int, int);
int FUN_0c022b08(int, int, int);
int hit_offset_point_by_owner(int, int, int);
int FUN_0c022a5a(int, int, int);
extern int hit_part_pair_overlap(char *, char *, char *, float);
int hit_load_cylinder_world_dup(int, int, int);
int hit_find_part_entry(int, int, int, int);
int hit_get_cylinder_entry(int, int, int);

float FUN_0c022e90(int a4, int a5, int a6, float f4)
{
    int stk[2];
    register int t3;
    register float t5;
    register int t15;
    register float u25;
    register float u12;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        if ((*(signed char *)(((int)stk + 4))) != -1) {
            t3 = *(int *)(((int)stk + 0));
            t5 = FUN_0c022dfc(a4, (*(signed char *)(((int)stk + 4))), f4);
            (((struct oC_float *)(t3))->v) = (((((struct oC_float *)(t3))->v)) * t5);
            u12 = t5;
        }
        u25 = u12;
    } else {
        t15 = *(int *)(((int)stk + 0));
        (((struct oC_float *)(t15))->v) = (((((struct oC_float *)(t15))->v)) * ((((struct o50_float *)(a4))->v)));
    }
    return u25;
}

int FUN_0c023050(int a4, int a5, int a6, int a7)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c0229d8((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 4))) + 0x2))), (((int)stk + 0) + 0x68), a7);
    FUN_0c022b08(a5, (*(short *)((a7 + 0x2))), (((int)stk + 0) + 0x8));
    hit_offset_point_by_owner((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x68), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x8), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x14), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x20), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x2C), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x38), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x44), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x50), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x5C), (*(signed char *)((a7 + 0x0))));
    return 0x0;
}

int FUN_0c0230e2(int a4, int a5, int a6, int a7)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c0229d8((*(int *)(((int)stk + 0))), (*(short *)(((*(int *)(((int)stk + 4))) + 0x2))), (((int)stk + 0) + 0x24), a7);
    FUN_0c022a5a(a5, (*(short *)((a7 + 0x2))), (((int)stk + 0) + 0x8));
    hit_offset_point_by_owner((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x24), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x8), (*(signed char *)((a7 + 0x0))));
    hit_offset_point_by_owner(a5, (((int)stk + 0) + 0x14), (*(signed char *)((a7 + 0x0))));
    return 0x0;
}

int hit_any_part_pair_overlap(char *obj_a, char *obj_b, float radius)
{
    signed char *count_tbl = (signed char *)0x0C320034;
    int i, j;

    for (i = 0; i < count_tbl[obj_a[2] * 2]; i++)
        for (j = 1; j < count_tbl[obj_b[2] * 2 + 1]; j++)
            if (hit_part_pair_overlap(obj_a + 0x148 + i * 16, obj_b + 0x188 + j * 16, obj_b + 0x10C, radius))
                return 1;
    return 0;
}

int FUN_0c0234f0(int a4, int a5)
{
    register int t2;

    t2 = *(short *)((0x2 + (hit_find_part_entry(a4, 0x1, (*(signed char *)((a4 + 0x102))), 0x0))));
    hit_get_cylinder_entry(a4, t2, a5);
    return hit_load_cylinder_world_dup(a4, a5, a5);
}
