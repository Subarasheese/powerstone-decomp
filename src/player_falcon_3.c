/* @unit 0c067a68-0c067bcc */
typedef struct S { char pad[0x719e]; unsigned short s719e; char pad2[0x71aa-0x71a0]; char c71aa; char pad3[0x721f-0x71ab]; char st; char pad4[0x7238-0x7220]; char idx; } S;
typedef void (*FN)(S *);
extern FN g_pl_falcon_update_action_tbl[];
extern void pl_mode01_03_update(S *);
extern void pl_mode04_update(S *);
extern void pl_mode05_update(S *);
extern void pl_mode06_update(S *);
extern void pl_mode07_update(S *);
extern void pl_mode08_update(S *);
extern void pl_mode09_update(S *);
extern void pl_mode10_update(S *);
extern void pl_mode11_update(S *);
extern void pl_mode12_update(S *);
extern void pl_mode13_update(S *);
extern void pl_mode14_update(S *);
extern void pl_mode15_update(S *);
extern int pl_step_motion(S *);
extern void pl_apply_motion_translation(S *);
extern void pl_end_action_choose_state(S *);
extern void pl_spawn_hit_effect_with_se(S *);
void pl_falcon_state_update(S *p)
{
    switch (p->st) {
    case 0: case 2:
        g_pl_falcon_update_action_tbl[p->idx](p);
        break;
    case 1: case 3:
        pl_mode01_03_update(p);
        break;
    case 4:
        pl_mode04_update(p);
        break;
    case 5:
        pl_mode05_update(p);
        break;
    case 6:
        pl_mode06_update(p);
        break;
    case 7:
        pl_mode07_update(p);
        break;
    case 8:
        pl_mode08_update(p);
        break;
    case 9:
        pl_mode09_update(p);
        break;
    case 10:
        pl_mode10_update(p);
        break;
    case 11:
        pl_mode11_update(p);
        break;
    case 12:
        pl_mode12_update(p);
        break;
    case 13:
        pl_mode13_update(p);
        break;
    case 14:
        pl_mode14_update(p);
        break;
    case 15:
        pl_mode15_update(p);
        break;
    }
}
void pl_falcon_update_action_default(S *p)
{
    int r = pl_step_motion(p);
    pl_apply_motion_translation(p);
    if (p->c71aa) pl_end_action_choose_state(p);
}
void pl_falcon_update_action_7(S *p)
{
    if ((char)pl_step_motion(p)) {
        pl_end_action_choose_state(p);
        return;
    }
    if (p->s719e == 34) pl_spawn_hit_effect_with_se(p);
    pl_apply_motion_translation(p);
}
