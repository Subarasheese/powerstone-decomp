/* light/ambient helpers (vector sub/normalize, nlObjPutSetGlobalAmbience) using the slot records (0c05f6d8-0c05fc50) */

/* named globals (symbols.txt) */
extern char g_fxslots[];
struct o4_float { char p[0x4]; float v; };
struct o70_float { char p[0x70]; float v; };
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3_normalize(int);
struct o7C_float { char p[0x7C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int nlObjPutSetGlobalAmbience(float);
int FUN_0c0dccd0(int);
int FUN_0c0dcd20(float, float, float);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };

int FUN_0c05f6d8(int a4, float f4, float f5, float f6)
{
    int stk[4];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    w0_0 = f5;
    w0_0 = f6;
    v0_0 = *(int *)((v0_3 + 0xC));
    *(unsigned short *)((v0_3 + 0x12)) = ((*(short *)((v0_3 + 0x12))) + 0x1);
    v0_0 = (v0_0);
    v0_1 = (v0_3);
    if (((int)(*(short *)((v0_3 + 0x12))) < (int)(*(short *)((v0_3 + 0x10))))) goto L_C05F74E;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    v0_4 = *(signed char *)((v0_0 + ((((unsigned char)(*(signed char *)((v0_1 + 0x2))) << 2) << 2) << 1)));
    v0_2 = ((unsigned char)v0_4);
    v0_3 = (0x0);
    if (((unsigned char)v0_4 == 0)) goto L_C05F738;
    if ((v0_2 == 1)) goto L_C05F71E;
    if ((v0_2 == 2)) goto L_C05F728;
    L_C05F74E:;
    v0_4 = *(short *)((v0_1 + 0x12));
    v0_3 = *(short *)((v0_1 + 0x10));
    v0_2 = *(signed char *)((v0_1 + 0x2));
    w0_0 = (((struct o4_float *)(((((((unsigned char)v0_2 - 1) << 2) << 2) << 1) + v0_0)))->v);
    w0_1 = w0_0;
    w0_1 = w0_1 + (((float)v0_4 / (float)v0_3)) * ((((((struct o4_float *)((((((unsigned char)v0_2 << 2) << 2) << 1) + v0_0)))->v)) - w0_0));
    (((struct o70_float *)(v0_1))->v) = w0_1;
    v0_2 = (0x70);
    w0_1 = (((float)v0_4 / (float)v0_3));
    w0_1 = (((float)v0_4 / (float)v0_3));
    w0_0 = (w0_0);
    FPUL_ = (v0_3);
    if (((*(int *)((v0_1 + 0x8))) != 0)) goto L_C05F84C;
    v0_2 = *(signed char *)((v0_1 + 0x2));
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    math_vec3_sub((((int)stk + 0) + 0x4), ((((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) << 2) << 1) + v0_0) + 0x8), (((((((unsigned char)v0_2 - 1) << 2) << 2) << 1) + v0_0) + 0x8));
    math_vec3_mul_xyz((((int)stk + 0) + 0x4), w0_1, w0_1, w0_1);
    math_vec3_add((v0_1 + 0x14), (((((((unsigned char)(*(signed char *)((v0_1 + 0x2))) - 1) << 2) << 2) << 1) + v0_0) + 0x8), (((int)stk + 0) + 0x4));
    v0_2 = *(signed char *)((v0_1 + 0x2));
    *(unsigned char *)(((int)stk + 0)) = v0_2;
    math_vec3_sub((((int)stk + 0) + 0x4), ((((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) << 2) << 1) + v0_0) + 0x14), (((((((unsigned char)v0_2 - 1) << 2) << 2) << 1) + v0_0) + 0x14));
    math_vec3_mul_xyz((((int)stk + 0) + 0x4), w0_1, w0_1, w0_1);
    math_vec3_add((v0_1 + 0x2C), (((((((unsigned char)(*(signed char *)((v0_1 + 0x2))) - 1) << 2) << 2) << 1) + v0_0) + 0x14), (((int)stk + 0) + 0x4));
    math_vec3_sub((v0_1 + 0x44), (v0_1 + 0x14), (v0_1 + 0x2C));
    v0_2 = ((math_vec3_normalize((v0_1 + 0x44))));
    L_C05F84C:;
    return v0_2;
    L_C05F728:;
    *(unsigned char *)((v0_1 + 0x2)) = (*(signed char *)(((((((unsigned char)(*(signed char *)((v0_1 + 0x2))) << 2) << 2) << 1) + v0_0) + 0x1)));
    L_C05F738:;
    *(unsigned short *)((v0_1 + 0x10)) = (*(signed char *)(((((((unsigned char)(*(signed char *)((v0_1 + 0x2))) << 2) << 2) << 1) + v0_0) + 0x1)));
    *(unsigned short *)((v0_1 + 0x12)) = v0_3;
    goto L_C05F74E;
    L_C05F71E:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    *(unsigned char *)((v0_1 + 0x1)) = v0_3;
    v0_2 = (v0_3);
    goto L_C05F84C;
}

