/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_float { char p[0x24]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7223_uchar { char p[0x7223]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c0555c4(void);
int FUN_0c087cc4(int);
int fx_burst_create(int, int);
int fx_spawn_03dfd0(int, int);
int fx_spawn_03e354(int, int);
int fx_spawn_03e918(int, int);
int fx_spawn_03ef18(int, int);
int fx_spawn_trail_chain(int, int);
int fx_thrown_object_create(int, int);
int pl_angle_to_opponent(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);
int pl_start_hit_freeze(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int snd_play_char_voice(int, int);
int FUN_0c08933c(int a4, int a5, int a6, int a7);
int FUN_0c089584(int a4);

int FUN_0c08933c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    (((struct o7223_uchar *)(a4))->v) = 0x0;
                    return pl_end_action_choose_state(a4);
                }
                pl_step_motion(a4);
                pl_apply_motion_translation(a4);
                t0 = (((struct oF0_short *)(a4))->v);
                (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0xF0;
                if ((short)(t0 - 1) == 0) {
                    t0 = *(signed char *)((a4 + 0xB));
                    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
                    t1 = (t0 + 0x1);
                }
                return t1;
            }
            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 21) {
                (((struct o710B_uchar *)(a4))->v) = 0x1;
                (((struct o710C_uchar *)(a4))->v) = 0x1;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = FUN_0c0555c4();
                if (t0 == 0) {
                    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                    (((struct oEE_ushort *)(a4))->v) = 0x1;
                    pl_start_motion(a4, 0x1, 0x69);
                    (((struct oF0_ushort *)(a4))->v) = 0x10;
                    (((struct o71A9_uchar *)(a4))->v) = 0x1;
                    (((struct o71A8_uchar *)(a4))->v) = 0x1;
                    (((struct o710B_uchar *)(a4))->v) = 0x0;
                    (((struct o710C_uchar *)(a4))->v) = 0x0;
                }
            } else {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                (((struct oEE_ushort *)(a4))->v) = 0x1;
                pl_start_motion(a4, 0x1, 0x69);
                (((struct oF0_ushort *)(a4))->v) = 0x10;
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o710B_uchar *)(a4))->v) = 0x0;
                (((struct o710C_uchar *)(a4))->v) = 0x0;
            }
            FUN_0c087cc4(a4);
        } else {
            if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 10) {
                pl_start_hit_freeze(a4);
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                fx_spawn_trail_chain(a4, ((((struct oF0_short *)(a4))->v)));
                fx_spawn_03e918(a4, ((((struct oF0_short *)(a4))->v)));
                (((struct oEC_ushort *)(a4))->v) = 0x31;
            }
        }
        pl_step_motion(a4);
        return pl_apply_motion_translation(a4);
    }
    if (!((((((struct o24_float *)(a4))->v)) + -100.0f) > ((((struct o2D4_float *)(a4))->v)))) {
        (((struct o7223_uchar *)(a4))->v) = 0x5;
        (((struct o7222_uchar *)(a4))->v) = 0x5;
        (((struct o24_float *)(a4))->v) = (((((struct o2D4_float *)(a4))->v)) + -1.0f);
        return ((int (*)(int, int, int, int))(0xC088FB2))(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x68);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x15;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    fx_spawn_03dfd0(a4, 0x29);
    (((struct oF0_ushort *)(a4))->v) = 0x4;
    if ((0xF0 & ((((struct o2DC_int *)(a4))->v))) != 0) {
        (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
    }
    fx_spawn_03e354(a4, ((((struct oF0_short *)(a4))->v)));
    fx_spawn_03ef18(a4, ((((struct oF0_short *)(a4))->v)));
    return snd_play_char_voice(a4, 0x34);
}

int FUN_0c089584(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                (((struct o7223_uchar *)(a4))->v) = 0x0;
                return pl_end_action_choose_state(a4);
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
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 16) {
            pl_start_hit_freeze(a4);
        }
        if ((unsigned short)((((struct o719E_short *)(a4))->v)) == 22) {
            (((struct o710B_uchar *)(a4))->v) = 0x1;
            (((struct o710C_uchar *)(a4))->v) = 0x1;
        }
        t0 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x2;
            fx_thrown_object_create(a4, 0x1);
        }
        t0 = (((struct oF0_short *)(a4))->v);
        (((struct oF0_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oF0_ushort *)(a4))->v) = 0x4;
            fx_burst_create(a4, 0x1);
        }
        t0 = (((struct oEE_short *)(a4))->v);
        (((struct oEE_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            snd_play_char_voice(a4, 0x33);
        }
        pl_step_motion(a4);
        pl_apply_motion_translation(a4);
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            t0 = FUN_0c0555c4();
            t1 = t0;
            if (t0 == 0) {
                *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
                pl_start_motion(a4, 0x1, 0x6D);
                (((struct o71A9_uchar *)(a4))->v) = 0x1;
                (((struct o71A8_uchar *)(a4))->v) = 0x1;
                (((struct o710B_uchar *)(a4))->v) = 0x0;
                (((struct o710C_uchar *)(a4))->v) = 0x0;
                t1 = 0x710C;
            }
            t0 = t1;
        } else {
            *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
            pl_start_motion(a4, 0x1, 0x6D);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o710B_uchar *)(a4))->v) = 0x0;
            (((struct o710C_uchar *)(a4))->v) = 0x0;
            t0 = 0x710C;
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x2;
    pl_start_motion(a4, 0x1, 0x6B);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x1C;
    (((struct oEE_ushort *)(a4))->v) = 0x21;
    (((struct oF0_ushort *)(a4))->v) = 0x26;
    (((struct oF2_ushort *)(a4))->v) = 0x78;
    return 0xF2;
}
