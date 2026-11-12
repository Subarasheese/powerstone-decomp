/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c02d9e0(int, int, float, float, float, float);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0b6368(int, int, int, float);
int FUN_0c0c4fbe(int, int, int, int);
float FUN_0c0d5bc0(void);
int FUN_0c0df360(float);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
float FUN_0c0dfce0(int);
int FUN_0c0e3510(void);
extern int FUN_0c0e6e5c();
int FUN_0c0e6f24(int);
int FUN_0c0e6fe8(void);
int FUN_0c10b7b0(int, int, int, int, int);
int FUN_0c10bbb4(int);
int kmiWriteRegister(int, int);
int nlMultiMatrix(int);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c062242(int);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int FUN_0c0d624c(int a4, int a5, int a6, int a7);
int FUN_0c03d6f4(int a4, int a5, int a6, int a7);
int FUN_0c0a8bb4(int a4, int a5, int a6, int a7);
int FUN_0c0c4e28(int a4, int a5, int a6, int a7);
int FUN_0c0b0b12(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0fc812(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c06c326(int a4, int a5, int a6, int a7);

int nlPerspective_L(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u36;
    register float u37;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 0));
    t2 = FUN_0c0dfce0((t0 >> 1));
    u3 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 4)) = (u3 / (1.0f / t2));
    if (((((struct oC_float *)0xC346AB0)->v)) != 0.0f) {
        t5 = FUN_0c0df360((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 0)) = t5;
        t6 = FUN_0c0dfce0(t5);
        t8 = FUN_0c0df360((t6 * (((((struct oC_float *)0xC346AB0)->v)) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (FUN_0c0df4d0(t8)));
    } else {
        t10 = FUN_0c0df360((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 12)) = (1.0f / (FUN_0c0df4d0(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o10_float *)0xC346AB0)->v)) != 0.0f) {
        t17 = FUN_0c0dfce0((t0 >> 1));
        t21 = (FUN_0c0df360((t17 * (((((struct o10_float *)0xC346AB0)->v)) + 1.0f))));
    }
    t25 = FUN_0c0df4d0(t21);
    (((struct oC_float *)0xC346AB0)->v) = 0.0f;
    (((struct o10_float *)0xC346AB0)->v) = 0.0f;
    u26 = *(float *)(((int)stk + 8));
    u28 = ((1.0f / t2) * (1.0f / t25));
    u29 = (((1.0f / t2) / u26) * (*(float *)(((int)stk + 12))));
    (((struct o0_float *)0xC346AB0)->v) = (u29 * 0.5f);
    (((struct o4_float *)0xC346AB0)->v) = (u28 * 0.5f);
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u32 = (((struct o4_float *)0xC346AB0)->v);
    u33 = (((struct o18_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u33 * u32);
    u34 = (((struct o0_float *)0xC7FCF68)->v);
    if (u34 > (u33 * u32)) {
        (((struct o8_float *)0xC346AB0)->v) = u34;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u33 * u32);
    }
    *(float *)(((int)stk + 16)) = ((1.0f / t2) / u26);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (1.0f / t2);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u36 = (f5 * f6);
    u37 = (u36 * (1.0f + 1.0f));
    u37 = -u37;
    *(float *)(((int)stk + 72)) = (u37 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f5;
    (((struct o4_float *)0xC7FD63C)->v) = f6;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f5);
    (((struct o18_float *)0xC7FCC8C)->v) = f5;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f5);
    (((struct o1C_float *)0xC7FCC8C)->v) = f6;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (FUN_0c0e3510());
}

