/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[12]; } Stk12;
int syRtcMakeAgeOfMoon(void);
extern int syRtcMakeDayOfWeek();
int FUN_0c115fb8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int syRtcCountToDate(int a4, int a5);

int FUN_0c115fb8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register int t25;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u31;
    register float u33;
    register int t34;
    register int t36;
    register int t37;
    register float u38;
    register float u41;
    register float u42;
    register float u44;
    register int t12;
    register float u13;
    register float u14;

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t8 = 0x0;
    t9 = a6;
    t10 = a4;
    t11 = a8;
    u15 = (float)(t1 << 16);
    u16 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u17 = 65536.0f;
    u18 = f5;
    u19 = f6;
    u20 = (float)(t0 << 16);
    u21 = (float)(t2 << 16);
    u22 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 12)))) {
            t25 = *(short *)((t10 + 0x0));
            if (((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(int)(((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u19 = u16;
            t26 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u15);
                t27 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC15BC00;
                u28 = u16;
                u28 = u28 + u13 * u20;
                u16 = u28;
                u17 = (*(float *)((((unsigned char)t27 << 2) + t8)));
                t12 = ((unsigned char)t27 << 2);
                u13 = u19;
                u18 = u20;
                u30 = u16;
                u30 = u30 + u13 * u17;
                u16 = u30;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC15C000;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u15 = u14;
                u31 = u16;
                u31 = u31 + u13 * u14;
                u16 = u31;
                u13 = u19;
                *(unsigned short *)((t9 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t9 = (t9 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u33 = u16;
                u33 = u33 + u13 * u17;
                u16 = u33;
                u17 = u16;
                u20 = u16;
                t26 = (t26 + 0x2);
                *(unsigned short *)((t9 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t9 = (t9 + 0x2);
                if ((int)t26 >= (int)0x20) {
                    break;
                }
            }
            t34 = *(short *)((t10 + 0x0));
            t12 = t34;
            t12 = ((int)t12 >> 8);
            t12 = (unsigned char)t12;
            t12 = (t12 | ((t34 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t12) != 0) {
                t8 = (*(int *)(((int)stk + 8)));
                return t8;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(((short)t12 & 0x1FFF) + 0x1);
            u19 = u16;
            t36 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u22);
                t37 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC15BC00;
                u38 = u16;
                u38 = u38 + u13 * u21;
                u16 = u38;
                u17 = (*(float *)((((unsigned char)t37 << 2) + t8)));
                t12 = ((unsigned char)t37 << 2);
                u13 = u19;
                u18 = u21;
                u41 = u16;
                u41 = u41 + u13 * u17;
                u16 = u41;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC15C000;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u22 = u14;
                u42 = u16;
                u42 = u42 + u13 * u14;
                u16 = u42;
                u13 = u19;
                *(unsigned short *)((t11 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t11 = (t11 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u44 = u16;
                u44 = u44 + u13 * u17;
                u16 = u44;
                u17 = u16;
                u21 = u16;
                t36 = (t36 + 0x2);
                *(unsigned short *)((t11 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t11 = (t11 + 0x2);
                if ((int)t36 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2);
            continue;
        }
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x0)) = (short)((unsigned int)(int)u15 >> 16);
        *(unsigned short *)((a9 + 0x0)) = ((unsigned int)(int)u21 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u22 >> 16);
        t8 = a5;
        return t8;
    }
    return (*(int *)(((int)stk + 4)));
}

int syRtcCountToDate(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t19;
    register int t20;
    register int t24;
    register int t29;
    register int t36;
    register int t41;
    register int t48;
    register int t53;
    register int t57;
    register int t67;
    register int t68;
    register int t78;
    register int t16;
    register int t65;
    int t30;
    int t42;
    int t70;

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 0)) = *(struct mv12 *)(0xC155BB8); }
    *(unsigned char *)((a5 + 0x6)) = ((int)((unsigned int)a4 % (unsigned int)0x3C));
    t1 = (int)((unsigned int)a4 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x5)) = ((int)((unsigned int)t1 % (unsigned int)0x3C));
    t3 = (int)((unsigned int)t1 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x4)) = ((int)((unsigned int)t3 % (unsigned int)0x18));
    t5 = (int)((unsigned int)t3 / (unsigned int)0x18);
    t6 = (int)((unsigned int)t5 / (unsigned int)0x16D);
    t7 = (int)((unsigned int)t5 % (unsigned int)0x16D);
    if ((unsigned int)((unsigned int)(t6 + 0x1) >> 2) <= (unsigned int)t7) {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79E);
        t16 = (t7 - ((unsigned int)(t6 + 0x1) >> 2));
    } else {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79D);
        t8 = *(short *)((a5 + 0x0));
        t9 = ((~(((~(unsigned short)t8) + 0x1) & 0x3)) + 0x1);
        if ((int)(unsigned short)t8 >= 0) {
            t9 = ((unsigned short)t8 & 0x3);
        }
        t16 = (t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2)));
        if (t9 == 0) {
            t16 = ((t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2))) + 0x1);
        }
    }
    t19 = *(short *)((a5 + 0x0));
    t20 = ((~(((~(unsigned short)t19) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t19 >= 0) {
        t20 = ((unsigned short)t19 & 0x3);
    }
    if (t20 == 0) {
        if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + 0x4)))) {
            t24 = 0x2;
            for (;;) {
                if ((unsigned int)t16 >= (unsigned int)((*(int *)((((int)stk + 0) + (t24 << 2)))) + 0x1)) {
                    t24 = (t24 + 0x1);
                    if ((unsigned int)t24 >= (unsigned int)0xC) {
                        break;
                    }
                    continue;
                }
                *(unsigned char *)((a5 + 0x2)) = t24;
                *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t24 - 1) << 2))))) + 0x1);
                t29 = *(short *)((a5 + 0x0));
                if ((int)(unsigned short)t29 >= 0) {
                    if ((((unsigned short)t29 & 0x3) == 0) && (t30 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t30 > (int)0x2)) {
                        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                        t24 = (*(short *)((a5 + 0x0)));
                        *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int, Stk12))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3))), *(Stk12 *)(((int)stk + 0))));
                        t24 = a5;
                        t36 = syRtcMakeAgeOfMoon();
                        *(unsigned char *)((a5 + 0x8)) = t36;
                        return t36;
                    }
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t41 = syRtcMakeAgeOfMoon();
                    *(unsigned char *)((a5 + 0x8)) = t41;
                    return t41;
                }
                if ((((~(((~(unsigned short)t29) + 0x1) & 0x3)) + 0x1) == 0) && (t42 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t42 > (int)0x2)) {
                    *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t48 = syRtcMakeAgeOfMoon();
                    *(unsigned char *)((a5 + 0x8)) = t48;
                    return t48;
                }
                t24 = (*(short *)((a5 + 0x0)));
                *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                t24 = a5;
                t53 = syRtcMakeAgeOfMoon();
                *(unsigned char *)((a5 + 0x8)) = t53;
                return t53;
            }
            t65 = t24;
        } else {
            t65 = 0x1;
        }
    } else {
        t57 = 0x1;
        for (;;) {
            if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + (t57 << 2))))) {
                t57 = (t57 + 0x1);
                if ((unsigned int)t57 >= (unsigned int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        t65 = t57;
    }
    *(unsigned char *)((a5 + 0x2)) = t65;
    *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t65 - 1) << 2))))) + 0x1);
    t67 = *(short *)((a5 + 0x0));
    t68 = ((~(((~(unsigned short)t67) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t67 >= 0) {
        t68 = ((unsigned short)t67 & 0x3);
    }
    if ((t68 == 0) && (t70 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t70 > (int)0x2)) {
        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
    }
    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))((*(short *)((a5 + 0x0))), (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
    t78 = syRtcMakeAgeOfMoon();
    *(unsigned char *)((a5 + 0x8)) = t78;
    return t78;
}
