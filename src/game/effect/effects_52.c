/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a918-0c03adf8) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
float math_sin_angle16(int);
extern int _quick_odd_mvn();

int FUN_0c03a918(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register int t12;
    register float u15;
    register int t16;
    register int t18;
    register int t19;
    register float u20;
    register int t22;
    register int t23;
    register float u26;
    register int t27;
    register int t33;
    register float u35;
    register float u36;
    register int t37;
    register int t43;
    register float u45;
    register float u46;
    register int t47;
    register int t52;
    register int t54;
    register int t53;
    register int t56;
    register float u59;
    register int t60;
    register float u62;
    register int t65;
    register int t67;
    register float u70;
    register int t72;
    register int t77;
    register int t78;
    register float u81;
    register float u82;
    register int t83;
    register int t89;
    register int t90;
    register float u93;
    register float u94;
    register int t95;
    register int t101;
    register int t113;
    register int t103;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t108;
    register int t120;
    register int t123;
    register int t124;
    register int t125;
    register int t126;
    register int t131;
    register int t17;
    register float u21;
    register int t61;
    register float u63;
    register int t121;
    register int t122;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t1))->v)) + -0.5f);
                (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t1))->v)) + 0.0f);
                (((struct oC_float *)(t1))->v) = (((((struct oC_float *)(t1))->v)) + 0.333333313f);
                t5 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t5 + 0x1);
                t8 = 0xEC;
                if ((int)(short)(t5 + 0x1) < (int)0x3D) {
                } else {
                    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    *(unsigned int *)((t1 + 0x14)) = 0xE001;
                    *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t8 = 0x2F4;
                }
                return t8;
            }
            if (t0 == 3) {
                t12 = (((struct o2E0_int *)(a4))->v);
                (((struct o4_float *)(t12))->v) = (((((struct o4_float *)(t12))->v)) + -2.74576259f);
                (((struct o8_float *)(t12))->v) = (((((struct o8_float *)(t12))->v)) + 5.62711859f);
                u15 = (((struct oC_float *)(t12))->v);
                (((struct oC_float *)(t12))->v) = (u15 + 3.72881341f);
                t16 = 0xC;
                t18 = 0xC3215FC;
                t19 = 0x1;
                u20 = (u15 + 3.72881341f);
                for (;;) {
                    if ((int)t19 < (int)0x6) {
                        t17 = 0x2E0;
                        t16 = 0xEC;
                        t17 = (t17 + a4);
                        *(unsigned int *)(((int)stk + 8)) = (t19 << 2);
                        t22 = ((t19 << 2) + t17);
                        t17 = t19;
                        t23 = *(int *)((t22 + 0x0));
                        t17 = (t17 << 1);
                        *(int *)((int)stk + 0) = (0x10 + t23);
                        t17 = (t17 + t19);
                        t17 = (t17 << 2);
                        t17 = (signed char)t17;
                        *(unsigned int *)(((int)stk + 12)) = t17;
                        t17 = (t17 + 0xC321644);
                        *(unsigned int *)(((int)stk + 4)) = t17;
                        t18 = (*(int *)(((int)stk + 12)));
                        u26 = *(float *)((t17 + 0x0));
                        t18 = (t18 + 0xC32168C);
                        t27 = *(short *)((a4 + t16));
                        t17 = t27;
                        u21 = (u26 - (*(float *)((t18 + 0x0))));
                        u20 = (math_sin_angle16(((int)(((((float)(((t27 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x10 + t23);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        t16 = 0x4;
                        t17 = (*(int *)(((int)stk + 8)));
                        t33 = *(int *)((((0x2E0 + a4) + t17) + 0x0));
                        *(int *)((int)stk + 0) = (0x14 + t33);
                        t17 = (*(int *)(((int)stk + 4)));
                        u35 = *(float *)((t18 + t16));
                        u36 = *(float *)((t17 + t16));
                        t16 = 0xEC;
                        t37 = *(short *)((a4 + t16));
                        t17 = t37;
                        u21 = (u36 - u35);
                        u20 = (math_sin_angle16(((int)(((((float)(((t37 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x14 + t33);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        t16 = 0x8;
                        t17 = (*(int *)(((int)stk + 8)));
                        t43 = *(int *)((((0x2E0 + a4) + t17) + 0x0));
                        *(int *)((int)stk + 0) = (0x18 + t43);
                        t17 = (*(int *)(((int)stk + 4)));
                        u45 = *(float *)((t18 + t16));
                        u46 = *(float *)((t17 + t16));
                        t16 = 0xEC;
                        t47 = *(short *)((a4 + t16));
                        t17 = t47;
                        u21 = (u46 - u45);
                        u20 = (math_sin_angle16(((int)(((((float)(((t47 << 1) + t17) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        u21 = (u21 * u20);
                        t16 = (0x18 + t43);
                        t19 = (t19 + 0x1);
                        u21 = (u21 * 65536.0f);
                        u21 = (u21 / 360.0f);
                        u21 = (u21 + 0.5f);
                        t17 = (int)u21;
                        t17 = (t17 & 0xFFFF);
                        *(unsigned int *)((t16 + 0x0)) = t17;
                        continue;
                    }
                    break;
                }
                t52 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t52 + 0x1);
                t54 = 0xEC;
                if ((int)(short)(t52 + 0x1) >= (int)0x78) {
                    t53 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t53 + 0x1);
                    t54 = (t53 + 0x1);
                }
                return t54;
            }
            return obj_destroy(a4);
        }
        t56 = (((struct o2E0_int *)(a4))->v);
        (((struct o4_float *)(t56))->v) = (((((struct o4_float *)(t56))->v)) + -2.34545445f);
        (((struct o8_float *)(t56))->v) = (((((struct o8_float *)(t56))->v)) + -2.36363626f);
        u59 = (((struct oC_float *)(t56))->v);
        (((struct oC_float *)(t56))->v) = (u59 + 2.0181818f);
        *(unsigned int *)(((int)stk + 4)) = 0x1;
        t60 = 0xC;
        u62 = (u59 + 2.0181818f);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) < (int)0x6) {
                t65 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 12)) = (t65 << 2);
                t61 = (*(int *)((((t65 << 2) + (0x2E0 + a4)) + 0x0)));
                *(int *)((int)stk + 0) = (0x10 + t61);
                t67 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 20)) = (signed char)(((t67 << 1) + t67) << 2);
                *(unsigned int *)(((int)stk + 16)) = ((signed char)(((t67 << 1) + t67) << 2) + 0xC321644);
                t60 = (*(int *)(((int)stk + 20)));
                t60 = (t60 + 0xC32168C);
                *(unsigned int *)(((int)stk + 8)) = t60;
                u70 = *(float *)((t60 + 0x0));
                t60 = 0xEC;
                t72 = *(short *)((a4 + t60));
                u63 = ((*(float *)((((signed char)(((t67 << 1) + t67) << 2) + 0xC321644) + 0x0))) - u70);
                u62 = (math_sin_angle16(((int)(((((float)(((t72 << 1) + t72) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = (0x10 + t61);
                t61 = 0x2E0;
                t61 = (t61 + a4);
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t60 = 0x4;
                t61 = (t61 + (*(int *)(((int)stk + 12))));
                t77 = *(int *)((t61 + 0x0));
                t61 = 0x14;
                t61 = (t61 + t77);
                t78 = t61;
                *(int *)((int)stk + 0) = t78;
                t61 = (*(int *)(((int)stk + 8)));
                u81 = *(float *)((t61 + t60));
                u82 = *(float *)(((*(int *)(((int)stk + 16))) + t60));
                t60 = 0xEC;
                t83 = *(short *)((a4 + t60));
                u63 = (u82 - u81);
                u62 = (math_sin_angle16(((int)(((((float)(((t83 << 1) + t83) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = t78;
                t61 = 0x2E0;
                t61 = (t61 + a4);
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t60 = 0x8;
                t61 = (t61 + (*(int *)(((int)stk + 12))));
                t89 = *(int *)((t61 + 0x0));
                t61 = 0x18;
                t61 = (t61 + t89);
                t90 = t61;
                *(int *)((int)stk + 0) = t90;
                t61 = (*(int *)(((int)stk + 8)));
                u93 = *(float *)((t61 + t60));
                u94 = *(float *)(((*(int *)(((int)stk + 16))) + t60));
                t60 = 0xEC;
                t95 = *(short *)((a4 + t60));
                u63 = (u94 - u93);
                u62 = (math_sin_angle16(((int)(((((float)(((t95 << 1) + t95) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                u63 = (u63 * u62);
                t60 = t90;
                u63 = (u63 * 65536.0f);
                u63 = (u63 / 360.0f);
                u63 = (u63 + 0.5f);
                *(unsigned int *)((t60 + 0x0)) = ((int)u63 & 0xFFFF);
                t61 = (*(int *)(((int)stk + 4)));
                t61 = (t61 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t61;
                continue;
            }
            break;
        }
        t101 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t101 + 0x1);
        t113 = 0xEC;
        if ((int)(short)(t101 + 0x1) >= (int)0x37) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t103 = 0x400129E4;
            t104 = 0x37;
            t105 = (short)(t101 + 0x1);
            t106 = 0x1;
            t107 = a5;
            t108 = a6;
            for (;;) {
                if ((int)t106 >= (int)0x6) {
                    break;
                }
                t103 = 0x2E0;
                t108 = t106;
                t108 = (t108 << 1);
                t105 = t106;
                t107 = t106;
                t107 = (t107 << 2);
                t108 = (t108 + t105);
                t105 = 0xC0E6FE8;
                t103 = (t103 + a4);
                t103 = (t103 + t107);
                t108 = (t108 << 2);
                t103 = (*(int *)((t103 + 0x0)));
                t108 = (signed char)t108;
                t104 = t108;
                t103 = (t103 + 0x4);
                t104 = (t104 + 0xC3215B4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t103) = *(struct mv3 *)(t104); }
                t103 = 0x2E0;
                t104 = t108;
                t104 = (t104 + 0xC3215FC);
                t103 = (t103 + a4);
                t103 = (t103 + t107);
                t103 = (*(int *)((t103 + 0x0)));
                t103 = (t103 + 0x10);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t103) = *(struct mv3 *)(t104); }
                t106 = (t106 + 0x1);
            }
            *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x1;
            t113 = 0x2F4;
        }
        return t113;
    }
    t120 = (((struct o2E0_int *)(a4))->v);
    (((struct o4_float *)(t120))->v) = 179.0f;
    (((struct o8_float *)(t120))->v) = 139.0f;
    (((struct oC_float *)(t120))->v) = -99.0f;
    *(unsigned int *)((t120 + 0x14)) = 0xDC73;
    t123 = 0xDC73;
    t124 = 0x1;
    t125 = a5;
    t126 = a6;
    for (;;) {
        if ((int)t124 >= (int)0x6) {
            break;
        }
        t121 = 0x2E0;
        t126 = t124;
        t126 = (t126 << 1);
        t123 = t124;
        t125 = t124;
        t125 = (t125 << 2);
        t126 = (t126 + t123);
        t121 = (t121 + a4);
        t121 = (t121 + t125);
        t126 = (t126 << 2);
        t121 = (*(int *)((t121 + 0x0)));
        t126 = (signed char)t126;
        t122 = t126;
        t121 = (t121 + 0x4);
        t122 = (t122 + 0xC3215B4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t121) = *(struct mv3 *)(t122); }
        t121 = 0x2E0;
        t122 = t126;
        t122 = (t122 + 0xC3215FC);
        t121 = (t121 + a4);
        t121 = (t121 + t125);
        t121 = (*(int *)((t121 + 0x0)));
        t121 = (t121 + 0x10);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t121) = *(struct mv3 *)(t122); }
        t124 = (t124 + 0x1);
    }
    *(unsigned char *)((((((struct o2F4_int *)(a4))->v)) + 0x0)) = 0x0;
    t131 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t131 + 0x1);
    return (t131 + 0x1);
}
