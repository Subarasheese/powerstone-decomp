/* Rouge state updates and specials (part 2 of 7 of the same module) (0c082efc-0c0830e0) */

struct o107_uchar { char p[0x107]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int fx_spawn_03cb28(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int snd_play_char_voice(int, int);
float math_sin_angle16(int);

int pl_rouge_state21_update(int a4)
{
    register int t0;
    int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            pl_step_motion(a4);
            pl_apply_motion_translation(a4);
            t0 = *(signed char *)((a4 + 0xB));
            t1 = t0;
            if ((t0 == 0) || (t0 == 1)) {
                (((struct o107_uchar *)(a4))->v) = 0x1;
                u0 = ((((struct o24_float *)(a4))->v));
                u0 = u0 + (*(float *)0xC083098) * (math_sin_angle16(((((struct oEE_short *)(a4))->v))));
                (((struct o24_float *)(a4))->v) = u0;
                (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x400);
                t1 = 0xEE;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t1 = *(signed char *)((a4 + 0xB));
        if (t1 != 0) {
            if (t1 != 1) {
                if ((t1 != 2) && (t1 != 3)) {
                } else {
                    pl_start_motion(a4, 0x3, 0x5);
                }
            } else {
                pl_start_motion(a4, 0x3, 0x2);
                snd_play_char_voice(a4, 0x14);
                fx_spawn_03cb28(a4, 0x3);
            }
        } else {
            pl_start_motion(a4, 0x3, 0x2);
            snd_play_char_voice(a4, 0x13);
            fx_spawn_03cb28(a4, 0x3);
        }
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = 0x71A8;
    }
    return t0;
}

int pl_rouge_state22_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC083044))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC082FE6))(a4, a5, a6, a7);
}
