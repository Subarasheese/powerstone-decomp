/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o58_short { char p[0x58]; short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
int FUN_0c0380d4(int);
int FUN_0c04cdf2(void);
int FUN_0c053720(int);
int FUN_0c053910(void);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c062050(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0a3796(int, int);
int FUN_0c0d5f6a(int);
int FUN_0c0d6a28(int);
float FUN_0c0df340(float);
int FUN_0c0df400(float, float);
float FUN_0c0df4d0(int);
float FUN_0c0df870(float, float);
float FUN_0c0dfa50(int);
int FUN_0c0e6fe8(int, int, int, int, float);
extern float _builtin_sqrtf(float);
int thunk_FUN_0c062242(int);
int FUN_0c037e74(int a4);
int FUN_0c0215b8(int a4, int a5, int a6, int a7);
int FUN_0c04f372(int a4, int a5, float f4);
int FUN_0c0434cc(int a4, int a5, int a6, int a7);
int FUN_0c0d6a56(int a4);
int FUN_0c0349b2(int a4);
int FUN_0c053b62(void);
int FUN_0c013876(int a4, int a5, int a6, int a7);
void FUN_0c0d5c7e(void);
int FUN_0c043132(int a4, int a5, int a6, int a7);

int FUN_0c037e74(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_2 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C037E8C;
    *(unsigned char *)((v0_0 + 0x8)) = 0x4;
    L_C037E8C:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C037EE8;
    if ((v0_1 == 1)) goto L_C037EF4;
    if ((v0_1 != 2)) goto L_C037E9E;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) != 0)) goto L_C0380B6;
    L_C03809E:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    L_C0380B6:;
    return v0_1;
    L_C037E9E:;
    if (!((v0_1 != 3))) goto L_C0380A6;
    if ((v0_1 != 4)) goto L_C037EAE;
    goto L_C0380A6;
    L_C0380A6:;
    return FUN_0c059330(v0_0, R5, 0x0, R7);
    L_C037EAE:;
    goto L_C0380B6;
    L_C037EF4:;
    v0_3 = *(int *)((v0_0 + 0x1C));
    v0_2 = (0x0);
    v0_1 = (v0_3);
    if (((int)(*(signed char *)((v0_3 + 0xB))) > (int)0x5)) goto L_C037F08;
    if (!(((*(signed char *)((v0_1 + 0x71BA))) == 11))) goto L_C037F08;
    v0_1 = *(signed char *)(((*(int *)((v0_0 + 0x1C))) + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)(((((((struct oF2_short *)(v0_0))->v)) << 2) + 0xC321398))) * (short)0xB0)));
    v0_1 = (0x4000);
    if (((*(int *)((0xC321398 + (((((struct oF2_short *)(v0_0))->v)) << 2)))) != 8)) goto L_C038000;
    v0_3 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = (v0_1 + ((((struct o54_int *)(((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x6E0) + (0x5580 + v0_3))))->v)));
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30)));
    *(unsigned int *)((v0_0 + 0x34)) = v0_2;
    v0_1 = *(int *)((v0_0 + 0x1C));
    (((struct o50_float *)(v0_0))->v) = ((((struct o6C_float *)(((short)((short)(*(signed char *)((v0_1 + 0x71F1))) * (short)0x6E0) + (0x5580 + v0_1))))->v));
    v0_1 = *(int *)((v0_0 + 0x1C));
    (((struct o54_float *)(v0_0))->v) = ((((struct o70_float *)(((short)((short)(*(signed char *)((v0_1 + 0x71F1))) * (short)0x6E0) + (0x5580 + v0_1))))->v));
    v0_2 = *(int *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    w0_0 = (((((struct o74_float *)(((short)((short)(*(signed char *)((v0_2 + 0x71F1))) * (short)0x6E0) + (0x5580 + v0_2))))->v)));
    goto L_C03806E;
    L_C037F08:;
    *(unsigned char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x14;
    goto L_C03809E;
    L_C03806E:;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) != 0)) goto L_C0380B6;
    FUN_0c0380d4(v0_0);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    v0_1 = (0xEC);
    goto L_C0380B6;
    L_C038000:;
    v0_3 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = (v0_1 + ((((struct o54_int *)(((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x6E0) + (0x6340 + v0_3))))->v)));
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30)));
    *(unsigned int *)((v0_0 + 0x34)) = v0_2;
    v0_1 = *(int *)((v0_0 + 0x1C));
    (((struct o50_float *)(v0_0))->v) = ((((struct o6C_float *)(((short)((short)(*(signed char *)((v0_1 + 0x71F1))) * (short)0x6E0) + (0x6340 + v0_1))))->v));
    v0_1 = *(int *)((v0_0 + 0x1C));
    (((struct o54_float *)(v0_0))->v) = ((((struct o70_float *)(((short)((short)(*(signed char *)((v0_1 + 0x71F1))) * (short)0x6E0) + (0x6340 + v0_1))))->v));
    v0_2 = *(int *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    w0_0 = (((((struct o74_float *)(((short)((short)(*(signed char *)((v0_2 + 0x71F1))) * (short)0x6E0) + (0x6340 + v0_2))))->v)));
    goto L_C03806E;
    L_C037EE8:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x3;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C037EF4;
}

