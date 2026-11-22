/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0e6364(int);
int FUN_0c0e6478(int);
int FUN_0c0e6620(int);
int FUN_0c0e6726(int, int, int);
int FUN_0c0e6a84(int, int, int);
int FUN_0c0f9c20(int, int);
int FUN_0c0fa42e(int, int, int, int, int);
int FUN_0c0fa540(int, int, int, int, int, int);
int FUN_0c0fa6c0(int);
int FUN_0c0fa8c0(int);
int FUN_0c0fa966(int, int, int, int, int, int, int);
int FUN_0c0fac00(int);
int FUN_0c0fae0e(void);
int FUN_0c103f6c(int, int);
int FUN_0c10489c(int, int);
int FUN_0c1048e6(int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107482(int);
int FUN_0c109440(int, int, int);
int FUN_0c10bc80(int, int, int);
int FUN_0c114b10(int);
int FUN_0c114b78(void);
int FUN_0c114c70(int);
int FUN_0c114ef4(int, int);
int gfx_set_frame_buffer_size(int, int, int);
int kmi_init_vram_layout(void);
int kmi_set_system_config(int, int, int, int, int);
int memset(int, int, int);
extern int mwRnaErrCallFunc();
int nl_mesh_set_texture(int, int);
int vmsfs_fclose(int, int, int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_xwrite1(int, int);
int FUN_0c0f9d00(int a4);
int FUN_0c114bae(int a4, int a5, int a6, int a7);
int vmsfs_fwrite(int a4, int a5, int a6);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int nl_sprite_record_build(int a4, int a5);
int nl_sprite_record_alloc(void);
int FUN_0c10735c(int a4, int a5, int a6, int a7);
int FUN_0c108010(int a4, int a5, int a6, int a7);
int FUN_0c104962(int a4, int a5, int a6);
int FUN_0c10435a(int a4, int a5, int a6, int a7);
int FUN_0c114fcc(int a4, int a5, int a6);

int FUN_0c0f9d00(int a4)
{
    int stk[29];
    register int t27;
    register int t37;
    register int t45;
    register int t55;
    register int t61;
    register int t58;
    register int t63;
    register int t66;
    register int t64;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register float u73;
    register int t76;
    register int t77;
    register int t78;
    register int t79;
    register float u80;
    register int t82;
    register int t83;
    register int t84;
    register int t85;
    register float u86;
    register int t93;
    int t94;
    register int t95;
    register int t96;
    register int t97;
    register int t98;
    register float u101;
    register int t116;
    register int t117;
    register int t118;
    register int t119;
    register int t121;
    register int t122;
    register int t126;
    register int t130;
    register int t134;
    register int t153;
    register int t154;
    register int t138;
    register int t139;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register int t164;
    register int t165;
    register int t168;
    register int t169;
    register int t170;
    register int t171;
    register int t192;
    register int t204;
    register int t205;
    register int t207;
    register int t212;
    register int t217;
    register int t219;
    register int t230;
    register int t231;
    register int t232;
    register int t233;
    register int t236;
    register int t248;
    register int t252;
    register int t253;
    register int t266;
    register int t277;
    register int t288;
    register int t328;
    register int t290;
    register int t292;
    int t293;
    register float u72;
    register int t88;
    register int t89;
    register float u92;
    register float u100;
    int t112;
    register int t120;
    register int t249;
    register int t250;
    register int t251;

    *(unsigned int *)(((int)stk + 20)) = 0x2;
    kmi_init_vram_layout();
    FUN_0c0fae0e();
    (((struct o14_uint *)0xC803DB8)->v) = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 32) != 0) {
        *(unsigned int *)(((int)stk + 44)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x1;
    }
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 24)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        (((struct o0_uint *)0xC8173E8)->v) = 0x0;
    } else {
        (((struct o0_uint *)0xC8173E8)->v) = 0x1;
    }
    gfx_set_frame_buffer_size(0xFF, (*(int *)(((int)stk + 24))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        (((struct o0_uint *)0xC8173E8)->v) = 0x1;
        (((struct o4_uint *)0xC3471D0)->v) = 0x1;
        (((struct o20_uint *)0xC8172FC)->v) = ((((struct o18_int *)0xC8172FC)->v));
        *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = 0x2;
        *(unsigned int *)0xC8171CC = 0x0;
        (((struct o30_uint *)0xC8172FC)->v) = 0x1;
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 12) + 0x24);
        *(unsigned int *)(((((int)stk + 12) + 0x24) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0)) = (0x2 & (*(int *)(((*(int *)((a4 + 0x20))) + 0x10))));
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 12) + 0x24) + 0x8);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x4);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 12) + 0x24) + 0xC);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0xC) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x8);
        t27 = *(int *)(((*(int *)((a4 + 0x20))) + 0x10));
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x10) + 0x0)) = (t27 & 0x10);
        *(int *)((int)stk + 8) = (t27 & 0x10);
        FUN_0c0fa42e((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (t27 & 0x10));
        *(int *)((int)stk + 4) = 0x1;
        t37 = (*(int *)((((((int)stk + 12) + 0x24) + 0x10) + 0x0)));
        *(int *)((int)stk + 0) = t37;
        t45 = FUN_0c0fa540((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), t37, 0x1);
        *(unsigned int *)(((int)stk + 16)) = t45;
        FUN_0c0fa8c0(t45);
    } else {
        (((struct o4_uint *)0xC3471D0)->v) = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            (((struct o0_uint *)0xC8172FC)->v) = 0x1;
            (((struct o0_uint *)0xC8173E8)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC8172FC)->v) = 0x0;
        }
        FUN_0c0f9c20(((((struct o0_int *)0xC8172FC)->v)), ((((struct o5C_int *)(a4))->v)));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x28)));
        (((struct o10_uint *)0xC8173E8)->v) = (*(int *)((a4 + 0x24)));
        t55 = (((struct o10_int *)0xC8173E8)->v);
        t61 = t55;
        if ((t55 & 0x1F) != 0) {
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) - ((-(((((struct o10_int *)0xC8173E8)->v)) & 0x1F)) + 0x20));
            t58 = (((struct o10_int *)0xC8173E8)->v);
            (((struct o10_uint *)0xC8173E8)->v) = ((t58 + 0x1F) & 0xFFFFFFE0);
            t61 = ((t58 + 0x1F) & 0xFFFFFFE0);
        }
        t63 = (((struct o0_int *)0xC8172FC)->v);
        t66 = t63;
        if (t63 == 0) {
            t64 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned int)t64 >> 1);
            t66 = ((unsigned int)t64 >> 1);
        }
        t68 = (((int)stk + 12) + 0x40);
        t69 = 0x0;
        for (;;) {
            if ((unsigned int)t69 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)((t68 + 0x0)) = 0x0;
            t68 = (t68 + 0x4);
            t69 = (t69 + 0x1);
        }
        t70 = 0x5;
        t71 = (a4 + 0x2C);
        u73 = 0.0f;
        for (;;) {
            if (t70 == 0) {
                break;
            }
            u72 = (*(float *)((t71 + 0x0)));
            t71 = (t71 + 0x4);
            t70 = (t70 - 1);
            u73 = (u73 + u72);
        }
        if (u73 > 100.0f) {
            t76 = 0xC0F9F00;
            t77 = t61;
            t78 = 0x0;
            t79 = 0x0;
            u80 = u72;
            for (;;) {
                if ((unsigned int)t79 >= (unsigned int)0x5) {
                    break;
                }
                t77 = a4;
                t77 = (t77 + 0x2C);
                t77 = (t77 + t78);
                t76 = t78;
                u80 = (*(float *)((t77 + 0x0)));
                t78 = (t78 + 0x4);
                t79 = (t79 + 0x1);
                u80 = (u80 * 100.0f);
                u80 = (u80 / u73);
                *(float *)(((((int)stk + 12) + 0x54) + t76)) = u80;
            }
            t88 = t76;
            t89 = t77;
            u92 = u80;
        } else {
            t82 = 0xC0F9F00;
            t83 = t61;
            t84 = 0x0;
            t85 = 0x0;
            u86 = u72;
            for (;;) {
                if ((unsigned int)t85 >= (unsigned int)0x5) {
                    break;
                }
                t83 = a4;
                t83 = (t83 + 0x2C);
                t83 = (t83 + t84);
                t82 = t84;
                u86 = (*(float *)((t83 + 0x0)));
                t84 = (t84 + 0x4);
                t85 = (t85 + 0x1);
                *(float *)(((((int)stk + 12) + 0x54) + t82)) = u86;
            }
            t88 = t82;
            t89 = t83;
            u92 = u86;
        }
        t93 = t88;
        t94 = 0xC8173F8;
        t95 = t66;
        t96 = t89;
        t97 = 0x0;
        t98 = 0x0;
        u101 = u92;
        for (;;) {
            if ((unsigned int)t98 >= (unsigned int)0x5) {
                break;
            }
            t95 = (*(int *)(((int)stk + 16)));
            t93 = t97;
            u101 = (*(float *)(((((int)stk + 12) + 0x54) + t93)));
            t96 = t97;
            t96 = (t96 + (((int)stk + 12) + 0x40));
            u100 = (float)t95;
            if ((int)t95 < 0) {
                t94 = 0x4F800000;
                u100 = (u100 + ((*(float *)&(t94))));
            }
            u101 = (u101 * u100);
            t94 = 0x4F000000;
            u101 = (u101 / 100.0f);
            u100 = (*(float *)&(t94));
            if (!(u100 > u101)) {
                u100 = (u100 + u100);
                u101 = (u101 - u100);
            }
            t94 = 0xFFFFFFF8;
            t97 = (t97 + 0x4);
            t98 = (t98 + 0x1);
            t95 = (int)u101;
            t95 = (t95 & t94);
            *(unsigned int *)((t96 + 0x0)) = t95;
        }
        t116 = (((struct o0_int *)0xC816FC8)->v);
        if (((t116 & 64) != 0) && (t112 = (((struct o40_int *)(((int)stk + 12)))->v), (unsigned int)t112 < (unsigned int)0x38)) {
            (((struct o40_uint *)(((int)stk + 12)))->v) = (((((struct o40_int *)(((int)stk + 12)))->v)) + 0x38);
        }
        t117 = 0x0;
        t118 = 0xFFFFFFFF;
        t119 = 0x0;
        t121 = t120;
        for (;;) {
            *(unsigned int *)(((int)stk + 12)) = ((t117 << 2) + (((int)stk + 12) + 0x40));
            t122 = *(int *)((((t117 << 2) + (((int)stk + 12) + 0x40)) + 0x0));
            t119 = (t119 + t122);
            if ((int)t122 > (int)t118) {
                t116 = t117;
                t116 = (t116 << 2);
                t118 = (*(int *)(((((int)stk + 12) + 0x40) + t116)));
                t121 = t117;
            }
            t117 = (t117 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((t117 << 2) + (((int)stk + 12) + 0x40));
            t126 = *(int *)((((t117 << 2) + (((int)stk + 12) + 0x40)) + 0x0));
            t119 = (t119 + t126);
            if ((int)t126 > (int)t118) {
                t116 = t117;
                t116 = (t116 << 2);
                t118 = (*(int *)(((((int)stk + 12) + 0x40) + t116)));
                t121 = t117;
            }
            t117 = (t117 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((t117 << 2) + (((int)stk + 12) + 0x40));
            t130 = *(int *)((((t117 << 2) + (((int)stk + 12) + 0x40)) + 0x0));
            t119 = (t119 + t130);
            if ((int)t130 > (int)t118) {
                t116 = t117;
                t116 = (t116 << 2);
                t118 = (*(int *)(((((int)stk + 12) + 0x40) + t116)));
                t121 = t117;
            }
            t117 = (t117 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((t117 << 2) + (((int)stk + 12) + 0x40));
            t134 = *(int *)((((t117 << 2) + (((int)stk + 12) + 0x40)) + 0x0));
            t119 = (t119 + t134);
            if ((int)t134 > (int)t118) {
                t116 = t117;
                t116 = (t116 << 2);
                t118 = (*(int *)(((((int)stk + 12) + 0x40) + t116)));
                t121 = t117;
            }
            t117 = (t117 + 0x1);
            if ((unsigned int)t117 >= (unsigned int)0x1) {
                break;
            }
        }
        t153 = t119;
        t154 = t121;
        if ((unsigned int)t117 < (unsigned int)0x5) {
            t138 = t116;
            t139 = t117;
            t140 = t118;
            t141 = t119;
            t142 = t121;
            for (;;) {
                *(unsigned int *)(((int)stk + 12)) = ((t139 << 2) + (((int)stk + 12) + 0x40));
                t143 = *(int *)((((t139 << 2) + (((int)stk + 12) + 0x40)) + 0x0));
                t141 = (t141 + t143);
                if ((int)t143 > (int)t140) {
                    t138 = t139;
                    t138 = (t138 << 2);
                    t140 = (*(int *)(((((int)stk + 12) + 0x40) + t138)));
                    t142 = t139;
                }
                t139 = (t139 + 0x1);
                if ((unsigned int)t139 >= (unsigned int)0x5) {
                    break;
                }
            }
            t153 = t141;
            t154 = t142;
        }
        if ((unsigned int)t153 > (unsigned int)(*(int *)(((int)stk + 16)))) {
            *(unsigned int *)((((t154 << 2) + (((int)stk + 12) + 0x40)) + 0x0)) = (((*(int *)((((t154 << 2) + (((int)stk + 12) + 0x40)) + 0x0))) - (t153 - (*(int *)(((int)stk + 16))))) & 0xFFFFFFE0);
        }
        t164 = (((struct o40_int *)(((int)stk + 12)))->v);
        t168 = t164;
        if (t164 != 0) {
            t165 = (((struct o40_int *)(((int)stk + 12)))->v);
            (((struct o40_uint *)(((int)stk + 12)))->v) = (t165 - 16);
            t168 = (t165 - 16);
        }
        t169 = ((((int)stk + 12) + 0x40) + 0x4);
        t170 = ((((int)stk + 12) + 0x40) + 0x4);
        t171 = 0x1;
        for (;;) {
            t171 = (t171 + 0x1);
            if ((*(int *)((t170 + 0x0))) != 0) {
                t168 = (*(int *)((t169 + 0x0)));
                t168 = (t168 - 16);
                *(unsigned int *)((t169 + 0x0)) = t168;
            }
            t170 = (t170 + 0x4);
            t169 = (t169 + 0x4);
            if ((*(int *)((t170 + 0x0))) != 0) {
                t168 = (*(int *)((t169 + 0x0)));
                t168 = (t168 - 16);
                *(unsigned int *)((t169 + 0x0)) = t168;
            }
            t170 = (t170 + 0x4);
            t171 = (t171 + 0x1);
            t169 = (t169 + 0x4);
            if ((*(int *)((t170 + 0x0))) != 0) {
                t168 = (*(int *)((t169 + 0x0)));
                t168 = (t168 - 16);
                *(unsigned int *)((t169 + 0x0)) = t168;
            }
            t170 = (t170 + 0x4);
            t171 = (t171 + 0x1);
            t169 = (t169 + 0x4);
            if ((*(int *)((t170 + 0x0))) != 0) {
                t168 = (*(int *)((t169 + 0x0)));
                t168 = (t168 - 16);
                *(unsigned int *)((t169 + 0x0)) = t168;
            }
            t171 = (t171 + 0x1);
            t169 = (t169 + 0x4);
            t170 = (t170 + 0x4);
            if ((unsigned int)t171 >= (unsigned int)0x5) {
                break;
            }
        }
        (((struct o0_uint *)0xC803D78)->v) = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 36)) = (((int)stk + 12) + 0x40);
        (((struct o4_uint *)0xC803D78)->v) = ((((struct o40_int *)(((int)stk + 12)))->v));
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 12) + 0x40) + 0x4);
        (((struct o8_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 12) + 0x40) + 0x8);
        (((struct oC_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 12) + 0x40) + 0xC);
        (((struct o10_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 12) + 0x40) + 0x10);
        (((struct o14_uint *)0xC803D78)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x10) + 0x0)));
        t192 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
        *(int *)((int)stk + 8) = t192;
        FUN_0c0fa42e((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), t192);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = ((((struct o38_int *)0xC8173E8)->v));
        t204 = 0xC803E60;
        t205 = 0x0;
        for (;;) {
            if ((unsigned int)t205 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)((t204 + 0x0)) = 0x0;
            t204 = (t204 + 0x4);
            t205 = (t205 + 0x1);
        }
        *(int *)((int)stk + 8) = 0x0;
        t207 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 4) = t207;
        t212 = FUN_0c0fa540(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t207, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t212;
        FUN_0c0fa8c0(t212);
        if (((((struct o0_int *)0xC8172FC)->v)) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
        }
        t217 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 8) = t217;
        *(int *)((int)stk + 4) = 0x0;
        t219 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 0) = t219;
        t230 = FUN_0c0fa966(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t219, 0x0, t217);
        (((struct o28_uint *)0xC803E04)->v) = ((((struct o0_int *)0xC803E04)->v));
        (((struct o2C_uint *)0xC803E04)->v) = ((((struct o4_int *)0xC803E04)->v));
        (((struct o30_uint *)0xC803E04)->v) = ((((struct o8_int *)0xC803E04)->v));
        (((struct o34_uint *)0xC803E04)->v) = ((((struct oC_int *)0xC803E04)->v));
        t231 = (((struct o10_int *)0xC803E04)->v);
        (((struct o38_uint *)0xC803E04)->v) = t231;
        t232 = 0x0;
        t233 = 0x0;
        for (;;) {
            if ((unsigned int)t233 >= (unsigned int)0x5) {
                break;
            }
            t230 = t232;
            t231 = (*(int *)((0xC803E2C + t230)));
            t232 = (t232 + 0x4);
            t233 = (t233 + 0x1);
            *(unsigned int *)((0xC803E40 + t230)) = t231;
        }
        (((struct o28_uint *)0xC803DB8)->v) = 0x0;
        (((struct o2C_uint *)0xC803DB8)->v) = 0x0;
        (((struct o30_uint *)0xC803DB8)->v) = 0x0;
        (((struct o34_uint *)0xC803DB8)->v) = 0x0;
        (((struct o38_uint *)0xC803DB8)->v) = 0xC803E04;
        (((struct o3C_uint *)0xC803DB8)->v) = 0xC803E2C;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 20)))) {
            t236 = 0x0;
            for (;;) {
                *(unsigned int *)(((t236 << 2) + 0xC803DFC)) = ((signed char)(((t236 << 2) + t236) << 2) + 0xC803E04);
                t236 = (t236 + 0x1);
                if ((unsigned int)t236 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                    break;
                }
            }
        }
        t248 = (FUN_0c0fa6c0((*(int *)(((int)stk + 20)))));
        t252 = 0x0;
        t253 = 0x0;
        for (;;) {
            if ((unsigned int)t253 >= (unsigned int)0x5) {
                break;
            }
            t248 = 0xC803E60;
            t253 = (t253 + 0x1);
            t250 = ((((struct o3C_int *)0xC803DB8)->v));
            t251 = (*(int *)((t252 + t248)));
            t250 = (t250 + t252);
            t249 = (*(int *)((t250 + 0x0)));
            t251 = (t251 << 2);
            t252 = (t252 + 0x4);
            t249 = (t249 + t251);
            *(unsigned int *)((t250 + 0x0)) = t249;
        }
    }
    t266 = *(int *)((a4 + 0x1C));
    (((struct o1C_uint *)0xC803DB8)->v) = t266;
    if ((t266 & 7) != 0) {
        (((struct o1C_uint *)0xC803DB8)->v) = ((((((struct o1C_int *)0xC803DB8)->v)) + 0x7) & 0xFFFFFFF8);
    }
    (((struct o18_uint *)0xC803DB8)->v) = ((unsigned int)((((((struct o10_int *)0xC816FC8)->v)) - (((((struct o1C_int *)0xC803DB8)->v)) << 2)) - (((((struct o20_int *)0xC803DB8)->v)) << 1)) >> 1);
    t277 = FUN_0c10bc80(0xC15AA40, 0xC15AA4C, 0x0);
    if (t277 == 1) {
        if ((unsigned int)((((struct o18_int *)0xC803DB8)->v)) > (unsigned int)0x400000) {
            (((struct o18_uint *)0xC803DB8)->v) = 0x400000;
        }
    } else {
        if ((unsigned int)((((struct o18_int *)0xC803DB8)->v)) > (unsigned int)0x200000) {
            (((struct o18_uint *)0xC803DB8)->v) = 0x200000;
        }
    }
    t288 = (((struct o18_int *)0xC803DB8)->v);
    t328 = 0x3;
    if ((unsigned int)t288 < (unsigned int)((((struct o24_int *)0xC803DB8)->v))) {
    } else {
        t290 = FUN_0c109440(t288, (((int)stk + 12) + 0x38), (((int)stk + 12) + 0x3C));
        t328 = t290;
        if (t290 == 0) {
            (((struct o28_uint *)0xC8173E8)->v) = ((((struct o18_int *)0xC803DB8)->v));
            *(int *)((int)stk + 8) = 0x0;
            t292 = *(int *)(((int)stk + 24));
            t293 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 4) = ((~t292) & t293);
            kmi_set_system_config(((unsigned int)((((struct o0_int *)0xC81702C)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC81702C)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC81702C)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC81702C)->v)) >> 7), ((~t292) & t293));
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC8171CC = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC803E2C;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC347090;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC803DE0;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC803DFC;
            (((struct o18_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 24)));
            (((struct o2C_uint *)0xC816FC8)->v) = (*(int *)(((int)stk + 24)));
            (((struct o1C_uint *)0xC803D78)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o20_uint *)0xC803D78)->v) = (*(int *)((a4 + 0x10)));
            (((struct o24_uint *)0xC803D78)->v) = (*(int *)((a4 + 0x14)));
            (((struct o28_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 28)));
            (((struct o2C_uint *)0xC803D78)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o30_uint *)0xC803D78)->v) = (*(int *)((a4 + 0x10)));
            (((struct o34_uint *)0xC803D78)->v) = (*(int *)((a4 + 0x14)));
            (((struct o38_uint *)0xC803D78)->v) = (*(int *)(((int)stk + 28)));
            (((struct o3C_uint *)0xC803D78)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o0_uint *)0xC803DB8)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o4_uint *)0xC803DB8)->v) = (*(int *)(((int)stk + 44)));
            (((struct o0_uint *)0xC3471D0)->v) = 0x80000000;
            t328 = (FUN_0c0fac00(((((struct o14_int *)0xC803DB8)->v))));
        }
    }
    return t328;
}

