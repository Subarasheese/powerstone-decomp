/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

int vmu_check_do_load(int a4, int a5, int a6, int a7);
int vmu_get_vmgame_mask(void);
int vmu_step_load(void);
int vmu_step_load_vmgame(void);
int vmu_check_run_objects(int, int, int, int);
int save_reset_all_data(void);
int vmu_check_show_message(int);


int vmu_check_mode_09(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = vmu_check_run_objects(a4, a5, a6, a7);
                *(unsigned char *)0xC361BC9 = 0x2;
                t1 = t0;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        vmu_check_run_objects(a4, a5, a6, a7);
        vmu_check_show_message(0x6);
        save_reset_all_data();
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}
