/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0555dc(void);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c032fd4(int a4, int a5);
int FUN_0c0355cc(int a4);
int FUN_0c0bcb44(int a4);

int FUN_0c032fd4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t29;
    register int t1;
    register int t20;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t29 = t0;
    if (t0 == 0) {
        t1 = FUN_0c059132(0x5, 0x1, 0x3);
        t20 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC033114;
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            *(unsigned int *)((t1 + 0x2C)) = 0x4000;
            *(unsigned int *)((t1 + 0x30)) = 0x0;
            *(unsigned int *)((t1 + 0x34)) = 0x0;
            t5 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t8 = *(signed char *)((a4 + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), (t5 + 0xB));
                *(volatile int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0));
                FUN_0c0e6fe8();
                *(volatile int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0));
                FUN_0c0e6fe8();
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x3) {
                    break;
                }
            }
            (((struct o118_uint *)(t1))->v) = (0xC7E4130 + (unsigned short)((unsigned short)(*(signed char *)((t1 + 0x3))) * (unsigned short)0x72D0));
            *(unsigned char *)((t1 + 0x8)) = (*(signed char *)(((int)stk + 0)));
            *(unsigned int *)((t1 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t1))->v) = 0x258;
            (((struct oEE_ushort *)(t1))->v) = 0x0;
            t20 = 0xEE;
        }
        t29 = t20;
    }
    return t29;
}

int FUN_0c0355cc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t0 = FUN_0c059132(0x5, 0x1, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t2 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC0356DE;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        t2 = (((struct o7198_short *)(a4))->v);
        (((struct oF0_ushort *)(t0))->v) = t2;
        u0 = (((struct o0_float *)0xC035720)->v);
        u1 = (((struct o4_float *)0xC035720)->v);
        t3 = t2;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t4 = 0x2E0;
            t5 = t2;
            t5 = (t5 << 2);
            t4 = (t4 + t0);
            t4 = (t4 + t5);
            t4 = (*(int *)((t4 + 0x0)));
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x2)) = 0xF;
            t6 = *(signed char *)(((0x3 + a4) + 0x0));
            t3 = 0xC06233A;
            FUN_0c06233a(t4, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), (*(int *)((t5 + 0xC149658))));
            if (t2 == 0) {
                t3 = (*(signed char *)((a4 + 0x71F1)));
                if (t3 == 0) {
                    (((struct o90_uint *)(t4))->v) = (0x21F0 + a4);
                } else {
                    t5 = 0x3690;
                    t5 = (t5 + a4);
                    (((struct o90_uint *)(t4))->v) = t5;
                    t6 = t5;
                }
                t5 = t6;
                t6 = t3;
            } else {
                (((struct oC_float *)(t4))->v) = u1;
                (((struct o28_float *)(t4))->v) = 0.0f;
                (((struct o2C_float *)(t4))->v) = u0;
                (((struct o30_float *)(t4))->v) = 1.0f;
            }
            t2 = (t2 + 0x1);
            t3 = t6;
        }
        t1 = 0x2DC;
    }
    return t1;
}

int FUN_0c0bcb44(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_1 = (FUN_0c0555dc()) != 1;
    v0_0 = (v0_0);
    if (v0_1) goto L_C0BCB56;
    *(unsigned char *)((v0_0 + 0x8)) = 0xFFFFFFFF;
    L_C0BCB56:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0BCB6C;
    if ((v0_1 == 1)) goto L_C0BCB96;
    if ((v0_1 == 2)) goto L_C0BCB6C;
    if ((v0_1 == 3)) goto L_C0BCB96;
    return FUN_0c059330(v0_0);
    L_C0BCB96:;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = 0x2;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = 0x2;
    (((struct o105_uchar *)(v0_0))->v) = 0x2;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0BCBB0;
    if ((v0_1 == 1)) goto L_C0BCBD4;
    L_C0BCBFC:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o40_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + 0x200);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + 0x200);
    v0_0 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_0 + 0x18)) = ((*(int *)((v0_0 + 0x18))) + 0x200);
    v0_1 = (0x2E0);
    return v0_1;
    L_C0BCBD4:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct o40_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = ((float)v0_1 / 4.0f);
    w0_0 = (0.0f);
    FPUL_ = (v0_1);
    if ((((float)v0_1 / 4.0f) > 0.0f)) goto L_C0BCBF4;
    *(unsigned char *)((v0_0 + 0x8)) = 0xA;
    L_C0BCBF4:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    goto L_C0BCBFC;
    L_C0BCBB0:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0BCBFC;
    L_C0BCBBE:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C0BCBFC;
    L_C0BCB6C:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0BCB7A;
    if ((v0_1 == 1)) goto L_C0BCBD4;
    goto L_C0BCBFC;
    L_C0BCB7A:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0BCBFC;
    *(unsigned char *)(((0x105 + v0_0) + 0x2)) = 0x1;
    *(unsigned char *)(((0x105 + v0_0) + 0x1)) = 0x1;
    (((struct o105_uchar *)(v0_0))->v) = 0x1;
    goto L_C0BCBBE;
}
