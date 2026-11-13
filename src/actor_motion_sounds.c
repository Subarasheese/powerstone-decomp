/* motion-id sound table of the secondary actors (0c08c864-0c08d644) */

int pl_play_side_se_at_frame(int, int, int);
int FUN_0c0a3824(int);
int math_vec3_sub(int, int, int);
int math_signed_sqrt(float);
int memset(int, int, int);
struct variant_obj {
    char pad_00[7];
    signed char entry;      /* 7 */
    signed char row;        /* 8 */
    signed char group;      /* 9 */
    char pad_0a[6];
    int value;              /* 16 */
};
int ai_dist_class(int);
float math_rand_float(void);
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o7204_uchar { char p[0x7204]; unsigned char v; };
int FUN_0c0555c4(void);
int FUN_0c0e6d00(void);
int FUN_0c0e6e5c(int);
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
int ai_roll_chance(void);
int ai_dist_class(int a4);
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o71D4_short { char p[0x71D4]; short v; };
int ai_dist_class(int);
int FUN_0c0e6f24(void);
int ai_lookup_dir_sector(int, int);
int ai_run_reaction_script(int);

int ai_difficulty_tier(void);
int FUN_0c08cd18(int a4);
int ai_reaction_check_0(int a4, int a5);
int ai_reaction_check_1(int a4, int a5);
int ai_reaction_check_2(int a4, int a5);
int ai_reaction_check_3(int a4, int a5);
int ai_pick_reaction(int a4, int a5);

