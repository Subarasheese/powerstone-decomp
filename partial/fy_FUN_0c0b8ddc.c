
void fx_spawn_ryoma_spray(char *a, int b)
{
    char *o;
    char *p;
    char *blk;
    int i;

    o = obj_create(1, 1, 1, 0);
    if (o == 0)
        return;
    o[0] = 1;
    o[3] = a[3];
    o[1] = 1;
    *(int *)(o + 28) = *(int *)(a + 28);
    *(short *)(o + 6) = 31;
    o[5] = 25;
    *(void (**)(void))(o + 16) = fx_update_ryoma_spray;
    p = (char *)0x0C7E40C4 + (unsigned short)(a[3] * 29392);
    thunk_math_mat_get_translate(p + 0x300 + (short)(p[0x71F1] * 3520), o + 32);
    *(S12 *)(o + 44) = *(S12 *)(a + 44);
    *(int *)(o + 48) = *(int *)(o + 48) + ((int *)0x0C33C300)[b];
    *(int *)(o + 44) = *(int *)(o + 44) + ((int *)0x0C33C314)[b];
    *(float *)(o + 56) = math_cos_angle16(0x14000 - *(int *)(o + 48)) * 15.0f;
    *(float *)(o + 64) = math_sin_angle16(0x14000 - *(int *)(o + 48)) * 15.0f;
    *(float *)(o + 60) = math_sin_angle16(-*(int *)(o + 44)) * 15.0f;
    *(float *)(o + 88) = 1.0f;
    *(float *)(o + 84) = 1.0f;
    *(float *)(o + 80) = 1.0f;
    *(float *)(o + 68) = 15.0f;
    o[257] = 8;
    o[258] = 1;
    obj_set_record_char(o);
    for (i = 0; i < o[0x2DC]; i++) {
        blk = ((char **)(o + 0x2E0))[i];
        *blk = 1;
        *(short *)(blk + 2) = 31;
        FUN_0c06233a(blk, (char *)0x0C6002D0 + (signed char)(a[3] * 24), 16);
        *(float *)(blk + 36) = 0.599999964f;
        *(float *)(blk + 32) = 0.599999964f;
        *(float *)(blk + 28) = 0.599999964f;
        if ((b & 1) == 0)
            *(int *)(blk + 24) = -8192;
        else
            *(int *)(blk + 24) = 8192;
    }
}
