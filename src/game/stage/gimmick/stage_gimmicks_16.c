/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0a30-0c0b0da0) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
struct o2C_float { char p[0x2C]; float v; };
float math_rand_float(void);
int FUN_0c0e6f24(int);

int stage_gimmick_17_spawn(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = obj_create(0x5, 0x1, 0x5);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0B0B12;
        *(unsigned char *)((t1 + 0x4)) = 0xD;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t3 = t0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))), 0xC664958, 0xE);
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0));
            t0 = ((int (*)(void))(FUN_0c0e6fe8))();
            t0 = (t3 << 2);
            t3 = (t3 + 0x1);
            *(unsigned int *)(((*(int *)((((0x2E0 + t1) + t0) + 0x0))) + 0x14)) = (*(int *)((t0 + 0xC152E7C)));
            if ((int)t3 >= (int)0x5) {
                break;
            }
        }
        t2 = 0xC152E7C;
    }
    return t2;
}

int stage_gimmick_17_update(int a4, int a5, int a6, int a7, float f4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_5 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
    v0_4 = *(signed char *)((v0_5 + 0x8));
    v0_6 = (v0_4);
    v0_0 = (0xC0DF940);
    v0_0 = (0x3C);
    v0_1 = (0x0);
    v0_2 = (0x5);
    v0_3 = (v0_5);
    w0_0 = (255.0f);
    if ((v0_4 == 0)) goto L_C0B0B44;
    if ((v0_6 == 1)) goto L_C0B0BC0;
    L_C0B0C88:;
    return v0_6;
    L_C0B0BC0:;
    v0_4 = (v0_1);
    v0_3 = ((v0_3 + 0x2E0));
    L_C0B0BC6:;
    v0_5 = *(int *)((v0_3 + 0x0));
    v0_8 = *(int *)((v0_5 + 0x28));
    v0_6 = (v0_8);
    v0_7 = (v0_5);
    v0_5 = (0xB6);
    v0_3 = ((v0_3 + 0x4));
    if ((v0_8 == 0)) goto L_C0B0BE8;
    if ((v0_6 == 1)) goto L_C0B0BF6;
    if ((v0_6 == 2)) goto L_C0B0C10;
    if ((v0_6 == 3)) goto L_C0B0BF6;
    if ((v0_6 == 4)) goto L_C0B0C10;
    L_C0B0C82:;
    v0_5 = (int)(v0_4 + 0x1) < (int)v0_2;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C0B0BC6;
    goto L_C0B0C88;
    L_C0B0C10:;
    *(unsigned int *)((v0_7 + 0x10)) = ((*(int *)((v0_7 + 0x10))) - v0_5);
    w0_2 = (((struct o2C_float *)(v0_7))->v);
    (((struct o2C_float *)(v0_7))->v) = (w0_2 - 1.0f);
    v0_6 = (0x2C);
    w0_1 = (0.0f);
    if (((w0_2 - 1.0f) != 0.0f)) goto L_C0B0C82;
    *(unsigned int *)((v0_7 + 0x10)) = v0_1;
    if (((*(int *)((v0_7 + 0x28))) != 4)) goto L_C0B0C70;
    w0_3 = math_rand_float();
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_3 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * w0_0))) goto L_C0B0C48;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C0B0C48:;
    v0_5 = FUN_0c0e6f24(v0_5);
    *(unsigned int *)((v0_7 + 0x38)) = ((v0_5 + 0x5) * v0_0);
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = v0_1;
    v0_6 = (((v0_5 + 0x5) * v0_0));
    goto L_C0B0C82;
    L_C0B0C70:;
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = ((*(int *)(((v0_7 + 0x28) + 0x0))) + 0x1);
    (((struct o2C_float *)(v0_7))->v) = 20.0f;
    v0_6 = (0x2C);
    w0_1 = (20.0f);
    goto L_C0B0C82;
    L_C0B0BF6:;
    *(unsigned int *)((v0_7 + 0x10)) = ((*(int *)((v0_7 + 0x10))) + v0_5);
    w0_2 = (((struct o2C_float *)(v0_7))->v);
    (((struct o2C_float *)(v0_7))->v) = (w0_2 - 1.0f);
    v0_6 = (0x2C);
    w0_1 = (0.0f);
    if (((w0_2 - 1.0f) == 0.0f)) goto L_C0B0C70;
    goto L_C0B0C82;
    L_C0B0BE8:;
    v0_5 = *(int *)((v0_7 + 0x38));
    *(unsigned int *)((v0_7 + 0x38)) = (v0_5 - 1);
    if (((v0_5 - 1) == 0)) goto L_C0B0C70;
    goto L_C0B0C82;
    L_C0B0B44:;
    *(unsigned char *)((v0_3 + 0x8)) = ((*(signed char *)((v0_3 + 0x8))) + 0x1);
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + v0_3);
    v0_4 = (v0_1);
    L_C0B0BBC:;
    if (((int)v0_4 < (int)v0_2)) goto L_C0B0B84;
    goto L_C0B0BC0;
    L_C0B0B84:;
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x4);
    v0_6 = *(int *)((((v0_6 + 0x4) - 4) + 0x0));
    w0_3 = math_rand_float();
    v0_7 = (v0_6);
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_3 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * w0_0))) goto L_C0B0BA2;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C0B0BA2:;
    *(unsigned int *)((v0_7 + 0x38)) = (((FUN_0c0e6f24(v0_5)) + 0x5) * v0_0);
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = v0_1;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0B0BBC;
}
