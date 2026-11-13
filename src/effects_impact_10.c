/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b7368-0c0b7590) */

typedef struct { int x, y, z; } Vec3i;
extern char *obj_create(int, int, int, int);
extern int thunk_FUN_0c062242(int, float *);
extern void FUN_0c06233a(int a, char *b, int c);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern void obj_set_record_char(char *e, int a);

void fx_spawn_falcon_shot(char *shooter, char throw_type)
{
    char *proj;
    char *shooter_base;
    float one, speed;
    int idx, slot;

    proj = obj_create(1, 1, 2, 0);
    if (proj == 0)
        return;
    proj[0] = 1;
    proj[3] = shooter[3];
    proj[1] = 1;
    *(short *)(proj + 6) = 15;
    proj[5] = 25;
    *(int *)(proj + 16) = 0xC0B7590;
    *(Vec3i *)(proj + 32) = *(Vec3i *)(shooter + 32);
    *(Vec3i *)(proj + 44) = *(Vec3i *)(shooter + 44);
    one = 1.0f;
    *(float *)(proj + 88) = one;
    *(float *)(proj + 84) = one;
    *(float *)(proj + 80) = one;
    shooter_base = (char *)(0xC7E40C4 + (unsigned short)(shooter[3] * 29392));
    slot = (signed char)shooter_base[0x71F1];
    thunk_FUN_0c062242((int)(shooter_base + 768 + (short)(slot * 3520) + 1408), (float *)(proj + 32));
    for (idx = 0; idx < 2; idx++) {
        *(char *)*(int *)(proj + 736 + idx * 4) = 1;
        *(short *)(*(int *)(proj + 736 + idx * 4) + 2) = 31;
        FUN_0c06233a(*(int *)(proj + 736 + idx * 4), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), idx);
        *(float *)(*(int *)(proj + 736 + idx * 4) + 36) = one;
        *(float *)(*(int *)(proj + 736 + idx * 4) + 32) = one;
        *(float *)(*(int *)(proj + 736 + idx * 4) + 28) = one;
    }
    *(int *)(proj + 28) = (int)shooter;
    *(short *)(proj + 236) = 180;
    proj[776] = 5;
    proj[777] = 0;
    proj[257] = 1;
    proj[258] = 1;
    proj[8] = throw_type;
    speed = 30.0f;
    switch (throw_type) {
    case 0:
    case 1:
        if (throw_type == 1)
            *(int *)(proj + 44) = (unsigned short)(*(int *)(proj + 44) + 8192);
        *(short *)(proj + 238) = 1;
        *(short *)(proj + 240) = 0;
        obj_set_record_char(proj, 112);
        break;
    case 2:
    case 3:
        if (throw_type == 3)
            *(int *)(proj + 44) = (unsigned short)(*(int *)(proj + 44) + 8192);
        *(float *)(proj + 56) = math_cos_angle16(0x14000 - *(int *)(proj + 48)) * speed;
        if (throw_type == 2) {
            *(float *)(proj + 60) = 0.0f;
        } else {
            *(float *)(proj + 60) = -(math_cos_angle16(0x14000 - *(int *)(proj + 44)) * speed);
        }
        *(float *)(proj + 64) = math_sin_angle16(0x14000 - *(int *)(proj + 48)) * speed;
        obj_set_record_char(proj, 115);
        break;
    }
}
