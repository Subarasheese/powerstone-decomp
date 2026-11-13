/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

int vmu_lcd_set_busy_image(void);
void vmu_lcd_refresh(int port);
int buUnmount(int drive);
int buMountDisk(int drive, void *work, int size);
int vmu_load_save_file(int drive);
int vmu_parse_save_image(void);
void save_unpack_data(void);
void save_reset_all_data(void);
void vmu_lcd_set_idle_image(void);
#define STATE (*(signed char *)0x0C361BC0)
#define ACTIVE (*(int *)0x0C361BA0)
#define WAIT (*(int *)0x0C361BA4)
#define CUR (*(int *)0x0C361BA8)
#define PORT (*(int *)0x0C361BAC)
#define UNIT(p) ((int *)((char *)0x0C361A60 + (short)((p) * 40)))
int vmu_check_run_objects(int a4, int a5, int a6, int a7);
int vmu_check_show_message(int);
int vmu_check_run_objects(int, int, int, int);
int vmu_check_pad_pressed(int);
extern int vmu_get_ready_mask(void);
extern int vmu_get_savefile_mask(void);
extern int vmu_get_free_space_mask(void);
extern int vmu_get_vmgame_mask(void);
extern int FUN_0c0109e4(void);
extern void vmu_first_port_from_mask(unsigned char *);

int vmu_step_load(int port)
{
    int old, r, c;
    int *u;

    old = PORT;
    switch (STATE) {
    case 0:
        ACTIVE = 1;
        PORT = port;
        vmu_lcd_set_busy_image();
        vmu_lcd_refresh(PORT);
        STATE = 1;
    case 1:
        if (CUR == PORT) {
            STATE = 3;
            return -1;
        }
        if (CUR != -1) {
            if (WAIT != 0)
                return -1;
            if (buUnmount(UNIT(CUR)[0]) != 0)
                return -1;
            UNIT(CUR)[1] = 18;
            CUR = -1;
        }
        STATE = 2;
        return -1;
    case 2:
        if (WAIT != 0)
            return -1;
        u = UNIT(old);
        if (buMountDisk(u[0], (void *)0x0C352640, (u[3] << 9) + 32) != 0)
            return -1;
        WAIT = 1;
        STATE = 3;
        return -1;
    case 3:
        if (WAIT != 0)
            return -1;
        c = CUR;
        if (c == old) {
            r = vmu_load_save_file(UNIT(c)[0]);
            if (r == -255 || r == -253 || r == -251) {
                STATE = 4;
                return -1;
            }
            if (r != 0)
                return -1;
            WAIT = 1;
        }
        STATE = 4;
        return -1;
    case 4:
        if (WAIT != 0)
            return -1;
        if (UNIT(old)[2] == 0) {
            r = vmu_parse_save_image();
            if (r == 0)
                save_unpack_data();
            else
                save_reset_all_data();
            vmu_lcd_set_idle_image();
            vmu_lcd_refresh(PORT);
            STATE = 0;
            ACTIVE = 0;
            return r;
        }
        save_reset_all_data();
        vmu_lcd_set_idle_image();
        vmu_lcd_refresh(PORT);
        STATE = 0;
        ACTIVE = 0;
        return UNIT(PORT)[2];
    }
    return -1;
}

int vmu_check_mode_04(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = vmu_check_run_objects(a4, a5, a6, a7);
    *(unsigned char *)0xC361BC9 = 0x4;
    return t0;
}

int vmu_check_mode_07(int a4, int a5, int a6, int a7)
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
        vmu_check_show_message(0x3);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        t0 = 0x78;
    }
    return t0;
}

int vmu_check_select_port(unsigned char *req)
{
    unsigned char *status = (unsigned char *)0xC361BC8;
    int handle;

    handle = vmu_get_ready_mask();
    *(int *)(req + 4) = handle;
    if (handle < 0)
        return -1;
    if (*(int *)(req + 4) == 0) {
        if ((signed char)req[2] == 2)
            return 0;
        status[2] = 2;
    } else {
        *(int *)(req + 12) = vmu_get_savefile_mask();
        *(int *)(req + 8) = vmu_get_free_space_mask();
        *(int *)(req + 16) = vmu_get_vmgame_mask();
        *(int *)(req + 20) = FUN_0c0109e4();
        if (*(int *)(req + 12) != 0) {
            vmu_first_port_from_mask(req);
            status[2] = 6;
        } else if (*(int *)(req + 8) != 0) {
            status[2] = 4;
        } else {
            if ((signed char)req[2] == 3)
                return 0;
            status[2] = 3;
        }
    }
    status[3] = 0;
    return 1;
}
