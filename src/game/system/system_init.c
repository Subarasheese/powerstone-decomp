/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c061094-0c0612f4) */

/* named globals (symbols.txt) */
extern char g_vmu_ctl[];
int gfx_flip_frame_buffer(void);
int dbg_set_cursor_cell(void);
int dbg_printf(int, int, int, int, int, int);
extern void sys_vsync_handler_install();
extern int ADXF_Open(int, int);
extern int ADXF_GetFsizeSct(int);
extern int ADXF_GetFsizeByte(int);
extern void ADXF_ReadNw(int, int, int);
extern int FUN_0c06148a(void);
extern void ADXF_Stop(int);
extern void ADXF_Close(int);
extern void FUN_0c06144e(void);
extern void sys_shutdown_all(void);
extern void FUN_0c0a3274(void);
extern int ADXF_GetStat(int);

int FUN_0c061094(int a4, int a5, int a6)
{
    dbg_set_cursor_cell();
    dbg_printf(0x0, 0x0, 0x0, 0x0, 0xC14E130, ((*(int *)(((a6 << 2) + 0xC3365C8)))));
    return gfx_flip_frame_buffer();
}

int sys_load_file_adx(int file_id, int dest, int *out_len)
{
    int *status = (int *)0x0C383818;
    int *frame = (int *)0x0C386828;
    int *spin = (int *)0x0C383824;
    int *tick = (int *)0x0C383820;
    int handle, sectors, last_frame, load_status;

    sys_vsync_handler_install(file_id, dest, out_len);
    handle = ADXF_Open(file_id, 0);
    if (handle == 0) {
        *status = 1;
        return 1;
    }
    sectors = ADXF_GetFsizeSct(handle);
    if ((sectors << 11) > 0x200000) {
        *status = 3;
        return 3;
    }
    *out_len = ADXF_GetFsizeByte(handle);
    ADXF_ReadNw(handle, sectors, dest);
    last_frame = *frame;
    for (;;) {
        sys_vsync_handler_install();
        *spin = 0;
        while (last_frame == *frame) {
            *tick = *tick + 1;
            *spin = *spin + 1;
            if (*spin >= 0x600000) {
                _builtin_set_cr(_builtin_get_cr() & 0xFFFFFF0F);
                *spin = 0;
            }
        }
        last_frame = *frame;
        if (*(int *)g_vmu_ctl == 0 && FUN_0c06148a() != 0) {
            ADXF_Stop(handle);
            ADXF_Close(handle);
            FUN_0c06144e();
            *(int *)0x0C38682C = 1;
            sys_shutdown_all();
            for (;;)
                ;
        }
        FUN_0c0a3274();
        load_status = ADXF_GetStat(handle);
        if (load_status == 4) {
            ADXF_Stop(handle);
            ADXF_Close(handle);
            *status = 2;
            return 2;
        }
        if (load_status == 3) {
            ADXF_Close(handle);
            *status = 0;
            return 0;
        }
    }
}
