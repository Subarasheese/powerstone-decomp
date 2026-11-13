/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c0ad744(int);
int FUN_0c0cd1ea(int);
int FUN_0c0cd58e(void);
int FUN_0c0ce404(int, int, int, int);
int dbg_print_at(int, float, float);
int testmode_check_exit_combo(void);
int testmode_color_test_screen(void);
int testmode_draw_text_table(int, int);
int testmode_draw_title_and_footer(int);
int testmode_memory_check_screen(float);
int testmode_move_cursor(int, int, int, int);
int FUN_0c0cd2f4(float f4);
int FUN_0c0cd0de(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0cd576(float f4);
int FUN_0c0ad766(int a4);

int FUN_0c0cd2f4(float f4)
{
    int stk[10];
    register float u3;
    register float u4;
    register int t5;
    int t13;
    register int t14;
    register int t18;
    register int t46;
    register int t49;
    register int t74;
    register int t77;
    register int t24;
    register float u27;
    register float u28;
    int t42;
    register int t43;
    register int t44;
    int t45;
    register int t55;
    register float u58;
    register float u59;
    register int t83;
    register float u86;
    register float u87;

    testmode_draw_title_and_footer((*(int *)0xC33EC50));
    testmode_draw_text_table(0xC33ED5C, 0x8);
    *(unsigned int *)(((int)stk + 32)) = 0xC33EFA8;
    *(unsigned int *)(((int)stk + 36)) = 0xC33EFE8;
    u3 = (((struct o0_float *)0xC0CD5F4)->v);
    u4 = (((struct o4_float *)0xC0CD5F4)->v);
    *(unsigned int *)(((int)stk + 28)) = 0xC33F028;
    t5 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t5 << 2) + t5) << 2) + 0xC361BF0);
        for (;;) {
            t13 = *(int *)((((*(int *)(((int)stk + 4))) + ((t5 << 2) << 1)) + 0x0));
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x8))) & t13) == t13) {
                *(unsigned int *)(((int)stk + 20)) = 0x1;
                t14 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 16)) = (t14 + ((t5 << 2) << 1));
                t24 = 0xC153D2C;
                u27 = ((float)(*(signed char *)(((*(int *)(((int)stk + 16))) + 0x4))) * u4);
                u28 = ((float)(*(signed char *)(((t14 + ((t5 << 2) << 1)) + 0x5))) * u3);
            } else {
                t18 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 16)) = (t18 + ((t5 << 2) << 1));
                t24 = 0xC153D28;
                u27 = ((float)(*(signed char *)(((t18 + ((t5 << 2) << 1)) + 0x4))) * u4);
                u28 = ((float)(*(signed char *)(((t18 + ((t5 << 2) << 1)) + 0x5))) * u3);
            }
            dbg_print_at(t24, u27, u28);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x10);
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0x4;
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t5 << 2) + t5) << 2) + 0xC361BF0);
        *(unsigned int *)(((int)stk + 20)) = ((((*(int *)(((int)stk + 20))) == 0)) ? 1 : 0);
        for (;;) {
            if (((*(int *)(((int)stk + 20))) != 0) && (t42 = *(int *)(((int)stk + 12)), t43 = *(int *)(((int)stk + 24)), t44 = *(short *)((t43 + 0x8)), t45 = *(int *)(((t42 + ((t5 << 2) << 1)) + 0x0)), ((unsigned short)t44 & t45) != 0)) {
                t46 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 16)) = (t46 + ((t5 << 2) << 1));
                t55 = 0xC153D2C;
                u58 = ((float)(*(signed char *)(((t46 + ((t5 << 2) << 1)) + 0x4))) * u4);
                u59 = ((float)(*(signed char *)(((t46 + ((t5 << 2) << 1)) + 0x5))) * u3);
            } else {
                t49 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 16)) = (t49 + ((t5 << 2) << 1));
                t55 = 0xC153D28;
                u58 = ((float)(*(signed char *)(((t49 + ((t5 << 2) << 1)) + 0x4))) * u4);
                u59 = ((float)(*(signed char *)(((t49 + ((t5 << 2) << 1)) + 0x5))) * u3);
            }
            dbg_print_at(t55, u58, u59);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0x8;
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 16)) = ((signed char)(((t5 << 2) + t5) << 2) + 0xC361BF0);
        for (;;) {
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 16))) + 0x8))) & (*(int *)((((*(int *)(((int)stk + 8))) + ((t5 << 2) << 1)) + 0x0)))) != 0) {
                t74 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 20)) = (t74 + ((t5 << 2) << 1));
                t83 = 0xC153D2C;
                u86 = ((float)(*(signed char *)(((t74 + ((t5 << 2) << 1)) + 0x4))) * u4);
                u87 = ((float)(*(signed char *)(((t74 + ((t5 << 2) << 1)) + 0x5))) * u3);
            } else {
                t77 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 20)) = (t77 + ((t5 << 2) << 1));
                t83 = 0xC153D28;
                u86 = ((float)(*(signed char *)(((t77 + ((t5 << 2) << 1)) + 0x4))) * u4);
                u87 = ((float)(*(signed char *)(((t77 + ((t5 << 2) << 1)) + 0x5))) * u3);
            }
            dbg_print_at(t83, u86, u87);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x13) {
                break;
            }
        }
        t5 = (t5 + 0x1);
        if ((int)t5 < (int)0x2) continue;
        break;
    }
    return testmode_check_exit_combo();
}

int FUN_0c0cd0de(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            t1 = *(signed char *)0xC7F2EE6;
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        if ((unsigned char)t1 != 3) {
                            if ((unsigned char)t1 != 4) {
                                if ((unsigned char)t1 != 5) {
                                    if ((unsigned char)t1 != 6) {
                                        if ((unsigned char)t1 != 7) {
                                            if ((unsigned char)t1 != 8) {
                                                t2 = (unsigned char)t1;
                                                if ((unsigned char)t1 != 9) {
                                                } else {
                                                    (((struct o1D_uchar *)0xC7F2EE5)->v) = 0x0;
                                                    (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
                                                    t2 = 0x0;
                                                }
                                                return t2;
                                            }
                                            return FUN_0c0cd1ea(0xC7F2EE5);
                                        }
                                        return testmode_memory_check_screen(f4);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC0CDD60))(0xC7F2EE5, a5, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC0CDB70))(0xC7F2EE5, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0CDB34))(0xC7F2EE5, a5, a6, a7);
                        }
                        return testmode_color_test_screen();
                    }
                    return FUN_0c0cd58e();
                }
                return FUN_0c0cd576(f4);
            }
            return FUN_0c0cd2f4(f4);
        }
        testmode_draw_text_table(0xC33ECEC, 0x1);
        FUN_0c0ce404(0xA, 0x7, 0xA, 0xC33EC50);
        testmode_draw_text_table(0xC33ECF4, 0x2);
        testmode_move_cursor(0x8, 0x7, 0xA, 0x2);
        t1 = *(short *)0xC361BFC;
        t2 = (unsigned short)t1;
        if (((unsigned short)t1 & 4) != 0) {
            (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
            (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
            t2 = 0x0;
        }
        return t2;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    return (unsigned char)t0;
}

int FUN_0c0cd576(float f4)
{
    testmode_draw_title_and_footer((*(int *)0xC33EC54));
    testmode_draw_text_table(0xC33ED9C, 0x3);
    return testmode_check_exit_combo();
}

int FUN_0c0ad766(int a4)
{
    return FUN_0c0ad744(a4);
}
