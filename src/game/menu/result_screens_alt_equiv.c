/* challenger / continue / the end screens and win text (0c0d5bc0-0c0d7108) */

int ui_draw_please_wait(int);
int ui_draw_no_challenge(int);
int FUN_0c0d5f3a(int);
int FUN_0c0d6098(int);
int FUN_0c0d6190(int);
int FUN_0c0d6212(int);
int ui_draw_continue_countdown(int);
int ui_draw_text_stub(int, int, float, float, float, float);
float FUN_0c0d5bc0(void);
int sprintf(int, int, int, int, int);
int FUN_0c0d7032(int, int);
int FUN_0c0d7054(int);
int FUN_0c0d7076(void);

int FUN_0c0d5ef2(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F306F) == 0) && (t1 = *(signed char *)0xC7F306E, t1 == 0)) {
        return 0x42;
    }
    return ui_draw_please_wait((*(signed char *)((a4 + 0x9))));
}

int FUN_0c0d5f16(int a4)
{
    int t1;

    if (((*(signed char *)0xC7F306F) == 0) && (t1 = *(signed char *)0xC7F306E, t1 == 0)) {
        return 0x42;
    }
    return ui_draw_please_wait((*(signed char *)((a4 + 0x9))));
}

int FUN_0c0d5f6a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0d5f3a(a4);
    if (t0 != 0) {
        t1 = *(signed char *)0xC7F2EE4;
        if ((int)(unsigned char)t1 >= (int)0x8) {
            return (unsigned char)t1;
        }
        return ui_draw_no_challenge((*(signed char *)((a4 + 0x9))));
    }
    if ((*(signed char *)0xC7F3070) != 0) {
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(void))(0xC0D607E))();
                    }
                    return ((int (*)(void))(0xC0D6070))();
                }
                ui_draw_continue_countdown(a4);
                t0 = *(signed char *)0xC7F2EE4;
                if ((int)(unsigned char)t0 < (int)0x8) {
                    t1 = *(signed char *)0xC494D28;
                    if (t1 == 0) {
                        return ((int (*)(int, int, int, int))(0xC0D5ECE))(a4, a5, a6, a7);
                    }
                    return t1;
                }
                return (unsigned char)t0;
            }
            FUN_0c0d6212(a4);
            t0 = *(signed char *)0xC7F2EE4;
            if ((int)(unsigned char)t0 < (int)0x8) {
                t1 = *(signed char *)0xC494D28;
                if (t1 == 0) {
                    return ((int (*)(int, int, int, int))(0xC0D5CEE))(a4, a5, a6, a7);
                }
                return t1;
            }
            return (unsigned char)t0;
        }
        FUN_0c0d6190(a4);
        t0 = *(signed char *)0xC7F2EE4;
        if ((int)(unsigned char)t0 < (int)0x8) {
            t1 = *(signed char *)0xC494D28;
            if (t1 == 0) {
                return ((int (*)(int, int, int, int))(0xC0D5CC4))(a4, a5, a6, a7);
            }
            return t1;
        }
        return (unsigned char)t0;
    }
    FUN_0c0d6098(a4);
    t0 = *(signed char *)0xC7F2EE4;
    if ((int)(unsigned char)t0 < (int)0x8) {
        t1 = *(signed char *)0xC494D28;
        if (t1 == 0) {
            return ((int (*)(int, int, int, int))(0xC0D5C9A))(a4, a5, a6, a7);
        }
        return t1;
    }
    return (unsigned char)t0;
}

int FUN_0c0d6874(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    *(volatile int *)((0xC33F8B0 + ((*(signed char *)((a4 + 0x6))) << 2)));
    sprintf(0xC7F36B8, a5, a6, a7, 0xC155108);
    u0 = *(float *)0xC0D6A18;
    u1 = FUN_0c0d5bc0();
    u2 = (float)(((short)(*(signed char *)((a4 + 0x9))) * (short)0x1E) + 0x1);
    ui_draw_text_stub(0xC7F36B8, 0x0, (u2 * u0), (u1 + u0), 1.0f, 1.0f);
    t1 = *(signed char *)((a4 + 0x2));
    if ((int)t1 < (int)0x2) {
        t2 = *(signed char *)((((a4 + 0x1) + 0x2) + 0x0));
        t3 = t2;
        if ((int)t2 > (int)0x3) {
            t3 = 0x3;
        }
        t2 = t1;
        if ((int)t3 >= 0) {
            t1 = 0x2;
            t4 = 0x0;
            t5 = 0x0;
            for (;;) {
                if ((t5 == (*(signed char *)((a4 + 0x3)))) && (t0 = *(int *)0xC7F3014, (t0 & 16) == 0)) {
                    t6 = t0;
                    t7 = t1;
                    t8 = t4;
                } else {
                    t1 = (*(signed char *)((((a4 + 0x68) + t5) + 0x0)));
                    t4 = 0xC7F36B8;
                    sprintf(t4, 0x0, 0x0, 0x0, 0xC15510C);
                    u1 = FUN_0c0d5bc0();
                    t1 = 0x1E;
                    t4 = 0xC7F36B8;
                    u2 = (float)((((short)(*(signed char *)((a4 + 0x9))) * (short)t1) + t5) + 0x5);
                    t6 = (ui_draw_text_stub(t4, 0x0, (u2 * u0), (u1 + u0), 1.0f, 1.0f));
                }
                t5 = (t5 + 0x1);
                t1 = t7;
                t4 = t8;
                if ((int)t5 > (int)t3) {
                    break;
                }
            }
            t2 = t6;
        }
        t0 = t2;
    } else {
        t1 = *(int *)0xC7F3014;
        t2 = t1;
        if ((t1 & 8) == 0) {
            t1 = 0x0;
            for (;;) {
                *(volatile signed char *)((((a4 + 0x68) + t1) + 0x0));
                sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC15510C);
                u1 = FUN_0c0d5bc0();
                u2 = (float)((((short)(*(signed char *)((a4 + 0x9))) * (short)0x1E) + t1) + 0x5);
                t3 = ui_draw_text_stub(0xC7F36B8, 0x0, (u2 * u0), (u1 + u0), 1.0f, 1.0f);
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x3) {
                    break;
                }
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d708c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0d7054(a4);
    t1 = 0x0;
    if (t0 != 0) {
        if ((*(signed char *)0xC7F2F16) != 0) {
            t0 = FUN_0c0d7076();
            t2 = 0x0;
            if (t0 != 0) {
                FUN_0c0d7032(0x0, a5);
                FUN_0c0d7032(0x1, a5);
                t2 = 0x1;
            }
            t0 = t2;
        } else {
            t2 = FUN_0c0d7076();
            t0 = 0x0;
            if (t2 != 0) {
                FUN_0c0d7032(a4, a5);
                t0 = 0x1;
            }
        }
        t1 = t0;
    }
    return t1;
}
