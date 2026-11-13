/* cam_mode0_v2.c: special view 2 of the fight camera, over the record's own fighter at the other (original file
   0c0dbe30-0c0dbf94). Split view, character 10. */
#include "game/camera/camera.h"

void cam_mode_00_variant2(CamRecord *c)
{
    signed char idx = c->index;
    Fighter *self = FIGHTER(idx);
    Fighter *other = FIGHTER(1 - idx);
    Vec3 eye;
    Vec3 other_pos;
    Vec3 dir;

    eye.x = self->pos.x;
    eye.y = self->pos.y + 400.0f;
    eye.z = self->pos.z;
    other_pos = other->pos;
    dir.x = eye.x - other_pos.x;
    dir.z = eye.z - other_pos.z;
    dir.y = eye.y - other_pos.y;
    if (dir.x == 0.0f && dir.z == 0.0f && dir.y == 0.0f) {
        dir.y = 9.99999975e-05f;
        dir.z = 9.99999975e-05f;
        dir.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&dir);
    eye.x = eye.x + 800.0f * dir.x;
    eye.z = eye.z + 800.0f * dir.z;
    eye.y = eye.y + 800.0f * dir.y;
    if (0.0f > eye.y)
        eye.y = 0.0f;
    c->point_a = other_pos;
    c->point_b = eye;
    c->target_a = &c->point_a;
    c->target_b = &c->point_b;
    c->key = g_cam_key_v2;
    cam_compute_follow(c, &c->key);
    cam_publish_heading(c);
}
