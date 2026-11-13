/* NAOMI-style test mode (colour test (0c0cdac0-0c0cf408) */

/* named globals (symbols.txt) */
extern char g_game_config[];
extern char g_tbl_testmode_value_strings[];
extern char g_testmode_game_config_view[];
extern char g_testmode_system_config[];
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int dbg_print_at(int, float, float);
int FUN_0c0e3c54(int);
int sprintf(int, int, int, int, int);
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
int testmode_game_config_screen(int, int, int, int);

int FUN_0c0cdac0(void);
int testmode_check_exit_combo(void);
int testmode_draw_title_and_footer(int a4);
int testmode_draw_text_table(int a4, int a5);
int FUN_0c0ce910(int a4, int a5);
int testmode_check_start_shot1(void);
int testmode_input_test_screen(void);
int testmode_game_data_screen(void);
int FUN_0c0cf240(int a4, int a5, int a6);

int FUN_0c0cdac0(void)
{
    int stk[14];

    *(unsigned int *)(((int)stk + 0)) = (*(short *)0xC17FE66);
    *(float *)(((int)stk + 4)) = ((((struct o0_float *)0xC0CDB50)->v));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)0xC0CDB50)->v));
    *(float *)(((int)stk + 12)) = ((((struct o8_float *)0xC0CDB50)->v));
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 52)) = 0x5;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 16)) = ((((struct oC_float *)0xC0CDB50)->v));
    *(float *)(((int)stk + 20)) = ((((struct o10_float *)0xC0CDB50)->v));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    return (FUN_0c0e3c54(((int)stk + 0)));
}

int testmode_color_test_screen(void)
{
    FUN_0c0cdac0();
    testmode_draw_text_table(0xC33EE0C, 0x5);
    return testmode_check_exit_combo();
}

