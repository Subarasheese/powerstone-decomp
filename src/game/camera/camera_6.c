/* camera mode 0 variant 4 (0c0dbf94-0c0dc27c) */

struct vec3f { float x, y, z; };
struct tmpl52 { int w[13]; };
extern int FUN_0c0e24f0(struct vec3f *);
extern float math_signed_sqrt(float);
extern void cam_compute_follow(unsigned char *, unsigned char *);
extern void FUN_0c0d827e(unsigned char *);
extern char g_cam_records[];
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0e6d00(void);

void cam_mode_00_variant4(unsigned char *shot)
{
    struct vec3f pt_a;
    struct vec3f pt_b;
    struct vec3f dir;
    unsigned char *players = (unsigned char *)0xC7E40C4;
    unsigned char *first = players + (unsigned short)((signed char)shot[0] * 0x72D0);
    unsigned char *second;
    float dist;
    float zoom;
    float dx;
    float dz;

    pt_a.x = *(float *)(first + 32);
    pt_a.z = *(float *)(first + 40);
    pt_a.y = *(float *)(first + 36) + 230.0f;
    second = players + (unsigned short)((1 - (signed char)shot[0]) * 0x72D0);
    pt_b.x = *(float *)(second + 32);
    pt_b.z = *(float *)(second + 40);
    pt_b.y = *(float *)(second + 36) + 200.0f;
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
    dx = *(float *)(players + 32) - *(float *)(players + 0x72D0 + 32);
    dz = *(float *)(players + 40) - *(float *)(players + 0x72D0 + 40);
    dist = math_signed_sqrt(dz * dz + dx * dx);
    *(struct vec3f *)(shot + 392) = pt_b;
    *(struct vec3f *)(shot + 404) = pt_a;
    *(int *)(shot + 416) = (int)(shot + 392);
    *(int *)(shot + 420) = (int)(shot + 404);
    *(struct tmpl52 *)(shot + 424) = *(struct tmpl52 *)0xC1553C8;
    if (500.0f > dist) {
        zoom = 10000.0f / dist;
        if (zoom < 10.0f)
            zoom = 10.0f;
        if (zoom > 100.0f)
            zoom = 100.0f;
    } else {
        zoom = 10.0f;
    }
    *(short *)(shot + 454) = (int)zoom;
    *(short *)(shot + 450) = (int)zoom;
    cam_compute_follow(shot, shot + 424);
    FUN_0c0d827e(shot);
}

void cam_set_shake_ramp(int numer, int denom)
{
    int quot;
    char *blk;

    quot = numer / denom;
    blk = (char *)0xC7F2BF4;
    *(int *)(blk + 0x174) = quot;
    *(int *)(g_cam_records + 0x174) = quot;
    *(int *)(blk + 0x178) = denom;
    *(int *)(g_cam_records + 0x178) = denom;
    *(int *)(blk + 0x17C) = 0;
    *(int *)(g_cam_records + 0x17C) = 0;
    *(int *)(blk + 0x180) = 0;
    *(int *)(g_cam_records + 0x180) = 0;
}

int cam_reset_shake(int a4, int a5, int a6, int a7)
{
    register int t8;
    register int t9;
    register int t10;

    switch (a6) {
    case 0:
        (((struct o0_uint *)0xC7F2B6C)->v) = (FUN_0c0e6d00());
        (((struct o4_uint *)0xC7F2B6C)->v) = t8;
        (((struct o8_uint *)0xC7F2B6C)->v) = t9;
        (((struct oC_uint *)0xC7F2B6C)->v) = t10;
        break;
    case 1:
        (((struct o0_uint *)0xC7F2B6C)->v) = a4;
        (((struct o4_uint *)0xC7F2B6C)->v) = a5;
        (((struct o8_uint *)0xC7F2B6C)->v) = a6;
        (((struct oC_uint *)0xC7F2B6C)->v) = a7;
        break;
    case 2:
        (((struct o0_uint *)0xC7F2B6C)->v) = a4;
        (((struct o4_uint *)0xC7F2B6C)->v) = a5;
        (((struct o8_uint *)0xC7F2B6C)->v) = a6;
        (((struct oC_uint *)0xC7F2B6C)->v) = a7;
        break;
    default:
        (((struct o8_uint *)0xC7F2B6C)->v) = 0x63;
        break;
    }
    (((struct o0_uint *)0xC7F2D68)->v) = ((((struct o0_int *)0xC7F2B6C)->v));
    (((struct o4_uint *)0xC7F2D68)->v) = ((((struct o4_int *)0xC7F2B6C)->v));
    (((struct o8_uint *)0xC7F2D68)->v) = ((((struct o8_int *)0xC7F2B6C)->v));
    (((struct oC_uint *)0xC7F2D68)->v) = ((((struct oC_int *)0xC7F2B6C)->v));
    return 0x180;
}
