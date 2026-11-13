/* Ayame (char 6) frame hook, move init stubs, attack init dispatch (part 3 of 3 of the same module) (0c07e930-0c07eb60) */

int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);

int pl_ayame_move_update_default(int a4)
{
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}