int testmode_memory_check_screen(float f4)
{

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    w0_0 = f4;
    v0_0 = R13;
    v0_2 = R12;
    v0_3 = R11;
    v0_4 = R10;
    v0_5 = R9;
    v0_6 = R8;
    testmode_draw_title_and_footer((*(int *)0xC33EC6C));
    v0_1 = *(signed char *)0xC7F2EE9;
    v0_3 = ((unsigned char)v0_1);
    R12 = (0xC4948CC);
    R13 = (0xC7F2EE0);
    v0_0 = (0x0);
    v0_2 = (0xC7F2EE9);
    if (((unsigned char)v0_1 == 0)) goto L_C0CE290;
    if ((v0_3 == 1)) goto L_C0CE2AC;
    if ((v0_3 == 2)) goto L_C0CE2B4;
    if ((v0_3 == 3)) goto L_C0CE2BC;
    if ((v0_3 == 4)) goto L_C0CE366;
    L_C0CE37C:;
    w0_0 = (((struct o0_float *)0xC0CE488)->v);
    w0_1 = (((struct o4_float *)0xC0CE488)->v);
    R11 = (v0_0);
    R8 = (0xC0CCEFC);
    R9 = (0xC7F36B8);
    F14 = (w0_0);
    F15 = (w0_1);
    L_C0CE3E6:;
    v0_0 = *(signed char *)((R13 + 0xA));
    v0_3 = ((unsigned char)v0_0);
    if (((int)R11 < (int)(unsigned char)v0_0)) goto L_C0CE38C;
    return v0_3;
    L_C0CE38C:;
    v0_0 = (*(int *)((R12 + (R11 << 2)))) != 0;
    if (v0_0) goto L_C0CE39E;
    L_C0CE3A2:;
    sprintf(R9, R5, R6, R7, 0xC1534A8);
    R10 = ((R11 - 10));
    R5 = (0x7);
    w0_0 = (F15);
    w0_0 = (F14);
    if (((int)(R11 - 10) >= 0)) goto L_C0CE3C2;
    v0_0 = (R11);
    L_C0CE3C4:;
    w0_0 = (((float)(v0_0 + 0xA) * F14));
    FPUL_ = ((v0_0 + 0xA));
    if (((int)R10 >= 0)) goto L_C0CE3D6;
    v0_0 = (0x9);
    L_C0CE3D8:;
    dbg_print_at(R9, ((float)v0_0 * F15), w0_0);
    R11 = ((R11 + 0x1));
    goto L_C0CE3E6;
    L_C0CE3D6:;
    v0_0 = (0x11);
    goto L_C0CE3D8;
    L_C0CE3C2:;
    v0_0 = (R10);
    goto L_C0CE3C4;
    L_C0CE39E:;
    goto L_C0CE3A2;
    L_C0CE366:;
    v0_1 = (signed char)(testmode_check_exit_combo()) == 0;
    if (v0_1) goto L_C0CE37C;
    *(unsigned char *)((R13 + 0x9)) = v0_0;
    L_C0CE376:;
    *(unsigned char *)((R13 + 0xA)) = v0_0;
    goto L_C0CE37C;
    L_C0CE2BC:;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_1 = *(int *)(((0xC17AEF0 + ((((unsigned char)v0_1 << 1) + (unsigned char)v0_1) << 2)) + 0x4));
    R10 = (0xD000000);
    R11 = (0x10000);
    R5 = (v0_1);
    R8 = (0xC17AEF0);
    R9 = (0x40);
    L_C0CE306:;
    if (((int)R5 > 0)) goto L_C0CE2D8;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_1 = (*(int *)((R12 + ((unsigned char)v0_1 << 2)))) != (*(int *)(((((((unsigned char)v0_1 << 1) + (unsigned char)v0_1) << 2) + R8) + 0x8)));
    if (v0_1) goto L_C0CE332;
    *(unsigned int *)((R12 + ((unsigned char)(*(signed char *)((R13 + 0xA))) << 2))) = v0_0;
    L_C0CE33C:;
    *(unsigned char *)((R13 + 0xA)) = ((*(signed char *)((R13 + 0xA))) + 0x1);
    v0_2 = *(signed char *)((R13 + 0xA));
    v0_1 = (*(int *)((R8 + ((((unsigned char)v0_2 << 1) + (unsigned char)v0_2) << 2)))) == -1;
    v0_2 = (v0_2);
    if (v0_1) goto L_C0CE35E;
    if (((int)(unsigned char)v0_2 < (int)0x14)) goto L_C0CE37C;
    L_C0CE35E:;
    *(unsigned char *)((R13 + 0x9)) = ((*(signed char *)((R13 + 0x9))) + 0x1);
    goto L_C0CE37C;
    L_C0CE332:;
    *(unsigned int *)((R12 + ((unsigned char)(*(signed char *)((R13 + 0xA))) << 2))) = 0xFFFFFFFF;
    goto L_C0CE33C;
    L_C0CE2D8:;
    R7 = (v0_0);
    L_C0CE302:;
    if (((int)R7 < (int)R9)) goto L_C0CE2DC;
    goto L_C0CE306;
    L_C0CE2DC:;
    v0_2 = (R10);
    R6 = (v0_0);
    L_C0CE2E0:;
    v0_1 = *(signed char *)((R13 + 0xA));
    v0_3 = (int)(R5 - 4) <= 0;
    *(unsigned int *)((R12 + ((unsigned char)v0_1 << 2))) = ((*(int *)((R12 + ((unsigned char)v0_1 << 2)))) + (*(int *)((v0_2 + 0x0))));
    R5 = ((R5 - 4));
    if (v0_3) goto L_C0CE306;
    v0_1 = (int)(R6 + 0x4) < (int)R11;
    v0_2 = ((v0_2 + 0x4));
    R6 = ((R6 + 0x4));
    if (v0_1) goto L_C0CE2E0;
    if (((int)R5 <= 0)) goto L_C0CE306;
    R7 = ((R7 + 0x1));
    goto L_C0CE302;
    L_C0CE2B4:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    goto L_C0CE37C;
    L_C0CE2AC:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    goto L_C0CE37C;
    L_C0CE290:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    v0_2 = (R12);
    R5 = (v0_0);
    R6 = (0x14);
    L_C0CE2A4:;
    if (((int)R5 < (int)R6)) goto L_C0CE29E;
    goto L_C0CE376;
    L_C0CE29E:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    v0_2 = ((v0_2 + 0x4));
    R5 = ((R5 + 0x1));
    goto L_C0CE2A4;
}

