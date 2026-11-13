/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o7198_short { char p[0x7198]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c027fa4(int, int, int, int, int, int);
int FUN_0c028ea0(int, int, float);
int FUN_0c02f328(int);
int FUN_0c059132(int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0623a6(int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09c7be(int, int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09db78(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0dc18e(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0df940(void);
float FUN_0c0dfa50(int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int FUN_0c0fdef0(int, int, int, int);
int gdFsGetDrvStatG(int, int, int, int);
int strlen(int);
int FUN_0c08f000(int a4, int a5);
int FUN_0c028f48(int a4);
int FUN_0c03107e(void);
int FUN_0c048c18(int a4, int a5, float f4);
int FUN_0c056e8c(int a4, int a5, int a6, int a7);
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int FUN_0c0aa6ba(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0990fc(int a4, int a5, int a6, int a7);

int FUN_0c08f000(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    t0 = *(signed char *)((a4 + 0x71BB));
    if ((t0 == 27) || (t0 == 24)) {
        t0 = *(int *)((a4 + 0x30));
        t1 = FUN_0c09db78(a4);
        t2 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t2 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        if (((int)t2 >= (int)0xFFFFC000) && ((int)t2 <= (int)0x4000)) {
            *(unsigned int *)((a4 + 0x30)) = (FUN_0c09db78(a4));
        } else {
            if ((int)t2 > 0) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x4000);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x4000);
            }
        }
    }
    if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) == 0) {
        t0 = *(signed char *)((a4 + 0x71DC));
        t1 = 0x0;
        if ((t0 != 1) && (t0 != 2)) {
            t0 = *(signed char *)((a4 + 0x71DC));
            t2 = 0x2;
            if (((int)t0 >= (int)0x3) && ((int)t0 <= (int)0x5)) {
                t2 = 0x1;
            }
            t1 = t2;
        }
        t0 = t1;
        if ((int)(*(signed char *)((a4 + 0x7213))) >= (int)0x4) {
            t0 = (t1 + 0x3);
        }
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            t1 = *(signed char *)((a4 + 0x7205));
            t2 = ((signed char)((t1 << 1) + (t1 << 2)) + 0xC1507CE);
        } else {
            t1 = *(signed char *)((a4 + 0x7205));
            t2 = ((signed char)((t1 << 1) + (t1 << 2)) + 0xC1507E6);
        }
        (((struct oEC_ushort *)(a4))->v) = (*(signed char *)(((signed char)t0 + t2)));
    } else {
        if ((*(signed char *)((a4 + 0x71BC))) == 0) {
            t0 = *(signed char *)((a4 + 0x7205));
            (((struct oEC_ushort *)(a4))->v) = (*(signed char *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC1507CE) + ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1))));
        } else {
            t0 = *(signed char *)((a4 + 0x7205));
            (((struct oEC_ushort *)(a4))->v) = (*(signed char *)((((signed char)((t0 << 1) + (t0 << 2)) + 0xC1507E6) + ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1))));
        }
    }
    FUN_0c09a808(a4, 0x2, ((((struct oEC_short *)(a4))->v)));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = 0x0;
    for (;;) {
        if (!((*(float *)(((t0 << 2) + (*(int *)((0xC338C34 + ((*(signed char *)((a4 + 0x7213))) << 2))))))) > 0.0f)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = *(signed char *)((a4 + 0x719C));
    t2 = (((struct o7198_short *)(a4))->v);
    t3 = *(int *)(((((*(signed char *)(((0x71A4 + a4) + 0x0))) << 2) + (0xA1234 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50))) + 0x0));
    t4 = (*(signed char *)((((t3 + (((unsigned short)t2 << 2) << 1)) + (((signed char)t1 << 2) << 1)) + 0x5)));
    t5 = (((unsigned short)t2 << 2) << 1);
    t6 = (((signed char)t1 << 2) << 1);
    t7 = ((t3 + (((unsigned short)t2 << 2) << 1)) + (((signed char)t1 << 2) << 1));
    t2 = t1;
    for (;;) {
        if ((*(signed char *)((t7 + 0x4))) != 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t6 = 0xA1234;
        t4 = (t4 + (*(signed char *)((t7 + 0x5))));
        t7 = 0x71A4;
        t7 = (t7 + a4);
        t7 = (*(signed char *)((t7 + 0x0)));
        t7 = (t7 << 2);
        t6 = (t6 + (((*(signed char *)((a4 + 0x3))) * 0xB5EC8) + 0xC664B50));
        t7 = (t7 + t6);
        t5 = ((((struct o7198_short *)(a4))->v));
        t6 = (signed char)t2;
        t7 = (*(int *)((t7 + 0x0)));
        t6 = (t6 << 2);
        t5 = (unsigned short)t5;
        t5 = (t5 << 2);
        t5 = (t5 << 1);
        t6 = (t6 << 1);
        t7 = (t7 + t5);
        t7 = (t7 + t6);
    }
    (((struct oEE_ushort *)(a4))->v) = (t0 - (signed char)t4);
    if ((int)((((struct oEE_short *)(a4))->v)) <= 0) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    (((struct oF0_ushort *)(a4))->v) = (unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x3)));
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct oF0_ushort *)(a4))->v) = 0x1;
    }
    if (((((struct o7294_int *)(a4))->v)) != 0) {
        t0 = (((((struct o72A8_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    } else {
        t0 = ((*(int *)((a4 + 0x30))) - (int)(((float)(*(signed char *)((a4 + 0x7212))) * 737280.0f) / 360.0f));
    }
    (((struct o7248_uint *)(a4))->v) = t0;
    (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) & 0xFFFF);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct oF2_ushort *)(a4))->v) = 0x0;
    return 0xF2;
}

