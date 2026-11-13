/* cam_follow.c: moving a camera along a key, keyframe scripts, and the mode handlers 1..28 (original file 0c0d9288-0c0db1c0).

   cam_compute_follow moves the record one frame toward the key's goal. A point key (flags 0x1000) places the look-at point and
   the eye at offsets from the targets or at fixed positions; an orbit key (flags 0) puts the eye at a distance, yaw and elevation
   around the look-at point, the distance fitting both fighters when the key asks for it. A keyframe script is an array of keys
   run one after the other by cam_step_keyframe_script; most modes just run one. */
#include "game/camera/camera.h"

#define DEG(v) (int)((float)(v) * 65536.0f / 360.0f)
#define ABSD(a, b) (0.0f > (a) - (b) ? (b) - (a) : (a) - (b))
/* the joint matrix n of fighter f, in the block of its power form */
#define JOINT(f, n) ((char *)(f) + 0x300 + (short)((signed char)(f)->power_form * 3520) + (short)((n) * 176))

void thunk_FUN_0c062242(char *joint, float *pos);   /* position of a joint */

/* moves the record one frame toward the goals of key k */
void cam_compute_follow(CamRecord *c, CamKey *k)
{
    struct { Fighter *pl; float vz2, vx2; float t3, t4, t5, t6, t7, t8; Vec3 v; } s;
    float dx, dy, dz, h, z, flat, tn;
    int a, r6;
    Fighter *pl;

    if (c->key_sub == 0) {          /* a new key: remember where it starts */
        c->key_sub = c->key_sub + 1;
        c->eye[CAM_START] = c->eye[CAM_CUR];
        c->look[CAM_START] = c->look[CAM_CUR];
        c->yaw[CAM_START] = c->yaw[CAM_CUR];
        c->roll[CAM_START] = c->roll[CAM_CUR];
        c->dist[CAM_START] = c->dist[CAM_CUR];
        c->pitch[CAM_START] = c->pitch[CAM_CUR];
        c->elev[CAM_START] = c->elev[CAM_CUR];
    }
    switch (k->flags & 0xF000) {
    case 0x1000:
        switch (k->select & 15) {
        case 1:
            c->look[CAM_GOAL].x = c->target_a->x + (float)k->u.point.look[0];
            c->look[CAM_GOAL].y = c->target_a->y + (float)k->u.point.look[1];
            c->look[CAM_GOAL].z = c->target_a->z + (float)k->u.point.look[2];
            break;
        case 2:
            c->look[CAM_GOAL].x = c->target_b->x + (float)k->u.point.look[0];
            c->look[CAM_GOAL].y = c->target_b->y + (float)k->u.point.look[1];
            c->look[CAM_GOAL].z = c->target_b->z + (float)k->u.point.look[2];
            break;
        case 3:     /* the original stores the y midpoint over x too and leaves +0xE4 as it was */
            c->look[CAM_GOAL].x = (c->target_a->x + c->target_b->x) / 2.0f;
            c->look[CAM_GOAL].x = (c->target_a->y + c->target_b->y) / 2.0f;
            c->look[CAM_GOAL].z = (c->target_a->z + c->target_b->z) / 2.0f;
            break;
        case 4:
            c->look[CAM_GOAL].x = c->look[CAM_CUR].x;
            c->look[CAM_GOAL].y = c->look[CAM_CUR].y;
            c->look[CAM_GOAL].z = c->look[CAM_CUR].z;
            break;
        default:
            c->look[CAM_GOAL].x = (float)k->u.point.look[0];
            c->look[CAM_GOAL].y = (float)k->u.point.look[1];
            c->look[CAM_GOAL].z = (float)k->u.point.look[2];
            break;
        }
        switch (k->select & 0xF0) {
        case 3:     /* as above: the y midpoint overwrites x, +0xB4 is left as it was; unreachable (the value is masked with 0xF0) */
            c->eye[CAM_GOAL].x = (c->target_a->x + c->target_b->x) / 2.0f;
            c->eye[CAM_GOAL].x = (c->target_a->y + c->target_b->y) / 2.0f;
            c->eye[CAM_GOAL].z = (c->target_a->z + c->target_b->z) / 2.0f;
            break;
        case 16:
            c->eye[CAM_GOAL].x = c->target_a->x + (float)k->u.point.eye[0];
            c->eye[CAM_GOAL].y = c->target_a->y + (float)k->u.point.eye[1];
            c->eye[CAM_GOAL].z = c->target_a->z + (float)k->u.point.eye[2];
            break;
        case 32:
            c->eye[CAM_GOAL].x = c->target_b->x + (float)k->u.point.eye[0];
            c->eye[CAM_GOAL].y = c->target_b->y + (float)k->u.point.eye[1];
            c->eye[CAM_GOAL].z = c->target_b->z + (float)k->u.point.eye[2];
            break;
        case 64:
            c->eye[CAM_GOAL].x = c->eye[CAM_CUR].x;
            c->eye[CAM_GOAL].y = c->eye[CAM_CUR].y;
            c->eye[CAM_GOAL].z = c->eye[CAM_CUR].z;
            break;
        default:
            c->eye[CAM_GOAL].x = (float)k->u.point.eye[0];
            c->eye[CAM_GOAL].y = (float)k->u.point.eye[1];
            c->eye[CAM_GOAL].z = (float)k->u.point.eye[2];
            break;
        }
        c->roll[CAM_GOAL] = DEG(k->roll);
        switch (k->flags & 15) {
        case 0:
            c->look[CAM_CUR].x = c->look[CAM_CUR].x + (c->look[CAM_GOAL].x - c->look[CAM_CUR].x) / (float)k->u.point.look_div[0];
            c->look[CAM_CUR].y = c->look[CAM_CUR].y + (c->look[CAM_GOAL].y - c->look[CAM_CUR].y) / (float)k->u.point.look_div[1];
            c->look[CAM_CUR].z = c->look[CAM_CUR].z + (c->look[CAM_GOAL].z - c->look[CAM_CUR].z) / (float)k->u.point.look_div[2];
            c->eye[CAM_CUR].x = c->eye[CAM_CUR].x + (c->eye[CAM_GOAL].x - c->eye[CAM_CUR].x) / (float)k->u.point.eye_div[0];
            c->eye[CAM_CUR].y = c->eye[CAM_CUR].y + (c->eye[CAM_GOAL].y - c->eye[CAM_CUR].y) / (float)k->u.point.eye_div[1];
            c->eye[CAM_CUR].z = c->eye[CAM_CUR].z + (c->eye[CAM_GOAL].z - c->eye[CAM_CUR].z) / (float)k->u.point.eye_div[2];
            c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_CUR]) / 10;
            break;
        case 1:
            c->look[CAM_CUR].x = c->look[CAM_GOAL].x;
            c->look[CAM_CUR].y = c->look[CAM_GOAL].y;
            c->look[CAM_CUR].z = c->look[CAM_GOAL].z;
            c->eye[CAM_CUR].x = c->eye[CAM_GOAL].x;
            c->eye[CAM_CUR].y = c->eye[CAM_GOAL].y;
            c->eye[CAM_CUR].z = c->eye[CAM_GOAL].z;
            c->roll[CAM_CUR] = c->roll[CAM_GOAL];
            break;
        case 2:
            c->look[CAM_CUR].x = c->look[CAM_CUR].x + (c->look[CAM_GOAL].x - c->look[CAM_START].x) / (float)k->u.point.look_div[0];
            c->look[CAM_CUR].y = c->look[CAM_CUR].y + (c->look[CAM_GOAL].y - c->look[CAM_START].y) / (float)k->u.point.look_div[1];
            c->look[CAM_CUR].z = c->look[CAM_CUR].z + (c->look[CAM_GOAL].z - c->look[CAM_START].z) / (float)k->u.point.look_div[2];
            c->eye[CAM_CUR].x = c->eye[CAM_CUR].x + (c->eye[CAM_GOAL].x - c->eye[CAM_START].x) / (float)k->u.point.eye_div[0];
            c->eye[CAM_CUR].y = c->eye[CAM_CUR].y + (c->eye[CAM_GOAL].y - c->eye[CAM_START].y) / (float)k->u.point.eye_div[1];
            c->eye[CAM_CUR].z = c->eye[CAM_CUR].z + (c->eye[CAM_GOAL].z - c->eye[CAM_START].z) / (float)k->u.point.eye_div[2];
            c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_START]) / k->frames;
            break;
        }
        s.v.x = c->eye[CAM_CUR].x - c->look[CAM_CUR].x;
        s.v.z = c->eye[CAM_CUR].z - c->look[CAM_CUR].z;
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        c->yaw[CAM_CUR] = math_atan2_angle16(s.v.x, s.v.z);
        c->yaw[CAM_CUR] = (unsigned short)c->yaw[CAM_CUR];
        dx = c->look[CAM_CUR].x - c->eye[CAM_CUR].x;
        dy = c->look[CAM_CUR].y - c->eye[CAM_CUR].y;
        dz = c->look[CAM_CUR].z - c->eye[CAM_CUR].z;
        c->dist[CAM_CUR] = math_signed_sqrt(dy * dy + dx * dx + dz * dz);
        dx = c->look[CAM_CUR].x - c->eye[CAM_CUR].x;
        dz = c->look[CAM_CUR].z - c->eye[CAM_CUR].z;
        h = math_signed_sqrt(dz * dz + dx * dx);
        if (h == 0.0f)
            h = 9.99999997e-07f;
        c->pitch[CAM_CUR] = math_atan2_angle16(c->look[CAM_CUR].y, h);
        c->elev[CAM_CUR] = math_atan2_angle16(c->eye[CAM_CUR].y - c->look[CAM_CUR].y, h);
        return;
    case 0:
        break;
    default:
        return;
    }
    c->pitch[CAM_GOAL] = DEG(k->u.orbit.pitch);
    c->elev[CAM_GOAL] = DEG(k->u.orbit.elev);
    c->yaw[CAM_GOAL] = DEG(k->u.orbit.yaw);
    s.v.x = c->target_b->x - c->target_a->x;
    s.v.z = c->target_b->z - c->target_a->z;
    s.v.y = ABSD(c->target_a->y, c->target_b->y) + 170.0f;
    if (k->u.orbit.dist == -1) {
        s.vx2 = s.v.x;
        s.vz2 = s.v.z;
        c->dist[CAM_GOAL] = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
        z = c->dist[CAM_GOAL] * 0.100000024f / 1500.0f + 0.899999976f;
        if (z > 1.0f)
            z = 1.0f;
        c->dist[CAM_GOAL] = c->dist[CAM_GOAL] / 2.0f * c->screen_w / (c->view_w / 2.0f * z);
        h = s.v.y / 2.0f * c->screen_w / (c->view_h / 2.0f * 0.799999952f);
        if (h > c->dist[CAM_GOAL])
            c->dist[CAM_GOAL] = h;
        if (600.0f > c->dist[CAM_GOAL])
            c->dist[CAM_GOAL] = 600.0f;
    } else {
        c->dist[CAM_GOAL] = (float)k->u.orbit.dist;
    }
    if (k->flags & 0x30) {
        if (ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) > ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) / (float)(k->u.orbit.dist_div + 1))
            c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_START]) / (float)(k->u.orbit.dist_div + 1);
        else
            c->dist[CAM_CUR] = c->dist[CAM_GOAL];
    } else if (!(c->dist[CAM_CUR] == c->dist[CAM_GOAL])) {
        if (ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) > ABSD(c->dist[CAM_GOAL], c->dist[CAM_CUR]) / (float)(k->u.orbit.dist_div + 1))
            c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_CUR]) / (float)(k->u.orbit.dist_div + 1);
        else
            c->dist[CAM_CUR] = c->dist[CAM_GOAL];
    }
    switch (k->select & 0xF0) {
    case 0:
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + c->yaw[CAM_START];
        break;
    case 32:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + math_atan2_angle16(s.v.x, s.v.z);
        break;
    case 48:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        a = math_atan2_angle16(s.v.x, s.v.z);
        if ((unsigned short)(c->yaw[CAM_CUR] - a) > 0x8000)
            c->yaw[CAM_GOAL] = 0x10000 - c->yaw[CAM_GOAL];
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + a;
        break;
    case 64:
        if ((k->select & 15) == 1 || (k->select & 15) == 4)
            pl = FIGHTER(1 - c->target);
        else
            pl = FIGHTER(c->target);
        c->yaw[CAM_GOAL] = pl->yaw + c->yaw[CAM_GOAL];
        break;
    case 144:
        if (s.v.z == 0.0f)
            s.v.z = 9.99999997e-07f;
        a = math_atan2_angle16(s.v.x, s.v.z);
        r6 = (unsigned short)(a - c->yaw[CAM_CUR] + 0x4000);
        if (r6 >= 0x4000 && !(r6 > 0xC000))
            r6 = a + 0xC000;
        else
            r6 = a + 0x4000;
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + r6;
        break;
    }
    if (c->yaw[CAM_GOAL] - c->yaw[CAM_CUR] > 0x8000)
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] - 0x10000;
    if (c->yaw[CAM_GOAL] - c->yaw[CAM_CUR] < -32768)
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + 0x10000;
    if (k->flags & 16)
        c->yaw[CAM_CUR] = c->yaw[CAM_CUR] + (short)(c->yaw[CAM_GOAL] - c->yaw[CAM_START]) / k->u.orbit.yaw_div;
    else
        c->yaw[CAM_CUR] = c->yaw[CAM_CUR] + (short)(c->yaw[CAM_GOAL] - c->yaw[CAM_CUR]) / k->u.orbit.yaw_div;
    c->yaw[CAM_CUR] = (unsigned short)c->yaw[CAM_CUR];
    if ((k->select & 0xF00) == 0x100) {
        flat = math_cos_angle16(c->elev[CAM_CUR]);
        flat = c->dist[CAM_CUR] * flat;
    } else if (k->flags & 15) {
        flat = math_cos_angle16(c->elev[CAM_GOAL]);
        flat = c->dist[CAM_GOAL] * flat;
    } else {
        c->elev[CAM_CUR] = c->elev[CAM_CUR] + (short)(c->elev[CAM_GOAL] - c->elev[CAM_CUR]) / k->u.orbit.elev_div;
        flat = math_cos_angle16(c->elev[CAM_CUR]);
        flat = c->dist[CAM_CUR] * flat;
    }
    switch (k->select & 15) {
    case 0:
        c->look[CAM_GOAL].x = c->target_a->x;
        c->look[CAM_GOAL].y = c->target_a->y;
        c->look[CAM_GOAL].z = c->target_a->z;
        c->look[CAM_GOAL].y = c->look[CAM_GOAL].y + (float)k->u.orbit.pitch;
        break;
    case 1:
        c->look[CAM_GOAL].x = c->target_b->x;
        c->look[CAM_GOAL].y = c->target_b->y;
        c->look[CAM_GOAL].z = c->target_b->z;
        c->look[CAM_GOAL].y = c->look[CAM_GOAL].y + (float)k->u.orbit.pitch;
        break;
    case 2:
        c->look[CAM_GOAL].x = (c->target_a->x + c->target_b->x) / 2.0f;
        c->look[CAM_GOAL].y = (c->target_a->y + c->target_b->y) / 2.0f;
        c->look[CAM_GOAL].z = (c->target_a->z + c->target_b->z) / 2.0f;
        c->look[CAM_GOAL].y = c->look[CAM_GOAL].y + (float)k->u.orbit.pitch;
        break;
    case 3:
    case 4:
    case 5:
        if ((k->select & 15) == 3) {
            c->look[CAM_GOAL].x = c->target_a->x;
            c->look[CAM_GOAL].z = c->target_a->z;
        } else if ((k->select & 15) == 4) {
            c->look[CAM_GOAL].x = c->target_b->x;
            c->look[CAM_GOAL].z = c->target_b->z;
        } else {
            c->look[CAM_GOAL].x = (c->target_a->x + c->target_b->x) / 2.0f;
            c->look[CAM_GOAL].z = (c->target_a->z + c->target_b->z) / 2.0f;
        }
        if (k->flags & 15) {
            tn = math_tan_angle16(c->pitch[CAM_GOAL]);
        } else {
            c->pitch[CAM_CUR] = c->pitch[CAM_CUR] + (short)(c->pitch[CAM_GOAL] - c->pitch[CAM_CUR]) / k->u.orbit.pitch_div;
            tn = math_tan_angle16(c->pitch[CAM_CUR]);
        }
        c->look[CAM_GOAL].y = flat * tn;
        break;
    case 6:
        c->look[CAM_GOAL] = c->look[CAM_CUR];
        break;
    case 7:
        s.pl = FIGHTER(c->target);
        thunk_FUN_0c062242(JOINT(s.pl, k->u.orbit.pitch), &c->look[CAM_GOAL].x);
        break;
    case 8:
        s.pl = FIGHTER(1 - c->target);
        thunk_FUN_0c062242(JOINT(s.pl, k->u.orbit.pitch), &c->look[CAM_GOAL].x);
        break;
    }
    c->look[CAM_CUR].x = c->look[CAM_CUR].x + (float)((short)(int)(c->look[CAM_GOAL].x - c->look[CAM_CUR].x) / (k->u.orbit.look_div + 1));
    c->look[CAM_CUR].y = c->look[CAM_CUR].y + (float)((short)(int)(c->look[CAM_GOAL].y - c->look[CAM_CUR].y) / (k->u.orbit.look_div + 1));
    c->look[CAM_CUR].z = c->look[CAM_CUR].z + (float)((short)(int)(c->look[CAM_GOAL].z - c->look[CAM_CUR].z) / (k->u.orbit.look_div + 1));
    c->look[CAM_CUR] = c->look[CAM_GOAL];
    c->eye[CAM_CUR].x = c->look[CAM_CUR].x + flat * math_sin_angle16(c->yaw[CAM_CUR]);
    c->eye[CAM_CUR].z = c->look[CAM_CUR].z + flat * math_cos_angle16(c->yaw[CAM_CUR]);
    c->eye[CAM_CUR].y = c->look[CAM_CUR].y + c->dist[CAM_CUR] * math_sin_angle16(c->elev[CAM_CUR]);
    c->roll[CAM_GOAL] = DEG(k->roll);
    if (k->flags & 32)
        c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_START]) / k->frames;
    else
        c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_CUR]) / 10;
    if (k->flags & 1) {
        c->yaw[CAM_CUR] = c->yaw[CAM_GOAL];
        c->elev[CAM_CUR] = c->elev[CAM_GOAL];
        c->dist[CAM_CUR] = c->dist[CAM_GOAL];
        flat = math_cos_angle16(c->elev[CAM_CUR]);
        flat = c->dist[CAM_CUR] * flat;
        c->look[CAM_CUR] = c->look[CAM_GOAL];
        c->roll[CAM_CUR] = c->roll[CAM_GOAL];
        c->eye[CAM_CUR].x = c->look[CAM_CUR].x + flat * math_sin_angle16(c->yaw[CAM_CUR]);
        c->eye[CAM_CUR].z = c->look[CAM_CUR].z + flat * math_cos_angle16(c->yaw[CAM_CUR]);
        c->eye[CAM_CUR].y = c->look[CAM_CUR].y + c->dist[CAM_CUR] * math_sin_angle16(c->elev[CAM_CUR]);
    }
}

