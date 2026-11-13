/* swirling effect (constructor and updates) (0c0cb994-0c0cc074) */

struct T12 { int x, y, z; };
extern int FUN_0c0555dc(void);
extern float math_cos_angle16(int angle);
extern float math_sin_angle16(int angle);
extern void obj_destroy(char *obj);

void fx_swirl_update(char *obj)
{
    char *owner;
    float cos_a, sin_a, cos_b, sin_b, size;
    if (FUN_0c0555dc() != 0)
        obj[8] = 1;
    if ((*(char **)(obj + 28))[14] != 0)
        obj[8] = 1;
    *(struct T12 *)(obj + 32) = *(struct T12 *)(*(char **)(obj + 28) + 32);
    *(struct T12 *)(obj + 44) = *(struct T12 *)(*(char **)(obj + 28) + 44);
    size = *(float *)(obj + 68) * *(float *)(*(char **)(obj + 28) + 80);
    *(float *)(obj + 88) = size;
    *(float *)(obj + 84) = size;
    *(float *)(obj + 80) = size;
    switch (obj[8]) {
    case 0:
        if ((*(char **)(obj + 28))[8] >= 2)
            obj[8] = 1;
        cos_a = math_sin_angle16(*(int *)(obj + 48));
        sin_a = math_cos_angle16(*(int *)(obj + 48));
        *(float *)(obj + 32) += *(float *)(obj + 80) * (*(float *)(obj + 64) * cos_a + sin_a * *(float *)(obj + 56));
        sin_b = math_cos_angle16(*(int *)(obj + 48));
        sin_b = sin_b * *(float *)(obj + 64);
        cos_b = math_sin_angle16(*(int *)(obj + 48));
        *(float *)(obj + 40) += *(float *)(obj + 80) * (sin_b - cos_b * *(float *)(obj + 56));
        *(float *)(obj + 36) += *(float *)(obj + 80) * *(float *)(obj + 60);
        return;
    case 1:
        obj[8]++;
        /* fall through */
    case 2:
        (*(char **)(obj + 28))[15]--;
        obj_destroy(obj);
        return;
    default:
        return;
    }
}
