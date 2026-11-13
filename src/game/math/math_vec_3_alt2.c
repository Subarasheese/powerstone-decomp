/* float/int vector and matrix helpers (0c0620a4-0c06231c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
extern float math_vec3_length();
int nlPopMatrix(int);
int nlPushMatrix(void);
void nlGetTranslate(int a4);

float math_vec3_cos_between(int a4, int a5, float f4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = ((float (*)(int, float))(math_vec3_length))(a4, f4);
    u1 = ((float (*)(int))(math_vec3_length))(a5);
    u2 = (u0 * u1);
    if ((u0 * u1) == 0.0f) {
        u2 = (*(float *)0xC062300);
    }
    u0 = (((((struct o4_float *)(a4))->v)) * ((((struct o4_float *)(a5))->v)));
    u0 = u0 + (*(float *)((a5 + 0x0))) * (*(float *)((a4 + 0x0)));
    u1 = u0;
    u1 = u1 + ((((struct o8_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v));
    return (u1 / u2);
}

int math_mat_get_translate(int a4, int a5)
{
    nlPushMatrix();
    nlGetTranslate(a5);
    return nlPopMatrix(0x1);
}
