/* state update functions of the player state machine (table 0xC3390D4) (part 11 of 14 of the same module) (0c096484-0c0975c8) */

/* named globals (symbols.txt) */
extern char g_pl_char_param_tbl[];
struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
float FUN_0c02649a(int, int);
int pl_start_motion(int, int, int);
int hit_find_interactable_contact(int, int);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
int pl_state34_phase0(int);
int pl_state34_phase1(int);
int pl_state34_phase2(int);
int FUN_0c0967a0(int);
int pl_stick_dir_angle(int);
int pl_try_start_basic_attack(int);
int pl_button_jump_pressed(int);
int FUN_0c0a00e4(int);
int FUN_0c0a022e(int, float);
int pl_change_state(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_step_motion(int);
int pl_end_action_choose_state(int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o7254_float { char p[0x7254]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float FUN_0c02651e(int);
int FUN_0c0972b2(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_velocity(int);
int snd_play_side_se(int, int);
int FUN_0c0e6fdc(int);
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71C8_uint { char p[0x71C8]; unsigned int v; };
int FUN_0c09ca88(int, int, int);
int pl_is_airborne(int);
extern int pl_try_start_move();
int pl_check_dual_button_input(int);

int pl_state39_phase0(int a4);
int pl_state39_phase1(int a4);
int pl_state39_phase2(int a4);

int FUN_0c09660c(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register float u24;
    register int t44;
    register float t48;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                pl_start_motion(a4, 0x2, 0xD5);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = hit_find_interactable_contact(a4, 0x1);
        *(unsigned char *)(((int)stk + 0)) = t18;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            u24 = 0.0f;
            if (t21 > t22) {
                u24 = 5.0f;
            }
            (((struct o3C_float *)(a4))->v) = u24;
        }
        return 0x0;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 1) {
            if ((*(signed char *)((a4 + 0x71BA))) == 34) {
                pl_start_motion(a4, 0x2, 0xD6);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x1;
        }
        t44 = hit_find_interactable_contact(a4, 0x1);
        if ((signed char)t44 != 0) {
            if (300.0f > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0)))))->v))) {
                t48 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t44 - 1) << 2)) + 0x0))), 0x1);
                if (!((((((struct o24_float *)(a4))->v)) + -11.7099991f) > t48)) {
                    (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
                    (((struct o274_float *)(a4))->v) = 1.0f;
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                    return 0x1;
                }
                return ((int (*)(void))(0xC096738))();
            }
            return ((int (*)(int, int, int, int))(0xC096738))(t44, a5, a6, a7);
        }
        return 0x0;
    }
    return 0x0;
}

int pl_state34_update(int a4)
{
    int stk[4];
    register int t0;
    register float u23;
    register float u27;
    register int t29;
    register int t33;
    register int t35;
    register int t45;
    register int t51;
    register int t47;
    register int t53;
    register int t63;
    register int t69;
    register int t65;

    t0 = pl_button_jump_pressed(a4);
    if (t0 != 0) {
        if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
            (((struct o7248_uint *)(a4))->v) = ((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0));
        } else {
            if ((*(signed char *)((a4 + 0x71EE))) != 0) {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0x4000);
            } else {
                (((struct o7248_uint *)(a4))->v) = ((*(int *)((a4 + 0x30))) + 0xC000);
            }
        }
        (((struct o7248_uint *)(a4))->v) = (((((struct o7248_int *)(a4))->v)) & 0xFFFF);
        *(int *)((int)stk + 0) = (a4 + 0x20);
        u23 = ((((struct o20_float *)(a4))->v));
        u23 = u23 + 50.0f * (math_cos_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x5000)));
        (((struct o20_float *)(a4))->v) = u23;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        u27 = ((((struct o28_float *)(a4))->v));
        u27 = u27 + 50.0f * (math_sin_angle16(((-((((struct o7248_int *)(a4))->v))) + 0x14000)));
        (((struct o28_float *)(a4))->v) = u27;
        return (pl_change_state(a4, 0x5, 0x0, 0x0));
    }
    t29 = pl_try_start_basic_attack(a4);
    if ((signed char)t29 != 0) {
        return (pl_change_state(a4, 0xA, 0x7, 0x0));
    }
    if ((((((struct o2E4_int *)(a4))->v)) & 192) != 0) {
        t33 = FUN_0c0a00e4(a4);
        if ((signed char)t33 != 0) {
            pl_change_state(a4, 0x27, 0x0, 0x0);
            return FUN_0c0967a0(a4);
        }
        t35 = *(signed char *)((a4 + 0xA));
        switch (t35) {
        case 0:
            pl_state34_phase0(a4);
            break;
        case 1:
            pl_state34_phase1(a4);
            break;
        case 2:
            pl_state34_phase2(a4);
            break;
        }
        t45 = *(signed char *)((a4 + 0x71BA));
        t51 = t45;
        if (t45 == 34) {
            t47 = FUN_0c0a022e(a4, (*(float *)0xC096AE4));
            t51 = (signed char)t47;
            if ((signed char)t47 != 0) {
                t51 = (pl_change_state(a4, 0xE, 0x0, 0x0));
            }
        }
        return t51;
    }
    t53 = *(signed char *)((a4 + 0xA));
    switch (t53) {
    case 0:
        pl_state34_phase0(a4);
        break;
    case 1:
        pl_state34_phase1(a4);
        break;
    case 2:
        pl_state34_phase2(a4);
        break;
    }
    t63 = *(signed char *)((a4 + 0x71BA));
    t69 = t63;
    if (t63 == 34) {
        t65 = FUN_0c0a022e(a4, (*(float *)0xC096AE4));
        t69 = (signed char)t65;
        if ((signed char)t65 != 0) {
            t69 = (pl_change_state(a4, 0xE, 0x0, 0x0));
        }
    }
    return t69;
}