int FUN_0c0ce404(int a4, int a5, int a6, int a7)
{
    register int t5;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t5 = 0xC0CE488;
    if ((int)a6 > 0) {
        t0 = 0x0;
        t1 = (0x0 + a5);
        t2 = (0x0 + a7);
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = dbg_print_at(t3, ((float)a4 * 16.0f), ((float)t1 * 8.0f));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x2);
            if ((int)t0 >= (int)a6) {
                break;
            }
        }
        t5 = t4;
    }
    return t5;
}

int testmode_move_cursor(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (((unsigned short)(*(short *)0xC361BFC) & 16) != 0) {
        t2 = *(signed char *)(((0xC7F2EE4 + a7) + 0x0));
        if (t2 == 0) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = (0xFF + a6);
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = (t2 - 1);
        }
    }
    if (((unsigned short)(*(short *)0xC361BFC) & 32) != 0) {
        if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == (a6 - 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) + 0x1);
        }
    }
    return dbg_print_at(0xC153474, ((float)a4 * ((((struct o4_float *)0xC0CE588)->v))), ((float)(((unsigned char)(*(signed char *)(((a7 + 0xC7F2EE4) + 0x0))) << 1) + a5) * ((((struct o0_float *)0xC0CE588)->v))));
}

int FUN_0c0ce530(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    register float u0;
    register float u1;

    if (((unsigned short)(*(short *)0xC361BFC) & 16) != 0) {
        if (((unsigned char)(*(signed char *)g_testmode_system_config) == 17) && (t0 = *(signed char *)((a7 + 0xC7F2EE4)), (unsigned char)t0 == 3)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x2;
        }
        t0 = (0xFF + a6);
        if ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == 0) {
        } else {
            t0 = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) - 1);
        }
        *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = t0;
    }
    t0 = a6;
    if (((unsigned short)(*(short *)0xC361BFC) & 32) != 0) {
        if (((unsigned char)(*(signed char *)g_testmode_system_config) == 17) && (t1 = *(signed char *)((a7 + 0xC7F2EE4)), (unsigned char)t1 == 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x2;
        }
        if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) == (a6 - 1)) {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a7) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a7) + 0x0))) + 0x1);
        }
        t0 = (a6 - 1);
    }
    *(volatile signed char *)(((a7 + 0xC7F2EE4) + 0x0));
    u0 = (((struct o0_float *)0xC0CE7AC)->v);
    u1 = (((struct o4_float *)0xC0CE7AC)->v);
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0CE612))(0x2, 0xC361BF0, t0, ((int)g_testmode_system_config), f4, f5, u1, u0);
}

int FUN_0c0ce634(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register int t10;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t9;

    u0 = (((struct o4_float *)0xC0CE7AC)->v);
    u1 = (((struct o0_float *)0xC0CE7AC)->v);
    t10 = 0xC0CE7AC;
    if ((int)(a6 - 1) > 0) {
        t2 = 0x0;
        t3 = 0xC33EF7C;
        t4 = (0x0 + a5);
        t5 = ((int)g_testmode_system_config);
        for (;;) {
            t6 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            t9 = dbg_print_at((*(int *)((((int)g_tbl_testmode_value_strings) + (((*(signed char *)((t3 + 0x0))) + (unsigned char)t6) << 2)))), ((float)a4 * u0), ((float)t4 * u1));
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x2);
            t4 = (t4 + 0x2);
            if ((int)t2 >= (int)(a6 - 1)) {
                break;
            }
        }
        t10 = t9;
    }
    return t10;
}