/* copies slot s of every tracked value to slot d */
#define CAM_COPY_SLOT(c, d, s)              \
    do {                                    \
        (c)->eye[d] = (c)->eye[s];          \
        (c)->look[d] = (c)->look[s];        \
        (c)->yaw[d] = (c)->yaw[s];          \
        (c)->roll[d] = (c)->roll[s];        \
        (c)->dist[d] = (c)->dist[s];        \
        (c)->pitch[d] = (c)->pitch[s];      \
        (c)->elev[d] = (c)->elev[s];        \
    } while (0)

/* runs a keyframe script: returns 1 on the frame a -2 key jumped, 2 once the script ended (the default camera comes back),
   3 after a -3 key (the script holds its last key) */
int cam_step_keyframe_script(CamRecord *c, CamKey *script)
{
    int jumped = 0;
    int marker;

    switch (c->key_step) {
    case 0:
        c->key_step++;
        c->key_sub = 0;
        c->key_ptr = script;
        c->key_frames = c->key_ptr->frames;
        /* fall through */
    case 1:
        cam_compute_follow(c, c->key_ptr);
        c->key_frames = c->key_frames - 1;
        if (c->key_frames != 0) {
            if ((c->key_ptr->select & 0xF00) == 0)
                return jumped;
            if (cam_near_goal(c, 5) == 0)
                return jumped;
        }
        if (c->key_ptr->flags & 0x100)
            CAM_COPY_SLOT(c, CAM_SAVED, CAM_CUR);
        else if (c->key_ptr->flags & 0x200)
            CAM_COPY_SLOT(c, CAM_CUR, CAM_SAVED);
        c->key_ptr = c->key_ptr + 1;
        c->key_sub = 0;
        marker = c->key_ptr->frames;
        if (marker == -3) {
            c->key_step += 2;
        } else if (marker == -2) {
            c->key_ptr = script + c->key_ptr->flags;
            jumped = 1;
        } else if (marker == -1) {
            c->key_step++;
            return 0;
        }
        c->key_frames = c->key_ptr->frames;
        c->eye[CAM_START] = c->eye[CAM_CUR];
        c->look[CAM_START] = c->look[CAM_CUR];
        c->yaw[CAM_START] = c->yaw[CAM_CUR];
        c->roll[CAM_START] = c->roll[CAM_CUR];
        c->dist[CAM_START] = c->dist[CAM_CUR];
        c->pitch[CAM_START] = c->pitch[CAM_CUR];
        c->elev[CAM_START] = c->elev[CAM_CUR];
        return jumped;
    case 2:
        cam_force_mode(0, 0, 64);
        return 2;
    case 3:
        return 3;
    }
    return jumped;
}

