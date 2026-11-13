/* challenger / continue / the end screens and win text (0c0d5bc0-0c0d7108) */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ui_draw_text_stub(void);
struct o6C_int { char p[0x6C]; int v; };
int snd_play_side_se(int, int);
int FUN_0c0d5f6a(int);
int FUN_0c0d708c(int);
struct o44_short { char p[0x44]; short v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
int FUN_0c059bf8(int);
int memset(int, int, int);
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o69_uchar { char p[0x69]; unsigned char v; };
struct o6A_uchar { char p[0x6A]; unsigned char v; };
struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0d6874(int);
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };

float FUN_0c0d5bc0(void);
int FUN_0c0d609e(int a4, int a5);
int FUN_0c0d6104(int a4);
int FUN_0c0d643c(int a4);
int FUN_0c0d6460(int a4);
int FUN_0c0d64e8(int a4);
int FUN_0c0d6630(int a4);
int FUN_0c0d6744(int a4);
int FUN_0c0d6774(int a4);
int FUN_0c0d699e(int a4);
int FUN_0c0d6a28(int a4);
int FUN_0c0d6a56(int a4);
int FUN_0c0d6fac(int a4);

float FUN_0c0d5bc0(void)
{
    if ((*(int *)0xC7F3020) != 0) {
        return (*(float *)0xC0D5DF4);
    }
    return 0.0f;
}

void ui_draw_please_wait(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if ((*(signed char *)0xC494D28) == 0) {
        FUN_0c0d5bc0();
        *(volatile signed char *)(((int)stk + 0));
        *(volatile float *)0xC0D5DF4;
        *(volatile float *)0xC0D5DF4;
        ui_draw_text_stub();
    return;
    }
}

void ui_draw_no_challenge(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    if (((unsigned char)(*(signed char *)0xC7F3071) & ((*(signed char *)(((int)stk + 0))) + 0x1)) == 0) {
        if ((*(signed char *)0xC494D28) == 0) {
            FUN_0c0d5bc0();
            *(volatile signed char *)(((int)stk + 0));
            *(volatile float *)0xC0D5DF4;
            *(volatile float *)0xC0D5DF4;
            ui_draw_text_stub();
    return;
        }
        return;
    }
}

void ui_draw_challenger_info(void)
{
    if ((*(signed char *)0xC7F300B) == 0) {
        FUN_0c0d5f6a(0xC7F2DF0);
        FUN_0c0d5f6a(0xC7F2E68);
    return;
    }
}

int FUN_0c0d5f3a(int a4)
{
    if ((*(signed char *)0xC7F2F17) == 0) {
        if ((((unsigned char)(*(signed char *)0xC7F3071) | (unsigned char)(*(signed char *)0xC7F3073)) & ((int)0x1 << (int)((-(*(signed char *)((a4 + 0x9)))) + 0x1))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0d6098(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

int FUN_0c0d609e(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    FUN_0c0d5bc0();
    *(volatile float *)((((signed char)(((((t0 << 2) + a5) << 1) + ((t0 << 2) + a5)) << 2) + 0xC155034) + 0x0));
    *(volatile float *)((((signed char)(((((t0 << 2) + a5) << 1) + ((t0 << 2) + a5)) << 2) + 0xC155034) + 0x4));
    *(volatile float *)0xC0D6270;
    *(volatile int *)((((signed char)(((((t0 << 2) + a5) << 1) + ((t0 << 2) + a5)) << 2) + 0xC155034) + 0x8));
    return ui_draw_text_stub();
}

int FUN_0c0d60e2(int a4)
{
    register int t5;

    if ((*(signed char *)0xC7F306E) == 0) {
        if ((*(signed char *)0xC7F306F) == 0) {
            t5 = *(int *)0xC7F3014;
            if ((t5 & 16) != 0) {
                return FUN_0c0d609e(a4, 0x0);
            }
            return t5;
        }
        return 0x43;
    }
    return 0x42;
}

int FUN_0c0d6104(int a4)
{
    int stk[1];
    register int t28;

    t28 = 0x42;
    if ((*(signed char *)0xC7F306E) == 0) {
        *(unsigned char *)0xC7F3071 = ((*(signed char *)0xC7F3071) | ((*(signed char *)((a4 + 0x9))) + 0x1));
        if ((*(signed char *)((a4 + 0x4C))) == 0) {
            (((struct o4C_uchar *)(a4))->v) = ((*(signed char *)(((0x4C + a4) + 0x0))) + ((((*(signed char *)((a4 + 0x1))) == 3)) ? 1 : 0));
            if ((*(signed char *)((a4 + 0x4C))) == 0) {
                *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x9)));
                memset(a4, 0x0, 0x78);
                *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((int)stk + 0)));
            } else {
                if ((unsigned char)(*(signed char *)0xC7F3073) != 3) {
                    (((struct o4D_uchar *)(a4))->v) = 0x1;
                }
                (((struct o44_ushort *)(a4))->v) = 0x0;
                FUN_0c059bf8((*(signed char *)((a4 + 0x4C))));
                *(unsigned char *)(((a4 + 0x5A) + 0x3)) = 0x0;
                *(unsigned char *)(((a4 + 0x5A) + 0x2)) = 0x0;
                *(unsigned char *)(((a4 + 0x5A) + 0x1)) = 0x0;
                (((struct o5A_uchar *)(a4))->v) = 0x0;
            }
        } else {
            if ((unsigned char)(*(signed char *)0xC7F3073) != 3) {
                (((struct o4D_uchar *)(a4))->v) = 0x1;
            }
            (((struct o44_ushort *)(a4))->v) = 0x0;
            FUN_0c059bf8((*(signed char *)((a4 + 0x4C))));
            *(unsigned char *)(((a4 + 0x5A) + 0x3)) = 0x0;
            *(unsigned char *)(((a4 + 0x5A) + 0x2)) = 0x0;
            *(unsigned char *)(((a4 + 0x5A) + 0x1)) = 0x0;
            (((struct o5A_uchar *)(a4))->v) = 0x0;
        }
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        t28 = 0x2;
    }
    return t28;
}

