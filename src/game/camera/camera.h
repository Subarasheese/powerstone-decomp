/* camera.h: the camera module.

   Two camera records (g_cam_records; the second one is used by the split view). Every frame cam_update_view_matrices runs
   the record's mode handler (cam_update_by_mode, modes 0..28), which moves the eye and the look-at point toward their goals,
   either from the record's own follow key or through a keyframe script, then builds the view matrix (cam_set_view_matrix).
   Other modules ask for a mode with cam_request_mode (refused below the current priority) or cam_force_mode. */
#ifndef CAMERA_H
#define CAMERA_H

#include "game/game.h"

/* A camera key (52 bytes): one step of a keyframe script, or a record's own follow parameters (CamRecord.key).
   cam_compute_follow reads it. Angles are in degrees, distances in world units; a *_div is the number of frames a value
   takes to reach its goal (1 = at once). */
typedef struct CamKey {
    short frames;          /* 0x00 frames this key lasts; -1 ends a script, -2 jumps (flags = target index), -3 stops */
    short flags;           /* 0x02 0xF000 kind (0 orbit, 0x1000 point); 0x100 save / 0x200 restore the saved slot;
                                   0x30 blend the distance from the start of the key; 0x0F blend mode (1 = snap) */
    short select;          /* 0x04 0x00F look-at source, 0x0F0 eye or yaw source, 0x100 pitch/elevation from the start,
                                   0xF00 end the key early once near the goal */
    short roll;            /* 0x06 */
    union {
        struct {           /* orbit key: around the look-at point */
            short pitch;       /* 0x08 */
            short elev;        /* 0x0A */
            short yaw;         /* 0x0C */
            short dist;        /* 0x0E -1: far enough to show both fighters */
            short dist_div;    /* 0x10 */
            short look_div;    /* 0x12 */
            short pitch_div;   /* 0x14 */
            short elev_div;    /* 0x16 */
            short yaw_div;     /* 0x18 */
        } orbit;
        struct {           /* point key: eye and look-at from offsets */
            short look[3];     /* 0x08 */
            short eye[3];      /* 0x0E */
            short look_div[3]; /* 0x14 */
            short eye_div[3];  /* 0x1A */
        } point;
        short arg[22];
    } u;
} CamKey;

/* goal / current / start of the key / saved: the four slots of each tracked value */
enum { CAM_GOAL, CAM_CUR, CAM_START, CAM_SAVED };

typedef struct CamRecord {
    signed char index;         /* 0x000 */
    char _001;
    signed char mode;          /* 0x002 0..28 */
    signed char arg;           /* 0x003 argument of the mode request */
    signed char step;          /* 0x004 state of the mode handler */
    signed char key_step;      /* 0x005 state of the keyframe script */
    signed char key_sub;       /* 0x006 0 when a key starts (cam_compute_follow sets up its start slots) */
    signed char script;        /* 0x007 */
    char _008[4];
    int counter;               /* 0x00C */
    int key_frames;            /* 0x010 frames left of the current key */
    signed char side;          /* 0x014 1 when fighter 0 is right of fighter 1 on screen */
    char _015[3];
    float screen_w;            /* 0x018 640 */
    float view_w;              /* 0x01C 640 */
    float view_h;              /* 0x020 480 */
    float center_x;            /* 0x024 320 */
    float center_y;            /* 0x028 240 */
    float matrix[16];          /* 0x02C view matrix */
    float inv_matrix[16];      /* 0x06C its inverse */
    unsigned char priority;    /* 0x0AC of the running mode */
    char _0AD[3];
    Vec3 eye[4];               /* 0x0B0 */
    Vec3 look[4];              /* 0x0E0 */
    int yaw[4];                /* 0x110 0x10000 = 360 degrees */
    int roll[4];               /* 0x120 */
    float dist[4];             /* 0x130 eye to look-at */
    int pitch[4];              /* 0x140 */
    int elev[4];               /* 0x150 */
    char _160[0x10];
    float shake;               /* 0x170 vertical offset this frame */
    int shake_amp;             /* 0x174 */
    int shake_count;           /* 0x178 frames left */
    int shake_kind;            /* 0x17C 0 fading, 1 steady, 2 random, 99 off */
    int shake_rand;            /* 0x180 range of the random amplitude */
    signed char target;        /* 0x184 fighter slot the camera follows */
    char _185[3];
    Vec3 point_a;              /* 0x188 */
    Vec3 point_b;              /* 0x194 */
    Vec3 *target_a;            /* 0x1A0 usually the target fighter's position */
    Vec3 *target_b;            /* 0x1A4 usually the other fighter's position */
    CamKey key;                /* 0x1A8 the record's own follow key */
    CamKey *key_ptr;           /* 0x1DC current key of the script */
    Vec3 fighter_dir;          /* 0x1E0 from the target fighter to the other, normalised */
    int heading;               /* 0x1EC yaw & 0xFFFF, published for the controls */
    Vec3 heading_dir;          /* 0x1F0 sin and cos of the heading (x, z) */
} CamRecord;

