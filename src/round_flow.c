/* battle round flow record g_round_flow (init (0c0cc074-0c0ccefc) */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
int FUN_0c049288(void);
int obj_spawn_05ca54(int);
int snd_play_stage_obj_se(int, int, int);
int stage_spawn_layout_objects(void);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_rand_next(void);
int FUN_0c0e6e5c(void);
float FUN_0c0e2240(int, int);
extern int FUN_0c0e6fdc();
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
typedef struct { float x, y, z; } vec3;
extern void FUN_0c05cb46(vec3 *, int, int);
extern void fx_spawn_04463c(vec3 *);
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int item_director_roll_variant(int a4);
int FUN_0c0cc7fc(int a4);
int FUN_0c0ccbfe(void);

int FUN_0c0cc074(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o0_uchar *)0xC7F2665)->v) = 0x1;
    (((struct o7_uchar *)0xC7F2665)->v) = 0x0;
    (((struct o8_uchar *)0xC7F2665)->v) = 0x0;
    (((struct o9_uchar *)0xC7F2665)->v) = 0x0;
    (((struct oA_uchar *)0xC7F2665)->v) = 0x0;
    (((struct oB_uchar *)0xC7F2665)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC7F2974 + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = 0x0;
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    (((struct o2E_uchar *)0xC7F294C)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2990)->v) = 0x0;
    if (((int)(*(signed char *)0xC7F4755) >= (int)0x1) && (t0 = *(signed char *)0xC7F4765, (int)t0 >= (int)0x1)) {
        t0 = *(signed char *)0xC7F4765;
        (((struct o0_uchar *)0xC7F2990)->v) = (t0 + 0x3);
        t1 = (t0 + 0x3);
    } else {
        (((struct o0_uchar *)0xC7F2990)->v) = 0x3;
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)0xC7F2990)) {
            break;
        }
        t0 = 0x32E;
        t0 = (t0 + 0xC7F2664);
        t0 = (t0 + t1);
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t2 = (t1 << 2);
        t1 = (t1 + 0x1);
        t0 = 0x318;
        t0 = (t0 + 0xC7F2664);
        *(unsigned int *)(((t2 + t0) + 0x0)) = 0x0;
    }
    if ((int)(*(signed char *)0xC7F2990) > (int)0x3) {
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(signed char *)0xC7F2990)) {
                break;
            }
            t1 = ((t0 << 2) + 0xC7F297C);
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = (obj_spawn_05ca54(0x0));
        }
    } else {
        t0 = 0x0;
        for (;;) {
            t1 = obj_spawn_05ca54(t0);
            t2 = ((t0 << 2) + 0xC7F297C);
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t1;
            if ((int)t0 >= (int)0x3) {
                break;
            }
        }
    }
    (((struct o0_uint *)0xC7F294C)->v) = (*(int *)((0x0 + (*(int *)0xC664948))));
    t0 = 0x0;
    t1 = 0x1;
    for (;;) {
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            t4 = *(int *)(((t1 << 2) + (*(int *)0xC664948)));
            t1 = (t1 + 0x1);
            *(unsigned int *)((((0xC7F2950 + ((t0 << 2) << 1)) + t2) + 0x0)) = t4;
            t2 = (t2 + 0x4);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o24_uint *)0xC7F294C)->v) = (*(int *)(((t1 << 2) + (*(int *)0xC664948))));
    FUN_0c0ccbfe();
    stage_spawn_layout_objects();
    if ((*(signed char *)0xC7F3051) == 7) {
        FUN_0c049288();
    }
    t0 = *(signed char *)0xC7F3051;
    if (((signed char)t0 != 0) && ((signed char)t0 != 3)) {
        if ((signed char)t0 != 4) {
            if ((signed char)t0 != 7) {
                
                return (signed char)t0;
            }
            return ((int (*)(int, int, int, int))(0xC0CC1FC))(t0, 0x2, 0x2, a7);
        }
        snd_play_stage_obj_se(t0, 0x2, 0x4);
        t1 = *(signed char *)0xC7F3051;
        return ((int (*)(int, int, int, int))(0xC0CC1FC))(t1, 0x2, 0x6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0CC1FC))(t0, 0x2, 0x6, a7);
}

