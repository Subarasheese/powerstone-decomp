/* not identified yet (keep old name) (0c027d50-0c027f90) */

typedef struct { int a, b, c; } Vec12;
typedef struct { int a, b, c, d; } Vec16;
extern int nlSelectMatrixStack(int);
extern void nlUnitMatrix(void);
extern void math_vec3_add(Vec12 *d, Vec12 *a, Vec12 *b);
extern void math_vec3_mul_xyz(Vec12 *d, float x, float y, float z);
extern void math_vec3_sub(Vec12 *d, Vec12 *a, Vec12 *b);
extern float math_vec3_length(Vec12 *a);
extern void nlObjPutUseViewMatrix(char *g, float len);

void stage_draw_lights(void)
{
    char *game = (char *)0xC7F2EE0;
    int *pend_count = (int *)0xC363740;
    char *light = (char *)0xC1437B8;
    Vec12 mid, col_b, col_a;
    float one = 1.0f, two = 2.0f, half = 0.5f;
    float len;
    int i;
    char *entry;

    if (game[299] != 0 || game[302] != 0 || *(char *)0xC494D20 != 0)
        *pend_count = *(int *)0xC363744;
    nlSelectMatrixStack(1);
    nlUnitMatrix();
    for (i = 0; i < *pend_count; i++) {
        entry = (char *)(0xC363290 + (short)(i * 24));
        col_a = *(Vec12 *)entry;
        col_a.a |= 1;
        *(Vec12 *)(light + 112) = col_a;
        ((float *)&col_a)[0] = ((float *)&col_a)[0] + one;
        ((float *)&col_a)[1] = ((float *)&col_a)[1] + one;
        ((float *)&col_a)[2] = ((float *)&col_a)[2] + one;
        col_a.a |= 1;
        *(Vec12 *)(light + 144) = col_a;
        col_b = *(Vec12 *)(entry + 12);
        col_b.a |= 1;
        *(Vec12 *)(light + 176) = col_b;
        ((float *)&col_b)[0] = ((float *)&col_b)[0] + one;
        ((float *)&col_b)[1] = ((float *)&col_b)[1] + one;
        ((float *)&col_b)[2] = ((float *)&col_b)[2] + one;
        col_b.a |= 1;
        *(Vec12 *)(light + 208) = col_b;
        *(Vec16 *)(light + 68) = *(Vec16 *)(0xC363748 + i * 16);
        math_vec3_add(&mid, &col_a, &col_b);
        math_vec3_mul_xyz(&mid, half, half, half);
        *(Vec12 *)(light + 8) = mid;
        *(Vec12 *)(light + 40) = mid;
        math_vec3_sub(&mid, &col_a, &col_b);
        len = math_vec3_length(&mid);
        *(float *)(light + 20) = len * two;
        *(float *)(light + 52) = len * two;
        nlObjPutUseViewMatrix(light, len);
    }
    *(int *)0xC363744 = *pend_count;
    *pend_count = 0;
}
