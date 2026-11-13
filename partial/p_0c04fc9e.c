/* @unit 0c04fc9e-0c04fed8 -macsave=1 */
/* _modlu */
struct E { int p0[3]; int i12; char p1[80]; float f96, f100, f104; char p2[596 - 108]; };
struct O { char p[32]; float f32, f36, f40; };
struct V { float a, b, c; };
extern struct E g_ai_slots[];
extern volatile unsigned char g_ai_cur_slot;
extern int g_ai_pc;
extern short g_ai_run_flag;
extern unsigned char g_stage_id;
extern struct V *g_ai_stage_pos_tbl[];
float math_rand_float(void);
void ai_clear_op_state(void);
void ai_op73_set_goal_by_side(struct O *o);
void ai_op85_set_goal_stage_table(void);
#define EE ((struct E *)((char *)ea + (short)(*pi * 596)))
#define EG ((struct E *)((char *)g_ai_slots + (short)(g_ai_cur_slot * 596)))
void ai_op73_set_goal_by_side(struct O *o)
{
    register unsigned char *pi = &g_ai_cur_slot;
    register struct E *ea = g_ai_slots;
    if (400.0f > o->f36) {
        if (o->f32 > -o->f40 + -100.0f) {
            EE->f96 = o->f32;
            EE->f100 = 0.0f;
            EE->f104 = 300.0f;
            goto done;
        }
        EE->f96 = -550.0f;
    } else {
        if (o->f32 > -o->f40 + -100.0f) {
            EE->f96 = o->f32;
            EE->f100 = 0.0f;
            EE->f104 = -100.0f;
            goto done;
        }
        EE->f96 = 50.0f;
    }
    EE->f100 = 0.0f;
    EE->f104 = o->f40;
done:
    EE->i12 = g_ai_pc;
    ai_clear_op_state();
    g_ai_run_flag = 1;
}
void ai_op85_set_goal_stage_table(void)
{
    struct V *t = g_ai_stage_pos_tbl[g_stage_id];
    struct V *p = t + (unsigned)(math_rand_float() * 255.0f) % 4;
    EG->f96 = p->a;
    EG->f100 = p->b;
    EG->f104 = p->c;
    EG->i12 = g_ai_pc;
    ai_clear_op_state();
    g_ai_run_flag = 1;
}