void cam_mode_default(CamRecord *c)
{
    cam_compute_follow(c, &g_cam_key_default);
}

void cam_mode_28(CamRecord *c)
{
    cam_compute_follow(c, &g_cam_key_mode28);
}

/* a slow turn round the target */
void cam_mode_16(CamRecord *c)
{
    switch (c->step) {
    case 0:
        c->step++;
        c->key_sub = 0;
        c->key_step = 0;
        c->key = g_cam_key_mode16;
        /* fall through */
    case 1:
        if (++c->key.u.orbit.yaw > 360)
            c->key.u.orbit.yaw = 0;
        break;
    }
    cam_compute_follow(c, &c->key);
}

void cam_request_mode_01(int script)
{
    if ((signed char)cam_request_mode(1, 0, 0x80))
        g_cam_records[0].script = script;
}

void cam_mode_01(CamRecord *c)
{
    switch (c->step) {
    case 0:
        c->step++;
        c->key_sub = 0;
        c->key_step = 0;
        /* fall through */
    case 1:
        cam_step_keyframe_script(c, g_cam_scripts_mode01[c->script]);
        break;
    }
}

void cam_request_mode_02(int arg)
{
    if ((signed char)cam_request_mode(2, 0, 0x80))
        g_cam_records[0].step = arg;
}

