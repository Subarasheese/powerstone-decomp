/* cam_request.c: asking the first camera record for a mode (original file 0c0d8f10-0c0d9288).
   A request sets the mode, clears the handler's state and points the camera at a fighter (target_a) and its opponent
   (target_b); cam_force_mode ignores the running mode's priority. */
#include "game/camera/camera.h"

void cam_force_mode(int mode, int target, int priority)
{
    CamRecord *c = g_cam_records;

    c->mode = mode;
    c->key_step = 0;
    c->step = 0;
    c->arg = 0;
    c->key_sub = 0;
    c->priority = priority;
    c->target = target;
    c->target_a = &FIGHTER((signed char)target)->pos;
    c->target_b = &FIGHTER((signed char)target == 0)->pos;
}

/* a second copy of cam_force_mode; nothing calls it */
void cam_force_mode_dup(int mode, int target, int priority)
{
    CamRecord *c = g_cam_records;

    c->mode = mode;
    c->key_step = 0;
    c->step = 0;
    c->arg = 0;
    c->key_sub = 0;
    c->priority = priority;
    c->target = target;
    c->target_a = &FIGHTER((signed char)target)->pos;
    c->target_b = &FIGHTER((signed char)target == 0)->pos;
}

/* a request that points the camera at two given positions */
int cam_request_mode_with_args(int mode, int priority, Vec3 *a, Vec3 *b)
{
    CamRecord *c = g_cam_records;

    if ((unsigned char)priority >= c->priority) {
        c->mode = mode;
        c->key_step = 0;
        c->step = 0;
        c->arg = 0;
        c->key_sub = 0;
        c->priority = priority;
        c->target_a = a;
        c->target_b = b;
        return 1;
    }
    return 0;
}

/* mode 25 (both fighters' intro); not while both fighters are in controller kind 1 */
void cam_request_mode_25(int target, int arg)
{
    CamRecord *c = g_cam_records;

    if (g_players[0].ctrl == 1 && g_players[1].ctrl == 1)
        return;
    if (c->priority <= 0x50) {
        c->mode = 25;
        c->step = arg;
        c->arg = arg;
        c->key_step = 0;
        c->key_sub = 0;
        c->priority = 0x50;
        c->target = target;
        c->target_a = &FIGHTER((signed char)target)->pos;
        c->target_b = &FIGHTER((signed char)target == 0)->pos;
    }
}

void cam_nop(void)
{
}

/* the special-move camera (mode 3) on fighter f */
#define CAM_TAKE_SPECIAL(c, f)                                        \
    do {                                                              \
        (c)->priority = 0x60;                                         \
        (c)->mode = 3;                                                \
        (c)->step = 0;                                                \
        (c)->key_step = 0;                                            \
        (c)->key_sub = 0;                                             \
        (c)->target = (f)->slot;                                      \
        (c)->target_a = &FIGHTER((f)->slot)->pos;                     \
        (c)->target_b = &FIGHTER((f)->slot == 0)->pos;                \
    } while (0)

/* a fighter in controller kind 2 doing a special move gets the special-move camera: argument 16 while the move's
   camera stage is 2 (and its step is not 3), else one of four per character and move, at random */
void FUN_0c0d9078(CamRecord *c)
{
    Fighter *f;

    if (g_players[0].ctrl == 2 && g_players[0]._7242 != 0) {
        f = &g_players[1];
        if (g_players[0].ctrl == 2)
            f = &g_players[0];
    } else if (g_players[1].ctrl == 2 && g_players[1]._7242 != 0) {
        f = &g_players[1];
        if (g_players[0].ctrl == 2)
            f = &g_players[0];
    } else {
        return;
    }
    if (f->_7242 == 2) {
        if (f->step2 == 3)
            return;
        if (g_cam_records[0].priority <= 0x60) {
            CAM_TAKE_SPECIAL(c, f);
            c->arg = 16;
        }
    } else if (g_cam_records[0].priority <= 0x60) {
        CAM_TAKE_SPECIAL(c, f);
        c->arg = g_cam_special_args[f->chara][f->special_index][(unsigned int)(math_rand_float() * 255.0f) % 4];
    }
}

/* mode 19 ends: back to the default camera when no fighter is in controller kind 2; a fighter in step 3 of its special
   move gets argument 17 */
void FUN_0c0d91d6(CamRecord *c)
{
    Fighter *f;

    if (g_players[0].ctrl != 2 && g_players[1].ctrl != 2) {
        cam_force_mode(0, 0, 0x40);
        return;
    }
    f = &g_players[1];
    if (g_players[0].ctrl == 2)
        f = &g_players[0];
    if (c->arg != 17 && f->_7242 == 2 && f->step2 == 3) {
        c->arg = 17;
        c->key_sub = 0;
        c->key_step = 0;
        c->step = 0;
        c->target = f->slot;
        c->target_a = &FIGHTER(f->slot)->pos;
        c->target_b = &FIGHTER(f->slot == 0)->pos;
    }
}