int FUN_0c08c864(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x72B0));
    if (t0 == 1) {
        return t0;
    }
    FUN_0c0a3824(a4);
    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 0x100) && (((t1 << 8) + (unsigned char)t0) != 0x101)) {
        if (((t1 << 8) + (unsigned char)t0) != 0x102) {
            if (((t1 << 8) + (unsigned char)t0) != 0x103) {
                if (((t1 << 8) + (unsigned char)t0) != 0x107) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x108) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x109) {
                            if (((t1 << 8) + (unsigned char)t0) != 0x10B) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x10C) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x10D) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x10E) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x10F) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x110) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x111) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x401) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x402) {
                                                                if (((t1 << 8) + (unsigned char)t0) != 0x403) {
                                                                    if (((t1 << 8) + (unsigned char)t0) != 0x404) {
                                                                        if (((t1 << 8) + (unsigned char)t0) != 0x405) {
                                                                        } else {
                                                                            pl_play_side_se_at_frame(a4, 0xF, 0xB);
                                                                            pl_play_side_se_at_frame(a4, 0x64, 0xC);
                                                                        }
                                                                    } else {
                                                                        pl_play_side_se_at_frame(a4, 0x23, 0xB);
                                                                        pl_play_side_se_at_frame(a4, 0x3E, 0xB);
                                                                        pl_play_side_se_at_frame(a4, 0x5E, 0xC);
                                                                    }
                                                                } else {
                                                                    pl_play_side_se_at_frame(a4, 0x14, 0xA);
                                                                }
                                                            } else {
                                                                pl_play_side_se_at_frame(a4, 0x14, 0xA);
                                                            }
                                                        } else {
                                                            pl_play_side_se_at_frame(a4, 0x36, 0xB);
                                                            pl_play_side_se_at_frame(a4, 0x72, 0xB);
                                                        }
                                                    } else {
                                                        pl_play_side_se_at_frame(a4, 0x9, 0xC);
                                                    }
                                                } else {
                                                    pl_play_side_se_at_frame(a4, 0x2, 0xC);
                                                }
                                            } else {
                                                pl_play_side_se_at_frame(a4, 0x9, 0xB);
                                            }
                                        } else {
                                            pl_play_side_se_at_frame(a4, 0x9, 0xB);
                                        }
                                    } else {
                                        pl_play_side_se_at_frame(a4, 0x0, 0xB);
                                    }
                                } else {
                                    pl_play_side_se_at_frame(a4, 0x0, 0xB);
                                }
                            } else {
                                pl_play_side_se_at_frame(a4, 0x0, 0xB);
                            }
                        } else {
                            pl_play_side_se_at_frame(a4, 0x0, 0xB);
                        }
                    } else {
                        pl_play_side_se_at_frame(a4, 0x0, 0xB);
                    }
                } else {
                    pl_play_side_se_at_frame(a4, 0x0, 0xB);
                }
            } else {
                pl_play_side_se_at_frame(a4, 0x10, 0xC);
            }
        } else {
            pl_play_side_se_at_frame(a4, 0x17, 0xC);
        }
    } else {
        pl_play_side_se_at_frame(a4, 0x7, 0xB);
    }
    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if ((((t1 << 8) + (unsigned char)t0) != 0x100) && (((t1 << 8) + (unsigned char)t0) != 0x101)) {
        if (((t1 << 8) + (unsigned char)t0) != 0x108) {
            if (((t1 << 8) + (unsigned char)t0) != 0x109) {
                if (((t1 << 8) + (unsigned char)t0) != 0x10B) {
                    if (((t1 << 8) + (unsigned char)t0) != 0x10C) {
                        if (((t1 << 8) + (unsigned char)t0) != 0x10D) {
                            if ((((t1 << 8) + (unsigned char)t0) != 0x10E) && (((t1 << 8) + (unsigned char)t0) != 0x10F)) {
                                if (((t1 << 8) + (unsigned char)t0) != 0x160) {
                                    if (((t1 << 8) + (unsigned char)t0) != 0x163) {
                                        if (((t1 << 8) + (unsigned char)t0) != 0x166) {
                                            if (((t1 << 8) + (unsigned char)t0) != 0x400) {
                                                if (((t1 << 8) + (unsigned char)t0) != 0x401) {
                                                    if (((t1 << 8) + (unsigned char)t0) != 0x402) {
                                                        if (((t1 << 8) + (unsigned char)t0) != 0x403) {
                                                            if (((t1 << 8) + (unsigned char)t0) != 0x404) {
                                                                if (((t1 << 8) + (unsigned char)t0) != 0x405) {
                                                                    return ((t1 << 8) + (unsigned char)t0);
                                                                }
                                                                return ((int (*)(void))(0xC08CAC0))();
                                                            }
                                                            return ((int (*)(void))(0xC08CADA))();
                                                        }
                                                        return ((int (*)(void))(0xC08CAD4))();
                                                    }
                                                    return ((int (*)(void))(0xC08CACE))();
                                                }
                                                return ((int (*)(void))(0xC08CAB2))();
                                            }
                                            return ((int (*)(void))(0xC08CAAC))();
                                        }
                                        return ((int (*)(void))(0xC08CA9E))();
                                    }
                                    return ((int (*)(void))(0xC08CA98))();
                                }
                                return ((int (*)(void))(0xC08CA92))();
                            }
                            return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x4, a7);
                        }
                        return ((int (*)(void))(0xC08CA8C))();
                    }
                    return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08CA9A))(a4, a5, 0x4, a7);
}

int ai_reset_slot(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3));
    memset(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC439E38), 0x0, 0x24);
    *(unsigned char *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC439E38) + 0x6)) = 0x63;
    *(unsigned char *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC439E38) + 0x4)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC439E38) + 0x5)) = 0x0;
    return 0x0;
}

int ai_difficulty_tier(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F305C;
    t1 = (t0 - 20);
    if ((int)(signed char)(t0 - 20) < 0) {
        t1 = 0x0;
    }
    t0 = t1;
    if ((int)(signed char)t1 > (int)0xB) {
        t0 = 0xB;
    }
    return (0x3 & (((signed char)t0 >> 1) >> 1));
}

int ai_dist_to_opponent(int a4)
{
    int stk[6];
    register float u2;
    register float u3;
    register float u5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    math_vec3_sub((((int)stk + 0) + 0xC), (a4 + 0x20), ((*(int *)((a4 + 0x1C))) + 0x20));
    u2 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 8)) = u2;
    u3 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 4)) = u3;
    u5 = (u3 * u3);
    u5 = u5 + u2 * (*(float *)(((int)stk + 8)));
    return (math_signed_sqrt(u5));
}

