/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

extern void vmu_menu_update_objs(void);
extern int vmu_menu_spawn_message(int a);
extern void FUN_0c01f9a0(int a, int b);
extern signed char vmu_menu_poll_confirm_cancel(int a, int b);
extern int vmu_step_write_vmgame(int a, int b);

void vmu_menu_step_notice_by_kind(char *obj)
{
    switch (obj[4]) {
    case 0:
        obj[4] = obj[4] + 1;
        vmu_menu_update_objs();
        switch (obj[51]) {
        case 0:
            vmu_menu_spawn_message(20);
            FUN_0c01f9a0(0, 4);
            FUN_0c01f9a0(2, 128);
            break;
        case 1:
            vmu_menu_spawn_message(21);
            FUN_0c01f9a0(0, 128);
            break;
        case 2:
            vmu_menu_spawn_message(24);
            vmu_menu_spawn_message(25);
            break;
        }
    case 1:
        if (vmu_menu_poll_confirm_cancel(0x0003060E, 0))
            obj[0] = 5;
        break;
    default:
        break;
    }
}

void vmu_menu_state_write_vmgame(char *actor)
{
    char *global_rec = (char *)0xC362A50;
    int poll;
    switch (actor[4]) {
    case 0:
        actor[4] = actor[4] + 1;
        vmu_menu_update_objs();
        vmu_menu_spawn_message(18);
        actor[50] = 60;
    case 1:
        poll = vmu_step_write_vmgame(*(int *)(actor + 32), actor[52]);
        if (poll == -1)
            return;
        if (poll == 0)
            global_rec[49] = 15;
        else
            global_rec[49] = 13;
        global_rec[4] = 0;
        break;
    default:
        break;
    }
}
