/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

extern void hit_build_part_shape(char *obj, void *bounds);
extern char hit_dispatch_shape_pair(int a, int b, void *bounds, int c);
extern float FUN_0c02629e(int a, int b);
extern char FUN_0c026076(int a, int b, void *bounds, int c, int d);
extern float FUN_0c02649a(int a, int b);
extern int obj_can_interact(int a, int b, int c);

int hit_probe_step_first(char *obj, float *out, float thresh)
{
    int bounds[6];
    int sector, idx, hit;
    float dist;

    hit_build_part_shape(obj, bounds);
    sector = (signed char)((unsigned short)(*(int *)(obj + 48) + 8192) / 16384 + 4);
    for (idx = 0; idx < obj[728]; idx++) {
        hit = (signed char)hit_dispatch_shape_pair(1, obj[696 + idx], bounds, *(int *)(obj + 704 + idx * 4));
        if (hit == sector || hit == 8) {
            dist = FUN_0c02629e(obj[696 + idx], *(int *)(obj + 704 + idx * 4)) - *(float *)(obj + 36);
            *out = dist;
            if (dist > thresh)
                return 1;
            return 2;
        }
    }
    for (idx = 0; idx < obj[680]; idx++) {
        if (*(signed char *)(*(int *)(obj + 660 + idx * 4) + 2) != 2)
            continue;
        hit = (signed char)FUN_0c026076(1, obj[681 + idx], bounds, *(int *)(obj + 640 + idx * 4), *(int *)(obj + 660 + idx * 4));
        if (hit == sector || hit == 8) {
            dist = FUN_0c02649a(*(int *)(obj + 660 + idx * 4), 0) - *(float *)(obj + 36);
            *out = dist;
            if (dist > thresh) {
                if (obj_can_interact(*(int *)(obj + 660 + idx * 4), 9, obj[3]) != 0)
                    return 1;
            } else {
                if (obj_can_interact(*(int *)(obj + 660 + idx * 4), 9, obj[3]) != 0)
                    return 2;
            }
        }
    }
    return 0;
}
