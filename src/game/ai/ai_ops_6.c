/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c04f044-0c04fb04) */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05d1d0(int);
int FUN_0c0ac55c(int, int);
float math_signed_sqrt(float);
struct o10_float { char p[0x10]; float v; };

int ai_op25_get_random(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC3673EE;
    math_rand_float();
    *(volatile float *)0xC04F150;
    
    t1 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
    *(volatile short *)((((t1 + 0x2) - 2) + 0x0));
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = (FUN_0c0e6f24());
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t0 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t0;
}

int ai_op26_clear_reg(void)
{
    *(unsigned short *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F66)) = 0x0;
    return 0xC366F66;
}

int ai_op27_clear_reg(void)
{
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = 0x0;
    return 0x0;
}

int ai_op28_clear_reg(void)
{
    *(unsigned short *)(((0xC366F66 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = 0x0;
    return 0x0;
}

int ai_op44_pick_item(int a4, float f4)
{
    int stk[137];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t49;
    register int t50;
    register int t22;
    register int t23;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u30;
    register float t31;
    register int t33;
    register int t34;
    register float u35;
    register float u37;
    register float u39;
    register float u40;
    register float u43;
    register float t44;
    register float u45;
    register int t46;
    register int t58;
    register int t59;
    register int t61;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t67;
    register float u68;
    register float u70;
    register int t82;
    register int t89;
    register float u91;
    register int t92;
    register float u94;
    register int t95;
    register float u97;
    register int t101;
    register int t2;
    register int t5;
    register int t19;
    register int t20;
    int t14;
    register float u57;
    register int t60;
    register int t62;
    register float u69;
    register int t86;
    register int t87;

    t1 = 0xFFFFFDE8;
    t3 = a4;
    t4 = 0x0;
    t6 = (*(int *)0xC7E4078);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t2 = (*(signed char *)((t6 + 0x0)));
        t5 = (*(int *)((t6 + 0x18)));
        if (t2 != 0) {
            t1 = (*(signed char *)((t6 + 0x4)));
            t3 = t1;
            if ((t1 != 1) && (t14 = (t1 == 1), t1 = t3, t1 != 18)) {
                t19 = t2;
                t20 = t3;
            } else {
                t3 = a4;
                t1 = (FUN_0c0ac55c(t3, t6));
                t1 = (signed char)t1;
                if (t1 != 0) {
                    t1 = (unsigned short)t4;
                    t1 = (t1 << 2);
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t6;
                }
            }
        } else {
            t19 = t2;
            t20 = t3;
        }
        t6 = t5;
        t2 = t19;
        t3 = t20;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t49 = 0x0;
    t50 = 0x0;
    if ((int)(unsigned short)t4 > 0) {
        t22 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t22 + (0x118 + ((int)stk + 8)));
            *(unsigned int *)(((int)stk + 20)) = (t22 + (((int)stk + 8) + 0x18));
            t23 = *(int *)(((t22 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t23;
            u24 = (((struct o20_float *)(a4))->v);
            u25 = (((struct o20_float *)(t23))->v);
            u26 = (((struct o28_float *)(a4))->v);
            u27 = (((struct o28_float *)(t23))->v);
            (((struct oC_float *)(((int)stk + 4)))->v) = (u27 - u26);
            u30 = ((u27 - u26) * (u27 - u26));
            u30 = u30 + ((u25 - u24)) * ((u25 - u24));
            t31 = math_signed_sqrt(u30);
            *(float *)(((int)stk + 0)) = (t31 * 2.0f);
            t33 = *(int *)(((*(int *)(((int)stk + 20))) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = t33;
            t34 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 24)) = t34;
            u35 = (((struct o20_float *)(t34))->v);
            u37 = (((struct o20_float *)(t33))->v);
            u39 = (((struct o28_float *)((*(int *)(((int)stk + 24)))))->v);
            u40 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u43 = ((u40 - u39) * (u40 - u39));
            u43 = u43 + ((u37 - u35)) * ((u37 - u35));
            t44 = math_signed_sqrt(u43);
            u45 = (t31 * 2.0f);
            *(float *)(((t22 + (0x118 + ((int)stk + 8))) + 0x0)) = (u45 - t44);
            t46 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t46 + 0x1);
            t22 = (t22 + 0x4);
            if ((int)(unsigned short)(t46 + 0x1) >= (int)(unsigned short)t4) {
                break;
            }
        }
        t49 = t22;
        t50 = (unsigned short)(t46 + 0x1);
        u57 = (u45 - t44);
    } else {
        t59 = t3;
    }
    t58 = t50;
    t61 = t60;
    t63 = t62;
    t64 = 0x0;
    t65 = 0xC0DF340;
    t66 = a4;
    t67 = t49;
    u68 = u57;
    u70 = f4;
    for (;;) {
        if ((int)(unsigned short)t64 >= (int)(unsigned short)t4) {
            break;
        }
        t61 = t64;
        t67 = (unsigned short)t64;
        t63 = (unsigned short)t61;
        t67 = (t67 << 2);
        t63 = (t63 << 2);
        t58 = (unsigned short)t61;
        t59 = t63;
        t63 = (t63 + (0x118 + ((int)stk + 8)));
        *(unsigned int *)(((int)stk + 12)) = (t67 + (0x118 + ((int)stk + 8)));
        if ((int)t58 < (int)(unsigned short)t4) {
            for (;;) {
                u68 = (*(float *)((t63 + 0x0)));
                u69 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t61 = (t61 + 0x1);
                if (u69 > u68) {
                    t65 = t67;
                    t65 = (t65 + (0x118 + ((int)stk + 8)));
                    t66 = t59;
                    u69 = (*(float *)((t65 + 0x0)));
                    t66 = (t66 + (0x118 + ((int)stk + 8)));
                    u70 = (*(float *)((t66 + 0x0)));
                    *(float *)((t66 + 0x0)) = u69;
                    t66 = t59;
                    *(float *)((t65 + 0x0)) = u70;
                    t66 = (t66 + (((int)stk + 8) + 0x18));
                    t65 = (*(int *)((t66 + 0x0)));
                    *(unsigned int *)(((int)stk + 8)) = (t67 + (((int)stk + 8) + 0x18));
                    t58 = (*(int *)(((t67 + (((int)stk + 8) + 0x18)) + 0x0)));
                    *(unsigned int *)((t66 + 0x0)) = t58;
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t65;
                }
                t59 = (t59 + 0x4);
                t63 = (t63 + 0x4);
                if ((int)(unsigned short)t61 >= (int)(unsigned short)t4) {
                    break;
                }
            }
        }
        t64 = (t64 + 0x1);
    }
    t82 = *(signed char *)0xC3673EE;
    if ((unsigned short)t4 != 0) {
        t86 = 0x1;
        t87 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t86 = 0x0;
        t87 = ((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = t87;
    t89 = *(signed char *)0xC3673EE;
    u91 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t89 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t89 * (short)0x254) + 0xC366F40)))->v) = u91;
    t92 = *(signed char *)0xC3673EE;
    u94 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t92 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t92 * (short)0x254) + 0xC366F40)))->v) = u94;
    t95 = *(signed char *)0xC3673EE;
    u97 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t95 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t95 * (short)0x254) + 0xC366F40)))->v) = u97;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t86;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t101 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t101;
}

