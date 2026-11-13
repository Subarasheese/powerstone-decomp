/* KEY CFG screen (two player columns, settings and button maps) (0c017a24-0c0195f0) */

/* named globals (symbols.txt) */
extern char g_key_config[];
extern char g_keycfg_work[];
extern char g_res_key_cfg[];
extern char g_vib_disabled[];
struct oF2_short { char p[0xF2]; short v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int pad_get_type(int);
extern int keycfg_step_cursor_row();
int keycfg_queue_table_sprite(int);
int keycfg_queue_table_sprite_scaled(int, float, float);
extern int keycfg_run_objects_in_mask();
int vib_is_any_active(void);
int snd_play_side_se(int, int);
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
int opt_reset_system_settings(void);
int opt_reset_key_config(int);
int obj_destroy(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c06231c(int, int, int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };

int keycfg_load_settings_to_screen(void);
int keycfg_commit_screen_to_settings(void);
int keycfg_reset_system_settings(void);
int FUN_0c0187a8(int a4);
int FUN_0c018b96(int a4, int a5);
int FUN_0c018ed0(int a4, int a5);
int FUN_0c019204(int a4, int a5);
int FUN_0c0193b2(int a4, int a5);
int FUN_0c0194dc(int a4, int a5);
int keycfg_obj_in_mask(int a4);

void keycfg_menu_init(void)
{
    *(unsigned char *)g_keycfg_work = 0x0;
}

int keycfg_menu_main(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t51;
    register int t54;
    register int t57;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t113;
    register int t114;
    register int t117;
    register int t118;
    register int t119;
    register int t137;
    register int t138;
    register int t139;
    register int t141;
    register int t142;
    register int t181;
    register int t182;
    register int t188;
    register int t199;
    register int t211;
    register int t283;
    register int t407;
    register float u420;
    register int t421;
    register int t433;
    register int t437;
    register int t441;
    register int t474;
    register int t478;
    register int t482;
    register int t492;
    register int t500;
    register int t509;
    register int t520;
    register int t532;
    register int t604;
    register int t728;
    register float u741;
    register int t742;
    register int t754;
    register int t758;
    register int t762;
    register int t795;
    register int t799;
    register int t803;
    register int t813;
    register int t821;
    register int t3;
    register int t4;
    register int t22;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t35;
    register int t36;
    register int t37;
    register int t66;
    register int t67;
    register int t68;
    register int t92;
    register int t93;
    register int t96;
    register int t97;
    register int t98;
    register int t105;
    register int t106;
    register int t107;
    register int t134;
    register int t135;
    register int t140;
    register int t160;
    register int t161;
    register int t164;
    register int t165;
    register int t166;
    register int t173;
    register int t174;
    register int t175;
    int t185;
    int t189;
    int t196;
    int t200;
    int t219;
    int t227;
    int t240;
    int t248;
    int t262;
    int t270;
    int t287;
    int t292;
    int t306;
    int t314;
    int t346;
    int t354;
    int t372;
    int t380;
    int t498;
    int t506;
    int t510;
    int t517;
    int t521;
    int t540;
    int t548;
    int t561;
    int t569;
    int t583;
    int t591;
    int t608;
    int t613;
    int t627;
    int t635;
    int t667;
    int t675;
    int t693;
    int t701;
    int t819;

    t0 = *(signed char *)g_keycfg_work;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(signed char *)0xC3622C8;
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 == 2) {
                            t2 = t1;
                            t5 = 0xC3622C8;
                            t6 = 0x0;
                            for (;;) {
                                if ((int)t6 >= (int)0x2) {
                                    break;
                                }
                                t2 = t6;
                                t4 = ((int)g_keycfg_work);
                                t2 = (t2 << 2);
                                t4 = (t4 + 0x2A);
                                t2 = (t2 << 2);
                                t2 = (*(signed char *)((t4 + t2)));
                                if (t2 == 1) {
                                    t5 = t6;
                                    t2 = (((int (*)(int))(keycfg_step_cursor_row))(t5));
                                } else {
                                    t3 = t6;
                                    t3 = (t3 << 2);
                                    t4 = t6;
                                    t3 = (t3 + t4);
                                    t3 = (t3 << 2);
                                    t3 = (signed char)t3;
                                    t3 = (t3 + 0xC361BF0);
                                    t2 = (*(short *)((t3 + 0xC)));
                                    t2 = (unsigned short)t2;
                                    if ((t2 & 0x2) != 0) {
                                        t3 = t6;
                                        t4 = ((int)g_keycfg_work);
                                        t3 = (t3 << 2);
                                        t4 = (t4 + 0x2A);
                                        t3 = (t3 << 2);
                                        t3 = (t3 + t4);
                                        *(unsigned char *)((t3 + 0x0)) = 0x1;
                                        t5 = 0x0;
                                        t2 = (snd_play_side_se(t5, 0x4E));
                                    } else {
                                        t22 = t4;
                                        t23 = t5;
                                    }
                                }
                                t3 = 0xC012870;
                                t4 = t22;
                                t5 = t23;
                                t5 = t6;
                                t2 = (pad_get_type(t5));
                                if (t2 == 0) {
                                    t5 = t6;
                                    t3 = ((int)g_keycfg_work);
                                    t5 = (t5 << 2);
                                    t3 = (t3 + 0x2A);
                                    t5 = (t5 << 2);
                                    t3 = (t3 + t5);
                                    t2 = 0x1;
                                    t4 = ((int)g_keycfg_work);
                                    *(unsigned char *)((t3 + 0xF)) = t2;
                                    t3 = ((int)g_keycfg_work);
                                    t4 = (t4 + 0x2A);
                                    t3 = (t3 + 0x2A);
                                    t4 = (t4 + t5);
                                    t5 = (t5 + t3);
                                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                                    t2 = 0x7;
                                    *(unsigned char *)((t5 + 0x2)) = t2;
                                    t26 = t3;
                                    t27 = t4;
                                    t28 = t5;
                                }
                                t2 = t6;
                                t3 = t26;
                                t4 = t27;
                                t5 = t28;
                                t4 = ((int)g_keycfg_work);
                                t2 = (t2 << 2);
                                t4 = (t4 + 0x2A);
                                t2 = (t2 << 2);
                                t2 = (t2 + t4);
                                t2 = (*(signed char *)((t2 + 0xF)));
                                if (t2 == 1) {
                                    t5 = t6;
                                    t2 = (pad_get_type(t5));
                                    if (t2 != 0) {
                                        t3 = t6;
                                        t4 = ((int)g_keycfg_work);
                                        t3 = (t3 << 2);
                                        t4 = (t4 + 0x2A);
                                        t3 = (t3 << 2);
                                        t3 = (t3 + t4);
                                        t2 = 0x0;
                                        *(unsigned char *)((t3 + 0xF)) = t2;
                                        t2 = 0x1;
                                        t4 = 0xC01958C;
                                        t5 = t6;
                                        (((struct o8_uchar *)g_keycfg_work)->v) = t2;
                                        t5 = (t5 + 0x1);
                                        t2 = (((int (*)(int))(keycfg_run_objects_in_mask))(t5));
                                    }
                                } else {
                                    t35 = t3;
                                    t36 = t4;
                                    t37 = t5;
                                }
                                t6 = (t6 + 0x1);
                                t3 = t35;
                                t4 = t36;
                                t5 = t37;
                            }
                            if ((*(signed char *)0xC3622EA) == 0) {
                                if ((*(signed char *)0xC3622FA) == 0) {
                                    (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) - 1);
                                    t43 = ((int (*)(int, int, int, int))(keycfg_run_objects_in_mask))(0x4, a5, a6, a7);
                                    t44 = ((int (*)(int))(keycfg_run_objects_in_mask))(0x1);
                                    return ((int (*)(int))(keycfg_run_objects_in_mask))(0x2);
                                }
                                return 0x10;
                            }
                            return t2;
                        }
                        return t1;
                    }
                    t45 = *(signed char *)0xC3622C8;
                    (((struct o8_uchar *)g_keycfg_work)->v) = (t45 + 0x1);
                    t46 = (t45 + 0x1);
                    t47 = 0xC3622C8;
                    t48 = 0x0;
                    for (;;) {
                        if ((*(signed char *)(((((t48 << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
                            t47 = t48;
                            t46 = (pad_get_type(t47));
                            switch (t46) {
                            case 0:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                *(unsigned char *)(((0xC3622EA + t47) + 0x0)) = 0x0;
                                t46 = 0x0;
                                t57 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t57 + 0xD)) = t46;
                                t46 = 0x1;
                                *(unsigned char *)((t47 + 0xF)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018b96(t47, (t48 + 0x1)));
                                break;
                            case 1:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                t54 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t54 + 0x0)) = 0x1;
                                t46 = 0x0;
                                *(unsigned char *)((t47 + 0xD)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018b96(t47, (t48 + 0x1)));
                                break;
                            case 2:
                                t47 = t48;
                                t47 = (t47 << 2);
                                t47 = (t47 << 2);
                                t51 = (0xC3622EA + t47);
                                t47 = (t47 + 0xC3622EA);
                                *(unsigned char *)((t51 + 0x0)) = 0x1;
                                t46 = 0x1;
                                *(unsigned char *)((t47 + 0xD)) = t46;
                                t47 = t48;
                                t46 = (FUN_0c018ed0(t47, (t48 + 0x1)));
                                break;
                            }
                            t46 = t48;
                            *(unsigned char *)(((((t48 << 2) << 2) + 0xC3622EA) + 0x1)) = t46;
                            *(unsigned short *)(((int)stk + 0)) = (t46 + 0x1);
                            t47 = t48;
                            t46 = (FUN_0c019204(t47, (t46 + 0x1)));
                            t47 = t48;
                            t46 = (FUN_0c0193b2(t47, (*(short *)(((int)stk + 0)))));
                            t47 = t48;
                            t46 = (FUN_0c0194dc(t47, (*(short *)(((int)stk + 0)))));
                        } else {
                            t66 = 0xC3622EA;
                            t67 = (((t48 << 2) << 2) + 0xC3622EA);
                            t68 = t47;
                        }
                        t48 = (t48 + 0x1);
                        t47 = t68;
                        if ((int)t48 >= (int)0x2) {
                            break;
                        }
                    }
                    t70 = t46;
                    t71 = t66;
                    t72 = t67;
                    t73 = t47;
                    t74 = 0x0;
                    for (;;) {
                        if ((int)t74 >= (int)0x2) {
                            break;
                        }
                        t70 = t74;
                        t72 = ((int)g_keycfg_work);
                        t70 = (t70 << 2);
                        t72 = (t72 + 0x2A);
                        t70 = (t70 << 2);
                        t70 = (*(signed char *)((t72 + t70)));
                        if (t70 == 1) {
                            t73 = t74;
                            t70 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(keycfg_step_cursor_row))(t73, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                        } else {
                            t71 = t74;
                            t71 = (t71 << 2);
                            t72 = t74;
                            t71 = (t71 + t72);
                            t71 = (t71 << 2);
                            t71 = (signed char)t71;
                            t71 = (t71 + 0xC361BF0);
                            t70 = (*(short *)((t71 + 0xC)));
                            t70 = (unsigned short)t70;
                            if ((t70 & 0x2) != 0) {
                                t71 = t74;
                                t72 = ((int)g_keycfg_work);
                                t71 = (t71 << 2);
                                t72 = (t72 + 0x2A);
                                t71 = (t71 << 2);
                                t71 = (t71 + t72);
                                *(unsigned char *)((t71 + 0x0)) = 0x1;
                                t73 = 0x0;
                                t70 = (snd_play_side_se(t73, 0x4E));
                            } else {
                                t92 = t72;
                                t93 = t73;
                            }
                        }
                        t72 = t92;
                        t73 = t93;
                        t73 = t74;
                        t70 = (pad_get_type(t73));
                        if (t70 == 0) {
                            t73 = t74;
                            t71 = ((int)g_keycfg_work);
                            t73 = (t73 << 2);
                            t71 = (t71 + 0x2A);
                            t73 = (t73 << 2);
                            t71 = (t71 + t73);
                            t70 = 0x1;
                            t72 = ((int)g_keycfg_work);
                            *(unsigned char *)((t71 + 0xF)) = t70;
                            t71 = ((int)g_keycfg_work);
                            t72 = (t72 + 0x2A);
                            t71 = (t71 + 0x2A);
                            t72 = (t72 + t73);
                            t73 = (t73 + t71);
                            *(unsigned char *)((t72 + 0x0)) = 0x0;
                            t70 = 0x7;
                            *(unsigned char *)((t73 + 0x2)) = t70;
                            t96 = t71;
                            t97 = t72;
                            t98 = t73;
                        }
                        t70 = t74;
                        t71 = t96;
                        t72 = t97;
                        t73 = t98;
                        t72 = ((int)g_keycfg_work);
                        t70 = (t70 << 2);
                        t72 = (t72 + 0x2A);
                        t70 = (t70 << 2);
                        t70 = (t70 + t72);
                        t70 = (*(signed char *)((t70 + 0xF)));
                        if (t70 == 1) {
                            t73 = t74;
                            t70 = (pad_get_type(t73));
                            if (t70 != 0) {
                                t71 = t74;
                                t72 = ((int)g_keycfg_work);
                                t71 = (t71 << 2);
                                t72 = (t72 + 0x2A);
                                t71 = (t71 << 2);
                                t71 = (t71 + t72);
                                t70 = 0x0;
                                *(unsigned char *)((t71 + 0xF)) = t70;
                                t70 = 0x1;
                                t73 = t74;
                                (((struct o8_uchar *)g_keycfg_work)->v) = t70;
                                t73 = (t73 + 0x1);
                                t70 = (((int (*)(int))(keycfg_run_objects_in_mask))(t73));
                            }
                        } else {
                            t105 = t71;
                            t106 = t72;
                            t107 = t73;
                        }
                        t74 = (t74 + 0x1);
                        t71 = t105;
                        t72 = t106;
                        t73 = t107;
                    }
                    if ((*(signed char *)0xC3622EA) == 0) {
                        if ((*(signed char *)0xC3622FA) == 0) {
                            (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) - 1);
                            t113 = ((int (*)(int))(keycfg_run_objects_in_mask))(0x4);
                            t114 = ((int (*)(int))(keycfg_run_objects_in_mask))(0x1);
                            return ((int (*)(int))(keycfg_run_objects_in_mask))(0x2);
                        }
                        return 0x10;
                    }
                    return t70;
                }
                (((struct o8_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C8) + 0x1);
                (((struct o2A_uchar *)g_keycfg_work)->v) = 0x0;
                (((struct o3A_uchar *)g_keycfg_work)->v) = 0x0;
                (((struct o39_uchar *)g_keycfg_work)->v) = 0x0;
                *(unsigned char *)0xC362309 = 0x0;
                (((struct o2C_uchar *)g_keycfg_work)->v) = 0x7;
                (((struct o3C_uchar *)g_keycfg_work)->v) = 0x7;
                FUN_0c0187a8(0x4);
                t117 = *(signed char *)0xC3622C8;
                (((struct o8_uchar *)g_keycfg_work)->v) = (t117 + 0x1);
                t118 = (t117 + 0x1);
                t119 = 0x0;
                for (;;) {
                    if ((*(signed char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
                        t118 = (pad_get_type(t119));
                        switch (t118) {
                        case 0:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x0;
                            t118 = 0x0;
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0xD)) = t118;
                            t118 = 0x1;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xF)) = t118;
                            t118 = (FUN_0c018b96(t119, (t119 + 0x1)));
                            break;
                        case 1:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x1;
                            t118 = 0x0;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xD)) = t118;
                            t118 = (FUN_0c018b96(t119, (t119 + 0x1)));
                            break;
                        case 2:
                            *(unsigned char *)(((0xC3622EA + ((t119 << 2) << 2)) + 0x0)) = 0x1;
                            t118 = 0x1;
                            *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0xD)) = t118;
                            t118 = (FUN_0c018ed0(t119, (t119 + 0x1)));
                            break;
                        }
                        t118 = t119;
                        *(unsigned char *)(((((t119 << 2) << 2) + 0xC3622EA) + 0x1)) = t118;
                        *(unsigned short *)(((int)stk + 0)) = (t118 + 0x1);
                        t118 = (FUN_0c019204(t119, (t118 + 0x1)));
                        t118 = (FUN_0c0193b2(t119, (*(short *)(((int)stk + 0)))));
                        t118 = (FUN_0c0194dc(t119, (*(short *)(((int)stk + 0)))));
                    } else {
                        t134 = 0xC3622EA;
                        t135 = (((t119 << 2) << 2) + 0xC3622EA);
                    }
                    t119 = (t119 + 0x1);
                    if ((int)t119 >= (int)0x2) {
                        break;
                    }
                }
                t137 = t118;
                t138 = t134;
                t139 = t135;
                t141 = t140;
                t142 = 0x0;
                for (;;) {
                    if ((int)t142 >= (int)0x2) {
                        break;
                    }
                    t137 = t142;
                    t139 = ((int)g_keycfg_work);
                    t137 = (t137 << 2);
                    t139 = (t139 + 0x2A);
                    t137 = (t137 << 2);
                    t137 = (*(signed char *)((t139 + t137)));
                    if (t137 == 1) {
                        t141 = t142;
                        t137 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(keycfg_step_cursor_row))(t141, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                    } else {
                        t138 = t142;
                        t138 = (t138 << 2);
                        t139 = t142;
                        t138 = (t138 + t139);
                        t138 = (t138 << 2);
                        t138 = (signed char)t138;
                        t138 = (t138 + 0xC361BF0);
                        t137 = (*(short *)((t138 + 0xC)));
                        t137 = (unsigned short)t137;
                        if ((t137 & 0x2) != 0) {
                            t138 = t142;
                            t139 = ((int)g_keycfg_work);
                            t138 = (t138 << 2);
                            t139 = (t139 + 0x2A);
                            t138 = (t138 << 2);
                            t138 = (t138 + t139);
                            *(unsigned char *)((t138 + 0x0)) = 0x1;
                            t141 = 0x0;
                            t137 = (snd_play_side_se(t141, 0x4E));
                        } else {
                            t160 = t139;
                            t161 = t141;
                        }
                    }
                    t139 = t160;
                    t141 = t161;
                    t141 = t142;
                    t137 = (pad_get_type(t141));
                    if (t137 == 0) {
                        t141 = t142;
                        t138 = ((int)g_keycfg_work);
                        t141 = (t141 << 2);
                        t138 = (t138 + 0x2A);
                        t141 = (t141 << 2);
                        t138 = (t138 + t141);
                        t137 = 0x1;
                        t139 = ((int)g_keycfg_work);
                        *(unsigned char *)((t138 + 0xF)) = t137;
                        t138 = ((int)g_keycfg_work);
                        t139 = (t139 + 0x2A);
                        t138 = (t138 + 0x2A);
                        t139 = (t139 + t141);
                        t141 = (t141 + t138);
                        *(unsigned char *)((t139 + 0x0)) = 0x0;
                        t137 = 0x7;
                        *(unsigned char *)((t141 + 0x2)) = t137;
                        t164 = t138;
                        t165 = t139;
                        t166 = t141;
                    }
                    t137 = t142;
                    t138 = t164;
                    t139 = t165;
                    t141 = t166;
                    t139 = ((int)g_keycfg_work);
                    t137 = (t137 << 2);
                    t139 = (t139 + 0x2A);
                    t137 = (t137 << 2);
                    t137 = (t137 + t139);
                    t137 = (*(signed char *)((t137 + 0xF)));
                    if (t137 == 1) {
                        t141 = t142;
                        t137 = (pad_get_type(t141));
                        if (t137 != 0) {
                            t138 = t142;
                            t139 = ((int)g_keycfg_work);
                            t138 = (t138 << 2);
                            t139 = (t139 + 0x2A);
                            t138 = (t138 << 2);
                            t138 = (t138 + t139);
                            t137 = 0x0;
                            *(unsigned char *)((t138 + 0xF)) = t137;
                            t137 = 0x1;
                            t141 = t142;
                            (((struct o8_uchar *)g_keycfg_work)->v) = t137;
                            t141 = (t141 + 0x1);
                            t137 = (((int (*)(int))(keycfg_run_objects_in_mask))(t141));
                        }
                    } else {
                        t173 = t138;
                        t174 = t139;
                        t175 = t141;
                    }
                    t142 = (t142 + 0x1);
                    t138 = t173;
                    t139 = t174;
                    t141 = t175;
                }
                if ((*(signed char *)0xC3622EA) == 0) {
                    if ((*(signed char *)0xC3622FA) == 0) {
                        (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) - 1);
                        t181 = ((int (*)(int))(keycfg_run_objects_in_mask))(0x4);
                        t182 = ((int (*)(int))(keycfg_run_objects_in_mask))(0x1);
                        return ((int (*)(int))(keycfg_run_objects_in_mask))(0x2);
                    }
                    return 0x10;
                }
                return t137;
            }
            return (keycfg_commit_screen_to_settings());
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x10) == 0) && (t185 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t185 & 0x10) == 0)) {
        } else {
            snd_play_side_se(0x0, 0x4B);
            (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) - 1);
            t188 = vib_is_any_active();
            if ((t188 == 0) && (t189 = *(signed char *)0xC3622C1, t189 == 5)) {
                (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) - 1);
            }
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x20) == 0) && (t196 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t196 & 0x20) == 0)) {
        } else {
            snd_play_side_se(0x0, 0x4B);
            (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            t199 = vib_is_any_active();
            if ((t199 == 0) && (t200 = *(signed char *)0xC3622C1, t200 == 5)) {
                (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            }
        }
        if ((int)(*(signed char *)0xC3622C1) < 0) {
            (((struct o1_uchar *)g_keycfg_work)->v) = 0x7;
        }
        if ((int)(*(signed char *)0xC3622C1) > (int)0x7) {
            (((struct o1_uchar *)g_keycfg_work)->v) = 0x0;
        }
        t211 = *(signed char *)0xC3622C1;
        switch (t211) {
        case 0:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t372 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t372 & 64) == 0)) {
            } else {
                (((struct o2_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C2) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t380 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t380 & 128) == 0)) {
            } else {
                (((struct o2_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C2) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C2) < 0) {
                (((struct o2_uchar *)g_keycfg_work)->v) = 0x7;
            }
            if ((int)(*(signed char *)0xC3622C2) <= (int)0x7) {
            } else {
                (((struct o2_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 1:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t346 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t346 & 64) == 0)) {
            } else {
                (((struct o3_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C3) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t354 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t354 & 128) == 0)) {
            } else {
                (((struct o3_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C3) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C3) < 0) {
                (((struct o3_uchar *)g_keycfg_work)->v) = 0x4;
            }
            if ((int)(*(signed char *)0xC3622C3) <= (int)0x4) {
            } else {
                (((struct o3_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 2:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t219 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t219 & 64) == 0)) {
            } else {
                (((struct o4_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C4) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t227 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t227 & 128) == 0)) {
            } else {
                (((struct o4_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C4) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C4) < 0) {
                (((struct o4_uchar *)g_keycfg_work)->v) = 0x3;
            }
            if ((int)(*(signed char *)0xC3622C4) <= (int)0x3) {
            } else {
                (((struct o4_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 3:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t240 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t240 & 64) == 0)) {
            } else {
                (((struct o5_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C5) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t248 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t248 & 128) == 0)) {
            } else {
                (((struct o5_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C5) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C5) < 0) {
                (((struct o5_uchar *)g_keycfg_work)->v) = 0x3;
            }
            if ((int)(*(signed char *)0xC3622C5) <= (int)0x3) {
            } else {
                (((struct o5_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 4:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t262 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t262 & 64) == 0)) {
            } else {
                (((struct o6_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C6) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t270 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t270 & 128) == 0)) {
            } else {
                (((struct o6_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C6) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C6) < 0) {
                (((struct o6_uchar *)g_keycfg_work)->v) = 0x1;
            }
            if ((int)(*(signed char *)0xC3622C6) > (int)0x1) {
                (((struct o6_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 5:
            t283 = vib_is_any_active();
            if (t283 != 0) {
                if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t287 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t287 & 64) == 0)) {
                } else {
                    (((struct o7_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C7) - 1);
                    snd_play_side_se(0x0, 0x4C);
                }
                if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t292 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t292 & 128) == 0)) {
                } else {
                    (((struct o7_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C7) + 0x1);
                    snd_play_side_se(0x0, 0x4C);
                }
                if ((int)(*(signed char *)0xC3622C7) < 0) {
                    (((struct o7_uchar *)g_keycfg_work)->v) = 0x1;
                }
                if ((int)(*(signed char *)0xC3622C7) > (int)0x1) {
                    (((struct o7_uchar *)g_keycfg_work)->v) = 0x0;
                }
            } else {
                (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
            }
            break;
        case 6:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t306 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t306 & 4) == 0)) {
            } else {
                snd_play_side_se(0x0, 0x4D);
                (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) + 0x1);
                (((struct o8_uchar *)g_keycfg_work)->v) = 0x0;
            }
            break;
        case 7:
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t314 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t314 & 4) == 0)) {
            } else {
                snd_play_side_se(0x0, 0x4D);
                keycfg_reset_system_settings();
            }
            break;
        }
        keycfg_queue_table_sprite(0x0);
        keycfg_queue_table_sprite(0x1);
        keycfg_queue_table_sprite(0x2);
        keycfg_queue_table_sprite(0x3);
        keycfg_queue_table_sprite(0x4);
        keycfg_queue_table_sprite(0x5);
        keycfg_queue_table_sprite(0x6);
        keycfg_queue_table_sprite(0x7);
        keycfg_queue_table_sprite(0x8);
        t407 = vib_is_any_active();
        if (t407 != 0) {
            keycfg_queue_table_sprite(0x9);
        }
        keycfg_queue_table_sprite(0xA);
        keycfg_queue_table_sprite(0xB);
        keycfg_queue_table_sprite(0xC);
        keycfg_queue_table_sprite(0xD);
        keycfg_queue_table_sprite(0xE);
        keycfg_queue_table_sprite(0xF);
        keycfg_queue_table_sprite(0x3D);
        keycfg_queue_table_sprite(0x3E);
        u420 = *(float *)((0xC11B6E4 + ((*(signed char *)0xC3622CC) << 2)));
        t421 = *(signed char *)0xC3622C1;
        *(unsigned char *)(((int)stk + 0)) = t421;
        keycfg_queue_table_sprite_scaled(((*(signed char *)(((int)stk + 0))) + 0x35), (*(float *)((0xC11B6C4 + (t421 << 2)))), u420);
        (((struct oD_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CD) + 0x1);
        (((struct oD_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CD) & 0x1);
        if ((*(signed char *)0xC3622CD) == 0) {
            (((struct oC_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CC) + 0x1);
            (((struct oC_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CC) & 0xF);
        }
        t433 = 0x25;
        if ((int)(*(signed char *)0xC3622C2) >= 0) {
            t433 = 0x1D;
        }
        keycfg_queue_table_sprite(t433);
        t437 = 0x26;
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x1) {
            t437 = 0x1E;
        }
        keycfg_queue_table_sprite(t437);
        t441 = 0x27;
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x2) {
            t441 = 0x1F;
        }
        keycfg_queue_table_sprite(t441);
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x3) {
            keycfg_queue_table_sprite(0x20);
        } else {
            keycfg_queue_table_sprite(0x28);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x4) {
            keycfg_queue_table_sprite(0x21);
        } else {
            keycfg_queue_table_sprite(0x29);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x5) {
            keycfg_queue_table_sprite(0x22);
        } else {
            keycfg_queue_table_sprite(0x2A);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x6) {
            keycfg_queue_table_sprite(0x23);
        } else {
            keycfg_queue_table_sprite(0x2B);
        }
        if ((int)(*(signed char *)0xC3622C2) >= (int)0x7) {
            keycfg_queue_table_sprite(0x24);
        } else {
            keycfg_queue_table_sprite(0x2C);
        }
        keycfg_queue_table_sprite(((*(signed char *)0xC3622C3) + 0x10));
        keycfg_queue_table_sprite(((*(signed char *)0xC3622C4) + 0x15));
        t474 = 0x31;
        if ((int)(*(signed char *)0xC3622C5) >= 0) {
            t474 = 0x2D;
        }
        keycfg_queue_table_sprite(t474);
        t478 = 0x32;
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x1) {
            t478 = 0x2E;
        }
        keycfg_queue_table_sprite(t478);
        t482 = 0x33;
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x2) {
            t482 = 0x2F;
        }
        keycfg_queue_table_sprite(t482);
        if ((int)(*(signed char *)0xC3622C5) >= (int)0x3) {
            keycfg_queue_table_sprite(0x30);
        } else {
            keycfg_queue_table_sprite(0x34);
        }
        keycfg_queue_table_sprite(((*(signed char *)0xC3622C6) + 0x19));
        t492 = vib_is_any_active();
        if (t492 != 0) {
            keycfg_queue_table_sprite(((*(signed char *)0xC3622C7) + 0x1B));
        }
        t500 = 0x20;
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t498 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t498 & 0x8) == 0)) {
        } else {
            t500 = snd_play_side_se(0x0, 0x4D);
            (((struct o0_uchar *)g_keycfg_work)->v) = 0xFFFFFFFF;
        }
        return t500;
    }
    (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) + 0x1);
    (((struct o1_uchar *)g_keycfg_work)->v) = 0x0;
    (((struct oC_uchar *)g_keycfg_work)->v) = 0x0;
    (((struct oD_uchar *)g_keycfg_work)->v) = 0x0;
    (((struct oE_uchar *)g_keycfg_work)->v) = 0x0;
    (((struct oF_uchar *)g_keycfg_work)->v) = 0x0;
    keycfg_load_settings_to_screen();
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x10) == 0) && (t506 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t506 & 0x10) == 0)) {
    } else {
        snd_play_side_se(0x0, 0x4B);
        (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) - 1);
        t509 = vib_is_any_active();
        if ((t509 == 0) && (t510 = *(signed char *)0xC3622C1, t510 == 5)) {
            (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) - 1);
        }
    }
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x20) == 0) && (t517 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t517 & 0x20) == 0)) {
    } else {
        snd_play_side_se(0x0, 0x4B);
        (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        t520 = vib_is_any_active();
        if ((t520 == 0) && (t521 = *(signed char *)0xC3622C1, t521 == 5)) {
            (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        }
    }
    if ((int)(*(signed char *)0xC3622C1) < 0) {
        (((struct o1_uchar *)g_keycfg_work)->v) = 0x7;
    }
    if ((int)(*(signed char *)0xC3622C1) > (int)0x7) {
        (((struct o1_uchar *)g_keycfg_work)->v) = 0x0;
    }
    t532 = *(signed char *)0xC3622C1;
    switch (t532) {
    case 0:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t693 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t693 & 64) == 0)) {
        } else {
            (((struct o2_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C2) - 1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t701 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t701 & 128) == 0)) {
        } else {
            (((struct o2_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C2) + 0x1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C2) < 0) {
            (((struct o2_uchar *)g_keycfg_work)->v) = 0x7;
        }
        if ((int)(*(signed char *)0xC3622C2) <= (int)0x7) {
        } else {
            (((struct o2_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 1:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t667 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t667 & 64) == 0)) {
        } else {
            (((struct o3_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C3) - 1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t675 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t675 & 128) == 0)) {
        } else {
            (((struct o3_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C3) + 0x1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C3) < 0) {
            (((struct o3_uchar *)g_keycfg_work)->v) = 0x4;
        }
        if ((int)(*(signed char *)0xC3622C3) <= (int)0x4) {
        } else {
            (((struct o3_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 2:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t540 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t540 & 64) == 0)) {
        } else {
            (((struct o4_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C4) - 1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t548 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t548 & 128) == 0)) {
        } else {
            (((struct o4_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C4) + 0x1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C4) < 0) {
            (((struct o4_uchar *)g_keycfg_work)->v) = 0x3;
        }
        if ((int)(*(signed char *)0xC3622C4) <= (int)0x3) {
        } else {
            (((struct o4_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 3:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t561 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t561 & 64) == 0)) {
        } else {
            (((struct o5_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C5) - 1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t569 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t569 & 128) == 0)) {
        } else {
            (((struct o5_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C5) + 0x1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C5) < 0) {
            (((struct o5_uchar *)g_keycfg_work)->v) = 0x3;
        }
        if ((int)(*(signed char *)0xC3622C5) <= (int)0x3) {
        } else {
            (((struct o5_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 4:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t583 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t583 & 64) == 0)) {
        } else {
            (((struct o6_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C6) - 1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t591 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t591 & 128) == 0)) {
        } else {
            (((struct o6_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C6) + 0x1);
            snd_play_side_se(0x0, 0x4C);
        }
        if ((int)(*(signed char *)0xC3622C6) < 0) {
            (((struct o6_uchar *)g_keycfg_work)->v) = 0x1;
        }
        if ((int)(*(signed char *)0xC3622C6) > (int)0x1) {
            (((struct o6_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 5:
        t604 = vib_is_any_active();
        if (t604 != 0) {
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 64) == 0) && (t608 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t608 & 64) == 0)) {
            } else {
                (((struct o7_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C7) - 1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 128) == 0) && (t613 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t613 & 128) == 0)) {
            } else {
                (((struct o7_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C7) + 0x1);
                snd_play_side_se(0x0, 0x4C);
            }
            if ((int)(*(signed char *)0xC3622C7) < 0) {
                (((struct o7_uchar *)g_keycfg_work)->v) = 0x1;
            }
            if ((int)(*(signed char *)0xC3622C7) > (int)0x1) {
                (((struct o7_uchar *)g_keycfg_work)->v) = 0x0;
            }
        } else {
            (((struct o1_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622C1) + 0x1);
        }
        break;
    case 6:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t627 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t627 & 4) == 0)) {
        } else {
            snd_play_side_se(0x0, 0x4D);
            (((struct o0_uchar *)g_keycfg_work)->v) = ((*(signed char *)g_keycfg_work) + 0x1);
            (((struct o8_uchar *)g_keycfg_work)->v) = 0x0;
        }
        break;
    case 7:
        if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 4) == 0) && (t635 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t635 & 4) == 0)) {
        } else {
            snd_play_side_se(0x0, 0x4D);
            keycfg_reset_system_settings();
        }
        break;
    }
    keycfg_queue_table_sprite(0x0);
    keycfg_queue_table_sprite(0x1);
    keycfg_queue_table_sprite(0x2);
    keycfg_queue_table_sprite(0x3);
    keycfg_queue_table_sprite(0x4);
    keycfg_queue_table_sprite(0x5);
    keycfg_queue_table_sprite(0x6);
    keycfg_queue_table_sprite(0x7);
    keycfg_queue_table_sprite(0x8);
    t728 = vib_is_any_active();
    if (t728 != 0) {
        keycfg_queue_table_sprite(0x9);
    }
    keycfg_queue_table_sprite(0xA);
    keycfg_queue_table_sprite(0xB);
    keycfg_queue_table_sprite(0xC);
    keycfg_queue_table_sprite(0xD);
    keycfg_queue_table_sprite(0xE);
    keycfg_queue_table_sprite(0xF);
    keycfg_queue_table_sprite(0x3D);
    keycfg_queue_table_sprite(0x3E);
    u741 = *(float *)((0xC11B6E4 + ((*(signed char *)0xC3622CC) << 2)));
    t742 = *(signed char *)0xC3622C1;
    *(unsigned char *)(((int)stk + 0)) = t742;
    keycfg_queue_table_sprite_scaled(((*(signed char *)(((int)stk + 0))) + 0x35), (*(float *)((0xC11B6C4 + (t742 << 2)))), u741);
    (((struct oD_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CD) + 0x1);
    (((struct oD_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CD) & 0x1);
    if ((*(signed char *)0xC3622CD) == 0) {
        (((struct oC_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CC) + 0x1);
        (((struct oC_uchar *)g_keycfg_work)->v) = ((*(signed char *)0xC3622CC) & 0xF);
    }
    t754 = 0x25;
    if ((int)(*(signed char *)0xC3622C2) >= 0) {
        t754 = 0x1D;
    }
    keycfg_queue_table_sprite(t754);
    t758 = 0x26;
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x1) {
        t758 = 0x1E;
    }
    keycfg_queue_table_sprite(t758);
    t762 = 0x27;
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x2) {
        t762 = 0x1F;
    }
    keycfg_queue_table_sprite(t762);
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x3) {
        keycfg_queue_table_sprite(0x20);
    } else {
        keycfg_queue_table_sprite(0x28);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x4) {
        keycfg_queue_table_sprite(0x21);
    } else {
        keycfg_queue_table_sprite(0x29);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x5) {
        keycfg_queue_table_sprite(0x22);
    } else {
        keycfg_queue_table_sprite(0x2A);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x6) {
        keycfg_queue_table_sprite(0x23);
    } else {
        keycfg_queue_table_sprite(0x2B);
    }
    if ((int)(*(signed char *)0xC3622C2) >= (int)0x7) {
        keycfg_queue_table_sprite(0x24);
    } else {
        keycfg_queue_table_sprite(0x2C);
    }
    keycfg_queue_table_sprite(((*(signed char *)0xC3622C3) + 0x10));
    keycfg_queue_table_sprite(((*(signed char *)0xC3622C4) + 0x15));
    t795 = 0x31;
    if ((int)(*(signed char *)0xC3622C5) >= 0) {
        t795 = 0x2D;
    }
    keycfg_queue_table_sprite(t795);
    t799 = 0x32;
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x1) {
        t799 = 0x2E;
    }
    keycfg_queue_table_sprite(t799);
    t803 = 0x33;
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x2) {
        t803 = 0x2F;
    }
    keycfg_queue_table_sprite(t803);
    if ((int)(*(signed char *)0xC3622C5) >= (int)0x3) {
        keycfg_queue_table_sprite(0x30);
    } else {
        keycfg_queue_table_sprite(0x34);
    }
    keycfg_queue_table_sprite(((*(signed char *)0xC3622C6) + 0x19));
    t813 = vib_is_any_active();
    if (t813 != 0) {
        keycfg_queue_table_sprite(((*(signed char *)0xC3622C7) + 0x1B));
    }
    t821 = 0x20;
    if ((((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) && (t819 = (((struct o14_short *)0xC361BFC)->v), ((unsigned short)t819 & 0x8) == 0)) {
    } else {
        t821 = snd_play_side_se(0x0, 0x4D);
        (((struct o0_uchar *)g_keycfg_work)->v) = 0xFFFFFFFF;
    }
    return t821;
}

int keycfg_edit_button_value(int obj, int arg1)
{
    register int tmp0;
    register int tmp1;

    tmp0 = *(signed char *)((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x1));
    if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((tmp0 << 2) + tmp0) << 2)))) & 64) != 0) {
        *(unsigned char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0)) = ((*(signed char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0))) - 1);
        snd_play_side_se(0x0, 0x4C);
    }
    tmp0 = *(signed char *)((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x1));
    tmp1 = *(short *)((0xC361BFC + (signed char)(((tmp0 << 2) + tmp0) << 2)));
    tmp0 = (unsigned short)tmp1;
    if (((unsigned short)tmp1 & 128) != 0) {
        *(unsigned char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0)) = ((*(signed char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0))) + 0x1);
        tmp0 = (snd_play_side_se(0x0, 0x4C));
    }
    if ((int)(*(signed char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0))) < 0) {
        *(unsigned char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0)) = 0x8;
    }
    if ((int)(*(signed char *)((((((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)arg1) + 0x0))) > (int)0x8) {
        *(unsigned char *)((((signed char)arg1 + (((((signed char)obj << 2) << 2) + 0xC3622EA) + 0x4)) + 0x0)) = 0x0;
    }
    return tmp0;
}

int keycfg_load_settings_to_screen(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC7F470C;
    (((struct o0_uchar *)0xC3622C2)->v) = t0;
    (((struct o12_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470D;
    (((struct o1_uchar *)0xC3622C2)->v) = t0;
    (((struct o13_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470E;
    (((struct o2_uchar *)0xC3622C2)->v) = t0;
    (((struct o14_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F470F;
    (((struct o3_uchar *)0xC3622C2)->v) = t0;
    (((struct o15_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F4710;
    (((struct o4_uchar *)0xC3622C2)->v) = t0;
    (((struct o16_uchar *)0xC3622C2)->v) = t0;
    t0 = *(signed char *)0xC7F4711;
    (((struct o5_uchar *)0xC3622C2)->v) = t0;
    (((struct o17_uchar *)0xC3622C2)->v) = t0;
    t0 = 0x0;
    for (;;) {
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((((0xC7F4714 + ((t0 << 2) << 1)) + t2) + 0x0));
            *(unsigned char *)(((((0xC3622EA + ((t0 << 2) << 2)) + 0x4) + t2) + 0x0)) = t3;
            *(unsigned char *)((t2 + (0xC3622DA + ((t0 << 2) << 1)))) = t3;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        t1 = (0xC3622DA + ((t0 << 2) << 1));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int keycfg_commit_screen_to_settings(void)
{
    register int t6;
    register int t8;
    register int t14;

    (((struct o0_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C2);
    (((struct o1_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C3);
    (((struct o2_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C4);
    (((struct o3_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C5);
    (((struct o4_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C6);
    (((struct o5_uchar *)0xC7F470C)->v) = (*(signed char *)0xC3622C7);
    t6 = 0x0;
    for (;;) {
        t8 = 0x0;
        for (;;) {
            *(unsigned char *)((t8 + (0xC7F4714 + ((t6 << 2) << 1)))) = (*(signed char *)(((((0xC3622EA + ((t6 << 2) << 2)) + 0x4) + t8) + 0x0)));
            t8 = (t8 + 0x1);
            if ((int)t8 >= (int)0x8) {
                break;
            }
        }
        t14 = (0xC7F4714 + ((t6 << 2) << 1));
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x2) {
            break;
        }
    }
    return t14;
}

int keycfg_reset_system_settings(void)
{
    register int t6;

    opt_reset_system_settings();
    (((struct o0_uchar *)0xC3622C2)->v) = (*(signed char *)0xC7F2F11);
    (((struct o1_uchar *)0xC3622C2)->v) = (*(signed char *)0xC7F2F18);
    (((struct o2_uchar *)0xC3622C2)->v) = (*(signed char *)0xC7F2F14);
    (((struct o3_uchar *)0xC3622C2)->v) = (*(signed char *)0xC7F2F12);
    (((struct o4_uchar *)0xC3622C2)->v) = (*(signed char *)0xC7F2F0E);
    t6 = *(signed char *)g_vib_disabled;
    (((struct o5_uchar *)0xC3622C2)->v) = t6;
    return t6;
}

int keycfg_reset_player_keys(int a4)
{
    register int t2;
    register int t3;
    register int t4;

    opt_reset_key_config((signed char)a4);
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t2 + (((int)g_key_config) + (((signed char)a4 << 2) << 1))));
        t4 = (((0xC3622EA + (((signed char)a4 << 2) << 2)) + 0x4) + t2);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t4 + 0x0)) = t3;
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return (((int)g_key_config) + (((signed char)a4 << 2) << 1));
}

int keycfg_settings_changed(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;
    register int t9;

    if (((*(signed char *)0xC3622D4) == (*(signed char *)0xC3622C2)) && ((t0 = *(signed char *)0xC3622D5, t1 = *(signed char *)0xC3622C3, t0 == t1) && ((t2 = *(signed char *)0xC3622D6, t3 = *(signed char *)0xC3622C4, t2 == t3) && ((t4 = *(signed char *)0xC3622D7, t5 = *(signed char *)0xC3622C5, t4 == t5) && ((t6 = *(signed char *)0xC3622D8, t7 = *(signed char *)0xC3622C6, t6 == t7) && (t8 = *(signed char *)0xC3622D9, t9 = *(signed char *)0xC3622C7, t8 == t9)))))) {
        for (;;) {
            if ((int)0x0 >= (int)0x2) {
                return 0x0;
            }
            t0 = 0x0;
            t1 = 0x0;
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                if ((*(signed char *)((t0 + (0xC3622DA + t2)))) != (*(signed char *)(((((0xC3622EA + t3) + 0x4) + t0) + 0x0)))) {
                    break;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    t1 = (t1 + 0x1);
                    t0 = 0x2;
                    if ((int)t1 >= (int)t0) {
                        return 0x0;
                    }
                    t2 = t1;
                    t3 = t1;
                    t3 = (t3 << 2);
                    t0 = 0x0;
                    t2 = (t2 << 2);
                    t3 = (t3 << 2);
                    t2 = (t2 << 1);
                    continue;
                }
            }
            break;
        }
    }
    return 0x1;
}

int keycfg_tick_destroy_if_masked(int a4)
{
    register int t0;

    t0 = keycfg_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int FUN_0c0187a8(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC018776;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_key_cfg), 0x1A);
    }
    return t0;
}

int FUN_0c018b96(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t31;
    register float u6;
    register int t8;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x8);
    t31 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC018830;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 4)));
        u6 = -160.0f;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
        } else {
            u6 = (*(float *)0xC018D5C);
        }
        (((struct o20_float *)(t0))->v) = u6;
        t8 = 0x0;
        t9 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x1)) = 0x0;
            t9 = (t9 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x2)) = 0x40F;
            (((struct o40_float *)((*(int *)((((0x2E0 + t0) + t8) + 0x0)))))->v) = 1.0f;
            t8 = (t8 + 0x4);
            if ((int)t9 >= (int)0x8) {
                break;
            }
        }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_key_cfg), 0x1);
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((int)g_res_key_cfg), 0x2);
        FUN_0c06233a(((((struct o2E8_int *)(t0))->v)), ((int)g_res_key_cfg), 0x3);
        FUN_0c06233a(((((struct o2EC_int *)(t0))->v)), ((int)g_res_key_cfg), 0x4);
        FUN_0c06233a(((((struct o2F0_int *)(t0))->v)), ((int)g_res_key_cfg), 0x5);
        FUN_0c06233a(((((struct o2F4_int *)(t0))->v)), ((int)g_res_key_cfg), 0x6);
        FUN_0c06233a(((((struct o2F8_int *)(t0))->v)), ((int)g_res_key_cfg), 0x0);
        t31 = (FUN_0c06233a(((((struct o2FC_int *)(t0))->v)), ((int)g_res_key_cfg), 0x0));
    }
    return t31;
}

int FUN_0c018cca(int a4)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t17;
    register int t20;
    register int t82;
    register int t83;
    register int t84;
    register int t92;
    register int t93;
    register int t94;
    register int t100;

    t0 = *(signed char *)((a4 + 0x3));
    if ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) != (*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3)))) {
        t3 = *(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3));
        *(unsigned char *)(((int)stk + 0)) = t3;
        FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + a4)) + 0x0))), ((int)g_res_key_cfg), (*(signed char *)((((signed char)t3 << 1) + 0xC11B774))));
        (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x3))) << 2))))))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x8)) = 0x0;
    }
    t17 = *(signed char *)((a4 + 0x8));
    switch (t17) {
    case 0:
        if ((int)(*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) >= (int)0x6) {
            *(unsigned char *)((a4 + 0x8)) = 0xFFFFFFFF;
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = 1.0f;
        } else {
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = 0.0f;
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = (*(float *)(((((((struct oEC_short *)(a4))->v)) << 2) + 0xC11B724)));
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
            if (((((struct oEC_short *)(a4))->v)) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            }
        }
        break;
    case 1:
        (((struct o40_float *)((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2))) << 2))))))->v) = (*(float *)(((((((struct oEC_short *)(a4))->v)) << 2) + 0xC11B724)));
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) & 0xF);
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        break;
    case 2:
        *(unsigned char *)((a4 + 0xF)) = ((-(*(signed char *)((a4 + 0xF)))) + 0x1);
        t20 = *(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x2));
        *(unsigned char *)(((int)stk + 0)) = t20;
        FUN_0c06231c((*(int *)(((((*(signed char *)(((int)stk + 0))) << 2) + (0x2E0 + a4)) + 0x0))), ((int)g_res_key_cfg), (*(signed char *)(((((signed char)t20 << 1) + (*(signed char *)((a4 + 0xF)))) + 0xC11B774))));
        *(unsigned char *)((a4 + 0x8)) = 0x0;
        break;
    }
    if ((*(signed char *)(((0xC3622EA + (((signed char)t0 << 2) << 2)) + 0x0))) == 0) {
        t82 = (0x2E0 + a4);
        t83 = 0x0;
        for (;;) {
            t84 = *(int *)((t82 + 0x0));
            t82 = (t82 + 0x4);
            t83 = (t83 + 0x1);
            (((struct o40_float *)(t84))->v) = 0.5f;
            if ((int)t83 >= (int)0x7) {
                break;
            }
        }
    }
    if (((*(signed char *)(((((signed char)t0 << 2) << 2) + 0xC3622EA))) - (*(signed char *)((a4 + 0xE)))) == 1) {
        t92 = (0x2E0 + a4);
        t93 = 0x0;
        for (;;) {
            t94 = *(int *)((t92 + 0x0));
            t92 = (t92 + 0x4);
            t93 = (t93 + 0x1);
            (((struct o40_float *)(t94))->v) = 1.0f;
            if ((int)t93 >= (int)0x7) {
                break;
            }
        }
    }
    *(unsigned char *)((a4 + 0xE)) = (*(signed char *)(((((signed char)t0 << 2) << 2) + 0xC3622EA)));
    t100 = keycfg_obj_in_mask(a4);
    if ((signed char)t100 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t100;
}

