/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
int FUN_0c01db74(int, int, int, int, float, float, float, float, float, float, float);
int FUN_0c01dd6a(int, int, float);
int FUN_0c01dde2(int);
int FUN_0c01dee2(int);
int FUN_0c01e05a(int);
int FUN_0c020468(int);
int FUN_0c0208ec(int, int);
int FUN_0c023c72(int, int);
int FUN_0c023d04(int, int);
int FUN_0c024764(int, int, int, int);
int FUN_0c0247d0(int, int);
int FUN_0c024ea6(int, int, int, float);
int FUN_0c024fe4(int, int, int, float);
int FUN_0c02512e(int, int, int, int);
int FUN_0c025332(int, int, int, float);
int FUN_0c02545c(int, int, int);
int FUN_0c0421ee(int, int);
int FUN_0c0593e0(int);
int FUN_0c0a3d5c(int, int);
int FUN_0c0d3270(void);
int FUN_0c0d32dc(void);
int FUN_0c0d3350(void);
int fx_spawn_double_ring(int, int);
int hit_box_vs_box_push(int, int, int, float, float, float, float, float, float, float);
int mdl_setup_part_matrices(int);
int obj_release(int);
int obj_tick_class(int);
int part_free0(int);
int part_free1(int);
int part_free2(int);
int obj_destroy(int a4);
int FUN_0c0255ae(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c02565a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c09bb9e(int a4, int a5);
int FUN_0c01e264(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0d3366(void);
int FUN_0c05941e(int a4);
int FUN_0c09c45a(int a4);
int FUN_0c020998(int a4, int a5, int a6, int a7);

int obj_destroy(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t3 = *(signed char *)((a4 + 0x2DD));
        t2 = (t2 << 2);
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    t3 = t0;
                } else {
                    t0 = 0x2E0;
                    t0 = (t0 + a4);
                    t0 = (t0 + t2);
                    t0 = (*(int *)((t0 + 0x0)));
                    part_free2(t0);
                }
                t4 = t3;
            } else {
                t0 = 0x2E0;
                t0 = (t0 + a4);
                t0 = (t0 + t2);
                t0 = (*(int *)((t0 + 0x0)));
                part_free1(t0);
            }
            t3 = t4;
        } else {
            t0 = 0x2E0;
            t0 = (t0 + a4);
            t0 = (t0 + t2);
            t0 = (*(int *)((t0 + 0x0)));
            part_free0(t0);
        }
        t1 = (t1 + 0x1);
        t0 = t3;
    }
    if ((*(int *)((a4 + 0x14))) == 0) {
        t0 = *(int *)((a4 + 0x18));
        *(unsigned int *)(((0xC7E4070 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = t0;
        if (t0 == 0) {
            *(unsigned int *)((0xC7E4098 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x14)) = 0x0;
        }
    } else {
        if ((*(int *)((a4 + 0x18))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            *(unsigned int *)((0xC7E4098 + ((*(signed char *)((a4 + 0x2))) << 2))) = t0;
            *(unsigned int *)((t0 + 0x18)) = 0x0;
        } else {
            *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x18)) = (*(int *)((a4 + 0x18)));
            *(unsigned int *)(((*(int *)((a4 + 0x18))) + 0x14)) = (*(int *)((a4 + 0x14)));
        }
    }
    return obj_release(a4);
}

int FUN_0c0255ae(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    t3 = a6;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t4 = 0x107;
        t5 = (*(signed char *)((t3 + t4)));
        if (t5 == 0) {
            t4 = 0x248;
            t4 = (*(signed char *)((t3 + t4)));
            if (t4 != 0) {
                if (t4 != 1) {
                    if (t4 == 2) {
                        t2 = 0x24C;
                        t1 = t3;
                        t2 = (t2 + t3);
                        t0 = a5;
                        t4 = (hit_box_vs_box_push(t0, t1, t2, f4, f5, f6, f7, f8, f9, f10));
                        t6 = t4;
                        if (t4 == 0) {
                        } else {
                            t5 = 0xC020468;
                            t0 = t3;
                            t4 = (FUN_0c020468(t0));
                            t1 = a4;
                            t2 = 0x1;
                            t0 = t3;
                            t4 = (FUN_0c024764(t0, t1, t2, a5));
                        }
                    } else {
                        t7 = t5;
                        t8 = t0;
                        t9 = t1;
                        t5 = t2;
                    }
                    t11 = t7;
                    t7 = t8;
                    t8 = t9;
                    t9 = t5;
                } else {
                    t2 = 0x24C;
                    t1 = t3;
                    t2 = (t2 + t3);
                    t0 = a5;
                    t4 = (FUN_0c024ea6(t0, t1, t2, f4));
                    t6 = t4;
                    if (t4 != 0) {
                        t0 = t3;
                        t4 = (FUN_0c020468(t0));
                        t1 = a4;
                        t2 = 0x1;
                        t0 = t3;
                        t4 = (FUN_0c024764(t0, t1, t2, a5));
                    }
                }
                t5 = t11;
                t11 = t7;
                t7 = t8;
                t8 = t9;
            } else {
                t2 = 0x24C;
                t1 = t3;
                t2 = (t2 + t3);
                t0 = a5;
                t4 = (FUN_0c024fe4(t0, t1, t2, f4));
                t6 = t4;
                if (t4 != 0) {
                    t0 = t3;
                    t4 = (FUN_0c020468(t0));
                    t1 = a4;
                    t2 = 0x1;
                    t0 = t3;
                    t4 = (FUN_0c024764(t0, t1, t2, a5));
                }
            }
            t0 = t11;
            t1 = t7;
            t2 = t8;
            t1 = a5;
            t0 = t3;
            t4 = (FUN_0c023c72(t0, t1));
            t4 = t6;
            if (t4 == 2) {
                t4 = (*(signed char *)((a4 + 0x1)));
                t1 = t4;
                t0 = t3;
                t4 = (FUN_0c0247d0(t0, t1));
            }
        } else {
            t6 = t5;
            t7 = t0;
            t8 = t1;
            t9 = t2;
        }
        t3 = (*(int *)((t3 + 0x18)));
        t5 = t6;
        t0 = t7;
        t1 = t8;
        t2 = t9;
    }
    return t4;
}

