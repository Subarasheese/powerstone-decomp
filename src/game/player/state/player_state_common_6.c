/* @unit 0c06588c-0c0658b8 */
extern char pl_step_motion(void *);
extern void pl_end_action_choose_state(void *);
void pl_mode14_update(void *p){ if (pl_step_motion(p)) pl_end_action_choose_state(p); }