int FUN_0c028f48(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x2C));
    t1 = *(int *)((a4 + 0x4));
    u0 = (((struct o8_float *)(a4))->v);
    if ((int)t1 > 0) {
        t2 = 0x28;
        if ((*(signed char *)0xC7F2F08) != 0) {
        } else {
            t3 = FUN_0c059132(0x5, 0x1, 0x1);
            t4 = t3;
            if (t3 != 0) {
                *(unsigned int *)((t3 + 0x10)) = 0xC028C88;
                FUN_0c028ea0(a4, t3, u0);
                (((struct o28_float *)(t3))->v) = 8.0f;
                t5 = 0x0;
                u1 = 8.0f;
                for (;;) {
                    if ((int)t5 >= (int)(*(signed char *)((t3 + 0x2DC)))) {
                        break;
                    }
                    t6 = t5;
                    t6 = (t6 << 2);
                    t6 = (t6 + (0x2E0 + t3));
                    t6 = (*(int *)((t6 + 0x0)));
                    *(unsigned char *)((t6 + 0x0)) = 0x1;
                    *(unsigned char *)((t6 + 0x1)) = 0x0;
                    *(unsigned short *)((t6 + 0x2)) = 0x100F;
                    FUN_0c06233a(t6, 0xC6649E8, (*(int *)((a4 + 0x4))));
                    u1 = ((((struct o50_float *)(t3))->v));
                    (((struct o98_float *)(t6))->v) = u1;
                    u1 = ((((struct o98_float *)(t6))->v));
                    if (1.0f > u1) {
                        (((struct o98_float *)(t6))->v) = 1.0f;
                    }
                    u1 = ((((struct o54_float *)(t3))->v));
                    t5 = (t5 + 0x1);
                    if (u1 > (((((struct o98_float *)(t6))->v)))) {
                        u1 = ((((struct o54_float *)(t3))->v));
                        (((struct o98_float *)(t6))->v) = u1;
                    }
                }
                t4 = 0x2DC;
            }
            t2 = t4;
        }
        return t2;
    }
    if ((int)t1 < 0) {
        t1 = 0x28;
        if ((*(signed char *)0xC7F2F08) != 0) {
        } else {
            t2 = FUN_0c059132(0x5, 0x1, 0x1);
            t3 = t2;
            if (t2 != 0) {
                *(unsigned int *)((t2 + 0x10)) = 0xC028DEC;
                FUN_0c028ea0(a4, t2, u0);
                t4 = 0x0;
                for (;;) {
                    if ((int)t4 >= (int)(*(signed char *)((t2 + 0x2DC)))) {
                        break;
                    }
                    t5 = t4;
                    t5 = (t5 << 2);
                    t5 = (t5 + (0x2E0 + t2));
                    t5 = (*(int *)((t5 + 0x0)));
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                    *(unsigned char *)((t5 + 0x1)) = 0x0;
                    *(unsigned short *)((t5 + 0x2)) = 0x100F;
                    FUN_0c06233a(t5, 0xC6649E8, (-(*(int *)((a4 + 0x4)))));
                    u0 = ((((struct o50_float *)(t2))->v));
                    (((struct o98_float *)(t5))->v) = u0;
                    u0 = ((((struct o98_float *)(t5))->v));
                    if (1.0f > u0) {
                        (((struct o98_float *)(t5))->v) = 1.0f;
                    }
                    u0 = ((((struct o54_float *)(t2))->v));
                    t4 = (t4 + 0x1);
                    if (u0 > (((((struct o98_float *)(t5))->v)))) {
                        u0 = ((((struct o54_float *)(t2))->v));
                        (((struct o98_float *)(t5))->v) = u0;
                    }
                }
                t3 = 0x2DC;
            }
            t1 = t3;
        }
        return t1;
    }
    if (t0 == 0) {
        return 0x8;
    }
    strlen((*(int *)((a4 + 0x2C))));
    return ((int (*)(void))(0xC029218))();
}

