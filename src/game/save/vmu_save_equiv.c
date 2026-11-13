/* VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen (0c010160-0c012568) */

/* named globals (symbols.txt) */
void vmu_unmount_current(int a4, int a5, int a6, int a7);
int vmu_step_write_vmgame(int a4, int a5);
int save_reset_all_data(void);
int FUN_0c0109e4(void);
extern char g_key_config[];
extern char g_res_vms_check[];
extern char g_save_buffer[];
extern char g_vmu_check_work[];
extern char g_vmu_ctl[];
extern char g_vmu_file_image[];
extern char g_vmu_mounted_port[];
extern char g_vmu_op_pending[];
extern char g_vmu_port_slots[];
extern char g_vmu_step_state[];
extern char g_vmu_wanted_port[];
int FUN_0c0f2ccc(int);
int FUN_0c0f2d38(int, int, int);
int pdVmsLcdIsReady(int);
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int buFindExecFile(int, int);
int buGetDiskFree(int, int);
int buIsExistFile(int, int);
int obj_tick_class(int, int, int, int);
int FUN_0c0f2f7e(void);
int buDefragDisk(int, int);
int buLoadFileEx(int, int, int, int, int);
int buGetVersion(int a4);
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int vmu_check_mode_02(void);
int vmu_check_mode_03(void);
int vmu_check_do_load(int);
int vmu_check_mode_04(int);
int vmu_check_mode_07(int);
int vmu_check_mode_08(int);
int vmu_check_mode_09(int);
int vmu_check_select_port(void);
int FUN_0c0593e0(int);
int memset(int, int, int);
int FUN_0c0f2e9c(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
int vmu_check_step(int, int, int, int, int, int, int, int, int, int, int);
int game_draw_frame(void);
int FUN_0c055562(void);
int game_reset_objects(void);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_request_mode(int, int, int);
int gfx_set_background_color(int, int, int);
int buUnmount(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
int buRewriteExecFile(int, int, int, int, int);
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
int FUN_0c0f3ad4(int, int);
int memcpy(int, int, int);
int strcpy(int, int);
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct date_buf { char bytes[10]; };
extern void syRtcGetDate(struct date_buf *date);
int FUN_0c0f3d20(int, int);
int buGetFileSize(int, int);
int buLoadFile(int, int, int, int);
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int vmu_write_vmgame_file(int, int);
int buMountDisk(int, int, int);
int obj_destroy(int, int, int, int);
extern int _quick_odd_mvn();

int vmu_lcd_set_idle_image(void);
int vmu_lcd_set_busy_image(void);
int vmu_lcd_refresh(int a4);
int save_reset_all_data(void);
int vmu_defrag_disk(int a4);
int FUN_0c011a70(void);
int vmu_load_vmgame_data(int a4);
int vmu_rewrite_vmgame_data(int a4, int a5);
int vmu_check_create_obj(void);

int vmu_lcd_set_idle_image(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC178170;
    t1 = 0xC0;
    t2 = 0xC177B70;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t4 = 0x7;
        t5 = 0x0;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0x8;
            }
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x1);
            t4 = (t4 - 1);
            if ((int)t5 >= (int)0x8) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t3;
}

