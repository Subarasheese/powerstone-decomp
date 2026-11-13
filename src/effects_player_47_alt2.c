/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3544-0c0c571c) */

struct vec3i { int x, y, z; };
int obj_set_record_char(char *, int);
int snd_play_char_voice(char *, int);
int fx29_spawn_burst8(char *, int);
int cam_set_shake_ramp(int, int);
int thunk_FUN_0c062242(int, float *);
#define FLOAT_AT(off) (*(float *)(popup + (off)))
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c0c3408(int, int);
int fx31_follow_phase_a(int);
int fx31_follow_circle(int);
int fx31_follow_phase_b(int);
int fx31_pick_mode3_from_owner(int);

void fx31_popup_update(char *popup)
{
    float target_pos[3];
    char *target;
    char *player;
    float scale;
    int state;

    target = *(char **)(popup + 0x1C);
    state = popup[12];
    if (state == 0) {
        popup[12] = popup[12] + 1;
        *(short *)(popup + 0xF2) = 0;
        obj_set_record_char(popup, 124);
        state = 1;
    }
    if (state == 1) {
        *(short *)(popup + 0xF2) = *(short *)(popup + 0xF2) + 1;
        if (*(short *)(popup + 0xF2) == 32) {
            popup[12] = popup[12] + 1;
            FLOAT_AT(64) = 0.0f;
            FLOAT_AT(56) = 0.0f;
            FLOAT_AT(76) = 0.0f;
            FLOAT_AT(68) = 0.0f;
            FLOAT_AT(60) = -10.0f;
            FLOAT_AT(72) = -5.0f;
        }
        scale = FLOAT_AT(80) + 0.099999994f;
        FLOAT_AT(80) = scale;
        if (scale > 2.0f)
            FLOAT_AT(80) = 2.0f;
        scale = FLOAT_AT(80);
        FLOAT_AT(88) = scale;
        FLOAT_AT(84) = scale;
        if (*(short *)(popup + 0xF2) < 16) {
            player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)target[3] * (unsigned short)0x72D0);
            thunk_FUN_0c062242((int)(player + 0x300) + (short)((short)player[0x71F1] * (short)0xDC0) + 0x840, target_pos);
            *(struct vec3i *)(popup + 56) = *(struct vec3i *)(target + 32);
            FLOAT_AT(60) = target_pos[1] + 20.0f;
            FLOAT_AT(32) = FLOAT_AT(32) + (FLOAT_AT(56) - FLOAT_AT(32)) / 5.0f;
            FLOAT_AT(36) = FLOAT_AT(36) + (FLOAT_AT(60) - FLOAT_AT(36)) / 5.0f;
            FLOAT_AT(40) = FLOAT_AT(40) + (FLOAT_AT(64) - FLOAT_AT(40)) / 5.0f;
        } else {
            player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)target[3] * (unsigned short)0x72D0);
            thunk_FUN_0c062242((int)(player + 0x300) + (short)((short)player[0x71F1] * (short)0xDC0) + 0x840, target_pos);
            *(struct vec3i *)(popup + 32) = *(struct vec3i *)(target + 32);
            FLOAT_AT(36) = target_pos[1] + 20.0f;
        }
    } else if (state == 2) {
        scale = FLOAT_AT(80) + 0.099999994f;
        FLOAT_AT(80) = scale;
        if (scale > 2.0f)
            FLOAT_AT(80) = 2.0f;
        if (popup[0x2D8] != 0) {
            popup[12] = popup[12] + 1;
            fx29_spawn_burst8(popup, 0);
            snd_play_char_voice(target, 54);
            cam_set_shake_ramp(60, 60);
            popup[0x105] = 0;
            FLOAT_AT(80) = FLOAT_AT(80) + 4.0f;
        } else {
            FLOAT_AT(60) = FLOAT_AT(60) + FLOAT_AT(72);
            FLOAT_AT(36) = FLOAT_AT(36) + FLOAT_AT(60);
        }
        scale = FLOAT_AT(80);
        FLOAT_AT(88) = scale;
        FLOAT_AT(84) = scale;
    } else {
        scale = FLOAT_AT(80) + 0.099999994f;
        FLOAT_AT(80) = scale;
        if (scale > 1.0f)
            FLOAT_AT(80) = 1.0f;
        scale = FLOAT_AT(80);
        FLOAT_AT(88) = scale;
        FLOAT_AT(84) = scale;
        popup[0x105] = 1;
    }
}

int fx31_mode_three(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned char *)((a4 + 0xA)) = 0x0;
            *(unsigned char *)((a4 + 0x9)) = 0x0;
            return FUN_0c0c3408(a4, 0x0);
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oF0_ushort *)(a4))->v) = 0x0;
        FUN_0c0c3408(a4, 0x0);
    }
    t0 = fx31_pick_mode3_from_owner(a4);
    if (t0 == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    }
    u0 = *(float *)0xC0C4CB8;
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 1) {
        if (t0 != 2) {
            
            (((struct o107_uchar *)(a4))->v) = 0x1;
            (((struct o58_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = u0;
            return fx31_follow_phase_b(a4);
        }
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o50_float *)(a4))->v) = u0;
        return fx31_follow_circle(a4);
    }
    (((struct o58_float *)(a4))->v) = u0;
    (((struct o54_float *)(a4))->v) = u0;
    (((struct o50_float *)(a4))->v) = u0;
    return fx31_follow_phase_a(a4);
}