int FUN_0c0215b8(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u340;
    register float u329;
    register float u318;
    register float u307;
    register float u297;
    register float u104;
    register float u112;
    register float u115;
    register float u119;
    register float u123;
    register float u130;
    register float u133;
    register float u152;
    register float u159;
    register float u162;
    register float u164;
    register float u213;
    register float u226;
    register float u229;
    register float u231;
    register int t335;
    int t76;
    register float u286;
    register float u137;
    register float u126;
    register float u275;
    register float u204;
    register float u189;
    register float u178;
    register int t261;
    register float u265;
    register float u250;
    register float u245;

    u0 = (((struct oC_float *)(a6))->v);
    u1 = (((struct oC_float *)(a7))->v);
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a7 + 0x0));
    *(float *)(((int)stk + 0)) = (u2 - u3);
    u4 = (((struct o8_float *)(a7))->v);
    u5 = (((struct o8_float *)(a6))->v);
    *(float *)(((int)stk + 4)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = FUN_0c0df340(u8);
    u10 = (((struct o4_float *)(a7))->v);
    *(float *)(((int)stk + 12)) = u10;
    u11 = (((struct o10_float *)(a7))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 12));
    u13 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u13;
    u14 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 8)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 16)))), (u13 - u14), (u11 + u12), (u10 - u11));
    u340 = t16;
    if (0.0f > ((u0 + u1) - t9)) {
    } else {
        u329 = t16;
        if (0.0f > t16) {
        } else {
            t261 = *(signed char *)((a4 + 0x2D9));
            t335 = t261;
            u318 = t16;
            if ((signed char)t261 == 2) {
            } else {
                t335 = t261;
                u307 = t16;
                if ((*(signed char *)((a5 + 0x2D9))) == 2) {
                } else {
                    t335 = t261;
                    u297 = t16;
                    if (((signed char)t261 != 0) && (t76 = *(signed char *)((a5 + 0x2D9)), t76 != 0)) {
                    } else {
                        if (t16 > ((u0 + u1) - t9)) {
                            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                            if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                                if ((*(signed char *)((a5 + 0x2D9))) == 0) {
                                    u104 = *(float *)0xC021868;
                                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9)) / u104)));
                                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9)) / u104)));
                                    u112 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                    u112 = -u112;
                                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (u112 / u104));
                                    u115 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                    u115 = -u115;
                                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (u115 / u104));
                                    u126 = u104;
                                } else {
                                    u119 = ((((struct o20_float *)(a4))->v));
                                    u119 = u119 + (((u0 + u1) - t9)) * ((((struct o18_float *)(((int)stk + 0)))->v));
                                    (((struct o20_float *)(a4))->v) = u119;
                                    u123 = ((((struct o28_float *)(a4))->v));
                                    u123 = u123 + (((u0 + u1) - t9)) * ((((struct o20_float *)(((int)stk + 0)))->v));
                                    (((struct o28_float *)(a4))->v) = u123;
                                }
                                u137 = u126;
                            } else {
                                u130 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                u130 = -u130;
                                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u130);
                                u133 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                                u133 = -u133;
                                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u133);
                            }
                            u286 = u137;
                        } else {
                            if (((((struct o4_float *)(a6))->v)) > ((((struct o4_float *)(a7))->v))) {
                                if ((*(signed char *)((a5 + 0x2DA))) != 0) {
                                    FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                                    u152 = ((u0 + u1) - t9);
                                    if (((u0 + u1) - t9) > 5.0f) {
                                        u152 = 5.0f;
                                    }
                                    if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                                        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                            u159 = ((((struct o20_float *)(a4))->v));
                                            u159 = u159 + u152 * ((((struct o18_float *)(((int)stk + 0)))->v));
                                            (((struct o20_float *)(a4))->v) = u159;
                                            u162 = ((((struct o28_float *)(a4))->v));
                                            u162 = u162 + u152 * ((((struct o20_float *)(((int)stk + 0)))->v));
                                            (((struct o28_float *)(a4))->v) = u162;
                                        } else {
                                            u164 = *(float *)0xC021868;
                                            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * u152) / u164)));
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * u152) / u164)));
                                            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u152)) / u164)));
                                            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u152)) / u164)));
                                            u178 = u164;
                                        }
                                        u189 = u178;
                                    } else {
                                        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u152))));
                                        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + ((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u152))));
                                    }
                                    u204 = u189;
                                } else {
                                    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
                                        (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) - t16);
                                    } else {
                                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + t16);
                                    }
                                    t335 = t261;
                                    u204 = t16;
                                }
                                u275 = u204;
                            } else {
                                if ((*(signed char *)((a4 + 0x2DA))) != 0) {
                                    FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
                                    u213 = ((u0 + u1) - t9);
                                    if (((u0 + u1) - t9) > 5.0f) {
                                        u213 = 5.0f;
                                    }
                                    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
                                        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u213))));
                                        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + ((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u213))));
                                    } else {
                                        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                            u226 = ((((struct o20_float *)(a4))->v));
                                            u226 = u226 + u213 * ((((struct o18_float *)(((int)stk + 0)))->v));
                                            (((struct o20_float *)(a4))->v) = u226;
                                            u229 = ((((struct o28_float *)(a4))->v));
                                            u229 = u229 + u213 * ((((struct o20_float *)(((int)stk + 0)))->v));
                                            (((struct o28_float *)(a4))->v) = u229;
                                        } else {
                                            u231 = *(float *)0xC021868;
                                            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * u213) / u231)));
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((((((struct o20_float *)(((int)stk + 0)))->v)) * u213) / u231)));
                                            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((-(((((struct o18_float *)(((int)stk + 0)))->v)) * u213)) / u231)));
                                            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((-(((((struct o20_float *)(((int)stk + 0)))->v)) * u213)) / u231)));
                                            u245 = u231;
                                        }
                                        u250 = u245;
                                    }
                                    u265 = u250;
                                } else {
                                    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                                        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - t16);
                                    } else {
                                        (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) + t16);
                                    }
                                    u265 = t16;
                                }
                                t335 = t261;
                                u275 = u265;
                            }
                            u286 = u275;
                        }
                        u297 = u286;
                    }
                    u307 = u297;
                }
                u318 = u307;
            }
            u329 = u318;
        }
        u340 = u329;
    }
    return ((int (*)(int, int, int, int, float))(0xC0217FC))(t335, a5, a6, a7, u340);
}

