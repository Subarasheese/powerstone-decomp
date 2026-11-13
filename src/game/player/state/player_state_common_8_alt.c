/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

extern char pl_step_motion(char *);
extern char FUN_0c09c782(char *);
extern void FUN_0c0634b4(char *);
extern void obj_set_mode_owner(int, int, int);
extern void pl_end_action_choose_state(char *);
extern void pl_apply_motion_translation(char *);
extern void FUN_0c063468(char *);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern void thunk_FUN_0c062242(char *, char *);
extern void fx_spawn_effect_at_point(int, float *);
extern void pl_start_motion(char *, int, int);
extern char g_players[];
extern int g_frame_counter;
int pl_mode15_cls14_f0_phase0(int);
int pl_mode15_cls14_f0_phase1(int);
int pl_mode15_cls14_f0_phase2(int);

void pl_mode15_cls02_f0(char *obj)
{
    float vec[3];
    float cos_val, sin_val;
    char *player;
    int variant;

    if (pl_step_motion(obj) != 0) {
        if (FUN_0c09c782(obj) != 0) {
            FUN_0c0634b4(obj);
            obj[0x7236] = 0;
            *(int *)(obj + 0x71CC) = 0;
        } else {
            obj_set_mode_owner(*(int *)(obj + 0x71CC), 5, obj[3]);
        }
        pl_end_action_choose_state(obj);
        return;
    }
    pl_apply_motion_translation(obj);
    if (*(unsigned short *)(obj + 0x719E) == 18) {
        FUN_0c063468(obj);
    }
    if (*(unsigned short *)(obj + 0x719E) > 18 && *(short *)(obj + 0xF0) != 0) {
        cos_val = math_cos_angle16(0x14000 - *(int *)(obj + 48));
        *(float *)(obj + 32) = *(float *)(obj + 32) + *(float *)(obj + 56) * cos_val;
        sin_val = math_sin_angle16(0x14000 - *(int *)(obj + 48));
        *(float *)(obj + 40) = *(float *)(obj + 40) + *(float *)(obj + 56) * sin_val;
        *(float *)(obj + 56) = *(float *)(obj + 56) - *(float *)(obj + 72);
        *(short *)(obj + 0xF0) = *(short *)(obj + 0xF0) - 1;
        if ((g_frame_counter & 3) == 0) {
            player = g_players + (unsigned short)((unsigned short)obj[3] * 0x72D0);
            thunk_FUN_0c062242(player + 0x300 + (short)(player[0x71F1] * 3520) + 3168, (char *)vec);
            vec[1] = *(float *)(obj + 724);
            fx_spawn_effect_at_point(obj[3], vec);
            player = g_players + (unsigned short)((unsigned short)obj[3] * 0x72D0);
            thunk_FUN_0c062242(player + 0x300 + (short)(player[0x71F1] * 3520) + 2640, (char *)vec);
            vec[1] = *(float *)(obj + 724);
            fx_spawn_effect_at_point(obj[3], vec);
        }
    }
    if (FUN_0c09c782(obj) == 0) {
        variant = obj[0x71F1];
        if (variant == 0 || *(short *)(obj + 0x71F4) != 0) {
            if (*(unsigned short *)(obj + 0x719E) > 38 && (*(int *)(obj + 0x2E4) & 0x600) != 0) {
                pl_start_motion(obj, 2, 243);
                *(short *)(obj + 0xEC) = 10;
                *(short *)(obj + 0xF0) = 9;
                *(float *)(obj + 56) = -4.0f;
                *(float *)(obj + 68) = 4.0f / (float)*(short *)(obj + 0xF0);
                *(float *)(obj + 72) = 0.0f;
                *(float *)(obj + 60) = 0.0f;
            }
        }
    }
}

int pl_mode15_cls14_f0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return pl_mode15_cls14_f0_phase2(a4);
        }
        return pl_mode15_cls14_f0_phase1(a4);
    }
    return pl_mode15_cls14_f0_phase0(a4);
}
