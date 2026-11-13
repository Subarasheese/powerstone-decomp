/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6568-0c0b68b4) */

typedef struct { int rand_angle, y, z; } vec3i;
extern char *obj_create(int, int, int, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern void obj_set_record(char *, int);
extern void FUN_0c06233a(char *, char *, int);
extern int math_rand_next(void);
extern void fx_update_heading_shot(void);

void fx_spawn_heading_shot(vec3i *src_pos, vec3i *src_angle, char char_id, char variant)
{
    char *shot;
    char *child;
    int rand_angle;

    shot = obj_create(2, 1, 1, 0);
    if (shot == 0) {
        return;
    }
    shot[0] = 1;
    shot[1] = 1;
    shot[3] = char_id;
    *(short *)(shot + 6) = 1;
    shot[5] = 25;
    shot[8] = 0;
    shot[9] = 0;
    *(short *)(shot + 0xEC) = 0;
    *(short *)(shot + 0xEE) = 0;
    *(vec3i *)(shot + 32) = *src_pos;
    *(vec3i *)(shot + 44) = *src_angle;
    *(vec3i *)(shot + 80) = *(vec3i *)0xC33C1EC;
    *(float *)(shot + 56) = math_cos_angle16(0x14000 - ((int *)src_angle)[1]) * 30.0f;
    *(float *)(shot + 60) = 0.0f;
    *(float *)(shot + 64) = math_sin_angle16(0x14000 - ((int *)src_angle)[1]) * 30.0f;
    *(float *)(shot + 68) = *(float *)(shot + 56) / -30.0f;
    *(float *)(shot + 72) = 0.0999999940f;
    *(float *)(shot + 76) = *(float *)(shot + 64) / -30.0f;
    if (variant != 0) {
        shot[0x101] = 5;
        shot[0x105] = 0;
    } else {
        shot[0x101] = 0;
        shot[0x105] = 1;
    }
    shot[0x106] = 1;
    shot[0x107] = 1;
    obj_set_record(shot, 4);
    *(int *)(shot + 0x118) = 0;
    *(void (**)(void))(shot + 16) = fx_update_heading_shot;
    child = *(char **)(shot + 0x2E0);
    FUN_0c06233a(child, (char *)0xC4CFA68, 72);
    child[0] = 1;
    *(short *)(child + 2) = 569;
    rand_angle = math_rand_next();
    *(int *)(child + 24) = (int)((float)(rand_angle % 360) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
    *(vec3i *)(child + 28) = *(vec3i *)0xC33C1F8;
    *(float *)(child + 68) = 0.0f;
    *(float *)(child + 72) = 0.0f;
    *(float *)(child + 76) = 0.0f;
}
