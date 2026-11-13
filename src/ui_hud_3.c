/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02f328-0c02ff18) */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int ui_sprite_queue_add(int, int, int, int, int, int);
int FUN_0c0e6d00(void);

int FUN_0c02f3a6(int a4, int a5);

int FUN_0c02f328(int a4)
{
    int stk[16];
    register int t9;
    register float u3;

    t9 = 0xC7EB2B1;
    if ((*(signed char *)(((unsigned short)((unsigned short)(signed char)a4 * (unsigned short)0x72D0) + 0xC7EB2B1))) == 0) {
        u3 = ((((struct o0_float *)0xC02F460)->v));
        u3 = u3 + ((((struct o4_float *)0xC02F460)->v)) * (float)(signed char)a4;
        *(float *)(((int)stk + 12)) = u3;
        *(float *)(((int)stk + 16)) = ((((struct o8_float *)0xC02F460)->v));
        *(float *)(((int)stk + 20)) = ((((struct oC_float *)0xC02F460)->v));
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(unsigned int *)(((int)stk + 60)) = 0x5;
        *(float *)(((int)stk + 52)) = 1.0f;
        *(float *)(((int)stk + 28)) = 1.0f;
        *(float *)(((int)stk + 24)) = 1.0f;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = a4;
        t9 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0x8, (*(signed char *)((0xC3211E8 + ((unsigned int)((*(int *)0xC7F307C) & 0xE) >> 2)))), a4, 0x0));
    }
    return t9;
}

int FUN_0c02f3a6(int a4, int a5)
{
    register int t8;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0xC;
    if (((((struct oC_float *)(a4))->v)) == (*(float *)0xC02F480)) {
        *(unsigned char *)((a5 + 0x2)) = ((*(signed char *)((a5 + 0x2))) - 1);
        t3 = *(signed char *)((a5 + 0x1));
        t4 = *(signed char *)((a5 + 0x2));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x0)) = 0x1;
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x1)) = (*(signed char *)((a5 + 0x1)));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x2)) = 0x0;
        t8 = *(signed char *)((a5 + 0x2));
        *(unsigned char *)(((((short)((short)t3 * (short)0xF0) + 0xC366CC4) + (unsigned char)((((t4 << 1) + t4) << 2) << 2)) + 0x3)) = t8;
    }
    return t8;
}

