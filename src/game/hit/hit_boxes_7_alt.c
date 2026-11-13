/* hit box data converters, per-frame object lists, hit edit draw (0c023d04-0c025958) */

void FUN_0c023ebc(float *);
signed char *hit_find_part_entry(char *, int, int, int);
void FUN_0c0229d8(char *, int, float *);
void hit_offset_point_by_owner(char *, float *, int);
void FUN_0c022e90(char *, float *, int);
void FUN_0c021120(char *, float *, signed char *);
void FUN_0c0210f4(char *, float *, signed char *);
void FUN_0c0210c8(char *, float *, signed char *);
void FUN_0c024300(float *, float, float, float, float);
void FUN_0c024298(float *, float, float, float, float, float);
void FUN_0c0243b0(float *, float *, float, float, float);
int hit_list_save_positions(int);
int FUN_0c024446(int);
struct o2D8_uchar { char p[0x2D8]; unsigned char v; };
int FUN_0c0246b2(int);
float FUN_0c0211d0(float, float, float, float);
void FUN_0c02114c(float *, float, float, float, float);
int FUN_0c020468(int);
int FUN_0c023bf4(int, int);
int FUN_0c0247d0(int, int);
int hit_box_vs_box_side(int, int, int);
int FUN_0c024992(int, int, int);
int FUN_0c024b5e(int, int, int);
struct list_entry {
    char pad0[0x18];
    struct list_entry *next;       /* 0x18 */
    char pad1c[0x107 - 0x1C];
    signed char busy;       /* 0x107 */
    char pad108[0x248 - 0x108];
    signed char kind;       /* 0x248 */
    char pad249[3];
    char extra[1];          /* 0x24C */
};

int FUN_0c024764(int a4, int a5, int a6, int a7);

void hit_debug_draw_object_parts(char *obj)
{
    float xform[19];
    signed char *part_counts = (signed char *)0xC320034;
    signed char *part;
    int idx;

    FUN_0c023ebc((float *)(obj + 32));
    if (obj[0x105] == 0) {
        for (idx = 0; idx < part_counts[obj[2] * 2]; idx++) {
            part = hit_find_part_entry(obj, 0, obj[0x101], idx);
            if (part[1] == 0) {
                FUN_0c0229d8(obj, *(short *)(part + 2), xform);
                hit_offset_point_by_owner(obj, xform, part[0]);
                FUN_0c022e90(obj, xform, part[0]);
                FUN_0c024300(xform, xform[3], 1.0f, 0.0f, 0.0f);
            }
        }
    }
    for (idx = 0; idx < part_counts[obj[2] * 2 + 1]; idx++) {
        part = hit_find_part_entry(obj, 1, obj[0x102], idx);
        if (idx == 0) {
            if (obj[0x107] == 0) {
                switch (part[1] & 15) {
                case 0:
                    FUN_0c021120(obj, xform + 15, part);
                    FUN_0c024300(xform + 15, xform[18], 0.0f, 0.0f, 1.0f);
                    break;
                case 1:
                    FUN_0c0210f4(obj, xform + 4, part);
                    FUN_0c024298(xform + 4, xform[8], xform[7], 0.0f, 0.0f, 1.0f);
                    break;
                case 2:
                    FUN_0c0210c8(obj, xform + 9, part);
                    FUN_0c0243b0(xform + 9, xform + 12, 0.0f, 0.0f, 1.0f);
                    break;
                }
            }
        } else if (obj[0x106] == 0) {
            if (part[1] == 0) {
                FUN_0c0229d8(obj, *(short *)(part + 2), xform);
                hit_offset_point_by_owner(obj, xform, part[0]);
                FUN_0c022e90(obj, xform, part[0]);
                FUN_0c024300(xform, xform[3], 0.0f, 1.0f, 0.0f);
            }
        }
    }
}

int hit_list_reset(int a4)
{
    hit_list_save_positions(a4);
    return FUN_0c024446(a4);
}

