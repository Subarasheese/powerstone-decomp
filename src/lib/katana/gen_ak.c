/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10F4_int { char p[0x10F4]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oFC0_int { char p[0xFC0]; int v; };
float FUN_0c02649a(int, int);
int fx_spawn_periodic_trail(int, int, int, int);
int _quick_odd_mvn(int);
int mpdrv_dpf(int, ...);
extern int _builtin_tas(char *);
int stage_type01_spawn_ground_fx(int a4);
int mpdrv_frame_recv_pre(void);


int mpdrv_frame_recv_pre(void)
{
    register int t0;

    t0 = *(int *)0xC843924;
    if (((((struct oFC0_int *)(t0))->v)) != 0) {
        return 0xFFFFFFFD;
    }
    if (((*(int *)((((((struct o10F4_int *)(t0))->v)) + 0x18))) & 1) != 0) {
        return 0xFFFFFFFF;
    }
    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B640);
        return 0xFFFFFFFE;
    }
    return 0x0;
}