int ai_op71_pick_obj2_kind7(int a4, int a5, float f4)
{
    int stk[41];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t42;
    register int t43;
    register int t15;
    register int t16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u23;
    register float t24;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u36;
    register float t37;
    register float u38;
    register int t39;
    register int t52;
    register int t53;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register float u61;
    register float u63;
    register int t75;
    register int t82;
    register float u84;
    register int t85;
    register float u87;
    register int t88;
    register float u90;
    register int t94;
    register int t2;
    register int t12;
    register int t13;
    register int t14;
    register float u51;
    register int t55;
    register float u62;
    register int t79;
    register int t80;

    t1 = 0xFFFFFF68;
    t3 = (*(int *)0xC7E4078);
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = (*(signed char *)((t3 + 0x0)));
        t4 = (*(int *)((t3 + 0x18)));
        if ((t2 != 0) && ((t12 = *(signed char *)((t3 + 0x4)), t1 = t12, t1 == 7) && (t1 = 0x30D, t13 = *(signed char *)((t3 + t1)), t14 = (t2 == 0), t2 = t13, t2 == 0))) {
            t1 = (unsigned short)t5;
            t1 = (t1 << 2);
            t5 = (t5 + 0x1);
            *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t3;
        }
        t3 = t4;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t42 = 0x0;
    t43 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t15 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t15 + (((int)stk + 8) + 0x58));
            *(unsigned int *)(((int)stk + 24)) = (t15 + (((int)stk + 8) + 0x18));
            t16 = *(int *)(((t15 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t16;
            u17 = (((struct o20_float *)(a4))->v);
            u18 = (((struct o20_float *)(t16))->v);
            u19 = (((struct o28_float *)(a4))->v);
            u20 = (((struct o28_float *)(t16))->v);
            u23 = ((u20 - u19) * (u20 - u19));
            u23 = u23 + ((u18 - u17)) * ((u18 - u17));
            t24 = math_signed_sqrt(u23);
            *(float *)(((int)stk + 0)) = (t24 * 2.0f);
            t26 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            t27 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t27;
            u28 = (((struct o20_float *)(t27))->v);
            u30 = (((struct o20_float *)(t26))->v);
            u32 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u33 = (((struct o28_float *)((*(int *)(((int)stk + 20)))))->v);
            (((struct o10_float *)(((int)stk + 0)))->v) = (u33 - u32);
            u36 = ((u33 - u32) * (u33 - u32));
            u36 = u36 + ((u30 - u28)) * ((u30 - u28));
            t37 = math_signed_sqrt(u36);
            u38 = (t24 * 2.0f);
            *(float *)(((t15 + (((int)stk + 8) + 0x58)) + 0x0)) = (u38 - t37);
            t39 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t39 + 0x1);
            t15 = (t15 + 0x4);
            if ((int)(unsigned short)(t39 + 0x1) >= (int)(unsigned short)t5) {
                break;
            }
        }
        t42 = t15;
        t43 = (unsigned short)(t39 + 0x1);
        u51 = (u38 - t37);
    } else {
        t53 = t3;
        t54 = t4;
    }
    t52 = t43;
    t56 = t55;
    t57 = 0x0;
    t58 = 0xC0DF340;
    t59 = a4;
    t60 = t42;
    u61 = u51;
    u63 = f4;
    for (;;) {
        if ((int)(unsigned short)t57 >= (int)(unsigned short)t5) {
            break;
        }
        t54 = t57;
        t60 = (unsigned short)t57;
        t56 = (unsigned short)t54;
        t60 = (t60 << 2);
        t56 = (t56 << 2);
        t52 = (unsigned short)t54;
        t53 = t56;
        t56 = (t56 + (((int)stk + 8) + 0x58));
        *(unsigned int *)(((int)stk + 12)) = (t60 + (((int)stk + 8) + 0x58));
        if ((int)t52 < (int)(unsigned short)t5) {
            for (;;) {
                u61 = (*(float *)((t56 + 0x0)));
                u62 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t54 = (t54 + 0x1);
                if (u62 > u61) {
                    t58 = t60;
                    t59 = t53;
                    t58 = (t58 + (((int)stk + 8) + 0x58));
                    u62 = (*(float *)((t58 + 0x0)));
                    t59 = (t59 + (((int)stk + 8) + 0x58));
                    u63 = (*(float *)((t59 + 0x0)));
                    *(float *)((t59 + 0x0)) = u62;
                    t59 = t53;
                    *(float *)((t58 + 0x0)) = u63;
                    t58 = t60;
                    t59 = (t59 + (((int)stk + 8) + 0x18));
                    t58 = (t58 + (((int)stk + 8) + 0x18));
                    *(unsigned int *)(((int)stk + 8)) = t59;
                    t52 = (*(int *)((t58 + 0x0)));
                    t59 = (*(int *)((t59 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t52;
                    *(unsigned int *)((t58 + 0x0)) = t59;
                }
                t53 = (t53 + 0x4);
                t56 = (t56 + 0x4);
                if ((int)(unsigned short)t54 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t57 = (t57 + 0x1);
    }
    t75 = *(signed char *)0xC3673EE;
    if ((unsigned short)t5 != 0) {
        t79 = 0x1;
        t80 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t79 = 0x0;
        t80 = ((((struct o6C_int *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v) = t80;
    t82 = *(signed char *)0xC3673EE;
    u84 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = u84;
    t85 = *(signed char *)0xC3673EE;
    u87 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v) = u87;
    t88 = *(signed char *)0xC3673EE;
    u90 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v) = u90;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t79;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t94 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t94;
}

int ai_op70_pick_obj3_kind6(int a4, int a5, float f4)
{
    int stk[41];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t42;
    register int t43;
    register int t15;
    register int t16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u23;
    register float t24;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u36;
    register float t37;
    register float u38;
    register int t39;
    register int t52;
    register int t53;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register float u61;
    register float u63;
    register int t75;
    register int t82;
    register float u84;
    register int t85;
    register float u87;
    register int t88;
    register float u90;
    register int t94;
    register int t2;
    register int t12;
    register int t13;
    register int t14;
    register float u51;
    register int t55;
    register float u62;
    register int t79;
    register int t80;

    t1 = 0xFFFFFF68;
    t3 = (*(int *)0xC7E407C);
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t2 = (*(signed char *)((t3 + 0x0)));
        t4 = (*(int *)((t3 + 0x18)));
        if ((t2 != 0) && ((t12 = *(signed char *)((t3 + 0x4)), t1 = t12, t1 == 6) && (t1 = 0x30D, t13 = *(signed char *)((t3 + t1)), t14 = (t2 == 0), t2 = t13, t2 == 0))) {
            t1 = (unsigned short)t5;
            t1 = (t1 << 2);
            t5 = (t5 + 0x1);
            *(unsigned int *)(((((int)stk + 8) + 0x18) + t1)) = t3;
        }
        t3 = t4;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t42 = 0x0;
    t43 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t15 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t15 + (((int)stk + 8) + 0x58));
            *(unsigned int *)(((int)stk + 24)) = (t15 + (((int)stk + 8) + 0x18));
            t16 = *(int *)(((t15 + (((int)stk + 8) + 0x18)) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = t16;
            u17 = (((struct o20_float *)(a4))->v);
            u18 = (((struct o20_float *)(t16))->v);
            u19 = (((struct o28_float *)(a4))->v);
            u20 = (((struct o28_float *)(t16))->v);
            u23 = ((u20 - u19) * (u20 - u19));
            u23 = u23 + ((u18 - u17)) * ((u18 - u17));
            t24 = math_signed_sqrt(u23);
            *(float *)(((int)stk + 0)) = (t24 * 2.0f);
            t26 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            t27 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t27;
            u28 = (((struct o20_float *)(t27))->v);
            u30 = (((struct o20_float *)(t26))->v);
            u32 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u33 = (((struct o28_float *)((*(int *)(((int)stk + 20)))))->v);
            (((struct o10_float *)(((int)stk + 0)))->v) = (u33 - u32);
            u36 = ((u33 - u32) * (u33 - u32));
            u36 = u36 + ((u30 - u28)) * ((u30 - u28));
            t37 = math_signed_sqrt(u36);
            u38 = (t24 * 2.0f);
            *(float *)(((t15 + (((int)stk + 8) + 0x58)) + 0x0)) = (u38 - t37);
            t39 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t39 + 0x1);
            t15 = (t15 + 0x4);
            if ((int)(unsigned short)(t39 + 0x1) >= (int)(unsigned short)t5) {
                break;
            }
        }
        t42 = t15;
        t43 = (unsigned short)(t39 + 0x1);
        u51 = (u38 - t37);
    } else {
        t53 = t3;
        t54 = t4;
    }
    t52 = t43;
    t56 = t55;
    t57 = 0x0;
    t58 = 0xC0DF340;
    t59 = a4;
    t60 = t42;
    u61 = u51;
    u63 = f4;
    for (;;) {
        if ((int)(unsigned short)t57 >= (int)(unsigned short)t5) {
            break;
        }
        t54 = t57;
        t60 = (unsigned short)t57;
        t56 = (unsigned short)t54;
        t60 = (t60 << 2);
        t56 = (t56 << 2);
        t52 = (unsigned short)t54;
        t53 = t56;
        t56 = (t56 + (((int)stk + 8) + 0x58));
        *(unsigned int *)(((int)stk + 12)) = (t60 + (((int)stk + 8) + 0x58));
        if ((int)t52 < (int)(unsigned short)t5) {
            for (;;) {
                u61 = (*(float *)((t56 + 0x0)));
                u62 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t54 = (t54 + 0x1);
                if (u62 > u61) {
                    t58 = t60;
                    t59 = t53;
                    t58 = (t58 + (((int)stk + 8) + 0x58));
                    u62 = (*(float *)((t58 + 0x0)));
                    t59 = (t59 + (((int)stk + 8) + 0x58));
                    u63 = (*(float *)((t59 + 0x0)));
                    *(float *)((t59 + 0x0)) = u62;
                    t59 = t53;
                    *(float *)((t58 + 0x0)) = u63;
                    t58 = t60;
                    t59 = (t59 + (((int)stk + 8) + 0x18));
                    t58 = (t58 + (((int)stk + 8) + 0x18));
                    *(unsigned int *)(((int)stk + 8)) = t59;
                    t52 = (*(int *)((t58 + 0x0)));
                    t59 = (*(int *)((t59 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t52;
                    *(unsigned int *)((t58 + 0x0)) = t59;
                }
                t53 = (t53 + 0x4);
                t56 = (t56 + 0x4);
                if ((int)(unsigned short)t54 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t57 = (t57 + 0x1);
    }
    t75 = *(signed char *)0xC3673EE;
    if ((unsigned short)t5 != 0) {
        t79 = 0x1;
        t80 = (*(int *)(((((int)stk + 8) + 0x18) + 0x0)));
    } else {
        t79 = 0x0;
        t80 = ((((struct o6C_int *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t75 * (short)0x254) + 0xC366F40)))->v) = t80;
    t82 = *(signed char *)0xC3673EE;
    u84 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t82 * (short)0x254) + 0xC366F40)))->v) = u84;
    t85 = *(signed char *)0xC3673EE;
    u87 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t85 * (short)0x254) + 0xC366F40)))->v) = u87;
    t88 = *(signed char *)0xC3673EE;
    u90 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t88 * (short)0x254) + 0xC366F40)))->v) = u90;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t79;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t94 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t94;
}

