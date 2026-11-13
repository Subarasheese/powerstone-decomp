/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

int save_reset_all_data(void);
int vmu_check_select_port(void);
int vmu_check_show_message(int);
int FUN_0c0124ce(void);
int vmu_check_run_objects(void);
int vmu_check_start_pressed(void);

int vmu_check_mode_03(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = vmu_check_select_port();
    t1 = (signed char)t0;
    if ((signed char)t0 == 0) {
        t0 = *(signed char *)((a4 + 0x3));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    t0 = vmu_check_start_pressed();
                    t3 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        save_reset_all_data();
                        t0 = vmu_check_run_objects();
                        *(unsigned char *)0xC361BC9 = 0x4;
                        t3 = t0;
                    }
                    t0 = t3;
                } else {
                    save_reset_all_data();
                    t3 = vmu_check_run_objects();
                    *(unsigned char *)0xC361BC9 = 0x4;
                    t0 = t3;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
            vmu_check_run_objects();
            vmu_check_show_message(0x4);
            vmu_check_show_message(0x5);
            FUN_0c0124ce();
            *(unsigned short *)((a4 + 0x1C)) = 0x258;
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if ((short)(t2 - 1) != 0) {
                t2 = vmu_check_start_pressed();
                t3 = (signed char)t2;
                if ((signed char)t2 != 0) {
                    save_reset_all_data();
                    t2 = vmu_check_run_objects();
                    *(unsigned char *)0xC361BC9 = 0x4;
                    t3 = t2;
                }
                t2 = t3;
            } else {
                save_reset_all_data();
                t3 = vmu_check_run_objects();
                *(unsigned char *)0xC361BC9 = 0x4;
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}