int FUN_0c04f372(int a4, int a5, float f4)
{
    int stk[41];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t42;
    register int t43;
    register int t15;
    register int t16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u23;
    register float t24;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u36;
    register float t37;
    register float u38;
    register int t39;
    register int t52;
    register int t53;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register float u61;
    register float u63;
    register int t75;
    register int t82;
    register float u84;
    register int t85;
    register float u87;
    register int t88;
    register float u90;
    register int t94;
    register int t2;
    register int t12;
    register int t13;
    register int t14;
    register float u51;
    register int t55;
    register float u62;
    register int t79;
    register int t80;

    t1 = 0xFFFFFF68;
    t3 = (*(int *)0xC7E4078);
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = (*(signed char *)((t3 + 0x0)));
        t4 = (*(int *)((t3 + 0x18)));
        if ((t2 != 0) && ((t12 = *(signed char *)((t3 + 0x4)), t1 = t12, t1 == 7) && (t1 = 0x30D, t13 = *(signed char *)((t3 + t1)), t14 = (t2 == 0), t2 = t13, t2 == 0))) {
            t1 = (unsigned short)t5;
            t1 = (t1 << 2);
            t5 = (t5 + 0x1);
            *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t3;
        }
        t3 = t4;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t42 = 0x0;
    t43 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t15 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t15 + (((int)stk + 8) + 0x58));
            *(unsigned int *)(((int)stk + 24)) = (t15 + (((int)stk + 8) + 0x18));
            t16 = *(int *)(((t15 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t16;
            u17 = (((struct o20_float *)(a4))->v);
            u18 = (((struct o20_float *)(t16))->v);
            u19 = (((struct o28_float *)(a4))->v);
            u20 = (((struct o28_float *)(t16))->v);
            u23 = ((u20 - u19) * (u20 - u19));
            u23 = u23 + ((u18 - u17)) * ((u18 - u17));
            t24 = FUN_0c0df340(u23);
            *(float *)(((int)stk + 0)) = (t24 * 2.0f);
            t26 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            t27 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t27;
            u28 = (((struct o20_float *)(t27))->v);
            u30 = (((struct o20_float *)(t26))->v);
            u32 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u33 = (((struct o28_float *)((*(int *)(((int)stk + 20)))))->v);
            (((struct o10_float *)(((int)stk + 0)))->v) = (u33 - u32);
            u36 = ((u33 - u32) * (u33 - u32));
            u36 = u36 + ((u30 - u28)) * ((u30 - u28));
            t37 = FUN_0c0df340(u36);
            u38 = (t24 * 2.0f);
            *(float *)(((t15 + (((int)stk + 8) + 0x58)) + 0x0)) = (u38 - t37);
            t39 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t39 + 0x1);
            t15 = (t15 + 0x4);
            if ((int)(unsigned short)(t39 + 0x1) >= (int)(unsigned short)t5) {
                break;
            }
        }
        t42 = t15;
        t43 = (unsigned short)(t39 + 0x1);
        u51 = (u38 - t37);
    } else {
        t53 = t3;
        t54 = t4;
    }
    t52 = t43;
    t56 = t55;
    t57 = 0x0;
    t58 = 0xC0DF340;
    t59 = a4;
    t60 = t42;
    u61 = u51;
    u63 = f4;
    for (;;) {
        if ((int)(unsigned short)t57 >= (int)(unsigned short)t5) {
            break;
        }
        t54 = t57;
        t60 = (unsigned short)t57;
        t56 = (unsigned short)t54;
        t60 = (t60 << 2);
        t56 = (t56 << 2);
        t52 = (unsigned short)t54;
        t53 = t56;
        t56 = (t56 + (((int)stk + 8) + 0x58));
        *(unsigned int *)(((int)stk + 12)) = (t60 + (((int)stk + 8) + 0x58));
        if ((int)t52 < (int)(unsigned short)t5) {
            for (;;) {
                u61 = (*(float *)((t56 + 0x0)));
                u62 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t54 = (t54 + 0x1);
                if (u62 > u61) {
                    t58 = t60;
                    t59 = t53;
                    t58 = (t58 + (((int)stk + 8) + 0x58));
                    u62 = (*(float *)((t58 + 0x0)));
                    t59 = (t59 + (((int)stk + 8) + 0x58));
                    u63 = (*(float *)((t59 + 0x0)));
                    *(float *)((t59 + 0x0)) = u62;
                    t59 = t53;
                    *(float *)((t58 + 0x0)) = u63;
                    t58 = t60;
                    t59 = (t59 + (((int)stk + 8) + 0x18));
                    t58 = (t58 + (((int)stk + 8) + 0x18));
                    *(unsigned int *)(((int)stk + 8)) = t59;
                    t52 = (*(int *)((t58 + 0x0)));
                    t59 = (*(int *)((t59 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t52;
                    *(unsigned int *)((t58 + 0x0)) = t59;
                }
                t53 = (t53 + 0x4);
                t56 = (t56 + 0x4);
                if ((int)(unsigned short)t54 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t57 = (t57 + 0x1);
    }
    t75 = *(signed char *)0xC3673EE;
    if ((unsigned short)t5 != 0) {
        t79 = 0x1;
        t80 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t79 = 0x0;
        t80 = ((((struct o6C_int *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v) = t80;
    t82 = *(signed char *)0xC3673EE;
    u84 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = u84;
    t85 = *(signed char *)0xC3673EE;
    u87 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v) = u87;
    t88 = *(signed char *)0xC3673EE;
    u90 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v) = u90;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t79;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t94 = FUN_0c04cdf2();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t94;
}

int FUN_0c0434cc(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t4;
    register int t21;
    register float u29;
    register int t45;
    register int t44;
    register int t48;
    register int t2;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register int t41;
    register float u32;
    register float u33;
    register int t59;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            return t0;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t3 = a4;
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t5 = t4;
            t5 = (t5 << 2);
            t5 = (t5 + (0x2E0 + a4));
            t5 = (*(int *)((t5 + 0x0)));
            t2 = (*(signed char *)((t5 + 0x0)));
            if (t2 != 0) {
                t3 = t5;
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t3 = (t3 + 0x28);
                FUN_0c062050(t3, (t5 + 0x28), (t5 + 0x34));
                t3 = t5;
                t3 = (t3 + 0x4);
                FUN_0c062050(t3, (t5 + 0x4), (t5 + 0x28));
                t2 = (*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                t2 = (t2 - 1);
                *(unsigned char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)) = t2;
                t2 = (signed char)t2;
                if (t2 == 0) {
                    *(unsigned char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)) = 0x3;
                    t3 = t5;
                    FUN_0c06231c(t3, 0xC4CFA68, ((*(signed char *)((((0x308 + a4) + t4) + 0x0))) + 0x21));
                    t2 = (0x308 + a4);
                    t2 = (t2 + t4);
                    t21 = *(signed char *)((t2 + 0x0));
                    *(unsigned char *)((t2 + 0x0)) = (t21 + 0x1);
                    t2 = 0x10;
                    if ((int)(signed char)(t21 + 0x1) >= (int)t2) {
                        *(unsigned char *)((t5 + 0x0)) = 0x0;
                    }
                }
                t2 = (0x308 + a4);
                t2 = (t2 + t4);
                if ((int)(*(signed char *)((t2 + 0x0))) >= (int)0x8) {
                    u8 = (float)(*(signed char *)((((0x308 + a4) + t4) + 0x0)));
                    u7 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                    u8 = (-u8);
                    u8 = (u8 + 15.0f);
                    u29 = u7;
                    u29 = u29 + 3.0f * u8;
                    u7 = u29;
                    u7 = (u7 / 24.0f);
                    (((struct o40_float *)(t5))->v) = u7;
                    u32 = u7;
                    u33 = u8;
                }
                u7 = u32;
                u8 = u33;
                u6 = ((((struct o10_float *)((0x308 + a4)))->v));
                u8 = (float)(*(signed char *)((((0x308 + a4) + t4) + 0x0)));
                u7 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t4) + 0x0)));
                u8 = (u8 * 3.0f);
                u8 = (u8 - u7);
                u8 = (u8 + 3.0f);
                u8 = (u8 / 48.0f);
                u6 = (u6 + u8);
                u8 = (*(float *)0xC043724);
                u6 = (u6 * u8);
                (((struct o24_float *)(t5))->v) = u6;
                (((struct o20_float *)(t5))->v) = u6;
                (((struct o1C_float *)(t5))->v) = u6;
            } else {
                t41 = t3;
            }
            t4 = (t4 + 0x1);
            t3 = t41;
        }
        t45 = 0x2DC;
        if ((*(int *)(((int)stk + 0))) == 0) {
            t44 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t44 + 0x1);
            t45 = (t44 + 0x1);
        }
        return t45;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    t48 = 0x0;
    for (;;) {
        if ((int)t48 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        *(unsigned char *)((((0x308 + a4) + t48) + 0x0)) = 0x1;
        *(unsigned char *)(((((0x308 + a4) + 0x8) + t48) + 0x0)) = 0x1;
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0))) + 0x0)) = 0x1;
        (((struct o40_float *)((*(int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0)))))->v) = 1.0f;
        *(volatile signed char *)0xC7F3051;
        *(volatile int *)((((0x2E0 + a4) + (t48 << 2)) + 0x0));
        *(volatile signed char *)((a4 + 0xEC));
        FUN_0c0e6fe8(0x1, t48, (t48 << 2), 0xC7F302C, 1.0f);
        t48 = (t59 + 0x1);
    }
    return 0x2DC;
}

