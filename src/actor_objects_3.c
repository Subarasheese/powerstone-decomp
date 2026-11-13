/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 3 of 6 of the same module) (0c08bf90-0c08c074) */

struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int snd_play_char_voice(int, int);

int FUN_0c08bf90(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return pl_step_motion(a4);
            }
            t0 = *(signed char *)((a4 + 0xB));
            if ((t0 == 0) || (t0 == 1)) {
                t0 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                    snd_play_char_voice(a4, 0x1);
                }
            }
            return pl_step_motion(a4);
        }
        t0 = *(signed char *)((a4 + 0xB));
        if ((t0 == 0) || (t0 == 1)) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                snd_play_char_voice(a4, 0x1);
                (((struct oEC_ushort *)(a4))->v) = 0x76;
            }
        }
        return pl_step_motion(a4);
    }
    t0 = *(signed char *)((a4 + 0xB));
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
        } else {
            pl_start_motion(a4, 0x3, 0x1);
        }
    } else {
        pl_start_motion(a4, 0x3, 0x2);
        (((struct oEC_ushort *)(a4))->v) = 0x28;
    }
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}
