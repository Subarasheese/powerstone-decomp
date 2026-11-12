/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o7239_uchar { char p[0x7239]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c044408(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c09d89c(int);
int FUN_0c09dd88(int);
int FUN_0c09e470(int);
extern int FUN_0c09eb8c();
int FUN_0c09ebd4(int);
int FUN_0c09fe68(int, int, int);
int FUN_0c09feba(int, int, int);
int FUN_0c09ff0c(int, int, int);
int FUN_0c0a00e4(int);
int FUN_0c0a01ec(int, int, int);
int FUN_0c0a22d6(int);
int FUN_0c0a2334(int, int, int);
int FUN_0c0a2490(int, int, int);
int FUN_0c0a25e0(int, int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a7d28(int, int);
int FUN_0c0a99d0(int, int);
int FUN_0c0e6f24(int);
int FUN_0c09468c(int a4, int a5, int a6, int a7);
int FUN_0c0a7dfc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a9aa4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c09468c(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = (0xC0A2E26);
    v0_2 = (v0_3);
    if (((int)(unsigned char)(*(signed char *)((v0_3 + 0x7206))) <= (int)0x1)) goto L_C0946A8;
    L_C0947CE:;
    v0_4 = *(signed char *)((v0_2 + 0x721F));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0947DE;
    if ((v0_3 != 2)) goto L_C094860;
    L_C0947DE:;
    v0_4 = *(signed char *)((v0_2 + 0x7206));
    v0_3 = ((unsigned char)v0_4);
    if (((int)(*(signed char *)((v0_2 + 0x7234))) <= (int)(unsigned char)v0_4)) goto L_C0947F2;
    if (((int)v0_3 > (int)0x2)) goto L_C094814;
    L_C0947F2:;
    if (((*(signed char *)((v0_2 + 0x7239))) != 0)) goto L_C094814;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c09eb8c))(v0_2, v0_0, v0_1, a7);
    v0_3 = (v0_4);
    if (((signed char)v0_4 == 0)) goto L_C094814;
    if (((*(signed char *)((v0_2 + 0x10B))) == 0)) goto L_C09483E;
    (((struct o7239_uchar *)(v0_2))->v) = v0_3;
    L_C094814:;
    if (((int)(*(signed char *)((v0_2 + 0x7234))) > (int)(unsigned char)(*(signed char *)((v0_2 + 0x7206))))) goto L_C094860;
    v0_4 = FUN_0c09ebd4(v0_2);
    v0_3 = (v0_4);
    if (((signed char)v0_4 == 0)) goto L_C094860;
    if (((*(signed char *)((v0_2 + 0x10B))) == 0)) goto L_C09483E;
    (((struct o7239_uchar *)(v0_2))->v) = v0_3;
    L_C094860:;
    v0_4 = (signed char)(FUN_0c09d89c(v0_2)) == 0;
    if (v0_4) goto L_C094890;
    v0_4 = (0x10B);
    if (((*(signed char *)((v0_2 + 0x10B))) != 0)) goto L_C094920;
    v0_4 = (0x7239);
    if (((*(signed char *)((v0_2 + 0x7239))) == 0)) goto L_C094920;
    *(unsigned char *)((v0_2 + (v0_4 - 1))) = ((*(signed char *)((v0_2 + v0_4))) - 1);
    L_C094884:;
    v0_0 = (0xA);
    v0_1 = (0x0);
    L_C094888:;
    v0_4 = ((FUN_0c0a2e26(v0_2, v0_0, v0_1, 0x0)));
    L_C094920:;
    return v0_4;
    L_C094890:;
    v0_5 = *(signed char *)((v0_2 + 0x721F));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C0948CC;
    if ((v0_4 == 1)) goto L_C0948CC;
    if ((v0_4 == 2)) goto L_C0948CC;
    if ((v0_4 == 3)) goto L_C0948CC;
    if ((v0_4 == 5)) goto L_C0948CC;
    if ((v0_4 == 6)) goto L_C0948CC;
    if ((v0_4 == 13)) goto L_C0948CC;
    if ((v0_4 == 15)) goto L_C0948CC;
    *(volatile int *)0xC7F307C;
    v0_3 = (FUN_0c0e6f24(v0_3)) != 0;
    if (v0_3) goto L_C0948CC;
    FUN_0c044408((*(signed char *)((v0_2 + 0x3))), 0x0, v0_1);
    L_C0948CC:;
    (((struct o7206_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x7206))) + 0x1);
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((0xC339180 + ((*(signed char *)((v0_2 + 0x4))) << 2))))))(v0_2, v0_0, v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if (((*(signed char *)((v0_2 + 0x71BC))) == 2)) goto L_C09491A;
    if ((((((struct o274_float *)(v0_2))->v)) > 0.0f)) goto L_C09491A;
    if (((*(signed char *)((v0_2 + 0x2D9))) == 2)) goto L_C09491A;
    (((struct o71E8_float *)(v0_2))->v) = (((((struct o71E8_float *)(v0_2))->v)) + ((((struct o71E4_float *)(v0_2))->v)));
    (((struct o24_float *)(v0_2))->v) = (((((struct o24_float *)(v0_2))->v)) + ((((struct o71E8_float *)(v0_2))->v)));
    v0_4 = (0x24);
    goto L_C094920;
    L_C09491A:;
    (((struct o71E8_float *)(v0_2))->v) = 0.0f;
    v0_4 = (0x71E8);
    goto L_C094920;
    L_C09483E:;
    (((struct o7238_uchar *)(v0_2))->v) = (v0_3 - 1);
    v0_3 = ((v0_3 - 1));
    goto L_C094884;
    L_C0946A8:;
    v0_3 = (signed char)(FUN_0c0a2334(v0_2, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C0946C4;
    v0_3 = FUN_0c0a25e0(v0_2, v0_0, v0_1);
    v0_4 = ((signed char)v0_3);
    if (((signed char)v0_3 == 0)) goto L_C0946C4;
    goto L_C094920;
    L_C0946C4:;
    v0_3 = (signed char)(FUN_0c0a22d6(v0_2)) == 0;
    if (v0_3) goto L_C0947B8;
    v0_4 = *(signed char *)((v0_2 + 0x721F));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0946E8;
    if ((v0_3 == 2)) goto L_C0946E8;
    if ((v0_3 != 1)) goto L_C0946F8;
    L_C0946E8:;
    v0_3 = FUN_0c0a2490(v0_2, v0_0, v0_1);
    v0_4 = ((signed char)v0_3);
    if (((signed char)v0_3 == 0)) goto L_C0946F8;
    goto L_C094920;
    L_C0946F8:;
    v0_3 = (signed char)(FUN_0c09fe68(v0_2, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C09470A;
    v0_0 = (0x22);
    v0_1 = (0x0);
    goto L_C094888;
    L_C09470A:;
    v0_3 = (signed char)(FUN_0c09feba(v0_2, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C09471C;
    v0_0 = (0x1A);
    v0_1 = (0x0);
    goto L_C094888;
    L_C09471C:;
    v0_3 = (signed char)(FUN_0c0a01ec(v0_2, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C09472E;
    v0_0 = (0x29);
    v0_1 = (0x0);
    goto L_C094888;
    L_C09472E:;
    v0_3 = FUN_0c09ff0c(v0_2, v0_0, v0_1);
    *(unsigned char *)(((int)stk + 0)) = v0_3;
    v0_4 = ((signed char)v0_3);
    if (((signed char)v0_3 == 0)) goto L_C09474E;
    v0_0 = (0x24);
    if (((signed char)v0_4 != 1)) goto L_C094748;
    v0_1 = (0x0);
    L_C09474A:;
    goto L_C094888;
    L_C094748:;
    v0_1 = (0x2);
    goto L_C09474A;
    L_C09474E:;
    v0_3 = (signed char)(FUN_0c0a00e4(v0_2)) == 0;
    if (v0_3) goto L_C09478C;
    v0_0 = (0x27);
    v0_1 = (0x0);
    goto L_C094888;
    L_C09478C:;
    v0_4 = *(signed char *)((v0_2 + 0x721F));
    v0_3 = (v0_4);
    if ((v0_4 == 8)) goto L_C0947A6;
    if ((v0_3 == 1)) goto L_C0947A6;
    if ((v0_3 != 9)) goto L_C0947B8;
    L_C0947A6:;
    v0_3 = (signed char)(FUN_0c09e470(v0_2)) == 0;
    if (v0_3) goto L_C0947B8;
    v0_0 = (0xA);
    v0_1 = (0x4);
    goto L_C094888;
    L_C0947B8:;
    v0_4 = *(signed char *)((v0_2 + 0x721F));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0947C8;
    if ((v0_3 != 13)) goto L_C0947CE;
    L_C0947C8:;
    FUN_0c09dd88(v0_2);
    goto L_C0947CE;
}

int FUN_0c0a7dfc(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -15.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        FUN_0c0a7d28(a4, 0x0);
        FUN_0c0a7d28(a4, 0x1);
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    }
    t0 = *(signed char *)((a4 + 0x9));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 1:
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 2:
        u0 = (((struct o0_float *)0xC0A80AC)->v);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        u0 = (((struct o4_float *)0xC0A80AC)->v);
        if (!(u0 > ((((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
            (((struct o2C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        break;
    default:
        if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        break;
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
        (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
        (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}

int FUN_0c0a9aa4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((0xC1525B4 + (*(signed char *)0xC7F3051))));
        (((struct o20_float *)(a4))->v) = 0.0f;
        (((struct o24_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = -50.0f;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        FUN_0c0a99d0(a4, 0x0);
        FUN_0c0a99d0(a4, 0x1);
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
        (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    }
    t0 = *(signed char *)((a4 + 0x9));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 1:
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 50.0f);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) - 50.0f);
        if (!(0.0f > ((((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct o28_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o28_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
        }
        break;
    case 2:
        u0 = (((struct o0_float *)0xC0A9D7C)->v);
        t0 = (((struct o2E0_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        t0 = (((struct o2E4_int *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        u0 = (((struct o4_float *)0xC0A9D7C)->v);
        if (!(u0 > ((((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v)))) {
            (((struct o2C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = u0;
            (((struct o2C_float *)(((((struct o2E4_int *)(a4))->v))))->v) = u0;
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        break;
    default:
        if ((unsigned char)(*(signed char *)0xC7F2EE5) == 3) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
        }
        break;
    }
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o28_float *)(t2))->v)));
        (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
        t2 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
        u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o2C_float *)(t2))->v)));
        (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o38_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = ((-(u0 * 1.0f)) / 640.0f);
    u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o3C_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = ((-(u0 * 1.0f)) / 480.0f);
    return 0x24;
}