int FUN_0c0d6a56(int a4)
{
    int t0;
    register int t11;
    register int t20;
    register int t42;
    register int t22;
    register int t39;
    register int t25;
    register int t26;
    register int t29;
    int t54;
    register int t57;
    register int t62;
    register int t78;
    register int t109;
    register int t84;
    register int t85;
    register int t88;
    register int t101;
    register int t120;
    register int t126;
    register int t144;
    register int t148;
    register int t153;
    register int t111;
    register int t40;
    register int t27;
    register int t28;
    register int t86;
    register int t87;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                if ((((((struct o6C_int *)(a4))->v)) & 192) != 0) {
                    FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x44);
                    t11 = 0x2C;
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t11 = 0x2B;
                    }
                    *(unsigned char *)((a4 + 0x4)) = t11;
                }
                *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
                t20 = FUN_0c0d6a28(a4);
                t42 = t20;
                if (t20 != 0) {
                    t22 = *(signed char *)((a4 + 0x4));
                    if (t22 == 43) {
                        *(unsigned short *)((a4 + 0xA)) = 0x1;
                        t40 = (FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x45));
                    } else {
                        t39 = t22;
                        if (t22 == 44) {
                            t25 = *(signed char *)((a4 + 0x3));
                            *(unsigned char *)((a4 + 0x3)) = (t25 - 1);
                            t26 = (t25 - 1);
                            t29 = 0x0;
                            for (;;) {
                                if ((int)t29 > (int)0x2C) {
                                    break;
                                }
                                t28 = 0x3;
                                t27 = a4;
                                t28 = (t28 + a4);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t27 = (t27 + 0x68);
                                t28 = (t28 + t27);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t26 = t29;
                                t27 = (*(signed char *)((0xC1550DA + t26)));
                                if (t28 == t27) {
                                    t26 = t29;
                                    *(unsigned char *)((a4 + 0x4)) = t26;
                                }
                                t29 = (t29 + 0x1);
                            }
                            t39 = (FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x46));
                        }
                        t40 = t39;
                    }
                    t42 = t40;
                }
                t111 = t42;
            } else {
                t111 = t0;
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    *(unsigned char *)((a4 + 0x4)) = 0x2A;
                    *(volatile signed char *)((0xC1550DA + (*(signed char *)((a4 + 0x4)))));
                    t111 = 0x6B;
                }
            }
        } else {
            t54 = (((struct o6C_int *)(a4))->v);
            if ((0x40 & t54) != 0) {
                FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x44);
                t57 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t57 - 1);
                if ((int)(signed char)(t57 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2C;
                }
            } else {
                if ((0x80 & t54) != 0) {
                    FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x44);
                    t62 = *(signed char *)((a4 + 0x4));
                    *(unsigned char *)((a4 + 0x4)) = (t62 + 0x1);
                    if ((int)(signed char)(t62 + 0x1) > (int)0x2C) {
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                    }
                }
            }
            *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
            t78 = FUN_0c0d6a28(a4);
            t109 = t78;
            if (t78 == 0) {
            } else {
                if ((*(signed char *)((a4 + 0x4))) != 43) {
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t84 = *(signed char *)((a4 + 0x3));
                        *(unsigned char *)((a4 + 0x3)) = (t84 - 1);
                        t85 = (t84 - 1);
                        t88 = 0x0;
                        for (;;) {
                            if ((int)t88 > (int)0x2C) {
                                break;
                            }
                            t87 = 0x3;
                            t86 = a4;
                            t87 = (t87 + a4);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t86 = (t86 + 0x68);
                            t87 = (t87 + t86);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t85 = t88;
                            t86 = (*(signed char *)((0xC1550DA + t85)));
                            if (t87 == t86) {
                                t85 = t88;
                                *(unsigned char *)((a4 + 0x4)) = t85;
                            }
                            t88 = (t88 + 0x1);
                        }
                        t109 = (FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x46));
                    } else {
                        FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x45);
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t101 = *(signed char *)((a4 + 0x3));
                        t109 = t101;
                        if (t101 == 3) {
                            *(unsigned char *)((a4 + 0x4)) = 0x2B;
                            t109 = 0x2B;
                        }
                    }
                } else {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    t109 = (FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x45));
                }
            }
            t111 = t109;
        }
        t153 = t111;
    } else {
        if ((0x40 & ((((struct o6C_int *)(a4))->v))) != 0) {
            FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x44);
            t120 = *(signed char *)((a4 + 0x4));
            *(unsigned char *)((a4 + 0x4)) = (t120 - 1);
            if ((int)(signed char)(t120 - 1) < 0) {
                *(unsigned char *)((a4 + 0x4)) = 0x2B;
            }
        } else {
            if ((0x80 & ((((struct o6C_int *)(a4))->v))) != 0) {
                FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x44);
                t126 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t126 + 0x1);
                if ((int)(signed char)(t126 + 0x1) > (int)0x2B) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
        }
        *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
        t144 = FUN_0c0d6a28(a4);
        t153 = t144;
        if (t144 == 0) {
        } else {
            FUN_0c0a3796((*(signed char *)((a4 + 0x9))), 0x45);
            if ((*(signed char *)((a4 + 0x4))) == 43) {
                *(unsigned short *)((a4 + 0xA)) = 0x1;
                t153 = 0x1;
            } else {
                t148 = *(signed char *)((a4 + 0x3));
                *(unsigned char *)((a4 + 0x3)) = (t148 + 0x1);
                t153 = (t148 + 0x1);
            }
        }
    }
    return t153;
}