void FUN_0c0d6190(int a4)
{
    register int t2;

    if ((*(signed char *)0xC7F306E) == 0) {
        t2 = FUN_0c0d708c((*(signed char *)((a4 + 0x9))));
        if (t2 != 0) {
            snd_play_side_se(0x0, 0x43);
    return;
        }
        return;
    }
}

int FUN_0c0d61c0(int a4)
{
    register int t0;

    t0 = *(int *)0xC7F3014;
    if ((t0 & 16) != 0) {
        if ((*(signed char *)0xC7F306E) == 0) {
            if ((*(signed char *)0xC7F306F) == 0) {
                return FUN_0c0d609e(a4, 0x0);
            }
            return 0x43;
        }
        return 0x42;
    }
    return t0;
}

int FUN_0c0d6212(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x9));
    t2 = (t1 + 0x1);
    if (((unsigned char)(*(signed char *)0xC7F3071) & (t1 + 0x1)) == 0) {
        t1 = 0x4;
        if (((int)(unsigned char)(*(signed char *)0xC7F2EE4) < (int)0x8) && (t0 = *(signed char *)0xC7F2F0D, t0 != 0)) {
            t1 = 0x3;
        }
        *(unsigned char *)((a4 + 0x1)) = t1;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t2 = 0x0;
    }
    return t2;
}

int FUN_0c0d643c(int a4)
{
    (((struct o68_uchar *)(a4))->v) = (*(signed char *)0xC1550DA);
    (((struct o69_uchar *)(a4))->v) = (*(signed char *)0xC155104);
    (((struct o6A_uchar *)(a4))->v) = (*(signed char *)0xC155104);
    (((struct o6B_uchar *)(a4))->v) = (*(signed char *)0xC155105);
    return 0x6B;
}

