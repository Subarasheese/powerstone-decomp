/* game.h: types the game modules share.
   Only what the modules converted to headers use so far; the full layouts are in docs/structs.md. */
#ifndef GAME_H
#define GAME_H

typedef struct Vec3 {
    float x, y, z;
} Vec3;

/* compile-time size check: a negative array size when the size is wrong (field offsets: see the layout comments) */
#define GAME_CHECK(name, cond) typedef char name[(cond) ? 1 : -1]

/* A fighter (array g_players[2], 0x72D0 bytes each). The first 0x31C bytes are the common game object. */
typedef struct Fighter {
    unsigned char active;            /* 0x000 */
    unsigned char visible;           /* 0x001 */
    unsigned char obj_class;         /* 0x002 */
    signed char slot;                /* 0x003 player slot 0/1 */
    signed char chara;               /* 0x004 character id */
    char _005[4];
    signed char ctrl;                /* 0x009 controller kind 0..3 (sub-state) */
    char _00A;
    signed char step2;               /* 0x00B */
    char _00C[0x20 - 0x0C];
    Vec3 pos;                        /* 0x020 */
    int rot_x;                       /* 0x02C */
    int yaw;                         /* 0x030 0x10000 = 360 degrees */
    int rot_z;                       /* 0x034 */
    char _038[0x10B - 0x038];
    unsigned char hitstop;           /* 0x10B frames of hit stop */
    char _10C[0x2D4 - 0x10C];
    float ground_height;             /* 0x2D4 */
    char _2D8[0x71BA - 0x2D8];
    signed char state_id;            /* 0x71BA index of the fighter state tables */
    char _71BB[0x71D4 - 0x71BB];
    short hp;                        /* 0x71D4 0xF0 full, below 0 KO */
    short hp_ref;                    /* 0x71D6 */
    short hp_display;                /* 0x71D8 eased toward hp */
    char _71DA[0x71ED - 0x71DA];
    signed char _71ED;               /* 0x71ED 0: the HUD flashes a mark by the fighter's gauge (FUN_0c02f328) */
    char _71EE[0x71F1 - 0x71EE];
    unsigned char power_form;        /* 0x71F1 */
    char _71F2;
    signed char _71F3;               /* 0x71F3 the HUD's power panel waits while set */
    short power_time;                /* 0x71F4 frames of power change left (600 per HUD step) */
    char _71F6[0x7209 - 0x71F6];
    signed char special_index;       /* 0x7209 */
    char _720A[0x720E - 0x720A];
    unsigned char combo_count;       /* 0x720E hits of the running combo (99 at most) */
    char _720F[0x7230 - 0x720F];
    signed char stones;              /* 0x7230 power stones held */
    signed char stone_bits;          /* 0x7231 which of the three */
    char _7232[0x7242 - 0x7232];
    signed char _7242;               /* 0x7242 2 while the camera follows a special move */
    char _7243[0x72B1 - 0x7243];
    signed char combo_flag;          /* 0x72B1 */
    char _72B2[0x72D0 - 0x72B2];
} Fighter;

GAME_CHECK(check_fighter_size, sizeof(Fighter) == 0x72D0);

extern Fighter g_players[];

/* fighter i: the game indexes the array with a 16-bit multiply (mulu.w), so the offset is (unsigned short)(i * 0x72D0) */
#define FIGHTER(i) ((Fighter *)((char *)g_players + (unsigned short)((unsigned short)(i) * (unsigned short)sizeof(Fighter))))

/* the game state record (0x0C7F302C) and the bytes of it the code reads by their own names */
extern signed char g_game_state[];
extern signed char g_stage_id;                   /* 0x0C7F3051 = g_game_state[0x25] */
#define GAME_VS_KIND (*(unsigned char *)&g_game_state[0x47])   /* 0..3; 3 = both slots on one side (0x0C7F3073) */

/* pad records, 36 bytes per slot (0x0C7F31F0); +8 is the device kind (4 = arcade stick) */
extern char g_pad_buttons[];
/* the game indexes these with a byte-wide offset: (signed char)(slot * 36) */
#define PAD_KIND(slot) (*(int *)(g_pad_buttons + (signed char)((slot) * 36) + 8))
#define PAD_BITS(slot) (*(int *)(g_pad_buttons + (signed char)((signed char)(slot) * 36)))

#endif