int FUN_0c02565a(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    t3 = a6;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t4 = 0x107;
        t5 = (*(signed char *)((t3 + t4)));
        if (t5 == 0) {
            t4 = 0x248;
            t4 = (*(signed char *)((t3 + t4)));
            if (t4 != 0) {
                if (t4 != 1) {
                    if (t4 == 2) {
                        t2 = 0x24C;
                        t1 = t3;
                        t2 = (t2 + t3);
                        t0 = a5;
                        t4 = (FUN_0c02512e(t0, t1, t2, a7));
                        t6 = t4;
                        if (t4 == 0) {
                        } else {
                            t5 = 0xC020468;
                            t0 = t3;
                            t4 = (FUN_0c020468(t0));
                            t1 = a4;
                            t2 = 0x0;
                            t0 = t3;
                            t4 = (FUN_0c024764(t0, t1, t2, a5));
                        }
                    } else {
                        t7 = t5;
                        t8 = t0;
                        t9 = t1;
                        t5 = t2;
                    }
                    t11 = t7;
                    t7 = t8;
                    t8 = t9;
                    t9 = t5;
                } else {
                    t2 = 0x24C;
                    t1 = t3;
                    t2 = (t2 + t3);
                    t0 = a5;
                    t4 = (FUN_0c025332(t0, t1, t2, f4));
                    t6 = t4;
                    if (t4 != 0) {
                        t0 = t3;
                        t4 = (FUN_0c020468(t0));
                        t1 = a4;
                        t2 = 0x0;
                        t0 = t3;
                        t4 = (FUN_0c024764(t0, t1, t2, a5));
                    }
                }
                t5 = t11;
                t11 = t7;
                t7 = t8;
                t8 = t9;
            } else {
                t2 = 0x24C;
                t1 = t3;
                t2 = (t2 + t3);
                t0 = a5;
                t4 = (FUN_0c02545c(t0, t1, t2));
                t6 = t4;
                if (t4 != 0) {
                    t0 = t3;
                    t4 = (FUN_0c020468(t0));
                    t1 = a4;
                    t2 = 0x0;
                    t0 = t3;
                    t4 = (FUN_0c024764(t0, t1, t2, a5));
                }
            }
            t0 = t11;
            t1 = t7;
            t2 = t8;
            t1 = a5;
            t0 = t3;
            t4 = (FUN_0c023d04(t0, t1));
            t4 = t6;
            if (t4 == 2) {
                t4 = (*(signed char *)((a4 + 0x1)));
                t1 = t4;
                t0 = t3;
                t4 = (FUN_0c0247d0(t0, t1));
            }
        } else {
            t6 = t5;
            t7 = t0;
            t8 = t1;
            t9 = t2;
        }
        t3 = (*(int *)((t3 + 0x18)));
        t5 = t6;
        t0 = t7;
        t1 = t8;
        t2 = t9;
    }
    return t4;
}