int FUN_0c03107e(void)
{
    int stk[20];
    register int t0;
    register int t6;
    register int t51;
    register int t53;
    int t54;
    register int t55;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t33;
    register int t35;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t89;
    register int t90;
    register int t91;
    register float t112;
    register int t113;
    register float u114;
    register float t116;
    register float u119;
    register float t121;
    register float u126;
    register float u127;
    register int t138;
    register int t183;
    register int t185;
    int t186;
    register int t187;
    register int t139;
    register int t140;
    register int t142;
    register int t143;
    register int t144;
    register int t145;
    register int t165;
    register int t167;
    register int t189;
    register int t190;
    register int t191;
    register int t192;
    register int t193;
    register int t221;
    register int t222;
    register int t223;
    register float t244;
    register int t245;
    register float u246;
    register float t248;
    register float u251;
    register float t253;
    register float u258;
    register float u259;
    register int t38;
    register int t41;
    register int t43;
    register int t44;
    register int t45;
    register int t9;
    register int t14;
    int t15;
    register int t36;
    int t20;
    register int t21;
    register int t29;
    register int t31;
    register int t32;
    register int t24;
    register int t25;
    register int t28;
    register float u62;
    register float u63;
    int t72;
    int t88;
    register int t107;
    register int t108;
    register int t170;
    register int t173;
    register int t175;
    register int t176;
    register int t177;
    register int t141;
    register int t146;
    int t147;
    register int t168;
    int t152;
    register int t153;
    register int t161;
    register int t163;
    register int t164;
    register int t156;
    register int t157;
    register int t160;
    register float u194;
    register float u195;
    int t204;
    int t220;
    register int t239;
    register int t240;

    t0 = *(signed char *)0xC366EEC;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(int *)0xC7F3028) != 0) {
            (((struct o10_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EFC) + 0x1);
        }
        t6 = *(signed char *)0xC366EFC;
        (((struct o10_uchar *)0xC366EEC)->v) = (t6 - 1);
        t51 = (signed char)(t6 - 1);
        t53 = 0xC366EEC;
        t54 = 0x1;
        t55 = 0x3;
        if ((signed char)(t6 - 1) == 0) {
            t7 = *(signed char *)0xC366EFD;
            (((struct o11_uchar *)0xC366EEC)->v) = (t7 ^ 0x1);
            if ((signed char)(t7 ^ 0x1) == 0) {
                (((struct o10_uchar *)0xC366EEC)->v) = 0xA;
                t38 = 0xC366EFC;
                t41 = (signed char)(t7 ^ 0x1);
                t43 = 0xC366EEC;
                t44 = 0x1;
                t45 = 0x3;
            } else {
                (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
                t8 = 0x10;
                t10 = 0xC366EEC;
                t11 = 0x1;
                t12 = 0x3;
                t13 = 0x0;
                for (;;) {
                    t29 = *(signed char *)((((t10 + 0xC) + t13) + 0x0));
                    t33 = t29;
                    t35 = t11;
                    if ((int)t29 > (int)t11) {
                        t8 = (*(signed char *)0xC7F4755);
                        if ((t8 != 0) && (t20 = (t8 == 0), t8 = 0x15, t21 = *(signed char *)((0xC7F4750 + t8)), t21 != 0)) {
                            *(unsigned char *)((((t10 + 0x4) + t13) + 0x0)) = 0x0;
                            t31 = t11;
                            t32 = t12;
                        } else {
                            t15 = 0x0;
                            for (;;) {
                                t14 = t10;
                                t14 = (t14 + 0x4);
                                t14 = (t14 + t13);
                                t9 = (*(signed char *)((t14 + 0x0)));
                                t9 = (t9 + 0x1);
                                t8 = t12;
                                t8 = (FUN_0c0e6e5c(t10));
                                t10 = t24;
                                t13 = t25;
                                *(unsigned char *)((t14 + 0x0)) = t8;
                                t9 = (*(signed char *)((((t10 + 0x4) + t13) + 0x0)));
                                if ((((*(signed char *)((((t24 + 0x8) + t25) + 0x0))) & ((int)0x1 << (int)t9)) == 0) && (t15 = (t15 + 0x1), t12 = t28, (int)t15 < (int)t28)) continue;
                                break;
                            }
                            t29 = ((int)0x1 << (int)t9);
                        }
                        t33 = t29;
                        t35 = t31;
                        t36 = t32;
                    } else {
                        t36 = t12;
                    }
                    t11 = t35;
                    t12 = t36;
                    t13 = (t13 + 0x1);
                    if ((int)t13 >= (int)0x4) {
                        break;
                    }
                }
                t38 = t9;
                t60 = t14;
                t61 = t15;
                t41 = t33;
                t43 = t10;
                t44 = t11;
                t45 = t12;
            }
            t57 = t38;
            t51 = t41;
            t53 = t43;
            t54 = t44;
            t55 = t45;
        }
        *(unsigned int *)((t53 + 0x8)) = 0x0;
        *(unsigned int *)((t53 + 0xC)) = 0x0;
        t58 = t51;
        t59 = 0x0;
        for (;;) {
            if ((int)t59 >= (int)((*(signed char *)0xC7F4765) + 0x3)) {
                break;
            }
            t61 = t59;
            t61 = (t61 << 2);
            t61 = (t61 + 0xC7F297C);
            t61 = (*(int *)((t61 + 0x0)));
            if ((t61 != 0) && (t72 = *(signed char *)((t61 + 0x1)), t72 != 0)) {
                u63 = 0.0f;
                u62 = ((((struct o20_float *)(t61))->v));
                t60 = 0x0;
                if (u63 > u62) {
                    t60 = 0x2;
                }
                u63 = 0.0f;
                u62 = ((((struct o28_float *)(t61))->v));
                if (u63 > u62) {
                    t60 = (t60 + 0x1);
                }
                t58 = t53;
                t61 = 0xC14948E;
                t58 = (t58 + 0x8);
                t57 = t54;
                t57 = ((int)t57 << (int)t59);
                t61 = (t61 + ((*(signed char *)0xC7F3051) << 2));
                t61 = (t61 + t60);
                t61 = (*(signed char *)((t61 + 0x0)));
                t58 = (t58 + t61);
                *(unsigned char *)((t58 + 0x0)) = ((*(signed char *)((t58 + 0x0))) | t57);
                t58 = t53;
                t58 = (t58 + 0xC);
                t61 = (t61 + t58);
                t57 = (*(signed char *)((t61 + 0x0)));
                t57 = (t57 + 0x1);
                *(unsigned char *)((t61 + 0x0)) = t57;
            }
            t59 = (t59 + 0x1);
        }
        if (((*(signed char *)0xC7F4755) != 0) && (t88 = *(signed char *)0xC7F4765, t88 != 0)) {
            *(unsigned char *)(((t53 + 0x4) + 0x3)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x2)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x1)) = 0x0;
            *(unsigned char *)(((t53 + 0x4) + 0x0)) = 0x0;
            t107 = (t53 + 0x4);
            t108 = t59;
        } else {
            t89 = 0x0;
            for (;;) {
                t90 = *(signed char *)((((t53 + 0x4) + t89) + 0x0));
                t91 = 0x0;
                for (;;) {
                    if ((((int)(*(signed char *)((((t53 + 0x8) + t89) + 0x0))) << (int)(-t91)) & t54) != 0) {
                        *(unsigned char *)((((t53 + 0x4) + t89) + 0x0)) = t91;
                    }
                    t91 = (t91 + 0x1);
                    if ((int)t91 >= (int)t55) {
                        break;
                    }
                }
                if ((int)(*(signed char *)((((t53 + 0xC) + t89) + 0x0))) > (int)t54) {
                    *(unsigned char *)((((t53 + 0x4) + t89) + 0x0)) = t90;
                }
                t89 = (t89 + 0x1);
                if ((int)t89 >= (int)0x4) {
                    break;
                }
            }
            t107 = t54;
            t108 = t89;
        }
        if ((*(signed char *)((t53 + 0x11))) != 0) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 16)) = (t53 + 0x4);
            *(unsigned int *)(((int)stk + 12)) = 0xC1494BC;
            if ((*(signed char *)(((t53 + 0x8) + 0x0))) != 0) {
                t112 = FUN_0c0df4d0((*(int *)0xC7F2B0C));
                t113 = *(int *)(((int)stk + 12));
                u114 = *(float *)((t113 + 0x0));
                *(float *)(((int)stk + 4)) = (t112 * u114);
                t116 = FUN_0c0dfa50((*(int *)0xC7F2B0C));
                *(unsigned int *)(((int)stk + 20)) = (t113 + 0x4);
                u119 = (t116 * ((((struct o4_float *)(t113))->v)));
                *(float *)(((int)stk + 28)) = ((((t112 * u114)) - u119) + 320.0f);
                t121 = FUN_0c0dfa50((*(int *)0xC7F2B0C));
                *(float *)(((int)stk + 4)) = t121;
                u126 = *(float *)((t113 + 0x0));
                u127 = ((FUN_0c0df4d0((*(int *)0xC7F2B0C))) * (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))));
                u127 = u127 + u126 * t121;
                *(float *)(((int)stk + 32)) = ((u127 + (*(float *)0xC366A78)) + 430.0f);
                *(float *)(((int)stk + 36)) = 8.0f;
                *(unsigned int *)(((int)stk + 76)) = 0xA;
                *(float *)(((int)stk + 68)) = 1.0f;
                *(unsigned int *)(((int)stk + 64)) = 0x0;
                *(float *)(((int)stk + 40)) = 0.75f;
                *(float *)(((int)stk + 44)) = 0.75f;
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x0;
                return (FUN_0c027fa4((((int)stk + 0) + 0x18), 0xC17FDB0, 0x2, ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0xD), 0x0, 0x0));
            }
            return ((int (*)(int, int, int, int))(0xC031322))(t53, t107, t55, t108);
        }
        return 0x11;
    }
    (((struct o0_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EEC) + 0x1);
    (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
    (((struct o11_uchar *)0xC366EEC)->v) = 0x1;
    if ((*(int *)0xC7F3028) != 0) {
        (((struct o10_uchar *)0xC366EEC)->v) = ((*(signed char *)0xC366EFC) + 0x1);
    }
    t138 = *(signed char *)0xC366EFC;
    (((struct o10_uchar *)0xC366EEC)->v) = (t138 - 1);
    t183 = (signed char)(t138 - 1);
    t185 = 0xC366EEC;
    t186 = 0x1;
    t187 = 0x3;
    if ((signed char)(t138 - 1) == 0) {
        t139 = *(signed char *)0xC366EFD;
        (((struct o11_uchar *)0xC366EEC)->v) = (t139 ^ 0x1);
        if ((signed char)(t139 ^ 0x1) == 0) {
            (((struct o10_uchar *)0xC366EEC)->v) = 0xA;
            t170 = 0xC366EFC;
            t173 = (signed char)(t139 ^ 0x1);
            t175 = 0xC366EEC;
            t176 = 0x1;
            t177 = 0x3;
        } else {
            (((struct o10_uchar *)0xC366EEC)->v) = 0x14;
            t140 = 0x10;
            t142 = 0xC366EEC;
            t143 = 0x1;
            t144 = 0x3;
            t145 = 0x0;
            for (;;) {
                t161 = *(signed char *)((((t142 + 0xC) + t145) + 0x0));
                t165 = t161;
                t167 = t143;
                if ((int)t161 > (int)t143) {
                    t140 = (*(signed char *)0xC7F4755);
                    if ((t140 != 0) && (t152 = (t140 == 0), t140 = 0x15, t153 = *(signed char *)((0xC7F4750 + t140)), t153 != 0)) {
                        *(unsigned char *)((((t142 + 0x4) + t145) + 0x0)) = 0x0;
                        t163 = t143;
                        t164 = t144;
                    } else {
                        t147 = 0x0;
                        for (;;) {
                            t146 = t142;
                            t146 = (t146 + 0x4);
                            t146 = (t146 + t145);
                            t141 = (*(signed char *)((t146 + 0x0)));
                            t141 = (t141 + 0x1);
                            t140 = t144;
                            t140 = (FUN_0c0e6e5c(t142));
                            t142 = t156;
                            t145 = t157;
                            *(unsigned char *)((t146 + 0x0)) = t140;
                            t141 = (*(signed char *)((((t142 + 0x4) + t145) + 0x0)));
                            if ((((*(signed char *)((((t156 + 0x8) + t157) + 0x0))) & ((int)0x1 << (int)t141)) == 0) && (t147 = (t147 + 0x1), t144 = t160, (int)t147 < (int)t160)) continue;
                            break;
                        }
                        t161 = ((int)0x1 << (int)t141);
                    }
                    t165 = t161;
                    t167 = t163;
                    t168 = t164;
                } else {
                    t168 = t144;
                }
                t143 = t167;
                t144 = t168;
                t145 = (t145 + 0x1);
                if ((int)t145 >= (int)0x4) {
                    break;
                }
            }
            t170 = t141;
            t192 = t146;
            t193 = t147;
            t173 = t165;
            t175 = t142;
            t176 = t143;
            t177 = t144;
        }
        t189 = t170;
        t183 = t173;
        t185 = t175;
        t186 = t176;
        t187 = t177;
    }
    *(unsigned int *)((t185 + 0x8)) = 0x0;
    *(unsigned int *)((t185 + 0xC)) = 0x0;
    t190 = t183;
    t191 = 0x0;
    for (;;) {
        if ((int)t191 >= (int)((*(signed char *)0xC7F4765) + 0x3)) {
            break;
        }
        t193 = t191;
        t193 = (t193 << 2);
        t193 = (t193 + 0xC7F297C);
        t193 = (*(int *)((t193 + 0x0)));
        if ((t193 != 0) && (t204 = *(signed char *)((t193 + 0x1)), t204 != 0)) {
            u195 = 0.0f;
            u194 = ((((struct o20_float *)(t193))->v));
            t192 = 0x0;
            if (u195 > u194) {
                t192 = 0x2;
            }
            u195 = 0.0f;
            u194 = ((((struct o28_float *)(t193))->v));
            if (u195 > u194) {
                t192 = (t192 + 0x1);
            }
            t190 = t185;
            t193 = 0xC14948E;
            t190 = (t190 + 0x8);
            t189 = t186;
            t189 = ((int)t189 << (int)t191);
            t193 = (t193 + ((*(signed char *)0xC7F3051) << 2));
            t193 = (t193 + t192);
            t193 = (*(signed char *)((t193 + 0x0)));
            t190 = (t190 + t193);
            *(unsigned char *)((t190 + 0x0)) = ((*(signed char *)((t190 + 0x0))) | t189);
            t190 = t185;
            t190 = (t190 + 0xC);
            t193 = (t193 + t190);
            t189 = (*(signed char *)((t193 + 0x0)));
            t189 = (t189 + 0x1);
            *(unsigned char *)((t193 + 0x0)) = t189;
        }
        t191 = (t191 + 0x1);
    }
    if (((*(signed char *)0xC7F4755) != 0) && (t220 = *(signed char *)0xC7F4765, t220 != 0)) {
        *(unsigned char *)(((t185 + 0x4) + 0x3)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x2)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x1)) = 0x0;
        *(unsigned char *)(((t185 + 0x4) + 0x0)) = 0x0;
        t239 = (t185 + 0x4);
        t240 = t191;
    } else {
        t221 = 0x0;
        for (;;) {
            t222 = *(signed char *)((((t185 + 0x4) + t221) + 0x0));
            t223 = 0x0;
            for (;;) {
                if ((((int)(*(signed char *)((((t185 + 0x8) + t221) + 0x0))) << (int)(-t223)) & t186) != 0) {
                    *(unsigned char *)((((t185 + 0x4) + t221) + 0x0)) = t223;
                }
                t223 = (t223 + 0x1);
                if ((int)t223 >= (int)t187) {
                    break;
                }
            }
            if ((int)(*(signed char *)((((t185 + 0xC) + t221) + 0x0))) > (int)t186) {
                *(unsigned char *)((((t185 + 0x4) + t221) + 0x0)) = t222;
            }
            t221 = (t221 + 0x1);
            if ((int)t221 >= (int)0x4) {
                break;
            }
        }
        t239 = t186;
        t240 = t221;
    }
    if ((*(signed char *)((t185 + 0x11))) != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        *(unsigned int *)(((int)stk + 16)) = (t185 + 0x4);
        *(unsigned int *)(((int)stk + 12)) = 0xC1494BC;
        if ((*(signed char *)(((t185 + 0x8) + 0x0))) != 0) {
            t244 = FUN_0c0df4d0((*(int *)0xC7F2B0C));
            t245 = *(int *)(((int)stk + 12));
            u246 = *(float *)((t245 + 0x0));
            *(float *)(((int)stk + 4)) = (t244 * u246);
            t248 = FUN_0c0dfa50((*(int *)0xC7F2B0C));
            *(unsigned int *)(((int)stk + 20)) = (t245 + 0x4);
            u251 = (t248 * ((((struct o4_float *)(t245))->v)));
            *(float *)(((int)stk + 28)) = ((((t244 * u246)) - u251) + 320.0f);
            t253 = FUN_0c0dfa50((*(int *)0xC7F2B0C));
            *(float *)(((int)stk + 4)) = t253;
            u258 = *(float *)((t245 + 0x0));
            u259 = ((FUN_0c0df4d0((*(int *)0xC7F2B0C))) * (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))));
            u259 = u259 + u258 * t253;
            *(float *)(((int)stk + 32)) = ((u259 + (*(float *)0xC366A78)) + 430.0f);
            *(float *)(((int)stk + 36)) = 8.0f;
            *(unsigned int *)(((int)stk + 76)) = 0xA;
            *(float *)(((int)stk + 68)) = 1.0f;
            *(unsigned int *)(((int)stk + 64)) = 0x0;
            *(float *)(((int)stk + 40)) = 0.75f;
            *(float *)(((int)stk + 44)) = 0.75f;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            return (FUN_0c027fa4((((int)stk + 0) + 0x18), 0xC17FDB0, 0x2, ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0xD), 0x0, 0x0));
        }
        return ((int (*)(int, int, int, int))(0xC031322))(t185, t239, t187, t240);
    }
    return 0x11;
}