int FUN_0c018ed0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t31;
    register float u5;
    register int t7;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x8);
    t31 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC018CCA;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 4)));
        u5 = 160.0f;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            u5 = -160.0f;
        }
        (((struct o20_float *)(t0))->v) = u5;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x1)) = 0x0;
            t8 = (t8 + 0x1);
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t7) + 0x0))) + 0x2)) = 0x40F;
            (((struct o40_float *)((*(int *)((((0x2E0 + t0) + t7) + 0x0)))))->v) = 1.0f;
            t7 = (t7 + 0x4);
            if ((int)t8 >= (int)0x8) {
                break;
            }
        }
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_key_cfg), 0xE);
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((int)g_res_key_cfg), 0xF);
        FUN_0c06233a(((((struct o2E8_int *)(t0))->v)), ((int)g_res_key_cfg), 0x10);
        FUN_0c06233a(((((struct o2EC_int *)(t0))->v)), ((int)g_res_key_cfg), 0x11);
        FUN_0c06233a(((((struct o2F0_int *)(t0))->v)), ((int)g_res_key_cfg), 0x12);
        FUN_0c06233a(((((struct o2F4_int *)(t0))->v)), ((int)g_res_key_cfg), 0x13);
        FUN_0c06233a(((((struct o2F8_int *)(t0))->v)), ((int)g_res_key_cfg), 0xD);
        FUN_0c06233a(((((struct o2FC_int *)(t0))->v)), ((int)g_res_key_cfg), 0xD);
        *(unsigned char *)((((((struct o2FC_int *)(t0))->v)) + 0x0)) = 0x0;
        t31 = 0x2FC;
    }
    return t31;
}

