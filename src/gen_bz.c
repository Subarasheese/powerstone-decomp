/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c042980(int, int);
int FUN_0c059330(int);
int FUN_0c06206e(int, int, int);
int FUN_0c06231c(int, int, int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e24f0(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int thunk_FUN_0c062242(int);
int FUN_0c046534(int a4);
int FUN_0c02a784(int a4);

int FUN_0c046534(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t4;
    register int t13;
    register int t27;
    register int t32;
    register int t58;
    register int t60;
    register int t74;
    register int t89;
    register int t124;
    int t2;
    int t28;
    register int t127;

    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71DD))) == 21) && (t2 = *(signed char *)((t0 + 0x9)), t2 == 1)) {
        t3 = (((struct o2E0_int *)(a4))->v);
        t4 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        FUN_0c06206e((((int)stk + 0) + 0x4), (((((struct o2E0_int *)(a4))->v)) + 0x4), 0xC7F2AB4);
        FUN_0c0e24f0((((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 30.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 30.0f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 30.0f);
        t13 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 0)) = t13;
        FUN_0c06206e(((*(int *)(((int)stk + 0))) + 0x4), (t13 + 0x4), (((int)stk + 0) + 0x4));
        if (((*(int *)0xC7F307C) & 7) == 0) {
            FUN_0c042980((*(signed char *)((a4 + 0x3))), ((*(int *)((((((((struct oF2_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x4));
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t27 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t27 - 1);
    if (((short)(t27 - 1) == 0) && (t28 = (((struct oEE_short *)(a4))->v), t28 == 0)) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    t32 = *(signed char *)((a4 + 0x8));
    if (t32 != 0) {
        if (t32 == 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t127 = (FUN_0c059330(a4));
        } else {
            if (t32 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t127 = (FUN_0c059330(a4));
            } else {
                t127 = t32;
                if (t32 == 3) {
                    t127 = (FUN_0c059330(a4));
                }
            }
        }
    } else {
        t58 = (((struct o2E0_int *)(a4))->v);
        if ((*(signed char *)(((t58 + 0x34) + 0x4))) != 0) {
            t60 = *(signed char *)(((t58 + 0x34) + 0x5));
            *(unsigned char *)(((t58 + 0x34) + 0x5)) = (t60 - 1);
            if ((signed char)(t60 - 1) == 0) {
                *(unsigned char *)(((t58 + 0x34) + 0x5)) = 0x2;
                *(volatile signed char *)(((t58 + 0x34) + 0x6));
                *(unsigned char *)(((t58 + 0x34) + 0x6)) = (FUN_0c0e6e5c((0x2E0 + a4)));
                FUN_0c06231c(t58, 0xC4CFA68, ((*(signed char *)(((t58 + 0x34) + 0x6))) + 0x75));
            }
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                if ((*(signed char *)(((t58 + 0x34) + 0x9))) == 0) {
                    t74 = *(signed char *)(((t58 + 0x34) + 0x7));
                    *(unsigned char *)(((t58 + 0x34) + 0x7)) = (t74 - 1);
                    if ((signed char)(t74 - 1) == 0) {
                        *(unsigned char *)(((t58 + 0x34) + 0x7)) = (*(signed char *)((0xC14A77C + ((*(signed char *)(((t58 + 0x34) + 0x8))) << 1))));
                        *(unsigned char *)(((t58 + 0x34) + 0x9)) = ((*(signed char *)(((t58 + 0x34) + 0x9))) + 0x1);
                        *(unsigned char *)((t58 + 0x0)) = 0x0;
                        (((struct o1C_float *)(t58))->v) = (((((struct o1C_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                        (((struct o20_float *)(t58))->v) = (((((struct o20_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                        (((struct o24_float *)(t58))->v) = (((((struct o24_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                    }
                } else {
                    t89 = *(signed char *)(((t58 + 0x34) + 0x7));
                    *(unsigned char *)(((t58 + 0x34) + 0x7)) = (t89 - 1);
                    if ((signed char)(t89 - 1) == 0) {
                        *(unsigned char *)(((t58 + 0x34) + 0x7)) = (*(signed char *)(((((*(signed char *)(((t58 + 0x34) + 0x8))) << 1) + 0xC14A77C) + 0x1)));
                        *(unsigned char *)(((t58 + 0x34) + 0x8)) = ((*(signed char *)(((t58 + 0x34) + 0x8))) + 0x1);
                        *(unsigned char *)(((t58 + 0x34) + 0x9)) = 0x0;
                        *(unsigned char *)((t58 + 0x0)) = 0x1;
                        if (!(4.0f > (float)(*(signed char *)(((t58 + 0x34) + 0x8))))) {
                            *(unsigned char *)(((t58 + 0x34) + 0x4)) = 0x0;
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                            *(unsigned char *)((t58 + 0x0)) = 0x0;
                        }
                    }
                }
            }
        }
        t127 = 0xF0;
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            t124 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t124 + 0x1);
            t127 = (t124 + 0x1);
        }
    }
    return t127;
}

int FUN_0c02a784(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        FUN_0c0df940();
        
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = -256.0f;
        u1 = u1 + 4.0f * u0;
        (((struct o44_float *)(a4))->v) = u1;
        FUN_0c0df940();
        
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = 30.0f;
        u1 = u1 + 90.0f * ((u0 / 128.0f));
        (((struct o48_float *)(a4))->v) = u1;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        FUN_0c0df940();
        
        (((struct oEC_ushort *)(a4))->v) = (((FUN_0c0e6f24()) << 8) << 2);
        FUN_0c0df940();
        
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o50_float *)(a4))->v) = ((u0 / 64.0f) + 0.75f);
        FUN_0c0df940();
        
        t0 = FUN_0c0e6f24();
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o54_float *)(a4))->v) = ((u0 / ((((struct o0_float *)0xC02AA2C)->v))) + ((((struct o4_float *)0xC02AA2C)->v)));
        FUN_0c0df940();
        
        *(unsigned int *)((a4 + 0x34)) = ((FUN_0c0e6f24()) << 13);
    }
    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
    u0 = (((struct o10_float *)0xC02AA2C)->v);
    if ((((((struct oF2_short *)(a4))->v)) & 4) != 0) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
        u1 = (((((struct o54_float *)(a4))->v)) + u0);
    } else {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - u0);
        u1 = (((((struct o54_float *)(a4))->v)) - u0);
    }
    (((struct o54_float *)(a4))->v) = u1;
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x38E);
    u0 = ((((struct o44_float *)(a4))->v));
    u0 = u0 + ((((struct o48_float *)(a4))->v)) * (FUN_0c0dfa50(((((struct oEC_short *)(a4))->v))));
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.5f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    if (((((struct o1C_float *)0xC02AA2C)->v)) > ((((struct o24_float *)(a4))->v))) {
        return FUN_0c059330(a4);
    }
    return 0x24;
}
