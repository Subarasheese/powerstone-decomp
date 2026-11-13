/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

#define I8(obj, off) (*(signed char *)((obj) + (off)))
#define I32(obj, off) (*(int *)((obj) + (off)))
int hit_build_part_shape(char *obj, int *buf);
int hit_dispatch_shape_pair(int a, int id, int *buf, int val);
float FUN_0c02629e(int id, int val);
int FUN_0c026076(int a, int id, int *buf, int val, char *target);
float FUN_0c02649a(char *target, int z);

int hit_probe_step_two_lists(char *obj, float *out, float thresh)
{
    int buf[6];
    int quadrant;
    int idx;
    signed char want;
    float dist;
    hit_build_part_shape(obj, buf);
    quadrant = (unsigned short)(I32(obj, 48) + 0x2000) / 0x4000;
    want = quadrant + 4;
    for (idx = 0; idx < I8(obj, 0x2D8); idx++) {
        signed char hit_sector = hit_dispatch_shape_pair(1, I8(obj, 0x2B8 + idx), buf, I32(obj, 0x2C0 + 4 * idx));
        if (hit_sector == want || hit_sector == 8) {
            dist = FUN_0c02629e(I8(obj, 0x2B8 + idx), I32(obj, 0x2C0 + 4 * idx));
            goto done;
        }
    }
    for (idx = 0; idx < I8(obj, 0x2A8); idx++) {
        char *target = (char *)I32(obj, 660 + 4 * idx);
        if (target[2] == 2 && target[729] != 2) {
            if ((signed char)FUN_0c026076(1, I8(obj, 681 + idx), buf, I32(obj, 640 + 4 * idx), (char *)I32(obj, 660 + 4 * idx)) == want) {
                dist = FUN_0c02649a((char *)I32(obj, 660 + 4 * idx), 0);
                goto done;
            }
        }
    }
    return 0;
done:
    dist = dist - *(float *)(obj + 36);
    *out = dist;
    if (dist > thresh)
        return 1;
    return 2;
}
