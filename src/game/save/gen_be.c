/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c02114c(int, int, int, int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float, float, float, float);
int FUN_0c05c4ea(int);
int FUN_0c0ccf38(int, int, int);
int FUN_0c0ccfba(int, int, int, int);
int FUN_0c0e0ae0(int);
int FUN_0c0e1240(int);
int FUN_0c0e1550(int);
int FUN_0c0e2140(int);
int FUN_0c0e6fe8(float);
int fx_tick_pulsing_emitter(int);
int item_draw_marker(int, int, int, int, float, float, float, float);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
int math_mat_get_translate(int, int);
int math_mat_transform_point(int, int);
float math_signed_sqrt(float);
int math_vec3_add(int, int, int);
float math_vec3_length(int);
int math_vec3_sub(int, int, int);
int math_vec3i_sub(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int obj_set_mode_owner(int, int, int);
int vmu_check_run_objects(int);
int vmu_get_vmgame_mask(void);
int vmu_step_load(int);
int vmu_step_load_vmgame(int, int, int);
int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c062f10(int a4);
int FUN_0c05c452(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int vmu_check_do_load(int a4, int a5, int a6);

int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F7;
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
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_9 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    w0_4 = *(float *)((v0_6 + 0x0));
    w0_5 = *(float *)((v0_7 + 0x0));
    v0_8 = (0xC);
    v0_2 = (v0_9);
    v0_3 = (v0_7);
    v0_4 = (v0_6);
    v0_0 = (v0_5);
    v0_1 = ((((int)stk + 0) + 0x1C));
    w0_3 = ((((((struct oC_float *)(v0_6))->v)) + ((((struct oC_float *)(v0_7))->v))));
    w0_0 = (w0_4);
    w0_1 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C021842;
    w0_0 = ((w0_2 - w0_0));
    L_C021844:;
    *(float *)((v0_1 + 0x0)) = (w0_3 - w0_0);
    w0_4 = (((struct o8_float *)(v0_4))->v);
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_0 = (((((struct o14_float *)(v0_4))->v)) + (*(float *)((v0_3 + v0_8))));
    v0_8 = (0x8);
    w0_3 = w0_0;
    w0_0 = (w0_5);
    w0_1 = ((w0_4 - w0_5));
    w0_2 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C02186C;
    w0_0 = ((w0_0 - w0_2));
    L_C02186E:;
    *(float *)((v0_1 + v0_8)) = (w0_3 - w0_0);
    w0_0 = (((struct o4_float *)(v0_3))->v);
    *(float *)(((int)stk + 8)) = w0_0;
    w0_1 = (((struct o10_float *)(v0_3))->v);
    *(float *)(((int)stk + 4)) = w0_1;
    w0_2 = *(float *)(((int)stk + 8));
    w0_3 = (((struct o4_float *)(v0_4))->v);
    *(float *)(((int)stk + 0)) = w0_3;
    w0_4 = (((struct o10_float *)(v0_4))->v);
    *(float *)(((int)stk + 12)) = w0_4;
    w0_0 = FUN_0c0211d0((w0_4 + (*(float *)(((int)stk + 0)))), (w0_3 - w0_4), (w0_1 + w0_2), (w0_0 - w0_1), f8, f9, f10);
    (((struct o4_float *)(v0_1))->v) = w0_0;
    w0_3 = (w0_0);
    w0_0 = (0.0f);
    if (!((!(0.0f > (*(float *)((v0_1 + 0x0))))))) goto L_C021CAA;
    if ((!(w0_0 > ((((struct o8_float *)(v0_1))->v))))) goto L_C0218C4;
    goto L_C021CAA;
    L_C021CAA:;
    v0_8 = (0x0);
    L_C021CAC:;
    return v0_8;
    L_C0218C4:;
    if ((!(0.0f > ((((struct o4_float *)(v0_1))->v))))) goto L_C0218D2;
    goto L_C021CAA;
    L_C0218D2:;
    v0_8 = *(signed char *)((v0_2 + 0x2D9));
    v0_9 = (v0_8);
    if (!(((signed char)v0_8 != 2))) goto L_C021CA6;
    if (((*(signed char *)((v0_0 + 0x2D9))) != 2)) goto L_C0218EC;
    goto L_C021CA6;
    L_C021CA6:;
    v0_8 = (0x1);
    goto L_C021CAC;
    L_C0218EC:;
    if (((signed char)v0_9 == 0)) goto L_C0218FE;
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C0218FE;
    goto L_C021CA6;
    L_C0218FE:;
    FUN_0c02114c((((int)stk + 0) + 0x10), v0_5, v0_6, v0_7, (*(float *)((v0_4 + 0x0))), ((((struct o8_float *)(v0_4))->v)), (*(float *)((v0_3 + 0x0))), ((((struct o8_float *)(v0_3))->v)));
    w0_2 = *(float *)((v0_1 + 0x0));
    w0_0 = (w0_2);
    w0_1 = (w0_2);
    if ((w0_2 > ((((struct o4_float *)(v0_1))->v)))) goto L_C0219B6;
    if ((w0_1 > ((((struct o8_float *)(v0_1))->v)))) goto L_C0219B6;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) == 0)) goto L_C021948;
    v0_8 = (0x20);
    if ((!((*(float *)((v0_4 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C02193E;
    w0_0 = ((-((((struct o1C_float *)(((int)stk + 0)))->v))));
    L_C0219F0:;
    w0_3 = (((*(float *)((v0_0 + v0_8))) + w0_0));
    L_C021BE8:;
    *(float *)((v0_0 + v0_8)) = w0_3;
    goto L_C021CA6;
    L_C02193E:;
    w0_0 = (((((struct o1C_float *)(((int)stk + 0)))->v)));
    goto L_C0219F0;
    L_C021948:;
    if (!(((*(signed char *)((v0_0 + v0_8))) == 0))) goto L_C021B32;
    v0_8 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_4 + 0x0)))))) goto L_C02196C;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o1C_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    goto L_C021978;
    L_C021B32:;
    v0_8 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_4 + 0x0)))))) goto L_C021B54;
    w0_0 = ((-((((struct o1C_float *)(((int)stk + 0)))->v))));
    L_C021C14:;
    *(float *)((v0_2 + v0_8)) = ((*(float *)((v0_2 + v0_8))) + w0_0);
    goto L_C021CA6;
    L_C021B54:;
    w0_0 = (((((struct o1C_float *)(((int)stk + 0)))->v)));
    goto L_C021C14;
    L_C021978:;
    *(float *)((v0_2 + v0_8)) = ((*(float *)((v0_2 + v0_8))) + (w0_0 / w0_3));
    if ((!((*(float *)((v0_4 + 0x0))) > (*(float *)((v0_3 + 0x0)))))) goto L_C0219A0;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o1C_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C0219AC:;
    *(float *)((v0_0 + v0_8)) = ((*(float *)((v0_0 + v0_8))) + (w0_0 / w0_3));
    goto L_C021CA6;
    L_C0219A0:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o1C_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C0219AC;
    L_C02196C:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o1C_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021978;
    L_C0219B6:;
    w0_1 = (((struct o8_float *)(v0_1))->v);
    w0_3 = (w0_1);
    if ((!(w0_0 > w0_1))) goto L_C021A74;
    if ((!(((((struct o4_float *)(v0_1))->v)) > w0_3))) goto L_C021A74;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) == 0)) goto L_C0219F6;
    v0_8 = (0x28);
    if ((!(((((struct o8_float *)(v0_4))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C0219EA;
    w0_0 = ((-((((struct o24_float *)(((int)stk + 0)))->v))));
    goto L_C0219F0;
    L_C0219EA:;
    w0_0 = (((((struct o24_float *)(((int)stk + 0)))->v)));
    goto L_C0219F0;
    L_C0219F6:;
    if (!(((*(signed char *)((v0_0 + v0_8))) == 0))) goto L_C021BF2;
    v0_8 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_4))->v))))) goto L_C021A22;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o24_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    goto L_C021A2E;
    L_C021BF2:;
    v0_8 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_4))->v))))) goto L_C021C0E;
    w0_0 = ((-((((struct o24_float *)(((int)stk + 0)))->v))));
    goto L_C021C14;
    L_C021C0E:;
    w0_0 = (((((struct o24_float *)(((int)stk + 0)))->v)));
    goto L_C021C14;
    L_C021A2E:;
    *(float *)((v0_2 + v0_8)) = ((*(float *)((v0_2 + v0_8))) + (w0_0 / w0_3));
    if ((!(((((struct o8_float *)(v0_4))->v)) > ((((struct o8_float *)(v0_3))->v))))) goto L_C021A56;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o24_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C021A62:;
    *(float *)((v0_0 + v0_8)) = ((*(float *)((v0_0 + v0_8))) + (w0_0 / w0_3));
    goto L_C021CA6;
    L_C021A56:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o24_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021A62;
    L_C021A22:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o24_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021A2E;
    L_C021A74:;
    w0_1 = (((struct o4_float *)(v0_1))->v);
    w0_4 = (w0_1);
    if ((!(w0_1 > w0_0))) goto L_C021A80;
    goto L_C021CA6;
    L_C021A80:;
    if ((!(w0_4 > w0_3))) goto L_C021A88;
    goto L_C021CA6;
    L_C021A88:;
    w0_1 = (5.0f);
    w0_2 = (2.0f);
    if ((!(((((struct o4_float *)(v0_4))->v)) > ((((struct o4_float *)(v0_3))->v))))) goto L_C021AF8;
    if (((*(signed char *)((v0_0 + 0x2DA))) == 0)) goto L_C021ADC;
    if ((!(w0_3 > w0_0))) goto L_C021ABE;
    if ((!(w0_0 > w0_1))) goto L_C021AAC;
    *(float *)((v0_1 + 0x0)) = w0_1;
    L_C021AAC:;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) != 0)) goto L_C021B16;
    if (((*(signed char *)((v0_0 + v0_8))) == 0)) goto L_C021B5C;
    goto L_C021B32;
    L_C021B5C:;
    v0_8 = (0x20);
    if ((!((*(float *)((v0_3 + 0x0))) > (*(float *)((v0_4 + 0x0)))))) goto L_C021B76;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o1C_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C021B82:;
    *(float *)((v0_2 + v0_8)) = ((*(float *)((v0_2 + v0_8))) + (w0_0 / w0_3));
    *(float *)((v0_0 + v0_8)) = ((*(float *)((v0_0 + v0_8))) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * (*(float *)((v0_1 + 0x0)))) / w0_2)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * (*(float *)((v0_1 + 0x0)))) / w0_2)));
    goto L_C021CA6;
    L_C021B76:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o1C_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021B82;
    L_C021B16:;
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + (*(float *)((v0_1 + 0x0))) * ((((struct o10_float *)(((int)stk + 0)))->v));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    v0_8 = (0x28);
    w0_3 = ((*(float *)((v0_1 + 0x0))));
    L_C021BDE:;
    w0_0 = (*(float *)((v0_0 + v0_8)));
    w0_0 = w0_0 + w0_3 * ((((struct o18_float *)(((int)stk + 0)))->v));
    w0_3 = (w0_0);
    goto L_C021BE8;
    L_C021ABE:;
    if ((!(w0_3 > w0_1))) goto L_C021AC6;
    (((struct o8_float *)(v0_1))->v) = w0_1;
    L_C021AC6:;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) != 0)) goto L_C021BC2;
    if (!(((*(signed char *)((v0_0 + v0_8))) != 0))) goto L_C021C1C;
    goto L_C021BF2;
    L_C021C1C:;
    v0_8 = (0x28);
    if ((!(((((struct o8_float *)(v0_3))->v)) > ((((struct o8_float *)(v0_4))->v))))) goto L_C021C3E;
    w0_3 = (2.0f);
    w0_0 = ((-((((struct o24_float *)(((int)stk + 0)))->v))));
    FPUL_ = (0x40000000);
    L_C021C4A:;
    *(float *)((v0_2 + v0_8)) = ((*(float *)((v0_2 + v0_8))) + (w0_0 / w0_3));
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)(v0_1))->v))) / w0_2)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)(v0_1))->v))) / w0_2)));
    goto L_C021CA6;
    L_C021C3E:;
    w0_3 = (2.0f);
    w0_0 = (((((struct o24_float *)(((int)stk + 0)))->v)));
    FPUL_ = (0x40000000);
    goto L_C021C4A;
    L_C021BC2:;
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + ((((struct o8_float *)(v0_1))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    v0_8 = (0x28);
    w0_3 = (((((struct o8_float *)(v0_1))->v)));
    goto L_C021BDE;
    L_C021ADC:;
    if (((*(signed char *)((v0_2 + 0x2D9))) == 0)) goto L_C021AEE;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - w0_4);
    goto L_C021CA6;
    L_C021AEE:;
    (((struct o24_float *)(v0_2))->v) = (((((struct o24_float *)(v0_2))->v)) + w0_4);
    goto L_C021CA6;
    L_C021AF8:;
    if (((*(signed char *)((v0_2 + 0x2DA))) != 0)) goto L_C021B04;
    if (((*(signed char *)((v0_0 + 0x2D9))) == 0)) goto L_C021C9E;
    (((struct o24_float *)(v0_2))->v) = (((((struct o24_float *)(v0_2))->v)) - w0_4);
    goto L_C021CA6;
    L_C021C9E:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + w0_4);
    goto L_C021CA6;
    L_C021B04:;
    if ((!(w0_3 > w0_0))) goto L_C021BB2;
    if ((!(w0_0 > w0_1))) goto L_C021B0E;
    *(float *)((v0_1 + 0x0)) = w0_1;
    L_C021B0E:;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) == 0)) goto L_C021B2C;
    goto L_C021B16;
    L_C021B2C:;
    if (((*(signed char *)((v0_0 + v0_8))) == 0)) goto L_C021B5C;
    goto L_C021B32;
    L_C021BB2:;
    if ((!(w0_3 > w0_1))) goto L_C021BBA;
    (((struct o8_float *)(v0_1))->v) = w0_1;
    L_C021BBA:;
    v0_8 = (0x2D9);
    if (((*(signed char *)((v0_2 + 0x2D9))) == 0)) goto L_C021BEC;
    goto L_C021BC2;
    L_C021BEC:;
    if (((*(signed char *)((v0_0 + v0_8))) == 0)) goto L_C021C1C;
    goto L_C021BF2;
    L_C02186C:;
    w0_0 = (w0_1);
    goto L_C02186E;
    L_C021842:;
    w0_0 = (w0_1);
    goto L_C021844;
}