int vmu_lcd_set_busy_image(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC178230;
    t1 = 0xC0;
    t2 = 0xC177B70;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t4 = 0x7;
        t5 = 0x0;
        for (;;) {
            if ((((unsigned int)(unsigned char)t3 << (int)(-t4)) & 0x1) != 0) {
                *(unsigned char *)((t2 + 0x0)) = 0x8;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x1);
            t4 = (t4 - 1);
            if ((int)t5 >= (int)0x8) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t3;
}

int vmu_lcd_refresh(int a4)
{
    register int t1;
    register int t3;
    register int t4;

    t1 = pdVmsLcdIsReady((*(int *)((0xC1782F0 + (a4 << 2)))));
    if (t1 != 0) {
        t3 = FUN_0c0f2ccc((*(int *)((0xC1782F0 + (a4 << 2)))));
        t4 = 0x0;
        if (t3 == 1) {
            t4 = 0x3;
        }
        return FUN_0c0f2d38((*(int *)((0xC1782F0 + (a4 << 2)))), 0xC177B70, t4);
    }
    return t1;
}

int vmu_event_handler(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_2 = (v0_6);
    v0_3 = (0x1);
    v0_0 = (0x0);
    v0_4 = (((int)g_vmu_port_slots));
    v0_9 = (((short)((((v0_5 << 2) + v0_5) << 2) << 1) + ((int)g_vmu_port_slots)));
    v0_1 = (v0_5);
    v0_5 = (0x2);
    v0_10 = (0xC0F32BE);
    if ((v0_6 == 1)) goto L_C0102EA;
    if ((v0_2 != 2)) goto L_C01029A;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = 0xFFFFFF01;
    *(unsigned int *)((v0_9 + 0x14)) = v0_0;
    *(unsigned int *)((v0_9 + 0x18)) = v0_0;
    *(unsigned int *)((v0_9 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_9 + 0x20)) = v0_0;
    *(unsigned int *)((v0_9 + 0x24)) = v0_0;
    if ((((((struct o4_int *)g_vmu_op_pending)->v)) == v0_1)) goto L_C010404;
    L_C010588:;
    (((struct o0_uint *)g_vmu_op_pending)->v) = v0_0;
    L_C01058C:;
    return 0x0;
    L_C010404:;
    (((struct o4_uint *)g_vmu_op_pending)->v) = 0xFFFFFFFF;
    goto L_C010588;
    L_C01029A:;
    if ((v0_2 != 9)) goto L_C0102A2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 != 0)) goto L_C010588;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C0102A2:;
    if ((v0_2 != 11)) goto L_C0102AA;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102AA:;
    if ((v0_2 != 12)) goto L_C0102B2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 == 0)) goto L_C01041A;
    goto L_C010588;
    L_C01041A:;
    v0_6 = buIsExistFile(v0_1, 0xC116210);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010460;
    if ((v0_2 != 0)) goto L_C010472;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_5;
    L_C010472:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C010460:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_3;
    goto L_C010472;
    L_C0102B2:;
    if ((v0_2 != 13)) goto L_C0102BA;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 != 0)) goto L_C010588;
    v0_6 = buFindExecFile(v0_1, 0xC361BB0);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010538;
    if ((v0_2 != 0)) goto L_C01054C;
    v0_6 = buIsExistFile(v0_1, 0xC116220);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010522;
    if ((v0_2 != 0)) goto L_C01054C;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    L_C01054A:;
    *(unsigned int *)((v0_5 + 0x1C)) = v0_3;
    L_C01054C:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    goto L_C010588;
    L_C010522:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x1C)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C01054C;
    L_C010538:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C01054A;
    L_C0102BA:;
    if ((v0_2 != 14)) goto L_C0102C2;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102C2:;
    if ((v0_2 == 18)) goto L_C0102D2;
    if ((v0_2 != 20)) goto L_C0102CE;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    goto L_C010588;
    L_C0102CE:;
    goto L_C01058C;
    L_C0102D2:;
    *(unsigned int *)((v0_9 + 0x0)) = v0_1;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = 0xFFFF0000;
    *(unsigned int *)((v0_9 + 0xC)) = v0_7;
    *(unsigned int *)((v0_9 + 0x10)) = v0_8;
    *(unsigned int *)((v0_9 + 0x14)) = v0_0;
    *(unsigned int *)((v0_9 + 0x18)) = v0_0;
    *(unsigned int *)((v0_9 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_9 + 0x20)) = v0_0;
    *(unsigned int *)((v0_9 + 0x24)) = v0_0;
    goto L_C01058C;
    L_C0102EA:;
    *(unsigned int *)((v0_9 + 0x4)) = v0_6;
    *(unsigned int *)((v0_9 + 0x8)) = v0_7;
    if ((v0_7 == 0)) goto L_C0102F6;
    goto L_C010588;
    L_C0102F6:;
    v0_6 = buIsExistFile(v0_1, 0xC116210);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010334;
    if ((v0_2 != 0)) goto L_C010346;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_5;
    L_C010346:;
    v0_6 = buFindExecFile(v0_1, 0xC361BB0);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C010394;
    if ((v0_2 != 0)) goto L_C0103A8;
    v0_6 = buIsExistFile(v0_1, 0xC116220);
    v0_2 = (v0_6);
    if ((v0_6 == 0xFFFFFF05)) goto L_C01037E;
    if ((v0_2 != 0)) goto L_C0103A8;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    L_C0103A6:;
    *(unsigned int *)((v0_5 + 0x1C)) = v0_3;
    L_C0103A8:;
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4);
    *(int *)((int)stk + 0) = (0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    *(unsigned int *)(((0x20 + ((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4)) + 0x0)) = (buGetDiskFree(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x24 + v0_2);
    *(unsigned int *)(((0x24 + v0_2) + 0x0)) = (buGetDiskFree(v0_1, 0x1));
    (((struct o4_uint *)g_vmu_op_pending)->v) = v0_1;
    vmu_lcd_refresh(v0_1);
    goto L_C010588;
    L_C01037E:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x1C)) = v0_5;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C0103A8;
    L_C010394:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x18)) = v0_3;
    v0_5 = (((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4));
    goto L_C0103A6;
    L_C010334:;
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_4) + 0x14)) = v0_3;
    goto L_C010346;
}

