/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c020cc2(int, int);
int FUN_0c020e3e(int, int);
int FUN_0c020e78(int, int);
int FUN_0c020ff2(int, int, int);
int FUN_0c021042(int, int, int);
int FUN_0c021090(int, int, int);
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c059132(int, int, int);
int FUN_0c0e6fe8(int);
float FUN_0c026220(int a4, int a5, int a6);
float FUN_0c026334(int a4, int a5, int a6);
int FUN_0c02f328(int a4);
int FUN_0c049e68(int a4, int a5);
int FUN_0c0df360(int a4, int a5, int a6, int a7, float f4);

float FUN_0c026220(int a4, int a5, int a6)
{
    int stk[15];
    register float u27;
    register float u17;
    register float u7;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x14), a5);
                FUN_0c020ff2(a6, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14));
                u7 = ((*(float *)(((int)stk + 24))) + (*(float *)(((int)stk + 36))));
            }
            u17 = u7;
        } else {
            FUN_0c020e3e(((int)stk + 0), a5);
            FUN_0c021042(a6, ((int)stk + 0), ((int)stk + 0));
            u17 = ((*(float *)(((int)stk + 4))) + (*(float *)(((int)stk + 16))));
        }
        u27 = u17;
    } else {
        FUN_0c020e78((((int)stk + 0) + 0x2C), a5);
        FUN_0c021090(a6, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
        u27 = ((*(float *)(((int)stk + 48))) + (*(float *)(((int)stk + 56))));
    }
    return u27;
}

float FUN_0c026334(int a4, int a5, int a6)
{
    int stk[15];
    register float u27;
    register float u17;
    register float u7;

    if (((signed char)a4 & 0xF) != 0) {
        if (((signed char)a4 & 0xF) != 1) {
            if (((signed char)a4 & 0xF) != 2) {
            } else {
                FUN_0c020cc2((((int)stk + 0) + 0x14), a5);
                FUN_0c020ff2(a6, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14));
                u7 = ((*(float *)(((int)stk + 24))) - (*(float *)(((int)stk + 36))));
            }
            u17 = u7;
        } else {
            FUN_0c020e3e(((int)stk + 0), a5);
            FUN_0c021042(a6, ((int)stk + 0), ((int)stk + 0));
            u17 = ((*(float *)(((int)stk + 4))) - (*(float *)(((int)stk + 16))));
        }
        u27 = u17;
    } else {
        FUN_0c020e78((((int)stk + 0) + 0x2C), a5);
        FUN_0c021090(a6, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
        u27 = ((*(float *)(((int)stk + 48))) - (*(float *)(((int)stk + 56))));
    }
    return u27;
}

int FUN_0c02f328(int a4)
{
    int stk[16];
    register int t9;
    register float u3;

    t9 = 0xC7EB2B1;
    if ((*(signed char *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7EB2B1))) == 0) {
        u3 = ((((struct o0_float *)0xC02F460)->v));
        u3 = u3 + ((((struct o4_float *)0xC02F460)->v)) * (float)(signed char)a4;
        *(float *)(((int)stk + 12)) = u3;
        *(float *)(((int)stk + 16)) = ((((struct o8_float *)0xC02F460)->v));
        *(float *)(((int)stk + 20)) = ((((struct oC_float *)0xC02F460)->v));
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(unsigned int *)(((int)stk + 60)) = 0x5;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(float *)(((int)stk + 28)) = 1.0f;
        *(float *)(((int)stk + 24)) = 1.0f;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = a4;
        t9 = (FUN_0c027fa4((((int)stk + 0) + 0x8), 0xC17FDB0, 0x8, (*(signed char *)((0xC3211E8 + ((unsigned int)((*(int *)0xC7F307C) & 0xE) >> 2)))), a4, 0x0));
    }
    return t9;
}

int FUN_0c049e68(int a4, int a5)
{
    int stk[1];
    register int t24;
    register int t3;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t24 = 0x18;
    if ((*(signed char *)0xC7F4768) == 0) {
        t24 = 0x19;
        if ((*(signed char *)0xC7F4769) == 0) {
            t3 = FUN_0c059132(0x5, 0x1, 0x1);
            t24 = t3;
            if (t3 != 0) {
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                *(unsigned char *)((t3 + 0x1)) = 0x0;
                *(unsigned int *)((t3 + 0x10)) = 0xC049EE4;
                (((struct o50_float *)(t3))->v) = 0.199999988f;
                FUN_0c0e6fe8(t3);
                (((struct oEC_ushort *)(t6))->v) = 0xA;
                (((struct o38_float *)(t6))->v) = (*(float *)((0xC14AA08 + ((*(signed char *)((a4 + 0x4))) << 2))));
                (((struct o3C_float *)(t6))->v) = 30.0f;
                t24 = *(signed char *)(((int)stk + 0));
                *(unsigned char *)((t6 + 0xB)) = t24;
                *(unsigned int *)((t6 + 0x1C)) = a4;
            }
        }
    }
    return t24;
}

int FUN_0c0df360(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t0 = 0xD;
    u1 = 0.0f;
    for (;;) {
        t2 = (t0 << 1);
        t1 = t0;
        t0 = (t0 - 1);
        u2 = ((float)t1 * (float)t1);
        u3 = (u2 * u0);
        u2 = (((float)t2 + u1) + 1.0f);
        u1 = (u3 * u0);
        u1 = (u1 / u2);
        if ((int)t0 < (int)0x1) {
            break;
        }
    }
    u2 = ((((u0 / (u1 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f);
    if (f4 > 1.0f) {
        return ((int (*)(int, int, int, int, float, float, float, float, float))(0xC0DF3DC))(((int)(u2 + 0.5f) & 0xFFFF), 0x1, a6, a7, f4, (u0 / (u1 + 1.0f)), 1.0f, 6.28318501f, (float)t1);
    }
    if (-1.0f > f4) {
        return ((int (*)(int, int, int, int, float, float, float, float, float))(0xC0DF3DC))(((int)(u2 + 0.5f) & 0xFFFF), 0x1, a6, a7, f4, (u0 / (u1 + 1.0f)), 1.0f, 6.28318501f, (float)t1);
    }
    return ((int (*)(int, int, int, int, float, float, float, float, float))(0xC0DF3E0))(((int)(u2 + 0.5f) & 0xFFFF), 0x1, a6, a7, f4, (u0 / (u1 + 1.0f)), 1.0f, 6.28318501f, (float)t1);
}
