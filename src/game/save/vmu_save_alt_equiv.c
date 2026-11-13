/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

/* named globals (symbols.txt) */
extern char g_vmu_check_work[];
extern char g_vmu_ctl[];
extern char g_vmu_file_image[];
extern char g_vmu_mounted_port[];
extern char g_vmu_op_pending[];
extern char g_vmu_port_slots[];
extern char g_vmu_step_state[];
extern char g_vmu_wanted_port[];
int vmu_make_save_image(void);
int syRtcGetDate(int);
int buSaveExecFile(int, int, int, int, int, int);
int buSaveFile(int, int, int, int, int, int);
int buGetDiskFree(int, int);
int buIsExistFile(int, int);
struct o0_uint { unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int vmu_lcd_set_idle_image(void);
int vmu_lcd_set_busy_image(void);
int vmu_lcd_refresh(int);
int save_pack_data(void);
int buMountDisk(int, int, int);
int buUnmount(int);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int vmu_check_dispatch(int, int, int, int);
int game_reset_objects(void);
int obj_tick_class(int, int, int, int);
int res_switch_scene(int);
int bgm_stop_all(void);
int cam_reset_shake(int, int, int, int);
struct Obj {
    char pad0[3];
    signed char state;      /* 3 */
    char pad4[24];
    short timer;            /* 28 */
};
signed char vmu_check_select_port(struct Obj *);
void vmu_check_run_objects(void);
void vmu_check_show_message(int);
void FUN_0c0124ce(int, int);
signed char vmu_check_start_pressed(void);
void save_reset_all_data(void);

int vmu_write_save_file(int a4);
int vmu_write_icondata_file(int a4);

int vmu_write_save_file(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (vmu_make_save_image());
    syRtcGetDate((((int)stk + 8) + 0x10));
    *(unsigned short *)(((int)stk + 16)) = (*(short *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned char *)(((int)stk + 21)) = (*(signed char *)(((int)stk + 29)));
    *(unsigned char *)(((int)stk + 22)) = (*(signed char *)(((int)stk + 30)));
    *(unsigned char *)(((int)stk + 23)) = (*(signed char *)(((int)stk + 31)));
    *(int *)((int)stk + 4) = 0x80000000;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    return (buSaveFile((*(int *)(((int)stk + 8))), 0xC116210, ((int)g_vmu_file_image), (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x80000000));
}

int vmu_write_icondata_file(int a4)
{
    int stk[7];
    register int t0;
    register int t1;

    t0 = buIsExistFile(a4, 0xC116230);
    if (t0 == 0xFFFFFF05) {
        t1 = buGetDiskFree(a4, 0x0);
        if (((int)t1 >= 0) && ((int)t1 >= (int)0x6)) {
            syRtcGetDate((((int)stk + 8) + 0x8));
            *(unsigned short *)(((int)stk + 8)) = (*(short *)(((int)stk + 16)));
            *(unsigned char *)(((int)stk + 10)) = (*(signed char *)(((int)stk + 18)));
            *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((int)stk + 19)));
            *(unsigned char *)(((int)stk + 12)) = (*(signed char *)(((int)stk + 20)));
            *(unsigned char *)(((int)stk + 13)) = (*(signed char *)(((int)stk + 21)));
            *(unsigned char *)(((int)stk + 14)) = (*(signed char *)(((int)stk + 22)));
            *(unsigned char *)(((int)stk + 15)) = (*(signed char *)(((int)stk + 23)));
            *(int *)((int)stk + 4) = 0x800000FF;
            *(int *)((int)stk + 0) = (((int)stk + 4) + 0x4);
            return (buSaveFile(a4, 0xC116230, 0xC178974, 0x2, (((int)stk + 4) + 0x4), 0x800000FF));
        }
        return 0xFFFFFF04;
    }
    return 0xFFFFFF04;
}

int vmu_step_save(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_0 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)g_vmu_ctl)->v));
    *(unsigned int *)(((int)stk + 4)) = ((int)g_vmu_port_slots);
    v0_7 = *(signed char *)g_vmu_step_state;
    v0_6 = (v0_7);
    v0_8 = (((int)g_vmu_wanted_port));
    v0_1 = (0x1);
    v0_4 = (((int)g_vmu_mounted_port));
    v0_0 = (((int)g_vmu_step_state));
    v0_2 = (((int)g_vmu_op_pending));
    v0_9 = (((((struct o8_int *)g_vmu_ctl)->v)));
    v0_3 = (((int)g_vmu_port_slots));
    if ((v0_7 == 0)) goto L_C01119C;
    if ((v0_6 == 1)) goto L_C0111AA;
    if ((v0_6 == 2)) goto L_C011200;
    if ((v0_6 == 3)) goto L_C011264;
    if ((v0_6 != 4)) goto L_C011190;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011302;
    if ((v0_9 != (*(int *)(((int)stk + 0))))) goto L_C0112CE;
    save_pack_data();
    v0_4 = *(int *)((v0_4 + 0x0));
    v0_3 = (vmu_write_save_file((*(int *)((((short)((((v0_4 << 2) + v0_4) << 2) << 1) + v0_3) + 0x0))))) != 0;
    if (v0_3) goto L_C011302;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C0112CE:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x5;
    L_C011302:;
    return 0xFFFFFFFF;
    L_C011190:;
    if ((v0_6 != 5)) goto L_C011198;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011302;
    vmu_lcd_set_idle_image();
    vmu_lcd_refresh((*(int *)((v0_8 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    (((struct o0_uint *)g_vmu_ctl)->v) = 0x0;
    *(volatile int *)((v0_8 + 0x0));
    goto L_C011302;
    L_C011198:;
    goto L_C011302;
    L_C011264:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011302;
    if ((v0_9 != (*(int *)(((int)stk + 0))))) goto L_C01129C;
    v0_3 = vmu_write_icondata_file((*(int *)((((short)((((v0_9 << 2) + v0_9) << 2) << 1) + (*(int *)(((int)stk + 4)))) + 0x0))));
    v0_6 = (v0_3);
    if ((v0_3 == 0xFFFFFF04)) goto L_C011296;
    if ((v0_6 != 0)) goto L_C011302;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C01129C:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011302;
    L_C011296:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011302;
    L_C011200:;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C01120A;
    goto L_C011302;
    L_C01120A:;
    v0_3 = *(int *)(((int)stk + 0));
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = ((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_4);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_4) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C011302;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    L_C011238:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011302;
    L_C0111AA:;
    if (((*(int *)((v0_4 + 0x0))) == (*(int *)((v0_8 + 0x0))))) goto L_C011238;
    if (((*(int *)((v0_4 + 0x0))) == -1)) goto L_C0111FA;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C0111C2;
    goto L_C011302;
    L_C0111C2:;
    v0_1 = *(int *)((v0_4 + 0x0));
    v0_1 = (buUnmount((*(int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x0))))) == 0;
    if (v0_1) goto L_C0111E2;
    goto L_C011302;
    L_C0111E2:;
    v0_1 = *(int *)((v0_4 + 0x0));
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)((v0_4 + 0x0)) = 0xFFFFFFFF;
    L_C0111FA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011302;
    L_C01119C:;
    (((struct o0_uint *)g_vmu_ctl)->v) = v0_1;
    *(unsigned int *)((v0_8 + 0x0)) = v0_5;
    vmu_lcd_set_busy_image();
    vmu_lcd_refresh((*(int *)((v0_8 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    goto L_C0111AA;
}

int vmu_write_vmgame_file(int a4, int a5)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)0xC15CE08 = a5;
    syRtcGetDate((((int)stk + 8) + 0xC));
    *(unsigned short *)(((int)stk + 12)) = (*(short *)(((int)stk + 20)));
    *(unsigned char *)(((int)stk + 14)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned char *)(((int)stk + 15)) = (*(signed char *)(((int)stk + 23)));
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((int)stk + 24)));
    *(unsigned char *)(((int)stk + 17)) = (*(signed char *)(((int)stk + 25)));
    *(unsigned char *)(((int)stk + 18)) = (*(signed char *)(((int)stk + 26)));
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((int)stk + 27)));
    *(int *)((int)stk + 4) = 0x800000FF;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
    return (buSaveExecFile((*(int *)(((int)stk + 8))), 0xC116220, 0xC15C408, 0x80, (((int)stk + 4) + 0x8), 0x800000FF));
}