int FUN_0c09bb9e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;

    t0 = (0x0 + a5);
    t1 = (0x0 + a5);
    t2 = 0x0;
    t3 = (0x0 + a5);
    t4 = (0x0 + a5);
    for (;;) {
        if ((unsigned short)(*(short *)(((((t2 << 1) + (t2 << 2)) + a5) + 0x0))) == 0x999) {
            break;
        }
        t0 = 0x71A4;
        t8 = *(signed char *)((a4 + t0));
        t0 = (t0 + 0x1);
        if ((unsigned short)(*(short *)(((((t2 << 1) + (t2 << 2)) + a5) + 0x0))) == ((t8 << 8) + (unsigned char)(*(signed char *)((a4 + t0))))) {
            t0 = (*(signed char *)((t3 + 0x2)));
            t0 = (unsigned char)t0;
            if (t0 == (unsigned short)((((struct o719E_short *)(a4))->v))) {
                t0 = (*(signed char *)((t1 + 0x3)));
                (((struct o710B_uchar *)(a4))->v) = t0;
                t0 = (*(signed char *)((t1 + 0x4)));
                (((struct o710C_uchar *)(a4))->v) = t0;
                t0 = 0x71F1;
                if ((*(signed char *)((a4 + t0))) == 0) {
                    t0 = (*(signed char *)((t4 + 0x5)));
                    (((struct o710A_uchar *)(a4))->v) = t0;
                }
            }
        }
        t1 = (t1 + 0x6);
        t3 = (t3 + 0x6);
        t2 = (t2 + 0x1);
        t4 = (t4 + 0x6);
    }
    return t0;
}

int FUN_0c01e264(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4));
        if ((unsigned char)t1 != 0) {
            if ((unsigned char)t1 != 1) {
                if ((unsigned char)t1 != 2) {
                    if ((unsigned char)t1 != 3) {
                        t3 = (unsigned char)t1;
                        if ((unsigned char)t1 != 4) {
                        } else {
                            t3 = (FUN_0c01db74(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10));
                        }
                        t1 = t3;
                    } else {
                        t1 = (FUN_0c01e05a(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
                    }
                    t3 = t1;
                } else {
                    t3 = (FUN_0c01dee2(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
                }
                t1 = t3;
            } else {
                t1 = (FUN_0c01dde2(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
            }
        } else {
            t1 = (FUN_0c01dd6a(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C), a5, f4));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x24) {
            break;
        }
    }
    return t1;
}

int FUN_0c0d3366(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
            } else {
                FUN_0c0d3350();
            }
        } else {
            FUN_0c0d32dc();
        }
    } else {
        FUN_0c0d3270();
    }
    obj_tick_class(0x5);
    return FUN_0c0593e0(0x5);
}

int FUN_0c05941e(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t2 = 0xC7E4070;
    t3 = a4;
    t4 = (*(int *)(((a4 << 2) + 0xC7E4070)));
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t5 = (*(signed char *)((t4 + 0x0)));
        t6 = (*(int *)((t4 + 0x18)));
        t7 = t3;
        if (t5 != 0) {
            t2 = 0x270;
            u2 = 0.0f;
            u3 = (*(float *)((t4 + t2)));
            t7 = t3;
            if ((u3 == u2) && ((t2 = 0x274, t0 = (u3 == u2), u2 = 0.0f, u0 = *(float *)((t4 + t2)), u3 = u0, u3 == u2) && (t2 = 0x278, t1 = (u3 == u2), u2 = 0.0f, u1 = *(float *)((t4 + t2)), u3 = u1, u3 == u2))) {
                t9 = t5;
                u4 = u2;
                u5 = u3;
            } else {
                t2 = (*(short *)((t4 + 0x6)));
                t2 = (unsigned short)t2;
                if ((t2 & 0x80) == 0) {
                    t3 = t4;
                    t2 = (mdl_setup_part_matrices(t3));
                } else {
                    t10 = t5;
                    t7 = t3;
                    u6 = u2;
                    u7 = u3;
                }
                t9 = t10;
                u4 = u6;
                u5 = u7;
            }
            t10 = t9;
            u6 = u4;
            u4 = u5;
        } else {
            t10 = t5;
            u6 = u2;
            u4 = u3;
        }
        u2 = u6;
        u3 = u4;
        t4 = t6;
        t5 = t10;
        t3 = t7;
    }
    return t2;
}

int FUN_0c09c45a(int a4)
{
    if ((*(signed char *)((a4 + 0x27C))) == 2) {
        FUN_0c0421ee((a4 + 0x20), 0x2);
    } else {
        fx_spawn_double_ring((*(signed char *)((a4 + 0x3))), (a4 + 0x20));
    }
    return FUN_0c0a3d5c((*(signed char *)((a4 + 0x3))), (*(signed char *)((a4 + 0x27C))));
}

int FUN_0c020998(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t0;
    register int t1;
    register int t8;
    register int t9;

    t2 = a4;
    t3 = a4;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t0 = 0xFC;
        t1 = (*(int *)((t3 + t0)));
        if (t1 != 0) {
            t2 = (*(int *)((t3 + t0)));
            t0 = (FUN_0c0208ec(t2, t3));
        } else {
            t8 = t1;
            t9 = t2;
        }
        t3 = (*(int *)((t3 + 0x18)));
        t1 = t8;
        t2 = t9;
    }
    return t0;
}