int FUN_0c0d624c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t22;
    register float t53;
    register float u55;
    register float t57;
    register int t81;
    register float t112;
    register float u114;
    register float t116;
    int t2;
    int t18;
    int t32;
    register int t33;
    register int t34;
    int t44;
    register int t48;
    int t62;
    int t77;
    int t91;
    register int t92;
    register int t93;
    int t103;
    register int t107;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC0D642E))(a4, a5, 0x5A, a7);
        }
        if (((*(signed char *)0xC7F31B9) != 0) && (t2 = *(signed char *)(((a4 + 0x4A) + 0x0)), (int)t2 < (int)0x9)) {
            (((struct o4A_uchar *)(a4))->v) = 0x9;
            (((struct o4B_uchar *)(a4))->v) = 0x5A;
        }
        if ((*(signed char *)0xC7F3080) == 0) {
            if ((*(signed char *)0xC7F306E) != 0) {
                return ((int (*)(int, int, int, int))(0xC0D642E))(0x9, 0xC7F302C, 0x5A, a7);
            }
            if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) <= 0) && (t18 = *(signed char *)(((a4 + 0x4A) + 0x1)), (int)t18 <= 0)) {
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                return ((int (*)(int, int, int, int))(0xC0D642E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
            }
            if ((*(signed char *)((a4 + 0x4E))) == 0) {
                t22 = *(signed char *)((a4 + 0x4B));
                (((struct o4B_uchar *)(a4))->v) = (t22 - 1);
                if ((int)(signed char)(t22 - 1) < 0) {
                    (((struct o4B_uchar *)(a4))->v) = 0x5A;
                    (((struct o4A_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x4A) + 0x0))) - 1);
                }
            }
            if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) < (int)0x7) && (t32 = *(signed char *)((a4 + 0x9)), t33 = (int)(((unsigned int)(t32 << 2)) >> 31), t34 = *(int *)((0xC7F31F8 + (signed char)((((t32 << 2) << 1) + t32) << 2))), (t34 & 0x604) != 0)) {
                (((struct o4B_uchar *)(a4))->v) = 0x1;
            }
            if ((*(signed char *)0xC7F306E) == 0) {
                if ((*(signed char *)0xC7F306F) == 0) {
                    if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) <= (int)0x9) && (t44 = *(signed char *)((a4 + 0x4E)), t44 == 0)) {
                        *(int *)((int)stk + 4) = ((*(signed char *)(((a4 + 0x4A) + 0x0))));
                        if ((*(signed char *)((a4 + 0x9))) == 0) {
                            *(int *)((int)stk + 0) = 0xC155094;
                            t48 = 0xC155094;
                        } else {
                            *(int *)((int)stk + 0) = 0xC1550A4;
                            t48 = 0xC1550A4;
                        }
                        sprintf(0xC7F36B8, 0xC7F302C, 0x5A, (a4 + 0x4A), t48);
                        t53 = FUN_0c0d5bc0();
                        u55 = (float)(((short)(*(signed char *)((a4 + 0x9))) * (short)0x13) + 0x1);
                        FUN_0c02d9e0(0xC7F36B8, 0x0, (u55 * 16.0f), (t53 + 16.0f), 1.0f, 1.0f);
                        return ((int (*)(void))(0xC0D640E))();
                    }
                    t57 = FUN_0c0d5bc0();
                    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((a4 + 0x9)));
                    *(volatile signed char *)(((int)stk + 8));
                    return ((int (*)(float, float))(0xC0D63EE))(0.0f, (t57 + 16.0f));
                }
                return ((int (*)(int, int, int, int))(0xC0D640E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
            }
            return ((int (*)(int, int, int, int))(0xC0D640E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
        }
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        (((struct o4A_uchar *)(a4))->v) = 0xA;
        (((struct o4B_uchar *)(a4))->v) = 0x5A;
        if (((*(signed char *)0xC7F31B9) != 0) && (t62 = *(signed char *)(((a4 + 0x4A) + 0x0)), (int)t62 < (int)0x9)) {
            (((struct o4A_uchar *)(a4))->v) = 0x9;
            (((struct o4B_uchar *)(a4))->v) = 0x5A;
        }
        if ((*(signed char *)0xC7F3080) == 0) {
            if ((*(signed char *)0xC7F306E) != 0) {
                return ((int (*)(int, int, int, int))(0xC0D642E))(0x9, 0xC7F302C, 0x5A, a7);
            }
            if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) <= 0) && (t77 = *(signed char *)(((a4 + 0x4A) + 0x1)), (int)t77 <= 0)) {
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                return ((int (*)(int, int, int, int))(0xC0D642E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
            }
            if ((*(signed char *)((a4 + 0x4E))) == 0) {
                t81 = *(signed char *)((a4 + 0x4B));
                (((struct o4B_uchar *)(a4))->v) = (t81 - 1);
                if ((int)(signed char)(t81 - 1) < 0) {
                    (((struct o4B_uchar *)(a4))->v) = 0x5A;
                    (((struct o4A_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x4A) + 0x0))) - 1);
                }
            }
            if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) < (int)0x7) && (t91 = *(signed char *)((a4 + 0x9)), t92 = (int)(((unsigned int)(t91 << 2)) >> 31), t93 = *(int *)((0xC7F31F8 + (signed char)((((t91 << 2) << 1) + t91) << 2))), (t93 & 0x604) != 0)) {
                (((struct o4B_uchar *)(a4))->v) = 0x1;
            }
            if ((*(signed char *)0xC7F306E) == 0) {
                if ((*(signed char *)0xC7F306F) == 0) {
                    if (((int)(*(signed char *)(((a4 + 0x4A) + 0x0))) <= (int)0x9) && (t103 = *(signed char *)((a4 + 0x4E)), t103 == 0)) {
                        *(int *)((int)stk + 4) = ((*(signed char *)(((a4 + 0x4A) + 0x0))));
                        if ((*(signed char *)((a4 + 0x9))) == 0) {
                            *(int *)((int)stk + 0) = 0xC155094;
                            t107 = 0xC155094;
                        } else {
                            *(int *)((int)stk + 0) = 0xC1550A4;
                            t107 = 0xC1550A4;
                        }
                        sprintf(0xC7F36B8, 0xC7F302C, 0x5A, (a4 + 0x4A), t107);
                        t112 = FUN_0c0d5bc0();
                        u114 = (float)(((short)(*(signed char *)((a4 + 0x9))) * (short)0x13) + 0x1);
                        FUN_0c02d9e0(0xC7F36B8, 0x0, (u114 * 16.0f), (t112 + 16.0f), 1.0f, 1.0f);
                        return ((int (*)(void))(0xC0D640E))();
                    }
                    t116 = FUN_0c0d5bc0();
                    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((a4 + 0x9)));
                    *(volatile signed char *)(((int)stk + 8));
                    return ((int (*)(float, float))(0xC0D63EE))(0.0f, (t116 + 16.0f));
                }
                return ((int (*)(int, int, int, int))(0xC0D640E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
            }
            return ((int (*)(int, int, int, int))(0xC0D640E))(0x9, 0xC7F302C, 0x5A, (a4 + 0x4A));
        }
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    return ((int (*)(int, int, int, int))(0xC0D642E))(0x9, 0xC7F302C, 0x5A, a7);
}

