/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c040a84-0c0411b8) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int obj_create_beside(int, int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
extern int _quick_odd_mvn();

int fx_spawn_040a84(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t0;
    register int t6;
    register int t7;
    register int t13;
    register int t161;
    register int t17;
    register int t23;
    register int t25;
    register float t28;
    register float u31;
    register float t34;
    register float u37;
    register int t40;
    register int t41;
    register int t43;
    register float t47;
    register float u50;
    register int t52;
    register float u55;
    register float t58;
    register float u61;
    register int t63;
    register float u66;
    register float u69;
    register int t76;
    register float t80;
    register float u83;
    register int t85;
    register float u88;
    register int t92;
    register int t94;
    register int t100;
    register int t101;
    register int t102;
    register int t104;
    register int t105;
    register float t106;
    register float u109;
    register int t112;
    register float t116;
    register float u119;
    register int t121;
    register float u124;
    register float t127;
    register float u130;
    register int t132;
    register float u135;
    register float u138;
    register float t149;
    register float u152;
    register int t154;
    register float u157;
    register int t160;

    *(unsigned char *)(((int)stk + 52)) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 56)) = a6;
    *(unsigned char *)(((int)stk + 64)) = a7;
    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 52)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC040B6A;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 56)))); }
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 5.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149B14); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149B20); }
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 60)));
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x14;
        (((struct oEE_ushort *)(t0))->v) = (*(signed char *)(((int)stk + 64)));
        t6 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        t7 = *(signed char *)(((int)stk + 52));
        FUN_0c06233a(t6, ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), 0xC);
        *(unsigned short *)((t6 + 0x2)) = 0x121F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x1C)) = *(struct mv3 *)(0xC149B14); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x44)) = *(struct mv3 *)(0xC149B08); }
        (((struct o98_float *)(t6))->v) = 3.0f;
        *(int *)((int)stk + 76) = (t0);
        *(int *)((int)stk + 72) = (t6);
        *(int *)((int)stk + 0) = 0x0;
        t13 = obj_create_beside(0x5, t0, 0x1, 0xA, 0x0);
        t161 = t13;
        if (t13 != 0) {
            *(unsigned char *)((t13 + 0x0)) = 0x1;
            *(unsigned char *)((t13 + 0x3)) = (*(signed char *)((t0 + 0x3)));
            *(unsigned char *)((t13 + 0x1)) = 0x1;
            *(unsigned short *)((t13 + 0x6)) = 0xF;
            *(unsigned char *)((t13 + 0x5)) = 0x19;
            *(unsigned int *)((t13 + 0x10)) = 0xC0411B8;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x20)) = *(struct mv3 *)((t0 + 0x20)); }
            (((struct o24_float *)(t13))->v) = (((((struct o24_float *)(t13))->v)) + 5.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x50)) = *(struct mv3 *)(0xC149B3C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x2C)) = *(struct mv3 *)((t0 + 0x2C)); }
            (((struct o118_uint *)(t13))->v) = 0x0;
            *(unsigned int *)((t13 + 0x1C)) = t0;
            (((struct oEC_ushort *)(t13))->v) = ((((struct oEC_short *)(t0))->v));
            *(unsigned int *)(((int)stk + 16)) = (0x308 + t13);
            t17 = 0x0;
            for (;;) {
                *(unsigned char *)((((((int)((unsigned int)((int)((unsigned int)t17 + (unsigned int)0x0)) + ((((int)0x0 > (int)t17)) ? 1u : 0u))) >> 1) + (*(int *)(((int)stk + 16)))) + 0x0)) = 0x0;
                t23 = *(int *)(((int)stk + 16));
                t25 = (int)((unsigned int)((int)((unsigned int)t17 + (unsigned int)0x0)) + ((((int)0x0 > (int)t17)) ? 1u : 0u));
                *(int *)((int)stk + 0) = ((t25 >> 1) + (t23 + 0x4));
                t28 = math_rand_float();
                u31 = (t28 * 255.0f);
                if (!(2.14748365e+09f > (t28 * 255.0f))) {
                    u31 = (((t28 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                *(unsigned char *)((((t25 >> 1) + (t23 + 0x4)) + 0x0)) = (((int)((unsigned int)(int)u31 % (unsigned int)0x8)) + 0x4);
                t34 = math_rand_float();
                u37 = (t34 * 255.0f);
                if (!(2.14748365e+09f > (t34 * 255.0f))) {
                    u37 = (((t34 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                *(unsigned char *)(((int)stk + 8)) = ((int)((unsigned int)(int)u37 % (unsigned int)0x3));
                *(unsigned int *)(((int)stk + 12)) = (t17 << 2);
                t40 = *(int *)((((t17 << 2) + (0x2E0 + t13)) + 0x0));
                *(unsigned char *)((t40 + 0x0)) = 0x1;
                t41 = *(signed char *)(((int)stk + 8));
                *(unsigned char *)(((int)stk + 20)) = (t41 << 1);
                t43 = *(signed char *)((t13 + 0x3));
                FUN_0c06233a(t40, ((signed char)((((t43 << 1) + t43) << 2) << 1) + 0xC6002D0), ((t41 << 1) + 0x19));
                *(unsigned short *)((t40 + 0x2)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t40 + 0x1C)) = *(struct mv3 *)(0xC149B3C); }
                (((struct o20_float *)(t40))->v) = 0.0f;
                t47 = math_rand_float();
                u50 = (t47 * 255.0f);
                if (!(2.14748365e+09f > (t47 * 255.0f))) {
                    u50 = (((t47 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t52 = (int)((unsigned int)(int)u50 % (unsigned int)0x20);
                u55 = (float)t52;
                if ((int)t52 < 0) {
                    u55 = ((float)t52 + 4.2949673e+09f);
                }
                *(unsigned int *)(((int)stk + 4)) = (int)((u55 * 737280.0f) / 360.0f);
                t58 = math_rand_float();
                u61 = (t58 * 255.0f);
                if (!(2.14748365e+09f > (t58 * 255.0f))) {
                    u61 = (((t58 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t63 = (int)((unsigned int)(int)u61 % (unsigned int)0x8);
                u66 = (float)t63;
                if ((int)t63 < 0) {
                    u66 = ((float)t63 + 4.2949673e+09f);
                }
                u69 = 100.0f;
                u69 = u69 + 10.0f * u66;
                *(float *)(((int)stk + 28)) = u69;
                (((struct o4_float *)(t40))->v) = ((math_sin_angle16((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 28))));
                (((struct oC_float *)(t40))->v) = ((math_cos_angle16((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 28))));
                (((struct o8_float *)(t40))->v) = 0.0f;
                t76 = *(signed char *)(((int)stk + 8));
                (((struct o2C_float *)(t40))->v) = (*(float *)(((((t76 << 2) << 1) + 0xC149B54) + 0x0)));
                (((struct o28_float *)(t40))->v) = ((((struct o4_float *)((((t76 << 2) << 1) + 0xC149B54)))->v));
                t80 = math_rand_float();
                u83 = (t80 * 255.0f);
                if (!(2.14748365e+09f > (t80 * 255.0f))) {
                    u83 = (((t80 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t85 = (int)((unsigned int)(int)u83 % (unsigned int)0x20);
                u88 = (float)t85;
                if ((int)t85 < 0) {
                    u88 = ((float)t85 + 4.2949673e+09f);
                }
                *(unsigned int *)((t40 + 0x14)) = (int)((u88 * 737280.0f) / 360.0f);
                t92 = *(int *)((((0x2E0 + t13) + (*(int *)(((int)stk + 12)))) + 0x4));
                *(unsigned char *)((t92 + 0x0)) = 0x1;
                t94 = *(signed char *)((t13 + 0x3));
                FUN_0c06233a(t92, ((signed char)((((t94 << 1) + t94) << 2) << 1) + 0xC6002D0), ((*(signed char *)(((int)stk + 20))) + 0x1A));
                *(unsigned short *)((t92 + 0x2)) = 0x21F;
                (((struct o90_uint *)(t92))->v) = ((*(int *)((((0x2E0 + t13) + (*(int *)(((int)stk + 12)))) + 0x0))) + 0x50);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t92 + 0x44)) = *(struct mv3 *)(0xC149B3C); }
                t17 = (t17 + 0x2);
                if ((int)t17 < (int)0x8) continue;
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = 0x8;
            *(unsigned int *)(((int)stk + 20)) = ((0x2E0 + t13) + 0x20);
            *(unsigned int *)(((int)stk + 8)) = 0xC149B6C;
            t100 = 0x0;
            for (;;) {
                t101 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t101 + 0x4);
                t102 = *(int *)((((t101 + 0x4) - 4) + 0x0));
                *(unsigned int *)(((int)stk + 4)) = t100;
                *(unsigned char *)(((((*(int *)(((int)stk + 16))) + 0x8) + t100) + 0x0)) = 0x0;
                t104 = *(int *)(((int)stk + 16));
                t105 = *(int *)(((int)stk + 4));
                *(int *)((int)stk + 0) = ((t104 + 0xA) + t105);
                t106 = math_rand_float();
                u109 = (t106 * 255.0f);
                if (!(2.14748365e+09f > (t106 * 255.0f))) {
                    u109 = (((t106 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                *(unsigned char *)((((t104 + 0xA) + t105) + 0x0)) = (((int)((unsigned int)(int)u109 % (unsigned int)0x8)) + 0x4);
                *(unsigned char *)((t102 + 0x0)) = 0x1;
                t112 = *(signed char *)((t13 + 0x3));
                FUN_0c06233a(t102, ((signed char)((((t112 << 1) + t112) << 2) << 1) + 0xC6002D0), 0x21);
                *(unsigned short *)((t102 + 0x2)) = 0x21F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t102 + 0x1C)) = *(struct mv3 *)(0xC149B3C); }
                (((struct o20_float *)(t102))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t102 + 0x44)) = *(struct mv3 *)(0xC149B3C); }
                t116 = math_rand_float();
                u119 = (t116 * 255.0f);
                if (!(2.14748365e+09f > (t116 * 255.0f))) {
                    u119 = (((t116 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t121 = (int)((unsigned int)(int)u119 % (unsigned int)0x20);
                u124 = (float)t121;
                if ((int)t121 < 0) {
                    u124 = ((float)t121 + 4.2949673e+09f);
                }
                *(unsigned int *)(((int)stk + 4)) = (int)((u124 * 737280.0f) / 360.0f);
                t127 = math_rand_float();
                u130 = (t127 * 255.0f);
                if (!(2.14748365e+09f > (t127 * 255.0f))) {
                    u130 = (((t127 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t132 = (int)((unsigned int)(int)u130 % (unsigned int)0x8);
                u135 = (float)t132;
                if ((int)t132 < 0) {
                    u135 = ((float)t132 + 4.2949673e+09f);
                }
                u138 = 100.0f;
                u138 = u138 + 10.0f * u135;
                *(float *)(((int)stk + 24)) = u138;
                (((struct o4_float *)(t102))->v) = ((math_sin_angle16((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 24))));
                (((struct oC_float *)(t102))->v) = ((math_cos_angle16((*(int *)(((int)stk + 4))))) * (*(float *)(((int)stk + 24))));
                (((struct o8_float *)(t102))->v) = 0.0f;
                (((struct o2C_float *)(t102))->v) = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
                (((struct o28_float *)(t102))->v) = ((((struct o4_float *)((*(int *)(((int)stk + 8)))))->v));
                t149 = math_rand_float();
                u152 = (t149 * 255.0f);
                if (!(2.14748365e+09f > (t149 * 255.0f))) {
                    u152 = (((t149 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
                }
                t154 = (int)((unsigned int)(int)u152 % (unsigned int)0x20);
                u157 = (float)t154;
                if ((int)t154 < 0) {
                    u157 = ((float)t154 + 4.2949673e+09f);
                }
                *(unsigned int *)((t102 + 0x14)) = (int)((u157 * 737280.0f) / 360.0f);
                t160 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t160 + 0x1);
                t100 = (t100 + 0x1);
                if ((int)(t160 + 0x1) < (int)0xA) continue;
                break;
            }
            t161 = t154;
        }
        return t161;
    }
    return t0;
}
