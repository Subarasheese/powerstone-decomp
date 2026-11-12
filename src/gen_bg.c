/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c01ae08(int);
int FUN_0c01b4c0(int);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int);
int FUN_0c06231c(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09db78(int);
int FUN_0c09ddfe(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0abd20(int);
float FUN_0c0dfa50(int, int, int, int);
int FUN_0c0e6fe8(void);
int FUN_0c0af448(int a4);
int FUN_0c097604(int a4);
int FUN_0c01a74c(int a4, int a5, int a6, int a7);
int FUN_0c01b0a4(int a4, int a5, int a6, int a7);
int FUN_0c01f574(int a4, int a5, int a6, int a7);

int FUN_0c0af448(int a4)
{
    register int t0;
    register int t9;

    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AF4C6;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        FUN_0c0abd20(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1;
        t9 = 0x1;
    }
    return t9;
}

int FUN_0c097604(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c09ddfe(a4);
    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)0xC7F31E0;
    t3 = (unsigned short)((t2 + t0) - t1);
    if ((0x8000 & (unsigned short)((t2 + t0) - t1)) != 0) {
        t3 = ((unsigned short)((t2 + t0) - t1) | 0xFFFF0000);
    }
    if ((int)t3 <= (int)0xFFFFFA50) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x5B0);
    } else {
        if ((int)t3 >= (int)0x5B0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x5B0);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
        return FUN_0c0a2e26(a4, 0xA, 0xF);
    }
    return (signed char)t0;
}

int FUN_0c01a74c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0xF))) == (*(signed char *)0xC36233E)) {
        u0 = 1.0999999f;
        u0 = u0 + 0.099999994f * (FUN_0c0dfa50((*(short *)0xC362342), a5, a6, a7));
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o50_float *)(a4))->v) = u0;
        u0 = 150.0f;
    } else {
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        u0 = 50.0f;
    }
    (((struct o28_float *)(a4))->v) = u0;
    FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), 0xC664AC0, (*(signed char *)((a4 + 0xF))));
    t0 = FUN_0c01ae08(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c01b0a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x4))) == (unsigned char)(*(signed char *)0xC362350)) {
        u0 = 1.0999999f;
        u0 = u0 + 0.099999994f * (FUN_0c0dfa50((*(short *)0xC36234E), a5, a6, a7));
        (((struct o24_float *)(t0))->v) = u0;
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        u0 = 150.0f;
    } else {
        (((struct o24_float *)(t0))->v) = 1.0f;
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        u0 = 50.0f;
    }
    (((struct oC_float *)(t0))->v) = u0;
    t0 = FUN_0c01b4c0(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c059330(a4);
    }
    return (signed char)t0;
}

int FUN_0c01f574(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)((a4 + 0xF))) != (*(short *)0xC362A58)) {
        *(unsigned char *)((a4 + 0xF)) = (*(signed char *)0xC362A58);
        u0 = -60.0f;
        u0 = u0 + 120.0f * (float)(*(signed char *)((a4 + 0xF)));
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
    }
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x5B0);
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = 0.75f;
    u0 = u0 + 0.25f * (FUN_0c0dfa50(((((struct oEC_short *)(a4))->v)), a5, a6, a7));
    (((struct o40_float *)(t0))->v) = u0;
    if ((*(signed char *)0xC362A7E) != 0) {
        return FUN_0c059330(a4);
    }
    return 0xC01F620;
}
