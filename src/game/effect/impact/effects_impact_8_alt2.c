/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6f5c-0c0b7150) */

extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
struct vec3_float { float x, y, z; };
struct target_view {
    char pad_0[44];
    int field_44;                  /* 44 */
    int yaw;                /* 48 */
    char pad_52[0x7298 - 52];
    float scale;                /* 0x7298 */
};
struct mover_view {
    char pad_0[32];
    struct vec3_float pos;          /* 32 */
    char pad_44[0xEC - 44];
    short orbit_step;             /* 0xEC */
};

void fx_calc_orbit_position(struct mover_view *mover, struct target_view *target)
{
    float scale, radius, off_x, off_z, off_y;
    struct vec3_float *src;

    scale = target->scale;
    radius = (200.0f + 70.0f * (float)mover->orbit_step) * scale;
    off_x = math_cos_angle16(0x14000 - target->yaw) * radius;
    off_z = math_sin_angle16(0x14000 - target->yaw) * radius;
    off_y = math_sin_angle16(target->field_44) * radius;
    src = (struct vec3_float *)((char *)target + 32);
    mover->pos = *src;
    mover->pos.x = mover->pos.x + off_x;
    mover->pos.z = mover->pos.z + off_z;
    mover->pos.y = (mover->pos.y - off_y) + 100.0f * scale;
}