int FUN_0c0ce6b0(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register int t10;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t9;

    u0 = (((struct o4_float *)0xC0CE7AC)->v);
    u1 = (((struct o0_float *)0xC0CE7AC)->v);
    t10 = 0xC0CE7AC;
    if ((int)(a6 - 1) > 0) {
        t2 = 0x0;
        t3 = 0xC33EF8A;
        t4 = (0x0 + a5);
        t5 = ((int)g_testmode_system_config);
        for (;;) {
            t6 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            t9 = dbg_print_at((*(int *)((((int)g_tbl_testmode_value_strings) + (((*(signed char *)((t3 + 0x0))) + (unsigned char)t6) << 2)))), ((float)a4 * u0), ((float)t4 * u1));
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x2);
            t4 = (t4 + 0x2);
            if ((int)t2 >= (int)(a6 - 1)) {
                break;
            }
        }
        t10 = t9;
    }
    return t10;
}

int FUN_0c0ce72c(int a4, int a5, int a6)
{
    register int t8;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t7;

    t8 = 0xC0CE7AC;
    if ((int)(a6 - 1) > 0) {
        t0 = 0x0;
        t1 = 0xC33EF9A;
        t2 = (0x0 + a5);
        t3 = ((int)g_testmode_game_config_view);
        for (;;) {
            t4 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t7 = dbg_print_at((*(int *)((((int)g_tbl_testmode_value_strings) + (((*(signed char *)((t1 + 0x0))) + (unsigned char)t4) << 2)))), ((float)a4 * 16.0f), ((float)t2 * 8.0f));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x2);
            t2 = (t2 + 0x2);
            if ((int)t0 >= (int)(a6 - 1)) {
                break;
            }
        }
        t8 = t7;
    }
    return t8;
}

int testmode_adjust_option_value(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC361BFC;
    if ((((unsigned short)t0 & 0xF0) == 64) || (((unsigned short)t0 & 4) != 0)) {
        t0 = *(signed char *)((a6 + 0x0));
        if (t0 == 0) {
            *(unsigned char *)((a6 + 0x0)) = ((*(signed char *)((((a4 << 1) + a5) + 0x1))) + 0xFF);
        } else {
            *(unsigned char *)((a6 + 0x0)) = (0xFF + t0);
        }
    }
    t0 = *(short *)0xC361BFC;
    t1 = t0;
    if (((0xF0 & (unsigned short)t0) == 0x80) || ((0x2 & (unsigned short)t0) != 0)) {
        t0 = *(signed char *)((((a4 << 1) + a5) + 0x1));
        if ((unsigned char)(*(signed char *)((a6 + 0x0))) == (t0 - 1)) {
            *(unsigned char *)((a6 + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((a6 + 0x0)) = ((*(signed char *)((a6 + 0x0))) + 0x1);
        }
        t1 = (t0 - 1);
    }
    return t1;
}

int testmode_check_exit_combo(void)
{
    register int t0;
    int t1;
    int t2;

    t0 = (((struct o4_short *)0xC361BF8)->v);
    if (((((unsigned short)t0 & 0x8) != 0) && (t1 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t1 & 4) != 0)) || (((0x4 & (unsigned short)t0) != 0) && (t2 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t2 & 0x8) != 0))) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int testmode_draw_title_and_footer(int a4)
{
    *(volatile float *)0xC0CE8F8;
    *(volatile float *)0xC0CE8FC;
    dbg_print_at(a4, ((((struct o4_float *)0xC0CE900)->v)), ((((struct o0_float *)0xC0CE900)->v)));
    return testmode_draw_text_table(0xC33ED04, 0x1);
}

int testmode_draw_text_table(int a4, int a5)
{
    register int t7;
    register int t0;
    register int t1;
    register int t6;

    t7 = 0xC0CE8F8;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            *(volatile signed char *)((t1 + 0x2));
            t6 = dbg_print_at((*(int *)((t1 + 0x4))), ((float)(*(signed char *)((t1 + 0x0))) * 16.0f), ((float)(*(signed char *)((t1 + 0x1))) * 8.0f));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x8);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t7 = t6;
    }
    return t7;
}

