/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c068e10-0c0691c4) */

struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
int thunk_FUN_0c062242(int);
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);

int pl_falcon_special0_start(int a4);
int pl_falcon_special0_update(int a4);

int pl_falcon_special0_start(int a4)
{
    int stk[8];
    register int t3;
    register int t6;
    register int t14;

    pl_start_motion(a4, 0x4, 0x0);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x31);
    t3 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t3))->v) = 0x1;
    (((struct o71A8_uchar *)(t3))->v) = 0x1;
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    t6 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t6 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o720B_uchar *)(a4))->v) = 0xA;
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC068F1C));
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0xE;
    t14 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t14 + 0x1);
    return (t14 + 0x1);
}

int pl_falcon_special0_update(int a4)
{
    int stk[12];
    register int t0;
    register int t11;
    register int t28;
    register int t30;
    register int t41;
    register int t52;
    register int t61;
    int t12;
    register int t13;
    int t20;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t61 = 0x71A8;
    } else {
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            pl_step_motion_owner((*(int *)((a4 + 0x1C))));
            pl_apply_motion_translation((*(int *)((a4 + 0x1C))));
        }
        t11 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t11 - 1);
        if (((short)(t11 - 1) == 0) && (t12 = *(int *)((a4 + 0x1C)), t13 = *(signed char *)((t12 + 0x71F1)), t13 == 0)) {
            (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
        }
        if (((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71AA))) != 0) && (t20 = (((struct oEC_short *)(a4))->v), t20 == 0)) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
            obj_set_owner_hit_record(a4, 0x30);
            obj_force_owner_state27(a4, 0x30);
        }
        pl_apply_motion_translation(a4);
        t28 = (((struct o719E_short *)(a4))->v);
        if ((unsigned short)t28 != 14) {
            if ((unsigned short)t28 != 41) {
                t61 = (unsigned short)t28;
                if ((unsigned short)t28 != 71) {
                } else {
                    snd_play_char_voice(a4, 0x5);
                    t30 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t30 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                    fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3));
                }
            } else {
                snd_play_char_voice(a4, 0x4);
                obj_set_owner_hit_record(a4, 0x31);
                t41 = *(signed char *)((a4 + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t41 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
                fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
            }
        } else {
            snd_play_char_voice(a4, 0x4);
            obj_set_owner_hit_record(a4, 0x31);
            t52 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t52 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840));
            fx_spawn_hit_effect((((int)stk + 0) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t61 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
        }
    }
    return t61;
}

int pl_falcon_special0_dispatch(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_falcon_special0_update(a4);
    }
    return pl_falcon_special0_start(a4);
}