int FUN_0c03d6f4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t4;
    register int t9;
    register int t16;
    register float u29;
    register float u34;
    register float u39;
    register int t40;
    register int t54;
    register float u67;
    register float u72;
    register float u77;
    register int t78;
    register int t82;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t0 + 0x1C)));
    t2 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) - 30037);
    t4 = (((struct o2E4_int *)(a4))->v);
    *(unsigned int *)((t4 + 0x14)) = ((*(int *)((t4 + 0x14))) + 0x78E3);
    if ((*(signed char *)((t0 + 0x8))) == 2) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        *(unsigned char *)((a4 + 0x9)) = 0x0;
    }
    t9 = *(signed char *)((a4 + 0x8));
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
            t82 = (FUN_0c059330(a4, a5, a6, a7));
        } else {
            (((struct o54_float *)(a4))->v) = ((_builtin_fabsf(((((struct o4_float *)((0x308 + t0)))->v))) / 10.0f) / 100.0f);
            t16 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t16 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
            (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(t0))->v)) - (*(float *)(((int)stk + 20))));
            (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o24_float *)(t0))->v)) - (*(float *)(((int)stk + 24))));
            (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o28_float *)(t0))->v)) - (*(float *)(((int)stk + 28))));
            u29 = (*(float *)(((int)stk + 20)));
            u29 = u29 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)(((int)stk + 0)))->v)) / 10.0f));
            (((struct o20_float *)(a4))->v) = u29;
            u34 = (*(float *)(((int)stk + 24)));
            u34 = u34 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o4_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
            (((struct o24_float *)(a4))->v) = u34;
            u39 = (*(float *)(((int)stk + 28)));
            u39 = u39 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
            (((struct o28_float *)(a4))->v) = u39;
            t40 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t40 - 1);
            t82 = 0xEC;
            if ((short)(t40 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x1)) = 0x0;
                t82 = 0x0;
            }
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x258;
        (((struct o50_float *)(a4))->v) = 1.0f;
        (((struct o58_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = ((_builtin_fabsf(((((struct o4_float *)((0x308 + t0)))->v))) / 10.0f) / 100.0f);
        t54 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t54 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580));
        (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(t0))->v)) - (*(float *)(((int)stk + 20))));
        (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o24_float *)(t0))->v)) - (*(float *)(((int)stk + 24))));
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o28_float *)(t0))->v)) - (*(float *)(((int)stk + 28))));
        u67 = (*(float *)(((int)stk + 20)));
        u67 = u67 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)(((int)stk + 0)))->v)) / 10.0f));
        (((struct o20_float *)(a4))->v) = u67;
        u72 = (*(float *)(((int)stk + 24)));
        u72 = u72 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o4_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
        (((struct o24_float *)(a4))->v) = u72;
        u77 = (*(float *)(((int)stk + 28)));
        u77 = u77 + (float)(*(signed char *)((a4 + 0x4))) * ((((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)) / 10.0f));
        (((struct o28_float *)(a4))->v) = u77;
        t78 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t78 - 1);
        t82 = 0xEC;
        if ((short)(t78 - 1) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            t82 = 0x0;
        }
    }
    return t82;
}