int FUN_0c05f85a(int a4)
{
    register int t3;
    register int t4;
    register float u5;

    *(unsigned short *)((a4 + 0x12)) = ((*(short *)((a4 + 0x12))) + 0x1);
    if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(short *)((a4 + 0x10)))) {
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t3 = *(short *)((a4 + 0x12));
    t4 = *(short *)((a4 + 0x10));
    u5 = ((-((float)t3 / (float)t4)) + 1.0f);
    if (0.0f > ((-((float)t3 / (float)t4)) + 1.0f)) {
        u5 = 0.0f;
    }
    (((struct o70_float *)(a4))->v) = u5;
    math_vec3_add((a4 + 0x14), (a4 + 0x14), (a4 + 0x20));
    math_vec3_add((a4 + 0x2C), (a4 + 0x2C), (a4 + 0x38));
    math_vec3_sub((a4 + 0x44), (a4 + 0x14), (a4 + 0x2C));
    return math_vec3_normalize((a4 + 0x44));
}

int FUN_0c05fb58(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = a4;
    t1 = 0x7;
    for (;;) {
        if ((((unsigned char)t0 & 0x80) != 0) && (t2 = (int)(((unsigned int)(t1 << 2)) >> 31), t3 = *(signed char *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots))), t3 != 0)) {
            break;
        }
        t1 = (t1 - 1);
        t0 = (t0 << 1);
        if ((int)t1 < 0) {
            return (FUN_0c0dcd20(1.0f, 1.0f, 1.0f));
        }
    }
    nlObjPutSetGlobalAmbience(((((struct o7C_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots))))->v)));
    FUN_0c0dccd0((((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots)) + 0x44));
    return (FUN_0c0dcd20((((((struct o84_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots))))->v)) * 1.0f), (((((struct o88_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots))))->v)) * 1.0f), (((((struct o8C_float *)(((short)(((((t1 << 2) << 1) + t1) << 2) << 2) + ((int)g_fxslots))))->v)) * 1.0f)));
}

int FUN_0c05fbee(int a4)
{
    (((struct o4_uint *)0xC38380C)->v) = a4;
    (((struct o0_uint *)0xC38380C)->v) = a4;
    (((struct o8_float *)0xC38380C)->v) = (*(float *)0xC05FC44);
    return 0xC05FC44;
}

void FUN_0c05fc00(void)
{
    *(unsigned int *)0xC38380C = 0x0;
}

int FUN_0c05fc08(void)
{
    (((struct o4_uint *)0xC38380C)->v) = 0x270F;
    (((struct o0_uint *)0xC38380C)->v) = 0x270F;
    (((struct o8_float *)0xC38380C)->v) = (*(float *)0xC05FC4C);
    return 0xC05FC4C;
}

void FUN_0c05fc1c(void)
{
    *(unsigned int *)0xC38380C = 0x0;
}
