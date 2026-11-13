/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c0158d8-0c01628c) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
extern int FUN_0c016238();
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
int ui_sprite_queue_add(int, int, int, int, int, int);

int obj_step_pos_vel_acc(int a4);
int FUN_0c0161d8(void);

int FUN_0c0158d8(void)
{
    (((struct o0_uchar *)0xC361C78)->v) = 0x2;
    (((struct o1_uchar *)0xC361C78)->v) = 0x0;
    return 0x0;
}

int FUN_0c0158e4(void)
{
    (((struct o1_uchar *)0xC361C78)->v) = 0x0;
    (((struct o0_uchar *)0xC361C78)->v) = 0x0;
    return 0x0;
}

int FUN_0c0158ee(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t5;
    register int t18;
    register int t27;
    register int t35;
    register int t58;
    register int t59;
    register int t60;
    register int t75;
    register int t76;
    register int t77;
    register int t78;
    int t84;
    register int t86;
    register int t106;
    register int t110;
    register int t123;
    register int t132;
    register int t140;
    register int t160;
    register int t161;
    register int t57;
    register int t105;

    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t0 = *(signed char *)0xC361C78;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t1 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(FUN_0c016238))(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10);
            if ((*(int *)0xC7F3028) == 0) {
                t5 = *(signed char *)0xC361C79;
                if ((unsigned char)t5 != 0) {
                    if ((unsigned char)t5 != 1) {
                        if ((unsigned char)t5 != 2) {
                        } else {
                            if ((*(signed char *)0xC7F3082) == 0) {
                                (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                            }
                        }
                    } else {
                        t18 = (((struct o4_short *)0xC361C78)->v);
                        (((struct o4_ushort *)0xC361C78)->v) = (t18 - 1);
                        if ((int)(short)(t18 - 1) >= 0) {
                        } else {
                            (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                        }
                    }
                } else {
                    (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                    (((struct o4_ushort *)0xC361C78)->v) = 0x1A;
                    t27 = (((struct o4_short *)0xC361C78)->v);
                    (((struct o4_ushort *)0xC361C78)->v) = (t27 - 1);
                    if ((int)(short)(t27 - 1) >= 0) {
                    } else {
                        (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                    }
                }
                t35 = (((struct o2_short *)0xC361C78)->v);
                (((struct o2_ushort *)0xC361C78)->v) = (t35 - 1);
                if ((short)(t35 - 1) == 0) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    (((struct o0_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C78) + 0x1);
                }
                t160 = 0xC361C79;
                t161 = 0xC361C7C;
            }
        } else {
            *(unsigned int *)(((int)stk + 12)) = 0x1;
            t160 = a4;
            t161 = a5;
        }
    } else {
        (((struct o0_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C78) + 0x1);
        (((struct o2_ushort *)0xC361C78)->v) = 0x12C;
        (((struct o6_ushort *)0xC361C78)->v) = 0x63;
        FUN_0c0161d8();
        t58 = 0x14;
        t59 = 0xC17E9C0;
        t60 = 0xC361C80;
        for (;;) {
            if (t58 == 0) {
                break;
            }
            t57 = (*(int *)((t59 + 0x0)));
            t59 = (t59 + 0x4);
            t58 = (t58 - 1);
            *(unsigned int *)((t60 + 0x0)) = t57;
            t60 = (t60 + 0x4);
        }
        *(volatile float *)0xC015BD8;
        math_rand_float();
        *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((0xC17EA84 + (FUN_0c0e6f24()))));
        math_rand_float();
        t75 = FUN_0c0e6f24();
        *(unsigned int *)(((int)stk + 4)) = (0xC17EA34 + (signed char)(((t75 << 2) + t75) << 2));
        t76 = *(signed char *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 0)) = t76;
        if ((int)t76 > 0) {
            t77 = 0xFFFFFFFF;
            t78 = 0x0;
            for (;;) {
                math_rand_float();
                t84 = FUN_0c0e6f24();
                t77 = (signed char)t77;
                t86 = t84;
                if ((signed char)t84 == t77) {
                    t86 = (0x7 & (t84 + 0x1));
                }
                math_rand_float();
                t78 = (t78 + 0x1);
                *(unsigned int *)(((((*(signed char *)(((*(int *)(((int)stk + 4))) + (FUN_0c0e6f24())))) << 2) + 0xC361C80) + 0x0)) = (*(int *)((((signed char)t86 << 2) + 0xC17EA10)));
                t77 = t86;
                if ((int)t78 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
        } else {
            t105 = (signed char)(((t75 << 2) + t75) << 2);
        }
        t106 = ((int (*)(int))(FUN_0c016238))(t105);
        if ((*(int *)0xC7F3028) == 0) {
            t110 = *(signed char *)0xC361C79;
            if ((unsigned char)t110 != 0) {
                if ((unsigned char)t110 != 1) {
                    if ((unsigned char)t110 != 2) {
                    } else {
                        if ((*(signed char *)0xC7F3082) == 0) {
                            (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                        }
                    }
                } else {
                    t123 = (((struct o4_short *)0xC361C78)->v);
                    (((struct o4_ushort *)0xC361C78)->v) = (t123 - 1);
                    if ((int)(short)(t123 - 1) >= 0) {
                    } else {
                        (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                    }
                }
            } else {
                (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                (((struct o4_ushort *)0xC361C78)->v) = 0x1A;
                t132 = (((struct o4_short *)0xC361C78)->v);
                (((struct o4_ushort *)0xC361C78)->v) = (t132 - 1);
                if ((int)(short)(t132 - 1) >= 0) {
                } else {
                    (((struct o1_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C79) + 0x1);
                }
            }
            t140 = (((struct o2_short *)0xC361C78)->v);
            (((struct o2_ushort *)0xC361C78)->v) = (t140 - 1);
            if ((short)(t140 - 1) == 0) {
                *(unsigned int *)(((int)stk + 12)) = 0x1;
                (((struct o0_uchar *)0xC361C78)->v) = ((*(signed char *)0xC361C78) + 0x1);
            }
            t160 = 0xC361C79;
            t161 = 0xC361C7C;
        }
    }
    *(volatile int *)(((int)stk + 12));
    return ((int (*)(int, int, int, int))(0xC015AB2))(t160, t161, a6, a7);
}

int FUN_0c015ac8(int a4)
{
    int stk[16];
    register int t0;
    register int t12;

    t0 = (((struct o44_int *)(a4))->v);
    *(float *)(((int)stk + 12)) = (((((struct o1C_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x4))));
    *(float *)(((int)stk + 16)) = (((((struct o20_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x6))));
    *(float *)(((int)stk + 20)) = ((((struct o24_float *)(a4))->v));
    *(float *)(((int)stk + 24)) = ((((struct o14_float *)(a4))->v));
    *(float *)(((int)stk + 28)) = ((((struct o18_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 48)) = ((((struct o40_int *)(a4))->v));
    *(float *)(((int)stk + 52)) = ((((struct o10_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 60)) = (unsigned short)(*(short *)((t0 + 0x2)));
    *(int *)((int)stk + 4) = 0x0;
    t12 = (*(signed char *)((a4 + 0xC)));
    *(int *)((int)stk + 0) = t12;
    return (ui_sprite_queue_add((((int)stk + 0) + 0x8), 0xC17FE4C, (unsigned char)(*(signed char *)((a4 + 0x4))), (*(short *)((t0 + 0x0))), t12, 0x0));
}

int obj_step_pos_vel_acc(int a4)
{
    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o28_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o34_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o2C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o30_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    return 0x30;
}

int FUN_0c015fda(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)0xC7F3028) != 0) {
        return ((int (*)(int, int, int, int))(0xC0161A8))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(int, int, int, int, float))(0xC0161A8))(a4, a5, a6, a7, 0.0f);
        }
    } else {
        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        *(unsigned char *)((a4 + 0x7)) = 0x1;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        t0 = *(signed char *)((a4 + 0x5));
        (((struct o1C_float *)(a4))->v) = (*(float *)((((((unsigned char)t0 << 2) << 1) + 0xC17EB2C) + 0x0)));
        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)(((((unsigned char)t0 << 2) << 1) + 0xC17EB2C)))->v));
        (((struct o18_float *)(a4))->v) = 1.5f;
        (((struct o14_float *)(a4))->v) = 1.5f;
        (((struct o24_float *)(a4))->v) = 6.00099993f;
        (((struct o44_uint *)(a4))->v) = (*(int *)(((((unsigned char)(*(signed char *)((a4 + 0x5))) << 2) + 0xC17EA30) + 0x0)));
        (((struct o10_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 == 3) {
                    return ((int (*)(int, int, int, int, float))(0xC016194))(0xC361C78, a5, a6, a7, 0.0f);
                }
                return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
            }
            t0 = *(signed char *)((a4 + 0x2));
            if ((unsigned char)t0 != 0) {
                if ((unsigned char)t0 != 1) {
                    return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
                }
            } else {
                *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
                (((struct o28_float *)(a4))->v) = 0.0f;
                (((struct o34_float *)(a4))->v) = 0.0f;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o38_float *)(a4))->v) = 0.75f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                (((struct o3C_float *)(a4))->v) = 0.0f;
            }
            obj_step_pos_vel_acc(a4);
            if (((((struct o20_float *)(a4))->v)) > 586.0f) {
                *(volatile signed char *)((a4 + 0x1));
                return ((int (*)(int, int, int, int))(0xC016188))(a4, a5, a6, a7);
            }
            return ((int (*)(void))(0xC0161A8))();
        }
        t0 = *(signed char *)((a4 + 0x2));
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
            }
            t0 = *(int *)((a4 + 0x8));
            *(unsigned int *)((a4 + 0x8)) = (t0 - 1);
            if ((t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                return ((int (*)(int, int, int, int, float))(0xC0161A8))(a4, a5, a6, a7, 0.0f);
            }
            return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
        }
        if ((unsigned char)(*(signed char *)0xC361C79) == 3) {
            *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            math_rand_float();
            
            *(unsigned int *)((a4 + 0x8)) = ((FUN_0c0e6f24()) + 0x1);
            return ((int (*)(void))(0xC0161A8))();
        }
        return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
    }
    (((struct o10_float *)(a4))->v) = (((((struct o10_float *)(a4))->v)) + 0.0384615362f);
    if ((unsigned char)(*(signed char *)0xC361C79) != 2) {
        return ((int (*)(int, int, int, int, float))(0xC0161A8))(0xC361C78, a5, a6, a7, 0.0f);
    }
    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    (((struct o10_float *)(a4))->v) = 1.0f;
    return ((int (*)(int, int, int, int, float))(0xC0161A8))(a4, a5, a6, a7, 0.0f);
}

int FUN_0c0161d8(void)
{
    register int t0;
    register int t6;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x3)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x2)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x1)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x0)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x7)) = 0x0;
        if ((int)t0 < (int)0x14) {
            *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x4)) = 0x0;
            t3 = t0;
        } else {
            *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x4)) = 0x1;
            t3 = (t0 + 0xEC);
        }
        t6 = ((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t6 + 0x5)) = t3;
        if ((int)t0 >= (int)0x15) {
            break;
        }
    }
    return t3;
}
