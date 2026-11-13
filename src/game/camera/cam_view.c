/* cam_view.c: the camera records, the per-frame mode dispatch and the view matrix (original file 0c0d80d4-0c0d8f10). */
#include "game/camera/camera.h"

/* record i: the game indexes the records with a 16-bit multiply */
#define CAM_RECORD(i) ((CamRecord *)((char *)g_cam_records + (short)((short)(i) * (short)sizeof(CamRecord))))

/* publishes the heading of the record that drives the controls (the split view: the player's own record) */
void cam_publish_active_position(int index)
{
    CamRecord *c;

    if (g_cam_split_flag)
        c = CAM_RECORD((signed char)index);
    else
        c = g_cam_records;
    g_cam_forward_xz = c->heading_dir;
    g_cam_yaw16 = c->heading;
}

/* direction from the record's fighter to the other one, normalised; returns the distance */
float cam_calc_fighter_dir(CamRecord *c)
{
    float len, div;

    c->fighter_dir.x = FIGHTER(1 - c->index)->pos.x - FIGHTER(c->index)->pos.x;
    c->fighter_dir.y = FIGHTER(1 - c->index)->pos.y - FIGHTER(c->index)->pos.y;
    c->fighter_dir.z = FIGHTER(1 - c->index)->pos.z - FIGHTER(c->index)->pos.z;
    len = math_signed_sqrt(c->fighter_dir.y * c->fighter_dir.y + c->fighter_dir.x * c->fighter_dir.x
                           + c->fighter_dir.z * c->fighter_dir.z);
    div = len;
    if (len == 0.0f)
        div = 9.99999975e-06f;
    c->fighter_dir.x = c->fighter_dir.x / div;
    c->fighter_dir.y = c->fighter_dir.y / div;
    c->fighter_dir.z = c->fighter_dir.z / div;
    return len;
}

/* which fighter is on the left of the screen */
void cam_calc_side_of_targets(CamRecord *c)
{
    Vec3 point;
    float screen_a[2];
    float screen_b[2];

    point = g_players[0].pos;
    nlProjectScreen(&point, screen_a);
    point = g_players[1].pos;
    nlProjectScreen(&point, screen_b);
    if (screen_b[0] > screen_a[0])
        c->side = 0;
    else
        c->side = 1;
}

/* the heading the controls use: across the line between the fighters, and the camera's yaw */
float cam_publish_heading(CamRecord *c)
{
    float near_z, dx, far_z, dz, len, cs;

    if (c->side) {
        near_z = g_players[0].pos.z;
        dx = g_players[0].pos.x - g_players[1].pos.x;
        far_z = g_players[1].pos.z;
    } else {
        near_z = g_players[1].pos.z;
        dx = g_players[1].pos.x - g_players[0].pos.x;
        far_z = g_players[0].pos.z;
    }
    dz = near_z - far_z;
    len = math_signed_sqrt(dz * dz + dx * dx);
    if (len == 0.0f)
        len = 9.99999997e-07f;
    c->fighter_dir.x = dx / len;
    c->fighter_dir.z = (near_z - far_z) / len;
    c->heading = c->yaw[CAM_CUR];
    c->heading = c->heading & 0xFFFF;
    c->heading_dir.x = math_sin_angle16(c->heading);
    cs = math_cos_angle16(c->heading);
    c->heading_dir.z = cs;
    return cs;
}

void cam_init_records(void)
{
    int i;
    CamRecord *c;

    for (i = 0; i < 2; i++) {
        memset(CAM_RECORD(i), 0, sizeof(CamRecord));
        CAM_RECORD(i)->index = i;
        CAM_RECORD(i)->screen_w = 640.0f;
        CAM_RECORD(i)->view_w = 640.0f;
        CAM_RECORD(i)->view_h = 480.0f;
        c = CAM_RECORD(i);
        c->center_x = 320.0f;
        c->center_y = 240.0f;
    }
}