int FUN_0c0d6460(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)(((a4 + 0x12) + 0x0));
    t1 = *(short *)(((a4 + 0x12) + 0x2));
    t2 = *(short *)(((a4 + 0x12) + 0x4));
    t3 = 0x0;
    for (;;) {
        if ((int)(((t1 + ((short)t0 * (short)0x3C)) * 0x3C) + t2) > (int)((((*(short *)((((signed char)((t3 << 1) + (t3 << 2)) + 0xC7F30B6) + 0x2))) + ((short)(*(short *)((((signed char)((t3 << 1) + (t3 << 2)) + 0xC7F30B6) + 0x0))) * (short)0x3C)) * 0x3C) + (*(short *)((((signed char)((t3 << 1) + (t3 << 2)) + 0xC7F30B6) + 0x4))))) {
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t3;
}

int FUN_0c0d64e8(int a4)
{
    register int t0;
    register int t34;
    register int t1;
    register int t11;
    register int t14;

    t0 = FUN_0c0d6460(a4);
    t34 = t0;
    if ((int)t0 >= (int)0x5) {
    } else {
        if ((int)0x9 > (int)t0) {
            t1 = 0x9;
            for (;;) {
                *(unsigned char *)(((0xC7F308D + (t1 << 2)) + 0x0)) = (*(signed char *)(((0xC7F308D + ((t1 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC7F308D + (t1 << 2)) + 0x1)) = (*(signed char *)(((0xC7F308D + ((t1 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC7F308D + (t1 << 2)) + 0x2)) = (*(signed char *)(((0xC7F308D + ((t1 - 1) << 2)) + 0x2)));
                *(unsigned char *)((((t1 << 2) + 0xC7F308D) + 0x3)) = (*(signed char *)(((0xC7F308D + ((t1 - 1) << 2)) + 0x3)));
                *(unsigned short *)(((0xC7F30B6 + (signed char)((t1 << 1) + (t1 << 2))) + 0x0)) = (*(short *)(((0xC7F30B6 + (signed char)(((t1 - 1) << 1) + ((t1 - 1) << 2))) + 0x0)));
                *(unsigned short *)(((0xC7F30B6 + (signed char)((t1 << 1) + (t1 << 2))) + 0x2)) = (*(short *)(((0xC7F30B6 + (signed char)(((t1 - 1) << 1) + ((t1 - 1) << 2))) + 0x2)));
                *(unsigned short *)((((signed char)((t1 << 1) + (t1 << 2)) + 0xC7F30B6) + 0x4)) = (*(short *)(((0xC7F30B6 + (signed char)(((t1 - 1) << 1) + ((t1 - 1) << 2))) + 0x4)));
                t11 = t1;
                t14 = ((t1 - 1) + 0xC7F3083);
                t1 = (t1 - 1);
                *(unsigned char *)((0xC7F3083 + t11)) = (*(signed char *)((t14 + 0x0)));
                if ((int)t1 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC7F308D + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)((((t0 << 2) + 0xC7F308D) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x0)) = (*(short *)((a4 + 0x12)));
        *(unsigned short *)(((0xC7F30B6 + (signed char)((t0 << 1) + (t0 << 2))) + 0x2)) = (*(short *)((a4 + 0x14)));
        *(unsigned short *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC7F30B6) + 0x4)) = (*(short *)((a4 + 0x16)));
        *(unsigned char *)(((t0 + 0xC7F3083) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t34 = 0x49;
    }
    return t34;
}

int FUN_0c0d6630(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)((((t0 << 2) + 0xC7F3124) + 0x0))) >= (unsigned int)(*(int *)((a4 + 0x20)))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c0d665c(int a4)
{
    register int t0;
    register int t26;
    register int t1;
    register int t7;
    register int t10;

    t0 = FUN_0c0d6630(a4);
    t26 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t1 = 0x9;
            for (;;) {
                *(unsigned int *)((((t1 << 2) + 0xC7F3124) + 0x0)) = (*(int *)((0xC7F3124 + ((t1 - 1) << 2))));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x0)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x1)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC7F30FC + (t1 << 2)) + 0x2)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x2)));
                *(unsigned char *)((((t1 << 2) + 0xC7F30FC) + 0x3)) = (*(signed char *)(((0xC7F30FC + ((t1 - 1) << 2)) + 0x3)));
                t7 = t1;
                t10 = ((t1 - 1) + 0xC7F30F2);
                t1 = (t1 - 1);
                *(unsigned char *)((0xC7F30F2 + t7)) = (*(signed char *)((t10 + 0x0)));
                if ((int)t1 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)(((0xC7F30FC + (t0 << 2)) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned int *)((((t0 << 2) + 0xC7F3124) + 0x0)) = (*(int *)((a4 + 0x20)));
        *(unsigned char *)(((t0 + 0xC7F30F2) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t26 = 0x49;
    }
    return t26;
}

int FUN_0c0d6744(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((t0 << 1) + 0xC7F317E) + 0x0))) > (int)((((struct o44_short *)(a4))->v))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c0d6774(int a4)
{
    register int t0;
    register int t29;
    register int t1;
    register int t9;
    register int t11;

    t0 = FUN_0c0d6744(a4);
    t29 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t1 = 0x9;
            for (;;) {
                *(unsigned short *)((0xC7F317E + (t1 << 1))) = (*(short *)(((((t1 - 1) << 1) + 0xC7F317E) + 0x0)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x0)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x1)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC7F3156 + (t1 << 2)) + 0x2)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x2)));
                *(unsigned char *)((((t1 << 2) + 0xC7F3156) + 0x3)) = (*(signed char *)(((0xC7F3156 + ((t1 - 1) << 2)) + 0x3)));
                t9 = t1;
                t11 = ((t1 - 1) + 0xC7F314C);
                t1 = (t1 - 1);
                *(unsigned char *)((0xC7F314C + t9)) = (*(signed char *)((t11 + 0x0)));
                if ((int)t1 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC7F3156 + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)((((t0 << 2) + 0xC7F3156) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned short *)((((t0 << 1) + 0xC7F317E) + 0x0)) = ((((struct o44_short *)(a4))->v));
        *(unsigned char *)(((t0 + 0xC7F314C) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t29 = 0x49;
    }
    return t29;
}

int FUN_0c0d699e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC33F8C4;
    t1 = 0xC33F8C4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        if ((*(signed char *)((t3 + 0x0))) == (*(signed char *)(((a4 + 0x68) + 0x0)))) {
            t4 = (*(signed char *)((t3 + 0x1)));
            t5 = t4;
            t4 = (*(signed char *)(((a4 + 0x68) + 0x1)));
            if (t5 == t4) {
                t4 = (*(signed char *)((t3 + 0x2)));
                t3 = t4;
                t4 = (*(signed char *)(((a4 + 0x68) + 0x2)));
                if (t3 == t4) {
                    break;
                }
                t2 = (t2 + 0x1);
                t0 = (t0 + 0x8);
                t1 = (t1 + 0x8);
                if ((int)t2 > (int)0x14) {
                    return t4;
                }
                continue;
            }
            t2 = (t2 + 0x1);
            t0 = (t0 + 0x8);
            t1 = (t1 + 0x8);
            if ((int)t2 > (int)0x14) {
                return t4;
            }
            continue;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x8);
        t1 = (t1 + 0x8);
        if ((int)t2 > (int)0x14) {
            return t4;
        }
    }
    (((struct o68_uchar *)(a4))->v) = (*(signed char *)(((*(int *)(((t0 + 0x4) + 0x0))) + 0x0)));
    (((struct o69_uchar *)(a4))->v) = (*(signed char *)(((*(int *)(((t0 + 0x4) + 0x0))) + 0x1)));
    t1 = *(signed char *)(((*(int *)(((t0 + 0x4) + 0x0))) + 0x2));
    (((struct o6A_uchar *)(a4))->v) = t1;
    return t1;
}

