
void pl_kraken_attack_kind2_phase1(char *o)
{
    int d;
    char *x = o + 0x72BC;
    if ((unsigned short)*(short *)(o + 0x719E) == 11) {
        *(int *)(o + 0x1E80 + 0x1760 + 84) = *(int *)(o + 0x1E80 + 0x1760 + 84) - 0x4000;
        *(int *)(o + 0x1E80 + 0x1810 + 84) = *(int *)(o + 0x1E80 + 0x1810 + 84) + 0x4000;
    }
    if ((unsigned short)*(short *)(o + 0x719E) == 13) {
        *(int *)(x + 8) = FUN_0c0c571c(o, 0);
        if (*(int *)(x + 8) == 0) {
            o[0x7223] = 0;
            pl_end_action_choose_state(o);
        } else {
            fx_spawn_03d254(o, 0);
            *(int *)(o + 0x1E80 + 0x1760 + 84) = 0;
            *(int *)(o + 0x1E80 + 0x1810 + 84) = 0;
            o[0x1E80 + 0x1760 + 64] = 0;
            o[0x1E80 + 0x1810 + 64] = 0;
            o[0x5CA0] = 0;
            snd_play_char_voice(o);
            o[11] = o[11] + 1;
            *(short *)(o + 236) = 180;
        }
    }
    pl_step_motion(o);
    pl_apply_motion_translation(o);
    *(short *)(o + 240) = *(short *)(o + 240) - 1;
    if (*(short *)(o + 240) == 0)
        *(short *)(o + 240) = 1;
    d = (unsigned short)(*(short *)(o + 0x7248) - *(int *)(o + 48));
    if (d & 0x8000)
        d |= 0xFFFF0000;
    *(int *)(o + 48) = (unsigned short)(*(int *)(o + 48) + d / *(short *)(o + 240));
}