int FUN_0c01901c(int a4)
{
    register int t0;

    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xD))) == 0) {
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x4))) + 0x1E));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x5))) + 0x1E));
        FUN_0c06231c(((((struct o2E8_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x6))) + 0x1E));
        FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x7))) + 0x1E));
        FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x8))) + 0x1E));
        t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x9)));
    } else {
        FUN_0c06231c(((((struct o2E0_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x4))) + 0x1E));
        FUN_0c06231c(((((struct o2E4_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x5))) + 0x1E));
        FUN_0c06231c(((((struct o2E8_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xA))) + 0x1E));
        FUN_0c06231c(((((struct o2EC_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x6))) + 0x1E));
        FUN_0c06231c(((((struct o2F0_int *)(a4))->v)), ((int)g_res_key_cfg), ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x7))) + 0x1E));
        t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0xB)));
    }
    FUN_0c06231c(((((struct o2F4_int *)(a4))->v)), ((int)g_res_key_cfg), (t0 + 0x1E));
    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = 0.5f;
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = keycfg_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int FUN_0c019204(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t24;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t17;
    register int t20;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x6);
    t24 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC01901C;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 4)));
        (((struct o5C_float *)(t0))->v) = 1.0f;
        t3 = 0x0;
        t4 = (0x2E0 + t0);
        t5 = 0xC11B784;
        t6 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t6) + 0x0))), ((int)g_res_key_cfg), 0x1E);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x1)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + t6) + 0x0))) + 0x2)) = 0xF;
            (((struct o4_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = (*(float *)((t5 + 0x0)));
            (((struct o8_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = ((((struct o4_float *)(t5))->v));
            (((struct oC_float *)((*(int *)((((0x2E0 + t0) + t6) + 0x0)))))->v) = 0.0f;
            t17 = *(signed char *)(((int)stk + 0));
            t3 = (t3 + 0x1);
            t20 = t17;
            if (t17 == 1) {
                t18 = *(int *)((t4 + 0x0));
                (((struct o4_float *)(t18))->v) = (((((struct o4_float *)(t18))->v)) + 320.0f);
                t20 = 0x4;
            }
            t4 = (t4 + 0x4);
            t5 = (t5 + 0x8);
            t6 = (t6 + 0x4);
            if ((int)t3 >= (int)0x6) {
                break;
            }
        }
        t24 = t20;
    }
    return t24;
}

int FUN_0c019334(int a4)
{
    register int t0;

    t0 = *(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x2));
    (((struct o20_float *)(a4))->v) = (*(float *)((((((signed char)t0 << 1) << 2) + 0xC11B784) + 0x0)));
    (((struct o24_float *)(a4))->v) = ((((struct o4_float *)(((((signed char)t0 << 1) << 2) + 0xC11B784)))->v));
    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC01946C);
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t0 = keycfg_obj_in_mask(a4);
    if ((signed char)t0 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t0;
}

int FUN_0c0193b2(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t17;
    register int t8;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC019334;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 4)));
        (((struct o5C_float *)(t0))->v) = 1.0f;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_key_cfg), 0x1D);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t8 = *(signed char *)(((int)stk + 0));
        t17 = t8;
        if (t8 == 1) {
            t9 = (((struct o2E0_int *)(t0))->v);
            (((struct o4_float *)(t9))->v) = (((((struct o4_float *)(t9))->v)) + 320.0f);
            t17 = 0x4;
        }
    }
    return t17;
}