int FUN_0c0d6a28(int a4)
{
    register int t0;
    int t2;

    t0 = *(signed char *)((a4 + 0x9));
    t2 = *(int *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F8));
    if ((0x400 & t2) == 0) {
        if ((0x200 & t2) == 0) {
            if ((0x4 & t2) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0d6a56(int a4)
{
    int t0;
    register int t11;
    register int t20;
    register int t42;
    register int t22;
    register int t39;
    register int t25;
    register int t26;
    register int t29;
    int t54;
    register int t57;
    register int t62;
    register int t78;
    register int t109;
    register int t84;
    register int t85;
    register int t88;
    register int t101;
    register int t120;
    register int t126;
    register int t144;
    register int t148;
    register int t153;
    register int t111;
    register int t40;
    register int t27;
    register int t28;
    register int t86;
    register int t87;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                if ((((((struct o6C_int *)(a4))->v)) & 192) != 0) {
                    snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                    t11 = 0x2C;
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t11 = 0x2B;
                    }
                    *(unsigned char *)((a4 + 0x4)) = t11;
                }
                *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
                t20 = FUN_0c0d6a28(a4);
                t42 = t20;
                if (t20 != 0) {
                    t22 = *(signed char *)((a4 + 0x4));
                    if (t22 == 43) {
                        *(unsigned short *)((a4 + 0xA)) = 0x1;
                        t40 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45));
                    } else {
                        t39 = t22;
                        if (t22 == 44) {
                            t25 = *(signed char *)((a4 + 0x3));
                            *(unsigned char *)((a4 + 0x3)) = (t25 - 1);
                            t26 = (t25 - 1);
                            t29 = 0x0;
                            for (;;) {
                                if ((int)t29 > (int)0x2C) {
                                    break;
                                }
                                t28 = 0x3;
                                t27 = a4;
                                t28 = (t28 + a4);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t27 = (t27 + 0x68);
                                t28 = (t28 + t27);
                                t28 = (*(signed char *)((t28 + 0x0)));
                                t26 = t29;
                                t27 = (*(signed char *)((0xC1550DA + t26)));
                                if (t28 == t27) {
                                    t26 = t29;
                                    *(unsigned char *)((a4 + 0x4)) = t26;
                                }
                                t29 = (t29 + 0x1);
                            }
                            t39 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x46));
                        }
                        t40 = t39;
                    }
                    t42 = t40;
                }
                t111 = t42;
            } else {
                t111 = t0;
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    *(unsigned char *)((a4 + 0x4)) = 0x2A;
                    *(volatile signed char *)((0xC1550DA + (*(signed char *)((a4 + 0x4)))));
                    t111 = 0x6B;
                }
            }
        } else {
            t54 = (((struct o6C_int *)(a4))->v);
            if ((0x40 & t54) != 0) {
                snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                t57 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t57 - 1);
                if ((int)(signed char)(t57 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2C;
                }
            } else {
                if ((0x80 & t54) != 0) {
                    snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                    t62 = *(signed char *)((a4 + 0x4));
                    *(unsigned char *)((a4 + 0x4)) = (t62 + 0x1);
                    if ((int)(signed char)(t62 + 0x1) > (int)0x2C) {
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                    }
                }
            }
            *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
            t78 = FUN_0c0d6a28(a4);
            t109 = t78;
            if (t78 == 0) {
            } else {
                if ((*(signed char *)((a4 + 0x4))) != 43) {
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t84 = *(signed char *)((a4 + 0x3));
                        *(unsigned char *)((a4 + 0x3)) = (t84 - 1);
                        t85 = (t84 - 1);
                        t88 = 0x0;
                        for (;;) {
                            if ((int)t88 > (int)0x2C) {
                                break;
                            }
                            t87 = 0x3;
                            t86 = a4;
                            t87 = (t87 + a4);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t86 = (t86 + 0x68);
                            t87 = (t87 + t86);
                            t87 = (*(signed char *)((t87 + 0x0)));
                            t85 = t88;
                            t86 = (*(signed char *)((0xC1550DA + t85)));
                            if (t87 == t86) {
                                t85 = t88;
                                *(unsigned char *)((a4 + 0x4)) = t85;
                            }
                            t88 = (t88 + 0x1);
                        }
                        t109 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x46));
                    } else {
                        snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45);
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t101 = *(signed char *)((a4 + 0x3));
                        t109 = t101;
                        if (t101 == 3) {
                            *(unsigned char *)((a4 + 0x4)) = 0x2B;
                            t109 = 0x2B;
                        }
                    }
                } else {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    t109 = (snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45));
                }
            }
            t111 = t109;
        }
        t153 = t111;
    } else {
        if ((0x40 & ((((struct o6C_int *)(a4))->v))) != 0) {
            snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
            t120 = *(signed char *)((a4 + 0x4));
            *(unsigned char *)((a4 + 0x4)) = (t120 - 1);
            if ((int)(signed char)(t120 - 1) < 0) {
                *(unsigned char *)((a4 + 0x4)) = 0x2B;
            }
        } else {
            if ((0x80 & ((((struct o6C_int *)(a4))->v))) != 0) {
                snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x44);
                t126 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t126 + 0x1);
                if ((int)(signed char)(t126 + 0x1) > (int)0x2B) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
        }
        *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1550DA + (*(signed char *)(((a4 + 0x1) + 0x3))))));
        t144 = FUN_0c0d6a28(a4);
        t153 = t144;
        if (t144 == 0) {
        } else {
            snd_play_side_se((*(signed char *)((a4 + 0x9))), 0x45);
            if ((*(signed char *)((a4 + 0x4))) == 43) {
                *(unsigned short *)((a4 + 0xA)) = 0x1;
                t153 = 0x1;
            } else {
                t148 = *(signed char *)((a4 + 0x3));
                *(unsigned char *)((a4 + 0x3)) = (t148 + 0x1);
                t153 = (t148 + 0x1);
            }
        }
    }
    return t153;
}

