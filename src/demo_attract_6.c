/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c029660-0c029bc0) */

/* named globals (symbols.txt) */
extern char g_res_syukyaku[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int FUN_0c0e6f24(void);
extern int FUN_0c0e6fe8();
struct o24_float { char p[0x24]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);

int FUN_0c029660(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t134;
    register int t135;
    register float u145;
    int t2;
    register int t4;
    register float u8;
    register int t14;
    register int t17;
    register int t62;
    register float u65;
    register int t32;
    register float u36;
    register int t42;
    register int t45;
    register int t75;
    register float u79;
    register float u80;
    register int t81;
    register float u85;
    register int t88;
    register int t90;
    register int t93;
    register int t102;
    register int t147;
    register int t149;
    register int t150;
    register float u151;
    register float u152;
    register float u153;
    register int t157;
    register int t177;
    register float u143;
    register float u144;
    register int t113;
    register int t116;
    register int t117;
    register float u124;
    register float u125;
    register float u126;
    register int t68;
    register int t71;
    register float u72;
    register float u73;
    register float u74;
    register int t3;
    register float u6;
    register float u7;
    register float u63;
    register float u64;
    register float u34;
    register float u35;
    register float u83;
    register float u84;
    register float u95;
    register float u104;
    register int t173;
    register float u174;
    register float u175;
    register float u169;
    register float u170;
    register int t163;

    t134 = a4;
    t135 = a5;
    u145 = f4;
    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t2 = *(signed char *)((a4 + 0x4));
        if ((t2 != 0) && ((t2 != 1) && ((t2 != 2) && ((t2 != 3) && (t2 != 4))))) {
            if (t2 == 5) {
                (((struct oF0_ushort *)(a4))->v) = 0x0;
                (((struct oEE_ushort *)(a4))->v) = 0x0;
                *(unsigned int *)(((int)stk + 12)) = 0xC148ED0;
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t4 = 0xC148ED0;
                u8 = f4;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                        break;
                    }
                    t68 = (*(int *)(((int)stk + 4)));
                    *(volatile int *)(((int)stk + 12));
                    t68 = (t68 << 2);
                    t68 = (t68 + (0x2E0 + a4));
                    t68 = (*(int *)((t68 + 0x0)));
                    t3 = t68;
                    t3 = (t3 + 0x4);
                    t14 = ((int (*)(int, float))(FUN_0c0e6fe8))(t4, u8);
                    u7 = (math_rand_float());
                    u7 = (u7 * 255.0f);
                    u6 = 2.14748365e+09f;
                    if (!(u6 > u7)) {
                        u6 = (u6 + u6);
                        u7 = (u7 - u6);
                    }
                    t3 = (int)u7;
                    t17 = FUN_0c0e6f24();
                    *(unsigned int *)(((int)stk + 8)) = ((t17 << 8) << 1);
                    *(unsigned int *)((t68 + 0x18)) = ((t17 << 8) << 1);
                    t4 = (*(int *)(((int)stk + 8)));
                    (((struct o28_float *)(t68))->v) = ((math_cos_angle16(t4)) * 36.0f);
                    t4 = (*(int *)(((int)stk + 8)));
                    (((struct o2C_float *)(t68))->v) = ((math_sin_angle16(t4)) * 36.0f);
                    u7 = (math_rand_float());
                    u7 = (u7 * 255.0f);
                    u6 = 2.14748365e+09f;
                    if (!(u6 > u7)) {
                        u6 = (u6 + u6);
                        u7 = (u7 - u6);
                    }
                    t3 = (int)u7;
                    t4 = ((FUN_0c0e6f24()) << 1);
                    t4 = (t4 + 0x14);
                    t3 = 0x28;
                    t3 = (t3 + t68);
                    u6 = (*(float *)((t3 + 0x0)));
                    u7 = (float)t4;
                    t3 = 0x2C;
                    t3 = (t3 + t68);
                    u8 = u7;
                    u7 = (u7 * u6);
                    u6 = ((((struct o4_float *)(t68))->v));
                    u6 = (u6 - u7);
                    (((struct o4_float *)(t68))->v) = u6;
                    u6 = u8;
                    u8 = (u8 / 50.0f);
                    u7 = (*(float *)((t3 + 0x0)));
                    u6 = (u6 * u7);
                    u7 = ((((struct o8_float *)(t68))->v));
                    u7 = (u7 - u6);
                    (((struct o8_float *)(t68))->v) = u7;
                    u8 = (u8 * 7.5f);
                    (((struct o20_float *)(t68))->v) = u8;
                    (((struct o1C_float *)(t68))->v) = u8;
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                }
                t71 = t4;
                u72 = u6;
                u73 = u7;
                u74 = u8;
            } else {
                t62 = 0xC148ED0;
                u65 = f4;
                if (t2 == 6) {
                    (((struct oF0_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)(((int)stk + 12)) = 0xC148EDC;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t32 = 0xC148EDC;
                    u36 = f4;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                            break;
                        }
                        t68 = (*(int *)(((int)stk + 4)));
                        *(volatile int *)(((int)stk + 12));
                        t68 = (t68 << 2);
                        t68 = (t68 + (0x2E0 + a4));
                        t68 = (*(int *)((t68 + 0x0)));
                        t42 = ((int (*)(int, float))(FUN_0c0e6fe8))(t32, u36);
                        u35 = (math_rand_float());
                        u35 = (u35 * 255.0f);
                        u34 = 2.14748365e+09f;
                        if (!(u34 > u35)) {
                            u34 = (u34 + u34);
                            u35 = (u35 - u34);
                        }
                        t45 = FUN_0c0e6f24();
                        *(unsigned int *)(((int)stk + 8)) = ((t45 << 8) << 1);
                        *(unsigned int *)((t68 + 0x18)) = ((t45 << 8) << 1);
                        t32 = (*(int *)(((int)stk + 8)));
                        (((struct o28_float *)(t68))->v) = ((math_cos_angle16(t32)) * 36.0f);
                        t32 = (*(int *)(((int)stk + 8)));
                        (((struct o2C_float *)(t68))->v) = ((math_sin_angle16(t32)) * 36.0f);
                        u35 = (math_rand_float());
                        u35 = (u35 * 255.0f);
                        u34 = 2.14748365e+09f;
                        if (!(u34 > u35)) {
                            u34 = (u34 + u34);
                            u35 = (u35 - u34);
                        }
                        t32 = (FUN_0c0e6f24());
                        t32 = (t32 << 1);
                        u34 = ((((struct o28_float *)(t68))->v));
                        u35 = (float)(-t32);
                        u36 = u35;
                        u35 = (u35 * u34);
                        (((struct o4_float *)(t68))->v) = u35;
                        u35 = ((((struct o2C_float *)(t68))->v));
                        u36 = (u36 * u35);
                        u35 = (float)t32;
                        (((struct o8_float *)(t68))->v) = u36;
                        u35 = (u35 / 50.0f);
                        u35 = (u35 * 7.5f);
                        u35 = (-u35);
                        (((struct o20_float *)(t68))->v) = u35;
                        (((struct o1C_float *)(t68))->v) = u35;
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    }
                    t62 = t32;
                    u63 = u34;
                    u64 = u35;
                    u65 = u36;
                }
                t71 = t62;
                u72 = u63;
                u73 = u64;
                u74 = u65;
            }
            t113 = t68;
            t116 = t71;
            t117 = a5;
            u124 = u72;
            u125 = u73;
            u126 = u74;
        } else {
            (((struct oF0_ushort *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            t75 = *(signed char *)((a4 + 0x4));
            *(unsigned int *)(((int)stk + 4)) = ((signed char)(((t75 << 1) + t75) << 2) + 0xC148E1C);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((((signed char)t75 << 2) + 0xC148E94)));
            u79 = (((struct o4_float *)(((((signed char)t75 << 2) << 1) + 0xC148EA8)))->v);
            u80 = *(float *)((((((signed char)t75 << 2) << 1) + 0xC148EA8) + 0x0));
            *(float *)(((int)stk + 16)) = (u79 * 10.0f);
            t81 = 0x0;
            u85 = (u79 * 10.0f);
            for (;;) {
                if ((int)t81 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                    break;
                }
                t113 = t81;
                t113 = (t113 << 2);
                t113 = (t113 + (0x2E0 + a4));
                t113 = (*(int *)((t113 + 0x0)));
                t88 = ((int (*)(int, int, float))(FUN_0c0e6fe8))(t75, ((((signed char)t75 << 2) << 1) + 0xC148EA8), 10.0f);
                *(volatile int *)(((int)stk + 4));
                t90 = ((int (*)(void))(FUN_0c0e6fe8))();
                *(int *)((int)stk + 0) = (0x4 + t113);
                u85 = (math_rand_float());
                u85 = (u85 * 255.0f);
                u84 = 2.14748365e+09f;
                if (!(u84 > u85)) {
                    u84 = (u84 + u84);
                    u85 = (u85 - u84);
                }
                t93 = FUN_0c0e6f24();
                u85 = (float)t93;
                if ((int)t93 < 0) {
                    u84 = 4.2949673e+09f;
                    u85 = (u85 + u84);
                    u95 = u84;
                }
                u84 = u95;
                u85 = (u85 * u80);
                u84 = ((((struct o4_float *)(t113))->v));
                u85 = (u85 - ((u80 * 10.0f)));
                u84 = (u84 + u85);
                (((struct o4_float *)(t113))->v) = u84;
                *(int *)((int)stk + 0) = (0x8 + t113);
                u85 = (math_rand_float());
                u85 = (u85 * 255.0f);
                u84 = 2.14748365e+09f;
                if (!(u84 > u85)) {
                    u84 = (u84 + u84);
                    u85 = (u85 - u84);
                }
                t102 = FUN_0c0e6f24();
                u85 = (float)t102;
                if ((int)t102 < 0) {
                    u84 = 4.2949673e+09f;
                    u85 = (u85 + u84);
                    u104 = u84;
                }
                u84 = u104;
                u85 = (u85 * u79);
                u84 = (*(float *)(((int)stk + 16)));
                t81 = (t81 + 0x1);
                u85 = (u85 - u84);
                u83 = ((((struct o8_float *)(t113))->v));
                u83 = (u83 + u85);
                (((struct o8_float *)(t113))->v) = u83;
                *(unsigned int *)((t113 + 0x18)) = (*(int *)(((int)stk + 8)));
            }
            t116 = t75;
            t117 = ((((signed char)t75 << 2) << 1) + 0xC148EA8);
            u124 = u84;
            u125 = u85;
            u126 = 10.0f;
        }
        t150 = t113;
        t134 = t116;
        t135 = t117;
        u143 = u124;
        u144 = u125;
        u145 = u126;
    }
    t147 = t134;
    t149 = 0x0;
    u151 = u143;
    u152 = u144;
    u153 = u145;
    for (;;) {
        if ((int)t149 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t150 = t149;
        t150 = (t150 << 2);
        t150 = (t150 + (0x2E0 + a4));
        t150 = (*(int *)((t150 + 0x0)));
        t147 = t150;
        t147 = (t147 + 0x4);
        math_vec3_add(t147, (t150 + 0x4), (t150 + 0x28));
        u153 = 0.149999991f;
        t157 = *(signed char *)((a4 + 0x4));
        if (t157 == 5) {
            u151 = 0.0f;
            u152 = ((((struct o1C_float *)(t150))->v));
            u152 = (u152 - u153);
            (((struct o1C_float *)(t150))->v) = u152;
            if (!(u152 > u151)) {
                u153 = u151;
                (((struct o1C_float *)(t150))->v) = u153;
            }
            u152 = ((((struct o1C_float *)(t150))->v));
            (((struct o20_float *)(t150))->v) = u152;
            u174 = u151;
            u175 = u152;
        } else {
            if (t157 == 6) {
                u151 = 0.0f;
                u152 = ((((struct o1C_float *)(t150))->v));
                u152 = (u152 + u153);
                (((struct o1C_float *)(t150))->v) = u152;
                if (!(u152 > u151)) {
                    *(unsigned char *)((t150 + 0x0)) = 0x0;
                } else {
                    t147 = 0x1;
                    *(unsigned char *)((t150 + 0x0)) = t147;
                    t163 = t147;
                }
                t147 = t163;
                u152 = ((((struct o1C_float *)(t150))->v));
                (((struct o20_float *)(t150))->v) = u152;
                t173 = t147;
                u169 = u151;
                u170 = u152;
            }
            u174 = u169;
            u175 = u170;
        }
        u151 = u174;
        u152 = u175;
        t149 = (t149 + 0x1);
        t147 = t173;
    }
    t177 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t177 - 1);
    if ((int)(short)(t177 - 1) <= 0) {
        return obj_destroy(a4, t135, a6, a7);
    }
    return 0xEC;
}

