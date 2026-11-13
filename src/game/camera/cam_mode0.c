/* cam_mode0.c: the fight camera (mode 0) and its special views 1 and 3 (original file 0c0db1c0-0c0dbe30).
   Variant 0 keeps both fighters in view from the side, within the stage's yaw ranges; variants 1 and 3 look past one fighter
   at the other (versus kind 1 picks which). */
#include "game/camera/camera.h"

#define ABSD(a, b) (0.0f > (a) - (b) ? (b) - (a) : (a) - (b))

void cam_mode_00_variant0(CamRecord *c)
{
    Fighter *p0 = &g_players[0];
    Fighter *p1 = &g_players[1];
    struct { int *lim; signed char *pcnt; float wz2, wx2, mz2, mx2, vz2, vx2, ground; signed char cnt;
             Vec3 b; Vec3 a; Vec3 w; Vec3 v; } s;
    float d, f1, f2, sn, k;
    signed char m;

    s.lim = g_cam_yaw_limits[g_stage_id];
    switch (c->step) {
    case 0:
        c->step = c->step + 1;
        c->key_sub = 0;
        c->key_step = 0;
        s.v.x = p1->pos.x - p0->pos.x;
        s.v.z = p1->pos.z - p0->pos.z;
        s.v.y = ABSD(p0->pos.y, p1->pos.y) + 170.0f;
        s.v.x = (p1->pos.x + p0->pos.x) / 2.0f;
        s.v.y = 0.0f;
        s.v.z = (p1->pos.z + p0->pos.z) / 2.0f;
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        c->yaw[CAM_GOAL] = math_atan2_angle16(s.v.x, s.v.z);
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] & 0xFFFF;
        s.pcnt = &s.cnt;
        for (*s.pcnt = 0; *s.pcnt < 5; *s.pcnt = *s.pcnt + 1) {
            if (c->yaw[CAM_GOAL] >= s.lim[0]) {
                s.lim++;
                c->yaw[CAM_GOAL] = s.lim[0];
                break;
            }
            s.lim += 2;
        }
        c->yaw[CAM_START] = 0;
        g_cam_stray_frames = 0;
    case 1:
        c->yaw[CAM_CUR] = c->yaw[CAM_CUR] & 0xFFFF;
        {
            int g = (unsigned short)(c->yaw[CAM_GOAL] - c->yaw[CAM_CUR]);
            if (g > 0x8000)
                g -= 0x10000;
            else if (!(g >= -32768))
                g += 0x10000;
            c->yaw[CAM_CUR] = c->yaw[CAM_CUR] + g / 10;
        }
        c->yaw[CAM_CUR] = c->yaw[CAM_CUR] & 0xFFFF;
        s.v.x = p1->pos.x - p0->pos.x;
        s.v.z = p1->pos.z - p0->pos.z;
        s.v.y = ABSD(p0->pos.y, p1->pos.y) + 170.0f;
        s.vx2 = s.v.x;
        s.vz2 = s.v.z;
        c->dist[CAM_GOAL] = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
        c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + (float)(g_cam_chara_radius[p0->chara] + g_cam_chara_radius[p1->chara]);
        c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + 300.0f;
        c->dist[CAM_GOAL] = c->dist[CAM_GOAL] / 2.0f * c->screen_w / (c->view_w / 2.0f * 1.0f);
        d = s.v.y / 2.0f * c->screen_w / (c->view_h / 2.0f * 0.799999952f);
        if (d > c->dist[CAM_GOAL])
            c->dist[CAM_GOAL] = d;
        if (600.0f > c->dist[CAM_GOAL])
            c->dist[CAM_GOAL] = 600.0f;
        c->elev[CAM_GOAL] = 2730;
        s.w.x = p1->pos.x - p0->pos.x;
        s.w.y = p1->ground_height - p0->ground_height;
        s.w.z = p1->pos.z - p0->pos.z;
        s.wx2 = s.w.x;
        s.wz2 = s.w.z;
        s.ground = math_signed_sqrt(s.wz2 * s.wz2 + s.w.x * s.wx2);
        s.w.x = c->eye[CAM_CUR].x - c->look[CAM_CUR].x;
        s.w.y = 0.0f;
        s.w.z = c->eye[CAM_CUR].z - c->look[CAM_CUR].z;
        s.a.x = p0->pos.x - c->look[CAM_CUR].x;
        s.a.y = 0.0f;
        s.a.z = p0->pos.z - c->look[CAM_CUR].z;
        s.b.x = p1->pos.x - c->look[CAM_CUR].x;
        s.b.y = 0.0f;
        s.b.z = p1->pos.z - c->look[CAM_CUR].z;
        f1 = math_vec2_cos_between(s.w.x, s.w.z, s.a.x, s.a.z);
        f2 = math_vec2_cos_between(s.w.x, s.w.z, s.b.x, s.b.z);
        if (0.0f > f1)
            f1 = f1 * -1.0f;
        if (0.0f > f2)
            f2 = f2 * -1.0f;
        if (f1 > f2)
            f1 = f2;
        if (!(0.785398066f > f1)) {
            c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + 0.149999991f * (c->dist[CAM_GOAL] * f1);
            if (!(s.ground > 400.0f))
                c->elev[CAM_GOAL] = 4551;
        }
        if (c->dist[CAM_CUR] > c->dist[CAM_GOAL]) {
            if (ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) > 16.0f)
                c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_CUR]) / 10.0f;
        } else {
            if (ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) > 16.0f)
                c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_CUR]) / 10.0f;
        }
        c->pitch[CAM_GOAL] = (int)(f1 * ((-c->dist[CAM_GOAL] + 1696.79980f) / 1696.79980f) * 2730.0f + 4369.0f * (1.0f - f1));
        c->pitch[CAM_CUR] = c->pitch[CAM_CUR] + (c->pitch[CAM_GOAL] - c->pitch[CAM_CUR]) / 4;
        c->elev[CAM_CUR] = c->elev[CAM_CUR] + (short)(c->elev[CAM_GOAL] - c->elev[CAM_CUR]) / 16;
        sn = math_cos_angle16(c->elev[CAM_CUR]);
        k = c->dist[CAM_CUR] * sn;
        c->look[CAM_GOAL].x = (p0->pos.x + p1->pos.x) * 0.5f;
        c->look[CAM_GOAL].z = (p0->pos.z + p1->pos.z) * 0.5f;
        if (ABSD(c->look[CAM_GOAL].x, c->look[CAM_CUR].x) > 0.0698131621f)
            c->look[CAM_CUR].x = c->look[CAM_CUR].x + (c->look[CAM_GOAL].x - c->look[CAM_CUR].x) / 8.0f;
        if (ABSD(c->look[CAM_GOAL].z, c->look[CAM_CUR].z) > 0.0698131621f)
            c->look[CAM_CUR].z = c->look[CAM_CUR].z + (c->look[CAM_GOAL].z - c->look[CAM_CUR].z) / 8.0f;
        c->look[CAM_GOAL].y = (p0->pos.y + p1->pos.y + 200.0f) * 0.5f;
        if (ABSD(c->look[CAM_GOAL].y, c->look[CAM_CUR].y) > 10.0f)
            c->look[CAM_CUR].y = c->look[CAM_CUR].y + (float)((short)(int)(c->look[CAM_GOAL].y - c->look[CAM_CUR].y) / 8);
        c->eye[CAM_GOAL].y = c->look[CAM_CUR].y + c->dist[CAM_CUR] * math_tan_angle16(c->elev[CAM_CUR]);
        m = g_stage_id;
        if (m == 1 || m == 8) {
            if ((500.0f > p0->pos.y || 500.0f > p1->pos.y) && c->eye[CAM_GOAL].y > 500.0f)
                c->eye[CAM_GOAL].y = 500.0f;
        } else if (c->eye[CAM_GOAL].y > 500.0f) {
            c->eye[CAM_GOAL].y = 500.0f;
        }
        c->eye[CAM_CUR].y = c->eye[CAM_CUR].y + (c->eye[CAM_GOAL].y - c->eye[CAM_CUR].y) / 20.0f;
        c->eye[CAM_CUR].x = c->look[CAM_CUR].x + k * math_sin_angle16(c->yaw[CAM_CUR]);
        c->eye[CAM_CUR].z = c->look[CAM_CUR].z + k * math_cos_angle16(c->yaw[CAM_CUR]);
        k = c->dist[CAM_CUR] * math_cos_angle16(c->elev[CAM_CUR]);
        s.w.x = c->look[CAM_CUR].x + k * math_sin_angle16(c->yaw[CAM_GOAL]);
        s.w.z = c->look[CAM_CUR].z + k * math_cos_angle16(c->yaw[CAM_GOAL]);
        if (s.w.x > 800.0f || -800.0f > s.w.x || s.w.z > 800.0f || -800.0f > s.w.z) {
            s.w.x = (p1->pos.x + p0->pos.x) / 2.0f;
            s.w.z = (p1->pos.z + p0->pos.z) / 2.0f;
            s.mx2 = s.w.x;
            s.mz2 = s.w.z;
            if (math_signed_sqrt(s.mz2 * s.mz2 + s.w.x * s.mx2) > 100.0f) {
                g_cam_stray_frames = g_cam_stray_frames + 1;
                if (g_cam_stray_frames > 20) {
                    c->key_sub = 0;
                    c->key_step = 0;
                    c->step = 0;
                }
            }
        } else {
            g_cam_stray_frames = 0;
        }
        c->roll[CAM_GOAL] = 0;
        c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_CUR]) / 10;
        break;
    }
    cam_publish_heading(c);
}

