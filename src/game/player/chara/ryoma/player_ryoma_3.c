/* character 1 (Ryoma) (0c06cf4c-0c06d140) */

struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_set_owner_hit_record(int, int);
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int thunk_FUN_0c062242(int, int);

int pl_ryoma_special2_phase1(int a4)
{
    int stk[11];
    register int t3;
    register int t5;
    register int t38;
    register int t46;
    register int t39;
    register int t23;

    pl_step_motion(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t3 + 0x1);
    if ((int)(short)(t3 + 0x1) >= (int)0x1A) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oF0_ushort *)(a4))->v) = 0x2;
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xA50), (int)stk + 4);
        fx_spawn_hit_effect((((int)stk + 16) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x2, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x5);
        obj_set_owner_hit_record(a4, 0x30);
        snd_play_char_voice((*(int *)((a4 + 0x1C))), 0xA);
    }
    if (((((struct oF0_short *)(a4))->v)) == 10) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            *(int *)((int)stk + 12) = 0xC14EF8C;
            *(int *)((int)stk + 8) = 0xC14EF80;
            *(int *)((int)stk + 4) = 0x53;
            *(int *)((int)stk + 0) = 0x1E;
            t23 = 0x5;
        } else {
            *(int *)((int)stk + 12) = 0xC14EF8C;
            *(int *)((int)stk + 8) = 0xC14EF80;
            *(int *)((int)stk + 4) = 0x53;
            *(int *)((int)stk + 0) = 0x1E;
            t23 = 0x6;
        }
        fx_spawn_on_player_part((*(signed char *)((a4 + 0x3))), 0x0, 0x11, t23, 0x1E, 0x53, 0xC14EF80, 0xC14EF8C);
    }
    if (((((struct oF0_short *)(a4))->v)) == 24) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x9);
    }
    t38 = (((struct oF0_short *)(a4))->v);
    t46 = t38;
    if (t38 == 1) {
        t39 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 16)) = ((unsigned short)((unsigned short)t39 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t39 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t39 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (int)stk + 4);
        fx_spawn_hit_effect((((int)stk + 16) + 0x4), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x1, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        t46 = (FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0));
    }
    return t46;
}

int pl_ryoma_special2_phase2(int a4)
{
    (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
    if (((((struct oF0_short *)(a4))->v)) == 0) {
        (((struct o3C_float *)(a4))->v) = 20.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oF0_ushort *)(a4))->v) = 0x0;
    }
    return 0xF0;
}
