/* Kraken attack update, class handlers and state updates (part 7 of 7 of the same module) (0c086d98-0c087604) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c085606(int);
int pl_kraken_play_attached_keyframes(int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int snd_play_char_voice(int, int);
int fx_spawn_hit_effect(int, int, int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int FUN_0c0a3762(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_math_mat_get_translate(int, int);
int pl_kraken_state22_phase0(int, int, int);
int pl_kraken_state22_phase1(int);

int pl_kraken_special_id3_phase1(int a4)
{
    register int t0;

    pl_step_motion(a4);
    FUN_0c085606(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x2;
        (((struct oEC_ushort *)(a4))->v) = 0x52;
        pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x33);
        t0 = *(int *)((a4 + 0x1C));
        (((struct o71A9_uchar *)(t0))->v) = 0x1;
        (((struct o71A8_uchar *)(t0))->v) = 0x1;
        (((struct o72BC_uint *)(a4))->v) = 0xC337C3C;
        FUN_0c085606(a4);
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        *(unsigned int *)(((0x72BC + a4) + 0x4)) = 0xC337E78;
        pl_kraken_play_attached_keyframes(a4);
        return snd_play_char_voice(a4, 0x35);
    }
    return 0xEC;
}

int pl_kraken_special_id3_phase2(int a4)
{
    int stk[16];
    register int t5;
    register float u11;
    register float u16;
    register int t26;
    register float u32;
    register float u37;
    register int t46;
    register int t69;
    register int t51;
    register float u57;
    register float u62;

    *(unsigned int *)(((int)stk + 4)) = (0x72BC + a4);
    pl_step_motion(a4);
    FUN_0c085606(a4);
    pl_kraken_play_attached_keyframes(a4);
    pl_apply_motion_translation(a4);
    if (((((struct oEC_short *)(a4))->v)) == 30) {
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 8);
        u11 = (*(float *)(((int)stk + 8)));
        u11 = u11 + 30.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 8)) = u11;
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 60.0f);
        u16 = (*(float *)(((int)stk + 16)));
        u16 = u16 + 30.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 16)) = u16;
        fx_spawn_hit_effect((((int)stk + 0) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x6);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
        snd_play_char_voice(a4, 0x35);
        obj_set_owner_hit_record(a4, 0x34);
    }
    if (((((struct oEC_short *)(a4))->v)) == 58) {
        t26 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t26 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 8);
        u32 = (*(float *)(((int)stk + 8)));
        u32 = u32 + 30.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 8)) = u32;
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 60.0f);
        u37 = (*(float *)(((int)stk + 16)));
        u37 = u37 + 30.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 16)) = u37;
        fx_spawn_hit_effect((((int)stk + 0) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x7);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
        snd_play_char_voice(a4, 0x35);
        obj_set_owner_hit_record(a4, 0x35);
    }
    t46 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t46 - 1);
    t69 = 0xEC;
    if ((short)(t46 - 1) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1C;
        pl_start_motion(a4, 0x4, 0x4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0xC337D5C;
        FUN_0c085606(a4);
        t51 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t51 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t51 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t51 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 8);
        u57 = (*(float *)(((int)stk + 8)));
        u57 = u57 + 30.0f * (math_sin_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 8)) = u57;
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 60.0f);
        u62 = (*(float *)(((int)stk + 16)));
        u62 = u62 + 30.0f * (math_cos_angle16((*(int *)((a4 + 0x30)))));
        *(float *)(((int)stk + 16)) = u62;
        fx_spawn_hit_effect((((int)stk + 0) + 0x8), (a4 + 0x2C), (*(signed char *)((a4 + 0x3))), 0x8);
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x0);
        snd_play_char_voice(a4, 0x35);
        t69 = (obj_set_owner_hit_record(a4, 0x36));
    }
    return t69;
}

int pl_kraken_state22_update(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_kraken_state22_phase1(a4);
    }
    return pl_kraken_state22_phase0(a4, a5, a6);
}
