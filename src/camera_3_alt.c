/* camera follow computation and mode handlers 1..28 (0c0d9288-0c0db1c0) */

struct Vec3i { int x, y, z; };
extern int cam_compute_follow(unsigned char *, unsigned char *);
extern int cam_push_keyframe_history(unsigned char *, int);
extern int cam_force_mode(int, int, int);

static void shift(unsigned char *obj, int dst, int src)
{
    *(int *)(obj + 272 + dst) = *(int *)(obj + 272 + src);
    *(int *)(obj + 288 + dst) = *(int *)(obj + 288 + src);
    *(float *)(obj + 304 + dst) = *(float *)(obj + 304 + src);
    *(int *)(obj + 320 + dst) = *(int *)(obj + 320 + src);
    *(int *)(obj + 336 + dst) = *(int *)(obj + 336 + src);
}

int cam_step_keyframe_script(unsigned char *obj, unsigned char *script_base)
{
    int jump_flag = 0;
    unsigned char *rec;
    int marker;

    switch ((signed char)obj[5]) {
    case 0:
        obj[5]++;
        obj[6] = 0;
        *(unsigned char **)(obj + 476) = script_base;
        *(int *)(obj + 16) = **(short **)(obj + 476);
        goto run_step;
    case 1:
    run_step:
        cam_compute_follow(obj, *(unsigned char **)(obj + 476));
        *(int *)(obj + 16) = *(int *)(obj + 16) - 1;
        if (*(int *)(obj + 16) != 0) {
            if ((*(short *)(*(unsigned char **)(obj + 476) + 4) & 0xF00) == 0)
                return jump_flag;
            if (cam_push_keyframe_history(obj, 5) == 0)
                return jump_flag;
        }
        if (*(short *)(*(unsigned char **)(obj + 476) + 2) & 0x100) {
            *(struct Vec3i *)(obj + 176 + 36) = *(struct Vec3i *)(obj + 176 + 12);
            *(struct Vec3i *)(obj + 224 + 36) = *(struct Vec3i *)(obj + 224 + 12);
            shift(obj, 12, 4);
        } else if (*(short *)(*(unsigned char **)(obj + 476) + 2) & 0x200) {
            *(struct Vec3i *)(obj + 176 + 12) = *(struct Vec3i *)(obj + 176 + 36);
            *(struct Vec3i *)(obj + 224 + 12) = *(struct Vec3i *)(obj + 224 + 36);
            shift(obj, 4, 12);
        }
        *(int *)(obj + 476) = *(int *)(obj + 476) + 52;
        obj[6] = 0;
        marker = **(short **)(obj + 476);
        if (marker == -3) {
            obj[5] += 2;
        } else if (marker == -2) {
            *(int *)(obj + 476) = (int)script_base + 52 * *(short *)(*(unsigned char **)(obj + 476) + 2);
            jump_flag = 1;
        } else if (marker == -1) {
            obj[5]++;
            return 0;
        }
        rec = *(unsigned char **)(obj + 476);
        *(int *)(obj + 16) = *(short *)rec;
        *(struct Vec3i *)(obj + 176 + 24) = *(struct Vec3i *)(obj + 176 + 12);
        *(struct Vec3i *)(obj + 224 + 24) = *(struct Vec3i *)(obj + 224 + 12);
        shift(obj, 8, 4);
        return jump_flag;
    case 2:
        cam_force_mode(0, 0, 64);
        return 2;
    case 3:
        return 3;
    }
    return jump_flag;
}
