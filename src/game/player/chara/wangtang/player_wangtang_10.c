/* character 2 (Wang Tang) (0c07164c-0c071b2c) */

/* named globals (symbols.txt) */
extern char g_pl_wangtang_special_tbl[];
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion(int, int, int);
struct o719E_short { char p[0x719E]; short v; };
int pl_timer_arm_forever(int);
int pl_step_motion(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3dcc(int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
int pl_detect_special_input(int, int);
typedef int (*Handler)(char *, int, int, int);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);
int thunk_FUN_0c062242(int, int);

int pl_wangtang_state31_phase0(int a4);
int pl_wangtang_state31_phase1(int a4);
int pl_wangtang_special0_start(int a4);
int pl_wangtang_special0_update(int a4);

int pl_wangtang_state12_phase0(int a4)
{
    register int t2;

    pl_start_motion(a4, 0x3, ((((*(signed char *)((a4 + 0xB))) == 0)) ? 1 : 0));
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t2 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t2 + 0x1);
    return (t2 + 0x1);
}

int pl_wangtang_state12_phase1(int a4)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t7;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        pl_timer_arm_forever(a4);
    }
    t5 = *(signed char *)((a4 + 0xB));
    if (t5 == 0) {
        t7 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t7 == 56) {
            return FUN_0c0a3dcc((*(signed char *)((a4 + 0x3))), 0x0);
        }
        return (unsigned short)t7;
    }
    return t5;
}

int pl_wangtang_state31_phase0(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x3, 0x7);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_wangtang_state31_phase1(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_wangtang_state31_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_wangtang_state31_phase1(a4);
    }
    return pl_wangtang_state31_phase0(a4);
}

int pl_wangtang_check_special_input(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC336F4C);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC336F38);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC336F60);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

int pl_wangtang_special_move_dispatch(char *obj, int arg1, int arg2, int arg3)
{
    return ((Handler *)g_pl_wangtang_special_tbl)[*(signed char *)(obj + 0x7209)](obj, arg1, arg2, arg3);
}

int pl_wangtang_special0_start(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x30);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC071860));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0xE;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_wangtang_special0_update(int a4)
{
    int stk[8];
    register int t13;
    register int t29;
    register int t31;
    register int t38;
    register int t55;
    register int t57;
    register int t72;
    int t14;
    register int t15;
    int t22;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t72 = 0x71A8;
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            pl_step_motion_owner((*(int *)((a4 + 0x1C))));
            pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
        }
        t13 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t13 - 1);
        if (((short)(t13 - 1) == 0) && (t14 = *(int *)((a4 + 0x1C)), t15 = *(signed char *)((t14 + 0x71F1)), t15 == 0)) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t22 = (((struct oEC_short *)(a4))->v), t22 == 0)) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            obj_set_owner_hit_record(a4, 0x30);
            obj_force_owner_state27(a4, 0x30);
        }
        t29 = (((struct o719E_short *)(a4))->v);
        if (((unsigned short)t29 != 33) && (((unsigned short)t29 != 46) && (((unsigned short)t29 != 58) && (((unsigned short)t29 != 70) && (((unsigned short)t29 != 82) && ((unsigned short)t29 != 94)))))) {
        } else {
            t31 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t31 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t31 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t31 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 4);
            fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
            t38 = (((struct o719E_short *)(a4))->v);
            if (((unsigned short)t38 != 33) && ((unsigned short)t38 != 58)) {
            } else {
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
            }
            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 82) {
                snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xB);
            }
            obj_set_owner_hit_record(a4, 0x31);
        }
        t55 = (((struct o719E_short *)(a4))->v);
        t72 = (unsigned short)t55;
        if ((unsigned short)t55 == 121) {
            t57 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t57 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242(((((unsigned short)((unsigned short)t57 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t57 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (int)stk + 4);
            fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
            t72 = (snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xC));
        }
    }
    return t72;
}

int pl_wangtang_special0_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_wangtang_special0_update(a4);
    }
    return pl_wangtang_special0_start(a4);
}

int pl_wangtang_special2_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC336F84 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}
