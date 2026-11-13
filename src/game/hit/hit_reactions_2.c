/* hit reaction handlers (table indexed by +71DD) and dispatcher (part 2 of 2 of the same module) (0c09153c-0c092814) */

/* named globals (symbols.txt) */
extern char g_hit_reaction_tab[];
struct o106_uchar { char p[0x106]; unsigned char v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c08e382(int);
int pl_hitreact_21_phase1(int);
int pl_hitreact_21_phase2(int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_change_state(int, int, int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
int pl_stick_dir_angle(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oF8_int { char p[0xF8]; int v; };
int pl_start_motion(int, int, int);
int thunk_FUN_0c062242(int);
int FUN_0c0555c4(void);
int pl_end_action_choose_state(int);
int sys_return_zero_098c82(void);

int pl_hitreact_22_phase1(int a4);
int pl_hitreact_23_phase0(int a4);
int pl_hitreact_23_phase1(int a4);
int pl_hitreact_23_phase2(int a4);

int pl_hitreact_19_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0914E0))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC091498))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC091378))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091326))(a4, a5, a6, a7);
}

int pl_hitreact_20_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC0916D4))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09168C))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0915C2))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC091596))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091566))(a4, a5, a6, a7);
}

float pl_hitreact_21_stick_vector(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    if ((((((struct o2DC_int *)(a4))->v)) & 240) != 0) {
        t0 = pl_stick_dir_angle(a4);
        t1 = *(short *)0xC7F31E0;
        t2 = *(int *)((a4 + 0x30));
        t3 = (unsigned short)((unsigned short)(t0 + t1) - t2);
        if ((0x8000 & (unsigned short)((unsigned short)(t0 + t1) - t2)) != 0) {
            t3 = ((unsigned short)((unsigned short)(t0 + t1) - t2) | 0xFFFF0000);
        }
        if ((int)t3 <= (int)0xFFFFE000) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 0x2000);
        } else {
            if ((int)t3 >= (int)0x2000) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x2000);
            } else {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
            }
        }
        t0 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t0 & 0xFFFF);
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(t0 & 0xFFFF)) + 0x14000))) * 4.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
        (((struct o40_float *)(a4))->v) = (u0 * 4.0f);
        u1 = (u0 * 4.0f);
    }
    return u1;
}

int pl_hitreact_21_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC091A18))(a4, a5, a6, a7);
            }
            return pl_hitreact_21_phase2(a4);
        }
        return pl_hitreact_21_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC09172C))(a4, a5, a6, a7);
}

int pl_hitreact_22_phase1(int a4)
{
    register int t1;

    pl_apply_motion_translation(a4);
    t1 = pl_step_motion(a4);
    if ((signed char)t1 != 0) {
        FUN_0c08e382(a4);
        return pl_change_state(a4, 0xF, 0x0);
    }
    return (signed char)t1;
}

int pl_hitreact_22_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o106_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_hitreact_22_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC091A68))(a4, a5, a6, a7);
}

