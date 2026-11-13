/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c061434-0c062050) */

int gfx_init_display_mode(int, int, int);
int sys_set_interrupt_handler(int, int, int);
int vib_stop_all(void);
int bgm_stop_all(void);
int gfx_flip_frame_buffer(void);
int gfx_set_background_color(int, int, int);
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0f1c44(int);
int FUN_0c0f1fd2(int);
int FUN_0c0f202c(int);
int FUN_0c0f2044(int);
int ADXT_ExecServer(void);
extern int sys_get_video_standard(void);
int FUN_0c0df100(void);
int syRtcFinish(void);
int gdFsFinish(void);
int FUN_0c0f2664(void);
int FUN_0c0f283e(void);
int syCfgExit(void);
int sys_exit_to_bios(void);
int ADXT_Finish(void);
int thunk_FUN_0c0f2f7e(void);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int ui_fade_reset(void);
int FUN_0c05f136(void);

int sys_vsync_handler_remove(int a4, int a5, int a6);

int sys_vsync_handler_install(int a4, int a5, int a6)
{
    return sys_set_interrupt_handler(0x1, 0xC061694, a6);
}

int sys_vsync_handler_remove(int a4, int a5, int a6)
{
    return sys_set_interrupt_handler(0x1, 0x0, a6);
}

int FUN_0c061444(int a4)
{
    return gfx_init_display_mode(a4, 0x80, 0x1);
}

int FUN_0c06144e(void)
{
    bgm_stop_all();
    gfx_set_background_color(0x0, 0x0, 0x0);
    gfx_flip_frame_buffer();
    gfx_flip_frame_buffer();
    return vib_stop_all();
}

int FUN_0c06148a(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct oC_int *)0xC3B9D34)->v);
    (((struct oC_uint *)0xC3B9D34)->v) = (t0 + 0x1);
    t1 = 0x0;
    if ((int)(t0 + 0x1) > 0) {
        (((struct oC_uint *)0xC3B9D34)->v) = 0x0;
        if (((((struct o4_int *)0xC3B9D34)->v)) == 0) {
            t0 = FUN_0c0f2044(0xC3B9D40);
            if (t0 == 0) {
                (((struct o4_uint *)0xC3B9D34)->v) = 0x1;
            }
            t0 = 0x0;
        } else {
            t2 = FUN_0c0f1fd2(0xC3B9D40);
            (((struct o0_uint *)0xC3B9D34)->v) = t2;
            t0 = FUN_0c0f1c44(t2);
            if (t0 != 4) {
                (((struct o4_uint *)0xC3B9D34)->v) = 0x0;
            }
            t2 = FUN_0c0f202c(t0);
            t0 = 0x0;
            if ((t2 == 6) || (t2 == 7)) {
                *(unsigned int *)0xC38682C = 0x1;
                t0 = 0x1;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0614fc(int a4, int a5)
{
    if (a5 == -23) {
        *(unsigned int *)0xC38682C = 0x1;
    }
    *(unsigned int *)0xC3B9D44 = ((*(int *)0xC3B9D44) + 0x1);
    return a5;
}

void sys_set_boot_state(void)
{
    char *state_block = (char *)0xC7F2EE0;
    int *flag_ptr = (int *)0xC386830;
    switch (sys_get_video_standard()) {
    case 0:
        *(int *)(state_block + 0x140) = 9;
        *flag_ptr = 0;
        break;
    case 1:
        *(int *)(state_block + 0x140) = 0;
        *flag_ptr = 0;
        break;
    case 2:
        *(int *)(state_block + 0x140) = 19;
        *flag_ptr = 1;
        break;
    default:
        *(int *)(state_block + 0x140) = 9;
        *flag_ptr = 0;
        break;
    }
}

int sys_vsync_handler(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xC386828 = ((*(int *)0xC386828) + 0x1);
    ADXT_ExecServer();
    return 0x0;
}

int sys_shutdown_all(int a4, int a5, int a6)
{
    sys_vsync_handler_remove(a4, a5, a6);
    FUN_0c0f2664();
    ADXT_Finish();
    gdFsFinish();
    syCfgExit();
    thunk_FUN_0c0f2f7e();
    syRtcFinish();
    FUN_0c0f283e();
    FUN_0c0df100();
    return sys_exit_to_bios();
}

int FUN_0c061f9c(int a4)
{
    if (a4 != 0) {
        if (a4 != 1) {
            (((struct o26_uchar *)0xC7F2EE0)->v) = 0x1;
        } else {
            (((struct o24_uchar *)0xC7F2EE0)->v) = 0x1;
            *(unsigned char *)0xC7F301F = 0x0;
        }
    } else {
        (((struct o23_uchar *)0xC7F2EE0)->v) = 0x1;
    }
    (((struct o3_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o2_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x0;
    (((struct o1_uchar *)0xC7F319D)->v) = 0x0;
    (((struct o0_uchar *)0xC7F319D)->v) = 0x0;
    bgm_stop_all();
    gfx_set_background_color(0x0, 0x0, 0x0);
    FUN_0c05f136();
    return ui_fade_reset();
}