int vmu_event_callback(void)
{
    return buGetVersion(0xC01025C);
}

int vmu_init(void)
{
    register int t3;
    register int t6;

    memset(((int)g_vmu_file_image), 0x0, 0x800);
    memset(0xC352240, 0x0, 0x200);
    vmu_lcd_set_idle_image();
    (((struct o20_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o21_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o22_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o23_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o24_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o25_uchar *)g_vmu_ctl)->v) = 0x0;
    (((struct o8_uint *)g_vmu_ctl)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)g_vmu_ctl)->v) = 0x0;
    (((struct o4_uint *)g_vmu_ctl)->v) = 0x0;
    t3 = 0x0;
    for (;;) {
        t6 = (short)((((t3 << 2) + t3) << 2) << 1);
        t3 = (t3 + 0x1);
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x4)) = 0x2;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x8)) = 0xFFFF0000;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0xC)) = 0x7A;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x14)) = 0x0;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x18)) = 0x0;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x1C)) = 0x0;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x20)) = 0x0;
        *(unsigned int *)(((t6 + ((int)g_vmu_port_slots)) + 0x24)) = 0x0;
        if ((int)t3 >= (int)0x8) {
            break;
        }
    }
    return FUN_0c0f2e9c(0x7A, 0xFF, 0x0, 0xC0105A2);
}

int thunk_FUN_0c0f2f7e(void)
{
    return FUN_0c0f2f7e();
}


int vmu_get_ready_mask(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = 0x0;
    for (;;) {
        if (((*(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4))) == 18) && (t0 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t0 == 0xFFFF0000)) {
            break;
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x8) {
            t3 = 0x0;
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4));
                if (((t5 == 18) || (t5 == 1)) && (t1 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t2 = t1, t2 != 0xFFFF0000)) {
                    t5 = 0x1;
                    t5 = ((int)t5 << (int)t3);
                    t4 = (t4 | t5);
                }
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x8) {
                    break;
                }
            }
            return t4;
        }
    }
    return 0xFFFFFFFF;
}

int vmu_get_savefile_mask(void)
{
    register int t0;
    register int t10;
    int t12;
    int t3;
    register int t13;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4))) == 18) && (t3 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t3 == 0xFFFF0000)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            t0 = 0x0;
            t10 = 0x0;
            for (;;) {
                t12 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4));
                if (((t12 != 18) && (t12 != 1)) || (t13 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x14)), t13 != 2)) {
                } else {
                    t10 = (t10 | ((int)0x1 << (int)t0));
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
            return t10;
        }
    }
    return 0xFFFFFFFF;
}

int vmu_get_vmgame_mask(void)
{
    register int t0;
    register int t10;
    int t12;
    int t3;
    register int t13;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4))) == 18) && (t3 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t3 == 0xFFFF0000)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            t0 = 0x0;
            t10 = 0x0;
            for (;;) {
                t12 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4));
                if (((t12 != 18) && (t12 != 1)) || (t13 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x18)), t13 != 2)) {
                } else {
                    t10 = (t10 | ((int)0x1 << (int)t0));
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
            return t10;
        }
    }
    return 0xFFFFFFFF;
}

