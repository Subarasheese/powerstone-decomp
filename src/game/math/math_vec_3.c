/* float/int vector and matrix helpers (0c0620a4-0c06231c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_signed_sqrt(float);
struct vec3f { float x, y, z; };
extern int nlPushMatrix(void *m);
extern void nlCalcVector(void *src, void *dst);
extern int nlPopMatrix(int n);

int math_vec3_length(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o8_float *)(a4))->v);
    u3 = (u1 * u1);
    u3 = u3 + u0 * u0;
    u0 = u3;
    u0 = u0 + u2 * u2;
    return (math_signed_sqrt(u0));
}

void math_mat_transform_vector(struct vec3f *vec, void *matrix)
{
    struct vec3f tmp_vec;
    nlPushMatrix(matrix);
    tmp_vec = *vec;
    nlCalcVector(&tmp_vec, vec);
    nlPopMatrix(1);
}

int math_mat_row_length(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = *(float *)(((a4 + ((a5 << 2) << 2)) + 0x0));
    u1 = (((struct o4_float *)((a4 + ((a5 << 2) << 2))))->v);
    u2 = (((struct o8_float *)((a4 + ((a5 << 2) << 2))))->v);
    u3 = (u1 * u1);
    u3 = u3 + u0 * u0;
    u0 = u3;
    u0 = u0 + u2 * u2;
    return (math_signed_sqrt(u0));
}

void math_vec3i_add(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) + (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) + (*(int *)((a6 + 0x8))));
}

void math_vec3i_sub(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) - (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) - (*(int *)((a6 + 0x8))));
}