void cam_mode_02(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode02[c->step]);
}

void cam_request_mode_05(int arg, int target)
{
    if ((signed char)cam_request_mode(5, target, 0x80))
        g_cam_records[0].step = arg;
}

void cam_mode_05(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode05[c->step]);
}

void cam_request_mode_06(int arg, int target)
{
    if ((signed char)cam_request_mode(6, target, 0x80))
        g_cam_records[0].step = arg;
}

/* the pad of the target fighter's slot is an arcade stick (two-player kinds 1 and 2 check the slot the kind names) */
int FUN_0c0da5b2(CamRecord *c)
{
    signed char kind = GAME_VS_KIND;

    switch ((unsigned char)kind) {
    case 1:
    case 2:
        if (c->target == (unsigned char)kind - 1 && PAD_KIND(kind - 1) == 4)
            return 1;
        return 0;
    case 3:
        if (PAD_KIND(c->target) == 4)
            return 1;
        return 0;
    }
    return 0;
}

/* mode 6: a script, then the player turns and zooms the camera with the pad */
void cam_mode_06(CamRecord *c)
{
    int ang_diff;
    float ang;

    switch (c->arg) {
    case 0:
        cam_step_keyframe_script(c, g_cam_scripts_mode06[c->step]);
        if (FUN_0c0da5b2(c) == 0)
            return;
        c->arg = c->arg + 1;
        c->key = *g_cam_key_mode06;
        c->key.u.orbit.elev = (short)(int)((float)c->elev[CAM_CUR] * 360.0f / 65536.0f);
        ang_diff = c->yaw[CAM_CUR] - FIGHTER(c->target)->yaw;
        ang = (float)ang_diff;
        if (ang > 32768.0f)
            ang = ang + -65536.0f;
        c->key.u.orbit.yaw = (short)(int)(ang * 360.0f / 65536.0f);
        c->key.u.orbit.dist = (short)(int)c->dist[CAM_CUR];
        return;
    case 1:
        if (PAD_BITS(c->target) & 64) {
            if (c->key.u.orbit.yaw < 30)
                c->key.u.orbit.yaw = c->key.u.orbit.yaw + c->key.u.orbit.pitch_div;
        } else if (PAD_BITS(c->target) & 128) {
            if (c->key.u.orbit.yaw > -30)
                c->key.u.orbit.yaw = c->key.u.orbit.yaw - c->key.u.orbit.pitch_div;
        }
        if (PAD_BITS(c->target) & 16) {
            if (c->key.u.orbit.elev < g_cam_key_mode06->u.orbit.elev + 60)
                c->key.u.orbit.elev = c->key.u.orbit.elev + c->key.u.orbit.elev_div;
        } else if (PAD_BITS(c->target) & 32) {
            if (c->key.u.orbit.elev > g_cam_key_mode06->u.orbit.elev - 30)
                c->key.u.orbit.elev = c->key.u.orbit.elev - c->key.u.orbit.elev_div;
        }
        if (PAD_BITS(c->target) & 0x604) {
            if (c->key.u.orbit.dist > g_cam_key_mode06->u.orbit.look_div)
                c->key.u.orbit.dist = c->key.u.orbit.dist - c->key.u.orbit.dist_div;
        } else {
            if (c->key.u.orbit.dist < g_cam_key_mode06->u.orbit.dist)
                c->key.u.orbit.dist = c->key.u.orbit.dist + c->key.u.orbit.dist_div;
        }
        cam_compute_follow(c, &c->key);
        return;
    }
}