int vmu_get_foreign_exec_mask(void)
{
    register int t0;
    register int t10;
    int t12;
    int t3;
    register int t13;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4))) == 18) && (t3 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t3 == 0xFFFF0000)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            t0 = 0x0;
            t10 = 0x0;
            for (;;) {
                t12 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4));
                if (((t12 != 18) && (t12 != 1)) || (t13 = *(int *)((((short)((((t0 << 2) + t0) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x1C)), t13 != 2)) {
                } else {
                    t10 = (t10 | ((int)0x1 << (int)t0));
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
            return t10;
        }
    }
    return 0xFFFFFFFF;
}

int vmu_get_free_space_mask(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = 0x0;
    for (;;) {
        if (((*(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4))) == 18) && (t0 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x8)), t0 == 0xFFFF0000)) {
            break;
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x8) {
            t3 = 0x0;
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x4));
                if (((t5 == 18) || (t5 == 1)) && (t1 = *(int *)((((short)((((t3 << 2) + t3) << 2) << 1) + ((int)g_vmu_port_slots)) + 0x20)), t2 = t1, (int)t2 >= (int)0x4)) {
                    t5 = 0x1;
                    t5 = ((int)t5 << (int)t3);
                    t4 = (t4 | t5);
                }
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x8) {
                    break;
                }
            }
            return t4;
        }
    }
    return 0xFFFFFFFF;
}


int opt_reset_system_settings(void)
{
    (((struct o0_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o7_uchar *)0xC7F2F11)->v) = 0x3;
    (((struct o3_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o4_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o1_uchar *)0xC7F2F11)->v) = 0x1;
    (((struct o8_uchar *)0xC7F2F11)->v) = 0x1;
    return 0x39;
}

int opt_reset_game_options(void)
{
    (((struct o0_uchar *)0xC7F4764)->v) = 0x1;
    (((struct o1_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o2_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o3_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o4_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o5_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o6_uchar *)0xC7F4764)->v) = 0x0;
    (((struct o7_uchar *)0xC7F4764)->v) = 0x1;
    (((struct o8_uchar *)0xC7F4764)->v) = 0x1;
    return 0x1C;
}

int opt_reset_key_config(int a4)
{
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x0)) = 0x2;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x1)) = 0x3;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x2)) = 0x0;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x4)) = 0x4;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x5)) = 0x5;
    *(unsigned char *)(((((int)g_key_config) + ((a4 << 2) << 1)) + 0x6)) = 0x4;
    *(unsigned char *)(((((a4 << 2) << 1) + ((int)g_key_config)) + 0x7)) = 0x5;
    return 0x5;
}


void save_pack_data(void)
{
    unsigned char *save_img = (unsigned char *)g_save_buffer;
    unsigned char *rec_2ee0 = (unsigned char *)0xC7F2EE0;
    unsigned char *rec_4750 = (unsigned char *)0xC7F4750;
    unsigned char *rec_302c = (unsigned char *)0xC7F302C;
    int i, j;
    struct date_buf date;
    if (*(short *)save_img == 0) {
        syRtcGetDate(&date);
        *(struct date_buf *)save_img = date;
    }
    save_img[190] = rec_2ee0[56];
    save_img[191] = rec_2ee0[49];
    save_img[192] = rec_2ee0[50];
    save_img[194] = rec_2ee0[52];
    save_img[195] = rec_2ee0[53];
    save_img[198] = rec_2ee0[57];
    for (i = 0; i < 9; i++)
        save_img[200 + i] = rec_4750[i];
    *(short *)(save_img + 210) = *(short *)(rec_4750 + 10);
    *(int *)(save_img + 212) = *(int *)(rec_4750 + 12);
    *(int *)(save_img + 216) = *(int *)(rec_4750 + 16);
    for (i = 0; i < 9; i++)
        save_img[220 + i] = rec_4750[20 + i];
    for (i = 0; i < 10; i++)
        save_img[10 + i] = rec_302c[87 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            save_img[20 + 4 * i + j] = rec_302c[97 + 4 * i + j];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 3; j++)
            *(short *)(save_img + 60 + (signed char)(6 * i) + 2 * j) = *(short *)(rec_302c + 138 + (signed char)(6 * i) + 2 * j);
    for (i = 0; i < 10; i++)
        save_img[120 + i] = rec_302c[288 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            save_img[130 + 4 * i + j] = rec_302c[298 + 4 * i + j];
    for (i = 0; i < 10; i++)
        *(short *)(save_img + 170 + 2 * i) = *(short *)(rec_302c + 338 + 2 * i);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 8; j++)
            save_img[229 + 8 * i + j] = rec_4750[29 + 8 * i + j];
}

