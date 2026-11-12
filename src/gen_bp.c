/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7205_uchar { char p[0x7205]; unsigned char v; };
struct o7206_uchar { char p[0x7206]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXRNA_SetOutPan(int, int, int, int);
int FUN_0c0555dc(void);
int FUN_0c059330(int, int, int, int);
int FUN_0c071264(int);
int FUN_0c08a9a8(int);
int FUN_0c097fc4(int);
int FUN_0c09a7ba(int);
int FUN_0c09a910(int);
int FUN_0c09d89c(int);
int FUN_0c0a2080(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a3dcc(int, int);
int FUN_0c0ac600(int);
int FUN_0c0ace56(int);
int FUN_0c0ae4f0(int);
int FUN_0c0ae520(int);
int FUN_0c0b1f70(int, int);
int FUN_0c0b22ac(int, int);
int FUN_0c097e22(int a4);
int FUN_0c071676(int a4);
int FUN_0c0ae5a6(int a4);
int FUN_0c0ae898(int a4, int a5, int a6, int a7);
int FUN_0c0b1efe(int a4, int a5, int a6, int a7);
int FUN_0c0b2236(int a4, int a5, int a6, int a7);
int FUN_0c065630(int a4);
int FUN_0c03aec0(int a4, int a5, int a6, int a7);
int FUN_0c0b34ba(int a4, int a5, int a6, int a7);
int FUN_0c03a0cc(int a4, int a5, int a6, int a7);
int FUN_0c071286(int a4, int a5, int a6, int a7);
int FUN_0c0f4d74(int a4, int a5, int a6, int a7);

int FUN_0c097e22(int a4)
{
    int stk[2];
    register int t0;
    register int t4;

    t0 = FUN_0c09d89c(a4);
    if ((signed char)t0 == 0) {
        if ((*(signed char *)((a4 + 0x7206))) != 0) {
            (((struct o7206_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x7206))) - 1);
            t4 = FUN_0c097fc4(a4);
            if ((signed char)t4 != 0) {
                FUN_0c0a2e26(a4, 0xB, 0x0, 0x0);
            }
        }
        return FUN_0c08a9a8(a4);
    }
    return (signed char)t0;
}

int FUN_0c071676(int a4)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t7;

    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0a2080(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c09a7ba(a4);
    }
    t5 = *(signed char *)((a4 + 0xB));
    if (t5 == 0) {
        t7 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t7 == 56) {
            return FUN_0c0a3dcc((*(signed char *)((a4 + 0x3))), 0x0);
        }
        return (unsigned short)t7;
    }
    return t5;
}

int FUN_0c0ae5a6(int a4)
{
    register int t0;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0ae520(a4);
    }
    return FUN_0c0ae4f0(a4);
}

int FUN_0c0ae898(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    FUN_0c0ace56(a4);
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0b1efe(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = FUN_0c0ac600(a4);
    t1 = t0;
    if (t0 != 0) {
        FUN_0c0b1f70(a4, 0x2);
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0b2236(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = FUN_0c0ac600(a4);
    t1 = t0;
    if (t0 != 0) {
        FUN_0c0b22ac(a4, 0x2);
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c065630(int a4)
{
    int stk[2];
    register int t0;
    register int t3;

    t0 = FUN_0c09a910(a4);
    t3 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o7205_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        FUN_0c0a2e26(a4, 0x10, 0x0, 0x0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t3 = 0x71A8;
    }
    return t3;
}

int FUN_0c03aec0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x6C) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t0 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
        if (t0 != 33) {
            t1 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
            return (t1 + 0x1);
        }
        return t0;
    }
    return FUN_0c059330(a4, a5, a6, a7);
}

int FUN_0c0b34ba(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = FUN_0c0ac600(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c03a0cc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 + 0x1);
        if (((int)(short)(t2 + 0x1) < (int)0x4B) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 22)) {
            return t1;
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return FUN_0c059330(a4, a5, a6, a7);
}

int FUN_0c071286(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c071264(a4);
                }
                return ((int (*)(int, int, int, int))(0xC0711B4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0710A8))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC070FD0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC070F52))(a4, a5, a6, a7);
}

int FUN_0c0f4d74(int a4, int a5, int a6, int a7)
{
    *(unsigned short *)((((a5 << 1) + (a4 + 0x42)) + 0x0)) = a6;
    if ((int)a5 < (int)(*(signed char *)((a4 + 0x3)))) {
        return ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), a5, a6, a7);
    }
    return (ADXERR_CallErrFunc(a4, a5, a6, a7, 0xC15A8E8));
}
