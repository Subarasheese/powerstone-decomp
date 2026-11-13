/* @unit 0c06f4f0-0c06f8a8 */
typedef struct {
    char pad0[11]; char b11;
    char pad1[48-12]; int i48; int pad48b;
    float f56, f60, f64, f68, f72, f76;
    char pad2[236-80]; short s236; short s238; short s240; short s242;
    char pad3[740-244]; int i740;
    char pad4[29096-744]; char b29096; char b29097; char b29098;
    char pad5[29116-29099]; char b29116;
    char pad6[29184-29117]; int i29184;
    char pad7[29219-29188]; char b29219;
    char pad8[29372-29220]; char b29372;
} O;
extern char pl_step_motion(O *);
extern void pl_apply_motion_translation(O *);
extern void pl_start_motion(O *, int, int);
extern void pl_end_action_choose_state(O *);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern void pl_apply_velocity(O *);
extern void pl_apply_acceleration(O *);
extern void obj_set_record_char(O *, int);
extern char pl_landed(O *, float);
void FUN_0c06f4f0(O *p)
{
    pl_step_motion(p);
    pl_apply_motion_translation(p);
    if (p->b29098) {
        pl_start_motion(p, 1, 99);
        p->b29096 = p->b29097 = 1;
        p->b11++;
        p->b11++;
    }
}
void FUN_0c06f52e(O *p)
{
    pl_step_motion(p);
    if (p->b29098) {
        pl_start_motion(p, 1, 101);
        p->b29096 = p->b29097 = 1;
        p->b11++;
    }
}
void FUN_0c06f560(O *p)
{
    p->b29219 = 0;
    pl_end_action_choose_state(p);
}
void FUN_0c06f56c(O *p)
{
    char *t = &p->b29372;
    p->b29116 = 0;
    p->f56 = math_cos_angle16(0x14000 - p->i48) * 25.0f;
    p->f64 = math_sin_angle16(0x14000 - p->i48) * 25.0f;
    p->f68 = -p->f56 / 15.0f;
    p->f76 = -p->f64 / 15.0f;
    p->s236 = 3;
    p->f60 = p->f72 = 0;
    *t = 15;
    pl_start_motion(p, 1, 99);
    p->b29096 = p->b29097 = 1;
    p->b11++;
}
void FUN_0c06f600(O *p)
{
    char *t = &p->b29372;
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
    if (*t) {
        (*t)--;
    } else {
        p->f56 = p->f64 = p->f68 = p->f76 = 0;
    }
    if (pl_step_motion(p)) {
        p->f60 = 7.0f;
        p->f72 = -1.0f;
        pl_start_motion(p, 1, 100);
        obj_set_record_char(p, 115);
        p->s238 = 0;
        p->s240 = 6;
        p->s242 = 3;
        p->b29116 = 2;
        p->i29184 = 0;
        p->b11++;
    }
}
void FUN_0c06f6ca(O *p)
{
    char *t = &p->b29372;
    pl_apply_velocity(p);
    if (*t) {
        (*t)--;
    } else {
        p->f56 = p->f64 = p->f68 = p->f76 = 0;
    }
    if (p->i740 & 1024) p->s238++;
    if (pl_step_motion(p)) pl_start_motion(p, 1, 100);
    if (--p->s240 < 1) {
        if (p->s236 != 0) {
            p->s236--;
        } else if (p->s242 != 0 && (p->s238 != 0 || (p->i29184 & 1024))) {
            if (--p->s242 < 1) {
                pl_start_motion(p, 1, 102);
                p->b29096 = p->b29097 = 1;
                p->s236 = 25;
                p->b11++;
                return;
            }
        } else {
            pl_start_motion(p, 1, 101);
            p->b11 = 4;
            return;
        }
        obj_set_record_char(p, 115);
        p->i29184 = 0;
        p->s238 = 0;
        p->s240 = 6;
    }
}
void FUN_0c06f7dc(O *p)
{
    if (p->s236 == 0) {
        pl_apply_velocity(p);
        pl_apply_acceleration(p);
    } else {
        p->s236--;
    }
    if (pl_step_motion(p)) p->b11++;
}
void FUN_0c06f818(O *p)
{
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
    pl_step_motion(p);
    if (p->f60 < 0 && pl_landed(p, 0.0f)) {
        pl_start_motion(p, 1, 108);
        p->b11++;
    }
}
void pl_wangtang_wait_anim_end_c(O *p)
{
    if (pl_step_motion(p)) pl_end_action_choose_state(p);
}