void cam_request_mode_07(int arg, int target)
{
    if ((signed char)cam_request_mode(7, target, 0x80))
        g_cam_records[0].step = arg;
}

void cam_mode_07(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode07[c->step]);
}

void cam_mode_13(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_script_mode13);
}

void cam_request_mode_18(int arg, int target)
{
    if ((signed char)cam_request_mode(18, target, 0x80))
        g_cam_records[0].step = arg;
}

void cam_mode_18(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode18[c->step]);
}

/* a turn round the target, zooming in and sinking */
void FUN_0c0da8c0(CamRecord *c)
{
    switch (c->step) {
    case 0:
        c->step++;
        c->key_sub = 0;
        c->key_step = 0;
        c->key = g_cam_key_spin;
        /* fall through */
    case 1:
        if (++c->key.u.orbit.yaw > 360)
            c->key.u.orbit.yaw = 0;
        if (c->key.u.orbit.dist > 256)
            c->key.u.orbit.dist--;
        if (c->key.u.orbit.elev > -5)
            c->key.u.orbit.elev--;
        break;
    }
    cam_compute_follow(c, &c->key);
}

/* the two bytes are overwritten at once: cam_force_mode clears the argument and the state */
void cam_force_mode_14(int target, int a, int b)
{
    g_cam_records[0].arg = a;
    g_cam_records[0].step = b;
    cam_force_mode(14, (signed char)target, 64);
}