void ai_select_variant_script(struct variant_obj *obj, int idx)
{
    char *row_ptr;
    unsigned int rnd;

    obj->group = ai_dist_class(idx);
    row_ptr = ((char **)0xC338A80)[obj->group] + obj->row * 16;
    rnd = (unsigned int)(math_rand_float() * 255.0f);
    obj->entry = row_ptr[rnd % 16];
    obj->value = ((int **)0xC338A68)[obj->group][obj->entry];
}

int FUN_0c08cd18(int a4)
{
    register int t4;
    register int t3;
    register int t11;
    register int t16;
    register int t17;

    if ((*(signed char *)((a4 + 0x1E))) == 0) {
        *(volatile signed char *)0xC7F304D;
        t4 = *(int *)((t3 + 0x1C));
        *(volatile signed char *)(((-(FUN_0c0e6d00())) + 0xC3383F9));
        *(volatile short *)((t3 + 0x71D4));
        *(volatile short *)((t4 + 0x71D4));
        *(volatile signed char *)(((0x14 - (FUN_0c0e6d00())) + 0xC3383FA));
        *(volatile signed char *)((t11 + 0x8));
        *(unsigned char *)((t16 + 0x8)) = (FUN_0c0e6e5c(t11));
        if ((*(signed char *)((t16 + 0x8))) != (signed char)t17) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ai_reaction_check_0(int a4, int a5)
{
    register int t0;
    int t1;
    register int t2;

    if (((*(signed char *)(((*(int *)((a5 + 0x1C))) + 0x4))) == 6) && ((t0 = *(signed char *)((a4 + 0x1D)), (t0 & 1) == 0) && (t1 = *(int *)((a5 + 0x1C)), t2 = *(signed char *)((0x71BA + t1)), t2 == 33))) {
        (((struct o1D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1D))) | 0x1);
        *(unsigned char *)((a4 + 0x0)) = 0x2;
        *(unsigned char *)(((0x1 + a4) + 0x0)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        (((struct o1F_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x1C));
        (((struct o1C_uchar *)(a4))->v) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) <= (int)0x3) {
            *(unsigned int *)((a4 + 0x10)) = 0xC338410;
        } else {
            *(unsigned int *)((a4 + 0x10)) = 0xC338412;
        }
        return 0x1;
    }
    return 0x0;
}

int ai_reaction_check_1(int a4, int a5)
{
    int t0;
    register int t1;

    if ((((*(signed char *)((a4 + 0x1D))) & 2) == 0) && (t0 = *(int *)((a5 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 13)) {
        (((struct o1D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1D))) | 0x2);
        t0 = ai_roll_chance();
        if ((signed char)t0 != 0) {
            *(unsigned char *)((a4 + 0x0)) = 0x2;
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            *(unsigned char *)((a4 + 0x3)) = 0x0;
            (((struct o1F_uchar *)(a4))->v) = 0x1;
            (((struct o1E_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x10)) = (*(int *)((0xC33844C + ((signed char)(ai_dist_class(a5)) << 2))));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ai_reaction_check_2(int a4, int a5)
{
    register int t0;
    register int t1;
    int t2;

    if ((((*(signed char *)((a4 + 0x1D))) & 4) == 0) && ((t0 = *(int *)((a5 + 0x1C)), t1 = *(signed char *)((t0 + 0x71BA)), t1 == 23) && (t2 = *(signed char *)((t0 + 0xA)), t2 != 0))) {
        (((struct o1D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1D))) | 0x4);
        t0 = ai_roll_chance();
        if ((signed char)t0 != 0) {
            *(unsigned char *)((a4 + 0x0)) = 0x2;
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            *(unsigned char *)((a4 + 0x3)) = 0x0;
            (((struct o1F_uchar *)(a4))->v) = 0x2;
            (((struct o1E_uchar *)(a4))->v) = 0x1;
            *(unsigned int *)((a4 + 0x10)) = (*(int *)((0xC338484 + ((signed char)(ai_dist_class(a5)) << 2))));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ai_reaction_check_3(int a4, int a5)
{
    int stk[1];
    register int t22;
    register int t3;
    register int t7;
    int t4;
    register int t5;

    *(unsigned short *)(((int)stk + 0)) = ((((struct o20_short *)(a4))->v));
    (((struct o20_ushort *)(a4))->v) = ((((struct o71D4_short *)(a5))->v));
    t22 = 0x0;
    if (((*(signed char *)((a4 + 0x1D))) & 8) == 0) {
        t3 = ai_dist_class(a5);
        t22 = 0x0;
        if (((signed char)t3 == 5) && (t4 = *(short *)(((int)stk + 0)), t5 = (((struct o71D4_short *)(a5))->v), t4 != t5)) {
            (((struct o1D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1D))) | 0x8);
            t7 = ai_roll_chance();
            t22 = 0x0;
            if ((signed char)t7 != 0) {
                *(unsigned char *)((a4 + 0x0)) = 0x2;
                *(unsigned char *)((a4 + 0x1)) = 0x0;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
                *(unsigned char *)((a4 + 0x3)) = 0x0;
                (((struct o1F_uchar *)(a4))->v) = 0x3;
                (((struct o1E_uchar *)(a4))->v) = 0x1;
                math_rand_float();
                *(unsigned int *)((a4 + 0x10)) = (*(int *)((0xC3384F4 + ((FUN_0c0e6f24()) << 2))));
                t22 = 0x1;
            }
        }
    }
    return t22;
}

int ai_pick_reaction(int a4, int a5)
{
    register int t0;
    int t1;

    t0 = 0x1E;
    if ((*(signed char *)((a4 + 0x1E))) == 0) {
        t1 = *(signed char *)((a5 + 0x71BA));
        t0 = t1;
        if ((t1 != 0) && (t1 != 2)) {
        } else {
            t1 = ai_reaction_check_0(a4, a5);
            t0 = (signed char)t1;
            if ((signed char)t1 == 0) {
                t1 = ai_reaction_check_1(a4, a5);
                t0 = t1;
                if (t1 == 0) {
                    t1 = ai_reaction_check_2(a4, a5);
                    t0 = (signed char)t1;
                    if ((signed char)t1 == 0) {
                        t0 = (signed char)(ai_reaction_check_3(a4, a5));
                    }
                }
            }
        }
    }
    return t0;
}

int ai_reaction_mode0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0xC));
            *(unsigned short *)((a4 + 0xC)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = *(signed char *)((a4 + 0xA));
                t2 = ai_dist_class(a5);
                t3 = (signed char)t2;
                if (t0 != (signed char)t2) {
                    *(unsigned char *)((a4 + 0x1)) = 0x1;
                    t3 = 0x1;
                }
                t0 = t3;
            } else {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t0 = 0x1;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o2DC_uint *)(a5))->v) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        if ((*(short *)((a4 + 0xC))) == 0) {
            t1 = ai_difficulty_tier();
            math_rand_float();
            *(unsigned short *)((a4 + 0xC)) = (*(short *)(((0xC150654 + ((((signed char)t1 << 2) << 2) << 1)) + ((FUN_0c0e6f24()) << 1))));
        }
        *(unsigned char *)((a4 + 0xA)) = (ai_dist_class(a5));
        t1 = *(short *)((a4 + 0xC));
        *(unsigned short *)((a4 + 0xC)) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
            t1 = *(signed char *)((a4 + 0xA));
            t2 = ai_dist_class(a5);
            t3 = (signed char)t2;
            if (t1 != (signed char)t2) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t3 = 0x1;
            }
            t1 = t3;
        } else {
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            t1 = 0x1;
        }
        t0 = t1;
    }
    return t0;
}