int FUN_0c0d6ca2(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t4 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t4 == 8) {
        return (unsigned char)t4;
    }
    if ((unsigned char)t4 == 9) {
        return (unsigned char)t4;
    }
    FUN_0c0d6fac((*(signed char *)((a4 + 0x9))));
    t4 = *(signed char *)((a4 + 0x2));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                t5 = *(short *)((a4 + 0xA));
                *(unsigned short *)((a4 + 0xA)) = (t5 - 1);
                if ((int)(short)(t5 - 1) <= 0) {
                    *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
                }
                return FUN_0c0d6874(a4);
            }
            t5 = t4;
            if (t4 == 3) {
                if (((*(signed char *)((a4 + 0x5))) & 2) != 0) {
                    FUN_0c0d64e8(a4);
                }
                if (((*(signed char *)((a4 + 0x5))) & 4) != 0) {
                    FUN_0c0d6774(a4);
                }
                *(unsigned char *)((a4 + 0x1)) = 0x5;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                *(unsigned char *)((a4 + 0x4)) = 0x0;
                t5 = 0x0;
            }
            return t5;
        }
        t4 = *(signed char *)((a4 + 0x9));
        if ((*(int *)((0xC7F31F0 + (signed char)((((t4 << 2) << 1) + t4) << 2)))) != 0) {
            *(unsigned short *)((a4 + 0xC)) = 0x12C;
        }
        FUN_0c0d6a56(a4);
        if ((*(short *)((a4 + 0xA))) != 0) {
            *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
        }
        if ((*(short *)((a4 + 0xC))) != 0) {
            *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) - 1);
        }
        t4 = *(short *)(((a4 + 0xA) + 0x0));
        if ((t4 != 0) && (t0 = *(short *)(((a4 + 0xA) + 0x2)), t0 != 0)) {
        } else {
            t0 = *(signed char *)((a4 + 0x3));
            if (t0 == 0) {
                t5 = *(signed char *)((a4 + 0x3));
                if ((int)t5 < (int)0x3) {
                    t6 = t5;
                    t7 = ((a4 + 0x68) + t5);
                    for (;;) {
                        t6 = (t6 + 0x1);
                        *(unsigned char *)((t7 + 0x0)) = (*(signed char *)0xC1550DA);
                        t7 = (t7 + 0x1);
                        if ((int)t6 >= (int)0x3) {
                            break;
                        }
                    }
                }
            } else {
                if (((int)t0 < (int)0x3) && (t1 = *(signed char *)((a4 + 0x3)), (int)t1 < (int)0x3)) {
                    t0 = ((a4 + 0x68) + t1);
                    t5 = t1;
                    for (;;) {
                        t5 = (t5 + 0x1);
                        *(unsigned char *)((t0 + 0x0)) = (*(signed char *)0xC155104);
                        t0 = (t0 + 0x1);
                        if ((int)t5 >= (int)0x3) {
                            break;
                        }
                    }
                }
            }
            t0 = t4;
            t1 = (a4 + 0x68);
            t4 = 0x0;
            t5 = 0xC1550DA;
            t6 = (a4 + 0x68);
            for (;;) {
                if ((int)t4 >= (int)0x3) {
                    break;
                }
                t0 = (*(signed char *)0xC155105);
                t7 = *(signed char *)((t6 + 0x0));
                t6 = (t6 + 0x1);
                t5 = t7;
                if ((t5 == t0) || (t2 = *(signed char *)0xC155106, t3 = (t5 == t0), t0 = t2, t5 == t0)) {
                    t0 = (*(signed char *)0xC155104);
                    *(unsigned char *)((t1 + 0x0)) = t0;
                }
                t1 = (t1 + 0x1);
                t4 = (t4 + 0x1);
            }
            FUN_0c0d699e(a4);
            *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            *(unsigned short *)((a4 + 0xA)) = 0xF0;
        }
        return FUN_0c0d6874(a4);
    }
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)(((a4 + 0x5) + 0x2)) = 0x5;
    *(unsigned char *)(((a4 + 0x5) + 0x1)) = 0x5;
    if ((int)(*(signed char *)((a4 + 0x56))) >= (int)0x9) {
        t0 = FUN_0c0d6460(a4);
        *(unsigned char *)((((a4 + 0x5) + 0x1) + 0x0)) = t0;
        t1 = 0x0;
        if ((int)(signed char)t0 < (int)0x5) {
            t1 = 0x2;
        }
        *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t1);
    }
    t0 = FUN_0c0d6744(a4);
    *(unsigned char *)((((a4 + 0x5) + 0x2) + 0x0)) = t0;
    t1 = 0x0;
    if ((int)(signed char)t0 < (int)0x5) {
        t1 = 0x4;
    }
    *(unsigned char *)(((a4 + 0x5) + 0x0)) = ((*(signed char *)(((a4 + 0x5) + 0x0))) | t1);
    if ((int)(*(signed char *)(((a4 + 0x5) + 0x1))) > (int)(*(signed char *)(((a4 + 0x5) + 0x2)))) {
        *(unsigned char *)(((a4 + 0x5) + 0x1)) = (*(signed char *)(((a4 + 0x5) + 0x2)));
    }
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0xA)) = 0x708;
        *(unsigned short *)((a4 + 0xC)) = 0x12C;
        FUN_0c0d643c(a4);
        (((struct o1_uchar *)0xC7F3018)->v) = 0x1;
        if (((*(signed char *)((a4 + 0x5))) & 2) != 0) {
            (((struct o0_uchar *)0xC7F3018)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC7F3018)->v) = 0x1;
        }
        t0 = 0x138;
    }
    return t0;
}

