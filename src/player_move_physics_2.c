/* velocity/acceleration/gravity, angle to opponent, stick direction (part 2 of 3 of the same module) (0c09da1c-0c09db78) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o718C_int { char p[0x718C]; int v; };
struct o8_float { char p[0x8]; float v; };
int math_vec3_mul_xyz(int, float, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);

float pl_apply_motion_translation(int a4)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register float u14;
    register float u18;
    register float t35;
    register float t37;
    register float u40;
    register float u46;

    t1 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x0));
    *(float *)(((int)stk + 0)) = (((float)(short)(((int)(t1 & 0xFF00) >> 8) | ((unsigned char)t1 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    t4 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x2));
    *(float *)(((int)stk + 4)) = (((float)(short)(((int)((short)t4 & 0xFF00) >> 8) | ((unsigned char)(short)t4 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    t7 = *(short *)((((((struct o718C_int *)(a4))->v)) + 0x4));
    *(float *)(((int)stk + 8)) = (((float)(short)(((int)(0xFF00 & (short)t7) >> 8) | ((unsigned char)(short)t7 << 8)) / 16.0f) * (1.0f / (float)(unsigned char)(*(signed char *)((a4 + 0x71A7)))));
    if ((*(signed char *)((a4 + 0x71B4))) != 0) {
        t10 = *(int *)((a4 + 0x1C));
        u14 = *(float *)((((*(signed char *)(((0x71F1 + t10) + 0x0))) << 2) + ((((*(signed char *)((t10 + 0x4))) << 2) << 1) + 0xC150C60)));
        u18 = *(float *)((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + ((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC150C60)));
        math_vec3_mul_xyz(((int)stk + 0), (u14 / u18), (u14 / u18), (u14 / u18));
    }
    t35 = math_sin_angle16((*(int *)((a4 + 0x30))));
    t37 = math_cos_angle16((*(int *)((a4 + 0x30))));
    u40 = (((((struct o8_float *)(((int)stk + 0)))->v)) * t35);
    u40 = u40 + t37 * (*(float *)(((int)stk + 0)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u40);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 0)))->v)));
    u46 = (-((*(float *)(((int)stk + 0))) * t35));
    u46 = u46 + t37 * (*(float *)(((int)stk + 8)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u46);
    return t37;
}