int ai_reaction_mode1(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0xC));
            *(unsigned short *)((a4 + 0xC)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = *(signed char *)((a4 + 0xA));
                t1 = ai_dist_class(a5);
                if ((int)t0 >= (int)(signed char)t1) {
                    *(unsigned char *)((a4 + 0x1)) = 0x1;
                    t0 = 0x1;
                } else {
                    t1 = ai_lookup_dir_sector(a5, (*(signed char *)((a4 + 0xB))));
                    (((struct o2DC_uint *)(a5))->v) = t1;
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t1 = 0x1;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        if ((*(short *)((a4 + 0xC))) == 0) {
            t1 = ai_dist_class(a5);
            math_rand_float();
            *(volatile float *)0xC08D248;
            *(unsigned short *)((a4 + 0xC)) = (*(short *)(((0xC1506B4 + ((((signed char)t1 << 2) << 2) << 1)) + ((FUN_0c0e6f24()) << 1))));
        }
        math_rand_float();
        *(volatile float *)0xC08D248;
        t1 = *(signed char *)((0xC338504 + (FUN_0c0e6f24())));
        *(unsigned char *)((a4 + 0xA)) = t1;
        t0 = t1;
    }
    return t0;
}

int ai_reaction_mode2(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            if ((*(short *)((a4 + 0xC))) != 0) {
                t0 = *(short *)((a4 + 0xC));
                *(unsigned short *)((a4 + 0xC)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o2E4_uint *)(a5))->v) = (*(int *)((a4 + 0x18)));
                    (((struct o2DC_uint *)(a5))->v) = (*(int *)((a4 + 0x18)));
                }
            }
            t0 = *(signed char *)((a5 + 0x71BA));
            t1 = t0;
            if (t0 != 11) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t1 = 0x1;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        (((struct o2E4_uint *)(a5))->v) = (*(int *)((a4 + 0x14)));
        (((struct o2DC_uint *)(a5))->v) = (*(int *)((a4 + 0x14)));
        t0 = 0x2DC;
    }
    return t0;
}