int pl_state26_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x2, 0xD8);
    }
    t0 = (((struct o2DC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 48) != 0) {
        (((struct o7237_uchar *)(a4))->v) = 0x63;
        *(unsigned char *)((a4 + 0xA)) = 0x2;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        t1 = 0xF2;
    }
    return t1;
}

int pl_state26_phase1(int a4)
{
    register int t0;
    register int t2;

    t0 = pl_step_motion(a4);
    t2 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x2, 0xD8);
        *(unsigned char *)((a4 + 0xA)) = 0x0;
        t2 = 0x0;
    }
    return t2;
}

int FUN_0c096a64(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t18;
    register float t21;
    register float t22;
    register int t37;
    register float t42;

    if ((((((struct o2DC_int *)(a4))->v)) & 16) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 0) {
            if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                pl_start_motion(a4, 0x2, 0xD9);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x0;
        }
        t18 = hit_find_interactable_contact(a4, 0x2);
        *(unsigned char *)(((int)stk + 0)) = t18;
        if ((signed char)t18 != 0) {
            t21 = FUN_0c02649a((*(int *)((((((*(signed char *)(((int)stk + 0))) - 1) << 2) + (0x294 + a4)) + 0x0))), 0x0);
            t22 = FUN_0c02649a(a4, 0x0);
            if (t21 > t22) {
                (((struct o3C_float *)(a4))->v) = 5.0f;
                return 0x0;
            }
            (((struct o3C_float *)(a4))->v) = 0.0f;
            return 0x2;
        }
        return 0x0;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 32) != 0) {
        if ((*(signed char *)((a4 + 0x7237))) != 1) {
            if ((*(signed char *)((a4 + 0x71BA))) == 26) {
                pl_start_motion(a4, 0x2, 0xDA);
            }
            (((struct o7237_uchar *)(a4))->v) = 0x1;
        }
        t37 = hit_find_interactable_contact(a4, 0x2);
        if ((signed char)t37 != 0) {
            if (((((struct o0_float *)0xC096C20)->v)) > ((((struct o24_float *)((*(int *)((((0x294 + a4) + (((signed char)t37 - 1) << 2)) + 0x0)))))->v))) {
                t42 = FUN_0c02649a((*(int *)((((0x294 + a4) + (((signed char)t37 - 1) << 2)) + 0x0))), 0x1);
                if (!((((((struct o24_float *)(a4))->v)) + ((((struct o4_float *)0xC096C20)->v))) > t42)) {
                    *(volatile float *)0xC096C28;
                    *(volatile float *)((a4 + 0x2D4));
                    return 0x0;
                }
                return ((int (*)(void))(0xC096B94))();
            }
            return ((int (*)(int, int, int, int))(0xC096B94))(t37, a5, a6, a7);
        }
        return 0x0;
    }
    return 0x0;
}

