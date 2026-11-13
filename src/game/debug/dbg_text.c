/* debug text print entry dbg_print_at plus player part pointer helpers (0c0ccefc-0c0cdac0) */

int FUN_0c0ccfba(int a4, int a5, int a6, int a7);
int dbg_set_cursor_cell(int, int);
int dbg_print_string(int, int, int, int);
int math_mat_get_translate(int, int);

int dbg_print_at(int obj_ptr, float val_x, float val_y)
{
    int quot_y = (int)val_y / 8;
    int quot_x = (int)val_x / 8;
    dbg_set_cursor_cell(quot_x, quot_y);
    return dbg_print_string(obj_ptr, quot_y, 0, 0);
}

int thunk_FUN_0c062242(int a4, int a5)
{
    return math_mat_get_translate(a4, a5);
}

int FUN_0c0ccf38(int a4, int a5, int a6)
{
    if ((short)a5 != 0) {
        if ((short)a5 != 1) {
            if ((short)a5 != 2) {
                if ((short)a5 != 3) {
                    if ((short)a5 != 4) {
                        return 0x0;
                    }
                    return (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x6E0) + (0x6340 + a4)) + (short)((short)a6 * (short)0xB0));
                }
                return (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x6E0) + (0x5580 + a4)) + (short)((short)a6 * (short)0xB0));
            }
            return (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x6E0) + (0x47C0 + a4)) + (short)((short)a6 * (short)0xB0));
        }
        return (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0x14A0) + (0x1E80 + a4)) + (short)((short)a6 * (short)0xB0));
    }
    return (((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)) + (short)((short)a6 * (short)0xB0));
}

