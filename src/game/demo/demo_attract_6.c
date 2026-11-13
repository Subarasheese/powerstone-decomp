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
int obj_destroy(int);
int math_vec3_add(int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
extern int _quick_odd_mvn();
struct o24_float { char p[0x24]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);

int FUN_0c029660(int a4, int a5, float f4)
{
    int stk[5];
    register int t135;
    register float u147;
    int t2;
    register int t4;
    register float u9;
    register int t17;
    register int t62;
    register float u66;
    register int t32;
    register float u37;
    register int t45;
    register int t77;
    register float u81;
    register float u82;
    register int t83;
    register int t84;
    register float u89;
    register int t95;
    register int t103;
    register int t149;
    register int t151;
    register int t152;
    register float u153;
    register float u154;
    register float u155;
    register int t159;
    register int t179;
    register float u145;
    register float u146;
    register int t113;
    register int t116;
    register float u125;
    register float u126;
    register float u127;
    register int t69;
    register int t72;
    register float u74;
    register float u75;
    register float u76;
    register int t3;
    register float u6;
    register float u7;
    register float u8;
    register float u64;
    register float u65;
    register float u34;
    register float u35;
    register float u36;
    register float u86;
    register float u87;
    register float u88;
    register int t175;
    register float u176;
    register float u177;
    register float u171;
    register float u172;
    register int t165;

    t135 = a4;
    u147 = f4;
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
                u9 = f4;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                        break;
                    }
                    t69 = (*(int *)(((int)stk + 4)));
                    t69 = (t69 << 2);
                    t69 = (t69 + (0x2E0 + a4));
                    t69 = (*(int *)((t69 + 0x0)));
                    t3 = t69;
                    t3 = (t3 + 0x4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
                    u6 = (math_rand_float());
                    u8 = u6;
                    u8 = (u8 * 255.0f);
                    u7 = 2.14748365e+09f;
                    if (!(u7 > u8)) {
                        u7 = (u7 + u7);
                        u8 = (u8 - u7);
                    }
                    t3 = (int)u8;
                    t17 = (int)((unsigned int)t3 % (unsigned int)0x7F);
                    *(unsigned int *)(((int)stk + 8)) = ((t17 << 8) << 1);
                    *(unsigned int *)((t69 + 0x18)) = ((t17 << 8) << 1);
                    t4 = (*(int *)(((int)stk + 8)));
                    u6 = (math_cos_angle16(t4));
                    u6 = (u6 * 36.0f);
                    (((struct o28_float *)(t69))->v) = u6;
                    t4 = (*(int *)(((int)stk + 8)));
                    u6 = (math_sin_angle16(t4));
                    u6 = (u6 * 36.0f);
                    (((struct o2C_float *)(t69))->v) = u6;
                    u6 = (math_rand_float());
                    u8 = u6;
                    u8 = (u8 * 255.0f);
                    u7 = 2.14748365e+09f;
                    if (!(u7 > u8)) {
                        u7 = (u7 + u7);
                        u8 = (u8 - u7);
                    }
                    t3 = (int)u8;
                    t4 = (((int)((unsigned int)t3 % (unsigned int)0xF)) << 1);
                    t4 = (t4 + 0x14);
                    t3 = 0x28;
                    t3 = (t3 + t69);
                    u7 = (*(float *)((t3 + 0x0)));
                    u8 = (float)t4;
                    t3 = 0x2C;
                    t3 = (t3 + t69);
                    u9 = u8;
                    u8 = (u8 * u7);
                    u7 = ((((struct o4_float *)(t69))->v));
                    u7 = (u7 - u8);
                    (((struct o4_float *)(t69))->v) = u7;
                    u7 = u9;
                    u9 = (u9 / 50.0f);
                    u8 = (*(float *)((t3 + 0x0)));
                    u7 = (u7 * u8);
                    u8 = ((((struct o8_float *)(t69))->v));
                    u8 = (u8 - u7);
                    (((struct o8_float *)(t69))->v) = u8;
                    u9 = (u9 * 7.5f);
                    (((struct o20_float *)(t69))->v) = u9;
                    (((struct o1C_float *)(t69))->v) = u9;
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                }
                t72 = t4;
                u74 = u7;
                u75 = u8;
                u76 = u9;
            } else {
                t62 = 0xC148ED0;
                u66 = f4;
                if (t2 == 6) {
                    (((struct oF0_ushort *)(a4))->v) = 0x0;
                    (((struct oEE_ushort *)(a4))->v) = 0x0;
                    *(unsigned int *)(((int)stk + 12)) = 0xC148EDC;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t32 = 0xC148EDC;
                    u37 = f4;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                            break;
                        }
                        t69 = (*(int *)(((int)stk + 4)));
                        t69 = (t69 << 2);
                        t69 = (t69 + (0x2E0 + a4));
                        t69 = (*(int *)((t69 + 0x0)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t69 + 0x4)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
                        u34 = (math_rand_float());
                        u36 = u34;
                        u36 = (u36 * 255.0f);
                        u35 = 2.14748365e+09f;
                        if (!(u35 > u36)) {
                            u35 = (u35 + u35);
                            u36 = (u36 - u35);
                        }
                        t45 = (int)((unsigned int)(int)u36 % (unsigned int)0x7F);
                        *(unsigned int *)(((int)stk + 8)) = ((t45 << 8) << 1);
                        *(unsigned int *)((t69 + 0x18)) = ((t45 << 8) << 1);
                        t32 = (*(int *)(((int)stk + 8)));
                        u34 = (math_cos_angle16(t32));
                        u34 = (u34 * 36.0f);
                        (((struct o28_float *)(t69))->v) = u34;
                        t32 = (*(int *)(((int)stk + 8)));
                        u34 = (math_sin_angle16(t32));
                        u34 = (u34 * 36.0f);
                        (((struct o2C_float *)(t69))->v) = u34;
                        u34 = (math_rand_float());
                        u36 = u34;
                        u36 = (u36 * 255.0f);
                        u35 = 2.14748365e+09f;
                        if (!(u35 > u36)) {
                            u35 = (u35 + u35);
                            u36 = (u36 - u35);
                        }
                        t32 = ((int)((unsigned int)(int)u36 % (unsigned int)0xF));
                        t32 = (t32 << 1);
                        u35 = ((((struct o28_float *)(t69))->v));
                        u36 = (float)(-t32);
                        u37 = u36;
                        u36 = (u36 * u35);
                        (((struct o4_float *)(t69))->v) = u36;
                        u36 = ((((struct o2C_float *)(t69))->v));
                        u37 = (u37 * u36);
                        u36 = (float)t32;
                        (((struct o8_float *)(t69))->v) = u37;
                        u36 = (u36 / 50.0f);
                        u36 = (u36 * 7.5f);
                        u36 = (-u36);
                        (((struct o20_float *)(t69))->v) = u36;
                        (((struct o1C_float *)(t69))->v) = u36;
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    }
                    t62 = t32;
                    u64 = u35;
                    u65 = u36;
                    u66 = u37;
                }
                t72 = t62;
                u74 = u64;
                u75 = u65;
                u76 = u66;
            }
            t113 = t69;
            t116 = t72;
            u125 = u74;
            u126 = u75;
            u127 = u76;
        } else {
            (((struct oF0_ushort *)(a4))->v) = 0x0;
            (((struct oEE_ushort *)(a4))->v) = 0x0;
            t77 = *(signed char *)((a4 + 0x4));
            *(unsigned int *)(((int)stk + 4)) = ((signed char)(((t77 << 1) + t77) << 2) + 0xC148E1C);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((((signed char)t77 << 2) + 0xC148E94)));
            u81 = (((struct o4_float *)(((((signed char)t77 << 2) << 1) + 0xC148EA8)))->v);
            u82 = *(float *)((((((signed char)t77 << 2) << 1) + 0xC148EA8) + 0x0));
            *(float *)(((int)stk + 16)) = (u81 * 10.0f);
            t83 = 0xC148E1C;
            t84 = 0x0;
            u89 = (u81 * 10.0f);
            for (;;) {
                if ((int)t84 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                    break;
                }
                t113 = t84;
                t113 = (t113 << 2);
                t83 = (0xC148E58 + (signed char)(((t77 << 1) + t77) << 2));
                t113 = (t113 + (0x2E0 + a4));
                t113 = (*(int *)((t113 + 0x0)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t113 + 0x4)) = *(struct mv3 *)(t83); }
                t83 = (*(int *)(((int)stk + 4)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t113 + 0x28)) = *(struct mv3 *)(t83); }
                *(int *)((int)stk + 0) = (0x4 + t113);
                u86 = (math_rand_float());
                u89 = u86;
                u89 = (u89 * 255.0f);
                u88 = 2.14748365e+09f;
                if (!(u88 > u89)) {
                    u88 = (u88 + u88);
                    u89 = (u89 - u88);
                }
                t83 = 0xC0E6F24;
                t95 = (int)((unsigned int)(int)u89 % (unsigned int)0x14);
                u89 = (float)t95;
                if ((int)t95 < 0) {
                    u88 = 4.2949673e+09f;
                    u89 = (u89 + u88);
                }
                u89 = (u89 * u82);
                u88 = ((((struct o4_float *)(t113))->v));
                u89 = (u89 - ((u82 * 10.0f)));
                u88 = (u88 + u89);
                (((struct o4_float *)(t113))->v) = u88;
                *(int *)((int)stk + 0) = (0x8 + t113);
                u86 = (math_rand_float());
                u89 = u86;
                u89 = (u89 * 255.0f);
                u88 = 2.14748365e+09f;
                if (!(u88 > u89)) {
                    u88 = (u88 + u88);
                    u89 = (u89 - u88);
                }
                t103 = (int)((unsigned int)(int)u89 % (unsigned int)0x14);
                u89 = (float)t103;
                if ((int)t103 < 0) {
                    u88 = 4.2949673e+09f;
                    u89 = (u89 + u88);
                }
                u89 = (u89 * u81);
                u88 = (*(float *)(((int)stk + 16)));
                t84 = (t84 + 0x1);
                u89 = (u89 - u88);
                u87 = ((((struct o8_float *)(t113))->v));
                u87 = (u87 + u89);
                (((struct o8_float *)(t113))->v) = u87;
                *(unsigned int *)((t113 + 0x18)) = (*(int *)(((int)stk + 8)));
            }
            t116 = t77;
            u125 = u88;
            u126 = u89;
            u127 = 10.0f;
        }
        t152 = t113;
        t135 = t116;
        u145 = u125;
        u146 = u126;
        u147 = u127;
    }
    t149 = t135;
    t151 = 0x0;
    u153 = u145;
    u154 = u146;
    u155 = u147;
    for (;;) {
        if ((int)t151 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t152 = t151;
        t152 = (t152 << 2);
        t152 = (t152 + (0x2E0 + a4));
        t152 = (*(int *)((t152 + 0x0)));
        t149 = t152;
        t149 = (t149 + 0x4);
        math_vec3_add(t149, (t152 + 0x4), (t152 + 0x28));
        u155 = 0.149999991f;
        t159 = *(signed char *)((a4 + 0x4));
        if (t159 == 5) {
            u153 = 0.0f;
            u154 = ((((struct o1C_float *)(t152))->v));
            u154 = (u154 - u155);
            (((struct o1C_float *)(t152))->v) = u154;
            if (!(u154 > u153)) {
                u155 = u153;
                (((struct o1C_float *)(t152))->v) = u155;
            }
            u154 = ((((struct o1C_float *)(t152))->v));
            (((struct o20_float *)(t152))->v) = u154;
            u176 = u153;
            u177 = u154;
        } else {
            if (t159 == 6) {
                u153 = 0.0f;
                u154 = ((((struct o1C_float *)(t152))->v));
                u154 = (u154 + u155);
                (((struct o1C_float *)(t152))->v) = u154;
                if (!(u154 > u153)) {
                    *(unsigned char *)((t152 + 0x0)) = 0x0;
                } else {
                    t149 = 0x1;
                    *(unsigned char *)((t152 + 0x0)) = t149;
                    t165 = t149;
                }
                t149 = t165;
                u154 = ((((struct o1C_float *)(t152))->v));
                (((struct o20_float *)(t152))->v) = u154;
                t175 = t149;
                u171 = u153;
                u172 = u154;
            }
            u176 = u171;
            u177 = u172;
        }
        u153 = u176;
        u154 = u177;
        t151 = (t151 + 0x1);
        t149 = t175;
    }
    t179 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t179 - 1);
    if ((int)(short)(t179 - 1) <= 0) {
        return obj_destroy(a4);
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
        t10 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0xA, 0x0);
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
