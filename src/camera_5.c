/* camera mode 0 variant 2 (0c0dbe30-0c0dbf94) */

struct Vec3i { int x, y, z; };
struct Block52 { int w[13]; };
extern void FUN_0c0e24f0(float *v);
extern void cam_compute_follow(char *ray, char *tmpl);
extern void FUN_0c0d827e(char *ray);

void cam_mode_00_variant2(char *ray)
{
    signed char idx = ray[0];
    char *players = (char *)0xC7E40C4;
    char *eye_player = players + (unsigned short)(idx * 0x72d0);
    char *other_player = players + (unsigned short)((1 - idx) * 0x72d0);
    float eye[3];
    struct Vec3i other_pos;
    float dir[3];
    eye[0] = *(float *)(eye_player + 32);
    eye[1] = *(float *)(eye_player + 36) + 400.0f;
    eye[2] = *(float *)(eye_player + 40);
    other_pos = *(struct Vec3i *)(other_player + 32);
    dir[0] = eye[0] - ((float *)&other_pos)[0];
    dir[2] = eye[2] - ((float *)&other_pos)[2];
    dir[1] = eye[1] - ((float *)&other_pos)[1];
    if (dir[0] == 0.0f && dir[2] == 0.0f && dir[1] == 0.0f) {
        dir[1] = 0.0001f;
        dir[2] = 0.0001f;
        dir[0] = 0.0001f;
    }
    FUN_0c0e24f0(dir);
    eye[0] += 800.0f * dir[0];
    eye[2] += 800.0f * dir[2];
    eye[1] += 800.0f * dir[1];
    if (0.0f > eye[1])
        eye[1] = 0.0f;
    *(struct Vec3i *)(ray + 392) = other_pos;
    *(struct Vec3i *)(ray + 404) = *(struct Vec3i *)eye;
    *(int *)(ray + 416) = (int)(ray + 392);
    *(int *)(ray + 420) = (int)(ray + 404);
    *(struct Block52 *)(ray + 424) = *(struct Block52 *)0xC155394;
    cam_compute_follow(ray, ray + 424);
    FUN_0c0d827e(ray);
}