int pl_state35_phase0(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_state36_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x2, 0xD0);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state36_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct o2DC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 240) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0)) & 0xFFFF);
        pl_start_motion(a4, 0x2, 0xD1);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state39_phase0(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        pl_start_motion(a4, 0x2, 0xD0);
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state39_phase1(int a4)
{
    register int t0;
    register int t1;

    pl_step_motion(a4);
    t0 = (((struct o2DC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 240) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (((pl_stick_dir_angle(a4)) + (*(int *)0xC7F31E0)) & 0xFFFF);
        pl_start_motion(a4, 0x2, 0xD1);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_state39_phase2(int a4)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t4;
    register int t21;
    register int t36;
    register int t40;
    register int t10;
    register int t28;
    register float u29;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) == 0) {
        pl_start_motion(a4, 0x2, 0xD0);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        t40 = 0x1;
    } else {
        t2 = pl_stick_dir_angle(a4);
        t3 = *(int *)0xC7F31E0;
        t4 = FUN_0c0972b2(a4);
        if (t4 != 0) {
            t10 = 0x0;
            if (((int)(unsigned short)(t3 + t2) >= (int)0x4000) && ((int)(unsigned short)(t3 + t2) <= (int)0xC000)) {
                t10 = 0x8000;
            }
        } else {
            t10 = 0xC000;
            if ((int)(unsigned short)(t3 + t2) < (int)0x8000) {
                t10 = 0x4000;
            }
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
        (((struct o7254_float *)(a4))->v) = ((((struct o38_float *)(((unsigned char)((unsigned short)(*(signed char *)(((0x71F1 + a4) + 0x0))) * (unsigned short)0x4C) + (((int)g_pl_char_param_tbl) + ((short)(*(signed char *)((a4 + 0x4))) * (short)0x98)))))->v));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t10);
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16((0x14000 - t10))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16((*(int *)(((int)stk + 0))))) * ((((struct o7254_float *)(a4))->v)));
        t21 = hit_find_wall_entry_by_kind(a4, 0xA);
        *(volatile int *)((((((signed char)t21 - 1) << 2) + (0x2C0 + a4)) + 0x0));
        FUN_0c0e6fdc(t21);
        if (((((struct oC_float *)((((int)stk + 0) + 0x4)))->v)) > ((((struct o14_float *)((((int)stk + 0) + 0x4)))->v))) {
            t28 = 0x28;
            u29 = ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v));
        } else {
            t28 = 0x20;
            u29 = ((((struct o4_float *)(((int)stk + 0)))->v));
        }
        *(float *)((a4 + t28)) = u29;
        (((struct o24_float *)(a4))->v) = (((((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o10_float *)((((int)stk + 0) + 0x4)))->v))) - (FUN_0c02651e(a4))) + 1.0f);
        pl_step_motion(a4);
        pl_apply_velocity(a4);
        t36 = (((struct o719E_short *)(a4))->v);
        t40 = (unsigned short)t36;
        if (((unsigned short)t36 == 19) || ((unsigned short)t36 == 39)) {
            t40 = (snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE));
        }
    }
    return t40;
}

int pl_state39_update(int a4, int a5, int a6)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_2 = a5;
    v0_1 = a6;
    v0_0 = R13;
    *(int *)((int)stk + 4) = v0_0;
    v0_4 = (*(signed char *)((v0_3 + 0xA))) == 0;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    R13 = (0xC0A2E26);
    v0_0 = (v0_3);
    if (v0_4) goto L_C0974EC;
    v0_3 = (signed char)(pl_check_dual_button_input(v0_0)) == 0;
    if (v0_3) goto L_C0974EC;
    v0_3 = (signed char)(pl_is_airborne(v0_0)) == 0;
    if (v0_3) goto L_C0974EC;
    v0_1 = (0x4);
    L_C0974F8:;
    v0_2 = (0xA);
    L_C09755A:;
    v0_1 = ((pl_change_state(v0_0, v0_2, v0_1, 0x0)));
    L_C09759C:;
    *(volatile int *)((int)stk + 0);
    return v0_1;
    L_C0974EC:;
    v0_2 = (((int (*)(int, int, int))(pl_try_start_move))(v0_0, v0_2, v0_1)) == 0;
    if (v0_2) goto L_C0974FC;
    v0_1 = (0x9);
    goto L_C0974F8;
    L_C0974FC:;
    v0_1 = FUN_0c09ca88(v0_0, 0x2, v0_1);
    v0_3 = (v0_1);
    if (((signed char)v0_1 == 0)) goto L_C097524;
    (((struct o71C8_uint *)(v0_0))->v) = (*(int *)((((((signed char)v0_3 - 1) << 2) + (0x294 + v0_0)) + 0x0)));
    v0_3 = (((((signed char)v0_3 - 1) << 2) + (0x294 + v0_0)));
    v0_2 = (0x22);
    v0_1 = (0x0);
    goto L_C09755A;
    L_C097524:;
    v0_1 = (pl_button_jump_pressed(v0_0)) != 0;
    if (v0_1) goto L_C09753A;
    v0_1 = (signed char)(FUN_0c0a00e4(v0_0)) != 0;
    if (!(v0_1)) goto L_C09753A;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + 1.0f);
    v0_2 = *(signed char *)((v0_0 + 0xA));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C09757E;
    if ((v0_1 == 1)) goto L_C097588;
    if ((v0_1 == 2)) goto L_C097592;
    goto L_C09759C;
    L_C09753A:;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o40_float *)(v0_0))->v) = 0.0f;
    (((struct o38_float *)(v0_0))->v) = 0.0f;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 1.0f);
    v0_2 = (0x5);
    v0_1 = (0x6);
    goto L_C09755A;
    L_C097592:;
    *(volatile int *)((int)stk + 0);
    return pl_state39_phase2(v0_0);
    L_C097588:;
    *(volatile int *)((int)stk + 0);
    return pl_state39_phase1(v0_0);
    L_C09757E:;
    *(volatile int *)((int)stk + 0);
    return pl_state39_phase0(v0_0);
}
