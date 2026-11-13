/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 2 of 6 of the same module) (0c08a7d4-0c08bf90) */

struct V3 { int x, y, z; };
int math_mat_transform_point(char *, char *);
extern void pl_step_motion(char *);
extern void pl_apply_motion_translation(char *);
extern void pl_step_motion_owner(char *);
extern void snd_play_side_se(int, int);
extern void snd_play_char_voice(char *, int);
extern void obj_set_owner_hit_record(char *, int);
extern void FUN_0c08b96e(char *);
extern void pl_start_motion(char *, int, int);
extern void pl_start_motion_owner(char *, int, int);
struct Vec3i { int x, y, z; };

int FUN_0c08b7d6(char *obj)
{
    *(float *)(*(char **)(obj + 0x1C) + 32) = -70.0f;
    *(float *)(*(char **)(obj + 0x1C) + 36) = 0.0f;
    *(float *)(*(char **)(obj + 0x1C) + 40) = 0.0f;
    *(struct V3 *)(*(char **)(obj + 0x1C) + 44) = *(struct V3 *)(obj + 44);
    *(unsigned int *)(*(char **)(obj + 0x1C) + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    return math_mat_transform_point(*(char **)(obj + 0x1C) + 32, obj + 0x880);
}

void FUN_0c08b9c2(char *obj)
{
    char *partner;

    pl_step_motion(obj);
    pl_apply_motion_translation(obj);
    pl_step_motion_owner(*(char **)(obj + 28));
    pl_apply_motion_translation(*(char **)(obj + 28));
    switch (*(unsigned short *)(obj + 0x719E)) {
    case 16:
        partner = *(char **)(obj + 28);
        snd_play_side_se(partner[3], 24);
        break;
    case 51:
    case 82:
    case 166:
        partner = *(char **)(obj + 28);
        snd_play_side_se(partner[3], 20);
        snd_play_char_voice(*(char **)(obj + 28), 10);
        obj_set_owner_hit_record(obj, 50);
        break;
    case 54:
    case 85:
    case 167:
        FUN_0c08b96e(obj);
        break;
    default:
        break;
    }
    if (obj[0x71AA] != 0) {
        obj[10]++;
        pl_start_motion(obj, 4, 4);
        obj[0x71A9] = 1;
        obj[0x71A8] = 1;
        pl_start_motion_owner(*(char **)(obj + 28), 4, 51);
        partner = *(char **)(obj + 28);
        partner[0x71A9] = 1;
        partner[0x71A8] = 1;
    }
}

int FUN_0c08bbce(char *obj)
{
    *(float *)(*(char **)(obj + 0x1C) + 32) = 70.0f;
    *(float *)(*(char **)(obj + 0x1C) + 36) = 0.0f;
    *(float *)(*(char **)(obj + 0x1C) + 40) = 0.0f;
    *(struct Vec3i *)(*(char **)(obj + 0x1C) + 44) = *(struct Vec3i *)(obj + 44);
    *(unsigned int *)(*(char **)(obj + 0x1C) + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    return math_mat_transform_point(*(char **)(obj + 0x1C) + 32, obj + 0xB40);
}
