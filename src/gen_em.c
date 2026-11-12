/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c063468(int);
int FUN_0c0634b4(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c782(int);
int FUN_0c09da1c(int);
int FUN_0c0a2080(int, int, int);
int FUN_0c0abe44(int, int, int);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(int);
int FUN_0c066540(int a4);
int FUN_0c01f628(int a4);

int FUN_0c066540(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = (signed char)(FUN_0c09a910(v0_1)) == 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C06658C;
    v0_1 = (signed char)(FUN_0c09c782(v0_0)) == 0;
    if (v0_1) goto L_C06656E;
    FUN_0c0634b4(v0_0);
    (((struct o7236_uchar *)(v0_0))->v) = 0x0;
    (((struct o71CC_uint *)(v0_0))->v) = 0x0;
    L_C06657C:;
    (((struct o3C_float *)(v0_0))->v) = 0.0f;
    return FUN_0c0a2080(v0_0, R5, R6);
    L_C06656E:;
    FUN_0c0abe44(((((struct o71CC_int *)(v0_0))->v)), 0x5, (*(signed char *)((v0_0 + 0x3))));
    goto L_C06657C;
    L_C06658C:;
    FUN_0c09da1c(v0_0);
    if (((unsigned short)((((struct o719E_short *)(v0_0))->v)) != 10)) goto L_C0665B2;
    if ((((((struct oEE_short *)(v0_0))->v)) != 0)) goto L_C0665B2;
    FUN_0c063468(v0_0);
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    L_C0665B2:;
    v0_1 = FUN_0c09c782(v0_0);
    v0_2 = ((signed char)v0_1);
    if (((signed char)v0_1 != 0)) goto L_C066610;
    v0_2 = (0xEE);
    if (((int)((((struct oEE_short *)(v0_0))->v)) >= (int)0x5)) goto L_C066610;
    v0_3 = *(short *)((v0_0 + v0_2));
    v0_2 = (v0_3);
    v0_1 = (v0_3);
    if ((v0_3 != 1)) goto L_C0665DC;
    v0_2 = (0x719E);
    if (((int)(unsigned short)((((struct o719E_short *)(v0_0))->v)) >= (int)0x1D)) goto L_C0665EE;
    L_C0665DC:;
    if (((int)v0_1 < (int)0x2)) goto L_C066610;
    v0_2 = (0x719E);
    if (((int)(unsigned short)((((struct o719E_short *)(v0_0))->v)) < (int)0xD)) goto L_C066610;
    L_C0665EE:;
    v0_2 = (0x2E4);
    if (((((((struct o2E4_int *)(v0_0))->v)) & 0x600) == 0)) goto L_C066610;
    FUN_0c09a808(v0_0, 0x2, 0x59);
    FUN_0c063468(v0_0);
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    v0_2 = (0xEE);
    L_C066610:;
    return v0_2;
}

int FUN_0c01f628(int a4)
{
    int stk[1];
    register int t0;
    register int t22;
    register float u15;
    register int t16;
    register float u21;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o6_uchar *)0xC362A78)->v) = 0x0;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01F574;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0xF)) = (*(signed char *)0xC362A58);
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(volatile signed char *)(((int)stk + 0));
        FUN_0c0e6fe8(0x1);
        (((struct o24_float *)(t0))->v) = ((((struct o0_float *)0xC362A78)->v));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = t6;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x40F;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664B08, 0xF);
        u15 = ((((struct o0_float *)0xC01F794)->v));
        u15 = u15 + ((((struct o4_float *)0xC01F794)->v)) * (float)(*(signed char *)((t0 + 0xF)));
        (((struct o4_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u15;
        t16 = (((struct o2E0_int *)(t0))->v);
        u21 = ((((struct oC_float *)0xC01F794)->v));
        u21 = u21 + ((((struct o10_float *)0xC01F794)->v)) * (FUN_0c0dfa50(((((struct oEC_short *)(t0))->v))));
        (((struct o40_float *)(t16))->v) = u21;
        t22 = 0xC01F7A4;
    }
    return t22;
}
