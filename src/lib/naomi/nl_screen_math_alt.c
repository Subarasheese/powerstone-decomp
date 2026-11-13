/* nl screen/frame buffer wrappers (0c0ddf30-0c0dfe20) */

int math_atan_angle16(float);
float math_sin_angle16(int);
float math_ln_float(int, int, int, int, float);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_exp_float(int, int, int, int, float);
float math_sin_reduce_quadrant(int *quadrant, float x);

int math_atan2_angle16(float vy, float vx)
{
    if (vy > vx) {
        if (!(-vy > vx)) {
            if (vy == 0.0f) {
                return 0x4000;
            }
            return (0x4000 - math_atan_angle16(vx / vy)) & 0xFFFF;
        }
        if (vx == 0.0f) {
            return 0x8000;
        }
        return (0x8000 + math_atan_angle16(vy / vx)) & 0xFFFF;
    }
    if (!(-vy > vx)) {
        if (vx == 0.0f) {
            return 0;
        }
        return math_atan_angle16(vy / vx);
    }
    if (vy == 0.0f) {
        return 0xC000;
    }
    return (0xC000 - math_atan_angle16(vx / vy)) & 0xFFFF;
}

float math_csc_angle16(int a4)
{
    register float t0;

    if (((unsigned short)a4 != 0) && ((unsigned short)a4 != 0x8000)) {
        t0 = math_sin_angle16((unsigned short)a4);
        return (1.0f / t0);
    }
    return (*(float *)0xC0DF5BC);
}

float math_log10_float(int a4, int a5, int a6, int a7, float f4)
{
    register float t0;

    t0 = math_ln_float(a4, a5, a6, a7, f4);
    return (t0 / (*(float *)0xC0DF89C));
}

float math_log2_float(int a4, int a5, int a6, int a7, float f4)
{
    register float t0;

    t0 = math_ln_float(a4, a5, a6, a7, f4);
    return (t0 / (*(float *)0xC0DF898));
}

float FUN_0c0dfaf2(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o0_float *)0xC0DFCAC)->v);
    u1 = (((struct o4_float *)0xC0DFCAC)->v);
    if (_builtin_fabsf((((float)a4 * u0) / u1)) > ((((struct o8_float *)0xC0DFCAC)->v))) {
        u2 = math_exp_float(a4, a5, a6, a7, (((float)a4 * u0) / u1));
        return ((u2 - (1.0f / u2)) / (1.0f + 1.0f));
    }
    u2 = (((float)a4 * u0) / u1);
    u3 = (((float)a4 * u0) / u1);
    u4 = ((u2 * u3) / ((((struct oC_float *)0xC0DFCAC)->v)));
    u2 = (((float)a4 * u0) / u1);
    return ((u4 + 1.0f) * u2);
}

float math_sin_float(float x)
{
    int quadrant;
    float half_tan, result;

    half_tan = math_sin_reduce_quadrant(&quadrant, x / (1.0f + 1.0f));
    result = (half_tan * (1.0f + 1.0f)) / (1.0f + half_tan * half_tan);
    if (quadrant % 2 != 0)
        return -result;
    return result;
}

float math_tan_reduce_quadrant(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    u0 = -0.5f;
    if (!(0.0f > f4)) {
        u0 = 0.5f;
    }
    *(unsigned int *)((a4 + 0x0)) = (int)(u0 + (f4 / 1.57079625f));
    u1 = (f4 - (((float)(int)(u0 + (f4 / 1.57079625f)) * 1.57080078f)));
    u1 = u1 + 4.45445494e-06f * ((float)(int)(u0 + (f4 / 1.57079625f)));
    t0 = 0xB;
    u0 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u2 = ((float)t1 - u0);
        u0 = (u1 * u1);
        u0 = (u0 / u2);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    return (u1 / (1.0f - u0));
}

float FUN_0c0dfd72(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((float)a4 * 6.28318501f) / 65536.0f);
    if ((((float)a4 * 6.28318501f) / 65536.0f) > 0.000999999931f) {
        u1 = (u0 * (1.0f + 1.0f));
        u1 = -u1;
        u2 = (((1.0f + 1.0f) / ((math_exp_float(a4, a5, a6, a7, u1)) + 1.0f)) + -1.0f);
    } else {
        if (0.000999999931f > (((float)a4 * 6.28318501f) / 65536.0f)) {
            u1 = ((1.0f + 1.0f) / ((math_exp_float(a4, a5, a6, a7, (u0 * (1.0f + 1.0f)))) + 1.0f));
            u1 = -u1;
            u0 = (u1 + 1.0f);
        } else {
            u1 = (((float)a4 * 6.28318501f) / 65536.0f);
            u3 = (((float)a4 * 6.28318501f) / 65536.0f);
            u4 = ((u1 * u3) / 3.0f);
            u1 = (((float)a4 * 6.28318501f) / 65536.0f);
            u0 = ((1.0f - u4) * u1);
        }
        u2 = u0;
    }
    return u2;
}
