/* Kraken attack update, class handlers and state updates (part 2 of 7 of the same module) (0c084d0c-0c085606) */

extern short g_cam_yaw16;
void pl_start_motion(char *fighter, int a, int b);
int pl_stick_dir_angle(char *fighter);
int pl_angle_to_target_pos(char *fighter);
void *FUN_0c0c571c(char *o, int kind);
void fx_spawn_03d254(char *o, int a);
void snd_play_char_voice(char *o, int action);
void pl_end_action_choose_state(char *o);
void pl_step_motion(char *o);
void pl_apply_motion_translation(char *o);
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define ARM0 (o + 0x1E80 + 0x1760)
#define ARM1 (o + 0x1E80 + 0x1810)
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int fx_spawn_34(int, int);

void pl_kraken_attack_kind2_phase1(char *o);

void pl_kraken_attack_kind2_phase0(char *fighter)
{
    int turn_ang;
    short counter;
    fighter[11] = fighter[11] + 1;
    *(float *)(fighter + 64) = 0.0f;
    *(float *)(fighter + 60) = 0.0f;
    *(float *)(fighter + 56) = 0.0f;
    *(float *)(fighter + 76) = 0.0f;
    *(float *)(fighter + 72) = 0.0f;
    *(float *)(fighter + 68) = 0.0f;
    fighter[0x71BC] = 0;
    pl_start_motion(fighter, 1, 96);
    fighter[0x71A9] = 1;
    fighter[0x71A8] = 1;
    if (*(int *)(fighter + 732) & 0xF0)
        turn_ang = pl_stick_dir_angle(fighter) + g_cam_yaw16;
    else
        turn_ang = pl_angle_to_target_pos(fighter);
    *(int *)(fighter + 0x7248) = (unsigned short)turn_ang;
    counter = (short)(int)((float)*(short *)(fighter + 0x71F4) - 120.0f);
    *(short *)(fighter + 0x71F4) = counter;
    if (counter < 0)
        *(short *)(fighter + 0x71F4) = 0;
    *(short *)(fighter + 240) = 13;
    pl_kraken_attack_kind2_phase1(fighter);
}

void pl_kraken_attack_kind2_phase1(char *o)
{
    void *item;
    short d;

    if (*(unsigned short *)(o + 0x719E) == 11) {
        I(ARM0, 84) = I(ARM0, 84) - 0x4000;
        I(ARM1, 84) = I(ARM1, 84) + 0x4000;
    }
    if (*(unsigned short *)(o + 0x719E) == 13) {
        item = FUN_0c0c571c(o, 0);
        *(void **)(o + 0x72BC + 8) = item;
        if (item == 0) {
            B(o, 0x7223) = 0;
            pl_end_action_choose_state(o);
        } else {
            fx_spawn_03d254(o, 0);
            I(ARM0, 84) = 0;
            I(ARM1, 84) = 0;
            ARM0[64] = 0;
            ARM1[64] = 0;
            B(o, 0x5CA0) = 0;
            snd_play_char_voice(o, 50);
            B(o, 11) = B(o, 11) + 1;
            H(o, 0xEC) = 180;
        }
    }
    pl_step_motion(o);
    pl_apply_motion_translation(o);
    H(o, 0xF0) = H(o, 0xF0) - 1;
    if (H(o, 0xF0) == 0)
        H(o, 0xF0) = 1;
    d = (short)(H(o, 0x7248) - I(o, 48));
    I(o, 48) = (unsigned short)(I(o, 48) + d / H(o, 0xF0));
}

int FUN_0c0852a6(int a4, int a5)
{
    int stk[1];
    register int t11;
    register int t14;

    *(unsigned short *)(((int)stk + 0)) = a5;
    if ((int)((((struct oF0_short *)(a4))->v)) < (int)0x5) {
        if (((((struct oEE_short *)(a4))->v)) == 0) {
            fx_spawn_34(a4, (((((struct oF0_short *)(a4))->v)) + (*(short *)(((int)stk + 0)))));
            (((struct oEE_ushort *)(a4))->v) = (*(short *)(((((((struct oF0_short *)(a4))->v)) << 1) + 0xC150530)));
            t11 = 0xF0;
            t14 = (((((struct oF0_short *)(a4))->v)) + 0x1);
        } else {
            t11 = 0xEE;
            t14 = (((((struct oEE_short *)(a4))->v)) - 1);
        }
        *(unsigned short *)((a4 + t11)) = t14;
    }
    if (((((struct oF2_short *)(a4))->v)) != 0) {
        (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 1);
    }
    return 0xF2;
}
