/* state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 2 of 2 of the same module) (0c098160-0c098c48) */

typedef struct { int angles[4]; } angle4;
extern char pl_step_motion(char *);
extern void FUN_0c02f328(int);
extern void pl_mash_reduce_counter(char *, char *);
extern void pl_start_motion(char *, int, int);
extern void pl_change_state(char *, int, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
int FUN_0c0988c6(int);
int FUN_0c09898c(int);
int pl_state28_sub0_update(int);
int pl_state28_sub1_update(int);
int pl_state28_sub2_update(int);
int pl_tick_hitstop(int a4);
int FUN_0c0989ea(int);
int FUN_0c0989fc(int);
int FUN_0c098a0e(int);
int FUN_0c098a3c(int);
int FUN_0c098a64(int);
int FUN_0c098ac8(int);
int FUN_0c098b2a(int);
int FUN_0c098b96(void);
int pl_tick_hitstop(int);
int pl_end_action_choose_state(int);

int pl_state28_sub3_update(int a4);

void pl_state28_sub1_phase2(char *fighter)
{
    angle4 turn_angles;
    char *partner;
    float *pos_ptr;
    float trig;
    int i, best_idx, best_diff, diff, angle, step;
    short *step_table;

    turn_angles = *(angle4 *)0xC150A84;
    if ((*(char **)(fighter + 28))[9] != 3) {
        pl_start_motion(fighter, 1, 83);
        fighter[0x71A9] = 1;
        fighter[0x71A8] = 1;
        fighter[11] = 3;
        return;
    }
    pl_step_motion(fighter);
    if (*(short *)(fighter + 0xF0) != 0) {
        *(short *)(fighter + 0xF0) = *(short *)(fighter + 0xF0) - 1;
    }
    FUN_0c02f328(fighter[3]);
    pl_mash_reduce_counter(fighter, fighter + 0x723E);
    if (!((unsigned char)fighter[0x723E] > 0 && *(short *)(fighter + 0xF0) != 0) && *(short *)(fighter + 0xEE) < 5) {
        *(short *)(fighter + 0xEE) = *(short *)(fighter + 0xEE) + 1;
        step = *(short *)(fighter + 0xEE);
        step_table = (short *)0xC338E26;
        fighter[0x723E] = step_table[step * 3];
        step = *(short *)(fighter + 0xEE);
        *(int *)(fighter + 0x7248) = 0x10000 / (unsigned short)step_table[step * 3 + 1];
        step = *(short *)(fighter + 0xEE);
        *(short *)(fighter + 0xF0) = step_table[step * 3 + 2];
    }
    partner = *(char **)(fighter + 28);
    FUN_0c02f328(partner[3]);
    partner = *(char **)(fighter + 28);
    pl_mash_reduce_counter(partner, partner + 0x723E);
    if ((*(char **)(fighter + 28))[0x723E] == 0) {
        pl_change_state(*(char **)(fighter + 28), 19, 0);
        return;
    }
    angle = (unsigned short)(*(int *)(fighter + 48) - *(short *)(fighter + 0x7248));
    *(int *)(fighter + 48) = angle;
    *(int *)(*(char **)(fighter + 28) + 48) = angle;
    *(int *)(*(char **)(fighter + 28) + 48) = *(int *)(fighter + 48) + 0x8000;
    *(int *)(fighter + 48) = *(int *)(fighter + 48) & 0xFFFF;
    pos_ptr = (float *)(*(char **)(fighter + 28) + 32);
    trig = math_cos_angle16(0x14000 - *(int *)(fighter + 48));
    *pos_ptr = *(float *)(fighter + 32) + 100.0f * trig;
    pos_ptr = (float *)(*(char **)(fighter + 28) + 40);
    trig = math_sin_angle16(0x14000 - *(int *)(fighter + 48));
    *pos_ptr = *(float *)(fighter + 40) + 100.0f * trig;
    *(short *)(fighter + 0xEC) = *(short *)(fighter + 0xEC) - 1;
    if (*(short *)(fighter + 0xEC) != 0 && (*(int *)(fighter + 0x2DC) & 0x600) != 0) {
        return;
    }
    best_idx = 0;
    best_diff = 0x10000;
    for (i = 0; i <= 3; i++) {
        diff = *(int *)(fighter + 48) - turn_angles.angles[i];
        if ((diff & 0x8000) != 0) {
            diff = -diff;
        }
        diff = (unsigned short)diff;
        if (diff < best_diff) {
            best_idx = i;
            best_diff = diff;
        }
    }
    *(int *)(fighter + 48) = turn_angles.angles[best_idx];
    *(int *)(*(char **)(fighter + 28) + 48) = turn_angles.angles[best_idx];
    pos_ptr = (float *)(*(char **)(fighter + 28) + 32);
    trig = math_cos_angle16(0x14000 - *(int *)(fighter + 48));
    *pos_ptr = *(float *)(fighter + 32) + 100.0f * trig;
    pos_ptr = (float *)(*(char **)(fighter + 28) + 40);
    trig = math_sin_angle16(0x14000 - *(int *)(fighter + 48));
    *pos_ptr = *(float *)(fighter + 40) + 100.0f * trig;
    pl_change_state(*(char **)(fighter + 28), 20, *(short *)(fighter + 0xEE));
    fighter[0x7241] = 20;
    pl_start_motion(fighter, 1, 83);
    fighter[0x71A9] = 1;
    fighter[0x71A8] = 1;
    fighter[11] = fighter[11] + 1;
}

int pl_state28_sub3_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09898c(a4);
    }
    return FUN_0c0988c6(a4);
}

int pl_state_dispatch_720a(int a4)
{
    register int t0;
    int t2;

    t0 = pl_tick_hitstop(a4);
    if ((signed char)t0 == 0) {
        t2 = *(signed char *)((a4 + 0x720A));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if ((t2 != 3) && (t2 != 4)) {
                        return t2;
                    }
                    return pl_state28_sub3_update(a4);
                }
                return pl_state28_sub2_update(a4);
            }
            return pl_state28_sub1_update(a4);
        }
        return pl_state28_sub0_update(a4);
    }
    return (signed char)t0;
}

int FUN_0c098b9c(int a4)
{
    register int t0;
    register int t7;

    t0 = pl_tick_hitstop(a4);
    if ((signed char)t0 == 0) {
        if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9))) == 1) {
            return pl_end_action_choose_state(a4);
        }
        t7 = *(signed char *)((a4 + 0xA));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 != 2) {
                    if (t7 != 3) {
                        if (t7 != 4) {
                            if (t7 != 5) {
                                if (t7 != 6) {
                                    if (t7 != 7) {
                                        return t7;
                                    }
                                    return FUN_0c098b96();
                                }
                                return FUN_0c098b2a(a4);
                            }
                            return FUN_0c098ac8(a4);
                        }
                        return FUN_0c098a64(a4);
                    }
                    return FUN_0c098a3c(a4);
                }
                return FUN_0c098a0e(a4);
            }
            return FUN_0c0989fc(a4);
        }
        return FUN_0c0989ea(a4);
    }
    return (signed char)t0;
}
