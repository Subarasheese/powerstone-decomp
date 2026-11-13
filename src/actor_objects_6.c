/* @unit 0c08c648-0c08c864 */
typedef struct { float x, y, z; } V;
typedef struct T {
    char p0[10]; char b10; char b11; char p1[16]; struct T *o; V pos; char p2[4]; int d48; char p3[4];
    float f56, f60, f64, f68, f72; char p4[0xec-76]; short se; char p5[0x71a8-0xee]; char a8, a9; char p6[0x7248-0x71aa]; int a;
} T;
extern char pl_step_motion(T *);
extern char pl_landed(T *, float);
extern void pl_start_motion(T *, int, int), pl_apply_velocity(T *), pl_apply_acceleration(T *), pl_apply_motion_translation(T *);
extern float math_cos_angle16(int), math_sin_angle16(int);
extern void cam_set_shake_ramp(int, int), obj_set_owner_hit_record(T *, int), obj_force_owner_state27(T *, int), pl_spawn_hit_effect_with_se(T *), pl_end_action_reset(T *), pl_end_action_choose_state(T *);
extern char _quick_odd_mvn;
void FUN_0c08c648(T *p)
{
    pl_step_motion(p);
    p->o->pos = p->pos;
    if (p->se-- <= 0) {
        p->a = (unsigned short)((short)p->a + 0x160);
        p->d48 = (unsigned short)(p->d48 + (short)p->a);
        p->o->d48 = (unsigned short)(p->d48 + 0x8000);
    }
    if (pl_landed(p, 0.0f)) {
        pl_start_motion(p, 4, 3);
        p->a8 = p->a9 = 1;
        p->f60 = 18.0f;
        p->f72 = -0.9f;
        p->f56 = math_cos_angle16(0x14000 - p->d48) * 3.3f;
        p->f64 = math_sin_angle16(0x14000 - p->d48) * 3.3f;
        p->d48 = (unsigned short)(p->d48 + 0x8000);
        cam_set_shake_ramp(10, 10);
        obj_set_owner_hit_record(p, 50);
        obj_force_owner_state27(p, 50);
        p->b10++;
        return;
    }
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
}
void FUN_0c08c732(T *p)
{
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    if (p->f60 < 0.0f && pl_landed(p, 0.0f)) {
        pl_spawn_hit_effect_with_se(p);
        pl_start_motion(p, 1, 146);
        p->b10++;
        return;
    }
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
}
void FUN_0c08c7de(T *p)
{
    if (pl_step_motion(p)) pl_end_action_reset(p);
}
extern void (*g_obj_phase_handler_tab[])(T *);
void obj_run_phase_handler(T *p)
{
    g_obj_phase_handler_tab[p->b10](p);
}
typedef struct { char pad[0x71ba]; char c; } W;
void FUN_0c08c810(T *p)
{
    if (((W *)p->o)->c != 11) pl_end_action_choose_state(p);
}
void FUN_0c08c824(T *p)
{
    if (((W *)p->o)->c != 11) pl_end_action_choose_state(p);
}
void FUN_0c08c838(T *p)
{
    switch (p->b11) {
    case 0: FUN_0c08c810(p); break;
    case 1: FUN_0c08c824(p); break;
    }
}
