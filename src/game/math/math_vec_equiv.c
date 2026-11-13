/* float/int vector and matrix helpers (0c062050-0c06208c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };

int math_vec3_add(int a4, int a5, int a6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) + (*(float *)((a6 + 0x0))));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o4_float *)(a6))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a5))->v)) + ((((struct o8_float *)(a6))->v)));
    return 0x8;
}

int math_vec3_sub(int a4, int a5, int a6)
{
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0))));
    (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a6))->v)));
    (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v)));
    return 0x8;
}