int FUN_0c0ce910(int a4, int a5)
{
    register float u1;
    register int t9;
    register int t2;
    register int t3;
    register int t8;

    *(volatile float *)0xC0CEA78;
    u1 = *(float *)0xC0CEA7C;
    t9 = 0xC0CEA7C;
    if ((int)a5 > 0) {
        t2 = 0x0;
        t3 = a4;
        for (;;) {
            *(volatile signed char *)((t3 + 0x2));
            t8 = dbg_print_at((*(int *)((t3 + 0x4))), ((float)(*(signed char *)((t3 + 0x0))) * u1), ((float)(*(signed char *)((t3 + 0x1))) * u1));
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x8);
            if ((int)t2 >= (int)a5) {
                break;
            }
        }
        t9 = t8;
    }
    return t9;
}

int testmode_check_start_shot1(void)
{
    register int t0;
    int t1;
    int t4;

    t0 = (((struct o4_short *)0xC361BF8)->v);
    if ((((unsigned short)t0 & 0x8) != 0) && (t1 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t1 & 4) != 0)) {
        return 0x1;
    }
    if (((0x4 & (unsigned short)t0) != 0) && (t4 = (((struct o0_short *)0xC361BF8)->v), ((unsigned short)t4 & 0x8) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ce99a(int a4, int a5, int a6, int a7)
{
    register int t22;
    int t1;
    register int t18;
    register int t0;

    t22 = 0xC0CEA7C;
    if ((int)(signed char)a4 > 0) {
        t1 = 0x0;
        for (;;) {
            t18 = (dbg_print_at((((((t1 << 1) + t1) << 2) << 1) + a5), ((float)(*(signed char *)(((((((t1 << 1) + t1) << 2) << 1) + a5) + 0x14))) * 8.0f), ((float)(*(signed char *)(((((((t1 << 1) + t1) << 2) << 1) + a5) + 0x15))) * 8.0f)));
            if ((int)t1 < (int)((signed char)a4 - 2)) {
                t18 = t1;
                if ((((((signed char)a7 == 0)) ? 1 : 0) != 0) && (t1 == 3)) {
                } else {
                    t0 = t1;
                    t0 = (t0 << 1);
                    t0 = (t0 + t1);
                    t0 = (t0 << 2);
                    t0 = (t0 << 1);
                    t0 = (t0 + a5);
                    t18 = (dbg_print_at((*(int *)(((((*(signed char *)((t0 + 0x16))) + (*(signed char *)(((((int)g_game_config) + t1) + 0x0)))) << 2) + 0xC33F474))), 152.0f, ((float)(*(signed char *)((t0 + 0x15))) * 8.0f)));
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)(signed char)a4) {
                break;
            }
        }
        t22 = t18;
    }
    return t22;
}

int FUN_0c0cea90(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t2 = *(short *)0xC361BFC;
    if (((unsigned short)t2 & 16) != 0) {
        *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) - 1);
        if (((signed char)a7 == 0) && (t0 = *(signed char *)(((signed char)a6 + 0xC7F2EE4)), (unsigned char)t0 == 3)) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) - 1);
        }
        t0 = a4;
        if (((unsigned char)(*(signed char *)(((signed char)a6 + 0xC7F2EE4))) & 128) != 0) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = (a4 + 0xFF);
            t0 = (a4 + 0xFF);
        }
        t3 = t0;
        t0 = (signed char)a7;
    } else {
        t4 = a7;
        if (((unsigned short)t2 & 32) != 0) {
            *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) + 0x1);
            if (((signed char)a7 == 0) && (t1 = *(signed char *)(((signed char)a6 + 0xC7F2EE4)), (unsigned char)t1 == 3)) {
                *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) + 0x1);
            }
            if ((int)(unsigned char)(*(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0))) > (int)((signed char)a4 - 1)) {
                *(unsigned char *)(((0xC7F2EE4 + (signed char)a6) + 0x0)) = 0x0;
            }
            t4 = (signed char)a7;
        }
        t3 = a4;
        t0 = t4;
    }
    t1 = *(signed char *)(((0xC7F2EE4 + (signed char)a6) + 0x0));
    t2 = t3;
    t3 = (unsigned char)t1;
    t4 = t0;
    if ((int)(unsigned char)t1 < (int)((signed char)a4 - 2)) {
        t0 = *(short *)0xC361BFC;
        if ((((unsigned short)t0 & 0xF0) != 64) && ((0x4 & (unsigned short)t0) == 0)) {
            t5 = *(short *)0xC361BFC;
            if (((0xF0 & (unsigned short)t5) == 0x80) || ((0x2 & (unsigned short)t5) != 0)) {
                *(unsigned char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0)) = ((*(signed char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0))) + 0x1);
                if ((int)(*(signed char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0))) > (int)((*(signed char *)((((((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) << 1) + a5) + 0x17))) - 1)) {
                    *(unsigned char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0)) = 0x0;
                }
            }
            t3 = (0xF0 & (unsigned short)t5);
            t4 = (unsigned short)t5;
        } else {
            *(unsigned char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0)) = ((*(signed char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0))) - 1);
            if ((int)(*(signed char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0))) < 0) {
                *(unsigned char *)(((((int)g_game_config) + (unsigned char)t1) + 0x0)) = ((*(signed char *)((((((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) << 1) + a5) + 0x17))) - 1);
            }
            t3 = 0xF0;
            t4 = (unsigned short)t0;
        }
        t2 = (((int)g_game_config) + (unsigned char)t1);
    }
    u0 = (((struct o0_float *)0xC0CECD8)->v);
    u1 = (((struct o4_float *)0xC0CECD8)->v);
    *(volatile signed char *)((((((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) << 1) + a5) + 0x15));
    return ((int (*)(int, int, int, int, float, float, float, float))(0xC0CEBD2))(t2, 0x7, t3, t4, f4, f5, u1, u0);
}

