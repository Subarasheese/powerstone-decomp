/* float/int vector and matrix helpers (0c0620a4-0c06231c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_vec3_length(int, float);
float math_signed_sqrt(float);
struct vec3i { int x, y, z; };
int nlPushMatrix(int);
int nlCalcPoint(struct vec3i *, struct vec3i *);
int nlPopMatrix(int);
float math_mat_row_length(int, int, float);

float math_vec3_normalize(int a4, float f4)
{
    register float t0;

    t0 = math_vec3_length(a4, f4);
    if (t0 != 0.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) / t0);
        (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) / t0);
        (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) / t0);
    }
    return t0;
}

float math_vec2_cos_between(float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (f5 * f5);
    u0 = u0 + f4 * f4;
    u1 = math_signed_sqrt(u0);
    u0 = (f7 * f7);
    u0 = u0 + f6 * f6;
    u2 = math_signed_sqrt(u0);
    u0 = (u1 * u2);
    if ((u1 * u2) == 0.0f) {
        u0 = (*(float *)0xC062300);
    }
    u1 = (f5 * f7);
    u1 = u1 + f6 * f4;
    return (u1 / u0);
}

void math_mat_transform_point(struct vec3i *point, int matrix_idx)
{
    struct vec3i tmp;

    nlPushMatrix(matrix_idx);
    tmp = *point;
    nlCalcPoint(&tmp, point);
    nlPopMatrix(1);
}

float math_mat_row0_length(int a4, float f4)
{
    return (math_mat_row_length(a4, 0x0, f4));
}

float math_mat_row1_length(int a4, float f4)
{
    return (math_mat_row_length(a4, 0x1, f4));
}

float math_mat_row2_length(int a4, float f4)
{
    return (math_mat_row_length(a4, 0x2, f4));
}