GAME_CHECK(check_camkey_size, sizeof(CamKey) == 52);
GAME_CHECK(check_cam_size, sizeof(CamRecord) == 0x1FC);

extern CamRecord g_cam_records[2];
extern signed char g_cam_split_flag;          /* two views (one record per fighter) */
extern int g_cam_yaw16;                       /* published heading of the active view */
extern Vec3 g_cam_forward_xz;

/* camera data: keys, scripts (arrays of keys ending with frames = -1), tables of scripts indexed by the mode argument */
extern CamKey g_cam_key_default;              /* modes 0 fallback / default */
extern CamKey g_cam_key_mode28;
extern CamKey g_cam_key_mode15, g_cam_key_mode16, g_cam_key_spin;
extern CamKey g_cam_key_mode17;
extern CamKey g_cam_key_debug_free;
extern CamKey g_cam_key_v1, g_cam_key_v2, g_cam_key_v3, g_cam_key_v4;   /* mode 0 variants 1..4 */
extern CamKey *g_cam_key_mode06;              /* points at the mode 6 key */
extern CamKey g_cam_keys_mode19[];            /* by mode argument 0..17 */
extern CamKey g_cam_script_mode08[], g_cam_script_mode13[], g_cam_script_mode14[], g_cam_script_mode17[],
              g_cam_script_mode20[], g_cam_script_mode21[], g_cam_script_mode22[], g_cam_script_mode24[],
              g_cam_script_mode26[];
extern CamKey *g_cam_scripts_mode01[], *g_cam_scripts_mode02[], *g_cam_scripts_mode03[], *g_cam_scripts_mode04[],
              *g_cam_scripts_mode05[], *g_cam_scripts_mode06[], *g_cam_scripts_mode07[], *g_cam_scripts_mode10[],
              *g_cam_scripts_mode18[], *g_cam_scripts_mode19[], *g_cam_scripts_mode23[], *g_cam_scripts_mode25[];
extern int *g_cam_yaw_limits[];               /* per stage: pairs (from, to) of yaw ranges for the mode 0 camera */
extern int g_cam_chara_radius[];              /* per character: added to the fighters' distance */
extern signed char g_cam_special_args[][4][4];/* per character and special move: four mode arguments (modes 3, 19) */
extern short g_cam_stage_view[];              /* per stage: x and z of the stage select camera */
extern Vec3 g_cam_debug_point_a, g_cam_debug_point_b;   /* moved by the debug free camera */
extern int g_cam_stray_frames;                /* frames the mode 0 camera has been off the stage */
extern signed char g_cam_debug_free_on;       /* debug switch for mode 27 */
extern unsigned short g_debug_pad;            /* buttons of the debug pad */
extern signed char g_cam_mode10_arg;          /* wanted argument of mode 10 */
extern signed char g_301c;                    /* nonzero: the special mode 0 cameras are off */
extern signed char g_cam_view_flag;           /* 0x0C7F319D: picks the other pair of mode 0 cameras */

/* cam_view.c: records, mode dispatch, view */
void cam_publish_active_position(int index);
float cam_calc_fighter_dir(CamRecord *c);
void cam_calc_side_of_targets(CamRecord *c);
float cam_publish_heading(CamRecord *c);
void cam_init_records(void);
int cam_select_mode0_variant(CamRecord *c);
void cam_set_view_matrix(CamRecord *c);
void cam_set_priority(int index, int priority);
int cam_request_mode(int mode, int target, int priority);
void cam_update_by_mode(CamRecord *c);
void cam_update_view_matrices(void);
void cam_mode_11_12(CamRecord *c);