int FUN_0c062f10(int a4)
{
    int stk[31];
    register int t3;
    register int t6;
    register int t124;
    register int t8;
    register int t10;
    register float t33;
    register float u34;
    register float u36;
    register float u47;
    register float u48;
    register int t78;
    register int t82;
    register int t134;
    register int t150;
    register int t156;
    register int t157;
    register int t159;
    register float t182;
    register float u183;
    register float u185;
    register float u196;
    register float u197;
    register int t227;
    register int t231;
    register int t282;
    register int t284;
    register int t273;
    register int t7;
    register float u9;
    register int t132;
    register float u158;

    t3 = *(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0));
    FUN_0c0e1550(0x1);
    t6 = *(signed char *)((0xC439DE8 + ((*(signed char *)((a4 + 0x3))) << 2)));
    if (t6 != 0) {
        if (t6 != 1) {
            t124 = t6;
            if (t6 == 2) {
                t8 = t3;
                for (;;) {
                    t10 = *(signed char *)((t8 + 0x0));
                    if (t10 != -1) {
                        t7 = (FUN_0c0ccf38(a4, (*(signed char *)((t8 + 0x1))), (*(short *)((t8 + 0x2)))));
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c0ccf38(a4, (*(signed char *)((t7 + 0x42))), (*(signed char *)((t7 + 0x43)))));
                        if ((*(signed char *)((a4 + 0x7232))) != 0) {
                        } else {
                            if ((*(signed char *)0xC7F300B) != 0) {
                            } else {
                                if ((*(signed char *)0xC7F300E) != 0) {
                                } else {
                                    math_mat_get_translate(t7, (((int)stk + 0) + 0x70));
                                    math_mat_get_translate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x64));
                                    *(float *)(((int)stk + 116)) = ((*(float *)(((int)stk + 116))) - ((((struct o8_float *)(t8))->v)));
                                    FUN_0c0e1240((*(int *)(((int)stk + 0))));
                                    nlInvertMatrix(0x0);
                                    nlCalcPoint((((int)stk + 0) + 0x70), (0x98 + t7));
                                    FUN_0c0e0ae0((((int)stk + 0) + 0x18));
                                    t33 = math_vec3_length((0x98 + t7));
                                    u34 = t33;
                                    if (t33 == 0.0f) {
                                        u34 = 9.99999975e-05f;
                                    }
                                    u36 = (((struct o4_float *)(t8))->v);
                                    (((struct o98_float *)(t7))->v) = (((((struct o98_float *)(t7))->v)) * (u36 / u34));
                                    (((struct o9C_float *)(t7))->v) = (((((struct o9C_float *)(t7))->v)) * (u36 / u34));
                                    (((struct oA0_float *)(t7))->v) = (((((struct oA0_float *)(t7))->v)) * (u36 / u34));
                                    FUN_0c0e6fe8((u36 / u34));
                                    if (((((struct oA0_float *)(t7))->v)) == 0.0f) {
                                        (((struct oA0_float *)(t7))->v) = 9.99999975e-05f;
                                    }
                                    (((struct o58_uint *)(t7))->v) = (math_atan2_angle16(((((struct o98_float *)(t7))->v)), ((((struct oA0_float *)(t7))->v))));
                                    u9 = ((((struct o98_float *)(t7))->v));
                                    u47 = (((struct oA0_float *)(t7))->v);
                                    *(float *)(((int)stk + 8)) = u47;
                                    u48 = (u47 * u47);
                                    u48 = u48 + u9 * u9;
                                    u9 = (math_signed_sqrt(u48));
                                    if (u9 == 0.0f) {
                                        u9 = 9.99999975e-05f;
                                    }
                                    (((struct o54_uint *)(t7))->v) = (math_atan_angle16(((-((((struct o9C_float *)(t7))->v))) / u9)));
                                    if (((*(int *)(((int)stk + 12))) & 0x8000) != 0) {
                                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                    } else {
                                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                    }
                                    if (((*(int *)(((int)stk + 16))) & 0x8000) != 0) {
                                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | 0xFFFF0000);
                                    } else {
                                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) & 0x7FFF);
                                    }
                                    if ((((((struct o54_int *)(t7))->v)) & 0x8000) != 0) {
                                        (((struct o54_uint *)(t7))->v) = (((((struct o54_int *)(t7))->v)) | 0xFFFF0000);
                                    } else {
                                        (((struct o54_uint *)(t7))->v) = (((((struct o54_int *)(t7))->v)) & 0x7FFF);
                                    }
                                    if ((((((struct o58_int *)(t7))->v)) & 0x8000) != 0) {
                                        (((struct o58_uint *)(t7))->v) = (((((struct o58_int *)(t7))->v)) | 0xFFFF0000);
                                    } else {
                                        (((struct o58_uint *)(t7))->v) = (((((struct o58_int *)(t7))->v)) & 0x7FFF);
                                    }
                                    math_vec3i_sub((((int)stk + 0) + 0xC), (t7 + 0x54), (((int)stk + 0) + 0xC));
                                    t78 = *(int *)((t8 + 0xC));
                                    *(unsigned int *)(((int)stk + 4)) = t78;
                                    FUN_0c0ccfba((*(int *)(((int)stk + 16))), (t7 + 0x58), (*(int *)(((int)stk + 4))), (unsigned short)(-t78));
                                    t82 = *(int *)((t8 + 0xC));
                                    *(unsigned int *)(((int)stk + 4)) = t82;
                                    FUN_0c0ccfba((*(int *)(((int)stk + 12))), (t7 + 0x54), (*(int *)(((int)stk + 4))), (unsigned short)(-t82));
                                    FUN_0c0e1240((*(int *)(((int)stk + 0))));
                                    FUN_0c0e2140((0x98 + t7));
                                    nlRotateAY(((((struct o58_int *)(t7))->v)));
                                    nlRotateAX(((((struct o54_int *)(t7))->v)));
                                    FUN_0c0e0ae0(t7);
                                    math_mat_get_translate(t7, (((int)stk + 0) + 0x70));
                                    *(float *)(((int)stk + 92)) = 0.0f;
                                    *(float *)(((int)stk + 88)) = 0.0f;
                                    *(float *)(((int)stk + 96)) = (-(((((struct o4_float *)(t8))->v)) * 1.0f));
                                    math_mat_transform_point((((int)stk + 0) + 0x58), t7);
                                    math_vec3_sub((((int)stk + 0) + 0x58), (((int)stk + 0) + 0x64), (((int)stk + 0) + 0x58));
                                    math_vec3_add((((int)stk + 0) + 0x70), (((int)stk + 0) + 0x70), (((int)stk + 0) + 0x58));
                                    FUN_0c0e1240((((int)stk + 0) + 0x18));
                                    nlCalcPoint((((int)stk + 0) + 0x70), (0x98 + t7));
                                }
                            }
                        }
                        FUN_0c0e1240((*(int *)(((int)stk + 0))));
                        FUN_0c0e2140((0x98 + t7));
                        nlRotateAY(((((struct o58_int *)(t7))->v)));
                        nlRotateAX(((((struct o54_int *)(t7))->v)));
                        FUN_0c0e0ae0(t7);
                        t8 = (t8 + 0x10);
                        continue;
                    }
                    break;
                }
                t124 = t10;
            }
            t273 = t124;
        } else {
            t134 = t3;
            for (;;) {
                if ((*(signed char *)((t134 + 0x0))) == -1) {
                    break;
                }
                t156 = (FUN_0c0ccf38(a4, (*(signed char *)((t134 + 0x1))), (*(short *)((t134 + 0x2)))));
                *(unsigned int *)(((int)stk + 0)) = (FUN_0c0ccf38(a4, (*(signed char *)((t156 + 0x42))), (*(signed char *)((t156 + 0x43)))));
                t132 = (*(signed char *)((t134 + 0x0)));
                if (t132 == 0) {
                    math_mat_get_translate(t156, (((int)stk + 0) + 0x70));
                    math_mat_get_translate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x64));
                    math_vec3_sub((((int)stk + 0) + 0x70), (((int)stk + 0) + 0x70), (((int)stk + 0) + 0x64));
                    t132 = 0x1;
                    (((struct o4_float *)(t134))->v) = (math_vec3_length((((int)stk + 0) + 0x70)));
                    *(unsigned char *)((t134 + 0x0)) = t132;
                }
                t134 = (t134 + 0x10);
                (((struct o41_uchar *)(t156))->v) = (0x1);
            }
            t150 = *(signed char *)((a4 + 0x3));
            *(unsigned char *)((0xC439DE8 + (t150 << 2))) = ((*(signed char *)((0xC439DE8 + (t150 << 2)))) + 0x1);
            t157 = (*(int *)(((((*(signed char *)(((0x71F1 + a4) + 0x0))) << 2) + (0xC336880 + (((*(signed char *)((a4 + 0x4))) << 2) << 1))) + 0x0)));
            for (;;) {
                t159 = *(signed char *)((t157 + 0x0));
                if (t159 != -1) {
                    t156 = (FUN_0c0ccf38(a4, (*(signed char *)((t157 + 0x1))), (*(short *)((t157 + 0x2)))));
                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c0ccf38(a4, (*(signed char *)((t156 + 0x42))), (*(signed char *)((t156 + 0x43)))));
                    if ((*(signed char *)((a4 + 0x7232))) != 0) {
                    } else {
                        if ((*(signed char *)0xC7F300B) != 0) {
                        } else {
                            if ((*(signed char *)0xC7F300E) != 0) {
                            } else {
                                math_mat_get_translate(t156, (((int)stk + 0) + 0x70));
                                math_mat_get_translate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x64));
                                *(float *)(((int)stk + 116)) = ((*(float *)(((int)stk + 116))) - ((((struct o8_float *)(t157))->v)));
                                FUN_0c0e1240((*(int *)(((int)stk + 0))));
                                nlInvertMatrix(0x0);
                                nlCalcPoint((((int)stk + 0) + 0x70), (0x98 + t156));
                                FUN_0c0e0ae0((((int)stk + 0) + 0x18));
                                t182 = math_vec3_length((0x98 + t156));
                                u183 = t182;
                                if (t182 == 0.0f) {
                                    u183 = 9.99999975e-05f;
                                }
                                u185 = (((struct o4_float *)(t157))->v);
                                (((struct o98_float *)(t156))->v) = (((((struct o98_float *)(t156))->v)) * (u185 / u183));
                                (((struct o9C_float *)(t156))->v) = (((((struct o9C_float *)(t156))->v)) * (u185 / u183));
                                (((struct oA0_float *)(t156))->v) = (((((struct oA0_float *)(t156))->v)) * (u185 / u183));
                                FUN_0c0e6fe8((u185 / u183));
                                if (((((struct oA0_float *)(t156))->v)) == 0.0f) {
                                    (((struct oA0_float *)(t156))->v) = 9.99999975e-05f;
                                }
                                (((struct o58_uint *)(t156))->v) = (math_atan2_angle16(((((struct o98_float *)(t156))->v)), ((((struct oA0_float *)(t156))->v))));
                                u158 = ((((struct o98_float *)(t156))->v));
                                u196 = (((struct oA0_float *)(t156))->v);
                                *(float *)(((int)stk + 8)) = u196;
                                u197 = (u196 * u196);
                                u197 = u197 + u158 * u158;
                                u158 = (math_signed_sqrt(u197));
                                if (u158 == 0.0f) {
                                    u158 = 9.99999975e-05f;
                                }
                                (((struct o54_uint *)(t156))->v) = (math_atan_angle16(((-((((struct o9C_float *)(t156))->v))) / u158)));
                                if (((*(int *)(((int)stk + 12))) & 0x8000) != 0) {
                                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                } else {
                                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                }
                                if (((*(int *)(((int)stk + 16))) & 0x8000) != 0) {
                                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | 0xFFFF0000);
                                } else {
                                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) & 0x7FFF);
                                }
                                if ((((((struct o54_int *)(t156))->v)) & 0x8000) != 0) {
                                    (((struct o54_uint *)(t156))->v) = (((((struct o54_int *)(t156))->v)) | 0xFFFF0000);
                                } else {
                                    (((struct o54_uint *)(t156))->v) = (((((struct o54_int *)(t156))->v)) & 0x7FFF);
                                }
                                if ((((((struct o58_int *)(t156))->v)) & 0x8000) != 0) {
                                    (((struct o58_uint *)(t156))->v) = (((((struct o58_int *)(t156))->v)) | 0xFFFF0000);
                                } else {
                                    (((struct o58_uint *)(t156))->v) = (((((struct o58_int *)(t156))->v)) & 0x7FFF);
                                }
                                math_vec3i_sub((((int)stk + 0) + 0xC), (t156 + 0x54), (((int)stk + 0) + 0xC));
                                t227 = *(int *)((t157 + 0xC));
                                *(unsigned int *)(((int)stk + 4)) = t227;
                                FUN_0c0ccfba((*(int *)(((int)stk + 16))), (t156 + 0x58), (*(int *)(((int)stk + 4))), (unsigned short)(-t227));
                                t231 = *(int *)((t157 + 0xC));
                                *(unsigned int *)(((int)stk + 4)) = t231;
                                FUN_0c0ccfba((*(int *)(((int)stk + 12))), (t156 + 0x54), (*(int *)(((int)stk + 4))), (unsigned short)(-t231));
                                FUN_0c0e1240((*(int *)(((int)stk + 0))));
                                FUN_0c0e2140((0x98 + t156));
                                nlRotateAY(((((struct o58_int *)(t156))->v)));
                                nlRotateAX(((((struct o54_int *)(t156))->v)));
                                FUN_0c0e0ae0(t156);
                                math_mat_get_translate(t156, (((int)stk + 0) + 0x70));
                                *(float *)(((int)stk + 92)) = 0.0f;
                                *(float *)(((int)stk + 88)) = 0.0f;
                                *(float *)(((int)stk + 96)) = (-(((((struct o4_float *)(t157))->v)) * 1.0f));
                                math_mat_transform_point((((int)stk + 0) + 0x58), t156);
                                math_vec3_sub((((int)stk + 0) + 0x58), (((int)stk + 0) + 0x64), (((int)stk + 0) + 0x58));
                                math_vec3_add((((int)stk + 0) + 0x70), (((int)stk + 0) + 0x70), (((int)stk + 0) + 0x58));
                                FUN_0c0e1240((((int)stk + 0) + 0x18));
                                nlCalcPoint((((int)stk + 0) + 0x70), (0x98 + t156));
                            }
                        }
                    }
                    FUN_0c0e1240((*(int *)(((int)stk + 0))));
                    FUN_0c0e2140((0x98 + t156));
                    nlRotateAY(((((struct o58_int *)(t156))->v)));
                    nlRotateAX(((((struct o54_int *)(t156))->v)));
                    FUN_0c0e0ae0(t156);
                    t157 = (t157 + 0x10);
                    continue;
                }
                break;
            }
            t273 = t159;
        }
        t284 = t273;
    } else {
        t282 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)(((0xC439DE8 + (t282 << 2)) + 0x0)) = ((*(signed char *)(((0xC439DE8 + (t282 << 2)) + 0x0))) + 0x1);
        t284 = (t282 << 2);
    }
    return t284;
}

