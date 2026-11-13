/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c09f6a8-0c09f8e0) */

extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int pl_angle_to_opponent(char *);
extern void pl_start_motion(char *, int, int);
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };

void pl_enter_state_07(char *actor, int move_id)
{
    signed char move;
    int dir_idx, ang, inv_ang, anim_id, player_idx;
    char *row;

    move = (signed char)move_id;
    actor[0x71BA] = 7;
    actor[0x71BC] = 0;
    actor[0x7236] = 0;
    *(int *)(actor + 0x30) = pl_angle_to_opponent(actor);
    dir_idx = *(signed char *)(0xC1510AD + (move - 1));
    actor[0x106] = 0xB;
    *(short *)(actor + 0xF2) = 0;
    if (move == 10 || move == 11) {
        *(short *)(actor + 0xEC) = 20;
        *(int *)(actor + 0x7248) = pl_angle_to_opponent(actor);
        if (move == 10) {
            *(int *)(actor + 0x7248) = (unsigned short)(0xC000 + *(short *)(actor + 0x7248));
            *(int *)(actor + 0x7244) = 0x4000;
        } else {
            *(int *)(actor + 0x7248) = (unsigned short)(*(short *)(actor + 0x7248) + 0xC000);
            *(int *)(actor + 0x7244) = 0xC000;
        }
        *(float *)(actor + 0x7254) = math_sin_angle16(0x16C) * *(float *)0xC494D1C * 2.0f;
        actor[10] = 1;
        anim_id = 0x29;
    } else {
        player_idx = *(signed char *)(actor + 0x71F1);
        row = (char *)0xC339540 + actor[4] * 152 + (unsigned char)((unsigned short)player_idx * 76);
        *(short *)(actor + 0xEC) = *(short *)(row + 72);
        ang = (unsigned short)((dir_idx << 13) + *(short *)0xC7F31E0);
        inv_ang = 0x14000 - ang;
        *(float *)(actor + 0x38) = math_cos_angle16(inv_ang) * *(float *)(row + 64);
        *(float *)(actor + 0x40) = math_sin_angle16(inv_ang) * *(float *)(row + 64);
        *(float *)(actor + 0x44) = math_cos_angle16(inv_ang) * *(float *)(row + 68);
        *(float *)(actor + 0x4C) = math_sin_angle16(inv_ang) * *(float *)(row + 68);
        *(float *)(actor + 0x48) = 0.0f;
        *(float *)(actor + 0x3C) = 0.0f;
        anim_id = *(signed char *)(0xC1510A5 + (signed char)(((unsigned short)(*(int *)(actor + 0x30) - ang + 4096)) / 8192));
    }
    pl_start_motion(actor, 0, anim_id);
    actor[0x71A9] = 1;
    actor[0x71A8] = 1;
}

int pl_enter_state_08(int a4)
{
    (((struct o71BA_uchar *)(a4))->v) = 0x8;
    (((struct o7236_uchar *)(a4))->v) = 0x0;
    (((struct o71CC_uint *)(a4))->v) = 0x0;
    return 0x71CC;
}
