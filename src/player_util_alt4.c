/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

#define BYTE_AT(obj, off) (*(signed char *)((obj) + (off)))
#define INT_AT(obj, off) (*(int *)((obj) + (off)))
#define FLOAT_AT(obj, off) (*(float *)((obj) + (off)))
int hit_build_part_shape(char *obj, float *bounds);
int math_atan_angle16(float x);
int hit_dispatch_shape_pair(int a, int id, float *bounds, int val);
float FUN_0c02629e(int id, int val);
int obj_can_interact(char *other, int z, int kind);
int FUN_0c026076(int a, int id, float *bounds, int val, char *other);
float FUN_0c02649a(char *other, int z);

int hit_probe_step_by_velocity(char *obj, float *out, float thresh)
{
    float bounds[6];
    float best;
    float ref_y;
    int heading;
    int sector;
    int idx;
    signed char want_sector;
    best = 0.0f;
    hit_build_part_shape(obj, bounds);
    if (FLOAT_AT(obj, 56) == 0.0f)
        FLOAT_AT(obj, 56) = 9.99999975e-06f;
    heading = math_atan_angle16(-FLOAT_AT(obj, 64) / FLOAT_AT(obj, 56));
    if (0.0f > FLOAT_AT(obj, 56))
        heading = heading + 0x8000;
    heading = (unsigned short)(heading + 0x4000);
    sector = (unsigned short)(heading + 0x2000) / 0x4000;
    want_sector = sector + 4;
    ref_y = bounds[1] - bounds[4];
    for (idx = 0; idx < BYTE_AT(obj, 0x2D8); idx++) {
        signed char got_sector = hit_dispatch_shape_pair(1, BYTE_AT(obj, 0x2B8 + idx), bounds, INT_AT(obj, 0x2C0 + 4 * idx));
        if (got_sector == want_sector || got_sector == 8) {
            float delta = FUN_0c02629e(BYTE_AT(obj, 0x2B8 + idx), INT_AT(obj, 0x2C0 + 4 * idx)) - ref_y;
            *out = delta;
            if (delta > best)
                best = *out;
        }
    }
    for (idx = 0; idx < BYTE_AT(obj, 0x2A8); idx++) {
        char *other = (char *)INT_AT(obj, 660 + 4 * idx);
        if (other[2] == 2 && other[729] != 2) {
            if (obj_can_interact((char *)INT_AT(obj, 660 + 4 * idx), 0, BYTE_AT(obj, 3)) == 0)
                return 1;
            if ((signed char)FUN_0c026076(1, BYTE_AT(obj, 681 + idx), bounds, INT_AT(obj, 640 + 4 * idx), (char *)INT_AT(obj, 660 + 4 * idx)) == want_sector) {
                float delta = FUN_0c02649a((char *)INT_AT(obj, 660 + 4 * idx), 0) - FLOAT_AT(obj, 36);
                *out = delta;
                if (delta > best)
                    best = *out;
            }
        }
    }
    if (best == 0.0f)
        return 0;
    if (best > thresh)
        return 1;
    return 2;
}