int ai_reaction_mode3(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0xC));
            *(unsigned short *)((a4 + 0xC)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t2 = 0x1;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        math_rand_float();
        *(volatile float *)0xC08D324;
        
        *(volatile short *)((a4 + 0xE));
        t1 = FUN_0c0e6f24();
        t2 = *(signed char *)((0xC338514 + (*(signed char *)((a4 + 0x8)))));
        t3 = *(short *)((a4 + 0xC));
        *(unsigned short *)((a4 + 0xC)) = (t3 + ((t1 + t2) + 0x1));
        t0 = (t3 + ((t1 + t2) + 0x1));
    }
    return t0;
}

int ai_reaction_mode4(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)((a5 + 0x71BA));
            t1 = t0;
            if (t0 != 33) {
                *(unsigned char *)((a4 + 0x1)) = 0x1;
                t1 = 0x1;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
        (((struct o7204_uchar *)(a5))->v) = 0x2;
        t0 = 0x7204;
    }
    return t0;
}

int ai_slot_state0_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)((0xC338518 + ((*(signed char *)((a4 + 0x5))) << 2)));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        *(unsigned int *)((a4 + 0x10)) = 0xC33852C;
    }
    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    t0 = FUN_0c08cd18(a4);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x10)) = 0xC33852C;
    }
    return ai_run_reaction_script(a4);
}

int ai_slot_state2_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)((0xC338518 + ((*(signed char *)((a4 + 0x5))) << 2)));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    }
    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
    return ai_run_reaction_script(a4);
}

int ai_update_slot(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;
    register int t7;

    t0 = FUN_0c0555c4();
    if (t0 != 0) {
        if ((*(signed char *)((a4 + 0x10B))) == 0) {
            t3 = *(signed char *)((a4 + 0x3));
            (((struct o2DC_uint *)(a4))->v) = 0x0;
            (((struct o2E4_uint *)(a4))->v) = 0x0;
            (((struct o7204_uchar *)(a4))->v) = 0x0;
            ai_pick_reaction(((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC439E38), a4);
            t7 = *(int *)((((*(signed char *)((((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC439E38) + 0x0))) << 2) + 0xC338534));
            return ((int (*)(int, int, int, int))(t7))(((signed char)((((t3 << 2) << 1) + t3) << 2) + 0xC439E38), a4, a6, a7);
        }
        return 0x10B;
    }
    return t0;
}
