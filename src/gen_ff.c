/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0437fe(int, int);
int FUN_0c059330(int, int, int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6f24(void);
int FUN_0c0438a4(int a4, int a5, int a6, int a7);

int FUN_0c0438a4(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t13;
    register int t16;
    register int t18;
    register int t19;
    register int t21;
    register int t23;
    register int t26;
    register int t28;
    register int t34;
    register int t35;
    register int t36;
    register int t43;
    register int t45;
    register int t52;
    register float u56;
    register int t59;
    register int t64;
    register int t69;
    register int t75;
    register float u79;
    register int t82;
    register int t84;
    register int t85;
    register int t87;
    register int t89;
    register int t91;
    register int t94;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                FUN_0c0437fe(a4, t1);
                t3 = *(int *)((((0x2E0 + a4) + ((signed char)t1 << 2)) + 0x0));
                t4 = ((signed char)t1 << 2);
                t1 = (t1 + 0x1);
                (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.0625f);
                t6 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
                (((struct o20_float *)(t6))->v) = (((((struct o20_float *)(t6))->v)) + 0.0625f);
                t8 = *(int *)(((t4 + (0x2E0 + a4)) + 0x0));
                (((struct o24_float *)(t8))->v) = (((((struct o24_float *)(t8))->v)) + 0.0625f);
                if ((int)(signed char)t1 >= (int)0x3) {
                    break;
                }
            }
            t10 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t10 - 1);
            t13 = (short)(t10 - 1);
            if ((short)(t10 - 1) == 25) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
                (((struct o5C_float *)(a4))->v) = 1.0f;
                t13 = 0x5C;
            }
            return t13;
        }
        if (t0 == 2) {
            t16 = 0x0;
            for (;;) {
                FUN_0c0437fe(a4, t16);
                t18 = *(int *)((((0x2E0 + a4) + ((signed char)t16 << 2)) + 0x0));
                t19 = ((signed char)t16 << 2);
                t16 = (t16 + 0x1);
                (((struct o1C_float *)(t18))->v) = (((((struct o1C_float *)(t18))->v)) + 0.0625f);
                t21 = *(int *)((((0x2E0 + a4) + t19) + 0x0));
                (((struct o20_float *)(t21))->v) = (((((struct o20_float *)(t21))->v)) + 0.0625f);
                t23 = *(int *)(((t19 + (0x2E0 + a4)) + 0x0));
                (((struct o24_float *)(t23))->v) = (((((struct o24_float *)(t23))->v)) + 0.0625f);
                if ((int)(signed char)t16 >= (int)0x3) {
                    break;
                }
            }
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + -0.0399999991f);
            t26 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t26 - 1);
            t28 = 0xEC;
            if ((short)(t26 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o5C_float *)(a4))->v) = 0.0f;
                t28 = 0x5C;
            }
            return t28;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    if ((*(signed char *)0xC7F2F0F) == 0) {
        (((struct o60_float *)(a4))->v) = 0.75f;
        (((struct o64_float *)(a4))->v) = 0.0f;
        (((struct o68_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o60_float *)(a4))->v) = 1.0f;
        (((struct o64_float *)(a4))->v) = 1.0f;
        (((struct o68_float *)(a4))->v) = 1.0f;
    }
    t34 = 0x0;
    t35 = 0x0;
    for (;;) {
        t36 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        (((struct o24_float *)(t36))->v) = 0.25f;
        (((struct o20_float *)(t36))->v) = 0.25f;
        (((struct o1C_float *)(t36))->v) = 0.25f;
        FUN_0c0df940();
        
        t43 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)((t43 + 0x14)) = ((*(int *)((t43 + 0x14))) + (int)(((float)(short)((FUN_0c0e6f24()) - 11) * 65536.0f) / 360.0f));
        t45 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)((t45 + 0x14)) = ((*(int *)((t45 + 0x14))) & 0xFFFF);
        FUN_0c0df940();
        
        t52 = FUN_0c0e6f24();
        u56 = (float)(t52 << 1);
        if ((int)(t52 << 1) < 0) {
            u56 = ((float)(t52 << 1) + 4.2949673e+09f);
        }
        *(float *)(((int)stk + 8)) = (u56 + 2.0f);
        t59 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t59;
        *(int *)((int)stk + 0) = (0x28 + t59);
        (((struct o28_float *)(t59))->v) = ((FUN_0c0dfa50((*(int *)(((*(int *)(((int)stk + 4))) + 0x14))))) * (*(float *)(((int)stk + 8))));
        t64 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t64;
        *(int *)((int)stk + 0) = (0x30 + t64);
        (((struct o30_float *)(t64))->v) = ((FUN_0c0df4d0((*(int *)(((*(int *)(((int)stk + 4))) + 0x14))))) * (*(float *)(((int)stk + 8))));
        t69 = *(int *)((((0x2E0 + a4) + t35) + 0x0));
        *(int *)((int)stk + 0) = (0x2C + t69);
        FUN_0c0df940();
        
        t75 = FUN_0c0e6f24();
        u79 = (float)(t75 << 1);
        if ((int)(t75 << 1) < 0) {
            u79 = ((float)(t75 << 1) + 4.2949673e+09f);
        }
        t34 = (t34 + 0x1);
        (((struct o2C_float *)(t69))->v) = (u79 + 4.0f);
        t35 = (t35 + 0x4);
        if ((int)(signed char)t34 < (int)0x3) continue;
        break;
    }
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -0.75f;
    t82 = 0x0;
    for (;;) {
        FUN_0c0437fe(a4, t82);
        t84 = *(int *)((((0x2E0 + a4) + ((signed char)t82 << 2)) + 0x0));
        t85 = ((signed char)t82 << 2);
        t82 = (t82 + 0x1);
        (((struct o1C_float *)(t84))->v) = (((((struct o1C_float *)(t84))->v)) + 0.0625f);
        t87 = *(int *)((((0x2E0 + a4) + t85) + 0x0));
        (((struct o20_float *)(t87))->v) = (((((struct o20_float *)(t87))->v)) + 0.0625f);
        t89 = *(int *)(((t85 + (0x2E0 + a4)) + 0x0));
        (((struct o24_float *)(t89))->v) = (((((struct o24_float *)(t89))->v)) + 0.0625f);
        if ((int)(signed char)t82 >= (int)0x3) {
            break;
        }
    }
    t91 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t91 - 1);
    t94 = (short)(t91 - 1);
    if ((short)(t91 - 1) == 25) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x400);
        (((struct o5C_float *)(a4))->v) = 1.0f;
        t94 = 0x5C;
    }
    return t94;
}
