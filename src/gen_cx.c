/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0b8460(int, int);
int FUN_0c0b87b0(int, int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
int FUN_0c0b8604(int a4, int a5, int a6, int a7);
int FUN_0c01459c(int a4, int a5, int a6, int a7);

int FUN_0c0b8604(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C0B861A;
    if ((v0_2 == 1)) goto L_C0B8628;
    return FUN_0c059330(v0_0, R5, a6, a7);
    L_C0B8628:;
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    R5 = (0x1);
    if (((((((struct oEE_short *)(v0_0))->v)) & 0x1) == 0)) goto L_C0B8640;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_1;
    L_C0B8648:;
    w0_0 = (0.199999988f);
    if (((((((struct oEE_short *)(v0_0))->v)) & 2) == 0)) goto L_C0B865C;
    v0_2 = (0x50);
    w0_0 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C0B8662:;
    *(float *)((v0_0 + v0_2)) = w0_0;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0B8688;
    if ((v0_2 == 1)) goto L_C0B870E;
    if (!((v0_2 == 2))) goto L_C0B876E;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + (*(float *)(((((((struct oF0_short *)(v0_0))->v)) << 2) + 0xC153078))));
    (((struct o58_float *)(v0_0))->v) = ((((struct o50_float *)(v0_0))->v));
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C0B876E;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C0B876E;
    L_C0B876E:;
    v0_1 = FUN_0c0555dc();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0B878A;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    L_C0B878A:;
    return v0_2;
    L_C0B870E:;
    (((struct o8_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = 0.0f;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C0B876E;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    (((struct o101_uchar *)(v0_0))->v) = v0_1;
    (((struct o102_uchar *)(v0_0))->v) = v0_1;
    goto L_C0B876E;
    L_C0B8688:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 30.0f);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    w0_0 = (30.0f);
    if (((int)((((struct oEC_short *)(v0_0))->v)) <= (int)R5)) goto L_C0B86AA;
    (((struct o8_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_0;
    L_C0B86AA:;
    if (((int)((((struct oF0_short *)(v0_0))->v)) <= (int)R5)) goto L_C0B86C4;
    if ((((((struct oEC_short *)(v0_0))->v)) != 10)) goto L_C0B86C4;
    FUN_0c0b8460((*(int *)((v0_0 + 0x1C))), (((((struct oF0_short *)(v0_0))->v)) - 1));
    L_C0B86C4:;
    if ((!(((((struct o2D4_float *)(v0_0))->v)) > ((((struct o24_float *)(v0_0))->v))))) goto L_C0B876E;
    if (((int)((((struct oEC_short *)(v0_0))->v)) >= (int)0xA)) goto L_C0B86EC;
    v0_2 = (0xF0);
    if (((int)((((struct oF0_short *)(v0_0))->v)) <= (int)0x1)) goto L_C0B86EC;
    FUN_0c0b8460((*(int *)((v0_0 + 0x1C))), ((*(short *)((v0_0 + v0_2))) - 1));
    L_C0B86EC:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    FUN_0c0b87b0(v0_0, ((((struct oF0_short *)(v0_0))->v)));
    FUN_0c0a3914((*(int *)((v0_0 + 0x1C))), 0x32);
    goto L_C0B876E;
    L_C0B865C:;
    v0_2 = (0x50);
    w0_0 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C0B8662;
    L_C0B8640:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C0B8648;
    L_C0B861A:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = v0_1;
    (((struct oEE_ushort *)(v0_0))->v) = v0_1;
    goto L_C0B8628;
}

int FUN_0c01459c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        (((struct o8_float *)0xC361C64)->v) = ((((struct o0_float *)0xC361C64)->v));
        (((struct oC_float *)0xC361C64)->v) = ((((struct o4_float *)0xC361C64)->v));
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            t2 = *(signed char *)((a4 + 0x4));
            if (t2 != 0) {
                if (t2 != 1) {
                } else {
                    (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116980) + 0x0)));
                    (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116980 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0x1);
                    if (((((struct oEC_short *)(a4))->v)) != 0) {
                        FUN_0c0df940();
                        t2 = ((FUN_0c0e6f24()) + 0x1E);
                    } else {
                        FUN_0c0df940();
                        t2 = ((FUN_0c0e6f24()) + 0x2);
                    }
                    (((struct oEE_ushort *)(a4))->v) = t2;
                }
            } else {
                (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116900) + 0x0)));
                (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116900 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
            }
        } else {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
        }
        if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t0 = (((struct o2_short *)0xC7F3040)->v), t0 == 0)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            (((struct oC_float *)0xC361C64)->v) = 0.0f;
            (((struct o8_float *)0xC361C64)->v) = 0.0f;
            (((struct o4_float *)0xC361C64)->v) = 0.0f;
            (((struct o0_float *)0xC361C64)->v) = 0.0f;
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct o8_float *)0xC361C64)->v) = ((((struct o0_float *)0xC361C64)->v));
    (((struct oC_float *)0xC361C64)->v) = ((((struct o4_float *)0xC361C64)->v));
    if (((((struct oEE_short *)(a4))->v)) == 0) {
        t0 = *(signed char *)((a4 + 0x4));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116980) + 0x0)));
                (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116980 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
                (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0x1);
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    FUN_0c0df940();
                    t0 = ((FUN_0c0e6f24()) + 0x1E);
                } else {
                    FUN_0c0df940();
                    t0 = ((FUN_0c0e6f24()) + 0x2);
                }
                (((struct oEE_ushort *)(a4))->v) = t0;
            }
        } else {
            (((struct o0_float *)0xC361C64)->v) = (*(float *)(((((((((struct oEC_short *)(a4))->v)) << 2) << 1) + 0xC116900) + 0x0)));
            (((struct o4_float *)0xC361C64)->v) = ((((struct o4_float *)((0xC116900 + ((((((struct oEC_short *)(a4))->v)) << 2) << 1))))->v));
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
        }
    } else {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    }
    if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        (((struct oC_float *)0xC361C64)->v) = 0.0f;
        (((struct o8_float *)0xC361C64)->v) = 0.0f;
        (((struct o4_float *)0xC361C64)->v) = 0.0f;
        (((struct o0_float *)0xC361C64)->v) = 0.0f;
        t0 = (t1 + 0x1);
    }
    return t0;
}