int vmu_make_save_image(void)
{
    int stk[24];

    memset(((int)stk + 0), 0x0, 0x60);
    strcpy(((int)stk + 0), 0xC178310);
    strcpy((((int)stk + 0) + 0x12), 0xC178322);
    memcpy((((int)stk + 0) + 0x34), 0xC178344, 0x10);
    *(unsigned int *)(((int)stk + 68)) = 0xC178354;
    *(unsigned int *)(((int)stk + 72)) = 0xC178374;
    *(unsigned short *)(((int)stk + 76)) = 0x3;
    *(unsigned short *)(((int)stk + 78)) = 0x5;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned short *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = ((int)g_save_buffer);
    *(unsigned int *)(((int)stk + 92)) = 0xF8;
    return (FUN_0c0f3ad4(((int)g_vmu_file_image), ((int)stk + 0)));
}

/* Loads the game state from the save image at 0xC351948: copies its fields into the globals at 0xC7F2EE0, 0xC7F4750 and 0xC7F302C. */
void save_unpack_data(void)
{
    unsigned char *save = (unsigned char *)g_save_buffer;
    unsigned char *game = (unsigned char *)0xC7F2EE0;
    unsigned char *blk_4750 = (unsigned char *)0xC7F4750;
    unsigned char *blk_302c = (unsigned char *)0xC7F302C;
    int i, j;
    game[56] = save[190];
    game[49] = save[191];
    game[50] = save[192];
    game[52] = save[194];
    game[53] = save[195];
    game[57] = save[198];
    for (i = 0; i < 9; i++)
        blk_4750[i] = save[200 + i];
    *(short *)(blk_4750 + 10) = *(short *)(save + 210);
    *(int *)(blk_4750 + 12) = *(int *)(save + 212);
    *(int *)(blk_4750 + 16) = *(int *)(save + 216);
    for (i = 0; i < 9; i++)
        blk_4750[20 + i] = save[220 + i];
    for (i = 0; i < 10; i++)
        blk_302c[87 + i] = save[10 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            blk_302c[97 + 4 * i + j] = save[20 + 4 * i + j];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 3; j++)
            *(short *)(blk_302c + 138 + (signed char)(6 * i) + 2 * j) = *(short *)(save + 60 + (signed char)(6 * i) + 2 * j);
    for (i = 0; i < 10; i++)
        blk_302c[288 + i] = save[120 + i];
    for (i = 0; i < 10; i++)
        for (j = 0; j < 4; j++)
            blk_302c[298 + 4 * i + j] = save[130 + 4 * i + j];
    for (i = 0; i < 10; i++)
        *(short *)(blk_302c + 338 + 2 * i) = *(short *)(save + 170 + 2 * i);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 8; j++)
            blk_4750[29 + 8 * i + j] = save[229 + 8 * i + j];
}

