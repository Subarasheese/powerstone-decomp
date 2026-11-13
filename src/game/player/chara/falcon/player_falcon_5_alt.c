/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c067d4c-0c068e10) */

extern int pl_angle_to_opponent(unsigned char *);
extern void thunk_math_mat_get_translate(unsigned char *, float *);
extern float math_signed_sqrt(float);
extern int math_atan_angle16(float);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int pl_step_motion(char *);
extern int pl_get_hit_count_of_opponent(char *);
extern void obj_set_record_char(char *, int);
extern char *pl_find_opponent_in_target_list(char *);
extern int hit_find_contact_direction(char *);
extern int FUN_0c068488(char *);
extern int FUN_0c0555c4(void);
extern void fx_spawn_0332a0(char *, int);
extern void pl_start_motion(char *, int, int);
extern void pl_apply_velocity(char *);

void pl_falcon_aim_at_target(unsigned char *obj)
{
    unsigned char *target;
    unsigned char *player_blk;
    float rel[3];
    int ang;

    *(int *)(obj + 48) = pl_angle_to_opponent(obj);
    target = *(unsigned char **)(obj + 28);
    player_blk = (unsigned char *)0xC7E40C4 + (unsigned short)((1 - (signed char)obj[3]) * 0x72D0);
    if ((signed char)target[4] == 10)
        thunk_math_mat_get_translate(player_blk + 768 + (short)((signed char)player_blk[0x71F1] * 3520) + 704, rel);
    else
        thunk_math_mat_get_translate(player_blk + 768 + (short)((signed char)player_blk[0x71F1] * 3520), rel);
    if (obj[15])
        *(int *)(obj + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    obj[15] = 0;
    rel[0] = rel[0] - *(float *)(obj + 32);
    rel[1] = rel[1] - *(float *)(obj + 36);
    rel[2] = rel[2] - *(float *)(obj + 40);
    if (rel[1] == 0)
        rel[1] = 9.99999975e-06f;
    ang = math_atan_angle16(math_signed_sqrt(rel[2] * rel[2] + rel[0] * rel[0]) / rel[1]);
    if (rel[1] < 0)
        ang += 0x8000;
    *(int *)(obj + 44) = ang - 0x4000;
    *(float *)(obj + 56) = math_cos_angle16(0x14000 - *(int *)(obj + 48)) * 40.0f;
    *(float *)(obj + 64) = math_sin_angle16(0x14000 - *(int *)(obj + 48)) * 40.0f;
    *(float *)(obj + 60) = -(math_cos_angle16(0x14000 - *(int *)(obj + 44)) * 40.0f);
}

void pl_falcon_attack_kind68_phase2(char *player)
{
    char *other;
    int ready;
    int unused_f0;

    pl_step_motion(player);
    *(short *)(player + 0xEE) = *(short *)(player + 0xEE) - 1;
    *(short *)(player + 0xEC) = *(short *)(player + 0xEC) - 1;
    if ((signed char)pl_get_hit_count_of_opponent(player) != 0) {
        *(short *)(player + 0xF0) = *(short *)(player + 0xF0) + 1;
        if (*(short *)(player + 0xF0) > 4)
            *(short *)(player + 0xF0) = 4;
        else
            obj_set_record_char(player, ((signed char *)0x0C14EEBA)[*(short *)(player + 0xF0)]);
    }
    other = pl_find_opponent_in_target_list(player);
    if (other != 0) {
        player[15] = 0;
        if (other[4] == 10)
            player[15] = 1;
    }
    if ((signed char)hit_find_contact_direction(player) != 0 && *(short *)(player + 0xEE) <= 0)
        ready = 1;
    else
        ready = 0;
    if ((signed char)ready == 0) {
        if ((signed char)FUN_0c068488(player) == 0 || *(short *)(player + 0xEE) > 0) {
            if (*(short *)(player + 0xF0) != 4 || player[15] == 0)
                goto done;
        }
    }
    if (*(short *)(player + 0xEC) > 0 && FUN_0c0555c4() != 0) {
        fx_spawn_0332a0(player, 0);
        *(short *)(player + 0xEE) = 10;
        pl_start_motion(player, 1, 159);
        player[0x71A9] = 1;
        player[0x71A8] = 1;
        *(float *)(player + 36) = *(float *)(player + 36) - 75.0f;
        player[10] = player[10] + 1;
        return;
    }
    pl_start_motion(player, 2, 205);
    *(short *)(player + 0xEC) = 9;
    player[0x71A9] = 1;
    player[0x71A8] = 1;
    *(float *)(player + 56) = -(math_cos_angle16(0x14000 - *(int *)(player + 48)) * 6.0f);
    *(float *)(player + 64) = -(math_sin_angle16(0x14000 - *(int *)(player + 48)) * 6.0f);
    *(float *)(player + 60) = 15.0f;
    *(float *)(player + 72) = -1.22499990f;
    *(float *)(player + 76) = 0.0f;
    *(float *)(player + 68) = 0.0f;
    *(int *)(player + 44) = 0;
    player[10] = 4;
done:
    pl_apply_velocity(player);
}
