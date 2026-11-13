/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int FUN_0c0634b4(int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_set_mode_owner(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int pl_mode15_cls08_f0(int a4)
{
    int stk[9];
    register int t0;
    register int t2;
    register float u27;
    register float u32;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        t2 = FUN_0c09c782(a4);
        if ((signed char)t2 != 0) {
            FUN_0c0634b4(a4);
            (((struct o7236_uchar *)(a4))->v) = 0x0;
            (((struct o71CC_uint *)(a4))->v) = 0x0;
        } else {
            obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x5, (*(signed char *)((a4 + 0x3))));
        }
        return (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 20) {
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0xD, (*(signed char *)((a4 + 0x3))));
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
        *(int *)((int)stk + 12) = 0xC14EB88;
        *(int *)((int)stk + 8) = 0xC14EB7C;
        *(int *)((int)stk + 4) = 0x43;
        *(int *)((int)stk + 0) = 0x14;
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x8, 0x1, 0x14, 0x43, 0xC14EB7C, 0xC14EB88);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 19) {
        u27 = ((((struct o20_float *)(a4))->v));
        u27 = u27 + (*(float *)0xC0662C8) * (math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 16)) = u27;
        u32 = ((((struct o28_float *)(a4))->v));
        u32 = u32 + (*(float *)0xC0662C8) * (math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000)));
        *(float *)(((int)stk + 24)) = u32;
        *(float *)(((int)stk + 20)) = ((((struct o24_float *)(a4))->v));
        *(volatile signed char *)((a4 + 0x27C));
        return ((int (*)(void))(0xC066228))();
    }
    return ((int (*)(void))(0xC06624E))();
}
