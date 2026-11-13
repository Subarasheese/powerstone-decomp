/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30C_uchar { char p[0x30C]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c059132(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0c63c4(int, int);
struct V12 { int x, y, z; };
int FUN_0c05a96c(int a4, int a5);

int FUN_0c05a96c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t128;
    register int t20;
    register int t25;
    register int t32;
    register int t33;
    register int t38;
    register int t93;
    register int t94;
    register int t95;
    register int t14;
    register int t26;
    register int t30;
    register int t31;
    register int t119;
    register int t110;
    register int t92;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t2 = FUN_0c059132(0x3, 0x1, (*(int *)(((t0 << 2) + 0xC3361D4))));
    t128 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        *(unsigned char *)((t2 + 0x8)) = 0x0;
        *(unsigned char *)((t2 + 0x9)) = 0x0;
        *(unsigned char *)((t2 + 0xA)) = 0x0;
        *(unsigned char *)((t2 + 0xB)) = 0x0;
        *(unsigned char *)((t2 + 0xD)) = (*(signed char *)(((int)stk + 4)));
        (((struct o30D_uchar *)(t2))->v) = 0x10;
        (((struct o30F_uchar *)(t2))->v) = 0x2;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((t0 << 2) + 0xC33618C)));
        *(unsigned char *)((t2 + 0x4)) = 0x6;
        (((struct o30C_uchar *)(t2))->v) = (*(signed char *)(((int)stk + 0)));
        (((struct o102_uchar *)(t2))->v) = (*(signed char *)(((t0 << 2) + 0xC335F2A)));
        (((struct o105_uchar *)(t2))->v) = 0x1;
        (((struct o106_uchar *)(t2))->v) = 0x1;
        (((struct oF0_ushort *)(t2))->v) = (*(signed char *)(((((*(signed char *)((t2 + 0x30C))) << 2) + 0xC336120) + 0x0)));
        if (((((struct oF0_short *)(t2))->v)) != 0) {
            t14 = (*(signed char *)(((0xC336120 + ((*(signed char *)((t2 + 0x30C))) << 2)) + 0x1)));
        } else {
            t14 = (*(short *)(((0xC336120 + ((*(signed char *)((t2 + 0x30C))) << 2)) + 0x2)));
        }
        (((struct oF2_ushort *)(t2))->v) = t14;
        (((struct o2D9_uchar *)(t2))->v) = 0x0;
        (((struct o2DA_uchar *)(t2))->v) = 0x1;
        t20 = *(signed char *)(((int)stk + 4));
        *(struct V12 *)(t2 + 32) = *(struct V12 *)(0xC33CA80 + (short)(72 * *(signed char *)(0xC7F302C + 37)) + (signed char)(t20 * 24));
        *(struct V12 *)(t2 + 44) = *(struct V12 *)(0xC33CA80 + (short)(72 * *(signed char *)(0xC7F302C + 37)) + (signed char)(t20 * 24) + 12);
        *(struct V12 *)(t2 + 80) = *(struct V12 *)0xC336174;
        FUN_0c06233a(((((struct o2E0_int *)(t2))->v)), 0xC664988, (*(signed char *)(((t0 << 2) + 0xC335F28))));
        *(unsigned char *)((((((struct o2E0_int *)(t2))->v)) + 0x0)) = 0x1;
        t38 = *(signed char *)((t2 + 0x30C));
        if ((unsigned int)(t38 - 1) >= (unsigned int)0xE) {
            *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
            t119 = 0xF;
        } else {
            switch (((t38 - 1) << 1)) {
                case 0:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct o2E4_int *)(t2))->v)), 0xC4CFA68, 0x79);
                    *(unsigned char *)((((((struct o2E4_int *)(t2))->v)) + 0x0)) = 0x0;
                    *(unsigned short *)((((((struct o2E4_int *)(t2))->v)) + 0x2)) = 0x1F;
                    (((struct o4_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.0f;
                    (((struct o8_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 12.3999996f;
                    (((struct oC_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 76.0f;
                    (((struct o1C_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.0f;
                    (((struct o20_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.0f;
                    (((struct o24_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.0f;
                    t110 = 0x24;
                }
                    break;
                case 2:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x1F;
                    (((struct o1C_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.5f;
                    (((struct o20_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.5f;
                    (((struct o24_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.5f;
                    t110 = 0x24;
                }
                    break;
                case 4:
                case 6:
                case 8:
                case 10:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    (((struct o8_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 50.0f;
                    t110 = 0x8;
                }
                    break;
                case 12:
                {
                    FUN_0c0c63c4(t2, 0x2);
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x20F;
                    (((struct o44_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    t110 = 0x4C;
                }
                    break;
                case 14:
                {
                    FUN_0c0c63c4(t2, 0x1);
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x20F;
                    (((struct o44_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    t110 = 0x4C;
                }
                    break;
                case 16:
                {
                    FUN_0c0c63c4(t2, 0x0);
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x20F;
                    (((struct o44_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o48_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o4C_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    t110 = 0x4C;
                }
                    break;
                case 18:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct o2E4_int *)(t2))->v)), 0xC4CFA68, 0x84);
                    *(unsigned char *)((((((struct o2E4_int *)(t2))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2E4_int *)(t2))->v)) + 0x2)) = 0x3F;
                    (((struct o1C_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.199999988f;
                    (((struct o20_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.199999988f;
                    (((struct o24_float *)(((((struct o2E4_int *)(t2))->v))))->v) = 0.199999988f;
                    t110 = 0x24;
                }
                    break;
                case 20:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    t110 = 0xF;
                }
                    break;
                case 22:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0x1F;
                    (((struct o8_float *)(((((struct o2E0_int *)(t2))->v))))->v) = -30.0f;
                    (((struct o1C_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    (((struct o20_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 0.199999988f;
                    (((struct o24_float *)(((((struct o2E0_int *)(t2))->v))))->v) = 1.0f;
                    t110 = 0x24;
                }
                    break;
                case 24:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct o2E4_int *)(t2))->v)), 0xC664988, 0x13);
                    *(unsigned char *)((((((struct o2E4_int *)(t2))->v)) + 0x0)) = 0x1;
                    t93 = (((struct o2E4_int *)(t2))->v);
                    *(unsigned short *)((t93 + 0x2)) = 0xF;
                    t94 = 0x2;
                    t95 = 0x8;
                    for (;;) {
                        if ((int)t94 >= (int)0x5) {
                            break;
                        }
                        FUN_0c06233a((*(int *)((((0x2E0 + t2) + t95) + 0x0))), 0xC664988, 0x14);
                        t93 = 0x2E0;
                        t93 = (t93 + t2);
                        t93 = (t93 + t95);
                        t92 = (*(int *)((t93 + 0x0)));
                        t93 = 0x2E0;
                        *(unsigned char *)((t92 + 0x0)) = 0x0;
                        t93 = (t93 + t2);
                        t93 = (t93 + t95);
                        t92 = (*(int *)((t93 + 0x0)));
                        t95 = (t95 + 0x4);
                        *(unsigned short *)((t92 + 0x2)) = 0xF;
                        t94 = (t94 + 0x1);
                    }
                    FUN_0c06233a(((((struct o2F4_int *)(t2))->v)), 0xC664988, 0x19);
                    *(unsigned short *)((((((struct o2F4_int *)(t2))->v)) + 0x2)) = 0x29;
                    (((struct o8_float *)(((((struct o2F4_int *)(t2))->v))))->v) = 7.0f;
                    (((struct oC_float *)(((((struct o2F4_int *)(t2))->v))))->v) = 93.1719971f;
                    t110 = 0xC;
                }
                    break;
                default:
                {
                    *(unsigned short *)((((((struct o2E0_int *)(t2))->v)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct o2E4_int *)(t2))->v)), 0xC664988, 0x1E);
                    *(unsigned char *)((((((struct o2E4_int *)(t2))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct o2E4_int *)(t2))->v)) + 0x2)) = 0x219;
                    t110 = 0x219;
                }
                    break;
            }
            t119 = t110;
        }
        t128 = t119;
    }
    return t128;
}
