/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bb2e8-0c0bbaf8) */

extern char *obj_create(int, int, int, int);
extern int thunk_math_mat_get_translate(int, float *);
extern float math_cos_angle16(int shooter);
extern float math_sin_angle16(int shooter);
extern void obj_set_record_char(char *proj, int shooter);
extern void FUN_0c06233a(int shooter, char *variant, int c);

void fx_spawn_jack_projectile(char *shooter, char variant)
{
    char *proj;
    char *shooter_base;
    float one_f, two_f, amplitude, cos_val;
    int i, block_off, slot_idx, angle;

    proj = obj_create(1, 1, 3, 0);
    if (proj == 0)
        return;
    proj[0] = 1;
    proj[1] = 1;
    proj[3] = shooter[3];
    *(int *)(proj + 16) = 0xC0BB4F2;
    *(int *)(proj + 28) = (int)shooter;
    *(short *)(proj + 6) = 31;
    proj[5] = 25;
    one_f = 1.0f;
    *(int *)(proj + 44) = *(int *)(shooter + 44);
    *(int *)(proj + 48) = *(int *)(shooter + 48);
    *(int *)(proj + 52) = *(int *)(shooter + 52);
    *(float *)(proj + 80) = one_f;
    *(float *)(proj + 84) = one_f;
    *(float *)(proj + 88) = one_f;
    block_off = (unsigned short)(shooter[3] * 29392);
    shooter_base = (char *)(0xC7E40C4 + block_off);
    slot_idx = (signed char)shooter_base[0x71F1];
    thunk_math_mat_get_translate((int)(shooter_base + 768 + (short)(slot_idx * 3520)), (float *)(proj + 32));
    amplitude = *(float *)(0xC33C378 + (unsigned char)variant * 4);
    angle = (int)(*(float *)(0xC33C3B8 + (unsigned char)variant * 4) * 65536.0f / 360.0f);
    cos_val = math_cos_angle16(angle + 16384);
    *(float *)(proj + 32) = *(float *)(proj + 32) + cos_val * amplitude;
    angle = (int)(*(float *)(0xC33C3B8 + (unsigned char)variant * 4) * 65536.0f / 360.0f);
    cos_val = math_sin_angle16(angle + 16384);
    *(float *)(proj + 40) = *(float *)(proj + 40) + cos_val * amplitude;
    *(short *)(proj + 242) = (unsigned char)variant;
    proj[257] = 1;
    proj[258] = 1;
    obj_set_record_char(proj, 120);
    two_f = 2.0f;
    for (i = 0; i < 3; i++) {
        FUN_0c06233a(*(int *)(proj + 736 + i * 4), (char *)(0xC6002D0 + (signed char)(shooter[3] * 24)), i + 2);
        *(char *)*(int *)(proj + 736 + i * 4) = 1;
        *(short *)(*(int *)(proj + 736 + i * 4) + 2) = 31;
        *(float *)(*(int *)(proj + 736 + i * 4) + 28) = one_f;
        *(float *)(*(int *)(proj + 736 + i * 4) + 32) = one_f;
        *(float *)(*(int *)(proj + 736 + i * 4) + 36) = two_f;
    }
    **(char **)(proj + 740) = 0;
}
