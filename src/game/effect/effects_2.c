/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03202c-0c032fd4) */

extern float math_rand_float(void);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
#define RAND_MOD(n) ((unsigned int)(math_rand_float() * 255.0f) % (n))

void fx_randomize_particle(char *particle)
{
    unsigned int div;
    float turns;
    float cos_v;
    float sin_v;
    *(float *)(particle + 40) = 20.0f + 10.0f * (float)RAND_MOD(10u);
    *(float *)(particle + 48) = *(float *)(particle + 40) + 10.0f * (float)RAND_MOD(10u) + 1.0f;
    div = RAND_MOD(36u) + 1;
    turns = (float)(360u / div);
    *(int *)(particle + 20) = (int)(turns * 65536.0f / 360.0f);
    cos_v = math_cos_angle16(0x10000 - *(int *)(particle + 20));
    *(float *)(particle + 4) = cos_v * *(float *)(particle + 40);
    sin_v = math_sin_angle16(0x10000 - *(int *)(particle + 20));
    *(float *)(particle + 12) = sin_v * *(float *)(particle + 40);
    *(float *)(particle + 8) = 10.0f + 10.0f * (float)RAND_MOD(10u);
    cos_v = *(float *)(particle + 40) / 100.0f + 1.0f;
    *(float *)(particle + 36) = cos_v;
    *(float *)(particle + 32) = cos_v;
    *(float *)(particle + 28) = cos_v;
    *(int *)(particle + 56) = (int)((float)(RAND_MOD(20u) + 15) * 65536.0f / 360.0f);
    *(float *)(particle + 44) = (float)RAND_MOD(8u) + 3.5f;
    *(float *)(particle + 68) = 0.00999999978f;
    *(float *)(particle + 76) = 0.00999999978f;
    *(float *)(particle + 72) = 0.00999999978f;
}
