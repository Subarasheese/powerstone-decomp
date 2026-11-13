/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

typedef struct { int x, y, z; } Vec12;
extern void math_vec3_add(Vec12 *d, Vec12 *player, Vec12 *origin);
extern char *fx_spawn_burst_slot(int player, int origin, int c, Vec12 *vecs, void *p2, void *p1);

void fx_spawn_eight_point_effect(int player, Vec12 *origin)
{
    Vec12 vecs[8];
    char *effect;
    int mode, flag_off, mode_off, tbl_idx, i;
    float scale;

    player = (signed char)player;
    flag_off = (*(int *)0xC7F3014 & 2) << 1;
    mode = *(signed char *)(0xC7E40C8 + (unsigned short)(player * 29392));
    if (mode == 4 || mode == 5 || mode == 8 || mode == 9)
        mode_off = 12;
    else
        mode_off = 0;
    tbl_idx = (signed char)flag_off;
    for (i = 0; i < 8; i++) {
        vecs[i] = *origin;
        math_vec3_add(&vecs[i], &vecs[i], (Vec12 *)(0xC149F44 + (short)(((signed char)mode_off + tbl_idx) * 12)));
        tbl_idx++;
    }
    effect = fx_spawn_burst_slot(player, 8, 2, vecs, (void *)(0xC149EB4 + (unsigned char)(flag_off * 12)),
                     (void *)(0xC14A110 + (unsigned char)((*(unsigned char *)0xC7F3014 & 7) * 12)));
    if (effect != 0) {
        mode = *(signed char *)(0xC7E40C8 + (unsigned short)(player * 29392));
        if (mode == 4 || mode == 5 || mode == 8 || mode == 9)
            scale = 1.19999993f;
        else
            scale = 1.0f;
        *(float *)(effect + 776 + 16) = scale;
        *(short *)(effect + 236) = *(signed char *)(0xC7E4340 + (unsigned short)(player * 29392));
    }
}