/* cam_request.c: mode requests */
void cam_force_mode(int mode, int target, int priority);
void cam_force_mode_dup(int mode, int target, int priority);
int cam_request_mode_with_args(int mode, int priority, Vec3 *a, Vec3 *b);
void cam_request_mode_25(int target, int arg);
void cam_nop(void);
void FUN_0c0d9078(CamRecord *c);
void FUN_0c0d91d6(CamRecord *c);

/* cam_follow.c: follow, keyframe scripts and the mode handlers */
void cam_compute_follow(CamRecord *c, CamKey *k);
int cam_step_keyframe_script(CamRecord *c, CamKey *script);
void cam_request_mode_01(int script);
void cam_mode_01(CamRecord *c);
void cam_request_mode_02(int arg);
void cam_mode_02(CamRecord *c);
int cam_request_mode_03(int arg, int target);
void cam_mode_03(CamRecord *c);
int cam_request_mode_04(int arg, int target);
int FUN_0c0dab5e(int arg, Vec3 *a, Vec3 *b);
void cam_mode_04(CamRecord *c);
void cam_request_mode_05(int arg, int target);
void cam_mode_05(CamRecord *c);
void cam_request_mode_06(int arg, int target);
int FUN_0c0da5b2(CamRecord *c);
void cam_mode_06(CamRecord *c);
void cam_request_mode_07(int arg, int target);
void cam_mode_07(CamRecord *c);
void cam_mode_08_09(CamRecord *c);
void cam_force_mode_10(int arg, int target);
void cam_mode_10(CamRecord *c);
void cam_mode_13(CamRecord *c);
void cam_force_mode_14(int target, int a, int b);
void cam_mode_14(CamRecord *c);
void cam_mode_15(CamRecord *c);
void cam_mode_16(CamRecord *c);
void FUN_0c0da8c0(CamRecord *c);
int cam_request_mode_17(Fighter *f);
void cam_mode_17(CamRecord *c);
void cam_request_mode_18(int arg, int target);
void cam_mode_18(CamRecord *c);
void cam_request_mode_19(Fighter *f, int variant);
void cam_request_mode_20(Fighter *f);
void cam_mode_20(CamRecord *c);
void cam_mode_21(CamRecord *c);
void cam_mode_22(CamRecord *c);
void cam_force_mode_23(int arg);
void cam_mode_23(CamRecord *c);
void cam_mode_24_stage_select(CamRecord *c);
void cam_mode_25(CamRecord *c);
void cam_mode_26(CamRecord *c);
void cam_enter_debug_free(void);
void cam_update_debug_free(void);
void cam_mode_27_debug_free(CamRecord *c);
void cam_mode_28(CamRecord *c);
void cam_mode_default(CamRecord *c);

/* cam_mode0.c, cam_mode0_v2.c, cam_mode0_v4.c: the mode 0 cameras */
void cam_mode_00_variant0(CamRecord *c);
void cam_mode_00_variant1(CamRecord *c);
void cam_mode_00_variant2(CamRecord *c);
void cam_mode_00_variant3(CamRecord *c);
void cam_mode_00_variant4(CamRecord *c);

/* cam_mode0_v4.c, cam_shake.c: shake and helpers */
void cam_set_shake_ramp(int numer, int denom);
void cam_reset_shake(int amp, int count, int kind, int rand);
void cam_apply_shake(CamRecord *c, Vec3 *eye, Vec3 *look);
int cam_near_goal(CamRecord *c, int tolerance);
void cam_snap_mode0(CamRecord *c);
void cam_reset_to_default(void);
void cam_mode_default_dup(CamRecord *c);

/* cam_mode19.c */
void cam_mode_19(CamRecord *c);

/* from other modules */
float math_signed_sqrt(float x);
float math_cos_angle16(int angle);
float math_sin_angle16(int angle);
float math_tan_angle16(int angle);
int math_atan2_angle16(float x, float z);
float math_vec2_cos_between(float ax, float az, float bx, float bz);
float math_rand_float(void);
void FUN_0c0e24f0(Vec3 *v);                  /* normalise */
void nlProjectScreen(Vec3 *point, float *screen);
void nlUnitMatrix(void);
void nlLookAt(Vec3 *eye, Vec3 *target, int roll);
int nlInvertMatrix(float *m);
void FUN_0c0e0ae0(float *m);
int FUN_0c0e1550(int mode);
void *memset(void *p, int c, int n);

#endif
