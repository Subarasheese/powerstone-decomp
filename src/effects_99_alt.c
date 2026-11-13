/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c043bdc-0c044094) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o7228_short { char p[0x7228]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c042980(int, int);
int obj_destroy(int);
int math_vec3_sub(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0e24f0(int);
extern int FUN_0c0e6e5c();
int thunk_FUN_0c062242(int);

int fx_tick_043bdc(int a4)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t17;
    register int t43;
    register int t47;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t77;
    register int t78;
    register int t80;
    register int t96;
    register int t109;
    register int t132;
    register int t33;
    register int t37;
    register int t135;
    register float u75;
    register float u76;
    register int t86;
    register int t87;
    register int t88;
    register int t89;
    register float u90;
    register float u91;

    if ((*(signed char *)((0x7226 + (*(int *)((a4 + 0x1C)))))) != 64) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t33 = 0x7226;
        t37 = a4;
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0xC7F29F8;
        t2 = 0x0;
        t3 = 0xC14A5FC;
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((a4 + 0x3));
            t6 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
            t8 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)t8 * (short)0xB0)));
            math_vec3_sub((((int)stk + 0) + 0x8), ((*(int *)((((0x2E0 + a4) + t4) + 0x0))) + 0x4), (((*(int *)(((int)stk + 4))) + 0xB0) + 0xC));
            FUN_0c0e24f0((((int)stk + 0) + 0x8));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 30.0f);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 30.0f);
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) * 30.0f);
            t17 = *(int *)((((0x2E0 + a4) + t4) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = t17;
            math_vec3_sub(((*(int *)(((int)stk + 0))) + 0x4), (t17 + 0x4), (((int)stk + 0) + 0x8));
            t2 = (t2 + 0x1);
            t4 = (t4 + 0x4);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        if (((*(int *)0xC7F307C) & 3) == 0) {
            FUN_0c042980((*(signed char *)((a4 + 0x3))), ((*(int *)((((((((struct oF2_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x4));
            *(volatile short *)((a4 + 0xF2));
            (((struct oF2_ushort *)(a4))->v) = (((int (*)(void))(FUN_0c0e6e5c))());
            t33 = (0xF2 + a4);
        }
    }
    t43 = (((struct o7228_short *)((*(int *)((a4 + 0x1C)))))->v);
    if ((t43 == 0) && (t72 = (((struct oEE_short *)(a4))->v), t72 == 0)) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    } else {
        t72 = t43;
    }
    t47 = *(signed char *)((a4 + 0x8));
    if (t47 != 0) {
        if (t47 == 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t135 = (obj_destroy(a4));
        } else {
            if (t47 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t135 = (obj_destroy(a4));
            } else {
                t135 = t47;
                if (t47 == 3) {
                    t135 = (obj_destroy(a4));
                }
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + a4);
        t71 = t33;
        t73 = (0x2E0 + a4);
        t74 = t37;
        for (;;) {
            t77 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t77 + 0x4);
            t78 = *(int *)((((t77 + 0x4) - 4) + 0x0));
            if ((*(signed char *)(((t78 + 0x34) + 0x4))) != 0) {
                t80 = *(signed char *)(((t78 + 0x34) + 0x5));
                *(unsigned char *)(((t78 + 0x34) + 0x5)) = (t80 - 1);
                if ((signed char)(t80 - 1) == 0) {
                    t73 = 0xC0E6E5C;
                    *(unsigned char *)(((t78 + 0x34) + 0x5)) = 0x2;
                    t71 = (*(signed char *)(((t78 + 0x34) + 0x6)));
                    t71 = (t71 + 0x1);
                    *(unsigned char *)(((t78 + 0x34) + 0x6)) = (((int (*)(int))(FUN_0c0e6e5c))(t74));
                    t73 = 0xC06231C;
                    t74 = t78;
                    FUN_0c06231c(t74, 0xC4CFA68, ((*(signed char *)(((t78 + 0x34) + 0x6))) + 0x75));
                } else {
                    t86 = t71;
                    t87 = t72;
                    t88 = t73;
                    t89 = t74;
                    u90 = u75;
                    u91 = u76;
                }
                u75 = u90;
                u76 = u91;
                t71 = t86;
                t72 = t87;
                t73 = t88;
                t74 = t89;
                t72 = ((((struct oEE_short *)(a4))->v));
                if (t72 != 0) {
                    if ((*(signed char *)(((t78 + 0x34) + 0x9))) == 0) {
                        t96 = *(signed char *)(((t78 + 0x34) + 0x7));
                        *(unsigned char *)(((t78 + 0x34) + 0x7)) = (t96 - 1);
                        if ((signed char)(t96 - 1) == 0) {
                            *(unsigned char *)(((t78 + 0x34) + 0x7)) = (*(signed char *)((0xC14A604 + ((*(signed char *)(((t78 + 0x34) + 0x8))) << 1))));
                            *(unsigned char *)(((t78 + 0x34) + 0x9)) = ((*(signed char *)(((t78 + 0x34) + 0x9))) + 0x1);
                            *(unsigned char *)((t78 + 0x0)) = 0x0;
                            u75 = ((((struct o1C_float *)(t78))->v));
                            u76 = ((((struct o34_float *)(t78))->v));
                            u75 = (u75 - u76);
                            (((struct o1C_float *)(t78))->v) = u75;
                            u75 = ((((struct o20_float *)(t78))->v));
                            u76 = ((((struct o34_float *)(t78))->v));
                            u75 = (u75 - u76);
                            (((struct o20_float *)(t78))->v) = u75;
                            u75 = ((((struct o24_float *)(t78))->v));
                            u76 = ((((struct o34_float *)(t78))->v));
                            u75 = (u75 - u76);
                            (((struct o24_float *)(t78))->v) = u75;
                        }
                    } else {
                        t109 = *(signed char *)(((t78 + 0x34) + 0x7));
                        *(unsigned char *)(((t78 + 0x34) + 0x7)) = (t109 - 1);
                        if ((signed char)(t109 - 1) == 0) {
                            *(unsigned char *)(((t78 + 0x34) + 0x7)) = (*(signed char *)(((((*(signed char *)(((t78 + 0x34) + 0x8))) << 1) + 0xC14A604) + 0x1)));
                            *(unsigned char *)(((t78 + 0x34) + 0x8)) = ((*(signed char *)(((t78 + 0x34) + 0x8))) + 0x1);
                            *(unsigned char *)(((t78 + 0x34) + 0x9)) = 0x0;
                            *(unsigned char *)((t78 + 0x0)) = 0x1;
                            t73 = (*(signed char *)(((t78 + 0x34) + 0x8)));
                            u76 = (float)t73;
                            if (!(4.0f > u76)) {
                                *(unsigned char *)(((t78 + 0x34) + 0x4)) = 0x0;
                                t73 = ((((struct oF0_short *)(a4))->v));
                                t73 = (t73 - 1);
                                (((struct oF0_ushort *)(a4))->v) = t73;
                                *(unsigned char *)((t78 + 0x0)) = 0x0;
                            }
                        }
                    }
                }
            }
            t72 = (*(int *)(((int)stk + 0)));
            t72 = (t72 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t72;
            if ((int)t72 >= (int)0x8) {
                break;
            }
        }
        t135 = 0xF0;
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            t132 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t132 + 0x1);
            t135 = (t132 + 0x1);
        }
    }
    return t135;
}