int FUN_0c114bae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x2)) {
        t0 = FUN_0c114b78();
        if (t0 == 0) {
            t1 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B8A4);
            t1 = 0x0;
        } else {
            *(unsigned short *)((t0 + 0x2)) = (FUN_0c0e6364(a4));
            t2 = *(short *)((t0 + 0x2));
            if (((int)t2 >= 0) && ((int)t2 <= (int)0x7)) {
                t2 = FUN_0c114b10((*(short *)((t0 + 0x2))));
                *(unsigned int *)((t0 + 0x10)) = t2;
                if (t2 == 0) {
                    t2 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B914);
                    FUN_0c0e6478((*(short *)((t0 + 0x2))));
                    t2 = 0x0;
                } else {
                    FUN_0c0e6620((*(int *)(((*(int *)((t0 + 0x10))) + 0x4))));
                    FUN_0c114ef4(t0, 0x0);
                    *(unsigned char *)((t0 + 0x1)) = 0x0;
                    *(unsigned int *)((t0 + 0xC)) = 0x0;
                    *(unsigned int *)((t0 + 0x8)) = a4;
                    *(unsigned int *)((t0 + 0x4)) = a4;
                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B8D8);
                t0 = 0x0;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B874, a5, a6, a7);
        t0 = 0x0;
    }
    return t0;
}

