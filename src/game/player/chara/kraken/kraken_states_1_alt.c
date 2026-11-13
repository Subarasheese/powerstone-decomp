/* Kraken attack update, class handlers and state updates (part 1 of 7 of the same module) (0c084310-0c084d0c) */

struct o0_float { float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int fx_spawn_table_burst(int, int, float);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);
int pl_kraken_mode04_phase0(int);
int pl_kraken_mode04_phase1(int);
int pl_kraken_mode04_phase2(int, float);
int pl_kraken_mode04_phase3(int);
int pl_kraken_mode04_phase4(int);

int pl_kraken_mode13_update_v1(int a4)
{
    int stk[7];
    register int t3;
    register float u10;
    register float u15;
    register int t24;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 14) {
        t3 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
        u10 = (*(float *)(((int)stk + 4)));
        u10 = u10 + ((((struct o0_float *)0xC084574)->v)) * (math_sin_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 4)) = u10;
        u15 = (*(float *)(((int)stk + 12)));
        u15 = u15 + ((((struct o0_float *)0xC084574)->v)) * (math_cos_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 12)) = u15;
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((((struct o8_float *)0xC084574)->v)));
        fx_spawn_table_burst((((int)stk + 0) + 0x4), 0x0, ((((struct oC_float *)0xC084574)->v)));
    }
    t24 = 0x71AA;
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        t24 = (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t24;
}

int pl_kraken_mode04_update(int a4, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_kraken_mode04_phase4(a4);
                }
                return pl_kraken_mode04_phase3(a4);
            }
            return pl_kraken_mode04_phase2(a4, f4);
        }
        return pl_kraken_mode04_phase1(a4);
    }
    return pl_kraken_mode04_phase0(a4);
}

int pl_kraken_mode07_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC084A9E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC084942))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0848CC))(a4, a5, a6, a7);
}
