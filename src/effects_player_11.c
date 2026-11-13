/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b9c54-0c0b9ee0) */

extern int FUN_0c0555dc(char *);
extern float math_signed_sqrt(float);
extern int math_atan_angle16(float);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern void obj_spawn_0367e4(char *, int);
extern void fx_spawn_03743c(char *, int);
extern void obj_destroy(char *);

void fx_update_15(char *obj)
{
    char *owner, *target;
    int angle, idx, expired, tick;
    float dz, dx, dy, horiz_sq, component, scale;
    unsigned int eps_bits, bits_4, bits_1;
    float eps, step_xz, step_y;

    if (FUN_0c0555dc(obj) != 0)
        obj[8] = 3;
    switch (obj[8]) {
    case 0:
        owner = *(char **)(obj + 0x1C);
        target = *(char **)(owner + 0x1C);
        eps_bits = 0x358637BD;
        eps = *(float *)&eps_bits;
        dx = *(float *)(target + 32) - *(float *)(owner + 32);
        dy = *(float *)(target + 36) - *(float *)(owner + 36);
        dz = *(float *)(target + 40) - *(float *)(owner + 40);
        if (dx == 0.0f)
            dx = eps;
        if (dy == 0.0f)
            dy = eps;
        if (dz == 0.0f)
            dz = eps;
        horiz_sq = dz * dz + dx * dx;
        angle = math_atan_angle16(-math_signed_sqrt(horiz_sq) / dy);
        if (0.0f > dy)
            angle = angle + 0x8000;
        angle = (unsigned short)(angle + 0x4000);
        *(int *)(obj + 44) = -angle;
        scale = 50.0f;
        component = math_sin_angle16(0x14000 + angle);
        component = component * math_cos_angle16(0x14000 - *(int *)(obj + 48));
        *(float *)(obj + 56) = component * scale;
        *(float *)(obj + 60) = math_cos_angle16(0x14000 - *(int *)(obj + 44)) * scale;
        component = math_sin_angle16(0x14000 - *(int *)(obj + 44));
        component = component * math_sin_angle16(0x14000 - *(int *)(obj + 48));
        *(float *)(obj + 64) = component * scale;
        obj_spawn_0367e4(obj, 1);
        obj[0x2D9] = 2;
        *(short *)(obj + 0xEC) = 60;
        *(short *)(obj + 0xEE) = 0;
        obj[8] = obj[8] + 1;
        /* fall through */
    case 1:
        for (idx = 0; idx < 2; idx++) {
            target = ((char **)(obj + 0x2E0))[idx];
            *(int *)(target + 0x18) = *(int *)(target + 0x18) + 3094;
        }
        expired = obj[0x2D8] != 0;
        if (!expired) {
            *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) - 1;
            expired = *(short *)(obj + 0xEC) == 0;
        }
        if (expired) {
            *(float *)(obj + 32) = *(float *)(obj + 32) - *(float *)(obj + 56);
            *(float *)(obj + 36) = *(float *)(obj + 36) + *(float *)(obj + 60);
            *(float *)(obj + 40) = *(float *)(obj + 40) - *(float *)(obj + 64);
            obj[0x101] = 0;
            obj[0x102] = 0;
            *(short *)(obj + 0xEC) = 10;
            obj[8] = obj[8] + 1;
        } else {
            *(float *)(obj + 32) = *(float *)(obj + 32) + *(float *)(obj + 56);
            *(float *)(obj + 36) = *(float *)(obj + 36) - *(float *)(obj + 60);
            *(float *)(obj + 40) = *(float *)(obj + 40) + *(float *)(obj + 64);
            *(short *)(obj + 0xEE) = *(short *)(obj + 0xEE) + 1;
            tick = *(short *)(obj + 0xEE);
            if (tick % 3 == 0)
                fx_spawn_03743c(obj, 0);
        }
        return;
    case 2:
        bits_4 = 0x3ECCCCCC;
        bits_1 = 0x3DCCCCCC;
        step_xz = *(float *)&bits_4;
        step_y = *(float *)&bits_1;
        *(float *)(obj + 80) = *(float *)(obj + 80) + step_xz;
        *(float *)(obj + 84) = *(float *)(obj + 84) + step_xz;
        *(float *)(obj + 88) = *(float *)(obj + 88) - step_y;
        *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) - 1;
        if (*(short *)(obj + 0xEC) == 0)
            obj[8] = obj[8] + 1;
        return;
    case 3:
        obj_destroy(obj);
        return;
    default:
        return;
    }
}