int FUN_0c0a8bb4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

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
        t0 = 0x0;
        for (;;) {
            t1 = 0x3;
            if ((int)t0 < (int)0x2) {
                t1 = 0x1;
            }
            FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A60, (t1 + 0x25));
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x2)) = 0x3F;
            *(volatile int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            FUN_0c0e6fe8();
            t1 = (t0 << 2);
            t0 = (t0 + 0x1);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 2.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 2.0f;
            (((struct o24_float *)((*(int *)(((t1 + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        (((struct oEC_ushort *)(a4))->v) = 0x10;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)((t0 - 1) + 0x1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        t1 = 0x2EC;
    }
    t0 = t1;
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0c4e28(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t18;
    register int t24;
    register float t49;
    register float u52;
    register float t54;
    register float u57;
    register int t65;
    register int t71;
    register int t87;
    int t23;
    int t70;

    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x1)));
    t2 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + 0x1555);
    t4 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t4 + 0x10)) = ((*(int *)((t4 + 0x10))) & 0xFFFF);
    t6 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t6 + 0x14)) = ((*(int *)((t6 + 0x14))) + 0x71C);
    t8 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t8 + 0x14)) = ((*(int *)((t8 + 0x14))) & 0xFFFF);
    t10 = *(signed char *)((a4 + 0x8));
    if (t10 != 0) {
        if (t10 != 1) {
            t87 = (FUN_0c059330(a4, a5, a6, a7));
        } else {
            (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
            if ((int)((((struct oEE_short *)(a4))->v)) <= (int)0x5) {
                (((struct o107_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct o107_uchar *)(a4))->v) = 0x0;
            }
            *(volatile short *)((a4 + 0xEC));
            t18 = ((int (*)(int))(FUN_0c0e6e5c))(0xFFFF);
            if (t18 == 0) {
                *(float *)(((int)stk + 8)) = 0.199999988f;
                *(float *)(((int)stk + 4)) = 0.199999988f;
                *(float *)(((int)stk + 0)) = 0.199999988f;
                FUN_0c0c4fbe(a4, 0x0, (a4 + 0x20), ((int)stk + 0));
            }
            if (((*(signed char *)((a4 + 0x2A8))) == 0) && (t23 = *(signed char *)((a4 + 0x2D8)), t23 == 0)) {
                t24 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t24 - 1);
                if ((short)(t24 - 1) == 0) {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                }
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                FUN_0c0b6368((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x57, 0.399999976f);
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
            t87 = 0x24;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t49 = FUN_0c0dfa50((*(int *)((a4 + 0x30))));
        u52 = (t49 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        (((struct o38_float *)(a4))->v) = (u52 * 50.0f);
        t54 = FUN_0c0df4d0((*(int *)((a4 + 0x30))));
        u57 = (t54 * (FUN_0c0df4d0((*(int *)((a4 + 0x2C))))));
        (((struct o40_float *)(a4))->v) = (u57 * 50.0f);
        (((struct o3C_float *)(a4))->v) = (-((FUN_0c0dfa50((*(int *)((a4 + 0x2C))))) * 50.0f));
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        if ((int)((((struct oEE_short *)(a4))->v)) <= (int)0x5) {
            (((struct o107_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o107_uchar *)(a4))->v) = 0x0;
        }
        *(volatile short *)((a4 + 0xEC));
        t65 = ((int (*)(void))(FUN_0c0e6e5c))();
        if (t65 == 0) {
            *(float *)(((int)stk + 8)) = 0.199999988f;
            *(float *)(((int)stk + 4)) = 0.199999988f;
            *(float *)(((int)stk + 0)) = 0.199999988f;
            FUN_0c0c4fbe(a4, 0x0, (a4 + 0x20), ((int)stk + 0));
        }
        if (((*(signed char *)((a4 + 0x2A8))) == 0) && (t70 = *(signed char *)((a4 + 0x2D8)), t70 == 0)) {
            t71 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t71 - 1);
            if ((short)(t71 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        } else {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            FUN_0c0b6368((a4 + 0x20), (*(signed char *)((a4 + 0x3))), 0x57, 0.399999976f);
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        t87 = 0x24;
    }
    return t87;
}

int FUN_0c0b0b12(int a4, int a5, int a6, int a7, float f4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_5 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
    v0_4 = *(signed char *)((v0_5 + 0x8));
    v0_6 = (v0_4);
    v0_0 = (0xC0DF940);
    v0_0 = (0x3C);
    v0_1 = (0x0);
    v0_2 = (0x5);
    v0_3 = (v0_5);
    w0_0 = (255.0f);
    if ((v0_4 == 0)) goto L_C0B0B44;
    if ((v0_6 == 1)) goto L_C0B0BC0;
    L_C0B0C88:;
    return v0_6;
    L_C0B0BC0:;
    v0_4 = (v0_1);
    v0_3 = ((v0_3 + 0x2E0));
    L_C0B0BC6:;
    v0_5 = *(int *)((v0_3 + 0x0));
    v0_8 = *(int *)((v0_5 + 0x28));
    v0_6 = (v0_8);
    v0_7 = (v0_5);
    v0_5 = (0xB6);
    v0_3 = ((v0_3 + 0x4));
    if ((v0_8 == 0)) goto L_C0B0BE8;
    if ((v0_6 == 1)) goto L_C0B0BF6;
    if ((v0_6 == 2)) goto L_C0B0C10;
    if ((v0_6 == 3)) goto L_C0B0BF6;
    if ((v0_6 == 4)) goto L_C0B0C10;
    L_C0B0C82:;
    v0_5 = (int)(v0_4 + 0x1) < (int)v0_2;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C0B0BC6;
    goto L_C0B0C88;
    L_C0B0C10:;
    *(unsigned int *)((v0_7 + 0x10)) = ((*(int *)((v0_7 + 0x10))) - v0_5);
    w0_2 = (((struct o2C_float *)(v0_7))->v);
    (((struct o2C_float *)(v0_7))->v) = (w0_2 - 1.0f);
    v0_6 = (0x2C);
    w0_1 = (0.0f);
    if (((w0_2 - 1.0f) != 0.0f)) goto L_C0B0C82;
    *(unsigned int *)((v0_7 + 0x10)) = v0_1;
    if (((*(int *)((v0_7 + 0x28))) != 4)) goto L_C0B0C70;
    w0_3 = FUN_0c0df940();
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_3 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * w0_0))) goto L_C0B0C48;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C0B0C48:;
    v0_5 = FUN_0c0e6f24(v0_5);
    *(unsigned int *)((v0_7 + 0x38)) = ((v0_5 + 0x5) * v0_0);
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = v0_1;
    v0_6 = (((v0_5 + 0x5) * v0_0));
    goto L_C0B0C82;
    L_C0B0C70:;
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = ((*(int *)(((v0_7 + 0x28) + 0x0))) + 0x1);
    (((struct o2C_float *)(v0_7))->v) = 20.0f;
    v0_6 = (0x2C);
    w0_1 = (20.0f);
    goto L_C0B0C82;
    L_C0B0BF6:;
    *(unsigned int *)((v0_7 + 0x10)) = ((*(int *)((v0_7 + 0x10))) + v0_5);
    w0_2 = (((struct o2C_float *)(v0_7))->v);
    (((struct o2C_float *)(v0_7))->v) = (w0_2 - 1.0f);
    v0_6 = (0x2C);
    w0_1 = (0.0f);
    if (((w0_2 - 1.0f) == 0.0f)) goto L_C0B0C70;
    goto L_C0B0C82;
    L_C0B0BE8:;
    v0_5 = *(int *)((v0_7 + 0x38));
    *(unsigned int *)((v0_7 + 0x38)) = (v0_5 - 1);
    if (((v0_5 - 1) == 0)) goto L_C0B0C70;
    goto L_C0B0C82;
    L_C0B0B44:;
    *(unsigned char *)((v0_3 + 0x8)) = ((*(signed char *)((v0_3 + 0x8))) + 0x1);
    *(unsigned int *)(((int)stk + 0)) = (0x2E0 + v0_3);
    v0_4 = (v0_1);
    L_C0B0BBC:;
    if (((int)v0_4 < (int)v0_2)) goto L_C0B0B84;
    goto L_C0B0BC0;
    L_C0B0B84:;
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x4);
    v0_6 = *(int *)((((v0_6 + 0x4) - 4) + 0x0));
    w0_3 = FUN_0c0df940();
    v0_7 = (v0_6);
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_3 * w0_0));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_3 * w0_0))) goto L_C0B0BA2;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C0B0BA2:;
    *(unsigned int *)((v0_7 + 0x38)) = (((FUN_0c0e6f24(v0_5)) + 0x5) * v0_0);
    *(unsigned int *)(((v0_7 + 0x28) + 0x0)) = v0_1;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0B0BBC;
}

