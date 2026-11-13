/* cam_mode19.c: mode 19, the camera of a fighter's special move (original file 0c0dc9d4-0c0dca60).
   Arguments 0..17 are single keys, 32 and up keyframe scripts. */
#include "game/camera/camera.h"

void cam_mode_19(CamRecord *c)
{
    if ((unsigned int)c->arg < 18u)
        cam_compute_follow(c, &g_cam_keys_mode19[c->arg]);
    else
        cam_step_keyframe_script(c, g_cam_scripts_mode19[c->arg - 32]);
    FUN_0c0d91d6(c);
}
