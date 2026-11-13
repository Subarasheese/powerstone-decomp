/* attack records, hit data setup, hit-stop shake, combo counter, damage helpers (0c08d644-0c09111e) */

extern int hit_find_contact_direction(char *fighter);
extern void FUN_0c0a3ea8(int a);
extern void pl_vib_start_preset(void *p, int a);
extern int FUN_0c0555c4(void);
extern void FUN_0c08e382(char *fighter);
extern void pl_change_state(char *fighter, int a, int b);
extern int FUN_0c09d818(char *fighter, int a);
extern int pl_start_motion(char *fighter, int a, int b);
extern void fx_spawn_044250(char *dst, int a);
extern float FUN_0c09b74c(char *fighter);
extern int cam_set_shake_ramp(int, int);
extern void pl_reset_combo_counter(char *fighter);
extern void FUN_0c098c86(char *fighter);

int pl_start_knockback_reaction(char *fighter)
{
    int hit_dir, dir;
    float divisor;

    if (fighter[0x721A] >= 2)
        return 0;
    hit_dir = hit_find_contact_direction(fighter);
    if ((signed char)hit_dir == 0)
        return 0;
    fighter[0x721A] = fighter[0x721A] + 1;
    FUN_0c0a3ea8(fighter[3]);
    pl_vib_start_preset(fighter, 15);
    if (fighter[0x71DD] == 1 && fighter[0x72AC] != 0 && *(short *)(fighter + 0x72A4) == 0 && FUN_0c0555c4() != 0) {
        FUN_0c08e382(fighter);
        pl_change_state(fighter, 38, hit_dir);
        return 1;
    }
    dir = (signed char)hit_dir;
    if (dir != 8 && FUN_0c09d818(fighter, hit_dir) >= 0 && !(*(unsigned char *)(*(int *)(fighter + 248) + 16) & 1)) {
        dir = ((dir - 4) << 14) - 32768;
        fighter[0x71DD] = 22;
        fighter[11] = 0;
        *(int *)(fighter + 48) = dir;
        pl_start_motion(fighter, 2, 152);
        fighter[0x71A9] = 1;
        fighter[0x71A8] = 1;
        fx_spawn_044250(fighter + 32, *(int *)(fighter + 48));
        *(float *)(fighter + 36) = *(float *)(fighter + 36) - FUN_0c09b74c(fighter);
        if (*(float *)(fighter + 724) > *(float *)(fighter + 36))
            *(float *)(fighter + 36) = *(float *)(fighter + 724);
        *(short *)(fighter + 236) = 20;
        *(short *)(fighter + 238) = 13;
        *(float *)(fighter + 76) = 0.0f;
        *(float *)(fighter + 68) = 0.0f;
        *(float *)(fighter + 64) = 0.0f;
        *(float *)(fighter + 56) = 0.0f;
        *(unsigned int *)(fighter + 60) = 0x80000000;
        *(float *)(fighter + 72) = -1.0f;
        cam_set_shake_ramp(10, 10);
        pl_reset_combo_counter(fighter);
        FUN_0c098c86(fighter);
        return 1;
    }
    divisor = 2.0f;
    switch (dir) {
    case 4:
    case 6:
        *(float *)(fighter + 56) = *(float *)(fighter + 56) / divisor;
        *(float *)(fighter + 64) = -(*(float *)(fighter + 64) / divisor);
        break;
    case 5:
    case 7:
        *(float *)(fighter + 56) = -(*(float *)(fighter + 56) / divisor);
        *(float *)(fighter + 64) = *(float *)(fighter + 64) / divisor;
        break;
    }
    return 0;
}
