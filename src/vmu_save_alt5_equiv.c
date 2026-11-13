/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

int save_reset_all_data(void);
int vmu_check_show_message(int);
extern int vmu_check_run_objects();
int vmu_check_pad_pressed(int);

int vmu_check_mode_08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = vmu_check_pad_pressed(0x6);
                t2 = (signed char)t0;
                if ((signed char)t0 != 0) {
                    t0 = ((int (*)(void))(vmu_check_run_objects))();
                    *(unsigned char *)0xC361BC9 = 0x4;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int, int, int, int))(vmu_check_run_objects))(a4, a5, a6, a7);
                *(unsigned char *)0xC361BC9 = 0x4;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(vmu_check_run_objects))(a4, a5, a6, a7);
        vmu_check_show_message(0x2);
        save_reset_all_data();
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}
