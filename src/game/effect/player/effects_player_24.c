/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0bda68-0c0bdf9c) */

struct at_101_uchar { char pad[0x101]; unsigned char field_101; };
struct at_102_uchar { char pad[0x102]; unsigned char field_102; };
struct at_2e0_int { char pad[0x2E0]; int field_2e0; };
struct at_2e4_int { char pad[0x2E4]; int field_2e4; };
struct at_38_float { char pad[0x38]; float field_38; };
struct at_3c_float { char pad[0x3C]; float field_3c; };
struct at_40_float { char pad[0x40]; float field_40; };
struct at_50_float { char pad[0x50]; float field_50; };
struct at_54_float { char pad[0x54]; float field_54; };
struct at_58_float { char pad[0x58]; float field_58; };
struct at_ec_ushort { char pad[0xEC]; unsigned short field_ec; };
struct at_ee_ushort { char pad[0xEE]; unsigned short field_ee; };
struct at_f0_ushort { char pad[0xF0]; unsigned short field_f0; };
struct at_f2_ushort { char pad[0xF2]; unsigned short field_f2; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
struct V12 { int x, y, z; };
int thunk_math_mat_get_translate(int, int);

int fx_spawn_garuda_fan_shot(int owner, int variant)
{
    int frame[2];
    register int new_obj;
    register int result;
    register int owner_idx;
    register int owner_idx2;
    register int owner_idx3;
    register int variant_val;

    *(unsigned char *)(((int)frame + 4)) = variant;
    new_obj = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x2, 0x0);
    result = new_obj;
    if (new_obj == 0) {
    } else {
        *(unsigned char *)((new_obj + 0x0)) = 0x1;
        *(unsigned char *)((new_obj + 0x3)) = (*(signed char *)((owner + 0x3)));
        *(unsigned char *)((new_obj + 0x1)) = 0x1;
        *(unsigned short *)((new_obj + 0x6)) = 0x1F;
        *(unsigned char *)((new_obj + 0x5)) = 0x19;
        *(unsigned int *)((new_obj + 0x10)) = 0xC0BDC20;
        *(struct V12 *)(new_obj + 32) = *(struct V12 *)(owner + 32);
        *(struct V12 *)(new_obj + 44) = *(struct V12 *)(owner + 44);
        (((struct at_40_float *)(new_obj))->field_40) = 0.0f;
        (((struct at_3c_float *)(new_obj))->field_3c) = 0.0f;
        (((struct at_38_float *)(new_obj))->field_38) = 0.0f;
        (((struct at_58_float *)(new_obj))->field_58) = 1.5f;
        (((struct at_54_float *)(new_obj))->field_54) = 1.5f;
        (((struct at_50_float *)(new_obj))->field_50) = 1.5f;
        owner_idx = *(signed char *)((owner + 0x3));
        *(unsigned int *)(((int)frame + 0)) = ((unsigned short)((unsigned short)owner_idx * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)owner_idx * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)owner_idx * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (new_obj + 0x20));
        *(unsigned char *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x41F;
        owner_idx2 = *(signed char *)((owner + 0x3));
        FUN_0c06233a(((((struct at_2e0_int *)(new_obj))->field_2e0)), ((signed char)((((owner_idx2 << 1) + owner_idx2) << 2) << 1) + 0xC6002D0), 0x0);
        (((struct at_40_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_40) = 1.0f;
        *(unsigned char *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x2)) = 0x41F;
        owner_idx3 = *(signed char *)((owner + 0x3));
        FUN_0c06233a(((((struct at_2e4_int *)(new_obj))->field_2e4)), ((signed char)((((owner_idx3 << 1) + owner_idx3) << 2) << 1) + 0xC6002D0), 0x1);
        (((struct at_40_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_40) = 1.0f;
        *(unsigned int *)((new_obj + 0x1C)) = owner;
        (((struct at_ec_ushort *)(new_obj))->field_ec) = 0xB4;
        *(unsigned char *)((new_obj + 0x8)) = 0x0;
        (((struct at_101_uchar *)(new_obj))->field_101) = 0x1;
        (((struct at_102_uchar *)(new_obj))->field_102) = 0x2;
        obj_set_record_char(new_obj, 0x70);
        (((struct at_ee_ushort *)(new_obj))->field_ee) = 0x1;
        (((struct at_f0_ushort *)(new_obj))->field_f0) = 0x5;
        (((struct at_f2_ushort *)(new_obj))->field_f2) = 0x14;
        variant_val = *(signed char *)(((int)frame + 4));
        switch (variant_val) {
        case 0:
            break;
        case 1:
            *(unsigned int *)((new_obj + 0x30)) = (unsigned short)((*(int *)((new_obj + 0x30))) + 0x1555);
            break;
        case 2:
            *(unsigned int *)((new_obj + 0x30)) = (unsigned short)((*(int *)((new_obj + 0x30))) + 0xEAAB);
            break;
        }
        result = variant_val;
    }
    return result;
}
