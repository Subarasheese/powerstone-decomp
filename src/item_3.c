/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05a96c-0c05ae26) */

struct at_102_uchar { char pad[0x102]; unsigned char field_102; };
struct at_105_uchar { char pad[0x105]; unsigned char field_105; };
struct at_106_uchar { char pad[0x106]; unsigned char field_106; };
struct at_1c_float { char pad[0x1C]; float field_1c; };
struct at_20_float { char pad[0x20]; float field_20; };
struct at_24_float { char pad[0x24]; float field_24; };
struct at_2d9_uchar { char pad[0x2D9]; unsigned char field_2d9; };
struct at_2da_uchar { char pad[0x2DA]; unsigned char field_2da; };
struct at_2e0_int { char pad[0x2E0]; int field_2e0; };
struct at_2e4_int { char pad[0x2E4]; int field_2e4; };
struct at_2f4_int { char pad[0x2F4]; int field_2f4; };
struct at_30c_uchar { char pad[0x30C]; unsigned char field_30c; };
struct at_30d_uchar { char pad[0x30D]; unsigned char field_30d; };
struct at_30f_uchar { char pad[0x30F]; unsigned char field_30f; };
struct at_4_float { char pad[0x4]; float field_4; };
struct at_44_float { char pad[0x44]; float field_44; };
struct at_48_float { char pad[0x48]; float field_48; };
struct at_4c_float { char pad[0x4C]; float field_4c; };
struct at_8_float { char pad[0x8]; float field_8; };
struct at_c_float { char pad[0xC]; float field_c; };
struct at_f0_short { char pad[0xF0]; short field_f0; };
struct at_f0_ushort { char pad[0xF0]; unsigned short field_f0; };
struct at_f2_ushort { char pad[0xF2]; unsigned short field_f2; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0c63c4(int, int);
struct V12 { int x, y, z; };

int FUN_0c05a96c(int slot, int kind)
{
    int saved[2];
    register int kind_idx;
    register int new_obj;
    register int result;
    register int slot_idx;
    register int tmp25;
    register int tmp32;
    register int tmp33;
    register int kind_code;
    register int child_ptr;
    register int loop_i;
    register int child_off;
    register int anim_frame;
    register int tmp26;
    register int tmp30;
    register int tmp31;
    register int result_alt;
    register int child_mask;
    register int child;

    *(unsigned char *)(((int)saved + 4)) = slot;
    *(unsigned char *)(((int)saved + 0)) = kind;
    kind_idx = *(signed char *)(((int)saved + 0));
    new_obj = obj_create(0x3, 0x1, (*(int *)(((kind_idx << 2) + 0xC3361D4))));
    result = new_obj;
    if (new_obj != 0) {
        *(unsigned char *)((new_obj + 0x0)) = 0x1;
        *(unsigned char *)((new_obj + 0x1)) = 0x1;
        *(unsigned char *)((new_obj + 0x3)) = 0x2;
        *(unsigned short *)((new_obj + 0x6)) = 0xF;
        *(unsigned char *)((new_obj + 0x5)) = 0x19;
        *(unsigned char *)((new_obj + 0x8)) = 0x0;
        *(unsigned char *)((new_obj + 0x9)) = 0x0;
        *(unsigned char *)((new_obj + 0xA)) = 0x0;
        *(unsigned char *)((new_obj + 0xB)) = 0x0;
        *(unsigned char *)((new_obj + 0xD)) = (*(signed char *)(((int)saved + 4)));
        (((struct at_30d_uchar *)(new_obj))->field_30d) = 0x10;
        (((struct at_30f_uchar *)(new_obj))->field_30f) = 0x2;
        *(unsigned int *)((new_obj + 0x10)) = (*(int *)(((kind_idx << 2) + 0xC33618C)));
        *(unsigned char *)((new_obj + 0x4)) = 0x6;
        (((struct at_30c_uchar *)(new_obj))->field_30c) = (*(signed char *)(((int)saved + 0)));
        (((struct at_102_uchar *)(new_obj))->field_102) = (*(signed char *)(((kind_idx << 2) + 0xC335F2A)));
        (((struct at_105_uchar *)(new_obj))->field_105) = 0x1;
        (((struct at_106_uchar *)(new_obj))->field_106) = 0x1;
        (((struct at_f0_ushort *)(new_obj))->field_f0) = (*(signed char *)(((((*(signed char *)((new_obj + 0x30C))) << 2) + 0xC336120) + 0x0)));
        if (((((struct at_f0_short *)(new_obj))->field_f0)) != 0) {
            anim_frame = (*(signed char *)(((0xC336120 + ((*(signed char *)((new_obj + 0x30C))) << 2)) + 0x1)));
        } else {
            anim_frame = (*(short *)(((0xC336120 + ((*(signed char *)((new_obj + 0x30C))) << 2)) + 0x2)));
        }
        (((struct at_f2_ushort *)(new_obj))->field_f2) = anim_frame;
        (((struct at_2d9_uchar *)(new_obj))->field_2d9) = 0x0;
        (((struct at_2da_uchar *)(new_obj))->field_2da) = 0x1;
        slot_idx = *(signed char *)(((int)saved + 4));
        *(struct V12 *)(new_obj + 32) = *(struct V12 *)(0xC33CA80 + (short)(72 * *(signed char *)(0xC7F302C + 37)) + (signed char)(slot_idx * 24));
        *(struct V12 *)(new_obj + 44) = *(struct V12 *)(0xC33CA80 + (short)(72 * *(signed char *)(0xC7F302C + 37)) + (signed char)(slot_idx * 24) + 12);
        *(struct V12 *)(new_obj + 80) = *(struct V12 *)0xC336174;
        FUN_0c06233a(((((struct at_2e0_int *)(new_obj))->field_2e0)), 0xC664988, (*(signed char *)(((kind_idx << 2) + 0xC335F28))));
        *(unsigned char *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x0)) = 0x1;
        kind_code = *(signed char *)((new_obj + 0x30C));
        if ((unsigned int)(kind_code - 1) >= (unsigned int)0xE) {
            *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
            result_alt = 0xF;
        } else {
            switch (((kind_code - 1) << 1)) {
                case 0:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct at_2e4_int *)(new_obj))->field_2e4)), 0xC4CFA68, 0x79);
                    *(unsigned char *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x0)) = 0x0;
                    *(unsigned short *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x2)) = 0x1F;
                    (((struct at_4_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_4) = 0.0f;
                    (((struct at_8_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_8) = 12.3999996f;
                    (((struct at_c_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_c) = 76.0f;
                    (((struct at_1c_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_1c) = 0.0f;
                    (((struct at_20_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_20) = 0.0f;
                    (((struct at_24_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_24) = 0.0f;
                    child_mask = 0x24;
                }
                    break;
                case 2:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x1F;
                    (((struct at_1c_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_1c) = 1.5f;
                    (((struct at_20_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_20) = 1.5f;
                    (((struct at_24_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_24) = 1.5f;
                    child_mask = 0x24;
                }
                    break;
                case 4:
                case 6:
                case 8:
                case 10:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    (((struct at_8_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_8) = 50.0f;
                    child_mask = 0x8;
                }
                    break;
                case 12:
                {
                    FUN_0c0c63c4(new_obj, 0x2);
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x20F;
                    (((struct at_44_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_44) = 1.0f;
                    (((struct at_48_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_48) = 1.0f;
                    (((struct at_4c_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_4c) = 1.0f;
                    child_mask = 0x4C;
                }
                    break;
                case 14:
                {
                    FUN_0c0c63c4(new_obj, 0x1);
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x20F;
                    (((struct at_44_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_44) = 1.0f;
                    (((struct at_48_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_48) = 1.0f;
                    (((struct at_4c_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_4c) = 1.0f;
                    child_mask = 0x4C;
                }
                    break;
                case 16:
                {
                    FUN_0c0c63c4(new_obj, 0x0);
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x20F;
                    (((struct at_44_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_44) = 1.0f;
                    (((struct at_48_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_48) = 1.0f;
                    (((struct at_4c_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_4c) = 1.0f;
                    child_mask = 0x4C;
                }
                    break;
                case 18:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct at_2e4_int *)(new_obj))->field_2e4)), 0xC4CFA68, 0x84);
                    *(unsigned char *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x2)) = 0x3F;
                    (((struct at_1c_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_1c) = 0.199999988f;
                    (((struct at_20_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_20) = 0.199999988f;
                    (((struct at_24_float *)(((((struct at_2e4_int *)(new_obj))->field_2e4))))->field_24) = 0.199999988f;
                    child_mask = 0x24;
                }
                    break;
                case 20:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    child_mask = 0xF;
                }
                    break;
                case 22:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0x1F;
                    (((struct at_8_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_8) = -30.0f;
                    (((struct at_1c_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_1c) = 1.0f;
                    (((struct at_20_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_20) = 0.199999988f;
                    (((struct at_24_float *)(((((struct at_2e0_int *)(new_obj))->field_2e0))))->field_24) = 1.0f;
                    child_mask = 0x24;
                }
                    break;
                case 24:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct at_2e4_int *)(new_obj))->field_2e4)), 0xC664988, 0x13);
                    *(unsigned char *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x0)) = 0x1;
                    child_ptr = (((struct at_2e4_int *)(new_obj))->field_2e4);
                    *(unsigned short *)((child_ptr + 0x2)) = 0xF;
                    loop_i = 0x2;
                    child_off = 0x8;
                    for (;;) {
                        if ((int)loop_i >= (int)0x5) {
                            break;
                        }
                        FUN_0c06233a((*(int *)((((0x2E0 + new_obj) + child_off) + 0x0))), 0xC664988, 0x14);
                        child_ptr = 0x2E0;
                        child_ptr = (child_ptr + new_obj);
                        child_ptr = (child_ptr + child_off);
                        child = (*(int *)((child_ptr + 0x0)));
                        child_ptr = 0x2E0;
                        *(unsigned char *)((child + 0x0)) = 0x0;
                        child_ptr = (child_ptr + new_obj);
                        child_ptr = (child_ptr + child_off);
                        child = (*(int *)((child_ptr + 0x0)));
                        child_off = (child_off + 0x4);
                        *(unsigned short *)((child + 0x2)) = 0xF;
                        loop_i = (loop_i + 0x1);
                    }
                    FUN_0c06233a(((((struct at_2f4_int *)(new_obj))->field_2f4)), 0xC664988, 0x19);
                    *(unsigned short *)((((((struct at_2f4_int *)(new_obj))->field_2f4)) + 0x2)) = 0x29;
                    (((struct at_8_float *)(((((struct at_2f4_int *)(new_obj))->field_2f4))))->field_8) = 7.0f;
                    (((struct at_c_float *)(((((struct at_2f4_int *)(new_obj))->field_2f4))))->field_c) = 93.1719971f;
                    child_mask = 0xC;
                }
                    break;
                default:
                {
                    *(unsigned short *)((((((struct at_2e0_int *)(new_obj))->field_2e0)) + 0x2)) = 0xF;
                    FUN_0c06233a(((((struct at_2e4_int *)(new_obj))->field_2e4)), 0xC664988, 0x1E);
                    *(unsigned char *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct at_2e4_int *)(new_obj))->field_2e4)) + 0x2)) = 0x219;
                    child_mask = 0x219;
                }
                    break;
            }
            result_alt = child_mask;
        }
        result = result_alt;
    }
    return result;
}