int vmsfs_fwrite(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0xFFFFFF00;
    if (a4 != 0) {
        t1 = 0xFFFFFF01;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        } else {
            t2 = *(int *)((a4 + 0x4));
            if (t2 != 1) {
                t3 = 0xFFFFFF0B;
                if (t2 != 2) {
                } else {
                    t2 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((0xC80DBC8 + (t2 * 0x148)) + 0x30)) = 0x1;
                    *(unsigned int *)(((0xC80DBC8 + (t2 * 0x148)) + 0x34)) = a6;
                    t2 = 0x0;
                    if ((int)a6 > 0) {
                        t4 = 0x0;
                        t5 = a5;
                        for (;;) {
                            t6 = vmsfs_xwrite1(a4, t5);
                            if ((int)t6 < 0) {
                                break;
                            }
                            t4 = (t4 + 0x1);
                            t5 = (t5 + 0x200);
                            if ((int)t4 >= (int)a6) {
                                return 0x0;
                            }
                        }
                        t2 = t6;
                    }
                    t3 = t2;
                }
                t2 = t3;
            } else {
                t3 = *(int *)((a4 + 0x28));
                *(unsigned int *)(((0xC80DBC8 + (t3 * 0x148)) + 0x30)) = 0x1;
                *(unsigned int *)(((0xC80DBC8 + (t3 * 0x148)) + 0x34)) = a6;
                t3 = 0x0;
                if ((int)a6 > 0) {
                    t4 = 0x0;
                    t5 = a5;
                    for (;;) {
                        t6 = vmsfs_fwrite1(a4, t5);
                        if ((int)t6 < 0) {
                            break;
                        }
                        t4 = (t4 + 0x1);
                        t5 = (t5 + 0x200);
                        if ((int)t4 >= (int)a6) {
                            return 0x0;
                        }
                    }
                    t3 = t6;
                }
                t2 = t3;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_5 = a4;
    v0_2 = a5;
    v0_0 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    v0_2 = (v0_5);
    v0_3 = (v0_1);
    if ((v0_1 != 0)) goto L_C1052CA;
    v0_3 = FUN_0c103f6c(v0_2, (*(int *)(((int)stk + 4))));
    v0_5 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C1052C8;
    v0_0 = (v0_5);
    L_C105318:;
    return v0_0;
    L_C1052C8:;
    v0_3 = (v0_5);
    L_C1052CA:;
    v0_4 = vmsfs_fopen(v0_2, (*(int *)(((int)stk + 4))), ((int)stk + 0));
    v0_5 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C105316;
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_2 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    *(unsigned int *)((((v0_2 * 0x148) + 0xC80DBC8) + 0x34)) = v0_3;
    v0_5 = ((v0_2 * 0x148) + 0xC80DBC8);
    v0_2 = (0x0);
    v0_4 = (v0_4);
    v0_5 = v0_5;
    if (((unsigned int)0x0 >= (unsigned int)v0_3)) goto L_C10530C;
    v0_6 = (0x200);
    L_C1052F6:;
    v0_7 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_4);
    v0_5 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C10530E;
    v0_5 = (unsigned int)(v0_2 + 0x1) < (unsigned int)v0_3;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + v0_6));
    if (v0_5) goto L_C1052F6;
    L_C10530C:;
    v0_5 = (0x0);
    L_C10530E:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0, v0_0, v0_1);
    L_C105316:;
    v0_0 = (v0_5);
    goto L_C105318;
}