void cam_mode_00_variant1(CamRecord *c)
{
    struct { Fighter *p0; float dx; Fighter *p1; float dz; Vec3 b; Vec3 a; Vec3 d; } s;
    int t;
    Fighter *pa, *pb;
    float dist, zoom;

    t = 1;
    if (GAME_VS_KIND == 1)
        t = 0;
    pa = FIGHTER((signed char)t);
    s.a.x = pa->pos.x;
    s.a.z = pa->pos.z;
    s.a.y = pa->pos.y + 210.0f;
    pb = FIGHTER(1 - (signed char)t);
    s.b.x = pb->pos.x;
    s.b.z = pb->pos.z;
    s.b.y = pb->pos.y + 200.0f;
    s.d.x = s.a.x - s.b.x;
    s.d.z = s.a.z - s.b.z;
    s.d.y = s.a.y - s.b.y;
    if (s.d.x == 0.0f && s.d.z == 0.0f && s.d.y == 0.0f) {
        s.d.y = 9.99999975e-05f;
        s.d.z = 9.99999975e-05f;
        s.d.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&s.d);
    s.a.x = s.a.x + 900.0f * s.d.x;
    s.a.z = s.a.z + 900.0f * s.d.z;
    s.a.y = s.a.y + 900.0f * s.d.y;
    if (0.0f > s.a.y)
        s.a.y = 0.0f;
    s.p0 = &g_players[0];
    s.p1 = &g_players[1];
    s.dx = s.p0->pos.x - s.p1->pos.x;
    s.dz = s.p0->pos.z - s.p1->pos.z;
    dist = math_signed_sqrt(s.dz * s.dz + s.dx * s.dx);
    c->point_a = s.b;
    c->point_b = s.a;
    c->target_a = &c->point_a;
    c->target_b = &c->point_b;
    c->key = g_cam_key_v1;
    zoom = 10000.0f / dist;
    if (10.0f > zoom)
        zoom = 10.0f;
    if (zoom > 100.0f)
        zoom = 100.0f;
    c->key.u.point.eye_div[2] = (short)(int)zoom;
    c->key.u.point.eye_div[0] = (short)(int)zoom;
    cam_compute_follow(c, &c->key);
    cam_publish_heading(c);
}

