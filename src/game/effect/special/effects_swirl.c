/* swirling effect (constructor and updates) (0c0cb994-0c0cc074) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int math_mat_transform_point(int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int FUN_0c0e6fe8(void);
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
extern int obj_destroy();

int FUN_0c0cb994(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t2;
    register int t3;
    register int t7;
    register int t11;
    register int t12;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0CBA6E;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0xC153404);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) + 0x3555);
        (((struct oF2_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = 0x0;
        t7 = ((int (*)(int))(FUN_0c0e6fe8))(t6);
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = (*(float *)0xC0CBAC4);
        (((struct o28_float *)(t0))->v) = 0.0f;
        math_mat_transform_point((t0 + 0x20), (0xF60 + a4));
        (((struct o101_uchar *)(t0))->v) = 0x4;
        (((struct o102_uchar *)(t0))->v) = 0x0;
        obj_set_record_char(t0, 0x73);
        t11 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t11 + 0x0)) = 0x1;
        t12 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t11, ((signed char)((((t12 << 1) + t12) << 2) << 1) + 0xC6002D0), 0x13);
        *(unsigned short *)((t11 + 0x2)) = 0xF;
        t16 = 0xF;
    }
    return t16;
}

int FUN_0c0cbd88(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_2 = *(int *)((v0_1 + 0x18));
    v0_0 = (v0_1);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CBDBC;
    R5 = (0x0);
    R6 = (0x1);
    L_C0CBDB6:;
    if (!(((int)R5 < (int)(*(signed char *)((v0_0 + 0xF)))))) goto L_C0CBDBC;
    if (((*(int *)((v0_1 + 0x10))) != 0xC0CBF1C)) goto L_C0CBDB2;
    if (((*(signed char *)((v0_1 + 0x108))) == 0)) goto L_C0CBDB2;
    *(unsigned char *)((v0_0 + 0xE)) = R6;
    goto L_C0CBDBC;
    L_C0CBDBC:;
    v0_1 = (FUN_0c0555dc()) == 0;
    if (v0_1) goto L_C0CBDCA;
    *(unsigned char *)((v0_0 + 0x8)) = 0x3;
    L_C0CBDCA:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (0.0333333313f);
    if ((v0_2 == 0)) goto L_C0CBDE4;
    if ((v0_1 == 1)) goto L_C0CBDF0;
    if ((v0_1 == 2)) goto L_C0CBE12;
    if (!((v0_1 == 3))) goto L_C0CBE4E;
    return obj_destroy(v0_0, R5, R6);
    L_C0CBE4E:;
    return v0_1;
    L_C0CBE12:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + w0_0);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + w0_0);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.099999994f);
    w0_0 = (((struct o5C_float *)(v0_0))->v);
    (((struct o5C_float *)(v0_0))->v) = (w0_0 - 0.099999994f);
    v0_1 = (0x5C);
    if (((w0_0 - 0.099999994f) > 0.0f)) goto L_C0CBE4E;
    L_C0CBE3C:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C0CBE4E;
    L_C0CBDF0:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + w0_0);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + w0_0);
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) == 0)) goto L_C0CBE3C;
    goto L_C0CBE4E;
    L_C0CBDE4:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    goto L_C0CBDF0;
    L_C0CBDB2:;
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    R5 = ((R5 + 0x1));
    goto L_C0CBDB6;
}