int FUN_0c0d6ef6(int a4)
{
    int stk[1];
    register int t0;
    register int t5;
    int t13;

    t0 = *(signed char *)0xC7F2EE4;
    if ((unsigned char)t0 != 8) {
        if ((unsigned char)t0 != 9) {
            t5 = *(signed char *)((a4 + 0x2));
            if (t5 != 0) {
                if (t5 != 1) {
                    return t5;
                }
                if ((*(short *)((a4 + 0xA))) != 0) {
                    *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
                }
                if (((*(short *)((a4 + 0xA))) == 0) && (t13 = *(signed char *)0xC7F306E, t13 == 0)) {
                    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x9)));
                    memset(a4, 0x0, 0x78);
                    *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((int)stk + 0)));
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    return 0x0;
                }
                FUN_0c0d5bc0();
                *(volatile float *)0xC0D70E8;
                *(volatile signed char *)((a4 + 0x9));
                *(volatile float *)0xC0D70E8;
                return ui_draw_text_stub();
            }
            *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            *(unsigned short *)((a4 + 0xA)) = 0xB4;
            return 0xB4;
        }
        return (unsigned char)t0;
    }
    return (unsigned char)t0;
}

int FUN_0c0d6fac(int a4)
{
    register int t0;
    register int t1;

    (((struct o6C_uint *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(int *)(((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)) + 0x8)));
    t0 = *(int *)(((0xC7F31F0 + (signed char)((((a4 << 2) << 1) + a4) << 2)) + 0x0));
    if ((t0 & 240) != 0) {
        if ((int)((((struct o70_short *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) < (int)0xF) {
            (((struct o70_ushort *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (((((struct o70_short *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) + 0x1);
        }
    } else {
        (((struct o70_ushort *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = 0x0;
    }
    t1 = t0;
    if ((int)((((struct o70_short *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v)) >= (int)0xF) {
        t0 = *(short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x70) + 0x2));
        *(unsigned short *)(((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x70) + 0x2)) = (t0 ^ 0x1);
        t1 = (short)(t0 ^ 0x1);
        if ((short)(t0 ^ 0x1) != 0) {
            (((struct o6C_uint *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = (*(int *)(((signed char)((((a4 << 2) << 1) + a4) << 2) + 0xC7F31F0)));
            t1 = 0x6C;
        }
    }
    return t1;
}

int FUN_0c0d7032(int a4, int a5)
{
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0) + 0x9)) = a4;
    (((struct o4C_uchar *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0)))->v) = a5;
    return FUN_0c0d6104(((unsigned char)((unsigned short)a4 * (unsigned short)0x78) + 0xC7F2DF0));
}

int FUN_0c0d7054(int a4)
{
    if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((a4 << 2) + a4) << 2)))) & 8) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d7076(void)
{
    (((struct oC_uint *)0xC7F2F24)->v) = (((((struct oC_int *)0xC7F2F24)->v)) + 0x1);
    (((struct o0_uint *)0xC7F2F24)->v) = (((((struct o0_int *)0xC7F2F24)->v)) + 0x1);
    return 0x1;
}