int item_director_count_free_slots(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((signed char)t0 + 0xC7F2974) + 0x0));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            t1 = (t1 + 0x1);
        }
        if ((int)(signed char)t0 >= (int)0x3) {
            break;
        }
    }
    return t1;
}

int item_director_roll_variant(int a4)
{
    int stk[1];
    register int t19;
    register int t24;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t19 = 0x0;
    if ((int)(*(short *)0xC7EB298) < (int)(*(short *)0xC7F2568)) {
    } else {
        t19 = 0x1;
        if ((int)(*(short *)0xC7EB298) > (int)(*(short *)0xC7F2568)) {
        } else {
            math_rand_next();
            t19 = (FUN_0c0e6e5c());
        }
    }
    t24 = t19;
    if ((*(signed char *)(((int)stk + 0))) == 1) {
        t24 = (0x1 - t19);
    }
    return t24;
}

int item_director_pick_spot(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t0;
    register int t13;
    register int t16;
    register int t19;
    register int t20;
    register float t23;
    register int t30;
    register int t31;
    register float u32;
    register int t39;
    register int t40;
    register int t49;
    register int t51;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t87;
    register int t92;
    register int t97;
    register int t98;
    register int t99;
    register float t102;
    register float u104;
    register int t108;
    register int t109;
    register float u111;
    register int t114;
    register int t115;
    register int t116;
    register int t138;
    register int t139;
    register int t140;
    register int t144;
    register int t50;
    register float u52;
    register float u53;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register float u74;
    register float u75;
    register int t66;
    register int t107;
    register float u110;
    register int t125;
    register int t126;
    register int t127;
    register int t128;
    register int t129;
    register float u130;
    register float u131;
    register int t123;

    t0 = *(signed char *)0xC7F2977;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                return t0;
            }
            if ((*(signed char *)0xC7F297A) != 0) {
                *(volatile signed char *)0xC7F2979;
                
                *(unsigned char *)(((int)stk + 60)) = (item_director_roll_variant(0x1));
                t13 = *(signed char *)0xC7F3051;
                *(volatile signed char *)(((int)stk + 60));
                return ((int (*)(int, int, int, int))(0xC0CC6BA))(0x72D0, (((t13 << 2) << 1) + t13), a6, a7);
            }
            t16 = 0x0;
            for (;;) {
                *(float *)((((int)stk + 28) + (t16 << 2))) = 0.0f;
                t19 = 0x0;
                for (;;) {
                    t20 = *(signed char *)0xC7F3051;
                    t23 = FUN_0c0e2240(((unsigned short)((unsigned short)t19 * (unsigned short)0x72D0) + 0xC7E40E4), (((short)(((((t20 << 2) << 1) + t20) << 2) << 1) + 0xC33CA80) + (signed char)((((t16 << 1) + t16) << 2) << 1)));
                    t19 = (t19 + 0x1);
                    *(float *)((((t16 << 2) + ((int)stk + 28)) + 0x0)) = ((*(float *)((((t16 << 2) + ((int)stk + 28)) + 0x0))) + t23);
                    if ((int)t19 >= (int)0x2) {
                        break;
                    }
                }
                t16 = (t16 + 0x1);
                if ((int)t16 >= (int)0x3) {
                    break;
                }
            }
            t30 = 0x0;
            t31 = 0x0;
            u32 = 0.0f;
            for (;;) {
                if ((*(float *)((((t30 << 2) + ((int)stk + 28)) + 0x0))) > u32) {
                    u32 = (*(float *)((((t30 << 2) + ((int)stk + 28)) + 0x0)));
                    t31 = t30;
                }
                t30 = (t30 + 0x1);
                if ((int)t30 >= (int)0x3) {
                    break;
                }
            }
            return t31;
        }
        if ((*(signed char *)0xC7F297A) != 0) {
            *(unsigned int *)(((int)stk + 8)) = ((unsigned short)((unsigned short)(signed char)(item_director_roll_variant(0x0)) * (unsigned short)0x72D0) + 0xC7E40C4);
            t39 = 0x0;
            for (;;) {
                t40 = *(signed char *)0xC7F3051;
                (((struct o4_float *)(((((signed char)t39 << 2) << 1) + (((int)stk + 8) + 0xC))))->v) = (FUN_0c0e2240(((*(int *)(((int)stk + 8))) + 0x20), (((short)(((((t40 << 2) << 1) + t40) << 2) << 1) + 0xC33CA80) + (signed char)((((t39 << 1) + t39) << 2) << 1))));
                *(unsigned char *)((((((signed char)t39 << 2) << 1) + (((int)stk + 8) + 0xC)) + 0x0)) = t39;
                t39 = (t39 + 0x1);
                if ((int)(signed char)t39 >= (int)0x3) {
                    break;
                }
            }
            t49 = 0x4;
            t51 = 0x0;
            for (;;) {
                if ((int)(signed char)(t51 + 0x1) < (int)0x3) {
                    t56 = (signed char)(t51 + 0x1);
                    t57 = ((((signed char)(t51 + 0x1) << 2) << 1) + (((int)stk + 8) + 0xC));
                    t58 = (t51 + 0x1);
                    t59 = ((((signed char)(t51 + 0x1) << 2) << 1) + (((int)stk + 8) + 0xC));
                    t50 = ((((signed char)t51 << 2) << 1) + (((int)stk + 8) + 0xC));
                    for (;;) {
                        t49 = 0x4;
                        u52 = (*(float *)((t50 + t49)));
                        u53 = (*(float *)((t59 + t49)));
                        if (u52 > u53) {
                            t56 = 0xC0E6FDC;
                            t49 = 0x8;
                            t49 = (((int (*)(int, int, int, int))(FUN_0c0e6fdc))(t57, t58, t59, t51));
                            t50 = t57;
                            t49 = 0x8;
                            t49 = (((int (*)(int))(FUN_0c0e6fdc))(t57));
                            t50 = (((int)stk + 8) + 0x4);
                            t57 = t66;
                            t49 = 0x8;
                            t49 = (((int (*)(int))(FUN_0c0e6fdc))(t57));
                        } else {
                            t68 = t50;
                            t69 = t56;
                            t70 = t57;
                            t71 = t58;
                            t72 = t59;
                            t73 = t51;
                            u74 = u52;
                            u75 = u53;
                        }
                        u52 = u74;
                        u53 = u75;
                        t50 = t68;
                        t56 = t69;
                        t57 = t70;
                        t58 = (t71 + 0x1);
                        t59 = t72;
                        t51 = t73;
                        t50 = (signed char)t58;
                        t57 = (t57 + 0x8);
                        t59 = (t59 + 0x8);
                        if ((int)t50 >= (int)0x3) {
                            break;
                        }
                    }
                }
                t51 = (t51 + 0x1);
                t50 = (signed char)t51;
                if ((int)t50 >= (int)0x2) {
                    break;
                }
            }
            t83 = t49;
            t84 = (0x0 + (((int)stk + 8) + 0xC));
            t85 = (0x0 + (((int)stk + 8) + 0xC));
            t86 = 0x0;
            for (;;) {
                t87 = *(signed char *)((t85 + 0x0));
                if ((*(signed char *)((((signed char)t87 + 0xC7F2974) + 0x0))) == 0) {
                    t83 = 0x315;
                    if ((signed char)t87 != (*(signed char *)((0xC7F2664 + t83)))) {
                        break;
                    }
                    t86 = (t86 + 0x1);
                    t84 = (t84 + 0x8);
                    t85 = (t85 + 0x8);
                    if ((int)(signed char)t86 >= (int)0x3) {
                        return t83;
                    }
                    continue;
                }
                t86 = (t86 + 0x1);
                t84 = (t84 + 0x8);
                t85 = (t85 + 0x8);
                if ((int)(signed char)t86 >= (int)0x3) {
                    return t83;
                }
            }
            return (*(signed char *)((t84 + 0x0)));
        }
        t92 = 0x0;
        for (;;) {
            *(unsigned char *)(((((t92 << 2) << 1) + (((int)stk + 4) + 0xC)) + 0x0)) = t92;
            (((struct o4_float *)((((t92 << 2) << 1) + (((int)stk + 4) + 0xC))))->v) = 0.0f;
            *(unsigned int *)(((int)stk + 4)) = (((t92 << 2) << 1) + (((int)stk + 4) + 0xC));
            t97 = 0x0;
            for (;;) {
                t98 = *(int *)(((int)stk + 4));
                *(int *)((int)stk + 0) = (0x4 + t98);
                t99 = *(signed char *)0xC7F3051;
                t102 = FUN_0c0e2240(((unsigned short)((unsigned short)t97 * (unsigned short)0x72D0) + 0xC7E40E4), (((short)(((((t99 << 2) << 1) + t99) << 2) << 1) + 0xC33CA80) + (signed char)((((t92 << 1) + t92) << 2) << 1)));
                t97 = (t97 + 0x1);
                u104 = (((struct o4_float *)(t98))->v);
                (((struct o4_float *)(t98))->v) = (u104 + t102);
                if ((int)t97 >= (int)0x2) {
                    break;
                }
            }
            t92 = (t92 + 0x1);
            if ((int)t92 >= (int)0x3) {
                break;
            }
        }
        t108 = (0x4 + t98);
        t109 = 0x0;
        u111 = (u104 + t102);
        for (;;) {
            if ((int)(t109 + 0x1) < (int)0x3) {
                t114 = ((((t109 + 0x1) << 2) << 1) + (((int)stk + 4) + 0xC));
                t115 = (t109 + 0x1);
                t116 = ((((t109 + 0x1) << 2) << 1) + (((int)stk + 4) + 0xC));
                t108 = (((t109 << 2) << 1) + (((int)stk + 4) + 0xC));
                for (;;) {
                    t107 = 0x4;
                    u110 = (*(float *)((t108 + t107)));
                    u111 = (*(float *)((t116 + t107)));
                    if (u111 > u110) {
                        t107 = 0x8;
                        t107 = (((int (*)(int, int, int, int))(FUN_0c0e6fdc))(t114, t115, t116, t109));
                        t108 = t114;
                        t107 = 0x8;
                        t107 = (((int (*)(int))(FUN_0c0e6fdc))(t114));
                        t108 = (((int)stk + 4) + 0x4);
                        t114 = t123;
                        t107 = 0x8;
                        t107 = (((int (*)(int))(FUN_0c0e6fdc))(t114));
                    } else {
                        t125 = t108;
                        t126 = t114;
                        t127 = t115;
                        t128 = t116;
                        t129 = t109;
                        u130 = u110;
                        u131 = u111;
                    }
                    u110 = u130;
                    u111 = u131;
                    t108 = t125;
                    t114 = t126;
                    t115 = (t127 + 0x1);
                    t116 = t128;
                    t109 = t129;
                    t114 = (t114 + 0x8);
                    t116 = (t116 + 0x8);
                    if ((int)t115 >= (int)0x3) {
                        break;
                    }
                }
            }
            t109 = (t109 + 0x1);
            if ((int)t109 >= (int)0x2) {
                break;
            }
        }
        t138 = (0x0 + (((int)stk + 4) + 0xC));
        t139 = (0x0 + (((int)stk + 4) + 0xC));
        t140 = 0x0;
        for (;;) {
            if ((*(signed char *)((((*(signed char *)((t139 + 0x0))) + 0xC7F2974) + 0x0))) == 0) {
                break;
            }
            t140 = (t140 + 0x1);
            t138 = (t138 + 0x8);
            t139 = (t139 + 0x8);
            if ((int)t140 >= (int)0x3) {
                return t107;
            }
        }
        return (*(signed char *)((t138 + 0x0)));
    }
    t144 = 0x0;
    for (;;) {
        if ((*(signed char *)(((0xC7F2974 + t144) + 0x0))) == 0) {
            break;
        }
        t144 = (t144 + 0x1);
        if ((int)t144 >= (int)0x3) {
            return t0;
        }
    }
    return t144;
}