int FUN_0c0fc812(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[2];

    register int R1;
    register int R2;
    int R4;
    int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    R5 = a5;
    v0_2 = a6;
    v0_6 = a7;
    v0_0 = (R5);
    v0_1 = (R4);
    if (((0x1F & R5) == 0)) goto L_C0FC82E;
    v0_7 = (0x7);
    L_C0FC98E:;
    return v0_7;
    L_C0FC82E:;
    v0_3 = *(int *)((v0_1 + 0x18));
    R4 = (0x1);
    R5 = (v0_3);
    if (((v0_3 & 0x1) != 0)) goto L_C0FC878;
    if (((0x4 & R5) != 0)) goto L_C0FC878;
    if (((0x8 & R5) != 0)) goto L_C0FC878;
    if (((0x20 & R5) != 0)) goto L_C0FC878;
    if ((((*(int *)((v0_1 + 0x8))) & 0x18000000) == 0)) goto L_C0FC878;
    v0_7 = (a8);
    R5 = (0x0);
    if ((a8 == 3)) goto L_C0FC862;
    if ((v0_7 != 6)) goto L_C0FC878;
    v0_4 = (R5);
    L_C0FC864:;
    if (((int)v0_2 < (int)R4)) goto L_C0FC878;
    if (((int)v0_2 > (int)0x40)) goto L_C0FC878;
    if (((int)v0_6 < (int)R4)) goto L_C0FC878;
    if (!(((int)v0_6 <= (int)0x40))) goto L_C0FC878;
    v0_7 = ((v0_2 * v0_6));
    if (((int)(v0_2 * v0_6) < (int)0x2)) goto L_C0FC88E;
    v0_3 = (v0_6);
    R5 = (R4);
    v0_2 = ((v0_2 - 1));
    goto L_C0FC89C;
    L_C0FC878:;
    v0_7 = (0x4);
    goto L_C0FC98E;
    L_C0FC89C:;
    v0_5 = ((v0_2 + 0x1) * ((v0_3 - 1) + 0x1));
    v0_3 = ((v0_3 - 1));
    v0_6 = v0_5;
    if ((v0_4 != 0)) goto L_C0FC8F2;
    if ((R5 != 0)) goto L_C0FC8E0;
    v0_5 = (v0_6);
    v0_6 = (v0_6);
    L_C0FC8E4:;
    v0_5 = (((((((v0_5 << 1) + v0_6) << 2) << 2) << 2) << 1));
    L_C0FC900:;
    kmiWriteRegister(0x14C, ((((((v0_4 & R4) << 16) << 8) | ((R5 & R4) << 16)) | ((v0_3 & 0x3F) << 8)) | (v0_2 & 0x3F)));
    kmiWriteRegister(0x148, ((*(int *)((v0_1 + 0x1C))) & 0xFFFFF8));
    v0_4 = (0xC10B7B0);
    v0_3 = (0x10800000);
    v0_1 = (0x100);
    L_C0FC934:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_2 = FUN_0c10b7b0(v0_3, v0_0, v0_5, 0x18, ((int)stk + 4));
    R4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    R5 = (v0_2);
    if ((v0_2 == v0_1)) goto L_C0FC934;
    if ((R5 == 0)) goto L_C0FC980;
    v0_7 = (0x8);
    goto L_C0FC98E;
    L_C0FC980:;
    if ((a9 != 1)) goto L_C0FC98C;
    FUN_0c10bbb4(R4);
    L_C0FC98C:;
    v0_7 = (0x0);
    goto L_C0FC98E;
    L_C0FC8E0:;
    v0_5 = (v0_7);
    v0_6 = (v0_7);
    goto L_C0FC8E4;
    L_C0FC8F2:;
    if ((R5 != 0)) goto L_C0FC8FA;
    v0_5 = (v0_6);
    L_C0FC8FC:;
    v0_5 = (((v0_5 << 8) << 1));
    goto L_C0FC900;
    L_C0FC8FA:;
    v0_5 = (v0_7);
    goto L_C0FC8FC;
    L_C0FC88E:;
    v0_3 = (((unsigned int)((unsigned int)(*(int *)((v0_1 + 0x10))) >> 2) >> 2));
    v0_2 = ((((unsigned int)((unsigned int)(*(int *)((v0_1 + 0xC))) >> 2) >> 2) - 1));
    goto L_C0FC89C;
    L_C0FC862:;
    v0_4 = (R4);
    goto L_C0FC864;
}

int FUN_0c06c326(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06C2AC))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06C1C8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06C15E))(a4, a5, a6, a7);
}
