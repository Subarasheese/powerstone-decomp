/* cam_shake.c: the screen shake, the near-goal test of the keyframe scripts and the reset of the fight camera
   (original file 0c0dc27c-0c0dc9d4). */
#include "game/camera/camera.h"

#define ABSD(a, b) (0.0f > (a) - (b) ? (b) - (a) : (a) - (b))

/* moves eye and look-at up or down by this frame's shake; the sign alternates every frame */
void cam_apply_shake(CamRecord *c, Vec3 *eye, Vec3 *look)
{
    switch (c->shake_kind) {
    case 0:                 /* fading: the amplitude times the frames left */
        if (c->shake_count == 0)
            goto off;
        c->shake = (float)(c->shake_amp * c->shake_count) * (c->shake_count & 1 ? -1.0f : 1.0f);
        c->shake_count = c->shake_count - 1;
        break;
    case 1:                 /* steady */
        if (c->shake_count == 0)
            goto off;
        c->shake = (float)c->shake_amp * (c->shake_count & 1 ? -1.0f : 1.0f);
        c->shake_count = c->shake_count - 1;
        break;
    case 2:                 /* random, below shake_rand times the amplitude */
        if (c->shake_count == 0)
            goto off;
        c->shake = (float)(unsigned int)(c->shake_amp * ((unsigned int)(math_rand_float() * 255.0f) % (unsigned int)c->shake_rand))
                   * (c->shake_count & 1 ? -1.0f : 1.0f);
        c->shake_count = c->shake_count - 1;
        break;
    default:
    off:
        c->shake_amp = 0;
        c->shake_count = 0;
        c->shake = (float)0;
        c->shake_kind = 99;
        break;
    }
    eye->y = eye->y + c->shake;
    look->y = look->y + c->shake;
}

/* look-at point and eye both within tolerance of their goals on every axis */
int cam_near_goal(CamRecord *c, int tolerance)
{
    if ((float)tolerance > ABSD(c->look[CAM_GOAL].x, c->look[CAM_CUR].x)
        && (float)tolerance > ABSD(c->look[CAM_GOAL].y, c->look[CAM_CUR].y)
        && (float)tolerance > ABSD(c->look[CAM_GOAL].z, c->look[CAM_CUR].z)
        && (float)tolerance > ABSD(c->eye[CAM_GOAL].x, c->eye[CAM_CUR].x)
        && (float)tolerance > ABSD(c->eye[CAM_GOAL].y, c->eye[CAM_CUR].y)
        && (float)tolerance > ABSD(c->eye[CAM_GOAL].z, c->eye[CAM_CUR].z))
        return 1;
    return 0;
}

/* puts the fight camera (mode 0, variant 0) straight at its goal: no blending */
void cam_snap_mode0(CamRecord *c)
{
    Fighter *p0 = &g_players[0];
    Fighter *p1 = &g_players[1];
    struct { float vz2, vx2, wx2, wz2, ground; signed char i; Vec3 b; Vec3 a; Vec3 w; Vec3 v; } s;
    int *lim;
    float f1, f2, h, sn, d;

    lim = g_cam_yaw_limits[g_stage_id];
    s.v.x = p1->pos.x - p0->pos.x;
    s.v.z = p1->pos.z - p0->pos.z;
    d = p0->pos.y - p1->pos.y;
    s.v.y = (0.0f > d ? p1->pos.y - p0->pos.y : d) + 170.0f;
    s.v.x = (p1->pos.x + p0->pos.x) / 2.0f;
    s.v.y = 0.0f;
    s.v.z = (p1->pos.z + p0->pos.z) / 2.0f;
    if (s.v.z == 0.0f)
        s.v.z = 9.99999997e-07f;
    c->yaw[CAM_GOAL] = math_atan2_angle16(s.v.x, s.v.z);
    c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] & 0xFFFF;
    for (s.i = 0; s.i < 5; s.i++) {
        if (c->yaw[CAM_GOAL] >= lim[0]) {
            lim++;
            c->yaw[CAM_GOAL] = lim[0];
            break;
        }
        lim += 2;
    }
    c->yaw[CAM_CUR] = c->yaw[CAM_GOAL];
    s.v.x = p1->pos.x - p0->pos.x;
    s.v.z = p1->pos.z - p0->pos.z;
    d = p0->pos.y - p1->pos.y;
    s.v.y = (0.0f > d ? p1->pos.y - p0->pos.y : d) + 170.0f;
    s.vx2 = s.v.x;
    s.vz2 = s.v.z;
    c->dist[CAM_GOAL] = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
    c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + (float)(g_cam_chara_radius[p0->chara] + g_cam_chara_radius[p1->chara]);
    c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + 100.0f;
    c->dist[CAM_GOAL] = c->dist[CAM_GOAL] / 2.0f * c->screen_w / (c->view_w / 2.0f * 1.0f);
    h = s.v.y / 2.0f * c->screen_w / (c->view_h / 2.0f * 0.799999952f);
    if (h > c->dist[CAM_GOAL])
        c->dist[CAM_GOAL] = h;
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
    c->dist[CAM_CUR] = c->dist[CAM_GOAL];
    c->pitch[CAM_GOAL] = (int)(f1 * ((-c->dist[CAM_GOAL] + 1696.79980f) / 1696.79980f) * 2730.0f + 4369.0f * (1.0f - f1));
    c->pitch[CAM_CUR] = c->pitch[CAM_GOAL];
    c->elev[CAM_CUR] = c->elev[CAM_GOAL];
    sn = c->dist[CAM_CUR] * math_cos_angle16(c->elev[CAM_CUR]);
    c->look[CAM_GOAL].x = (p0->pos.x + p1->pos.x) * 0.5f;
    c->look[CAM_GOAL].z = (p0->pos.z + p1->pos.z) * 0.5f;
    c->look[CAM_GOAL].y = (p0->pos.y + p1->pos.y + 200.0f) * 0.5f;
    c->look[CAM_CUR] = c->look[CAM_GOAL];
    c->eye[CAM_GOAL].y = c->look[CAM_CUR].y + c->dist[CAM_CUR] * math_tan_angle16(c->elev[CAM_CUR]);
    c->eye[CAM_CUR].y = c->eye[CAM_GOAL].y;
    if (c->eye[CAM_CUR].y > 500.0f)
        c->eye[CAM_CUR].y = 500.0f;
    c->eye[CAM_CUR].x = c->look[CAM_CUR].x + sn * math_sin_angle16(c->yaw[CAM_CUR]);
    c->eye[CAM_CUR].z = c->look[CAM_CUR].z + sn * math_cos_angle16(c->yaw[CAM_CUR]);
    c->roll[CAM_GOAL] = 0;
    c->roll[CAM_CUR] = c->roll[CAM_GOAL];
}

/* back to the fight camera, placed at once when it is the normal one */
void cam_reset_to_default(void)
{
    if (cam_select_mode0_variant(g_cam_records) == 0)
        cam_snap_mode0(g_cam_records);
    cam_force_mode(0, 0, 0x40);
}

/* a second copy of cam_mode_default; nothing calls it */
void cam_mode_default_dup(CamRecord *c)
{
    cam_compute_follow(c, &g_cam_key_default);
}
