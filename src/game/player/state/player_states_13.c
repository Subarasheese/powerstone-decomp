/* @unit 0c0976fc-0c09788c */
struct S {
    char pad0[10];
    char b10;
    char pad11[21];
    float f32;
    float f36;
    float f40;
    char pad44[4];
    int l48;
    char pad52[4];
    float f56;
    float f60;
    float f64;
    float f68;
    float f72;
    float f76;
    char pad80[156];
    short h236;
    short h238;
    char pad240[420];
    struct S *ch[4];
    char pad676[28420];
    char b29096;
    char b29097;
};
extern char pl_step_motion(struct S *p);
extern void pl_start_motion(struct S *p, int a, int b);
extern char hit_find_interactable_contact(struct S *p, int a);
extern float FUN_0c02651e(struct S *p);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
extern char pl_landed(struct S *p, float a);
extern void pl_spawn_hit_effect_with_se(struct S *p);
extern void pl_change_state(struct S *p, int a, int b);
extern void pl_apply_velocity(struct S *p);
extern void pl_apply_acceleration(struct S *p);
extern void FUN_0c089b1a();
void pl_state41_phase_launch(struct S *p)
{
    char c;
    struct S *q;
    if (pl_step_motion(p) && p->h238 == 0) {
        pl_start_motion(p, 2, 208);
        p->h238++;
    }
    if ((c = hit_find_interactable_contact(p, 11))) {
        q = p->ch[c - 1];
        p->f32 = q->f32;
        p->f40 = q->f40;
        p->f36 = q->f36 - FUN_0c02651e(p);
    }
    if (--p->h236 == 0) {
        p->f56 = math_cos_angle16(0x14000 - p->l48) * 5.0f;
        p->f64 = math_sin_angle16(0x14000 - p->l48) * 5.0f;
        p->f68 = p->f76 = 0.0f;
        p->f60 = 18.0f;
        p->f72 = -1.5f;
        pl_start_motion(p, 0, 8);
        p->b29096 = p->b29097 = 1;
        p->b10++;
    }
}
void pl_state41_phase_air(struct S *p)
{
    pl_step_motion(p);
    if (p->f60 < 0.0f && pl_landed(p, 0.0f)) {
        pl_spawn_hit_effect_with_se(p);
        pl_change_state(p, 6, 0);
        return;
    }
    pl_apply_velocity(p);
    pl_apply_acceleration(p);
}
void pl_state41_update(struct S *p)
{
    switch (p->b10) {
    case 1:
        pl_state41_phase_air(p);
        break;
    case 0:
    case 2:
        pl_state41_phase_launch(p);
        break;
    }
}
void pl_state42_update()
{
    FUN_0c089b1a();
}