int FUN_0c048c18(int a4, int a5, float f4)
{
    int stk[4];
    register int t77;
    register int t18;
    register int t64;
    register float u21;
    register int t31;
    register int t32;
    register int t40;
    register int t42;
    register int t43;
    register int t44;
    register float u54;
    register int t55;
    register float t57;
    register float u60;
    register int t11;
    register int t41;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t77 = 0x16B;
    if ((int)(*(signed char *)0xC7F3197) >= (int)0x4) {
    } else {
        *(unsigned char *)0xC7F3197 = ((*(signed char *)0xC7F3197) + 0x1);
        if ((*(signed char *)(((int)stk + 4))) != 0) {
            FUN_0c0df940();
            
            t11 = ((FUN_0c0e6f24()) + 0x3);
        } else {
            t11 = (((*(int *)0xC7F307C) & 0x1) + 0x1);
        }
        t18 = FUN_0c059132(0x5, 0x1, (t11 + 0x1));
        t64 = t18;
        if (t18 != 0) {
            *(unsigned char *)((t18 + 0x0)) = 0x1;
            *(unsigned char *)((t18 + 0x1)) = 0x1;
            *(unsigned short *)((t18 + 0x6)) = 0x31;
            *(unsigned char *)((t18 + 0x5)) = 0x1;
            *(unsigned int *)((t18 + 0x10)) = 0xC048EA8;
            *(unsigned char *)((t18 + 0x3)) = 0x2;
            *(volatile int *)(((int)stk + 8));
            FUN_0c0e6fe8();
            (((struct o118_uint *)(t18))->v) = 0x0;
            *(unsigned int *)((t18 + 0x34)) = 0x0;
            *(unsigned int *)((t18 + 0x30)) = 0x0;
            *(unsigned int *)((t18 + 0x2C)) = 0x0;
            u21 = *(float *)(((int)stk + 12));
            (((struct o58_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o54_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o50_float *)(t18))->v) = (u21 * 1.0f);
            (((struct o308_uchar *)(t18))->v) = t11;
            *(unsigned char *)(((0x308 + t18) + 0x1)) = (*(signed char *)(((int)stk + 4)));
            FUN_0c06233a(((((struct o2E0_int *)(t18))->v)), 0xC4CFA68, 0x48);
            *(unsigned char *)((((((struct o2E0_int *)(t18))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t18))->v)) + 0x2)) = 0x219;
            (((struct o40_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o44_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o48_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            (((struct o4C_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 1.0f;
            t31 = (((struct o2E0_int *)(t18))->v);
            (((struct o24_float *)(t31))->v) = 1.0f;
            (((struct o20_float *)(t31))->v) = 1.0f;
            (((struct o1C_float *)(t31))->v) = 1.0f;
            t32 = (((struct o2E0_int *)(t18))->v);
            *(int *)((int)stk + 0) = (0x18 + t32);
            FUN_0c0df940();
            
            *(unsigned int *)(((0x18 + t32) + 0x0)) = ((((FUN_0c0e6f24()) << 8) << 2) << 2);
            (((struct oC_float *)(((((struct o2E0_int *)(t18))->v))))->v) = 100.0f;
            t40 = 0xC048DC4;
            t42 = (0x18 + t32);
            t43 = 0x1;
            t44 = 0x1;
            for (;;) {
                if ((int)t43 >= (int)((*(signed char *)(((0x308 + t18) + 0x0))) + 0x1)) {
                    break;
                }
                t44 = t43;
                t44 = (t44 << 2);
                t40 = (FUN_0c06233a((*(int *)((((0x2E0 + t18) + t44) + 0x0))), 0xC4CFA68, 0x21));
                t40 = 0x619;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(unsigned char *)((t42 + 0x0)) = 0x0;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(unsigned short *)((t42 + 0x2)) = t40;
                t40 = 0x40;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 1.0f;
                t40 = 0x44;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0x48;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0x4C;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(float *)((t42 + t40)) = 0.0f;
                t40 = 0xC048F18;
                u54 = *(float *)((t40 + 0x0));
                t55 = *(int *)((((0x2E0 + t18) + t44) + 0x0));
                t40 = 0x24;
                *(float *)((t55 + t40)) = u54;
                t40 = 0x20;
                *(float *)((t55 + t40)) = u54;
                t40 = 0x1C;
                *(float *)((t55 + t40)) = u54;
                t42 = (*(int *)((((0x2E0 + t18) + t44) + 0x0)));
                *(int *)((int)stk + 0) = (0x18 + t42);
                t57 = FUN_0c0df940();
                u60 = (t57 * 255.0f);
                if (!(2.14748365e+09f > (t57 * 255.0f))) {
                    u60 = (((t57 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t42 = 0xC0E6F24;
                t41 = (int)u60;
                t40 = 0x10;
                t40 = (FUN_0c0e6f24());
                t40 = (t40 << 8);
                t41 = (0x18 + t42);
                t40 = (t40 << 2);
                t44 = (t44 + (0x2E0 + t18));
                t40 = (t40 << 2);
                *(unsigned int *)((t41 + 0x0)) = t40;
                t40 = 0xC;
                t42 = (*(int *)((t44 + 0x0)));
                t43 = (t43 + 0x1);
                *(float *)((t42 + t40)) = 90.0f;
            }
            t64 = t40;
        }
        t77 = t64;
    }
    return t77;
}

int FUN_0c056e8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x9));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 != 4) {
                                t1 = t0;
                                if (t0 != 5) {
                                } else {
                                    t0 = (((struct o2E0_int *)(a4))->v);
                                    (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                                    t0 = 0x40;
                                    if (((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) != 0.0f) {
                                        t2 = *(signed char *)((a4 + 0x8));
                                        *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                                        t0 = (t2 + 0x1);
                                    }
                                    t1 = t0;
                                }
                                t0 = t1;
                            } else {
                                t1 = (((struct oEC_short *)(a4))->v);
                                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                                t2 = 0xEC;
                                if ((short)(t1 - 1) == 0) {
                                    t1 = *(signed char *)((a4 + 0x9));
                                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                                    t2 = (t1 + 0x1);
                                }
                                t0 = t2;
                            }
                            t1 = t0;
                        } else {
                            t0 = (((struct o2E4_int *)(a4))->v);
                            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
                            t0 = 0x24;
                            if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                                t2 = *(signed char *)((a4 + 0x4));
                                (((struct oEC_ushort *)(a4))->v) = ((-(((t2 << 2) + t2) << 1)) + 0x64);
                                t2 = *(signed char *)((a4 + 0x9));
                                *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                                t0 = (t2 + 0x1);
                            }
                            t1 = t0;
                        }
                        t0 = t1;
                    } else {
                        t1 = (((struct o2E4_int *)(a4))->v);
                        (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.049999997f);
                        t1 = 0x24;
                        if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t2 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                            t1 = (t2 + 0x1);
                        }
                        t0 = t1;
                    }
                    t1 = t0;
                } else {
                    t0 = (((struct oEC_short *)(a4))->v);
                    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xEC;
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                        (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                        t0 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                        t2 = (t0 + 0x1);
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    t1 = *(signed char *)((a4 + 0x4));
                    (((struct oEC_ushort *)(a4))->v) = ((((t1 << 2) + t1) << 1) + 0x1);
                    *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
                }
                t1 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0xEC;
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                    t1 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                }
                t0 = t2;
            }
            return t0;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0x1F;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = *(int *)((((*(signed char *)(((unsigned short)((unsigned short)(*(signed char *)0xC7F304F) * (unsigned short)0x72D0) + 0xC7E40C8))) << 2) + 0xC32DE74));
    t1 = 0xC32DE74;
    t2 = 0x72D0;
    t3 = 0xC7F304F;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)0x2) {
            break;
        }
        t1 = (*(signed char *)((a4 + 0x4)));
        t5 = t4;
        t6 = ((short)t1 * (short)0x1C);
        t1 = 0x18;
        t3 = 0xC06233A;
        t5 = (t5 << 2);
        t1 = (FUN_0c06233a((*(int *)((((0x2E0 + a4) + t5) + 0x0))), 0xC4CFA80, ((*(signed char *)(((t6 + t0) + t1))) + t4)));
        t2 = 0x2E0;
        t2 = (t2 + a4);
        t2 = (t2 + t5);
        t3 = (*(int *)((t2 + 0x0)));
        t2 = 0x1C;
        *(unsigned char *)((t3 + 0x0)) = 0x0;
        t1 = (*(signed char *)((a4 + 0x4)));
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t3 = 0xC0E6FE8;
        t2 = ((short)t1 * (short)t2);
        t2 = (t2 + t0);
        t1 = 0xC;
        t1 = (FUN_0c0e6fe8());
        t1 = (*(signed char *)((a4 + 0x4)));
        t2 = 0x1C;
        *(volatile int *)((((0x2E0 + a4) + t5) + 0x0));
        t2 = ((short)t1 * (short)t2);
        t2 = (t2 + t0);
        t2 = (t2 + 0xC);
        t1 = 0xC;
        t1 = (FUN_0c0e6fe8());
        t6 = t4 == 0;
        t4 = (t4 + 0x1);
        if (t6) {
            t3 = 0x2E0;
            t1 = 0x71F;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(unsigned short *)((t2 + 0x2)) = t1;
            t1 = 0x40;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x44;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x48;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x2E0;
            *(float *)((t2 + t1)) = 1.0f;
            t1 = 0x4C;
            t3 = (t3 + a4);
            t3 = (t3 + t5);
            t2 = (*(int *)((t3 + 0x0)));
            *(float *)((t2 + t1)) = 0.0f;
        } else {
            t2 = 0x2E0;
            t1 = 0x11F;
            t2 = (t2 + a4);
            t2 = (t2 + t5);
            t3 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t3 + 0x2)) = t1;
        }
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = *(signed char *)((a4 + 0x9));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t1 = t0;
                        if (t0 != 5) {
                        } else {
                            t0 = (((struct o2E0_int *)(a4))->v);
                            (((struct o40_float *)(t0))->v) = (((((struct o40_float *)(t0))->v)) - 0.099999994f);
                            t0 = 0x40;
                            if (((((struct o40_float *)(((((struct o2E0_int *)(a4))->v))))->v)) != 0.0f) {
                                t2 = *(signed char *)((a4 + 0x8));
                                *(unsigned char *)((a4 + 0x8)) = (t2 + 0x1);
                                t0 = (t2 + 0x1);
                            }
                            t1 = t0;
                        }
                        t0 = t1;
                    } else {
                        t1 = (((struct oEC_short *)(a4))->v);
                        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
                        t2 = 0xEC;
                        if ((short)(t1 - 1) == 0) {
                            t1 = *(signed char *)((a4 + 0x9));
                            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        t0 = t2;
                    }
                    t1 = t0;
                } else {
                    t0 = (((struct o2E4_int *)(a4))->v);
                    (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - 0.049999997f);
                    t0 = 0x24;
                    if (0.0f > ((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t2 = *(signed char *)((a4 + 0x4));
                        (((struct oEC_ushort *)(a4))->v) = ((-(((t2 << 2) + t2) << 1)) + 0x64);
                        t2 = *(signed char *)((a4 + 0x9));
                        *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                        t0 = (t2 + 0x1);
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                t1 = (((struct o2E4_int *)(a4))->v);
                (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + 0.049999997f);
                t1 = 0x24;
                if (((((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = *(signed char *)((a4 + 0x9));
                    *(unsigned char *)((a4 + 0x9)) = (t2 + 0x1);
                    t1 = (t2 + 0x1);
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
                t0 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            t1 = *(signed char *)((a4 + 0x4));
            (((struct oEC_ushort *)(a4))->v) = ((((t1 << 2) + t1) << 1) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        t2 = 0xEC;
        if ((short)(t1 - 1) == 0) {
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o24_float *)(((((struct o2E4_int *)(a4))->v))))->v) = 0.0f;
            t1 = *(signed char *)((a4 + 0x9));
            *(unsigned char *)((a4 + 0x9)) = (t1 + 0x1);
            t2 = (t1 + 0x1);
        }
        t0 = t2;
    }
    return t0;
}

int gdFsGetStatG(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a5;
    v0_4 = a6;
    v0_5 = a7;
    *(unsigned int *)(((*(int *)0xC346BD8) + 0x20)) = 0x1;
    v0_2 = *(int *)(((*(int *)0xC346BD8) + 0x1C));
    v0_0 = (0x0);
    v0_1 = (0xC346BD8);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C0F02D8;
    v0_6 = (0x0);
    L_C0F02DA:;
    v0_9 = ((((int)stk + 0) + 0x1C));
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x10)))))(v0_6, (((int)stk + 0) + 0x1C), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    if (!((v0_3 != 0))) goto L_C0F0520;
    v0_10 = (v0_2);
    v0_8 = (0x2);
    if ((v0_2 == 0)) goto L_C0F032A;
    if ((v0_10 == 1)) goto L_C0F032A;
    if ((v0_10 != 65)) goto L_C0F0306;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x24)))))((*(int *)((v0_3 + 0x3C))), ((int)stk + 0), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C0F044C;
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C0F0442;
    (((struct o4A_ushort *)(v0_3))->v) = v0_0;
    goto L_C0F0446;
    L_C0F0520:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_0;
    return v0_2;
    L_C0F0446:;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    goto L_C0F0520;
    L_C0F0442:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C0F0446;
    L_C0F044C:;
    if ((v0_6 != 1)) goto L_C0F0520;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)(((int)stk + 0)));
    goto L_C0F0520;
    L_C0F0306:;
    if ((v0_10 != 4)) goto L_C0F030E;
    (((struct o40_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x8)));
    if ((((((struct o48_short *)(v0_3))->v)) != 1)) goto L_C0F0520;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    goto L_C0F0520;
    L_C0F030E:;
    if ((v0_10 != 67)) goto L_C0F0316;
    goto L_C0F0520;
    L_C0F0316:;
    if (!((v0_10 != 5))) goto L_C0F046C;
    if ((v0_10 != 64)) goto L_C0F0326;
    goto L_C0F046C;
    L_C0F046C:;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    (((struct o52_ushort *)(v0_3))->v) = (*(int *)((v0_9 + 0x0)));
    (((struct o44_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x4)));
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    if ((((((struct o52_short *)(v0_3))->v)) != -29)) goto L_C0F04D4;
    if ((((((struct o44_int *)(v0_3))->v)) != 58)) goto L_C0F04C4;
    v0_7 = gdFsGetDrvStatG(v0_6, v0_7, v0_4, v0_5);
    v0_6 = (v0_7);
    if ((v0_7 == 6)) goto L_C0F04A0;
    if ((v0_6 != 0)) goto L_C0F04D4;
    L_C0F04A0:;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE9;
    L_C0F04D4:;
    v0_7 = (((struct o52_short *)(v0_3))->v);
    v0_6 = (v0_7);
    if ((v0_7 == -23)) goto L_C0F04E4;
    if ((v0_6 != -33)) goto L_C0F04EA;
    L_C0F04E4:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x34)) = 0x1;
    L_C0F04EA:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x24))) == 0)) goto L_C0F0500;
    v0_6 = *(int *)((v0_1 + 0x0));
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_6 + 0x24)))))((*(int *)((v0_6 + 0x28))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    L_C0F0500:;
    if (((*(int *)((v0_3 + 0x34))) == 0)) goto L_C0F0520;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x34)))))((*(int *)((v0_3 + 0x38))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C0F0520;
    L_C0F04C4:;
    if ((((((struct o44_int *)(v0_3))->v)) != 0x104)) goto L_C0F04D4;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFDB;
    goto L_C0F04D4;
    L_C0F0326:;
    (((struct o50_ushort *)(v0_3))->v) = (unsigned char)v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    goto L_C0F0520;
    L_C0F032A:;
    v0_6 = (((struct o48_short *)(v0_3))->v);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    (((struct o48_ushort *)(v0_3))->v) = v0_0;
    v0_6 = (v0_6);
    if ((v0_2 == 1)) goto L_C0F0346;
    goto L_C0F0520;
    L_C0F0346:;
    v0_10 = (v0_6);
    if ((v0_6 != 1)) goto L_C0F0370;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    if (((*(int *)((v0_3 + 0x24))) != 0)) goto L_C0F0366;
    goto L_C0F0520;
    L_C0F0366:;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x24)))))((*(int *)((v0_3 + 0x28))), v0_7, v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C0F0520;
    L_C0F0370:;
    if ((v0_10 == 3)) goto L_C0F0386;
    v0_10 = (v0_6);
    if ((v0_6 != 4)) goto L_C0F038C;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    L_C0F0386:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C0F0520;
    L_C0F038C:;
    if ((v0_10 != 7)) goto L_C0F03D8;
    v0_6 = (FUN_0c0fdef0(((*(int *)((v0_1 + 0x0))) + 0x40), (((int)stk + 0) + 0x4), v0_4, v0_5)) == 0;
    if (v0_6) goto L_C0F03B4;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFED;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    goto L_C0F04D4;
    L_C0F03B4:;
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x4)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x8)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0xC)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x10)) = ((*(int *)(((int)stk + 20))) & 0xFFFFFF);
    goto L_C0F0520;
    L_C0F03D8:;
    if ((v0_6 == 8)) goto L_C0F03E2;
    goto L_C0F0520;
    L_C0F03E2:;
    v0_7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC)))))->v))))(0xC7FE6DC, 0xC7FE6E0, (*(int *)((v0_3 + 0x4))), 0xC7FE6E4, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C0F040E;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_6;
    (((struct o50_ushort *)(v0_3))->v) = 0x4;
    (((struct o48_ushort *)(v0_3))->v) = 0x6;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_3;
    goto L_C0F0520;
    L_C0F040E:;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE4;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    *(unsigned int *)(((*(int *)((v0_3 + 0x4))) + 0x0)) = v0_0;
    goto L_C0F04D4;
    L_C0F02D8:;
    v0_6 = ((*(int *)((v0_3 + 0x3C))));
    goto L_C0F02DA;
}