int FUN_0c05c452(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t10;

    t0 = *(int *)((a4 + 0x1C));
    item_draw_marker(a4, a5, a6, a7, f4, f5, f6, f7);
    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 3);
    if ((int)((((struct oF2_short *)(a4))->v)) < 0) {
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t10 = *(signed char *)((a4 + 0x8));
    if (t10 != 0) {
        if (t10 != 1) {
        } else {
            fx_tick_pulsing_emitter(a4);
        }
    } else {
        FUN_0c05c4ea(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int vmu_check_do_load(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x3));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C012174;
    if ((v0_1 == 1)) goto L_C01217C;
    if ((v0_1 == 2)) goto L_C012190;
    if ((v0_1 == 3)) goto L_C0121B6;
    L_C0121CA:;
    return v0_1;
    L_C0121B6:;
    v0_2 = vmu_step_load_vmgame((*(int *)((v0_0 + 0x18))), a5, a6);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C0121CA;
    *(unsigned char *)((v0_0 + 0x2)) = 0x7;
    L_C0121C6:;
    *(unsigned char *)((v0_0 + 0x3)) = 0x0;
    v0_1 = (0x0);
    goto L_C0121CA;
    L_C012190:;
    v0_2 = vmu_get_vmgame_mask();
    *(unsigned int *)((v0_0 + 0x10)) = v0_2;
    v0_1 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C0121CA;
    if (!(((((int)0x1 << (int)(*(int *)((v0_0 + 0x18)))) & (*(int *)((v0_0 + 0x10)))) == 0))) goto L_C0121A8;
    v0_1 = (0x7);
    goto L_C0121B2;
    L_C0121A8:;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    *(unsigned char *)((v0_0 + 0x3)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C0121CA;
    L_C0121B2:;
    *(unsigned char *)((v0_0 + 0x2)) = v0_1;
    goto L_C0121C6;
    L_C01217C:;
    v0_2 = vmu_step_load((*(int *)((v0_0 + 0x18))));
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C0121CA;
    if ((v0_1 == 0)) goto L_C0121A8;
    v0_1 = (0x8);
    goto L_C0121B2;
    L_C012174:;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    vmu_check_run_objects(v0_2);
    goto L_C01217C;
}
