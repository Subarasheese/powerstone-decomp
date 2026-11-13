/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c067bcc-0c067d4c) */

struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
extern int _slow_mvn();

int pl_falcon_spawn_timed_fx(int a4)
{
    int stk[22];
    register int t2;
    register int t8;
    register int t23;
    register int t35;
    register int t47;
    register int t78;

    { struct mvb22 { char b[22]; }; *(struct mvb22 *)((((int)stk + 16) + 0x30)) = *(struct mvb22 *)(0xC14EE60); }
    { struct mvb22 { char b[22]; }; *(struct mvb22 *)((((int)stk + 16) + 0x18)) = *(struct mvb22 *)(0xC14EE76); }
    { struct mvb22 { char b[22]; }; *(struct mvb22 *)(((int)stk + 16)) = *(struct mvb22 *)(0xC14EE8C); }
    if ((int)(*(signed char *)(((((int)stk + 16) + 0x30) + (*(signed char *)((a4 + 0x7238)))))) > 0) {
        t2 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t2 + 0x1);
        if ((short)(t2 + 0x1) == (*(signed char *)(((((int)stk + 16) + 0x30) + (*(signed char *)((a4 + 0x7238))))))) {
            t8 = *(signed char *)((((int)stk + 16) + (*(signed char *)((a4 + 0x7238)))));
            switch (t8) {
            case 0:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                t47 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t47;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x0, t47, 0x43, 0xC3368F8, 0xC336904);
                break;
            case 1:
                *(int *)((int)stk + 12) = 0xC33691C;
                *(int *)((int)stk + 8) = 0xC336910;
                *(int *)((int)stk + 4) = 0x43;
                t35 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t35;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xE, 0x0, t35, 0x43, 0xC336910, 0xC33691C);
                break;
            case 2:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                t23 = (*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238))))));
                *(int *)((int)stk + 0) = t23;
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0xC, 0x0, t23, 0x43, 0xC3368F8, 0xC336904);
                break;
            case 3:
                *(int *)((int)stk + 12) = 0xC336904;
                *(int *)((int)stk + 8) = 0xC3368F8;
                *(int *)((int)stk + 4) = 0x43;
                *(int *)((int)stk + 0) = ((*(signed char *)(((((int)stk + 16) + 0x18) + (*(signed char *)((a4 + 0x7238)))))));
                fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x11, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
                break;
            }
        }
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t78 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t78 = (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    return t78;
}
