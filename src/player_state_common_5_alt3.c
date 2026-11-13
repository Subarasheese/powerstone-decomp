/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064cc8-0c06588c) */

extern int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
extern void pl_step_motion(char *obj);
extern void pl_apply_motion_translation(char *obj);
extern void pl_end_action_choose_state(char *obj);

void pl_mode13_update(char *obj)
{
    signed char *entry_ptr;
    char *rec;
    int side, i, mode;

    side = (1 - obj[0x71EC]) & 1;
    *(short *)(obj + 240) = *(short *)(obj + 240) + 1;
    mode = obj[0x721E];
    if (mode == 0 || mode == 1) {
        entry_ptr = (signed char *)(0xC14ED54 + obj[4] * 16 + (side << 3) + (mode == 1 ? 4 : 0));
        for (i = 0; i < 2; i++, entry_ptr += 2) {
            if (entry_ptr[0] >= 0) {
                rec = (char *)(0xC14EB94 + entry_ptr[0] * 32);
                if (*(short *)rec == *(short *)(obj + 240))
                    fx_spawn_on_player_part(obj[3], 0, rec[4], entry_ptr[1], *(short *)(rec + 2), 82, (int)(rec + 8), (int)(rec + 20));
            }
        }
    }
    pl_step_motion(obj);
    pl_apply_motion_translation(obj);
    if (obj[0x71AA] != 0) {
        pl_end_action_choose_state(obj);
        obj[0x71A9] = 1;
        obj[0x71A8] = 1;
    }
}