int FUN_0c029abc(int a4, int a5)
{
    int stk[2];
    register int t7;
    register int t10;
    register int t18;
    register int t8;
    register int t9;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((*(int *)0xC386830) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (int)((float)(*(int *)(((int)stk + 0))) * 0.833333313f);
    }
    t7 = 0x3;
    for (;;) {
        t10 = obj_create(0x5, 0x1, 0xA);
        t18 = t10;
        if (t10 != 0) {
            *(unsigned int *)((t10 + 0x10)) = 0xC029660;
            *(unsigned char *)((t10 + 0x0)) = 0x1;
            *(unsigned char *)((t10 + 0x3)) = 0x2;
            *(unsigned char *)((t10 + 0x1)) = 0x1;
            *(unsigned char *)((t10 + 0x4)) = (*(signed char *)(((int)stk + 4)));
            *(unsigned short *)((t10 + 0x6)) = 0xF;
            *(unsigned char *)((t10 + 0x5)) = 0x0;
            (((struct o28_float *)(t10))->v) = 0.0f;
            (((struct o24_float *)(t10))->v) = 0.0f;
            t8 = 0x0;
            t9 = 0x0;
            (((struct o20_float *)(t10))->v) = 0.0f;
            *(unsigned int *)((t10 + 0x34)) = 0x0;
            *(unsigned int *)((t10 + 0x30)) = 0x0;
            *(unsigned int *)((t10 + 0x2C)) = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0x2E0 + t10) + t9) + 0x0))) + 0x0)) = 0x1;
                *(unsigned char *)(((*(int *)((((0x2E0 + t10) + t9) + 0x0))) + 0x1)) = 0x0;
                *(unsigned short *)(((*(int *)((((0x2E0 + t10) + t9) + 0x0))) + 0x2)) = 0x1F;
                FUN_0c06233a((*(int *)((((0x2E0 + t10) + t9) + 0x0))), ((int)g_res_syukyaku), 0x1A);
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x4);
                if ((int)t8 >= (int)0xA) {
                    break;
                }
            }
            (((struct oEC_ushort *)(t10))->v) = (*(int *)(((int)stk + 0)));
            t18 = 0xEC;
        }
        t7 = (t7 - 0x1);
        if (t7 == 0) {
            break;
        }
    }
    return t18;
}
