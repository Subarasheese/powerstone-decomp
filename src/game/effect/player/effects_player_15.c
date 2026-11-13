/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bbaf8-0c0bc1ec) */

struct field_101_uchar { char p[0x101]; unsigned char field_101; };
struct field_102_uchar { char p[0x102]; unsigned char field_102; };
struct field_1c_float { char p[0x1C]; float field_1c; };
struct field_20_float { char p[0x20]; float field_20; };
struct field_24_float { char p[0x24]; float field_24; };
struct field_28_float { char p[0x28]; float field_28; };
struct field_2e4_int { char p[0x2E4]; int field_2e4; };
struct field_50_float { char p[0x50]; float field_50; };
struct field_54_float { char p[0x54]; float field_54; };
struct field_58_float { char p[0x58]; float field_58; };
struct field_f2_ushort { char p[0xF2]; unsigned short field_f2; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);

int fx_spawn_jack_projectile_alt(int owner, int variant)
{
    int frame_buf[5];
    register int effect;
    register int result;
    register int char_id;
    register int variant_b;
    register int tbl_off;
    register float radius;
    register float cos_val;
    register float new_x;
    register float radius_b;
    register float sin_val;
    register float new_z;
    register int idx;
    register int char_id_b;
    register int idx_off;

    *(unsigned char *)(((int)frame_buf + 8)) = variant;
    effect = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x3, 0x0);
    result = effect;
    if (effect != 0) {
        *(unsigned char *)((effect + 0x0)) = 0x1;
        *(unsigned char *)((effect + 0x1)) = 0x1;
        *(unsigned char *)((effect + 0x3)) = (*(signed char *)((owner + 0x3)));
        *(unsigned int *)((effect + 0x10)) = 0xC0BBD02;
        *(unsigned int *)((effect + 0x1C)) = owner;
        *(unsigned short *)((effect + 0x6)) = 0x1F;
        *(unsigned char *)((effect + 0x5)) = 0x19;
        *(unsigned int *)((effect + 0x2C)) = (*(int *)((owner + 0x2C)));
        *(unsigned int *)((effect + 0x30)) = (*(int *)((owner + 0x30)));
        *(unsigned int *)((effect + 0x34)) = (*(int *)((owner + 0x34)));
        (((struct field_50_float *)(effect))->field_50) = 1.0f;
        (((struct field_54_float *)(effect))->field_54) = 1.0f;
        (((struct field_58_float *)(effect))->field_58) = 1.0f;
        char_id = *(signed char *)((owner + 0x3));
        *(unsigned int *)(((int)frame_buf + 4)) = ((unsigned short)((unsigned short)char_id * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)char_id * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)char_id * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (effect + 0x20));
        *(int *)((int)frame_buf + 0) = (effect + 0x20);
        variant_b = *(signed char *)(((int)frame_buf + 8));
        *(unsigned int *)(((int)frame_buf + 4)) = ((unsigned char)variant_b << 2);
        *(unsigned int *)(((int)frame_buf + 16)) = (((unsigned char)variant_b << 2) + 0xC33C3F8);
        tbl_off = *(int *)(((int)frame_buf + 4));
        radius = *(float *)(((((unsigned char)variant_b << 2) + 0xC33C3F8) + 0x0));
        *(unsigned int *)(((int)frame_buf + 12)) = (tbl_off + 0xC33C438);
        cos_val = math_cos_angle16(((int)(((*(float *)(((tbl_off + 0xC33C438) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        new_x = ((((struct field_20_float *)(effect))->field_20));
        new_x = new_x + cos_val * radius;
        (((struct field_20_float *)(effect))->field_20) = new_x;
        *(int *)((int)frame_buf + 0) = (effect + 0x28);
        radius_b = *(float *)(((*(int *)(((int)frame_buf + 16))) + 0x0));
        sin_val = math_sin_angle16(((int)(((*(float *)(((*(int *)(((int)frame_buf + 12))) + 0x0))) * 65536.0f) / 360.0f) + 0x4000));
        new_z = ((((struct field_28_float *)(effect))->field_28));
        new_z = new_z + sin_val * radius_b;
        (((struct field_28_float *)(effect))->field_28) = new_z;
        (((struct field_f2_ushort *)(effect))->field_f2) = (unsigned char)(*(signed char *)(((int)frame_buf + 8)));
        (((struct field_101_uchar *)(effect))->field_101) = 0x1;
        (((struct field_102_uchar *)(effect))->field_102) = 0x1;
        obj_set_record_char(effect, 0x78);
        idx = 0x0;
        for (;;) {
            char_id_b = *(signed char *)((owner + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + effect) + (idx << 2)) + 0x0))), ((signed char)((((char_id_b << 1) + char_id_b) << 2) << 1) + 0xC6002D0), (idx + 0x2));
            *(unsigned char *)(((*(int *)((((0x2E0 + effect) + (idx << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + effect) + (idx << 2)) + 0x0))) + 0x2)) = 0x1F;
            (((struct field_1c_float *)((*(int *)((((0x2E0 + effect) + (idx << 2)) + 0x0)))))->field_1c) = 1.0f;
            idx_off = (idx << 2);
            idx = (idx + 0x1);
            (((struct field_20_float *)((*(int *)((((0x2E0 + effect) + idx_off) + 0x0)))))->field_20) = 1.0f;
            (((struct field_24_float *)((*(int *)(((idx_off + (0x2E0 + effect)) + 0x0)))))->field_24) = 2.0f;
            if ((int)idx >= (int)0x3) {
                break;
            }
        }
        *(unsigned char *)((((((struct field_2e4_int *)(effect))->field_2e4)) + 0x0)) = 0x0;
        result = 0x2E4;
    }
    return result;
}
