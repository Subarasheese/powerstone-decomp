/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c0641a0-0c064a1c) */

extern void pl_step_motion(char *);
extern int pl_landed(char *, float);
extern void FUN_0c09c45a(char *);
extern void cam_set_shake_ramp(int, int);
extern void pl_spawn_hit_effect_with_se(char *);
extern int pl_get_hit_count_of_opponent(char *);
extern void pl_start_motion(char *, int, int);
extern void pl_change_state(char *, int, int);
extern void pl_apply_velocity(char *);
extern void pl_apply_acceleration(char *);

void pl_update_hit_reaction(char *obj)
{
    *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) - 1;
    if (*(short *)(obj + 0xEC) > 0)
        obj[0x2D9] = 2;
    pl_step_motion(obj);
    if (*(float *)(obj + 0x274) < 0.0f)
        *(float *)(obj + 60) = *(float *)(obj + 60) / 2.0f;
    if (obj[4] == 4) {
        if (!(*(float *)(obj + 60) < 0.0f))
            goto no_reaction;
        if ((signed char)pl_landed(obj, 0.0f) == 0)
            goto no_reaction;
        FUN_0c09c45a(obj);
        cam_set_shake_ramp(30, 20);
        goto start_knock;
    }
    if (obj[4] == 5) {
        if (!(*(float *)(obj + 60) < 0.0f))
            goto no_reaction;
        if ((signed char)pl_landed(obj, 0.0f) == 0)
            goto no_reaction;
        pl_spawn_hit_effect_with_se(obj);
        *(int *)(obj + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    start_knock:
        pl_start_motion(obj, 1, 152);
        obj[10] = 3;
        obj[0x71A9] = 1;
        obj[0x71A8] = 1;
        return;
    }
    if (!(*(float *)(obj + 60) < 0.0f))
        goto no_reaction;
    if ((signed char)pl_landed(obj, 0.0f) == 0)
        goto no_reaction;
    if (obj[0x108] != 0 && (signed char)pl_get_hit_count_of_opponent(obj) != 0) {
        if (obj[4] == 7) {
            pl_start_motion(obj, 1, 152);
            obj[0x71A9] = 1;
            obj[0x71A8] = 1;
            obj[10] = 3;
            return;
        }
        if (obj[4] != 2)
            *(int *)(obj + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
        goto guard_break;
    }
    if (obj[4] == 7)
        goto guard_break;
    if (obj[4] != 2)
        *(int *)(obj + 48) = (unsigned short)(*(int *)(obj + 48) + 0x8000);
    pl_start_motion(obj, 1, 152);
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    pl_spawn_hit_effect_with_se(obj);
    obj[0x710B] = 1;
    *(short *)(obj + 0xEC) = 35;
    obj[10] = obj[10] + 1;
    return;
guard_break:
    pl_change_state(obj, 6, 0);
    return;
no_reaction:
    pl_apply_velocity(obj);
    pl_apply_acceleration(obj);
}