int FUN_0c019488(int a4)
{
    register int t11;

    if ((*(signed char *)((((((*(signed char *)((a4 + 0x3))) << 2) << 2) + 0xC3622EA) + 0x0))) == 0) {
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0195C4);
    }
    if ((*(signed char *)((0xC3622EA + (((*(signed char *)((a4 + 0x3))) << 2) << 2)))) == 1) {
        (((struct o5C_float *)(a4))->v) = 1.0f;
    }
    t11 = keycfg_obj_in_mask(a4);
    if ((signed char)t11 != 0) {
        return obj_destroy(a4);
    }
    return (signed char)t11;
}

int FUN_0c0194dc(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t13;
    register float u5;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x1);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC019488;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = a4;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct oF2_ushort *)(t0))->v) = (*(short *)(((int)stk + 0)));
        (((struct o5C_float *)(t0))->v) = 1.0f;
        if ((signed char)a4 == 0) {
            u5 = ((((struct o0_float *)0xC0195D4)->v));
        } else {
            u5 = ((((struct o4_float *)0xC0195D4)->v));
        }
        (((struct o20_float *)(t0))->v) = u5;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_key_cfg), ((*(signed char *)(((((signed char)a4 << 2) << 2) + 0xC3622F7))) + 0x1B));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t13 = 0xF;
    }
    return t13;
}

int keycfg_obj_in_mask(int a4)
{
    if ((((((struct oF2_short *)(a4))->v)) & (*(short *)0xC3622D0)) != 0) {
        return 0x1;
    }
    return 0x0;
}
