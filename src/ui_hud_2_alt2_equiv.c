/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d9e0-0c02f328) */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o8_float { char p[0x8]; float v; };
int ui_sprite_queue_add(int, int, int, int, int, int);
float math_sin_angle16(int);
int FUN_0c0e6d00(void);

int FUN_0c02e4d0(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t2;
    register int t4;
    register int t14;
    register int t20;
    register float u21;
    register float u22;
    register float u23;
    register int t28;
    register int t29;
    register float u30;
    register float u31;
    register int t34;
    register int t44;
    register int t62;
    register int t68;
    register float u69;
    register float u70;
    register float u71;
    register int t76;
    register int t77;
    register float u78;
    register float u79;
    register int t82;
    register int t92;
    register int t103;
    register int t110;
    register float t120;
    register int t123;
    register int t129;
    register int t136;
    register int t138;
    register int t139;
    register float t154;
    register int t157;
    register int t159;
    register int t160;
    register float u162;
    register int t164;
    int t168;
    register int t172;
    register int t173;
    register float u175;
    register int t180;
    register int t194;
    register int t196;
    register int t201;
    int t158;
    register float u161;
    register int t169;
    register int t170;
    register int t171;
    register float u174;
    register int t182;
    register int t183;
    register int t184;
    register int t185;
    register float u186;
    register float u187;

    if ((*(signed char *)((((unsigned short)((unsigned short)(*(signed char *)(((a4 + 0x2C) + 0x1))) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4))) == 10) {
        return ((int (*)(int, int, int, int))(0xC02E982))(a4, 0xC7E40C4, a6, a7);
    }
    t2 = *(signed char *)(((a4 + 0x2C) + 0x0));
    if (t2 != 0) {
        if (t2 == 1) {
            t4 = *(signed char *)(((a4 + 0x2C) + 0x2));
            if (t4 != 0) {
                if (t4 != 1) {
                    if (t4 == 2) {
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
                if ((*(int *)0xC7F3028) == 0) {
                    *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x800);
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t14 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t14 - 1);
                if ((signed char)(t14 - 1) == 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
                    *(unsigned char *)(((a4 + 0x2C) + 0xE)) = ((*(signed char *)(((a4 + 0x2C) + 0xE))) ^ 0x1);
                }
                *(float *)(((int)stk + 28)) = 1.0f;
                *(float *)(((int)stk + 24)) = 1.0f;
                *(float *)(((int)stk + 52)) = ((((struct o8_float *)((a4 + 0x2C)))->v));
                *(float *)(((int)stk + 20)) = 7.69999886f;
                *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
                t20 = *(signed char *)(((a4 + 0x2C) + 0x1));
                u21 = (((struct o14_float *)(a4))->v);
                u22 = *(float *)(((t20 << 2) + 0xC149398));
                u23 = *(float *)(((0xC366A7C + (t20 << 2)) + 0x0));
                *(float *)(((int)stk + 12)) = (((u22 - u21) + u23) + 16.0f);
                *(unsigned int *)(((int)stk + 48)) = 0x0;
                t28 = *(signed char *)(((a4 + 0x2C) + 0xE));
                if (t28 != 0) {
                    *(unsigned int *)(((int)stk + 48)) = (*(int *)(((a4 + 0x2C) + 0x4)));
                }
                *(unsigned int *)(((int)stk + 60)) = 0xA;
                t29 = 0x3;
                u30 = (((u22 - u21) + u23) + 16.0f);
                u31 = u23;
                for (;;) {
                    if (t29 == 0) {
                        break;
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t28 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t34 = t28;
                    *(int *)((int)stk + 0) = t34;
                    t28 = (*(signed char *)(((a4 + 0x2C) + 0xE)));
                    t28 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, t28, t34, 0x0));
                    t28 = 0x14;
                    u31 = (*(float *)((a4 + t28)));
                    t28 = 0x4;
                    u30 = (*(float *)((((int)stk + 8) + t28)));
                    t28 = 0x4;
                    t29 = (t29 - 1);
                    u30 = (u30 + u31);
                    *(float *)((((int)stk + 8) + t28)) = u30;
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xF)) = ((*(signed char *)(((a4 + 0x2C) + 0xF))) + 0x1);
                }
                t44 = *(signed char *)(((a4 + 0x2C) + 0xF));
                *(unsigned char *)(((a4 + 0x2C) + 0xF)) = (t44 - 1);
                if ((int)(signed char)(t44 - 1) <= (int)0x14) {
                    (((struct o8_float *)((a4 + 0x2C)))->v) = ((float)(*(signed char *)(((a4 + 0x2C) + 0xF))) / 20.0f);
                }
                if (((((struct o8_float *)((a4 + 0x2C)))->v)) == 0.0f) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E97C))(0xC366A70, (t20 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (t20 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
            (((struct o8_float *)((a4 + 0x2C)))->v) = 1.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            *(unsigned char *)(((a4 + 0x2C) + 0xE)) = 0x0;
            *(unsigned char *)(((a4 + 0x2C) + 0xF)) = 0x50;
            if ((*(int *)0xC7F3028) == 0) {
                *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x800);
            }
            if ((*(int *)0xC7F3028) != 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
            }
            t62 = *(signed char *)(((a4 + 0x2C) + 0xC));
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t62 - 1);
            if ((signed char)(t62 - 1) == 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x2;
                *(unsigned char *)(((a4 + 0x2C) + 0xE)) = ((*(signed char *)(((a4 + 0x2C) + 0xE))) ^ 0x1);
            }
            *(float *)(((int)stk + 28)) = 1.0f;
            *(float *)(((int)stk + 24)) = 1.0f;
            *(float *)(((int)stk + 52)) = ((((struct o8_float *)((a4 + 0x2C)))->v));
            *(float *)(((int)stk + 20)) = 7.69999886f;
            *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
            t68 = *(signed char *)(((a4 + 0x2C) + 0x1));
            u69 = (((struct o14_float *)(a4))->v);
            u70 = *(float *)(((t68 << 2) + 0xC149398));
            u71 = *(float *)(((0xC366A7C + (t68 << 2)) + 0x0));
            *(float *)(((int)stk + 12)) = (((u70 - u69) + u71) + 16.0f);
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            t76 = *(signed char *)(((a4 + 0x2C) + 0xE));
            if (t76 != 0) {
                *(unsigned int *)(((int)stk + 48)) = (*(int *)(((a4 + 0x2C) + 0x4)));
            }
            *(unsigned int *)(((int)stk + 60)) = 0xA;
            t77 = 0x3;
            u78 = (((u70 - u69) + u71) + 16.0f);
            u79 = u71;
            for (;;) {
                if (t77 == 0) {
                    break;
                }
                *(int *)((int)stk + 4) = 0x0;
                t76 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                t82 = t76;
                *(int *)((int)stk + 0) = t82;
                t76 = (*(signed char *)(((a4 + 0x2C) + 0xE)));
                t76 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, t76, t82, 0x0));
                t76 = 0x14;
                u79 = (*(float *)((a4 + t76)));
                t76 = 0x4;
                u78 = (*(float *)((((int)stk + 8) + t76)));
                t76 = 0x4;
                t77 = (t77 - 1);
                u78 = (u78 + u79);
                *(float *)((((int)stk + 8) + t76)) = u78;
            }
            if ((*(int *)0xC7F3028) != 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0xF)) = ((*(signed char *)(((a4 + 0x2C) + 0xF))) + 0x1);
            }
            t92 = *(signed char *)(((a4 + 0x2C) + 0xF));
            *(unsigned char *)(((a4 + 0x2C) + 0xF)) = (t92 - 1);
            if ((int)(signed char)(t92 - 1) <= (int)0x14) {
                (((struct o8_float *)((a4 + 0x2C)))->v) = ((float)(*(signed char *)(((a4 + 0x2C) + 0xF))) / 20.0f);
            }
            if (((((struct o8_float *)((a4 + 0x2C)))->v)) == 0.0f) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E97C))(0xC366A70, (t68 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (t68 << 2), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        if (t2 == 2) {
            if ((*(signed char *)((a4 + 0x1E))) == 0) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x3;
            }
            t103 = *(signed char *)(((a4 + 0x2C) + 0x2));
            if (t103 != 0) {
                if (t103 != 1) {
                    if (t103 != 2) {
                        if (t103 == 3) {
                            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                    }
                    *(unsigned int *)(((int)stk + 48)) = 0x0;
                    *(unsigned int *)(((int)stk + 60)) = 0x5;
                    *(float *)(((int)stk + 28)) = 1.0f;
                    *(float *)(((int)stk + 24)) = 1.0f;
                    *(float *)(((int)stk + 12)) = ((((((struct o18_float *)(a4))->v)) + (*(float *)((0xC366A7C + ((*(signed char *)((a4 + 0x1))) << 2))))) + -16.0f);
                    *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 424.0f);
                    *(float *)(((int)stk + 20)) = 8.19999886f;
                    *(volatile short *)(((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0) + 0xC7EB2B8));
                    t110 = FUN_0c0e6d00();
                    if ((*(int *)0xC7F3028) == 0) {
                        *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + (*(int *)(((t110 << 2) + 0xC1493A8))));
                    }
                    t120 = math_sin_angle16((*(int *)(((a4 + 0x2C) + 0x4))));
                    *(float *)(((int)stk + 52)) = t120;
                    if (!(t120 > 0.0f)) {
                        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x1;
                        *(unsigned char *)(((0xC + (a4 + 0x2C)) + 0x0)) = (*(signed char *)((t110 + 0xC1493BC)));
                        return ((int (*)(void))(0xC02E982))();
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t123 = (*(signed char *)((a4 + 0x1)));
                    *(int *)((int)stk + 0) = t123;
                    ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, 0x4, t123, 0x0);
                    return ((int (*)(void))(0xC02E91A))();
                }
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t129 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t129 - 1);
                if ((signed char)(t129 - 1) != 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
            } else {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x28;
                if ((*(int *)0xC7F3028) != 0) {
                    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = ((*(signed char *)(((a4 + 0x2C) + 0xC))) + 0x1);
                }
                t136 = *(signed char *)(((a4 + 0x2C) + 0xC));
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t136 - 1);
                if ((signed char)(t136 - 1) != 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
                }
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        if (t2 == 3) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E948))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    t138 = *(signed char *)(((a4 + 0x2C) + 0x2));
    if (t138 != 0) {
        if (t138 != 1) {
            if (t138 != 2) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            t139 = *(signed char *)((a4 + 0x1));
            if ((int)(*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)t139 * (unsigned short)0x72D0)) + 0x7230))) < (int)0x2) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t139 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            if ((*(int *)0xC7F3028) == 0) {
                *(unsigned int *)(((a4 + 0x2C) + 0x4)) = ((*(int *)(((a4 + 0x2C) + 0x4))) + 0x400);
            }
            *(float *)(((int)stk + 28)) = 1.0f;
            *(float *)(((int)stk + 24)) = 1.0f;
            *(float *)(((int)stk + 20)) = 7.69999886f;
            *(float *)(((int)stk + 16)) = ((*(float *)0xC366A78) + 436.0f);
            *(float *)(((int)stk + 12)) = ((((*(float *)((0xC149398 + ((*(signed char *)(((a4 + 0x2C) + 0x1))) << 2)))) - ((((struct o14_float *)(a4))->v))) + (*(float *)(((((*(signed char *)((a4 + 0x1))) << 2) + 0xC366A7C) + 0x0)))) + 16.0f);
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            *(unsigned int *)(((int)stk + 60)) = 0xA;
            t154 = math_sin_angle16((*(int *)(((a4 + 0x2C) + 0x4))));
            *(float *)(((int)stk + 52)) = t154;
            if (!(t154 > 0.0f)) {
                *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x1;
                *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x1E;
            }
            t157 = *(signed char *)0xC7F4755;
            if ((t157 != 0) && (t158 = *(signed char *)0xC7F4765, t158 != 0)) {
                t159 = 0x15;
                t160 = 0x2;
                u162 = 0.0f;
                for (;;) {
                    if (t160 == 0) {
                        break;
                    }
                    *(int *)((int)stk + 4) = 0x0;
                    t159 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t164 = t159;
                    *(int *)((int)stk + 0) = t164;
                    t159 = (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FDB0, 0x4, 0x1, t164, 0x0));
                    t159 = 0x14;
                    u162 = (*(float *)((a4 + t159)));
                    t159 = 0x4;
                    u161 = (*(float *)((((int)stk + 8) + t159)));
                    t159 = 0x4;
                    t160 = (t160 - 1);
                    u161 = (u161 + u162);
                    *(float *)((((int)stk + 8) + t159)) = u161;
                }
                return ((int (*)(int, int, int, int))(0xC02E982))(0xC7F4750, a5, a6, a7);
            }
            t168 = t157;
            t172 = 0xC7F4750;
            t173 = 0x0;
            u175 = 0.0f;
            for (;;) {
                if ((int)t173 >= (int)0x3) {
                    break;
                }
                t171 = 0x72D0;
                t168 = (*(signed char *)((a4 + 0x1)));
                t169 = 0xC7EB2F5;
                t168 = ((unsigned short)t168 * (unsigned short)t171);
                t168 = (unsigned short)t168;
                t170 = (*(signed char *)((t169 + t168)));
                t168 = 0x1;
                t168 = ((int)t168 << (int)t173);
                if ((t170 & t168) != 0) {
                    *(int *)((int)stk + 4) = 0x0;
                    t168 = (*(signed char *)(((a4 + 0x2C) + 0x1)));
                    t180 = t168;
                    *(int *)((int)stk + 0) = t180;
                    t172 = ((int)stk + 0);
                    t172 = (t172 + 0x8);
                    t168 = (ui_sprite_queue_add(t172, 0xC17FDB0, 0x4, 0x1, t180, 0x0));
                } else {
                    t182 = t169;
                    t183 = t170;
                    t184 = t171;
                    t185 = t172;
                    u186 = u174;
                    u187 = u175;
                }
                u174 = u186;
                u175 = u187;
                t168 = 0x14;
                t169 = t182;
                t170 = t183;
                t171 = t184;
                t172 = t185;
                u175 = (*(float *)((a4 + t168)));
                t168 = 0x4;
                u174 = (*(float *)((((int)stk + 8) + t168)));
                t168 = 0x4;
                t173 = (t173 + 0x1);
                u174 = (u174 + u175);
                *(float *)((((int)stk + 8) + t168)) = u174;
            }
            return ((int (*)(int, int, int, int))(0xC02E982))(t172, a5, a6, a7);
        }
        if ((int)(*(signed char *)((0xC7EB2F4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) >= (int)0x2) {
            t194 = *(signed char *)(((a4 + 0x2C) + 0xC));
            *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t194 - 1);
            if ((signed char)(t194 - 1) != 0) {
                return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
            }
            *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
            (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, 0xC7E40C4, 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    t196 = *(signed char *)((a4 + 0x1));
    if ((int)(*(signed char *)(((0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)) + 0x7230))) < (int)0x2) {
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
    *(unsigned char *)(((a4 + 0x2C) + 0xC)) = 0x1;
    if ((int)(*(signed char *)((0xC7EB2F4 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x1))) * (unsigned short)0x72D0)))) >= (int)0x2) {
        t201 = *(signed char *)(((a4 + 0x2C) + 0xC));
        *(unsigned char *)(((a4 + 0x2C) + 0xC)) = (t201 - 1);
        if ((signed char)(t201 - 1) != 0) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
        }
        *(unsigned char *)(((a4 + 0x2C) + 0x2)) = ((*(signed char *)(((a4 + 0x2C) + 0x2))) + 0x1);
        (((struct o8_float *)((a4 + 0x2C)))->v) = 0.0f;
        *(unsigned int *)(((a4 + 0x2C) + 0x4)) = 0x0;
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
    }
    *(unsigned char *)(((a4 + 0x2C) + 0x2)) = 0x0;
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC02E982))(0xC366A70, (0xC7E40C4 + (unsigned short)((unsigned short)t196 * (unsigned short)0x72D0)), 0xA, 0x258, 1.0f, 7.69999886f, 436.0f, 16.0f);
}
