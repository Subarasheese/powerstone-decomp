/* float/int vector and matrix helpers (0c06208c-0c0620a4) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };

int math_vec3_mul_xyz(int a4, float f4, float f5, float f6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) * f4);
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) * f5);
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) * f6);
    return 0x8;
}