int vmu_parse_save_image(void)
{
    int stk[24];
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t3;

    if ((*(int *)0xC351A88) != 0xF8) {
        return 0xFFFFFF41;
    }
    t1 = FUN_0c0f3d20(((int)stk + 0), ((int)g_vmu_file_image));
    if ((t1 == 0) && (t6 = *(int *)(((int)stk + 88)), t3 = *(int *)(((int)stk + 92)), (int)t3 > 0)) {
        t4 = ((int)g_save_buffer);
        t5 = 0x0;
        for (;;) {
            t7 = *(signed char *)((t6 + 0x0));
            t6 = (t6 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = t7;
            t4 = (t4 + 0x1);
            if ((int)t5 >= (int)t3) {
                break;
            }
        }
    }
    return t1;
}

int vmu_load_save_file(int a4)
{
    register int t0;

    t0 = buGetFileSize(a4, 0xC116210);
    if ((int)t0 < 0) {
        return t0;
    }
    return (buLoadFile(a4, 0xC116210, ((int)g_vmu_file_image), t0));
}

int vmu_defrag_disk(int a4)
{
    return (buDefragDisk(a4, 0xC352440));
}


int FUN_0c011a70(void)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC7F4756) == 0) && (t0 = *(signed char *)0xC35236E, (int)(unsigned char)t0 > 0)) {
        (((struct o0_uchar *)0xC7F4756)->v) = 0x1;
    }
    t0 = *(signed char *)0xC7F4758;
    t1 = t0;
    if (t0 == 0) {
        t0 = 0xC352240;
        if ((int)(unsigned char)(*(signed char *)0xC35236E) > (int)0x1) {
            (((struct o2_uchar *)0xC7F4756)->v) = 0x1;
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}

int vmu_load_vmgame_data(int a4)
{
    return (buLoadFileEx(a4, 0xC116220, 0xC352240, 0x4, 0x1));
}

int vmu_step_load_vmgame(int a4, int a5, int a6)
{
    int stk[2];

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
    v0_4 = (((struct oC_int *)g_vmu_ctl)->v);
    *(unsigned int *)(((int)stk + 0)) = ((int)g_vmu_port_slots);
    v0_8 = *(signed char *)g_vmu_step_state;
    v0_9 = (v0_8);
    v0_1 = (((int)g_vmu_port_slots));
    v0_3 = (((int)g_vmu_mounted_port));
    v0_0 = (((int)g_vmu_step_state));
    v0_2 = (((int)g_vmu_op_pending));
    v0_6 = (((int)g_vmu_wanted_port));
    v0_7 = (v0_4);
    v0_4 = (0x1);
    if ((v0_8 == 0)) goto L_C011B1C;
    if ((v0_9 == 1)) goto L_C011B2E;
    if ((v0_9 == 2)) goto L_C011B7C;
    if ((v0_9 == 3)) goto L_C011BB6;
    if ((v0_9 == 4)) goto L_C011BE6;
    L_C011C18:;
    v0_9 = (0xFFFFFFFF);
    L_C011C1A:;
    return v0_9;
    L_C011BE6:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    FUN_0c011a70();
    vmu_lcd_set_idle_image();
    vmu_lcd_refresh((*(int *)((v0_6 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    (((struct o0_uint *)g_vmu_ctl)->v) = 0x0;
    v0_0 = *(int *)((v0_6 + 0x0));
    v0_9 = ((*(int *)((((short)((((v0_0 << 2) + v0_0) << 2) << 1) + v0_1) + 0x8))));
    goto L_C011C1A;
    L_C011BB6:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_1 = *(int *)((v0_3 + 0x0));
    v0_6 = (v0_1);
    if ((v0_1 != v0_7)) goto L_C011BE0;
    v0_1 = (vmu_load_vmgame_data((*(int *)((((short)((((v0_6 << 2) + v0_6) << 2) << 1) + (*(int *)(((int)stk + 0)))) + 0x0))))) != 0;
    if (v0_1) goto L_C011C18;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_C011BE0:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011C18;
    L_C011B7C:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_1 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_7 << 2) + v0_7) << 2) << 1) + v0_1);
    v0_1 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_7 << 2) + v0_7) << 2) << 1) + v0_1) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_1) goto L_C011C18;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_C011BB0:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011C18;
    L_C011B2E:;
    if (((*(int *)((v0_3 + 0x0))) == (*(int *)((v0_6 + 0x0))))) goto L_C011BB0;
    if (((*(int *)((v0_3 + 0x0))) == -1)) goto L_C011B76;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C011C18;
    v0_2 = *(int *)((v0_3 + 0x0));
    v0_2 = (buUnmount((*(int *)((((short)((((v0_2 << 2) + v0_2) << 2) << 1) + v0_1) + 0x0))))) != 0;
    if (v0_2) goto L_C011C18;
    v0_2 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((((short)((((v0_2 << 2) + v0_2) << 2) << 1) + v0_1) + 0x4)) = 0x12;
    *(unsigned int *)((v0_3 + 0x0)) = 0xFFFFFFFF;
    L_C011B76:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011C18;
    L_C011B1C:;
    (((struct o0_uint *)g_vmu_ctl)->v) = v0_4;
    *(unsigned int *)((v0_6 + 0x0)) = v0_5;
    vmu_lcd_set_busy_image();
    vmu_lcd_refresh((*(int *)((v0_6 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_4;
    goto L_C011B2E;
}

int vmu_rewrite_vmgame_data(int a4, int a5)
{
    *(unsigned char *)0xC352240 = a5;
    return (buRewriteExecFile(a4, 0xC116220, 0xC352240, 0x5, 0x1));
}

int vmu_step_rewrite_vmgame(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_5 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)g_vmu_ctl)->v));
    v0_9 = *(signed char *)g_vmu_step_state;
    v0_10 = (v0_9);
    v0_3 = (((int)g_vmu_port_slots));
    v0_1 = (((int)g_vmu_op_pending));
    v0_4 = (((int)g_vmu_mounted_port));
    v0_0 = (((int)g_vmu_step_state));
    v0_8 = (((int)g_vmu_wanted_port));
    v0_6 = (((int)g_vmu_port_slots));
    v0_2 = (0x1);
    if ((v0_9 == 0)) goto L_C011C8C;
    if ((v0_10 == 1)) goto L_C011C9E;
    if ((v0_10 == 2)) goto L_C011D2C;
    if ((v0_10 == 3)) goto L_C011D64;
    if ((v0_10 != 4)) goto L_C011C88;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    L_C011DC2:;
    return 0xFFFFFFFF;
    L_C011C88:;
    goto L_C011DC2;
    L_C011D64:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    v0_3 = *(int *)((v0_4 + 0x0));
    v0_8 = (v0_3);
    if ((v0_3 != (*(int *)(((int)stk + 0))))) goto L_C011D8E;
    v0_3 = (vmu_rewrite_vmgame_data((*(int *)((((short)((((v0_8 << 2) + v0_8) << 2) << 1) + v0_6) + 0x0))), v0_5)) != 0;
    if (v0_3) goto L_C011DC2;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C011D8E:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    goto L_C011DC2;
    L_C011D2C:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C011DC2;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_6);
    v0_3 = (buMountDisk((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0xC352640, ((((*(int *)((((short)((((v0_3 << 2) + v0_3) << 2) << 1) + v0_6) + 0xC))) << 8) << 1) + 0x20))) != 0;
    if (v0_3) goto L_C011DC2;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C011D5E:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    goto L_C011DC2;
    L_C011C9E:;
    if (((*(int *)((v0_4 + 0x0))) == (*(int *)((v0_8 + 0x0))))) goto L_C011D5E;
    if (((*(int *)((v0_4 + 0x0))) == -1)) goto L_C011CEA;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C011CB6;
    goto L_C011DC2;
    L_C011CB6:;
    v0_1 = *(int *)((v0_4 + 0x0));
    v0_1 = (buUnmount((*(int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x0))))) != 0;
    if (v0_1) goto L_C011DC2;
    v0_1 = *(int *)((v0_4 + 0x0));
    *(unsigned int *)((((short)((((v0_1 << 2) + v0_1) << 2) << 1) + v0_3) + 0x4)) = 0x12;
    *(unsigned int *)((v0_4 + 0x0)) = 0xFFFFFFFF;
    L_C011CEA:;
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    goto L_C011DC2;
    L_C011C8C:;
    (((struct o0_uint *)g_vmu_ctl)->v) = v0_2;
    *(unsigned int *)((v0_8 + 0x0)) = v0_7;
    vmu_lcd_set_busy_image();
    vmu_lcd_refresh((*(int *)((v0_8 + 0x0))));
    *(unsigned char *)((v0_0 + 0x0)) = v0_2;
    goto L_C011C9E;
}