int vmu_check_step(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC361BC9;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t1 = t0;
                        if (t0 != 5) {
                        } else {
                            (((struct o20_uchar *)0xC361BC9)->v) = 0x0;
                            (((struct o2_uchar *)0xC7F306E)->v) = 0x1;
                            (((struct o0_uchar *)0xC7F306E)->v) = 0x1;
                            *(unsigned char *)0xC7F301D = 0x1;
                            t1 = 0x42;
                        }
                        return t1;
                    }
                    (((struct o0_uchar *)0xC361BC9)->v) = 0x5;
                    (((struct o20_uchar *)0xC361BC9)->v) = 0x0;
                    (((struct o1F_uchar *)0xC361BC9)->v) = 0x1;
                    return obj_tick_class(0x5, a5, a6, a7);
                }
                return vmu_check_dispatch(((int)g_vmu_check_work), a5, a6, a7);
            }
            (((struct o20_uchar *)0xC361BC9)->v) = 0x0;
            obj_tick_class(0x5, a5, a6, a7);
            (((struct o0_uchar *)0xC361BC9)->v) = 0x3;
            (((struct o1_uchar *)0xC361BC9)->v) = 0x0;
            (((struct o2_uchar *)0xC361BC9)->v) = 0x0;
            return 0x0;
        }
        vmu_check_dispatch(((int)g_vmu_check_work), a5, a6, a7);
        (((struct o20_uchar *)0xC361BC9)->v) = 0x0;
        return 0x21;
    }
    game_reset_objects();
    bgm_stop_all();
    (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
    (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
    cam_reset_shake(0x0, 0x0, 0x63, 0x0);
    res_switch_scene(0xB);
    if ((unsigned char)(*(signed char *)0xC7F2F08) == 2) {
        (((struct o0_uchar *)0xC361BC9)->v) = 0x1;
        (((struct o1_uchar *)0xC361BC9)->v) = 0x9;
        (((struct o2_uchar *)0xC361BC9)->v) = 0x0;
    } else {
        (((struct o0_uchar *)0xC361BC9)->v) = 0x3;
        (((struct o1_uchar *)0xC361BC9)->v) = 0x0;
        (((struct o2_uchar *)0xC361BC9)->v) = 0x0;
    }
    return 0x0;
}

void vmu_check_mode_02(struct Obj *obj)
{
    if (vmu_check_select_port(obj) != 0)
        return;
    switch (obj->state) {
    case 0:
        obj->state = obj->state + 1;
        vmu_check_run_objects();
        vmu_check_show_message(0);
        vmu_check_show_message(1);
        FUN_0c0124ce(0, 4);
        obj->timer = 600;
        /* fall through */
    case 1:
        obj->timer = obj->timer - 1;
        if (obj->timer == 0 || vmu_check_start_pressed() != 0) {
            save_reset_all_data();
            vmu_check_run_objects();
            *(char *)0xC361BC9 = 4;
        }
        break;
    }
}
