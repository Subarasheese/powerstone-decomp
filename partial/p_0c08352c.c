/* @unit 0c08352c-0c0835dc -extra=a=400 */
/* _quick_odd_mvn */
typedef struct { float x, y, z; } V;
typedef struct T {
    char p0[10]; char b10; char b11; char b12; char p1[15]; struct T *o; V pos; char p2[4]; int d48; char p3[4];
    char p4[0xec-56]; short se; short sf; char p5[0x710b-0xf0]; char c10b, c10c; char p6[0x71a8-0x710d]; char a8, a9;
} T;
extern void pl_start_motion(T *, int, int), pl_start_motion_owner(T *, int, int);
extern char _quick_odd_mvn;
extern void pl_step_motion(T *), pl_apply_motion_translation(T *), obj_set_owner_hit_record(T *, int), cam_set_shake_ramp(int, int), pl_end_action_choose_state(T *);
void pl_rouge_special_id4(T *p)
{
    if (0) {
        pl_step_motion(p);
        if (--p->sf == 0) { if (!p->o->a9) p->o->a8 = 1; }
        pl_apply_motion_translation(p); obj_set_owner_hit_record(p, 1); cam_set_shake_ramp(1, 1); pl_end_action_choose_state(p);
    }
    p->o->pos = p->pos;
    p->o->d48 = (unsigned short)(p->d48 + 0x8000);
    pl_start_motion(p, 4, 2);
    p->a8 = p->a9 = 1;
    pl_start_motion_owner(p->o, 4, 55);
    p->o->a8 = p->o->a9 = 1;
    p->o->c10b = 1; p->o->c10c = 1;
    p->se = 0;
    p->sf = 85;
    p->b10++;
    p->o->b11 = 2;
    p->o->b12 = 0;
}