void cam_mode_14(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_script_mode14);
}

/* the camera of a fighter's special move: one of four per character and variant, at random */
void cam_request_mode_19(Fighter *f, int variant)
{
    CamRecord *c = g_cam_records;
    signed char *row;
    unsigned int rnd;

    if (c->priority > 96)
        return;
    c->priority = 96;
    c->mode = 19;
    c->step = 0;
    c->key_step = 0;
    c->key_sub = 0;
    c->target = f->slot;
    c->target_a = &FIGHTER(f->slot)->pos;
    c->target_b = &FIGHTER(f->slot == 0)->pos;
    row = g_cam_special_args[f->chara][(signed char)variant];
    rnd = (unsigned int)(math_rand_float() * 255.0f);
    c->arg = row[rnd % 4];
}

void cam_request_mode_20(Fighter *f)
{
    CamRecord *c = g_cam_records;

    if (c->priority <= 0x60) {
        c->priority = 0x60;
        c->mode = 20;
        c->step = 0;
        c->key_step = 0;
        c->key_sub = 0;
        c->target = f->slot;
        c->target_a = &FIGHTER(f->slot)->pos;
        c->target_b = &FIGHTER(f->slot == 0)->pos;
    }
}

void cam_mode_20(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_script_mode20);
    if (g_players[0].ctrl != 2 && g_players[1].ctrl != 2)
        cam_force_mode(0, 0, 0x40);
}