/* the camera mode 0 uses: 0 the normal fight camera, 1..4 the special views */
int cam_select_mode0_variant(CamRecord *c)
{
    int variant;

    if (g_301c == 0) {
        variant = 0;
        if (GAME_VS_KIND != 3) {
            if (g_cam_view_flag == 0)
                variant = g_stage_id == 10 ? 1 : 0;
            else
                variant = g_stage_id == 10 ? 1 : 3;
        }
        return variant;
    }
    variant = 0;
    if (g_cam_split_flag)
        variant = FIGHTER(c->index)->chara == 10 ? 2 : 4;
    return variant;
}

void cam_set_view_matrix(CamRecord *c)
{
    Vec3 target;
    Vec3 eye;

    cam_update_by_mode(c);
    eye = c->eye[CAM_CUR];
    target = c->look[CAM_CUR];
    cam_apply_shake(c, &eye, &target);
    nlSelectMatrixStack(2);
    nlUnitMatrix();
    nlLookAt(&eye, &target, c->roll[CAM_CUR]);
    nlStoreMatrix(c->inv_matrix);
    nlStoreMatrix(c->matrix);
    nlInvertMatrix(c->inv_matrix);
    nlSelectMatrixStack(1);
}

void cam_set_priority(int index, int priority)
{
    CAM_RECORD(index)->priority = priority;
}

/* the first record takes the mode when the request's priority is at least the running mode's */
int cam_request_mode(int mode, int target, int priority)
{
    CamRecord *c = g_cam_records;

    if ((unsigned char)priority >= c->priority) {
        c->mode = mode;
        c->key_step = 0;
        c->step = 0;
        c->arg = 0;
        c->key_sub = 0;
        c->priority = priority;
        c->target = target;
        c->target_a = &FIGHTER((signed char)target)->pos;
        c->target_b = &FIGHTER((signed char)target == 0)->pos;
        return 1;
    }
    return 0;
}

void cam_update_by_mode(CamRecord *c)
{
    switch (c->mode) {
    case 0:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        switch (cam_select_mode0_variant(c)) {
        case 1:
            cam_mode_00_variant1(c);
            return;
        case 2:
            cam_mode_00_variant2(c);
            return;
        case 3:
            cam_mode_00_variant3(c);
            return;
        case 4:
            cam_mode_00_variant4(c);
            return;
        }
        cam_mode_00_variant0(c);
        return;
    case 1:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_01(c);
        return;
    case 2:
        cam_mode_02(c);
        return;
    case 3:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_03(c);
        cam_publish_heading(c);
        return;
    case 4:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_04(c);
        cam_publish_heading(c);
        return;
    case 5:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_05(c);
        return;
    case 6:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_06(c);
        return;
    case 7:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_07(c);
        return;
    case 8:
    case 9:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_08_09(c);
        return;
    case 10:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_10(c);
        return;
    case 11:
    case 12:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_11_12(c);
        return;
    case 13:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_13(c);
        return;
    case 14:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_14(c);
        return;
    case 15:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_15(c);
        return;
    case 16:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_16(c);
        return;
    case 17:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_17(c);
        return;
    case 18:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_18(c);
        return;
    case 19:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_19(c);
        cam_publish_heading(c);
        return;
    case 20:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_20(c);
        cam_publish_heading(c);
        return;
    case 21:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_21(c);
        cam_publish_heading(c);
        return;
    case 22:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_22(c);
        cam_publish_heading(c);
        return;
    case 23:
        cam_mode_23(c);
        return;
    case 24:
        cam_mode_24_stage_select(c);
        return;
    case 25:
        cam_mode_25(c);
        return;
    case 26:
        cam_mode_26(c);
        return;
    case 27:
        cam_calc_fighter_dir(c);
        cam_calc_side_of_targets(c);
        cam_mode_27_debug_free(c);
        cam_publish_heading(c);
        return;
    case 28:
        cam_mode_28(c);
        return;
    default:
        cam_mode_default(c);
        return;
    }
}