int vmu_check_task(void)
{
    int stk[3];
    register int t7;
    int t9;
    int t34;

    if ((*(signed char *)0xC7F2EE0) == 0) {
        memset(((int)g_vmu_check_work), 0x0, 0x24);
        *(unsigned char *)0xC7F2EE0 = ((*(signed char *)0xC7F2EE0) + 0x1);
    }
    t7 = *(signed char *)g_vmu_check_work;
    if (t7 != 0) {
        if (t7 != 1) {
            return t7;
        }
        if (((*(signed char *)0xC7F300B) == 0) && (t9 = *(signed char *)0xC7F300E, t9 == 0)) {
            vmu_check_step(((int)g_vmu_check_work), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
            FUN_0c05f952();
            FUN_0c055562();
        }
        return game_draw_frame();
    }
    *(unsigned char *)g_vmu_check_work = ((*(signed char *)g_vmu_check_work) + 0x1);
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
    game_reset_objects();
    cam_init_records();
    FUN_0c05f2d4(0x3, 0x0);
    bgm_stop_streams();
    FUN_0c0a2f66(0x0);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x1);
    FUN_0c0a2f66(0x2);
    FUN_0c0a2f66(0x3);
    FUN_0c0a2f66(0x4);
    cam_request_mode(0x1C, 0x0, 0xF0);
    save_reset_all_data();
    if (((*(signed char *)0xC7F300B) == 0) && (t34 = *(signed char *)0xC7F300E, t34 == 0)) {
        vmu_check_step(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        cam_update_view_matrices(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        FUN_0c05f952();
        FUN_0c055562();
    }
    return game_draw_frame();
}

int vmu_check_dispatch(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_0 = *(signed char *)((v0_2 + 0x2));
    v0_1 = (v0_0);
    v0_2 = (v0_2);
    if ((v0_0 == 0)) goto L_C012004;
    if ((v0_1 == 1)) goto L_C012010;
    if ((v0_1 == 2)) goto L_C012018;
    if ((v0_1 == 3)) goto L_C012020;
    if ((v0_1 == 4)) goto L_C012028;
    if ((v0_1 == 6)) goto L_C012030;
    if ((v0_1 == 7)) goto L_C012038;
    if ((v0_1 == 8)) goto L_C012040;
    if ((v0_1 == 9)) goto L_C012048;
    L_C01204C:;
    obj_tick_class(0x5, a5, a6, a7);
    return FUN_0c0593e0(0x5);
    L_C012048:;
    vmu_check_mode_09(v0_2);
    goto L_C01204C;
    L_C012040:;
    vmu_check_mode_08(v0_2);
    goto L_C01204C;
    L_C012038:;
    vmu_check_mode_07(v0_2);
    goto L_C01204C;
    L_C012030:;
    vmu_check_do_load(v0_2);
    goto L_C01204C;
    L_C012028:;
    vmu_check_mode_04(v0_2);
    goto L_C01204C;
    L_C012020:;
    vmu_check_mode_03();
    goto L_C01204C;
    L_C012018:;
    vmu_check_mode_02();
    goto L_C01204C;
    L_C012010:;
    vmu_check_select_port();
    goto L_C01204C;
    L_C012004:;
    *(unsigned char *)((v0_2 + 0x2)) = ((*(signed char *)((v0_2 + 0x2))) + 0x1);
    *(unsigned char *)((v0_2 + 0x3)) = 0x0;
    vmu_check_create_obj();
    goto L_C012010;
}

void vmu_first_port_from_mask(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x18)) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & (*(int *)((a4 + 0xC)))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return;
        }
    }
    *(unsigned int *)((a4 + 0x18)) = t0;
}

