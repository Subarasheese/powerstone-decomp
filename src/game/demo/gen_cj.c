/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c04a8ec(int, int);
int FUN_0c0ac5c4(int);
int FUN_0c0ac672(int);
int FUN_0c0ce404(int, int, int, int);
int FUN_0c0ce530(int, int, int, int);
int FUN_0c0ce634(int, int, int);
int FUN_0c0ce6b0(int, int, int);
int FUN_0c0ce72c(int, int, int);
int math_vec3_accumulate(int, int);
int cam_update_view_matrices(void);
int dbg_print_at(int, float, float);
extern int dbg_printf();
int dbg_set_cursor_cell(int, int);
int ending_main(int, int, int);
int game_draw_frame(void);
int memcpy(int, int, int);
int obj_set_mode_owner(int, int, int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_find_opponent_in_hit_list(int);
int pl_step_motion(int);
int sprintf(int, int, ...);
int testmode_adjust_option_value(int, int, int);
int testmode_check_exit_combo(void);
int testmode_draw_text_table(int, int);
int testmode_draw_title_and_footer(int);
int testmode_move_cursor(int, int, int, int);
int FUN_0c0cdd60(int a4, int a5, int a6, int a7);
int FUN_0c0cdb70(float f4);
int FUN_0c01565e(int a4, int a5, int a6);
int FUN_0c077cc8(int a4, float f4);
int FUN_0c0ad670(int a4);
int FUN_0c0cdb34(float f4);

int FUN_0c0cdd60(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t38;
    register int t6;
    register int t10;
    register int t23;
    register int t47;
    register int t49;
    register int t57;
    register int t67;
    register int t72;
    register int t80;
    register int t87;
    register int t92;
    register int t100;
    register int t101;
    register int t102;
    register int t111;
    register int t116;
    register int t127;
    register int t137;
    register int t142;
    register int t153;
    register int t169;
    register int t174;
    register int t185;
    register int t195;
    register int t200;
    register int t211;
    register int t219;
    register int t225;
    register int t239;
    register int t256;
    register int t270;
    register int t159;
    register int t217;
    int t240;
    int t241;
    int t271;
    int t272;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t1 = *(signed char *)0xC7F2EE8;
                if ((unsigned char)t1 != 0) {
                    if ((unsigned char)t1 != 1) {
                        if ((unsigned char)t1 != 2) {
                            t38 = (unsigned char)t1;
                            if ((unsigned char)t1 != 3) {
                            } else {
                                t6 = *(signed char *)0xC4948A0;
                                if (((int)(unsigned char)t6 >= 0) && ((int)(unsigned char)t6 <= (int)0x8)) {
                                    (((struct o2_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o3_uchar *)0xC7F31B4)->v) = ((*(signed char *)0xC4948A0) + 0x1);
                                    (((struct o1_uchar *)0xC7F31B4)->v) = 0x0;
                                    (((struct o26_uchar *)0xC7F2EE5)->v) = 0x0;
                                }
                                t10 = *(signed char *)0xC4948A0;
                                if (((int)(unsigned char)t10 >= (int)0x9) && ((int)(unsigned char)t10 <= (int)0x10)) {
                                    (((struct o2_uchar *)0xC7F31B4)->v) = ((*(signed char *)0xC4948A0) + 0xF9);
                                    (((struct o3_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o1_uchar *)0xC7F31B4)->v) = 0x0;
                                    (((struct o26_uchar *)0xC7F2EE5)->v) = 0x0;
                                }
                                if ((unsigned char)(*(signed char *)0xC4948A0) == 17) {
                                    (((struct o2_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o3_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o1_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o26_uchar *)0xC7F2EE5)->v) = 0x0;
                                }
                                if ((unsigned char)(*(signed char *)0xC4948A0) == 18) {
                                    (((struct o2_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o3_uchar *)0xC7F31B4)->v) = 0x1;
                                    (((struct o1_uchar *)0xC7F31B4)->v) = 0x0;
                                    (((struct o26_uchar *)0xC7F2EE5)->v) = 0x1;
                                }
                                (((struct o24_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A0);
                                t23 = *(signed char *)0xC4948A1;
                                (((struct o25_uchar *)0xC7F2EE5)->v) = t23;
                                (((struct o0_uchar *)0xC7F31B4)->v) = t23;
                                (((struct o28_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A2);
                                (((struct o27_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A3);
                                (((struct o29_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A4);
                                (((struct o23_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A5);
                                (((struct o2A_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A6);
                                (((struct o2B_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948A7);
                                (((struct o2C_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AA);
                                (((struct o2D_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AB);
                                (((struct o2E_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AC);
                                (((struct o2F_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AD);
                                (((struct o30_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AE);
                                (((struct o31_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948AF);
                                (((struct o32_uchar *)0xC7F2EE5)->v) = (*(signed char *)0xC4948B0);
                                (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                                (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
                                t38 = 0x0;
                            }
                            return t38;
                        }
                        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x1;
                        (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
                        *(unsigned int *)(((int)stk + 0)) = 0xC4948A0;
                        t47 = *(signed char *)0xC4948A5;
                        return memcpy((*(int *)(((int)stk + 0))), ((unsigned char)(((t47 << 2) + t47) << 2) + 0xC33F0EC), 0x14);
                    }
                    *(int *)((int)stk + 20) = 0xC7F2EE0;
                    *(int *)((int)stk + 16) = 0x0;
                    t49 = *(signed char *)0xC7F2EE9;
                    if ((unsigned char)t49 != 0) {
                        if ((unsigned char)t49 != 1) {
                            t57 = (unsigned char)t49;
                            if ((unsigned char)t49 != 2) {
                            } else {
                                if ((unsigned char)(*(signed char *)0xC4948AF) == 1) {
                                    (((struct o0_uchar *)0xC4948A0)->v) = 0x0;
                                    (((struct o1_uchar *)0xC4948A0)->v) = 0x0;
                                    (((struct o2_uchar *)0xC4948A0)->v) = 0x0;
                                }
                                (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
                                (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
                                (((struct o5_uchar *)0xC7F2EE5)->v) = 0x0;
                                t57 = 0x0;
                            }
                            return t57;
                        }
                        testmode_draw_text_table(0xC33ED2C, 0x1);
                        FUN_0c0ce404(0x4, 0x7, 0x8, 0xC33ECCC);
                        testmode_move_cursor(0x2, 0x7, 0x8, 0x6);
                        FUN_0c0ce72c(0x8, 0x8, 0x8);
                        if ((unsigned char)(*(signed char *)0xC7F2EEA) != 7) {
                            t67 = *(signed char *)0xC7F2EEA;
                            *(unsigned char *)(((int)stk + 8)) = t67;
                            testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 8))), 0xC33EF9A, (((unsigned char)t67 + 0xC4948A0) + 0xA));
                        }
                        t72 = *(signed char *)0xC7F2EEA;
                        t80 = 0xC33ED34;
                        if (((unsigned char)t72 != 5) && ((unsigned char)t72 == 7)) {
                            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                                (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                            }
                            t80 = 0xC33ED44;
                        }
                        return testmode_draw_text_table(t80, 0x2);
                    }
                    (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                    testmode_draw_text_table(0xC33ED2C, 0x1);
                    FUN_0c0ce404(0x4, 0x7, 0x8, 0xC33ECCC);
                    testmode_move_cursor(0x2, 0x7, 0x8, 0x6);
                    FUN_0c0ce72c(0x8, 0x8, 0x8);
                    if ((unsigned char)(*(signed char *)0xC7F2EEA) != 7) {
                        t87 = *(signed char *)0xC7F2EEA;
                        *(unsigned char *)(((int)stk + 8)) = t87;
                        testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 8))), 0xC33EF9A, (((unsigned char)t87 + 0xC4948A0) + 0xA));
                    }
                    t92 = *(signed char *)0xC7F2EEA;
                    t100 = 0xC33ED34;
                    if (((unsigned char)t92 != 5) && ((unsigned char)t92 == 7)) {
                        if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                            (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                        }
                        t100 = 0xC33ED44;
                    }
                    return testmode_draw_text_table(t100, 0x2);
                }
                *(int *)((int)stk + 20) = 0xC7F2EE0;
                *(int *)((int)stk + 16) = 0x0;
                *(int *)((int)stk + 12) = 0xC4948A0;
                t101 = *(signed char *)0xC7F2EE9;
                if ((unsigned char)t101 != 0) {
                    if ((unsigned char)t101 != 1) {
                        t102 = (unsigned char)t101;
                        if ((unsigned char)t101 == 2) {
                            (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
                            (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
                            (((struct o5_uchar *)0xC7F2EE5)->v) = 0x0;
                            t102 = 0x0;
                        }
                        return t102;
                    }
                    if ((unsigned char)(*(signed char *)0xC4948A5) == 1) {
                        testmode_draw_text_table(0xC33ED24, 0x1);
                        FUN_0c0ce404(0x4, 0x7, 0x9, 0xC33ECA8);
                        FUN_0c0ce530(0x2, 0x7, 0x9, 0x6);
                        FUN_0c0ce6b0(0x8, 0x8, 0x9);
                        if ((unsigned char)(*(signed char *)0xC7F2EEA) != 8) {
                            t111 = *(signed char *)0xC7F2EEA;
                            *(unsigned char *)(((int)stk + 0)) = t111;
                            testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 0))), 0xC33EF8A, ((unsigned char)t111 + 0xC4948A0));
                        }
                        t116 = *(signed char *)0xC7F2EEA;
                        if ((unsigned char)t116 != 0) {
                            if ((unsigned char)t116 != 8) {
                                (((struct o28_uchar *)0xC4948A0)->v) = (*(signed char *)0xC4948A2);
                                t159 = 0xC33ED34;
                            } else {
                                if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                                    (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                                }
                                t159 = 0xC33ED44;
                            }
                        } else {
                            t127 = 0x1;
                            if ((unsigned char)(*(signed char *)0xC4948A0) == 17) {
                            } else {
                                t127 = (*(signed char *)0xC4948C8);
                            }
                            (((struct o2_uchar *)0xC4948A0)->v) = t127;
                            t159 = 0xC33ED34;
                        }
                    } else {
                        testmode_draw_text_table(0xC33ED24, 0x1);
                        FUN_0c0ce404(0x4, 0x7, 0x8, 0xC33EC88);
                        FUN_0c0ce530(0x2, 0x7, 0x8, 0x6);
                        FUN_0c0ce634(0x8, 0x8, 0x8);
                        if ((unsigned char)(*(signed char *)0xC7F2EEA) != 7) {
                            t137 = *(signed char *)0xC7F2EEA;
                            *(unsigned char *)(((int)stk + 0)) = t137;
                            testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 0))), 0xC33EF7C, ((unsigned char)t137 + 0xC4948A0));
                        }
                        t142 = *(signed char *)0xC7F2EEA;
                        if ((unsigned char)t142 != 0) {
                            if ((unsigned char)t142 != 7) {
                                (((struct o28_uchar *)0xC4948A0)->v) = (*(signed char *)0xC4948A2);
                                t159 = 0xC33ED34;
                            } else {
                                if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                                    (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                                }
                                t159 = 0xC33ED44;
                            }
                        } else {
                            t153 = 0x1;
                            if ((unsigned char)(*(signed char *)0xC4948A0) == 17) {
                            } else {
                                t153 = (*(signed char *)0xC4948C8);
                            }
                            (((struct o2_uchar *)0xC4948A0)->v) = t153;
                            t159 = 0xC33ED34;
                        }
                    }
                    return testmode_draw_text_table(t159, 0x2);
                }
                (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                (((struct o28_uchar *)0xC4948A0)->v) = (*(signed char *)0xC4948A2);
                if ((unsigned char)(*(signed char *)0xC4948A5) == 1) {
                    testmode_draw_text_table(0xC33ED24, 0x1);
                    FUN_0c0ce404(0x4, 0x7, 0x9, 0xC33ECA8);
                    FUN_0c0ce530(0x2, 0x7, 0x9, 0x6);
                    FUN_0c0ce6b0(0x8, 0x8, 0x9);
                    if ((unsigned char)(*(signed char *)0xC7F2EEA) != 8) {
                        t169 = *(signed char *)0xC7F2EEA;
                        *(unsigned char *)(((int)stk + 0)) = t169;
                        testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 0))), 0xC33EF8A, ((unsigned char)t169 + 0xC4948A0));
                    }
                    t174 = *(signed char *)0xC7F2EEA;
                    if ((unsigned char)t174 != 0) {
                        if ((unsigned char)t174 != 8) {
                            (((struct o28_uchar *)0xC4948A0)->v) = (*(signed char *)0xC4948A2);
                            t217 = 0xC33ED34;
                        } else {
                            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                                (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                            }
                            t217 = 0xC33ED44;
                        }
                    } else {
                        t185 = 0x1;
                        if ((unsigned char)(*(signed char *)0xC4948A0) == 17) {
                        } else {
                            t185 = (*(signed char *)0xC4948C8);
                        }
                        (((struct o2_uchar *)0xC4948A0)->v) = t185;
                        t217 = 0xC33ED34;
                    }
                } else {
                    testmode_draw_text_table(0xC33ED24, 0x1);
                    FUN_0c0ce404(0x4, 0x7, 0x8, 0xC33EC88);
                    FUN_0c0ce530(0x2, 0x7, 0x8, 0x6);
                    FUN_0c0ce634(0x8, 0x8, 0x8);
                    if ((unsigned char)(*(signed char *)0xC7F2EEA) != 7) {
                        t195 = *(signed char *)0xC7F2EEA;
                        *(unsigned char *)(((int)stk + 0)) = t195;
                        testmode_adjust_option_value((unsigned char)(*(signed char *)(((int)stk + 0))), 0xC33EF7C, ((unsigned char)t195 + 0xC4948A0));
                    }
                    t200 = *(signed char *)0xC7F2EEA;
                    if ((unsigned char)t200 != 0) {
                        if ((unsigned char)t200 != 7) {
                            (((struct o28_uchar *)0xC4948A0)->v) = (*(signed char *)0xC4948A2);
                            t217 = 0xC33ED34;
                        } else {
                            if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 4) != 0) {
                                (((struct o4_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
                            }
                            t217 = 0xC33ED44;
                        }
                    } else {
                        t211 = 0x1;
                        if ((unsigned char)(*(signed char *)0xC4948A0) == 17) {
                        } else {
                            t211 = (*(signed char *)0xC4948C8);
                        }
                        (((struct o2_uchar *)0xC4948A0)->v) = t211;
                        t217 = 0xC33ED34;
                    }
                }
                return testmode_draw_text_table(t217, 0x2);
            }
            t219 = (unsigned char)t0;
            if ((unsigned char)t0 == 3) {
                (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
                (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
                (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
                (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
                t219 = 0x0;
            }
            return t219;
        }
        testmode_draw_text_table(0xC33ED14, 0x1);
        testmode_draw_text_table(0xC33ECF4, 0x1);
        FUN_0c0ce404(0xA, 0x7, 0x4, 0xC33EC78);
        testmode_move_cursor(0x8, 0x7, 0x4, 0x4);
        t225 = *(signed char *)0xC7F2EE8;
        if (((unsigned char)t225 != 0) && ((unsigned char)t225 != 1)) {
            if ((unsigned char)t225 != 2) {
                if ((unsigned char)t225 != 3) {
                    return (unsigned char)t225;
                }
                if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 0x4) != 0) {
                    (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                }
                return testmode_draw_text_table(0xC33ECFC, 0x1);
            }
            t239 = (((struct o4_short *)0xC361BF8)->v);
            if (((((unsigned short)t239 & 0x4) != 0) && (t240 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t240 & 2) != 0)) || (((0x2 & (unsigned short)t239) != 0) && (t241 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t241 & 0x4) != 0))) {
                (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
            }
            testmode_draw_text_table(0xC33ED1C, 0x1);
            return dbg_print_at((*(int *)0xC33EC80), 160.0f, 88.0f);
        }
    } else {
        (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        testmode_draw_text_table(0xC33ED14, 0x1);
        testmode_draw_text_table(0xC33ECF4, 0x1);
        FUN_0c0ce404(0xA, 0x7, 0x4, 0xC33EC78);
        testmode_move_cursor(0x8, 0x7, 0x4, 0x4);
        t256 = *(signed char *)0xC7F2EE8;
        if (((unsigned char)t256 != 0) && ((unsigned char)t256 != 1)) {
            if ((unsigned char)t256 != 2) {
                if ((unsigned char)t256 != 3) {
                    return (unsigned char)t256;
                }
                if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 0x4) != 0) {
                    (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                }
                return testmode_draw_text_table(0xC33ECFC, 0x1);
            }
            t270 = (((struct o4_short *)0xC361BF8)->v);
            if (((((unsigned short)t270 & 0x4) != 0) && (t271 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t271 & 2) != 0)) || (((0x2 & (unsigned short)t270) != 0) && (t272 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t272 & 0x4) != 0))) {
                (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
            }
            testmode_draw_text_table(0xC33ED1C, 0x1);
            return dbg_print_at((*(int *)0xC33EC80), 160.0f, 88.0f);
        }
    }
    if (((unsigned short)((((struct o4_short *)0xC361BF8)->v)) & 0x4) != 0) {
        (((struct o2_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
    }
    return testmode_draw_text_table(0xC33ECFC, 0x1);
}

int FUN_0c0cdb70(float f4)
{
    register int t0;
    register int t1;

    testmode_draw_title_and_footer((*(int *)0xC33EC64));
    testmode_draw_text_table(0xC33EE34, 0x4);
    sprintf(0xC7F36B8, 0xC153480, (int)*(int *)0xC7F2F28);
    dbg_print_at(0xC7F36B8, 400.0f, 64.0f);
    sprintf(0xC7F36B8, 0xC153480, (int)*(int *)0xC7F2F2C);
    dbg_print_at(0xC7F36B8, 400.0f, 80.0f);
    sprintf(0xC7F36B8, 0xC153480, (int)*(int *)0xC7F2F30);
    dbg_print_at(0xC7F36B8, 400.0f, 96.0f);
    t0 = 0x0;
    for (;;) {
        sprintf(0xC7F36B8, 0xC153488, t0, *(int *)((t0 << 2) + 0xC7F2F34));
        dbg_print_at(0xC7F36B8, 112.0f, (float)(((t0 + 0xF) << 2) << 1));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xB) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        sprintf(0xC7F36B8, 0xC153498, t0, *(int *)((t0 << 2) + 0xC7F2FB8));
        dbg_print_at(0xC7F36B8, 112.0f, (float)(((t0 + 0x1E) << 2) << 1));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x9) {
            break;
        }
    }
    t0 = *(short *)0xC361BFC;
    if (((0x8 & (unsigned short)t0) != 0) && (((0x2 & (unsigned short)t0) != 0) && ((0x1 & (unsigned short)t0) != 0))) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0xC7F2F34 + t0) + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xB) {
                break;
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0xC7F2F60 + t0) + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xB) {
                break;
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0xC7F2F8C + t0) + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xB) {
                break;
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0xC7F2FB8 + t0) + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0x9) {
                break;
            }
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0xC7F2FDC + t0) + 0x0)) = 0x0;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)0xB) {
                break;
            }
        }
    }
    return testmode_check_exit_combo();
}

int FUN_0c01565e(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t21;
    register int t23;
    register int t24;
    register int t41;
    register int t42;
    register int t43;
    register int t45;
    register int t55;
    register int t57;
    register int t58;
    register int t71;

    t0 = *(signed char *)0xC7F2EE9;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t71 = 0xC7F2EE9;
            } else {
                ending_main(0xC7F2EE9, a5, a6);
                game_draw_frame();
            }
        } else {
            dbg_set_cursor_cell(0x14, 0xA);
            *(int *)((int)stk + 4) = 0xC116990;
            t7 = ((int (*)(int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC116990);
            t8 = *(short *)0xC361BFC;
            if (((unsigned short)t8 & 64) != 0) {
                t9 = *(signed char *)0xC7F3081;
                (((struct oE_uchar *)0xC7F3073)->v) = (t9 - 1);
                if ((int)(signed char)(t9 - 1) < 0) {
                    (((struct oE_uchar *)0xC7F3073)->v) = 0xA;
                }
            } else {
                if (((unsigned short)t8 & 128) != 0) {
                    t11 = *(signed char *)0xC7F3081;
                    (((struct oE_uchar *)0xC7F3073)->v) = (t11 + 0x1);
                    if ((int)(signed char)(t11 + 0x1) > (int)0xA) {
                        (((struct oE_uchar *)0xC7F3073)->v) = 0x0;
                    }
                }
            }
            dbg_set_cursor_cell(0x14, 0xC);
            if ((*(signed char *)0xC7F3081) == 10) {
                *(int *)((int)stk + 4) = 0xC1169A0;
                t21 = ((int (*)(int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC1169A0);
            } else {
                t23 = (*(signed char *)0xC7F3081);
                *(int *)((int)stk + 4) = t23;
                *(int *)((int)stk + 0) = 0xC1169A8;
                t24 = ((int (*)(int, int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC1169A8, t23);
            }
            if (((unsigned short)(*(short *)0xC361BFC) & 4) != 0) {
                *(unsigned char *)0xC7F2EE9 = ((*(signed char *)0xC7F2EE9) + 0x1);
                (((struct o0_uchar *)0xC7F3073)->v) = 0x0;
            }
        }
    } else {
        *(unsigned char *)0xC7F2EE9 = ((*(signed char *)0xC7F2EE9) + 0x1);
        (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
        (((struct oE_uchar *)0xC7F3073)->v) = 0x0;
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        dbg_set_cursor_cell(0x14, 0xA);
        *(int *)((int)stk + 4) = 0xC116990;
        t41 = ((int (*)(int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC116990);
        t42 = *(short *)0xC361BFC;
        if (((unsigned short)t42 & 64) != 0) {
            t43 = *(signed char *)0xC7F3081;
            (((struct oE_uchar *)0xC7F3073)->v) = (t43 - 1);
            if ((int)(signed char)(t43 - 1) < 0) {
                (((struct oE_uchar *)0xC7F3073)->v) = 0xA;
            }
        } else {
            if (((unsigned short)t42 & 128) != 0) {
                t45 = *(signed char *)0xC7F3081;
                (((struct oE_uchar *)0xC7F3073)->v) = (t45 + 0x1);
                if ((int)(signed char)(t45 + 0x1) > (int)0xA) {
                    (((struct oE_uchar *)0xC7F3073)->v) = 0x0;
                }
            }
        }
        dbg_set_cursor_cell(0x14, 0xC);
        if ((*(signed char *)0xC7F3081) == 10) {
            *(int *)((int)stk + 4) = 0xC1169A0;
            t55 = ((int (*)(int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC1169A0);
        } else {
            t57 = (*(signed char *)0xC7F3081);
            *(int *)((int)stk + 4) = t57;
            *(int *)((int)stk + 0) = 0xC1169A8;
            t58 = ((int (*)(int, int, int, int, int, int))(dbg_printf))(0x0, 0x0, 0x0, 0x0, 0xC1169A8, t57);
        }
        if (((unsigned short)(*(short *)0xC361BFC) & 4) != 0) {
            *(unsigned char *)0xC7F2EE9 = ((*(signed char *)0xC7F2EE9) + 0x1);
            (((struct o0_uchar *)0xC7F3073)->v) = 0x0;
        }
    }
    cam_update_view_matrices();
    testmode_check_exit_combo();
    return ((int (*)(void))(0xC015884))();
}

int FUN_0c077cc8(int a4, float f4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t1 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t1 + 0x1);
    if (((int)(short)(t1 + 0x1) > (int)0x13) && (t0 = (((struct oEE_short *)(a4))->v), (int)t0 < (int)0x19)) {
        u0 = *(float *)0xC077E00;
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u1 - u0);
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u1 - u0);
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v);
        (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x420)))->v) = (u1 - u0);
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o6C_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u1 - u0);
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o70_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u1 - u0);
        t0 = *(signed char *)((a4 + 0x71F1));
        u1 = (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v);
        (((struct o74_float *)((((short)((short)t0 * (short)0xDC0) + (0x300 + a4)) + 0x6E0)))->v) = (u1 - u0);
    }
    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return pl_apply_motion_translation(a4);
}

int FUN_0c0ad670(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x108))) != 0) {
        if ((unsigned char)(*(signed char *)((((((struct oF4_int *)(a4))->v)) + 0x0))) == 10) {
            t2 = pl_find_opponent_in_hit_list(a4);
            if ((t2 != 0) && (t0 = *(signed char *)((t2 + 0x71A4)), t1 = *(signed char *)((t2 + 0x71A5)), ((t0 << 8) + (unsigned char)t1) == 0x2AE)) {
                t0 = 0x3;
                t1 = (*(signed char *)((a4 + 0x3)));
            } else {
                t0 = 0x2;
                t1 = (*(signed char *)((a4 + 0x3)));
            }
            t2 = t0;
            t0 = t1;
        } else {
            t2 = 0x2;
            t0 = (*(signed char *)((a4 + 0x3)));
        }
        return (obj_set_mode_owner(a4, t2, t0));
    }
    if ((*(signed char *)((a4 + 0x2D8))) != 0) {
        obj_set_mode_owner(a4, 0x2, (*(signed char *)((a4 + 0x3))));
    }
    if ((*(signed char *)((a4 + 0x2A8))) != 0) {
        t0 = FUN_0c0ac5c4(a4);
        if (t0 == 0) {
            t0 = FUN_0c0ac672(a4);
            if ((signed char)t0 == 0) {
                return (obj_set_mode_owner(a4, 0x2, (*(signed char *)((a4 + 0x3)))));
            }
        }
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x71C);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if (((int)((int)(short)(t0 + 0x1) % (int)0x2)) != 0) {
        FUN_0c04a8ec(a4, ((((struct o9C_int *)(((((struct o2E0_int *)(a4))->v))))->v)));
    }
    math_vec3_accumulate((a4 + 0x20), (a4 + 0x38));
    return math_vec3_accumulate((a4 + 0x38), (a4 + 0x44));
}

int FUN_0c0cdb34(float f4)
{
    testmode_draw_title_and_footer((*(int *)0xC33EC60));
    return testmode_check_exit_combo();
}