int FUN_0c0aa6ba(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    switch (t0) {
    case 0:
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0xF;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        t0 = 0x0;
        if ((*(signed char *)0xC7F3052) == 8) {
            t0 = 0x8;
        }
        FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), 0xC664A60, t0);
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0x1F;
        t0 = *(signed char *)0xC7F3052;
        (((struct o4_float *)(((((struct o2E0_int *)(a4))->v))))->v) = (*(float *)((((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152970) + 0x0)));
        t0 = *(signed char *)0xC7F3052;
        (((struct o8_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o4_float *)(((unsigned char)(((t0 << 1) + t0) << 2) + 0xC152970)))->v));
        t0 = *(signed char *)0xC7F3052;
        (((struct oC_float *)(((((struct o2E0_int *)(a4))->v))))->v) = ((((struct o8_float *)((0xC152970 + (unsigned char)(((t0 << 1) + t0) << 2))))->v));
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) ^ 0x1);
        break;
    case 1:
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) ^ 0x1);
        break;
    case 2:
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            (((struct oEC_ushort *)(a4))->v) = 0x14;
        }
        if (2.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.099999994f);
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 0.099999994f);
        }
        if (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 2.0f) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o24_float *)(t0))->v) = 2.0f;
            (((struct o20_float *)(t0))->v) = 2.0f;
            (((struct o1C_float *)(t0))->v) = 2.0f;
        }
        break;
    default:
        if (t0 == 3) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0xA;
            }
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) & 0xFFFF);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x100);
            t0 = (((struct o2E0_int *)(a4))->v);
            *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
            if (((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 0.0f) {
                u0 = *(float *)0xC0AA9C0;
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) - u0);
            }
            if (0.0f > ((((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                t0 = (((struct o2E0_int *)(a4))->v);
                (((struct o24_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 0.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
            }
            return 0x1C;
        }
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) & 0xFFFF);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x100);
    t0 = (((struct o2E0_int *)(a4))->v);
    *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
    return 0x2E0;
}

int FUN_0c0990fc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    if (((((struct oF2_short *)(a4))->v)) != 0) {
                        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
                    }
                    if ((((((struct oF0_short *)(a4))->v)) != 0) && (t0 = (((struct oF2_short *)(a4))->v), t0 != 0)) {
                        FUN_0c09a910(a4);
                        FUN_0c09c7be(a4, (0xF0 + a4));
                        t0 = (FUN_0c02f328((*(signed char *)((a4 + 0x3)))));
                    } else {
                        (((struct o50_float *)(a4))->v) = 1.29999995f;
                        (((struct o54_float *)(a4))->v) = 0.099999994f;
                        (((struct o58_float *)(a4))->v) = 1.29999995f;
                        (((struct oF2_ushort *)(a4))->v) = 0x78;
                        *(unsigned char *)((a4 + 0xC)) = 0x4;
                        t0 = 0x4;
                    }
                    return t0;
                }
                if (t1 == 4) {
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x3;
                        *(unsigned char *)((a4 + 0xC)) = 0x5;
                        t2 = 0x5;
                    }
                    return t2;
                }
                if (t1 == 5) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
                    (((struct o54_float *)(a4))->v) = 0.099999994f;
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x5;
                        *(unsigned char *)((a4 + 0xC)) = 0x6;
                        t2 = 0x6;
                    }
                    return t2;
                }
                if (t1 == 6) {
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.299999982f);
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        (((struct oF2_ushort *)(a4))->v) = 0x3;
                        *(unsigned char *)((a4 + 0xC)) = 0x7;
                        t2 = 0x7;
                    }
                    return t2;
                }
                if (t1 == 7) {
                    (((struct o50_float *)(a4))->v) = 1.0f;
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.199999988f);
                    (((struct o58_float *)(a4))->v) = 1.0f;
                    t0 = (((struct oF2_short *)(a4))->v);
                    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
                    t2 = 0xF2;
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned char *)((a4 + 0xC)) = 0x8;
                        t2 = 0x8;
                    }
                    return t2;
                }
                if (t1 == 8) {
                    return FUN_0c0a2e26(a4, 0xF, 0x1, a7);
                }
                return t1;
            }
            FUN_0c09a910(a4);
            FUN_0c09d990(a4);
            FUN_0c09d9bc(a4);
            FUN_0c09c7be(a4, (0xF0 + a4));
            FUN_0c02f328((*(signed char *)((a4 + 0x3))));
            t0 = FUN_0c09e7b8(a4);
            t1 = (signed char)t0;
            if ((signed char)t0 == 0) {
            } else {
                (((struct oF2_ushort *)(a4))->v) = 0x3C;
                *(unsigned char *)((a4 + 0xC)) = 0x3;
                t1 = 0x3;
            }
            return t1;
        }
        FUN_0c09a910(a4);
        FUN_0c09d990(a4);
        FUN_0c09d9bc(a4);
        FUN_0c09c7be(a4, (0xF0 + a4));
        FUN_0c02f328((*(signed char *)((a4 + 0x3))));
        t0 = 0x3C;
        if (!(0.0f > ((((struct o3C_float *)(a4))->v)))) {
        } else {
            *(unsigned char *)((a4 + 0xC)) = 0x2;
            t0 = 0x2;
        }
        return t0;
    }
    FUN_0c0dc18e(0xA, 0xA);
    FUN_0c09a808(a4, 0x2, 0xAB);
    (((struct o38_float *)(a4))->v) = (-(((((struct o38_float *)(a4))->v)) / 4.0f));
    (((struct o3C_float *)(a4))->v) = 20.0f;
    (((struct o40_float *)(a4))->v) = (-(((((struct o40_float *)(a4))->v)) / 4.0f));
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = -1.08799994f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct oF0_ushort *)(a4))->v) = 0x12;
    *(unsigned char *)((a4 + 0xC)) = 0x1;
    return 0x1;
}
