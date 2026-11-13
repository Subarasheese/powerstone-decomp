/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c067bcc-0c067d4c) */

struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e7140();

int pl_falcon_spawn_timed_fx(int a4)
{
    int stk[22];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t14;
    register int t17;
    register int t28;
    register int t39;
    register int t50;
    register int t79;
    register int t4;
    register int t13;

    t0 = ((int (*)(int))(FUN_0c0e7140))((((int)stk + 16) + 0x30));
    t1 = ((int (*)(void))(FUN_0c0e7140))();
    t2 = ((int (*)(void))(FUN_0c0e7140))();
    if ((int)(*(signed char *)((t4 + (*(signed char *)((a4 + 0x7238)))))) > 0) {
        t6 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t6 + 0x1);
        if ((short)(t6 + 0x1) == (*(signed char *)((t4 + (*(signed char *)((a4 + 0x7238))))))) {
            t14 = *(signed char *)((t13 + (*(signed char *)((a4 + 0x7238)))));
            switch (t14) {
            case 0:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                t50 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t50;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x0, t50, 0x43, 0xC3368F8, 0xC336904);
                break;
            case 1:
                *(int *)((int)stk + 12) = 0xC33691C;
                *(int *)((int)stk + 8) = 0xC336910;
                *(int *)((int)stk + 4) = 0x43;
                t39 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t39;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, t39, 0x43, 0xC336910, 0xC33691C);
                break;
            case 2:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                t28 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t28;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xC, 0x0, t28, 0x43, 0xC3368F8, 0xC336904);
                break;
            case 3:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                t17 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t17;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x11, 0x0, t17, 0x43, 0xC3368F8, 0xC336904);
                break;
            }
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t79 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t79 = (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    return t79;
}