int FUN_0c0349b2(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    if ((v0_3 == 0)) goto L_C0349F4;
    if ((v0_2 == 1)) goto L_C034A2C;
    if ((v0_2 != 2)) goto L_C0349CE;
    return FUN_0c059330(v0_0, R5, R6, R7);
    L_C0349CE:;
    L_C034BDC:;
    return v0_2;
    L_C034A2C:;
    v0_3 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_3);
    v0_1 = (0x222);
    w0_0 = (0.0f);
    w0_1 = (0.099999994f);
    if ((v0_3 == 0)) goto L_C034A4A;
    if ((v0_2 == 1)) goto L_C034AD4;
    if ((v0_2 != 2)) goto L_C034A46;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) + 0x888);
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_1);
    if ((!(0.0f > ((((struct o24_float *)(((((struct o2E8_int *)(v0_0))->v))))->v))))) goto L_C034BBC;
    (((struct o24_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C034BBC:;
    v0_2 = (0x2E8);
    L_C034BBE:;
    v0_0 = *(int *)((v0_0 + v0_2));
    w0_0 = (((struct o24_float *)(v0_0))->v);
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o1C_float *)(v0_0))->v) = w0_0;
    v0_2 = (0x1C);
    goto L_C034BDC;
    L_C034A46:;
    goto L_C034BDC;
    L_C034AD4:;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + v0_1);
    *(unsigned int *)(((*(int *)(((0x2E0 + v0_0) + 0x8))) + 0x18)) = (*(int *)((((((struct o2E0_int *)(v0_0))->v)) + 0x18)));
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - 0.5f);
    FPUL_ = (0x3F000000);
    if ((!(0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(v0_0))->v))))->v))))) goto L_C034B12;
    (((struct o24_float *)(((((struct o2E4_int *)(v0_0))->v))))->v) = w0_0;
    L_C034B12:;
    v0_1 = (((struct o2E4_int *)(v0_0))->v);
    w0_2 = (((struct o24_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = w0_2;
    (((struct o1C_float *)(v0_1))->v) = w0_2;
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - 0.049999997f);
    w0_3 = (((struct o24_float *)(((((struct o2E8_int *)(v0_0))->v))))->v);
    w0_2 = (w0_3);
    FPUL_ = (0x3D4CCCCC);
    if ((!(0.0f > w0_3))) goto L_C034B4A;
    (((struct o24_float *)(((((struct o2E8_int *)(v0_0))->v))))->v) = w0_0;
    L_C034B4A:;
    v0_1 = (((struct o2E8_int *)(v0_0))->v);
    w0_2 = (((struct o24_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = w0_2;
    (((struct o1C_float *)(v0_1))->v) = w0_2;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_1);
    if ((!(0.0f > ((((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v))))) goto L_C034B82;
    (((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    L_C034B82:;
    v0_2 = (0x2E0);
    goto L_C034BBE;
    L_C034A4A:;
    v0_2 = (((struct o2E0_int *)(v0_0))->v);
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + v0_1);
    *(unsigned int *)(((*(int *)(((0x2E0 + v0_0) + 0x8))) + 0x18)) = (*(int *)((((((struct o2E0_int *)(v0_0))->v)) + 0x18)));
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) + 1.0f);
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    v0_2 = *(int *)(((0x2E0 + v0_0) + 0x8));
    w0_0 = (((struct o24_float *)(v0_1))->v);
    v0_3 = *(int *)(((0x2E0 + v0_0) + 0x4));
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o24_float *)(v0_2))->v) = w0_0;
    (((struct o20_float *)(v0_2))->v) = w0_0;
    (((struct o1C_float *)(v0_2))->v) = w0_0;
    (((struct o24_float *)(v0_3))->v) = w0_0;
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    w0_0 = (((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v);
    v0_2 = (0x24);
    w0_2 = (w0_0);
    if ((!(2.0f > w0_0))) goto L_C034AAC;
    goto L_C034BDC;
    L_C034AAC:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C034BDC;
    L_C0349F4:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    v0_1 = *(signed char *)((v0_0 + 0x3));
    thunk_FUN_0c062242(((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    goto L_C034A2C;
}

int FUN_0c053b62(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o0_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F302D) + 0x1);
    (((struct o1_uchar *)0xC7F302D)->v) = 0x0;
    (((struct o23_uchar *)0xC7F302D)->v) = 0x0;
    FUN_0c053910();
    t1 = *(signed char *)0xC7F304C;
    if (((int)(*(signed char *)0xC7F2E3F) >= (int)t1) && (t0 = *(signed char *)0xC7F2EB7, (int)t0 >= (int)t1)) {
        (((struct o27_uchar *)0xC7F302D)->v) = 0x3;
    } else {
        t0 = *(signed char *)0xC7F304C;
        if ((int)(*(signed char *)0xC7F2E3F) >= (int)t0) {
            (((struct o27_uchar *)0xC7F302D)->v) = 0x1;
        } else {
            if ((int)(*(signed char *)0xC7F2EB7) >= (int)t0) {
                (((struct o27_uchar *)0xC7F302D)->v) = 0x2;
            }
        }
    }
    t0 = *(signed char *)0xC7F3054;
    t1 = t0;
    if (t0 == 0) {
    } else {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                t2 = *(signed char *)0xC7F3071;
                if ((unsigned char)t2 != 0) {
                    if (((unsigned char)t2 != 1) && ((unsigned char)t2 != 2)) {
                        if ((unsigned char)t2 != 3) {
                        } else {
                            *(unsigned char *)0xC7F2E3E = 0x1;
                            *(unsigned char *)0xC7F2EB6 = 0x1;
                        }
                    } else {
                        FUN_0c053720((t2 - 1));
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                    }
                } else {
                    *(unsigned char *)0xC7F2E3E = 0x1;
                    *(unsigned char *)0xC7F2EB6 = 0x1;
                }
                (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & 0xFC);
                (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)0xC7F3074);
                t2 = *(signed char *)0xC7F3071;
                (((struct o3_uchar *)0xC7F3071)->v) = t2;
                (((struct o1_uchar *)0xC7F3071)->v) = t2;
                t2 = 0x46;
            } else {
                t3 = t0;
                if (t0 == 4) {
                    t0 = *(signed char *)0xC7F3071;
                    if ((unsigned char)t0 != 0) {
                        if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
                            if ((unsigned char)t0 != 3) {
                            } else {
                                *(unsigned char *)0xC7F2E3E = 0x1;
                                *(unsigned char *)0xC7F2EB6 = 0x1;
                            }
                        } else {
                            FUN_0c053720((t0 - 1));
                            (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                        }
                    } else {
                        *(unsigned char *)0xC7F2E3E = 0x1;
                        *(unsigned char *)0xC7F2EB6 = 0x1;
                    }
                    (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & 0xFC);
                    (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)0xC7F3074);
                    t0 = *(signed char *)0xC7F3071;
                    (((struct o3_uchar *)0xC7F3071)->v) = t0;
                    (((struct o1_uchar *)0xC7F3071)->v) = t0;
                    t3 = 0x46;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            (((struct o22_uchar *)0xC7F302D)->v) = ((*(signed char *)0xC7F3054) - 1);
            t2 = *(signed char *)0xC7F304F;
            t3 = *(signed char *)0xC7F3071;
            if ((unsigned char)t3 != 0) {
                if (((unsigned char)t3 != 1) && ((unsigned char)t3 != 2)) {
                    if ((unsigned char)t3 != 3) {
                    } else {
                        (((struct o44_ushort *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o44_short *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) + 0x1);
                        if ((int)((((struct o44_short *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) > (int)0x63) {
                            (((struct o44_ushort *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x63;
                        }
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x78))))->v) = 0x1;
                    }
                } else {
                    if ((signed char)t2 == ((unsigned char)(*(signed char *)0xC7F3071) - 1)) {
                        (((struct o4D_uchar *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
                        t3 = *(signed char *)0xC7F304F;
                        (((struct o58_ushort *)(((unsigned char)((unsigned short)t3 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o58_short *)(((unsigned char)((unsigned short)t3 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) | ((int)0x1 << (int)(*(signed char *)(((0xC7E40C8 + (unsigned short)((unsigned short)(0x1 - t3) * (unsigned short)0x72D0)) + 0x0)))));
                        t3 = *(signed char *)0xC7F304F;
                        (((struct o56_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)t3 * (unsigned short)0x78))))->v) = ((*(signed char *)(((0xC7F2DF0 + (unsigned char)((unsigned short)t3 * (unsigned short)0x78)) + 0x56))) + 0x1);
                    } else {
                        (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((*(signed char *)0xC7F3071) + 0xFF) * (unsigned short)0x78))))->v) = 0x1;
                    }
                    FUN_0c053720(((*(signed char *)0xC7F3071) - 1));
                }
            } else {
                (((struct o44_ushort *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o44_short *)(((unsigned char)((unsigned short)t2 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) + 0x1);
                if ((int)((((struct o44_short *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v)) > (int)0x63) {
                    (((struct o44_ushort *)(((unsigned char)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x63;
                }
                (((struct o4E_uchar *)((0xC7F2DF0 + (unsigned char)((unsigned short)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x78))))->v) = 0x1;
            }
            (((struct o0_uchar *)0xC7F3071)->v) = ((*(signed char *)0xC7F3071) & (*(signed char *)0xC7F3054));
            (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)0xC7F3074);
            t2 = *(signed char *)0xC7F3071;
            (((struct o3_uchar *)0xC7F3071)->v) = t2;
            (((struct o1_uchar *)0xC7F3071)->v) = t2;
            t0 = 0x46;
        }
        t1 = t0;
    }
    t0 = t1;
    if ((*(signed char *)0xC7F2F16) != 0) {
        t1 = *(signed char *)0xC7F3054;
        t2 = t1;
        if ((t1 & 15) != 0) {
            (((struct o4_uchar *)0xC7F3071)->v) = (*(signed char *)0xC7F3074);
            (((struct o3_uchar *)0xC7F3071)->v) = 0x0;
            (((struct o1_uchar *)0xC7F3071)->v) = 0x0;
            (((struct o0_uchar *)0xC7F3071)->v) = 0x0;
            t2 = 0x45;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c013876(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.25f;
        (((struct o54_float *)(a4))->v) = 0.25f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t0 = *(int *)0xC361C74;
    u0 = ((((struct o28_float *)((*(int *)0xC361C74)))->v));
    u0 = u0 + 100.0f * (FUN_0c0df4d0(((*(int *)(((*(int *)0xC361C74) + 0x2C))) + 0x4000)));
    u1 = (((struct o24_float *)(t0))->v);
    t0 = *(int *)0xC361C74;
    u2 = ((FUN_0c0dfa50(((*(int *)(((*(int *)0xC361C74) + 0x2C))) + 0x4000))) * 100.0f);
    u3 = u0;
    u3 = u3 + 76.0759964f * (FUN_0c0df4d0((*(int *)((t0 + 0x2C)))));
    u0 = (((struct o20_float *)((*(int *)0xC361C74)))->v);
    u4 = ((FUN_0c0dfa50((*(int *)(((*(int *)0xC361C74) + 0x2C))))) * 76.0759964f);
    u5 = FUN_0c0df870(((-u0) + -325.0f), 2.0f);
    u6 = FUN_0c0df870((640.0f - u3), 2.0f);
    t0 = FUN_0c0df400((0.0f - ((u1 - u2) - u4)), _builtin_sqrtf((u5 + u6)));
    t1 = FUN_0c0df400(((-u0) + -325.0f), (640.0f - u3));
    u0 = FUN_0c0df4d0(t0);
    u5 = (u0 * 400.0f);
    u6 = ((((struct o20_float *)((*(int *)0xC361C74)))->v));
    u6 = u6 + u5 * (FUN_0c0dfa50(t1));
    (((struct o20_float *)(a4))->v) = (u6 + 325.0f);
    u5 = (u0 * 400.0f);
    u0 = u3;
    u0 = u0 + u5 * (FUN_0c0df4d0(t1));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = ((u1 - u2) - u4);
    u0 = u0 + 400.0f * (FUN_0c0dfa50(t0));
    (((struct o24_float *)(a4))->v) = u0;
    (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) + 0.0199999996f);
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + 0.0199999996f);
    (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) + 0.0199999996f);
    if (((((struct o60_float *)(a4))->v)) > 1.0f) {
        (((struct o60_float *)(a4))->v) = 1.0f;
        (((struct o64_float *)(a4))->v) = 1.0f;
        (((struct o68_float *)(a4))->v) = 1.0f;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0124999993f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.0124999993f);
    t0 = *(signed char *)0xC7F302D;
    t1 = t0;
    if (t0 != 5) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

void FUN_0c0d5c7e(void)
{
    if ((*(signed char *)0xC7F300B) == 0) {
        FUN_0c0d5f6a(0xC7F2DF0);
        FUN_0c0d5f6a(0xC7F2E68);
    return;
    }
}

int FUN_0c043132(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t5;
    register int t22;
    register int t29;
    register float u31;
    register int t46;
    register int t45;
    register int t50;
    register int t51;
    register int t53;
    register int t2;
    register int t3;
    register int t6;
    register float u7;
    register float u8;
    register float u9;
    register int t42;
    register int t33;
    register float u34;
    register float u35;
    register int t49;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return FUN_0c059330(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c059330(a4, a5, a6, a7);
            }
            return t0;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t4 = a4;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t6 = t5;
            t6 = (t6 << 2);
            t6 = (t6 + (0x2E0 + a4));
            t6 = (*(int *)((t6 + 0x0)));
            t3 = (*(signed char *)((t6 + 0x0)));
            if (t3 != 0) {
                t4 = t6;
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t4 = (t4 + 0x28);
                FUN_0c062050(t4, (t6 + 0x28), (t6 + 0x34));
                t4 = t6;
                t4 = (t4 + 0x4);
                FUN_0c062050(t4, (t6 + 0x4), (t6 + 0x28));
                t3 = (*(signed char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)));
                t3 = (t3 - 1);
                *(unsigned char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)) = t3;
                t3 = (signed char)t3;
                if (t3 == 0) {
                    t2 = (0x308 + a4);
                    t2 = (t2 + 0x8);
                    t2 = (t2 + t5);
                    *(unsigned char *)((t2 + 0x0)) = 0x3;
                    t4 = t6;
                    FUN_0c06231c(t4, 0xC4CFA68, ((*(signed char *)((((0x308 + a4) + t5) + 0x0))) + 0x21));
                    t3 = (0x308 + a4);
                    t3 = (t3 + t5);
                    t22 = *(signed char *)((t3 + 0x0));
                    *(unsigned char *)((t3 + 0x0)) = (t22 + 0x1);
                    if ((int)(signed char)(t22 + 0x1) >= (int)0x10) {
                        *(unsigned char *)((t6 + 0x0)) = 0x0;
                    }
                }
                t3 = (*(signed char *)((((0x308 + a4) + t5) + 0x0)));
                if ((int)t3 >= (int)0x8) {
                    t2 = (0x308 + a4);
                    t2 = (t2 + t5);
                    t3 = (*(signed char *)((t2 + 0x0)));
                    t29 = t3;
                    t3 = (0x308 + a4);
                    t3 = (t3 + 0x8);
                    t3 = (t3 + t5);
                    u9 = (float)t29;
                    t3 = (*(signed char *)((t3 + 0x0)));
                    u8 = (float)t3;
                    u9 = (-u9);
                    u9 = (u9 + 15.0f);
                    u31 = u8;
                    u31 = u31 + 3.0f * u9;
                    u8 = u31;
                    u8 = (u8 / 24.0f);
                    (((struct o40_float *)(t6))->v) = u8;
                    t33 = t2;
                    u34 = u8;
                    u35 = u9;
                }
                u8 = u34;
                u9 = u35;
                t2 = t33;
                u7 = ((((struct o10_float *)((0x308 + a4)))->v));
                u9 = (float)(*(signed char *)((((0x308 + a4) + t5) + 0x0)));
                u8 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)));
                u9 = (u9 * 3.0f);
                u9 = (u9 - u8);
                u9 = (u9 + 3.0f);
                u9 = (u9 / 48.0f);
                u7 = (u7 + u9);
                u9 = 0.799999952f;
                u7 = (u7 * u9);
                (((struct o24_float *)(t6))->v) = u7;
                (((struct o20_float *)(t6))->v) = u7;
                (((struct o1C_float *)(t6))->v) = u7;
            } else {
                t42 = t4;
            }
            t5 = (t5 + 0x1);
            t4 = t42;
        }
        t46 = 0x2DC;
        if ((*(int *)(((int)stk + 0))) == 0) {
            t45 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t45 + 0x1);
            t46 = (t45 + 0x1);
        }
        return t46;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    t50 = 0x0;
    t51 = a6;
    for (;;) {
        if ((int)t50 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t49 = (0x308 + a4);
        t49 = (t49 + t50);
        *(unsigned char *)((t49 + 0x0)) = 0x1;
        t49 = 0x2E0;
        t51 = t50;
        t49 = (t49 + a4);
        t51 = (t51 << 2);
        t49 = (t49 + t51);
        *(unsigned char *)(((((0x308 + a4) + 0x8) + t50) + 0x0)) = 0x1;
        t53 = *(int *)((t49 + 0x0));
        t49 = 0x2E0;
        *(unsigned char *)((t53 + 0x0)) = 0x1;
        t49 = (t49 + a4);
        t49 = (t49 + t51);
        (((struct o40_float *)((*(int *)((t49 + 0x0)))))->v) = 1.0f;
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        (((struct o44_float *)(t49))->v) = 0.899999976f;
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        (((struct o48_float *)(t49))->v) = 0.829999983f;
        t50 = (t50 + 0x1);
        t51 = (t51 + (0x2E0 + a4));
        t49 = (*(int *)((t51 + 0x0)));
        (((struct o4C_float *)(t49))->v) = 0.629999995f;
    }
    return 0x2DC;
}