int FUN_0c02f3f2(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[17];
    register int t36;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t21;
    register int t40;
    register int t101;
    register int t45;
    register int t46;
    register int t43;
    register int t48;
    register int t49;
    int t50;
    int t51;
    register int t52;
    register int t53;
    register int t54;
    register float u57;
    register float u58;
    register int t18;
    register int t19;
    register float u104;
    register float u105;
    register int t55;
    register float u56;
    register int t64;
    register int t67;
    register float u68;
    register float u69;
    register float u70;

    *(unsigned short *)((a4 + 0x8)) = (*(short *)((0xC7EB298 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    *(unsigned short *)((a4 + 0xA)) = (*(short *)((0xC7EB29C + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    t36 = a4;
    if ((int)(*(short *)((a4 + 0xC))) < (int)(*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))))) {
        *(unsigned short *)((a4 + 0xC)) = (*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
        t9 = 0xC7EB298;
        t10 = 0xC7EB29A;
        t11 = 0x72D0;
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)0x8) {
                break;
            }
            t11 = t12;
            t11 = (t11 << 2);
            t10 = t12;
            t11 = (t11 + t10);
            t9 = a4;
            t11 = (t11 << 2);
            t9 = (t9 + 0x10);
            t11 = (unsigned char)t11;
            t11 = (t11 + t9);
            t12 = (t12 + 0x1);
            *(unsigned char *)((t11 + 0x0)) = 0x0;
        }
        if ((int)(*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) > 0) {
            *(volatile short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB29A));
            *(unsigned char *)((a4 + 0x2)) = ((FUN_0c0e6d00()) + 0x1);
            t21 = 0x0;
            for (;;) {
                if ((int)t21 >= (int)(*(signed char *)((a4 + 0x2)))) {
                    break;
                }
                t19 = t21;
                t18 = t21;
                t19 = (t19 << 1);
                t19 = (t19 + t18);
                t18 = 0xC366CC4;
                t19 = (t19 << 2);
                t19 = (t19 << 2);
                t19 = (unsigned char)t19;
                t21 = (t21 + 0x1);
                t19 = (t19 + ((short)((short)(*(signed char *)((a4 + 0x1))) * (short)(0xF0)) + t18));
                *(unsigned char *)((t19 + 0x0)) = 0x0;
            }
            t36 = t21;
        } else {
            *(unsigned char *)((a4 + 0x2)) = 0x1;
            *(unsigned char *)(((0xC366CC4 + (short)((short)(*(signed char *)((a4 + 0x1))) * (short)0xF0)) + 0x0)) = 0x0;
            t36 = t12;
        }
    }
    t46 = *(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)));
    t40 = *(short *)((a4 + 0xC));
    *(unsigned short *)(((int)stk + 4)) = (t40 - t46);
    t101 = t36;
    if ((int)(short)(t40 - t46) <= 0) {
    } else {
        t43 = *(short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB29A));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t45 = t43;
        if ((int)(short)t43 > (int)0x30) {
            for (;;) {
                t43 = (t43 - 48);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                if ((int)(short)t43 <= (int)0x30) {
                    break;
                }
            }
            t45 = t43;
            t46 = (short)t43;
        }
        t48 = *(short *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t49 = t48;
        t50 = 0xC7EB29A;
        t51 = t46;
        t52 = t36;
        t53 = (t48 + t45);
        t54 = t45;
        u57 = f4;
        u58 = f5;
        for (;;) {
            if (((int)(*(int *)(((int)stk + 8))) < (int)0x8) && (t50 = (short)t53, (int)t50 > 0)) {
                t49 = (*(signed char *)((a4 + 0xF)));
                t51 = a4;
                t51 = (t51 + 0x10);
                t55 = t49;
                t55 = (t55 << 2);
                t55 = (t55 + t49);
                t55 = (t55 << 2);
                t52 = t49;
                t55 = (unsigned char)t55;
                t55 = (t55 + t51);
                t49 = (t49 + 0x1);
                t49 = (t49 & 0x7);
                *(unsigned char *)((a4 + 0xF)) = t49;
                if ((*(signed char *)((t55 + 0x0))) != 0) {
                    t52 = t55;
                    t49 = (FUN_0c02f3a6(t52, a4));
                } else {
                    t64 = t50;
                    t67 = t52;
                    u68 = u56;
                    u69 = u57;
                    u70 = u58;
                }
                u56 = u68;
                u57 = u69;
                u58 = u70;
                t50 = t64;
                t51 = 0x1;
                t52 = t67;
                *(unsigned char *)((t55 + 0x0)) = t51;
                t49 = 0x0;
                t52 = 0x3C;
                *(unsigned short *)((t55 + 0x4)) = t49;
                t49 = t52;
                *(unsigned char *)((t55 + 0x1)) = t49;
                if ((int)(short)t54 > 0) {
                    t51 = 0x30;
                    if ((int)(short)t53 < (int)t51) {
                        t49 = (*(short *)(((int)stk + 4)));
                        u56 = (float)t49;
                        t49 = 0x10;
                        *(float *)((t55 + t49)) = u56;
                        u56 = (float)(short)t54;
                        t49 = 0xC;
                        *(float *)((t55 + t49)) = u56;
                    } else {
                        if (((int)(short)t54 > 0) && (t51 = 0x30, (int)(short)t53 >= (int)t51)) {
                            t50 = (short)t54;
                            u56 = (float)(0x30 - t50);
                            t49 = 0x10;
                            *(float *)((t55 + t49)) = u56;
                            u56 = (float)(short)t54;
                            t49 = 0xC;
                            *(float *)((t55 + t49)) = u56;
                        } else {
                            t51 = (short)t53;
                            if ((int)t51 < (int)0x30) {
                                t49 = 0x10;
                                u56 = (float)(short)t53;
                                *(float *)((t55 + t49)) = u56;
                            } else {
                                t49 = 0xC02F6BC;
                                u57 = (*(float *)((t49 + 0x0)));
                                t49 = 0x10;
                                *(float *)((t55 + t49)) = u57;
                            }
                            t49 = 0xC;
                            u57 = 0.0f;
                            *(float *)((t55 + t49)) = u57;
                        }
                    }
                } else {
                    t51 = (short)t53;
                    if ((int)t51 < (int)0x30) {
                        t49 = 0x10;
                        u56 = (float)(short)t53;
                        *(float *)((t55 + t49)) = u56;
                    } else {
                        t49 = 0xC02F6BC;
                        u57 = (*(float *)((t49 + 0x0)));
                        t49 = 0x10;
                        *(float *)((t55 + t49)) = u57;
                    }
                    t49 = 0xC;
                    u57 = 0.0f;
                    *(float *)((t55 + t49)) = u57;
                }
                t49 = 0xC02F6C0;
                u57 = (*(float *)((t49 + 0x0)));
                t49 = 0xC;
                u56 = (*(float *)((t55 + t49)));
                u56 = (-u56);
                u56 = (u56 + u57);
                *(float *)((t55 + t49)) = u56;
                t49 = 0xC02F6C4;
                u58 = (*(float *)((t49 + 0x0)));
                t49 = (*(signed char *)((a4 + 0x1)));
                u56 = (float)(*(int *)(((int)stk + 0)));
                u57 = u56;
                u57 = (u57 * u58);
                if (t49 == 0) {
                    t49 = 0xC02F6C8;
                    u58 = (*(float *)((t49 + 0x0)));
                    t49 = 0x8;
                    u57 = (u57 + u58);
                    *(float *)((t55 + t49)) = u57;
                } else {
                    t49 = 0xC02F6CC;
                    u58 = (*(float *)((t49 + 0x0)));
                    t49 = 0x8;
                    u56 = u58;
                    u56 = (u56 - u57);
                    *(float *)((t55 + t49)) = u56;
                }
                t54 = (t54 - 48);
                t53 = (t53 - 48);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t51 = (*(int *)(((int)stk + 8)));
                t51 = (t51 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t51;
                continue;
            }
            break;
        }
        t101 = t52;
        u104 = u57;
        u105 = u58;
    }
    *(unsigned short *)((a4 + 0xC)) = (*(short *)((0xC7EB29A + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0))));
    return ((int (*)(int, int, int, int, float, float))(0xC02F764))(t101, a5, a6, a7, u104, u105);
}

int FUN_0c02f786(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0xC02F96C))(a4, 0x0, a6, 0x8, 40.0f, 24.0f, 1.0f, 96.0f, 84.0f, -1.0f, 556.0f, 4.0f);
}
