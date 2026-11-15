/* Kraken attack update, class handlers and state updates (part 2 of 7 of the same module) (0c084d0c-0c085606) */

extern int pl_start_motion(unsigned char *, int, int);
extern int pl_stick_dir_angle(unsigned char *);
extern int pl_angle_to_target_pos(unsigned char *);
extern int pl_step_motion(unsigned char *);
extern int pl_apply_motion_translation(unsigned char *);
extern int pl_start_hit_freeze(unsigned char *, int);

void pl_kraken_attack_kind6_phase1(unsigned char *obj);

void pl_kraken_attack_kind6_phase0(unsigned char *obj)
{
    int target_ang;

    obj[11]++;
    *(float *)(obj + 64) = 0;
    *(float *)(obj + 60) = 0;
    *(float *)(obj + 56) = 0;
    *(float *)(obj + 76) = 0;
    *(float *)(obj + 72) = 0;
    *(float *)(obj + 68) = 0;
    *(int *)(obj + 0x7248) = *(int *)(obj + 48);
    obj[0x710B] = 0;
    obj[0x710C] = 0;
    obj[0x71BC] = 0;
    pl_start_motion(obj, 1, 102);
    obj[0x71A9] = 1;
    obj[0x71A8] = 1;
    *(short *)(obj + 236) = 15;
    if (*(int *)(obj + 732) & 0xF0)
        target_ang = pl_stick_dir_angle(obj) + *(short *)0xC7F31E0;
    else
        target_ang = pl_angle_to_target_pos(obj);
    *(int *)(obj + 0x7248) = (unsigned short)target_ang;
    pl_kraken_attack_kind6_phase1(obj);     /* the original falls into it */
}

/* Phase 1: the motion steps; when it reaches its end (+0x71AA), the next phase starts its motion (103) with a hit-freeze;
   until then the timer counts down (held at 1) and the facing turns toward +0x7248 by the part the timer leaves. */
void pl_kraken_attack_kind6_phase1(unsigned char *obj)
{
    short timer;
    short diff;

    pl_step_motion(obj);
    pl_apply_motion_translation(obj);
    if (obj[0x71AA]) {
        obj[11]++;
        *(short *)(obj + 236) = ((short *)0xC337B9C)[(signed char)obj[0x721D]];
        pl_start_motion(obj, 1, 103);
        obj[0x71A9] = 1;
        obj[0x71A8] = 1;
        pl_start_hit_freeze(obj, 0);
        return;
    }
    timer = *(short *)(obj + 236) - 1;
    *(short *)(obj + 236) = timer;
    if (timer == 0)
        *(short *)(obj + 236) = 1;
    {
        /* the original reads the facing (+0x30) twice, before +0x7248 and again before the timer: kept apart */
        int facing = *(volatile int *)(obj + 48);
        diff = *(short *)(obj + 0x7248) - facing;
        facing = *(volatile int *)(obj + 48);
        *(int *)(obj + 48) = (unsigned short)(facing + diff / *(short *)(obj + 236));
    }
}