int ai_op62_pick_obj3_kind5(int a4, float f4)
{
    int stk[40];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t26;
    register float u27;
    register float u28;
    register int t56;
    register int t57;
    register float u66;
    register int t29;
    register int t30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u37;
    register float t38;
    register int t40;
    register int t41;
    register float u42;
    register float u44;
    register float u46;
    register float u47;
    register float u50;
    register float t51;
    register float u52;
    register int t53;
    register int t67;
    register int t68;
    register int t70;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register float u77;
    register float u78;
    register float u79;
    register int t91;
    register int t98;
    register float u100;
    register int t101;
    register float u103;
    register int t104;
    register float u106;
    register int t110;
    register int t2;
    register int t5;
    register float u7;
    register float u8;
    int t14;
    register int t25;
    register float u22;
    register float u23;
    register float u65;
    register int t69;
    register int t71;
    register int t95;
    register int t96;

    t1 = 0xC04F848;
    t3 = a4;
    t4 = 0x0;
    t6 = (*(int *)0xC7E407C);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t2 = (*(signed char *)((t6 + 0x0)));
        t5 = (*(int *)((t6 + 0x18)));
        t26 = t3;
        u27 = u7;
        u28 = u8;
        if ((t2 != 0) && (t14 = *(signed char *)((t6 + 0x4)), t1 = t14, t1 == 5)) {
            t2 = (*(int *)((a4 + 0x1C)));
            t1 = 0x24;
            u8 = (*(float *)((a4 + t1)));
            u7 = (*(float *)((t2 + t1)));
            u7 = (u7 - u8);
            u7 = (u7 + 500.0f);
            if (1000.0f > u7) {
                t3 = t6;
                t1 = (FUN_0c05d1d0(t3));
                t1 = (signed char)t1;
                if (t1 != 0) {
                    t1 = (unsigned short)t4;
                    t1 = (t1 << 2);
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((((int)stk + 8) + 0x14) + t1)) = t6;
                }
            } else {
                t25 = t2;
                t26 = t3;
                u22 = u7;
                u23 = u8;
            }
            u27 = u22;
            u28 = u23;
        } else {
            t25 = t2;
        }
        u7 = u27;
        u8 = u28;
        t6 = t5;
        t2 = t25;
        t3 = t26;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t56 = 0x0;
    t57 = 0x0;
    u66 = u8;
    if ((int)(unsigned short)t4 > 0) {
        t29 = 0x0;
        for (;;) {
            *(int *)((int)stk + 4) = (t29 + (((int)stk + 8) + 0x54));
            *(unsigned int *)(((int)stk + 20)) = (t29 + (((int)stk + 8) + 0x14));
            t30 = *(int *)(((t29 + (((int)stk + 8) + 0x14)) + 0x0));
            *(unsigned int *)(((int)stk + 24)) = t30;
            u31 = (((struct o20_float *)(a4))->v);
            u32 = (((struct o20_float *)(t30))->v);
            u33 = (((struct o28_float *)(a4))->v);
            u34 = (((struct o28_float *)(t30))->v);
            u37 = ((u34 - u33) * (u34 - u33));
            u37 = u37 + ((u32 - u31)) * ((u32 - u31));
            t38 = math_signed_sqrt(u37);
            *(float *)(((int)stk + 0)) = (t38 * 2.0f);
            t40 = *(int *)(((*(int *)(((int)stk + 20))) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = t40;
            t41 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = t41;
            u42 = (((struct o20_float *)(t41))->v);
            u44 = (((struct o20_float *)(t40))->v);
            u46 = (((struct o28_float *)((*(int *)(((int)stk + 12)))))->v);
            u47 = (((struct o28_float *)((*(int *)(((int)stk + 16)))))->v);
            u50 = ((u47 - u46) * (u47 - u46));
            u50 = u50 + ((u44 - u42)) * ((u44 - u42));
            t51 = math_signed_sqrt(u50);
            u52 = (t38 * 2.0f);
            *(float *)(((t29 + (((int)stk + 8) + 0x54)) + 0x0)) = (u52 - t51);
            t53 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t53 + 0x1);
            t29 = (t29 + 0x4);
            if ((int)(unsigned short)(t53 + 0x1) >= (int)(unsigned short)t4) {
                break;
            }
        }
        t56 = t29;
        t57 = (unsigned short)(t53 + 0x1);
        u66 = (u52 - t51);
    } else {
        t68 = t3;
        u65 = u7;
    }
    t67 = t57;
    t70 = t69;
    t72 = t71;
    t73 = 0x0;
    t74 = 0xC0DF340;
    t75 = t56;
    t76 = a4;
    u77 = u65;
    u78 = u66;
    u79 = f4;
    for (;;) {
        if ((int)(unsigned short)t73 >= (int)(unsigned short)t4) {
            break;
        }
        t70 = t73;
        t76 = (unsigned short)t73;
        t72 = (unsigned short)t70;
        t76 = (t76 << 2);
        t72 = (t72 << 2);
        t67 = (unsigned short)t70;
        t68 = t72;
        t72 = (t72 + (((int)stk + 8) + 0x54));
        *(unsigned int *)(((int)stk + 12)) = (t76 + (((int)stk + 8) + 0x54));
        if ((int)t67 < (int)(unsigned short)t4) {
            for (;;) {
                u77 = (*(float *)((t72 + 0x0)));
                u78 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t70 = (t70 + 0x1);
                if (u78 > u77) {
                    t74 = t76;
                    t75 = t68;
                    t74 = (t74 + (((int)stk + 8) + 0x54));
                    u78 = (*(float *)((t74 + 0x0)));
                    t75 = (t75 + (((int)stk + 8) + 0x54));
                    u79 = (*(float *)((t75 + 0x0)));
                    *(float *)((t75 + 0x0)) = u78;
                    t75 = t68;
                    *(float *)((t74 + 0x0)) = u79;
                    t74 = t76;
                    t75 = (t75 + (((int)stk + 8) + 0x14));
                    t74 = (t74 + (((int)stk + 8) + 0x14));
                    *(unsigned int *)(((int)stk + 8)) = t75;
                    t67 = (*(int *)((t74 + 0x0)));
                    t75 = (*(int *)((t75 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t67;
                    *(unsigned int *)((t74 + 0x0)) = t75;
                }
                t68 = (t68 + 0x4);
                t72 = (t72 + 0x4);
                if ((int)(unsigned short)t70 >= (int)(unsigned short)t4) {
                    break;
                }
            }
        }
        t73 = (t73 + 0x1);
    }
    t91 = *(signed char *)0xC3673EE;
    if ((unsigned short)t4 != 0) {
        t95 = 0x1;
        t96 = (*(int *)(((((int)stk + 8) + 0x14) + 0x0)));
    } else {
        t95 = 0x0;
        t96 = ((((struct o6C_int *)(((short)((short)(unsigned char)t91 * (short)0x254) + 0xC366F40)))->v));
    }
    (((struct o6C_uint *)(((short)((short)(unsigned char)t91 * (short)0x254) + 0xC366F40)))->v) = t96;
    t98 = *(signed char *)0xC3673EE;
    u100 = (((struct o20_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t98 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o60_float *)(((short)((short)(unsigned char)t98 * (short)0x254) + 0xC366F40)))->v) = u100;
    t101 = *(signed char *)0xC3673EE;
    u103 = (((struct o24_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t101 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o64_float *)(((short)((short)(unsigned char)t101 * (short)0x254) + 0xC366F40)))->v) = u103;
    t104 = *(signed char *)0xC3673EE;
    u106 = (((struct o28_float *)(((((struct o6C_int *)(((short)((short)(unsigned char)t104 * (short)0x254) + 0xC366F40)))->v))))->v);
    (((struct o68_float *)(((short)((short)(unsigned char)t104 * (short)0x254) + 0xC366F40)))->v) = u106;
    (((struct o26_ushort *)(((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40)))->v) = t95;
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
    t110 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t110;
}
