/* character 3 (Jack) (0c076714-0c076978) */

/* named globals (symbols.txt) */
extern char g_pl_jack_special_tbl[];
int pl_step_motion(int);
int pl_detect_special_input(int, int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3762(int, int);
int thunk_FUN_0c062242(int);

int pl_jack_state31_phase1(int a4);
int pl_jack_special0_start(int a4);
int pl_jack_special0_update(int a4);

int pl_jack_state31_phase1(int a4)
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

int pl_jack_state31_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_jack_state31_phase1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0766F0))(a4, a5, a6, a7);
}

int pl_jack_check_special_input(int a4)
{
    register int t0;
    register int t1;

    t0 = pl_detect_special_input(a4, 0xC337094);
    t1 = 0x1;
    if ((signed char)t0 != 0) {
    } else {
        t0 = pl_detect_special_input(a4, 0xC337080);
        t1 = 0x0;
        if ((signed char)t0 != 0) {
        } else {
            t0 = pl_detect_special_input(a4, 0xC3370A8);
            t1 = 0x63;
            if ((signed char)t0 != 0) {
                t1 = 0x2;
            }
        }
    }
    return t1;
}

/* Tail-dispatch: calls the handler indexed by the object's mode byte with the same object. */
void pl_jack_special_move_dispatch(char *obj)
{
    void (**handlers)(char *) = (void (**)(char *))((int)g_pl_jack_special_tbl);
    handlers[obj[0x7209]](obj);
}

int pl_jack_special0_start(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x4, 0x0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x34);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    obj_place_linked_ahead(a4, 0x0, 150.0f);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0xE;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_jack_special0_update(int a4)
{
    int stk[8];
    register int t10;
    register int t21;
    register int t36;
    int t11;
    register int t12;
    int t19;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if (((((struct oEC_short *)(a4))->v)) == 0) {
        pl_step_motion_owner((*(int *)((a4 + 0x1C))));
        pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
    }
    t10 = (((struct oEE_short *)(a4))->v);
    (((struct oEE_ushort *)(a4))->v) = (t10 - 1);
    if (((short)(t10 - 1) == 0) && (t11 = *(int *)((a4 + 0x1C)), t12 = *(signed char *)((t11 + 0x71F1)), t12 == 0)) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t19 = (((struct oEC_short *)(a4))->v), t19 == 0)) {
        t21 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t21 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t21 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t21 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
        fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        obj_set_owner_hit_record(a4, 0x30);
        obj_force_owner_state27(a4, 0x30);
    }
    t36 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t36 = 0x71A8;
    }
    return t36;
}

int pl_jack_special0_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_jack_special0_update(a4);
    }
    return pl_jack_special0_start(a4);
}