int cam_request_mode_03(int arg, int target)
{
    if ((signed char)cam_request_mode(3, target, 0x60)) {
        g_cam_records[0].step = arg;
        return 1;
    }
    return 0;
}

void cam_mode_03(CamRecord *c)
{
    if (FIGHTER(c->target)->ctrl == 1) {
        cam_force_mode(0, 0, 0x40);
        return;
    }
    cam_step_keyframe_script(c, g_cam_scripts_mode03[c->step]);
}

/* the original passes mode 96 (handled as the default camera) and priority 4 */
int FUN_0c0dab5e(int arg, Vec3 *a, Vec3 *b)
{
    if ((signed char)cam_request_mode_with_args(96, 4, a, b)) {
        g_cam_records[0].step = arg;
        return 1;
    }
    return 0;
}

int cam_request_mode_04(int arg, int target)
{
    if ((signed char)cam_request_mode(4, target, 0x60)) {
        g_cam_records[0].step = arg;
        return 1;
    }
    return 0;
}

void cam_mode_04(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode04[c->step]);
}

/* mode 17: the record's own key for as many frames as the fighter's hit stop, then a script */
int cam_request_mode_17(Fighter *f)
{
    g_cam_records[0].key = g_cam_key_mode17;
    g_cam_records[0].key.frames = (signed char)f->hitstop;
    return cam_request_mode(17, f->slot, 80);
}

void cam_mode_17(CamRecord *c)
{
    switch (c->step) {
    case 0:
        if (--c->key.frames == 0) {
            c->step++;
            c->key_sub = 0;
            c->key_step = 0;
        }
        cam_compute_follow(c, &c->key);
        return;
    case 1:
        cam_step_keyframe_script(c, g_cam_script_mode17);
        return;
    }
}

/* the debug free camera (mode 27): the camera follows two debug points the pad moves; nothing calls these two */
void cam_enter_debug_free(void)
{
    CamRecord *c = g_cam_records;

    c->mode = 27;
    c->key_sub = 0;
    c->key_step = 0;
    c->step = 0;
    c->arg = 0;
    c->priority = 0xFF;
    g_cam_debug_point_a.x = 0.0f;
    g_cam_debug_point_a.y = 0.0f;
    g_cam_debug_point_a.z = 0.0f;
    c->target = 0;
    c->target_a = &g_cam_debug_point_a;
    c->target_b = &g_cam_debug_point_b;
}

void cam_update_debug_free(void)
{
    CamRecord *c = g_cam_records;

    if (g_cam_debug_free_on) {
        if (c->mode != 27)
            cam_enter_debug_free();
    } else if (c->mode == 27) {
        cam_force_mode(0, 0, 64);
    }
}

