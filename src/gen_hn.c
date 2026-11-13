/* Straight-line functions with calls and guards (batch gen_hn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F1_uchar { char p[0x71F1]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oA2_short { char p[0xA2]; short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
int FUN_0c05f2d4(int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c09939c(void);
int FUN_0c0993e4(int);
int FUN_0c099a24(int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c0ccefc(int, float, float);
int FUN_0c0d0024(int);
int FUN_0c0e6fe8(void);
int sprintf(int, int, int, int, int);
int thunk_FUN_0c05fff4(void);
int FUN_0c0d0e50(int a4, int a5, int a6, int a7);
int FUN_0c0a77ec(int a4);

int FUN_0c0d0e50(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t25;
    register int t27;
    register int t144;
    register int t167;
    register int t169;
    register int t193;

    t0 = *(signed char *)((a4 + 0x5));
    if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
        *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) - 1);
    }
    if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
        *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
    *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) & 0x3);
    *(int *)((int)stk + 0) = 0xC1544B4;
    sprintf(0xC7F36B8, a5, a6, a7, 0xC1544B4);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0x8) << 2) << 1), (float)((((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))) + 0x3) << 2) << 1));
    if ((((((struct o48_int *)(a4))->v)) & 192) == 0) {
    } else {
        (((struct oA2_ushort *)(a4))->v) = 0x0;
        t25 = 0x1;
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t25 = 0xFFFFFFFF;
        }
        t27 = *(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC));
        switch (t27) {
        case 0:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) + t25);
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) < 0) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0xA;
            }
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) > (int)0xA) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0x0;
            }
            thunk_FUN_0c05fff4();
            FUN_0c09939c();
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            *(unsigned char *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)) = (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)));
            thunk_FUN_0c05fff4();
            FUN_0c09939c();
            FUN_0c0993e4(t0);
            FUN_0c05f2d4(0x0, 0x0);
            *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x7)) = 0x0;
            FUN_0c0d0024(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x9))));
            break;
        case 1:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7))) + t25);
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7))) & 0x1);
            (((struct o71F1_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)));
            FUN_0c099a24(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            break;
        case 2:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) + t25);
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) < 0) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x4;
            }
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) > (int)0x4) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x0;
            }
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))));
            (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            FUN_0c0d0024(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            break;
        case 3:
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))) + t25);
            *(unsigned char *)(((int)stk + 8)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x9)));
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)(((int)stk + 8))));
            (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            FUN_0c0d0024(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            break;
        }
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x4) != 0) {
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
        FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))));
        (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
        (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
        *(volatile signed char *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x3));
        FUN_0c0e6fe8();
        FUN_0c0d0024(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
        *(volatile signed char *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x3));
        FUN_0c0e6fe8();
        (((struct oA2_ushort *)(a4))->v) = 0x0;
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x400) != 0) {
        (((struct o15_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) + 0x1);
        (((struct o15_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) & 0x1);
    }
    if (0x0 != 0) {
        (((struct o14_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14))) + 0x1);
        (((struct o14_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14))) & 0x3);
    }
    if ((((((struct o48_int *)(a4))->v)) & 2) != 0) {
        *(unsigned int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30)) = ((*(int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30))) + 0x2000);
        *(unsigned int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30)) = ((*(int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30))) & 0xFFFF);
    }
    if ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) != 0) {
        t193 = 0x48;
        if ((((((struct o48_int *)(a4))->v)) & 0x200) == 0) {
        } else {
            t144 = FUN_0c09a910(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            t193 = (signed char)t144;
            if ((signed char)t144 == 64) {
                if (((((struct oA2_short *)(a4))->v)) == 0) {
                    (((struct oA2_ushort *)(a4))->v) = (*(short *)((0xC7EB262 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x5))) * (unsigned short)0x72D0))));
                }
                t193 = 0xA2;
            }
        }
    } else {
        t167 = *(signed char *)(((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x16) + 0x0));
        (((struct o16_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = (t167 + 0x1);
        t193 = 0x14;
        if ((int)(unsigned char)(t167 + 0x1) > (int)(unsigned char)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14)))) {
            (((struct o16_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
            t169 = FUN_0c09a910(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            t193 = (signed char)t169;
            if ((signed char)t169 == 64) {
                if (((((struct oA2_short *)(a4))->v)) == 0) {
                    (((struct oA2_ushort *)(a4))->v) = (*(short *)((0xC7EB262 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x5))) * (unsigned short)0x72D0))));
                }
                t193 = 0xA2;
            }
        }
    }
    return t193;
}

int FUN_0c0a77ec(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = 0x0;
    for (;;) {
        if (t1 == 0) {
            t2 = *(signed char *)((a4 + 0x4));
            t3 = 0x47;
            if (t2 == 10) {
            } else {
                t3 = ((*(signed char *)((0xC1525B4 + t2))) + 0xF);
            }
            FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), 0xC664A78, t3);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0x8000;
            if ((*(signed char *)((a4 + 0x3))) != 0) {
                t3 = 0x0;
            }
            *(unsigned int *)((t2 + 0x14)) = t3;
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0xFFFFFFCE;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t3 = 0x32;
            }
            (((struct o4_float *)(t2))->v) = (float)t3;
            (((struct o8_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = 50.0f;
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o4_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o8_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 0.849999964f)) / 640.0f);
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 0.699999988f)) / 480.0f);
        } else {
            if (((*(signed char *)0xC7F2F08) != 0) && (t0 = *(signed char *)((a4 + 0x4)), t0 == 0)) {
                FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), 0xC664A78, 0x3);
            } else {
                t2 = *(signed char *)((a4 + 0x4));
                t3 = 0x46;
                if (t2 == 10) {
                } else {
                    t3 = ((*(signed char *)((0xC1525B4 + t2))) + 0x19);
                }
                FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))), 0xC664A78, t3);
            }
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            t3 = 0xFFFFFFCE;
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                t3 = 0x32;
            }
            (((struct o4_float *)(t2))->v) = (float)t3;
            (((struct o8_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = (*(float *)0xC0A7A68);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o4_float *)(t2))->v)));
            (((struct o4_float *)(t2))->v) = ((-(u0 * 1.0f)) / 640.0f);
            t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
            u0 = (((((struct o28_float *)(a4))->v)) * ((((struct o8_float *)(t2))->v)));
            (((struct o8_float *)(t2))->v) = ((-(u0 * 1.0f)) / 480.0f);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / 640.0f);
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0)))))->v) = ((-(((((struct o28_float *)(a4))->v)) * 1.0f)) / 480.0f);
        }
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0))) + 0x0)) = 0x1;
        t2 = *(int *)((((0x2E0 + a4) + (t1 << 2)) + 0x0));
        t3 = (t1 << 2);
        t1 = (t1 + 0x1);
        *(unsigned short *)((t2 + 0x2)) = 0x11F;
        (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t3) + 0x0)))))->v) = 1.0f;
        if ((int)t1 < (int)0x2) continue;
        break;
    }
    return 0x24;
}
