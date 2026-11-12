/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c05923a(int, int, int, int, int);
int FUN_0c06233a(int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
int FUN_0c040a84(int a4, int a5, int a6, int a7);

int FUN_0c040a84(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t0;
    register int t3;
    register int t5;
    register int t6;
    register int t9;
    register int t11;
    register int t15;
    register int t16;
    register int t19;
    register int t111;
    register int t21;
    register int t23;
    register int t24;
    register int t26;
    register int t32;
    register int t34;
    register int t49;
    register int t50;
    register int t52;
    register int t56;
    register int t62;
    register float u65;
    register int t73;
    register float u76;
    register float u79;
    register int t86;
    register int t95;
    register float u98;
    register int t102;
    register int t104;
    register int t110;
    register int t10;

    *(unsigned char *)(((int)stk + 52)) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 56)) = a6;
    *(unsigned char *)(((int)stk + 64)) = a7;
    t0 = FUN_0c059132(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 52)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC040B6A;
        *(volatile int *)(((int)stk + 56));
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 5.0f);
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 60)));
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x14;
        (((struct oEE_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 64)));
        t9 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t9 + 0x0)) = t10;
        t11 = *(signed char *)(((int)stk + 52));
        FUN_0c06233a(t9, ((signed char)((((t11 << 1) + t11) << 2) << 1) + 0xC6002D0), 0xC);
        *(unsigned short *)((t9 + 0x2)) = 0x121F;
        t15 = ((int (*)(void))(FUN_0c0e6fe8))();
        t16 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o98_float *)(t9))->v) = 3.0f;
        *(int *)((int)stk + 76) = (t0);
        *(int *)((int)stk + 72) = (t9);
        *(int *)((int)stk + 0) = 0x0;
        t19 = FUN_0c05923a(0x5, t0, 0x1, 0xA, 0x0);
        t111 = t19;
        if (t19 != 0) {
            *(unsigned char *)((t19 + 0x0)) = 0x1;
            *(unsigned char *)((t19 + 0x3)) = (*(signed char *)((t0 + 0x3)));
            *(unsigned char *)((t19 + 0x1)) = 0x1;
            *(unsigned short *)((t19 + 0x6)) = 0xF;
            *(unsigned char *)((t19 + 0x5)) = 0x19;
            *(unsigned int *)((t19 + 0x10)) = 0xC0411B8;
            t21 = ((int (*)(void))(FUN_0c0e6fe8))();
            (((struct o24_float *)(t19))->v) = (((((struct o24_float *)(t19))->v)) + 5.0f);
            t23 = ((int (*)(void))(FUN_0c0e6fe8))();
            t24 = ((int (*)(void))(FUN_0c0e6fe8))();
            (((struct o118_uint *)(t19))->v) = 0x0;
            *(unsigned int *)((t19 + 0x1C)) = t0;
            (((struct oEC_ushort *)(t19))->v) = ((((struct oEC_short *)(t0))->v));
            *(unsigned int *)(((int)stk + 16)) = (0x308 + t19);
            t26 = 0x0;
            for (;;) {
                *(unsigned char *)((((((int)((unsigned int)((int)((unsigned int)t26 + (unsigned int)0x0)) + ((((int)0x0 > (int)t26)) ? 1u : 0u))) >> 1) + (*(int *)(((int)stk + 16)))) + 0x0)) = 0x0;
                t32 = *(int *)(((int)stk + 16));
                t34 = (int)((unsigned int)((int)((unsigned int)t26 + (unsigned int)0x0)) + ((((int)0x0 > (int)t26)) ? 1u : 0u));
                *(int *)((int)stk + 0) = ((t34 >> 1) + (t32 + 0x4));
                FUN_0c0df940();
                
                *(unsigned char *)((((t34 >> 1) + (t32 + 0x4)) + 0x0)) = ((FUN_0c0e6f24()) + 0x4);
                FUN_0c0df940();
                
                *(unsigned char *)(((int)stk + 8)) = (FUN_0c0e6f24());
                *(unsigned int *)(((int)stk + 12)) = (t26 << 2);
                t49 = *(int *)((((t26 << 2) + (0x2E0 + t19)) + 0x0));
                *(unsigned char *)((t49 + 0x0)) = 0x1;
                t50 = *(signed char *)(((int)stk + 8));
                *(unsigned char *)(((int)stk + 20)) = (t50 << 1);
                t52 = *(signed char *)((t19 + 0x3));
                FUN_0c06233a(t49, ((signed char)((((t52 << 1) + t52) << 2) << 1) + 0xC6002D0), ((t50 << 1) + 0x19));
                *(unsigned short *)((t49 + 0x2)) = 0x1F;
                t56 = ((int (*)(void))(FUN_0c0e6fe8))();
                (((struct o20_float *)(t49))->v) = 0.0f;
                FUN_0c0df940();
                
                t62 = FUN_0c0e6f24();
                u65 = (float)t62;
                if ((int)t62 < 0) {
                    u65 = ((float)t62 + 4.2949673e+09f);
                }
                *(unsigned int *)(((int)stk + 4)) = (int)((u65 * 737280.0f) / 360.0f);
                FUN_0c0df940();
                
                t73 = FUN_0c0e6f24();
                u76 = (float)t73;
                if ((int)t73 < 0) {
                    u76 = ((float)t73 + 4.2949673e+09f);
                }
                u79 = 100.0f;
                u79 = u79 + 10.0f * u76;
                *(float *)(((int)stk + 28)) = u79;
                (((struct o4_float *)(t49))->v) = ((FUN_0c0dfa50((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 28))));
                (((struct oC_float *)(t49))->v) = ((FUN_0c0df4d0((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 28))));
                (((struct o8_float *)(t49))->v) = 0.0f;
                t86 = *(signed char *)(((int)stk + 8));
                (((struct o2C_float *)(t49))->v) = (*(float *)(((((t86 << 2) << 1) + 0xC149B54) + 0x0)));
                (((struct o28_float *)(t49))->v) = ((((struct o4_float *)((((t86 << 2) << 1) + 0xC149B54)))->v));
                FUN_0c0df940();
                
                t95 = FUN_0c0e6f24();
                u98 = (float)t95;
                if ((int)t95 < 0) {
                    u98 = ((float)t95 + 4.2949673e+09f);
                }
                *(unsigned int *)((t49 + 0x14)) = (int)((u98 * 737280.0f) / 360.0f);
                t102 = *(int *)((((0x2E0 + t19) + (*(int *)(((int)stk + 12)))) + 0x4));
                *(unsigned char *)((t102 + 0x0)) = 0x1;
                t104 = *(signed char *)((t19 + 0x3));
                FUN_0c06233a(t102, ((signed char)((((t104 << 1) + t104) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((int)stk + 20))) + 0x1A));
                *(unsigned short *)((t102 + 0x2)) = 0x21F;
                (((struct o90_uint *)(t102))->v) = ((*(int *)((((0x2E0 + t19) + (*(int *)(((int)stk + 12)))) + 0x0))) + 0x50);
                t110 = ((int (*)(void))(FUN_0c0e6fe8))();
                t26 = (t26 + 0x2);
                if ((int)t26 < (int)0x8) continue;
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = 0x8;
            t111 = t110;
        }
        return t111;
    }
    return t0;
}