/* the pad turns (left/right), tilts (up/down) and zooms (A/B) the camera; with button 0x400 held it moves the point */
void cam_mode_27_debug_free(CamRecord *c)
{
    Vec3 d;
    Vec3 *v;
    unsigned short pad;
    float f5;
    short *yaw;
    short *elev;
    short *dist;

    switch (c->step) {
    case 0:
        c->step = c->step + 1;
        c->key = g_cam_key_debug_free;
        /* fall through */
    case 1:
        pad = g_debug_pad;
        yaw = &c->key.u.orbit.yaw;
        elev = &c->key.u.orbit.elev;
        dist = &c->key.u.orbit.dist;
        if (!(pad & 0x400)) {
            if (pad & 0x40)
                *yaw = *yaw + 4;
            else if (g_debug_pad & 0x80)
                *yaw = *yaw - 4;
            if (*yaw < 0)
                c->key.u.orbit.yaw = c->key.u.orbit.yaw + 360;
            if (*yaw > 360)
                c->key.u.orbit.yaw = c->key.u.orbit.yaw - 360;
            pad = g_debug_pad;
            if (pad & 0x10)
                *elev = *elev + 4;
            else if (pad & 0x20)
                *elev = *elev - 4;
            if (*elev < 0)
                c->key.u.orbit.elev = c->key.u.orbit.elev + 360;
            if (*elev > 360)
                c->key.u.orbit.elev = c->key.u.orbit.elev - 360;
            pad = g_debug_pad;
            if (pad & 4) {
                *dist = *dist - 20;
                if (*dist < 1)
                    *dist = 1;
            } else if (pad & 2) {
                *dist = *dist + 20;
            }
        } else {
            v = &g_cam_debug_point_a;
            d.x = c->look[CAM_CUR].x - c->eye[CAM_CUR].x;
            d.y = c->look[CAM_CUR].y - c->eye[CAM_CUR].y;
            d.z = c->look[CAM_CUR].z - c->eye[CAM_CUR].z;
            if (d.x == 0.0f && d.z == 0.0f) {
                d.z = 9.99999975e-05f;
                d.x = 9.99999975e-05f;
            }
            FUN_0c0e24f0(&d);
            pad = g_debug_pad;
            f5 = d.z * 10.0f;
            if (pad & 0x40) {
                v->x = v->x + f5;
                v->z = v->z + (-(d.x * 10.0f));
            } else if (pad & 0x80) {
                v->x = v->x - f5;
                v->z = v->z - (-(d.x * 10.0f));
            }
            if (pad & 0x10)
                v->y = v->y + 10.0f;
            else if (pad & 0x20)
                v->y = v->y - 10.0f;
            f5 = d.x * 10.0f;
            if (pad & 4) {
                v->x = v->x + f5;
                v->y = v->y + 10.0f * d.y;
                v->z = v->z + 10.0f * d.z;
            } else if (pad & 2) {
                v->x = v->x - f5;
                v->y = v->y - d.y * 10.0f;
                v->z = v->z - d.z * 10.0f;
            }
        }
        cam_compute_follow(c, &c->key);
        return;
    }
}

/* a turn round the target, zooming in and sinking (as FUN_0c0da8c0, with its own key) */
void cam_mode_15(CamRecord *c)
{
    switch (c->step) {
    case 0:
        c->step++;
        c->key = g_cam_key_mode15;
        /* fall through */
    case 1:
        if (++c->key.u.orbit.yaw > 360)
            c->key.u.orbit.yaw = 0;
        if (c->key.u.orbit.dist > 256)
            c->key.u.orbit.dist--;
        if (c->key.u.orbit.elev > -5)
            c->key.u.orbit.elev--;
        break;
    }
    cam_compute_follow(c, &c->key);
}

void cam_mode_08_09(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_script_mode08);
}

void cam_force_mode_10(int arg, int target)
{
    cam_force_mode(10, target, 0x80);
    g_cam_records[0].step = arg;
}

/* mode 10 follows g_cam_mode10_arg: a change restarts the mode with the new script */
void cam_mode_10(CamRecord *c)
{
    if (g_cam_mode10_arg != c->step)
        cam_force_mode_10(g_cam_mode10_arg, c->target);
    cam_step_keyframe_script(c, g_cam_scripts_mode10[c->step]);
}

void cam_mode_21(CamRecord *c)
{
    if (FIGHTER(c->target)->state_id != 23) {
        cam_reset_to_default();
        return;
    }
    cam_step_keyframe_script(c, g_cam_script_mode21);
}

void cam_mode_22(CamRecord *c)
{
    Fighter *f;

    switch (c->step) {
    case 0:
        c->step++;
        c->counter = 0;
        /* fall through */
    case 1:
        f = FIGHTER(c->target);
        if (f->state_id == 15 || f->ctrl == 0) {
            cam_force_mode(0, 0, 64);
            return;
        }
        cam_step_keyframe_script(c, g_cam_script_mode22);
        return;
    }
}

void cam_force_mode_23(int arg)
{
    cam_force_mode(23, 0, 0x40);
    g_cam_records[0].step = arg;
}

void cam_mode_23(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode23[c->step]);
}

/* the stage select camera: the script's first key looks from above the stage's centre */
void cam_mode_24_stage_select(CamRecord *c)
{
    struct CamStageViews { short v[20]; } views;
    CamKey *key;
    int i;

    views = *(struct CamStageViews *)g_cam_stage_view;
    key = g_cam_script_mode24;
    if (c->step == 0) {
        c->step = c->step + 1;
        i = g_stage_id * 2;
        key->u.point.eye[0] = views.v[i];
        key->u.point.look[0] = views.v[i];
        i = g_stage_id * 2;
        key->u.point.eye[2] = views.v[i + 1];
        key->u.point.look[2] = views.v[i + 1];
        cam_step_keyframe_script(c, key);
    } else if (c->step == 1) {
        cam_step_keyframe_script(c, key);
    }
}

void cam_mode_25(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_scripts_mode25[c->step]);
    if (g_players[0].ctrl == 1 && g_players[1].ctrl == 1)
        cam_force_mode(0, 0, 0x40);
}

void cam_mode_26(CamRecord *c)
{
    cam_step_keyframe_script(c, g_cam_script_mode26);
}
