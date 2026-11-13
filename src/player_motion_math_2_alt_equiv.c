/* motion length, key stream readers, angle deltas (part 2 of 2 of the same module) (0c09b0f8-0c09b7a4) */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_angle3_delta(int, int, int);
int sys_nop_09b700(void);
struct o54_float { char p[0x54]; float v; };
struct o718C_int { char p[0x718C]; int v; };

int mot_read_vec3_scaled(int a4, int a5);
int mot_read_vec3_float(int a4, int a5);

int mot_read_vec3_scaled(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register int t5;
    register int t6;
    register int t7;
    int t8;

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    u2 = (((struct o0_float *)0xC09B734)->v);
    u3 = (((struct o4_float *)0xC09B734)->v);
    u4 = (((struct o8_float *)0xC09B734)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)((((float)(short)(((int)(t1 & 0xFF00) >> 8) | ((unsigned char)t1 << 8)) * u3) / u4) / u2);
    t5 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t5 + 0x2);
    t6 = *(short *)((((t5 + 0x2) - 2) + 0x0));
    *(unsigned int *)((a4 + 0x4)) = (int)((((float)(short)(((int)(t6 & 0xFF00) >> 8) | ((unsigned char)t6 << 8)) * u3) / u4) / u2);
    t7 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t7 + 0x2);
    t8 = *(short *)((((t7 + 0x2) - 2) + 0x0));
    *(unsigned int *)((a4 + 0x8)) = (int)((((float)(short)(((int)(0xFF00 & t8) >> 8) | ((unsigned char)t8 << 8)) * u3) / u4) / u2);
    return 0xC09B73C;
}

int mot_read_vec3_float(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u2;
    register int t3;
    register int t4;
    register int t5;
    int t6;

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    u2 = *(float *)0xC09B740;
    *(float *)((a4 + 0x0)) = ((float)(short)(((int)(t1 & 0xFF00) >> 8) | ((unsigned char)t1 << 8)) / u2);
    t3 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t3 + 0x2);
    t4 = *(short *)((((t3 + 0x2) - 2) + 0x0));
    (((struct o4_float *)(a4))->v) = ((float)(short)(((int)(t4 & 0xFF00) >> 8) | ((unsigned char)t4 << 8)) / u2);
    t5 = *(int *)((a5 + 0x0));
    *(unsigned int *)((a5 + 0x0)) = (t5 + 0x2);
    t6 = *(short *)((((t5 + 0x2) - 2) + 0x0));
    (((struct o8_float *)(a4))->v) = ((float)(short)(((int)(0xFF00 & t6) >> 8) | ((unsigned char)t6 << 8)) / u2);
    return 0x8;
}

int math_angle3_delta_scaled(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = math_angle3_delta(a4, a5, a6);
    *(unsigned int *)((a4 + 0x0)) = (int)((float)(*(int *)((a4 + 0x0))) * f4);
    *(unsigned int *)((a4 + 0x4)) = (int)((float)(*(int *)((a4 + 0x4))) * f4);
    *(unsigned int *)((a4 + 0x8)) = (int)((float)(*(int *)((a4 + 0x8))) * f4);
    return t0;
}

int math_vec3_sub_scaled(int a4, int a5, int a6, float f4)
{
    *(float *)((a4 + 0x0)) = (((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0)))) * f4);
    (((struct o4_float *)(a4))->v) = ((((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v))) * f4);
    (((struct o8_float *)(a4))->v) = ((((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v))) * f4);
    return 0x8;
}

int FUN_0c09b704(int a4, int a5, int a6)
{
    sys_nop_09b700();
    sys_nop_09b700();
    return sys_nop_09b700();
}

float FUN_0c09b74c(int a4)
{
    int stk[7];
    register float u8;
    register float u9;

    *(unsigned int *)(((int)stk + 0)) = (((((struct o718C_int *)(a4))->v)) + 0x6);
    mot_read_vec3_scaled((((int)stk + 0) + 0x10), ((int)stk + 0));
    mot_read_vec3_float((((int)stk + 0) + 0x4), ((int)stk + 0));
    u8 = *(float *)(((int)stk + 8));
    u9 = ((*(float *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC150C60 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0))) * ((((struct o54_float *)(a4))->v)));
    *(float *)(((int)stk + 8)) = (u8 * u9);
    return (u8 * u9);
}