int item_director_pick_kind(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0xC33CF54;
    if ((*(signed char *)0xC7F4764) == 0) {
        t1 = 0xC33CF5E;
    }
    t2 = *(signed char *)(((signed char)a4 + t1));
    t1 = 0xC33CF34;
    if (((*(signed char *)0xC7E40C8) != 8) && (t0 = *(signed char *)0xC7EB398, t0 != 8)) {
        t1 = 0xC33CF14;
    }
    if ((signed char)t2 == 3) {
        math_rand_next();
        *(volatile signed char *)0xC7F4750;
        t0 = FUN_0c0e6e5c();
        if ((signed char)t0 != 0) {
            t3 = *(signed char *)((((signed char)t0 - 1) + (*(int *)(((t1 + (((signed char)t2 << 2) << 1)) + 0x0)))));
            return ((int (*)(int, int, int, int))(0xC0CC7F0))(t3, t0, a6, a7);
        }
        math_rand_next();
        t0 = FUN_0c0e6e5c();
        return ((int (*)(int, int, int, int))(0xC0CC7F0))((t0 + 0xF), a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0CC7E0))(t2, 0xC7E40C4, (((signed char)t2 << 2) << 1), a7);
}

int FUN_0c0cc7fc(int a4)
{
    *(unsigned short *)0xC7F2750 = 0x0;
    (((struct o0_uchar *)0xC7F2991)->v) = ((*(signed char *)0xC7F2991) + 0x1);
    (((struct o5_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2995);
    (((struct o4_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2994);
    (((struct o3_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2993);
    (((struct o2_uchar *)0xC7F2991)->v) = (*(signed char *)0xC7F2992);
    (((struct o1_uchar *)0xC7F2991)->v) = a4;
    return 0x32E;
}

void item_director_spawn_queued(char arg)
{
    vec3 entry;
    char *block = (char *)0x0C7F2664;
    char *queue;
    int set_idx = *(signed char *)0x0C7F3051;

    entry = *(vec3 *)((char *)0x0C33CA80 + (short)(set_idx * 72) + (signed char)(arg * 24));
    FUN_0c05cb46(&entry, block[0x32E], arg);
    block[0x32D] = block[0x32D] - 1;
    queue = block + 0x32E;
    queue[0] = queue[1];
    queue = block + 0x32E;
    queue[1] = queue[2];
    queue = block + 0x32E;
    queue[2] = queue[3];
    queue = block + 0x32E;
    queue[3] = queue[4];
    entry.y = entry.y - 40.0f;
    fx_spawn_04463c(&entry);
}

int item_director_phase0(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC7F302C;
    t2 = t0;
    if (t0 == 3) {
        *(unsigned char *)0xC7F266C = ((*(signed char *)0xC7F266C) + 0x1);
        *(unsigned short *)0xC7F2750 = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int item_director_phase1(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t1 + 0x1);
    t2 = 0xEC;
    if ((int)(short)(t1 + 0x1) >= (int)0x12C) {
        t1 = *(signed char *)0xC7F2990;
        if (((*(signed char *)0xC7E40C8) != 10) && (t0 = *(signed char *)0xC7EB398, t0 != 10)) {
            if ((int)t1 > (int)0x3) {
                t0 = 0x0;
                for (;;) {
                    if ((int)t0 >= (int)((*(signed char *)0xC7F2990) - 2)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t0 = (t0 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x2);
        } else {
            if ((int)t1 > (int)0x3) {
                t1 = 0x0;
                for (;;) {
                    if ((int)t1 >= (int)((*(signed char *)0xC7F2990) - 1)) {
                        break;
                    }
                    FUN_0c0cc7fc(0x0);
                    t1 = (t1 + 0x1);
                }
            } else {
                FUN_0c0cc7fc(0x1);
                FUN_0c0cc7fc(0x2);
            }
            t0 = ((*(signed char *)0xC7F266C) + 0x1);
        }
        *(unsigned char *)0xC7F266C = t0;
        *(unsigned char *)0xC7F2978 = 0x1;
        t2 = 0x314;
    }
    return t2;
}

int item_director_phase2(int a4, int a5)
{
    register int t0;

    t0 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x12C) {
        (((struct o0_uchar *)0xC7F266C)->v) = ((*(signed char *)0xC7F266C) + 0x1);
        (((struct o1_uchar *)0xC7F266C)->v) = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        *(unsigned short *)0xC7F2750 = 0x0;
    }
    return 0xEC;
}

int item_director_phase3(int a4, int a5)
{
    register int t4;

    if ((*(signed char *)0xC7E40C8) != 10) {
        *(volatile signed char *)0xC7EB398;
    }
    t4 = *(short *)0xC7F2750;
    *(unsigned short *)0xC7F2750 = (t4 + 0x1);
    if ((int)(short)(t4 + 0x1) >= (int)0x12C) {
        (((struct o0_uchar *)0xC7F266C)->v) = ((*(signed char *)0xC7F266C) + 0x1);
        (((struct o1_uchar *)0xC7F266C)->v) = 0x0;
        *(unsigned char *)0xC7F2978 = 0x1;
        *(unsigned short *)0xC7F2750 = 0x0;
    }
    return 0xEC;
}

int item_director_phase4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)0xC7F2977;
    t1 = *(signed char *)0xC7F266D;
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            if ((signed char)t0 != 0) {
                t3 = *(short *)0xC7F2750;
                *(unsigned short *)0xC7F2750 = (t3 + 0x1);
                t4 = 0xEC;
                if ((int)(short)(t3 + 0x1) >= (int)0x12C) {
                    *(unsigned char *)0xC7F2978 = 0x1;
                    *(unsigned char *)0xC7F266D = 0x0;
                    t4 = 0x0;
                }
                t3 = t4;
            } else {
                *(unsigned char *)0xC7F266D = 0x0;
                t3 = 0x0;
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = t1;
        if ((signed char)t0 != 0) {
            *(unsigned char *)0xC7F266D = ((*(signed char *)0xC7F266D) + 0x1);
            *(unsigned short *)0xC7F2750 = 0x0;
            t2 = 0xEC;
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c0ccb60(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register int t2;
    register int t9;

    u0 = (((struct o0_float *)0xC7F2AB4)->v);
    u1 = (((struct o8_float *)0xC7F2AB4)->v);
    t2 = *(signed char *)0xC7F3051;
    t9 = 0x0;
    if (!((*(float *)(((((t2 << 2) << 2) + 0xC33CF8C) + 0x0))) > u0)) {
        t9 = 0x1;
        if (u0 > ((((struct o4_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v))) {
            t9 = 0x2;
        }
    }
    if (!(((((struct o8_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v)) > u1)) {
        if (u1 > ((((struct oC_float *)((((t2 << 2) << 2) + 0xC33CF8C)))->v))) {
            return ((int (*)(int, int, int, int, float, float))(0xC0CCBC6))((t9 + 0x6), (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
        }
        return ((int (*)(int, int, int, int, float, float))(0xC0CCBC4))(t9, (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
    }
    return ((int (*)(int, int, int, int, float, float))(0xC0CCBC6))(t9, (((t2 << 2) << 2) + 0xC33CF8C), a6, a7, u0, u1);
}

int FUN_0c0ccbfe(void)
{
    register int t0;
    register int t7;
    register int t4;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x10)) = 0xC0CCC98;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t5, 0xC4CFA68, (t4 + 0x1));
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + 0x2)) = 0x1;
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t7 = 0x1;
    }
    return t7;
}