int nl_sprite_record_build(int a4, int a5)
{
    register int t1;

    *(unsigned int *)((a4 + 0x0)) = 0xA0000009;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x4C0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    nl_mesh_set_texture(a4, a5);
    t1 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    if (((((unsigned int)t1 >> 27) & 0x7) == 0) || (((((unsigned int)t1 >> 27) & 0x7) == 2) || (((((unsigned int)t1 >> 27) & 0x7) == 5) || ((((unsigned int)t1 >> 27) & 0x7) == 6)))) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
    }
    (((struct o18_float *)(a4))->v) = (*(float *)((0xC155AD0 + ((((unsigned int)((unsigned int)(*(int *)((a4 + 0x8))) >> 2) >> 1) & 0x7) << 2))));
    (((struct o1C_float *)(a4))->v) = (*(float *)((0xC155AD0 + (((*(int *)((a4 + 0x8))) & 0x7) << 2))));
    return 0x1C;
}

int nl_sprite_record_alloc(void)
{
    int stk[4];
    register int t5;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)((int)((int)(((((struct o0_int *)0xC7FD048)->v)) + 0x1F) / (int)0x20))) {
            return 0xFFFFFFFF;
        }
        t5 = *(int *)((((*(int *)(((int)stk + 12))) << 2) + ((((struct o4_int *)0xC7FD048)->v))));
        *(unsigned int *)(((int)stk + 4)) = t5;
        if (t5 != -1) {
            break;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    for (;;) {
        if (((*(int *)(((int)stk + 4))) & (*(int *)(((int)stk + 0)))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) << 1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    t12 = *(int *)(((int)stk + 12));
    t13 = (((struct o4_int *)0xC7FD048)->v);
    *(unsigned int *)(((t12 << 2) + t13)) = ((*(int *)(((t12 << 2) + t13))) | (*(int *)(((int)stk + 0))));
    return (((((*(int *)(((int)stk + 12))) << 2) << 2) << 1) + (*(int *)(((int)stk + 8))));
}

int FUN_0c10735c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t8;
    register int t11;
    register int t12;
    register int t6;
    register int t7;

    if (a4 == 0) {
        return (((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7));
    }
    FUN_0c1070a0(((int)stk + 0));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        FUN_0c107482(a4);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
            break;
        }
        t6 = t8;
        t6 = (t6 << 2);
        t7 = a4;
        t7 = (t7 + 0x10);
        t6 = (t6 + t7);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
    }
    t11 = FUN_0c114c70(((((struct o40_int *)(a4))->v)));
    if (t11 != 0) {
        t12 = ((int (*)(int))(mwRnaErrCallFunc))(0xC15B344);
    }
    memset(a4, 0x0, 0x8C);
    return (FUN_0c1070b8(((int)stk + 0)));
}