void cam_update_view_matrices(void)
{
    int i;

    if (g_cam_split_flag) {
        for (i = 0; i < 2; i++)
            cam_set_view_matrix(CAM_RECORD(i));
        return;
    }
    cam_set_view_matrix(g_cam_records);
}

/* modes 11 and 12: both fighters in view, the camera swinging round behind the line between them */
void cam_mode_11_12(CamRecord *c)
{
    struct { float vz2, vx2; Vec3 v; Vec3 b; Vec3 a; Vec3 w; } s;
    float d, z, f1, f2, sn, lo, hi;
    int ang, wrapped, gap, step;
    Fighter *p0 = &g_players[0];
    Fighter *p1 = &g_players[1];

    s.v.x = p1->pos.x - p0->pos.x;
    s.v.z = p1->pos.z - p0->pos.z;
    d = p0->pos.y - p1->pos.y;
    s.v.y = (0.0f > d ? p1->pos.y - p0->pos.y : d) + 170.0f;
    s.vx2 = s.v.x;
    s.vz2 = s.v.z;
    c->dist[CAM_GOAL] = math_signed_sqrt(s.vz2 * s.vz2 + s.v.x * s.vx2);
    c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + (float)(g_cam_chara_radius[p0->chara] + g_cam_chara_radius[p1->chara]);
    z = c->dist[CAM_GOAL] * 0.100000024f / 1500.0f + 0.899999976f;
    if (z > 1.0f)
        z = 1.0f;
    c->dist[CAM_GOAL] = c->dist[CAM_GOAL] / 2.0f * c->screen_w / (c->view_w / 2.0f * z);
    d = s.v.y / 2.0f * c->screen_w / (c->view_h / 2.0f * 0.799999952f);
    if (d > c->dist[CAM_GOAL])
        c->dist[CAM_GOAL] = d;
    if (600.0f > c->dist[CAM_GOAL])
        c->dist[CAM_GOAL] = 600.0f;
    c->elev[CAM_GOAL] = 2730;
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
    if (f1 > 0.799999952f) {
        c->elev[CAM_GOAL] = c->elev[CAM_GOAL] + 910;
        c->dist[CAM_GOAL] = c->dist[CAM_GOAL] + 32.0f;
    }
    if (c->dist[CAM_CUR] > c->dist[CAM_GOAL]) {
        d = c->dist[CAM_GOAL] - c->dist[CAM_CUR];
        if ((0.0f > d ? c->dist[CAM_CUR] - c->dist[CAM_GOAL] : d) > 16.0f)
            c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_CUR]) / 32.0f;
    } else {
        d = c->dist[CAM_GOAL] - c->dist[CAM_CUR];
        if ((0.0f > d ? c->dist[CAM_CUR] - c->dist[CAM_GOAL] : d) > 16.0f)
            c->dist[CAM_CUR] = c->dist[CAM_CUR] + (c->dist[CAM_GOAL] - c->dist[CAM_CUR]) / 2.0f;
    }
    if (s.v.z == 0.0f)
        s.v.z = 9.99999997e-07f;
    ang = math_atan2_angle16(s.v.x, s.v.z);
    c->yaw[CAM_GOAL] = (unsigned short)(ang - c->yaw[CAM_CUR] + 0x4000);
    if (c->yaw[CAM_GOAL] >= 0x4000 && !(c->yaw[CAM_GOAL] > 0xC000))
        c->yaw[CAM_GOAL] = ang + 0xC000;
    else
        c->yaw[CAM_GOAL] = ang + 0x4000;
    wrapped = (unsigned short)c->yaw[CAM_GOAL];
    if (c->yaw[CAM_GOAL] - c->yaw[CAM_CUR] > 0x8000)
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] - 0x10000;
    if (c->yaw[CAM_GOAL] - c->yaw[CAM_CUR] < -32768)
        c->yaw[CAM_GOAL] = c->yaw[CAM_GOAL] + 0x10000;
    gap = wrapped - c->yaw[CAM_CUR];
    if (gap < 0)
        gap = c->yaw[CAM_CUR] - wrapped;
    if (gap < 2730 || gap > 13653)
        step = (int)((float)(c->yaw[CAM_GOAL] - c->yaw[CAM_CUR]) / 100.0f);
    else
        step = (wrapped - c->yaw[CAM_CUR] >= 0 ? 1 : -1) * 81;
    c->yaw[CAM_CUR] = c->yaw[CAM_CUR] + step;
    c->yaw[CAM_CUR] = c->yaw[CAM_CUR] & 0xFFFF;
    c->pitch[CAM_GOAL] = 4369;
    c->pitch[CAM_CUR] = c->pitch[CAM_CUR] + (c->pitch[CAM_GOAL] - c->pitch[CAM_CUR]) / 4;
    c->elev[CAM_CUR] = c->elev[CAM_CUR] + (short)(c->elev[CAM_GOAL] - c->elev[CAM_CUR]) / 16;
    sn = math_cos_angle16(c->elev[CAM_CUR]);
    sn = c->dist[CAM_CUR] * sn;
    c->look[CAM_GOAL].x = (p0->pos.x + p1->pos.x) / 2.0f;
    c->look[CAM_GOAL].z = (p0->pos.z + p1->pos.z) / 2.0f;
    d = c->look[CAM_GOAL].x - c->look[CAM_CUR].x;
    if ((0.0f > d ? c->look[CAM_CUR].x - c->look[CAM_GOAL].x : d) > 0.0698131621f)
        c->look[CAM_CUR].x = c->look[CAM_CUR].x + (c->look[CAM_GOAL].x - c->look[CAM_CUR].x) / 8.0f;
    d = c->look[CAM_GOAL].z - c->look[CAM_CUR].z;
    if ((0.0f > d ? c->look[CAM_CUR].z - c->look[CAM_GOAL].z : d) > 0.0698131621f)
        c->look[CAM_CUR].z = c->look[CAM_CUR].z + (c->look[CAM_GOAL].z - c->look[CAM_CUR].z) / 8.0f;
    c->look[CAM_GOAL].y = sn * math_tan_angle16(c->pitch[CAM_CUR]);
    lo = p1->pos.y > p0->pos.y ? p0->pos.y : p1->pos.y;
    if (lo > 200.0f)
        c->look[CAM_GOAL].y = c->look[CAM_GOAL].y + lo;
    hi = p0->pos.y > p1->pos.y ? p0->pos.y : p1->pos.y;
    if (hi > c->look[CAM_GOAL].y + 0.0f)
        c->look[CAM_GOAL].y += hi - c->look[CAM_GOAL].y - 0.0f;
    d = c->look[CAM_GOAL].y - c->look[CAM_CUR].y;
    if ((0.0f > d ? c->look[CAM_CUR].y - c->look[CAM_GOAL].y : d) > 10.0f)
        c->look[CAM_CUR].y = c->look[CAM_CUR].y + (float)((short)(int)(c->look[CAM_GOAL].y - c->look[CAM_CUR].y) / 8);
    c->eye[CAM_GOAL].y = c->look[CAM_CUR].y + c->dist[CAM_CUR] * math_sin_angle16(c->elev[CAM_CUR]);
    c->eye[CAM_CUR].y = c->eye[CAM_CUR].y + (c->eye[CAM_GOAL].y - c->eye[CAM_CUR].y) / 4.0f;
    c->eye[CAM_CUR].x = c->look[CAM_CUR].x + sn * math_sin_angle16(c->yaw[CAM_CUR]);
    c->eye[CAM_CUR].z = c->look[CAM_CUR].z + sn * math_cos_angle16(c->yaw[CAM_CUR]);
    c->roll[CAM_GOAL] = 0;
    c->roll[CAM_CUR] = c->roll[CAM_CUR] + (short)(c->roll[CAM_GOAL] - c->roll[CAM_CUR]) / 10;
    cam_publish_heading(c);
}
