/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

struct obj_view {
    char pad0[36];
    float pos_y;
    char pad1[48 - 40];
    int heading;
    char pad2[0x2B8 - 52];
    signed char ids[8];
    int vals[6];
    signed char count;
};
void hit_build_part_shape(struct obj_view *obj, int *data_buf);
int hit_dispatch_shape_pair(int a, int id, int *data_buf, int val);
float FUN_0c02629e(int id, int val);

int hit_probe_step_list(struct obj_view *obj, float *out, float thresh)
{
    int data_buf[6];
    int sector;
    int i;
    signed char want;
    signed char got;
    float height_diff;
    hit_build_part_shape(obj, data_buf);
    sector = (unsigned short)(obj->heading + 0x2000) / 0x4000;
    want = sector + 4;
    for (i = 0; i < obj->count; i++) {
        got = hit_dispatch_shape_pair(1, obj->ids[i], data_buf, obj->vals[i]);
        if (got == want || got == 8) {
            height_diff = FUN_0c02629e(obj->ids[i], obj->vals[i]) - obj->pos_y;
            *out = height_diff;
            if (height_diff > thresh)
                return 1;
            return 2;
        }
    }
    return 0;
}
