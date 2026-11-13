/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c033990-0c033ba8) */

struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct o24_float { char p[0x24]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_033990(int a4)
{
    register int t0;
    register int t10;
    register int t3;
    register int t5;
    register int t6;

    t0 = obj_create(0x5, 0x1, 0x2);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC033A42;
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 2.0f;
        (((struct o50_float *)(t0))->v) = 2.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t5 = *(int *)((((t3 << 2) + (0x2E0 + t0)) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0xF;
            t6 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t5, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), t3);
            t3 = (t3 + 0x1);
        }
        t10 = 0x2DC;
    }
    return t10;
}

int fx_tick_033990(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    int R6;
    int R7;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    if ((v0_3 == 0)) goto L_C033A5A;
    if ((v0_1 == 1)) goto L_C033A7A;
    if ((v0_1 != 2)) goto L_C033A56;
    return obj_destroy(v0_0, v0_2, R6, R7);
    L_C033A56:;
    L_C033B92:;
    return v0_1;
    L_C033A7A:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_3);
    R6 = (0x1);
    R7 = (0x2);
    w0_0 = (0.199999988f);
    if ((v0_3 == 0)) goto L_C033A90;
    if ((v0_1 == 1)) goto L_C033B1A;
    goto L_C033B92;
    L_C033B1A:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R6) == 0)) goto L_C033B2A;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    L_C033B32:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R7) == 0)) goto L_C033B42;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C033B48:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    w0_1 = (((struct o50_float *)(v0_0))->v);
    (((struct o50_float *)(v0_0))->v) = (w0_1 + 0.799999952f);
    (((struct o58_float *)(v0_0))->v) = (w0_1 + 0.799999952f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.099999994f);
    w0_1 = (((struct o5C_float *)(v0_0))->v);
    (((struct o5C_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    w0_0 = ((w0_1 - w0_0));
    FPUL_ = (0x3DCCCCCC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C033B92;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C033B92;
    L_C033B42:;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C033B48;
    L_C033B2A:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C033B32;
    L_C033A90:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 50.0f);
    FPUL_ = (0x42480000);
    if (((((((struct oEC_short *)(v0_0))->v)) & R6) == 0)) goto L_C033ADC;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = v0_2;
    L_C033AE4:;
    if (((((((struct oEC_short *)(v0_0))->v)) & R7) == 0)) goto L_C033AF4;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) + w0_0));
    L_C033AFA:;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C033B92;
    *(unsigned short *)((v0_0 + v0_1)) = 0x5;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C033B92;
    L_C033AF4:;
    v0_1 = (0x50);
    w0_1 = ((((((struct o50_float *)(v0_0))->v)) - w0_0));
    goto L_C033AFA;
    L_C033ADC:;
    *(unsigned int *)((((((struct o2E4_int *)(v0_0))->v)) + 0x14)) = 0x4000;
    goto L_C033AE4;
    L_C033A5A:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + 200.0f);
    (((struct oEC_ushort *)(v0_0))->v) = 0x8;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = v0_2;
    FPUL_ = (0x43480000);
    goto L_C033A7A;
}
