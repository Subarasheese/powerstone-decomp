/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10E8_int { char p[0x10E8]; int v; };
int FUN_0c0593e0(int);
int obj_tick_class(int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int menu_scene1_update(void);
int menu_player_select_scene_update(void);
int menu_stage_select_scene_update(void);
int FUN_0c0d54ac(void);
int nl_texture_surface_words(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslateV(int);
int FUN_0c0ff02c(int, int, int, int);
int FUN_0c100260(void);
int mpdrv_set_getcond(void);
int mpdrv_set_dkill(void);
int mpdrv_set_dreset(void);
int mpdrv_set_allstatreq(void);
int mpdrv_set_getminfo(void);
int mpdrv_set_arctrl(void);
int mpdrv_set_ft4ctrl(void);
int mpdrv_set_setcond(void);
int pl_wangtang_mode12_phase2(int a4);
int FUN_0c0fe938(int a4, int a5, int a6, int a7);
int FUN_0c098a3c(int a4);
int draw_set_euler_rotation(int a4, int a5);
int game_play_state_03(void);
int game_play_state_01(void);
int game_play_state_02(void);
int nl_texture_slot_finish(int a4, int a5, int a6, int a7);
int kdSetAllStatusRequest(void);
int kdSetDeviceReset(void);
int kdSetGetCondition(void);
int kdSetDeviceKill(void);
int kdSetSetCondition(void);
int kdSetGetMediaInfo(void);
int kdSetARControl(void);
int kdSetFT4Control(void);

int FUN_0c0fe938(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0ff02c(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

int kdSetAllStatusRequest(void)
{
    register int t0;

    t0 = mpdrv_set_allstatreq();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetDeviceReset(void)
{
    register int t0;

    t0 = mpdrv_set_dreset();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_getcond();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetDeviceKill(void)
{
    register int t0;

    t0 = mpdrv_set_dkill();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetSetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_setcond();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetMediaInfo(void)
{
    register int t0;

    t0 = mpdrv_set_getminfo();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetARControl(void)
{
    register int t0;

    t0 = mpdrv_set_arctrl();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetFT4Control(void)
{
    register int t0;

    t0 = mpdrv_set_ft4ctrl();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}
