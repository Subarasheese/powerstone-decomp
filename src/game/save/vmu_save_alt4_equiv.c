/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

int vmu_get_vmgame_mask(void);
int vmu_step_load(void);
int vmu_step_load_vmgame(void);
int vmu_check_run_objects(int, int, int, int);
int save_reset_all_data(void);
int vmu_check_show_message(int);

int vmu_check_do_load(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    *(volatile int *)((a4 + 0x18));
                    t0 = vmu_step_load_vmgame();
                    t1 = t0;
                    if (t0 != -1) {
                        t1 = 0x7;
                    }
                }
                return t1;
            }
            t0 = vmu_get_vmgame_mask();
            *(unsigned int *)((a4 + 0x10)) = t0;
            if ((int)t0 >= 0) {
                if ((((int)0x1 << (int)(*(int *)((a4 + 0x18)))) & (*(int *)((a4 + 0x10)))) != 0) {
                    t1 = *(signed char *)((a4 + 0x3));
                    *(unsigned char *)((a4 + 0x3)) = (t1 + 0x1);
                    return (t1 + 0x1);
                }
                *(unsigned char *)((a4 + 0x2)) = 0x7;
                return ((int (*)(void))(0xC0121C6))();
            }
            return t0;
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        vmu_check_run_objects(a4, a5, a6, a7);
    }
    *(volatile int *)((a4 + 0x18));
    t0 = vmu_step_load();
    if (t0 != -1) {
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x2)) = 0x8;
            return ((int (*)(int, int, int, int))(0xC0121C6))(t0, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x3));
        *(unsigned char *)((a4 + 0x3)) = (t1 + 0x1);
        return (t1 + 0x1);
    }
    return t0;
}

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