int FUN_0c108010(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC15B31C, a5, a6, a7);
    }
    if ((int)a5 >= 0) {
        (((struct o60_uint *)(a4))->v) = 0x0;
        t0 = 0x0;
    } else {
        if ((int)a5 <= (int)0xFFFFFC19) {
            (((struct o60_uint *)(a4))->v) = 0xFFFFFC19;
            t1 = 0xFF;
        } else {
            (((struct o60_uint *)(a4))->v) = a5;
            t1 = ((int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC19));
        }
        t0 = t1;
    }
    t1 = FUN_0c114ef4(((((struct o40_int *)(a4))->v)), t0);
    if (t1 != 0) {
        return ((int (*)(int))(mwRnaErrCallFunc))(0xC15B45C);
    }
    return t1;
}

int FUN_0c104962(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28)));
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t2 = *(signed char *)((t1 + 0x0));
        if (((unsigned char)t2 != 51) && ((unsigned char)t2 != 0xCC)) {
            
            t1 = (t1 + 0x20);
            t0 = (t0 + 0x1);
            continue;
        }
        t2 = FUN_0c10489c(a5, (t1 + 0x4));
        if (t2 != 0) {
            break;
        }
        t1 = (t1 + 0x20);
        t0 = (t0 + 0x1);
    }
    FUN_0c1048e6(t1, a6);
    return t0;
}

int FUN_0c10435a(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t1;

    t2 = 0x0;
    t3 = (*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28)));
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x30)))) {
            t1 = 0x0;
            return t1;
        }
        if ((unsigned char)(*(signed char *)((t3 + 0x0))) != 0) {
            t1 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))(t3, 0x2, a6, a7));
            t1 = (unsigned short)t1;
            if (t1 == a5) {
                break;
            }
            t3 = (t3 + 0x20);
            t2 = (t2 + 0x1);
            continue;
        }
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x1);
    }
    return t3;
}

int FUN_0c114fcc(int a4, int a5, int a6)
{
    register int t1;

    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (0x10 | (-a6));
    }
    if ((*(int *)((a4 + 0xC))) == 0) {
        FUN_0c0e6726((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), (signed char)a5, t1);
    } else {
        FUN_0c0e6a84((*(short *)((a4 + 0x2))), (signed char)a5, t1);
    }
    return 0x0;
}
