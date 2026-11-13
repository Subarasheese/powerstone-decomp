/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c043bdc-0c044094) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
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
extern int _modls();
int thunk_FUN_0c062242(int, int);

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
    register int t45;
    register int t49;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t79;
    register int t80;
    register int t82;
    register int t98;
    register int t111;
    register int t134;
    register int t34;
    register int t39;
    register int t137;
    register float u77;
    register float u78;
    register int t88;
    register int t89;
    register int t90;
    register int t91;
    register float u92;
    register float u93;

    if ((*(signed char *)((0x7226 + (*(int *)((a4 + 0x1C)))))) != 64) {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
        t34 = 0x7226;
        t39 = a4;
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
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)t8 * (short)0xB0)), (t6 + 0x4));
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
            (((struct oF2_ushort *)(a4))->v) = ((int)((int)(((((struct oF2_short *)(a4))->v)) + 0x1) % (int)0x8));
            t34 = (0xF2 + a4);
        }
    }
    t45 = (((struct o7228_short *)((*(int *)((a4 + 0x1C)))))->v);
    if ((t45 == 0) && (t74 = (((struct oEE_short *)(a4))->v), t74 == 0)) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    } else {
        t74 = t45;
    }
    t49 = *(signed char *)((a4 + 0x8));
    if (t49 != 0) {
        if (t49 == 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t137 = (obj_destroy(a4));
        } else {
            if (t49 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t137 = (obj_destroy(a4));
            } else {
                t137 = t49;
                if (t49 == 3) {
                    t137 = (obj_destroy(a4));
                }
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + a4);
        t73 = t34;
        t75 = (0x2E0 + a4);
        t76 = t39;
        for (;;) {
            t79 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t79 + 0x4);
            t80 = *(int *)((((t79 + 0x4) - 4) + 0x0));
            if ((*(signed char *)(((t80 + 0x34) + 0x4))) != 0) {
                t82 = *(signed char *)(((t80 + 0x34) + 0x5));
                *(unsigned char *)(((t80 + 0x34) + 0x5)) = (t82 - 1);
                if ((signed char)(t82 - 1) == 0) {
                    t75 = 0xC0E6E5C;
                    *(unsigned char *)(((t80 + 0x34) + 0x5)) = 0x2;
                    t73 = (*(signed char *)(((t80 + 0x34) + 0x6)));
                    t73 = (t73 + 0x1);
                    *(unsigned char *)(((t80 + 0x34) + 0x6)) = ((int)((int)t73 % (int)0x4));
                    t75 = 0xC06231C;
                    t76 = t80;
                    FUN_0c06231c(t76, 0xC4CFA68, ((*(signed char *)(((t80 + 0x34) + 0x6))) + 0x75));
                } else {
                    t88 = t73;
                    t89 = t74;
                    t90 = t75;
                    t91 = t76;
                    u92 = u77;
                    u93 = u78;
                }
                u77 = u92;
                u78 = u93;
                t73 = t88;
                t74 = t89;
                t75 = t90;
                t76 = t91;
                t74 = ((((struct oEE_short *)(a4))->v));
                if (t74 != 0) {
                    if ((*(signed char *)(((t80 + 0x34) + 0x9))) == 0) {
                        t98 = *(signed char *)(((t80 + 0x34) + 0x7));
                        *(unsigned char *)(((t80 + 0x34) + 0x7)) = (t98 - 1);
                        if ((signed char)(t98 - 1) == 0) {
                            *(unsigned char *)(((t80 + 0x34) + 0x7)) = (*(signed char *)((0xC14A604 + ((*(signed char *)(((t80 + 0x34) + 0x8))) << 1))));
                            *(unsigned char *)(((t80 + 0x34) + 0x9)) = ((*(signed char *)(((t80 + 0x34) + 0x9))) + 0x1);
                            *(unsigned char *)((t80 + 0x0)) = 0x0;
                            u77 = ((((struct o1C_float *)(t80))->v));
                            u78 = ((((struct o34_float *)(t80))->v));
                            u77 = (u77 - u78);
                            (((struct o1C_float *)(t80))->v) = u77;
                            u77 = ((((struct o20_float *)(t80))->v));
                            u78 = ((((struct o34_float *)(t80))->v));
                            u77 = (u77 - u78);
                            (((struct o20_float *)(t80))->v) = u77;
                            u77 = ((((struct o24_float *)(t80))->v));
                            u78 = ((((struct o34_float *)(t80))->v));
                            u77 = (u77 - u78);
                            (((struct o24_float *)(t80))->v) = u77;
                        }
                    } else {
                        t111 = *(signed char *)(((t80 + 0x34) + 0x7));
                        *(unsigned char *)(((t80 + 0x34) + 0x7)) = (t111 - 1);
                        if ((signed char)(t111 - 1) == 0) {
                            *(unsigned char *)(((t80 + 0x34) + 0x7)) = (*(signed char *)(((((*(signed char *)(((t80 + 0x34) + 0x8))) << 1) + 0xC14A604) + 0x1)));
                            *(unsigned char *)(((t80 + 0x34) + 0x8)) = ((*(signed char *)(((t80 + 0x34) + 0x8))) + 0x1);
                            *(unsigned char *)(((t80 + 0x34) + 0x9)) = 0x0;
                            *(unsigned char *)((t80 + 0x0)) = 0x1;
                            t75 = (*(signed char *)(((t80 + 0x34) + 0x8)));
                            u78 = (float)t75;
                            if (!(4.0f > u78)) {
                                *(unsigned char *)(((t80 + 0x34) + 0x4)) = 0x0;
                                t75 = ((((struct oF0_short *)(a4))->v));
                                t75 = (t75 - 1);
                                (((struct oF0_ushort *)(a4))->v) = t75;
                                *(unsigned char *)((t80 + 0x0)) = 0x0;
                            }
                        }
                    }
                }
            }
            t74 = (*(int *)(((int)stk + 0)));
            t74 = (t74 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t74;
            if ((int)t74 >= (int)0x8) {
                break;
            }
        }
        t137 = 0xF0;
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            t134 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t134 + 0x1);
            t137 = (t134 + 0x1);
        }
    }
    return t137;
}