void cam_mode_00_variant3(CamRecord *c)
{
    struct { Fighter *p1; float dx, dz; Fighter *p0; Vec3 b; Vec3 a; Vec3 d; } s;
    int t;
    Fighter *pa, *pb;
    float dist, zoom;

    t = 1;
    if (GAME_VS_KIND == 1)
        t = 0;
    pa = FIGHTER((signed char)t);
    s.a.x = pa->pos.x;
    s.a.z = pa->pos.z;
    s.a.y = pa->pos.y + 230.0f;
    pb = FIGHTER(1 - (signed char)t);
    s.b.x = pb->pos.x;
    s.b.z = pb->pos.z;
    s.b.y = pb->pos.y + 200.0f;
    if (s.b.y > s.a.y)
        s.b.y = s.a.y;
    s.d.x = s.a.x - s.b.x;
    s.d.z = s.a.z - s.b.z;
    s.d.y = s.a.y - s.b.y;
    if (s.d.x == 0.0f && s.d.z == 0.0f && s.d.y == 0.0f) {
        s.d.y = 9.99999975e-05f;
        s.d.z = 9.99999975e-05f;
        s.d.x = 9.99999975e-05f;
    }
    FUN_0c0e24f0(&s.d);
    s.a.x = s.a.x + 500.0f * s.d.x;
    s.a.z = s.a.z + 500.0f * s.d.z;
    s.a.y = s.a.y + 500.0f * s.d.y;
    if (0.0f > s.a.y)
        s.a.y = 0.0f;
    s.p0 = &g_players[0];
    s.p1 = &g_players[1];
    s.dx = s.p0->pos.x - s.p1->pos.x;
    s.dz = s.p0->pos.z - s.p1->pos.z;
    dist = math_signed_sqrt(s.dz * s.dz + s.dx * s.dx);
    c->point_a = s.b;
    c->point_b = s.a;
    c->target_a = &c->point_a;
    c->target_b = &c->point_b;
    c->key = g_cam_key_v3;
    if (500.0f > dist) {
        zoom = 10000.0f / dist;
        if (10.0f > zoom)
            zoom = 10.0f;
        if (zoom > 100.0f)
            zoom = 100.0f;
    } else {
        zoom = 10.0f;
    }
    c->key.u.point.eye_div[2] = (short)(int)zoom;
    c->key.u.point.eye_div[0] = (short)(int)zoom;
    cam_compute_follow(c, &c->key);
    cam_publish_heading(c);
}
