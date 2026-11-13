/* @unit 0c071c50-0c071e60 */
typedef struct Z Z;
struct Z { char pad0[9]; char c9; char c10; char c11; char c12; char pad13[15]; Z *z28; char pad32[16]; int l48; char pad52[4]; float f56; float f60; float f64; char pad68[4]; float f72; char pad76[160]; short w236; char pad238[28701]; char b28939; char b28940; char pad28941[155]; char b29096; char b29097; char b29098; };
typedef Z *P;
void pl_apply_velocity(P);
void pl_apply_acceleration(P);
void pl_step_motion(P);
void pl_apply_motion_translation(P);
void pl_step_motion_owner(P);
void pl_start_motion_owner(P, int, int);
void pl_end_action_choose_state(P);
void pl_change_state(P, int, int);
int pl_angle_to_opponent(P);
float math_cos_angle16(int);
float math_sin_angle16(int);
void FUN_0c071d0e(P);
void pl_wangtang_victim_phase1(P);
void pl_wangtang_victim_phase2(P);

void pl_wangtang_special2_phase3(P p)
{
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    if (--p->w236 == 0) {
        p->z28->c10 = 2;
        p->z28->w236 = 0;
        p->l48 = pl_angle_to_opponent(p);
        p->f56 = -(math_cos_angle16(0x14000 - p->l48) * 5.0f);
        p->f64 = -(math_sin_angle16(0x14000 - p->l48) * 5.0f);
        p->f60 = 15.0f;
        p->f72 = -0.75f;
        p->c10++;
    }
}
void pl_wangtang_special2_phase4(P p)
{
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    if (p->b29098)
        pl_end_action_choose_state(p);
}
void FUN_0c071d0e(P p)
{
    if (p->z28->c9 != 2)
        pl_end_action_choose_state(p);
}
void pl_wangtang_victim_phase1(P p)
{
    pl_step_motion_owner(p);
    pl_apply_motion_translation(p);
    if (p->b29098)
        pl_change_state(p, 15, 0);
}
void pl_wangtang_victim_phase2(P p)
{
    switch (p->c12) {
    case 0:
        pl_step_motion_owner(p);
        pl_apply_motion_translation(p);
        break;
    case 1:
        pl_start_motion_owner(p, 4, 64);
        p->b29097 = 1;
        p->b29096 = 1;
        p->b28939 = 1;
        p->b28940 = 1;
        p->c12++;
    case 2:
        pl_step_motion_owner(p);
        pl_apply_motion_translation(p);
        if (p->b29098) {
            pl_start_motion_owner(p, 2, 99);
            p->c12++;
        }
        break;
    case 3:
        pl_step_motion_owner(p);
        pl_apply_motion_translation(p);
        if (p->b29098)
            pl_change_state(p, 15, 0);
        break;
    }
}
void pl_wangtang_victim_dispatch(P p)
{
    switch (p->c11) {
    case 0: FUN_0c071d0e(p); break;
    case 1: pl_wangtang_victim_phase1(p); break;
    case 2: pl_wangtang_victim_phase2(p); break;
    }
}