int FUN_0c024764(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t12;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    FUN_0c0246b2(a4);
    t12 = 0x2D8;
    if ((int)(*(signed char *)((a4 + 0x2D8))) < (int)0x5) {
        *(unsigned char *)((((*(signed char *)((a4 + 0x2D8))) + (0x2AE + a4)) + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)));
        *(unsigned char *)((((*(signed char *)((a4 + 0x2D8))) + (0x2B3 + a4)) + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned char *)((((*(signed char *)((a4 + 0x2D8))) + (0x2B8 + a4)) + 0x0)) = (*(signed char *)(((int)stk + 8)));
        t10 = *(signed char *)((a4 + 0x2D8));
        (((struct o2D8_uchar *)(a4))->v) = (t10 + 0x1);
        t12 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((((signed char)((t10 + 0x1) - 1) << 2) + (0x2C0 + a4)) + 0x0)) = t12;
    }
    return t12;
}

int hit_box_vs_box_push(float *box_a, char *obj, float *box_b)
{
    float tmp[10];
    float *dir = &tmp[4];
    float *overlap = &tmp[7];
    float *obj_f = (float *)obj;
    float dx, dz, min_pen, y_push, sum_x, sum_z, abs_x, abs_z;

    dx = box_a[0] - box_b[0];
    sum_x = box_b[3] + box_a[3];
    abs_x = 0.0f > dx ? box_b[0] - box_a[0] : dx;
    overlap[0] = sum_x - abs_x;
    dz = box_a[2] - box_b[2];
    sum_z = box_b[5] + box_a[3];
    abs_z = 0.0f > dz ? box_b[2] - box_a[2] : dz;
    overlap[2] = sum_z - abs_z;
    tmp[2] = box_a[1];
    tmp[3] = box_a[4];
    tmp[0] = box_b[1];
    tmp[1] = box_b[4];
    overlap[1] = FUN_0c0211d0(tmp[1] + tmp[0], box_b[1] - box_b[4], box_a[4] + tmp[2], box_a[1] - box_a[4]);
    if (0.0f > overlap[0])
        return 0;
    if (0.0f > overlap[2])
        return 0;
    if (0.0f > overlap[1])
        return 0;
    if (obj[0x2d9] != 0)
        return 1;
    FUN_0c02114c(dir, box_a[0], box_a[2], box_b[0], box_b[2]);
    min_pen = overlap[0];
    if (!(min_pen > overlap[1]) && !(min_pen > overlap[2])) {
        obj_f[8] = obj_f[8] + min_pen * dir[0];
        obj_f[10] = obj_f[10] + overlap[0] * dir[2];
        return 8;
    }
    if (min_pen > overlap[2] && overlap[1] > overlap[2]) {
        obj_f[8] = obj_f[8] + overlap[2] * dir[0];
        obj_f[10] = obj_f[10] + overlap[2] * dir[2];
        return 8;
    }
    if (overlap[1] > min_pen || overlap[1] > overlap[2])
        return 1;
    if (box_a[1] > box_b[1])
        y_push = (box_a[1] - box_a[4]) - box_b[4];
    else
        y_push = (box_a[1] + box_a[4]) + box_b[4];
    y_push = y_push - box_b[1];
    obj_f[9] = y_push + obj_f[9];
    if (box_a[1] > box_b[1])
        return 3;
    return 2;
}

void hit_update_object_list(char *owner, int arg, struct list_entry *entry)
{
    int result;
    int run_update;

    for (; entry != 0; entry = entry->next) {
        if (entry->busy != 0) {
            continue;
        }
        run_update = 0;
        switch (entry->kind) {
        case 0:
            result = FUN_0c024b5e(arg, (int)entry, (int)entry->extra);
            run_update = result != 0;
            break;
        case 1:
            result = FUN_0c024992(arg, (int)entry, (int)entry->extra);
            run_update = result != 0;
            break;
        case 2:
            result = hit_box_vs_box_side(arg, (int)entry, (int)entry->extra);
            run_update = result != 0;
            break;
        }
        if (run_update) {
            FUN_0c020468((int)entry);
            FUN_0c024764((int)entry, (int)owner, 2, arg);
        }
        FUN_0c023bf4((int)entry, arg);
        if (result == 2) {
            FUN_0c0247d0((int)entry, owner[1]);
        }
    }
}
