/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int FUN_0c0e0ae0(int);
int FUN_0c0e1240(int, int, int, float, float, float, float);
int nlPopMatrix(int);
int FUN_0c0e19b0(int);
int FUN_0c0e6fe8(void);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
float nlMultiMatrixRevOrder8(int a4);
int FUN_0c062210(int a4, int a5);
int FUN_0c0621de(int a4, int a5);
int FUN_0c0e09f0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c0e24f0(int a4, int a5, int a6, int a7);

float nlMultiMatrixRevOrder8(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u2 = (((struct o8_float *)(a4))->v);
    u3 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)((a4 + 0x8)))->v);
    u5 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u6 = (((struct o8_float *)(((a4 + 0x8) + 0x8)))->v);
    u7 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = (((struct o8_float *)((((a4 + 0x8) + 0x8) + 0x8)))->v);
    u9 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = (((struct o8_float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u11 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = (((struct o8_float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u13 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = (((struct o8_float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u15 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16[0] = u1;
    u16[1] = u0;
    u16[2] = u3;
    u16[3] = u2;
    u16[4] = u5;
    u16[5] = u4;
    u16[6] = u7;
    u16[7] = u6;
    u16[8] = u9;
    u16[9] = u8;
    u16[10] = u11;
    u16[11] = u10;
    u16[12] = u13;
    u16[13] = u12;
    u16[14] = u15;
    u16[15] = u14;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u1;
    u19[1] = u0;
    u19[2] = u3;
    u19[3] = u2;
    u19[4] = u5;
    u19[5] = u4;
    u19[6] = u7;
    u19[7] = u6;
    u19[8] = u9;
    u19[9] = u8;
    u19[10] = u11;
    u19[11] = u10;
    u19[12] = u13;
    u19[13] = u12;
    u19[14] = u15;
    u19[15] = u14;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u1;
    u21[1] = u0;
    u21[2] = u3;
    u21[3] = u2;
    u21[4] = u5;
    u21[5] = u4;
    u21[6] = u7;
    u21[7] = u6;
    u21[8] = u9;
    u21[9] = u8;
    u21[10] = u11;
    u21[11] = u10;
    u21[12] = u13;
    u21[13] = u12;
    u21[14] = u15;
    u21[15] = u14;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u1;
    u23[1] = u0;
    u23[2] = u3;
    u23[3] = u2;
    u23[4] = u5;
    u23[5] = u4;
    u23[6] = u7;
    u23[7] = u6;
    u23[8] = u9;
    u23[9] = u8;
    u23[10] = u11;
    u23[11] = u10;
    u23[12] = u13;
    u23[13] = u12;
    u23[14] = u15;
    u23[15] = u14;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u1;
}

int FUN_0c062210(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c0e19b0(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c0e6fe8();
    nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0621de(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c0e19b0(a5);
    *(volatile int *)(((int)stk + 0));
    FUN_0c0e6fe8();
    nlCalcVector((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0e09f0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    if (a4 == 0) {
        if (a5 != 0) {
            return FUN_0c0e1240(a5, a5, a6, f4, f5, f6, f7);
        }
        return ((int (*)(int, int, int, int))(0xC0E0A30))(a4, a5, a6, a7);
    }
    if (a5 == 0) {
        return FUN_0c0e0ae0(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0E0A22))(a4, a4, a6, a7);
}

int FUN_0c0e24f0(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;
    register float u5;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0E251E))((((a4 + 0x4) + 0x4) + 0x4), (a4 + 0xC), a6, a7, u0, u1, u2, u5);
}