int FUN_0c01238c(int a4)
{
    register int t0;

    t0 = *(signed char *)0xC361BE9;
    *(unsigned char *)((a4 + 0x1)) = t0;
    return t0;
}

int vmu_check_create_obj(void)
{
    register int t0;

    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC01238C;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        return FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((int)g_res_vms_check), 0x10);
    }
    return t0;
}

void vmu_check_message_update(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC361BE8) != 0) {
        obj_destroy(a4, a5, a6, a7);
    return;
    }
}

void vmu_check_show_message(int a4)
{
    int stk[2];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a4;
    (((struct o0_uchar *)0xC361BE8)->v) = 0x0;
    (((struct o1_uchar *)0xC361BE8)->v) = 0x1;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC01240E;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x0;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x1)) = 0x0;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t5 = *(signed char *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = (((t5 << 2) << 2) + 0xC116240);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664B20, (*(signed char *)(((((t5 << 2) << 2) + 0xC116240) + 0xC))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    }
}

void FUN_0c0124ce(void)
{
    
}

int vmu_check_run_objects(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned char *)0xC361BE8 = 0x1;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned char *)0xC361BE8 = 0x0;
    return t0;
}

int vmu_check_start_pressed(void)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & 0x8) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & 0x8) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int vmu_check_pad_pressed(int a4)
{
    if (((unsigned short)((((struct o0_short *)0xC361BFC)->v)) & a4) == 0) {
        if (((unsigned short)((((struct o14_short *)0xC361BFC)->v)) & a4) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}