int testmode_game_config_commit(void)
{
    register int t10;

    (((struct o0_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F0D);
    (((struct o1_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F0E);
    (((struct o2_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F0F);
    (((struct o3_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F10);
    (((struct o4_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F11);
    (((struct o5_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F12);
    (((struct o6_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F13);
    (((struct o7_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F14);
    (((struct o8_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F15);
    (((struct o9_uchar *)g_game_config)->v) = (*(signed char *)0xC7F2F16);
    t10 = *(signed char *)0xC7F2F17;
    (((struct oA_uchar *)g_game_config)->v) = t10;
    return t10;
}

int testmode_game_config_load(void)
{
    register int t10;

    (((struct o0_uchar *)0xC7F2F0D)->v) = (*(signed char *)g_game_config);
    (((struct o1_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491D);
    (((struct o2_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491E);
    (((struct o3_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC49491F);
    (((struct o4_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494920);
    (((struct o5_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494921);
    (((struct o6_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494922);
    (((struct o7_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494923);
    (((struct o8_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494924);
    (((struct o9_uchar *)0xC7F2F0D)->v) = (*(signed char *)0xC494925);
    t10 = *(signed char *)0xC494926;
    (((struct oA_uchar *)0xC7F2F0D)->v) = t10;
    return t10;
}

int testmode_input_test_screen(void)
{
    int stk[10];
    register int t1;
    int t9;
    register int t10;
    register int t14;
    register int t42;
    register int t45;
    register int t70;
    register int t73;
    register int t109;
    register int t110;
    register int t20;
    register float u23;
    register float u24;
    int t38;
    register int t39;
    register int t40;
    int t41;
    register int t51;
    register float u54;
    register float u55;
    register int t79;
    register float u82;
    register float u83;
    register int t101;
    register float u104;
    register float u105;

    FUN_0c0ce910(0xC33F4F0, 0xB);
    *(unsigned int *)(((int)stk + 28)) = 0xC1534C0;
    *(unsigned int *)(((int)stk + 32)) = 0xC153500;
    *(unsigned int *)(((int)stk + 36)) = 0xC153540;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        for (;;) {
            t9 = *(int *)((((*(int *)(((int)stk + 8))) + ((t1 << 2) << 1)) + 0x0));
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x8))) & t9) == t9) {
                *(unsigned int *)(((int)stk + 16)) = 0x1;
                t10 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 20)) = (t10 + ((t1 << 2) << 1));
                t20 = 0xC153D2C;
                u23 = ((float)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x4))) * 8.0f);
                u24 = ((float)(*(signed char *)(((t10 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t14 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 20)) = (t14 + ((t1 << 2) << 1));
                t20 = 0xC153D28;
                u23 = ((float)(*(signed char *)(((t14 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u24 = ((float)(*(signed char *)(((t14 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            dbg_print_at(t20, u23, u24);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x4;
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 24)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        *(unsigned int *)(((int)stk + 20)) = ((((*(int *)(((int)stk + 16))) == 0)) ? 1 : 0);
        for (;;) {
            if (((*(int *)(((int)stk + 20))) != 0) && (t38 = *(int *)(((int)stk + 8)), t39 = *(int *)(((int)stk + 24)), t40 = *(short *)((t39 + 0x8)), t41 = *(int *)(((t38 + ((t1 << 2) << 1)) + 0x0)), ((unsigned short)t40 & t41) != 0)) {
                t42 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 16)) = (t42 + ((t1 << 2) << 1));
                t51 = 0xC153D2C;
                u54 = ((float)(*(signed char *)(((t42 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u55 = ((float)(*(signed char *)(((t42 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t45 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 16)) = (t45 + ((t1 << 2) << 1));
                t51 = 0xC153D28;
                u54 = ((float)(*(signed char *)(((t45 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u55 = ((float)(*(signed char *)(((t45 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            dbg_print_at(t51, u54, u55);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x8;
        *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 36)));
        *(unsigned int *)(((int)stk + 20)) = ((signed char)(((t1 << 2) + t1) << 2) + 0xC361BF0);
        for (;;) {
            if (((unsigned short)(*(short *)(((*(int *)(((int)stk + 20))) + 0x8))) & (*(int *)((((*(int *)(((int)stk + 12))) + ((t1 << 2) << 1)) + 0x0)))) != 0) {
                t70 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 16)) = (t70 + ((t1 << 2) << 1));
                t79 = 0xC153D2C;
                u82 = ((float)(*(signed char *)(((t70 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u83 = ((float)(*(signed char *)(((t70 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            } else {
                t73 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 16)) = (t73 + ((t1 << 2) << 1));
                t79 = 0xC153D28;
                u82 = ((float)(*(signed char *)(((t73 + ((t1 << 2) << 1)) + 0x4))) * 8.0f);
                u83 = ((float)(*(signed char *)(((t73 + ((t1 << 2) << 1)) + 0x5))) * 8.0f);
            }
            dbg_print_at(t79, u82, u83);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x10);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x10);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0xD) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x2) continue;
        break;
    }
    if (0x0 != 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC153590;
        t101 = 0xC153D2C;
        u104 = ((float)(*(signed char *)0xC153594) * 8.0f);
        u105 = ((float)(*(signed char *)0xC153595) * 8.0f);
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0xC153590;
        t101 = 0xC153D28;
        u104 = ((float)(*(signed char *)0xC153594) * 8.0f);
        u105 = ((float)(*(signed char *)0xC153595) * 8.0f);
    }
    dbg_print_at(t101, u104, u105);
    t109 = testmode_check_start_shot1();
    t110 = (signed char)t109;
    if ((signed char)t109 != 0) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
        t110 = 0x0;
    }
    return t110;
}

int testmode_game_data_screen(void)
{
    register float u8;
    register int t26;
    register int t27;

    FUN_0c0ce910(0xC33F548, 0x6);
    *(volatile int *)0xC7F2F28;
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC1535A4);
    *(volatile float *)0xC0CF21C;
    *(volatile float *)0xC0CF220;
    u8 = (((struct o0_float *)0xC0CF224)->v);
    dbg_print_at(0xC7F36B8, u8, ((((struct o8_float *)0xC0CF224)->v)));
    *(volatile int *)0xC7F2F28;
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC153480);
    dbg_print_at(0xC7F36B8, u8, ((((struct o10_float *)0xC0CF224)->v)));
    *(volatile int *)0xC7F2F2C;
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC153480);
    dbg_print_at(0xC7F36B8, u8, ((((struct o14_float *)0xC0CF224)->v)));
    *(volatile int *)0xC7F2F30;
    sprintf(0xC7F36B8, 0x0, 0x0, 0x0, 0xC153480);
    dbg_print_at(0xC7F36B8, u8, ((((struct o18_float *)0xC0CF224)->v)));
    t26 = testmode_check_start_shot1();
    t27 = (signed char)t26;
    if ((signed char)t26 != 0) {
        (((struct o0_uchar *)0xC7F2EE5)->v) = 0x1;
        (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE5)->v) = 0x0;
        t27 = 0x0;
    }
    return t27;
}

void FUN_0c0cf202(void)
{
    
}

int FUN_0c0cf240(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(short *)0xC361BFC;
    if (((unsigned short)t0 & 16) != 0) {
        t1 = *(signed char *)(((0xC7F2EE4 + a5) + 0x0));
        if (t1 == 0) {
            *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = (0xFF + a4);
        } else {
            *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = (t1 - 1);
        }
    } else {
        if (((unsigned short)t0 & 32) != 0) {
            if ((unsigned char)(*(signed char *)(((0xC7F2EE4 + a5) + 0x0))) == (a4 - 1)) {
                *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)(((0xC7F2EE4 + a5) + 0x0)) = ((*(signed char *)(((0xC7F2EE4 + a5) + 0x0))) + 0x1);
            }
        }
    }
    *(volatile float *)0xC0CF34C;
    u0 = (((struct o0_float *)0xC0CF350)->v);
    t0 = (dbg_print_at(0xC153474, ((((struct o4_float *)0xC0CF350)->v)), ((float)(*(signed char *)((((((unsigned char)(*(signed char *)((a5 + 0xC7F2EE4))) << 2) << 1) + a6) + 0x1))) * u0)));
    if ((int)a4 > 0) {
        t1 = 0x0;
        t2 = a6;
        for (;;) {
            t3 = dbg_print_at((*(int *)((t2 + 0x4))), ((float)(*(signed char *)((t2 + 0x0))) * u0), ((float)(*(signed char *)((t2 + 0x1))) * u0));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x8);
            if ((int)t1 >= (int)a4) {
                break;
            }
        }
        t0 = t3;
    }
    return t0;
}

int testmode_main(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE5;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t0 = *(signed char *)0xC7F2EE6;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        if ((unsigned char)t0 != 2) {
                            (((struct o1D_uchar *)0xC7F2EE5)->v) = 0x0;
                            (((struct o0_uchar *)0xC7F2EE5)->v) = 0x0;
                            return 0x0;
                        }
                        return testmode_game_config_screen(0xC7F2EE5, a5, a6, a7);
                    }
                    return testmode_game_data_screen();
                }
                return testmode_input_test_screen();
            }
        } else {
            (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
        }
        testmode_draw_text_table(0xC33F194, 0x3);
        FUN_0c0cf240(0x4, 0x2, 0xC33F1AC);
        t0 = *(short *)0xC361BFC;
        t1 = (unsigned short)t0;
        if (((unsigned short)t0 & 4) != 0) {
            (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
            (((struct o3_uchar *)0xC7F2EE5)->v) = 0x0;
            (((struct o2_uchar *)0xC7F2EE5)->v) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o0_uchar *)0xC7F2EE5)->v) = ((*(signed char *)0xC7F2EE5) + 0x1);
    (((struct o1_uchar *)0xC7F2EE5)->v) = 0x0;
    return 0x0;
}
