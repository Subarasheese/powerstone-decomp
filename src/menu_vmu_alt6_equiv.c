/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

void vmu_menu_update_objs(char *actor);
void vmu_menu_spawn_message(int n);
char vmu_menu_poll_confirm_cancel(int a, int b);
void vmu_menu_update_objs(char *obj);
extern char g_vmu_menu_work;

void vmu_menu_step_notice_wait_ok(char *actor)
{
    switch (actor[4]) {
    case 0:
        actor[4] = actor[4] + 1;
        vmu_menu_update_objs(actor);
        vmu_menu_spawn_message(12);
        vmu_menu_spawn_message(22);
    case 1:
        if (vmu_menu_poll_confirm_cancel(0x3060E, 0))
            actor[2] = 0;
        break;
    default:
        break;
    }
}

void vmu_menu_step_notice_wait_ok_flag(char *obj)
{
    switch (obj[4]) {
    case 0:
        obj[4] = obj[4] + 1;
        vmu_menu_update_objs(obj);
        vmu_menu_spawn_message(7);
        vmu_menu_spawn_message(22);
    case 1:
        if (vmu_menu_poll_confirm_cancel(0x3060E, 0)) {
            g_vmu_menu_work = 1;
            obj[2] = 0;
        }
        break;
    default:
        break;
    }
}
