/* challenger / continue / the end screens and win text (0c0d5bc0-0c0d7108) */

struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
int ui_draw_text_stub(int, int, float, float, float, float);
float FUN_0c0d5bc0(void);
int sprintf(int, int, int, int, int);

int ui_draw_continue_countdown(int a4, int a5, int a6, int a7)
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
                        ui_draw_text_stub(0xC7F36B8, 0x0, (u55 * 16.0f), (t53 + 16.0f), 1.0f, 1.0f);
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
                        ui_draw_text_stub(0xC7F36B8, 0x0, (u114 * 16.0f), (t112 + 16.0f), 1.0f, 1.0f);
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
