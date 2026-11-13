/* cam_mode0_v4.c: special view 4 of the fight camera, and the screen shake settings (original file 0c0dbf94-0c0dc27c). */
#include "game/camera/camera.h"

/* split view: past the record's own fighter at the other, closer when they are near */
void cam_mode_00_variant4(CamRecord *c)
{
    Vec3 pt_a;
    Vec3 pt_b;
    Vec3 dir;
    Fighter *first = FIGHTER(c->index);
    Fighter *second;
    float dist;
    float zoom;
    float dx;
    float dz;

    pt_a.x = first->pos.x;
    pt_a.z = first->pos.z;
    pt_a.y = first->pos.y + 230.0f;
    second = FIGHTER(1 - c->index);
    pt_b.x = second->pos.x;
    pt_b.z = second->pos.z;
    pt_b.y = second->pos.y + 200.0f;
    if (pt_b.y > pt_a.y)
        pt_b.y = pt_a.y;
    dir.x = pt_a.x - pt_b.x;
    dir.z = pt_a.z - pt_b.z;
    dir.y = pt_a.y - pt_b.y;
    if (dir.x == 0 && dir.z == 0 && dir.y == 0) {
        dir.y = 9.99999975e-05f;
        dir.z = 9.99999975e-05f;
        dir.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&dir);
    pt_a.x = pt_a.x + 500.0f * dir.x;
    pt_a.z = pt_a.z + 500.0f * dir.z;
    pt_a.y = pt_a.y + 500.0f * dir.y;
    if (pt_a.y < 0)
        pt_a.y = 0;
    dx = g_players[0].pos.x - g_players[1].pos.x;
    dz = g_players[0].pos.z - g_players[1].pos.z;
    dist = math_signed_sqrt(dz * dz + dx * dx);
    c->point_a = pt_b;
    c->point_b = pt_a;
    c->target_a = &c->point_a;
    c->target_b = &c->point_b;
    c->key = g_cam_key_v4;
    if (500.0f > dist) {
        zoom = 10000.0f / dist;
        if (zoom < 10.0f)
            zoom = 10.0f;
        if (zoom > 100.0f)
            zoom = 100.0f;
    } else {
        zoom = 10.0f;
    }
    c->key.u.point.eye_div[2] = (int)zoom;
    c->key.u.point.eye_div[0] = (int)zoom;
    cam_compute_follow(c, &c->key);
    cam_publish_heading(c);
}

/* a fading shake on both records: numer / denom per frame for denom frames */
void cam_set_shake_ramp(int numer, int denom)
{
    int quot = numer / denom;

    g_cam_records[1].shake_amp = quot;
    g_cam_records[0].shake_amp = quot;
    g_cam_records[1].shake_count = denom;
    g_cam_records[0].shake_count = denom;
    g_cam_records[1].shake_kind = 0;
    g_cam_records[0].shake_kind = 0;
    g_cam_records[1].shake_rand = 0;
    g_cam_records[0].shake_rand = 0;
}

/* a shake of the given kind (0 fading from amp / count, 1 steady, 2 random below rand; any other stops it), copied to the
   second record */
void cam_reset_shake(int amp, int count, int kind, int rand)
{
    CamRecord *c = g_cam_records;

    switch (kind) {
    case 0:
        c->shake_amp = amp / count;
        c->shake_count = count;
        c->shake_kind = kind;
        c->shake_rand = rand;
        break;
    case 1:
    case 2:
        c->shake_amp = amp;
        c->shake_count = count;
        c->shake_kind = kind;
        c->shake_rand = rand;
        break;
    default:
        c->shake_kind = 99;
        break;
    }
    g_cam_records[1].shake_amp = c->shake_amp;
    g_cam_records[1].shake_count = c->shake_count;
    g_cam_records[1].shake_kind = c->shake_kind;
    g_cam_records[1].shake_rand = c->shake_rand;
}
