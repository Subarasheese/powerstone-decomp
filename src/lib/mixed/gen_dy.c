/* Straight-line functions with calls and guards (batch gen_dy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_trail_chain(int, int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_step_motion(int);
int FUN_0c0883a4(int a4);
int FUN_0c0883f2(int a4);
int FUN_0c088434(int a4);
int FUN_0c088484(int a4);
int cache_run_uncached_purge(void);
int cache_run_uncached_writeback(void);

int FUN_0c0883a4(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        fx_spawn_trail_chain(a4, 0x0);
        (((struct oEC_ushort *)(a4))->v) = 0x2F;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t1 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c0883f2(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t1 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c088434(int a4)
{
    register int t4;
    register int t3;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t4 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t3 = *(signed char *)((a4 + 0xB));
        *(unsigned char *)((a4 + 0xB)) = (t3 + 0x1);
        t4 = (t3 + 0x1);
    }
    return t4;
}

int FUN_0c088484(int a4)
{
    (((struct o7223_uchar *)(a4))->v) = 0x0;
    return pl_end_action_choose_state(a4);
}

int cache_run_uncached_purge(void)
{
    return ((int (*)(void))(0xAC0FEC30))();
}

int cache_run_uncached_writeback(void)
{
    return ((int (*)(void))(0xAC0FEE54))();
}
