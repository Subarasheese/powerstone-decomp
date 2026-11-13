/* @unit 0c071b2c-0c071c50 */
typedef struct T {
    char p0[10]; char b10; char p1[17]; struct T *o; char p2[4]; float f24;
    char p3[0xec-0x28]; volatile short se; short sf;
    char p4[0x710a-0xf0]; char c710a; char p5[0x71a8-0x710b]; char a8; char a9; char p6[0x71f1-0x71aa]; char c71f1;
} T;
extern void pl_step_motion(T *), pl_apply_motion_translation(T *), pl_step_motion_owner(T *), snd_play_char_voice(T *, int);
extern void pl_apply_velocity(T *), pl_apply_acceleration(T *), cam_set_shake_ramp(int, int), obj_set_owner_hit_record(T *, int), obj_force_owner_state27(T *, int), FUN_0c09c45a(T *), pl_start_motion(T *, int, int);
extern char pl_landed(T *, float);
extern void FUN_0c071b94(T *);
void pl_wangtang_special2_phase1(T *p)
{
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    pl_step_motion_owner(p->o);
    pl_apply_motion_translation(p->o);
    if (!(--p->sf)) { if (!p->o->c71f1) { p->o->c710a = 1; } }
    if (p->se) {
        p->se--;
    } else {
        p->b10++;
        snd_play_char_voice(p->o, 12);
        FUN_0c071b94(p);
    }
}
void FUN_0c071b94(T *p)
{
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
    p->o->f24 = p->f24;
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    pl_step_motion_owner(p->o);
    pl_apply_motion_translation(p->o);
    if (pl_landed(p, 0.0f)) {
        cam_set_shake_ramp(10, 10);
        obj_set_owner_hit_record(p, 50);
        obj_force_owner_state27(p, 50);
        FUN_0c09c45a(p);
        pl_start_motion(p, 4, 4);
        p->a8 = p->a9 = 1;
        p->se = 17;
        p->b10++;
    }
}