int pl_hitreact_23_phase0(int a4)
{
    register int t0;
    register int t1;

    (((struct oEC_ushort *)(a4))->v) = 0x78;
    t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 96) {
            if ((unsigned char)t0 != 97) {
                if ((unsigned char)t0 != 98) {
                    if ((unsigned char)t0 != 99) {
                        if ((*(signed char *)((a4 + 0x71BC))) != 2) {
                            t0 = *(signed char *)((a4 + 0x7205));
                            t1 = (*(signed char *)(((((unsigned char)(*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6))) - 1) + (0xC1507CE + (signed char)((t0 << 1) + (t0 << 2)))) + 0x0)));
                        } else {
                            t0 = *(signed char *)((a4 + 0x3));
                            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
                            t0 = *(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x6));
                            t1 = 0x60;
                            if ((unsigned char)t0 != 1) {
                                t1 = 0x80;
                                if ((unsigned char)t0 != 2) {
                                    t1 = 0x70;
                                    if (((unsigned char)t0 != 3) && ((unsigned char)t0 != 4)) {
                                        t1 = 0x60;
                                    }
                                }
                            }
                        }
                        pl_start_motion(a4, 0x2, t1);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                    } else {
                        pl_start_motion(a4, 0x2, 0xAF);
                        *(unsigned char *)((a4 + 0xB)) = 0x2;
                        (((struct o106_uchar *)(a4))->v) = 0x1;
                    }
                } else {
                    pl_start_motion(a4, 0x2, 0xF);
                    (((struct o101_uchar *)(a4))->v) = 0x0;
                    (((struct o102_uchar *)(a4))->v) = 0xA;
                    *(unsigned int *)((a4 + 0x30)) = (*(int *)(((*(int *)((a4 + 0x1C))) + 0x30)));
                    (((struct oEC_ushort *)(a4))->v) = 0x96;
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                }
            } else {
                pl_start_motion(a4, 0x2, 0xD);
                *(unsigned char *)((a4 + 0xB)) = 0x2;
            }
        } else {
            pl_start_motion(a4, 0x2, 0xF);
            *(unsigned char *)((a4 + 0xB)) = 0x2;
        }
    } else {
        pl_start_motion(a4, 0x2, (*(signed char *)(((*(signed char *)((a4 + 0x7205))) + 0xC1508C0))));
        (((struct o101_uchar *)(a4))->v) = 0x0;
        (((struct o102_uchar *)(a4))->v) = 0xA;
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    return 0x71A8;
}

int pl_hitreact_23_phase1(int a4)
{
    int t0;
    register int t1;
    register int t2;

    pl_step_motion(a4);
    (((struct o101_uchar *)(a4))->v) = 0x0;
    (((struct o102_uchar *)(a4))->v) = 0xA;
    t2 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
    if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
        t0 = t1;
    } else {
        (((struct o71DD_uchar *)(a4))->v) = 0x2;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int pl_hitreact_23_phase2(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 7) {
        t4 = FUN_0c0555c4();
        if (t4 != 0) {
            if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 8) {
                pl_step_motion(a4);
                t4 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
                t5 = 0xEC;
                if ((short)(t4 - 1) == 0) {
                    (((struct o71DD_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)((a4 + 0xC)) = 0x0;
                    *(unsigned char *)((a4 + 0xB)) = 0x0;
                    t5 = 0x0;
                }
                return t5;
            }
            pl_step_motion(a4);
            t4 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t4 - 1);
            if (((short)(t4 - 1) != 0) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 11)) {
                return t1;
            }
            return pl_end_action_choose_state(a4);
        }
        return pl_end_action_choose_state(a4);
    }
    (((struct o106_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) != 8) {
        pl_step_motion(a4);
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0xEC;
        if ((short)(t0 - 1) == 0) {
            (((struct o71DD_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xC)) = 0x0;
            *(unsigned char *)((a4 + 0xB)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if (((short)(t0 - 1) != 0) && (t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((0x71BA + t2)), t3 == 11)) {
        return t3;
    }
    return pl_end_action_choose_state(a4);
}

int pl_hitreact_23_25_26_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_hitreact_23_phase2(a4);
        }
        return pl_hitreact_23_phase1(a4);
    }
    return pl_hitreact_23_phase0(a4);
}

int FUN_0c091eee(int a4, int a5, int a6, int a7)
{
    register int t2;

    sys_return_zero_098c82();
    t2 = *(int *)((((*(signed char *)((a4 + 0x71DD))) << 2) + ((int)g_hit_reaction_tab)));
    return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
}

int pl_hitreact_27_update(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((int)((((struct oF0_short *)(a4))->v)) > 0) {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
    }
    t4 = *(signed char *)((a4 + 0xB));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                return t4;
            }
            return ((int (*)(int, int, int, int))(0xC092136))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0920C4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC091F50))(a4, a5, a6, a7);
}
