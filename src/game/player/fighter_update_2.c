/* @unit 0c092894-0c092908 */
struct P { char pad[10]; char st; };
void pl_start_motion(struct P *p, int a, int b);
char pl_step_motion(struct P *p);
void pl_end_action_choose_state(struct P *p);
void obj_start_motion_2_0(struct P *p);
void obj_wait_motion_end_then_end_move(struct P *p);
void FUN_0c092894(struct P *p)
{
    switch (p->st) {
    case 0: obj_start_motion_2_0(p); break;
    case 1: case 2: case 3: case 4: obj_wait_motion_end_then_end_move(p); break;
    }
}
void obj_start_motion_2_0(struct P *p)
{
    pl_start_motion(p, 2, 0);
    p->st++;
}
void obj_wait_motion_end_then_end_move(struct P *p)
{
    if (pl_step_motion(p)) pl_end_action_choose_state(p);
}
