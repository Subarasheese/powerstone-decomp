/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ad15c-0c0ae1b4) */

struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
int snd_play_side_se(int, int);
int stage_type01_calc_throw_vec(int);
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int obj_set_mode_owner(int, int, int);
int FUN_0c0ad46e(void);
struct Vec3 { int x, y, z; };
struct at_101_uchar { char pad[0x101]; unsigned char field_101; };
struct at_102_uchar { char pad[0x102]; unsigned char field_102; };
struct at_105_uchar { char pad[0x105]; unsigned char field_105; };
struct at_106_uchar { char pad[0x106]; unsigned char field_106; };
struct at_107_uchar { char pad[0x107]; unsigned char field_107; };
struct at_2d9_uchar { char pad[0x2D9]; unsigned char field_2d9; };
struct at_38_float { char pad[0x38]; float field_38; };
struct at_3c_float { char pad[0x3C]; float field_3c; };
struct at_40_float { char pad[0x40]; float field_40; };
struct at_ec_ushort { char pad[0xEC]; unsigned short field_ec; };
struct at_ee_ushort { char pad[0xEE]; unsigned short field_ee; };
struct at_f0_ushort { char pad[0xF0]; unsigned short field_f0; };
int obj_set_record(int, int);
int stage_type01_spawn_ground_fx(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int stage_obj_on_break(int);
int stage_type01_mode_03(void);

int FUN_0c0ad408(int a4);
int stage_type01_mode_05_held(int a4);
int stage_type01_mode_02(int a4);

int FUN_0c0ad408(int a4)
{
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t1 + 0x3)));
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    stage_type01_calc_throw_vec(a4);
    (((struct o118_uint *)(a4))->v) = (((short)((short)(*(signed char *)((t1 + 0x71F1))) * (short)0xDC0) + (0x300 + t1)) + 0x580);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) & 0xFBFF);
    return snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
}

int stage_type01_mode_05_held(int a4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c0ad46e();
        }
    } else {
        FUN_0c0ad408(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int stage_type01_init_move_vector(int obj)
{
    register int tbl_idx;
    register int field_off;
    register int row_base;
    register float speed;

    *(unsigned char *)((obj + 0x8)) = ((*(signed char *)((obj + 0x8))) + 0x1);
    *(unsigned char *)((obj + 0x3)) = (*(signed char *)(((*(int *)((obj + 0x1C))) + 0x3)));
    (((struct at_ec_ushort *)(obj))->field_ec) = 0x0;
    (((struct at_ee_ushort *)(obj))->field_ee) = 0x0;
    (((struct at_f0_ushort *)(obj))->field_f0) = 0x0;
    (((struct at_2d9_uchar *)(obj))->field_2d9) = 0x0;
    tbl_idx = *(signed char *)((obj + 0x314));
    (((struct at_101_uchar *)(obj))->field_101) = (*(signed char *)((((((tbl_idx << 2) + tbl_idx) << 1) + 0xC33BFD8) + 0x4)));
    (((struct at_102_uchar *)(obj))->field_102) = (*(signed char *)((((((tbl_idx << 2) + tbl_idx) << 1) + 0xC33BFD8) + 0x5)));
    obj_set_record(obj, (*(signed char *)((((((tbl_idx << 2) + tbl_idx) << 1) + 0xC33BFD8) + 0x3))));
    (((struct at_105_uchar *)(obj))->field_105) = 0x0;
    (((struct at_106_uchar *)(obj))->field_106) = 0x0;
    (((struct at_107_uchar *)(obj))->field_107) = 0x0;
    if ((*(signed char *)((((((tbl_idx << 2) + tbl_idx) << 1) + 0xC33BFD8) + 0x7))) != 0) {
        tbl_idx = *(signed char *)(((*(int *)((obj + 0x1C))) + 0x4));
        field_off = 0x14;
        row_base = (0xC33C05C + ((((tbl_idx << 1) + tbl_idx) << 2) << 1));
    } else {
        tbl_idx = *(signed char *)(((*(int *)((obj + 0x1C))) + 0x4));
        field_off = 0x10;
        row_base = (0xC33C05C + ((((tbl_idx << 1) + tbl_idx) << 2) << 1));
    }
    speed = *(float *)((row_base + field_off));
    (((struct at_38_float *)(obj))->field_38) = ((math_cos_angle16(((-(*(int *)(((*(int *)((obj + 0x1C))) + 0x30)))) + 0x14000))) * speed);
    (((struct at_3c_float *)(obj))->field_3c) = 0.0f;
    (((struct at_40_float *)(obj))->field_40) = ((math_sin_angle16(((-(*(int *)(((*(int *)((obj + 0x1C))) + 0x30)))) + 0x14000))) * speed);
    *(struct Vec3 *)(obj + 0x44) = *(struct Vec3 *)0xC339FA8;
    return stage_type01_spawn_ground_fx(obj);
}

int stage_type01_mode_02(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    stage_obj_on_break(a4);
    (((struct o105_uchar *)(a4))->v) = 0x1;
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    return obj_set_mode_owner(a4, 0x3, 0x2);
}

int stage_type01_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if ((unsigned int)t0 < (unsigned int)0xD) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC0AD352))(a4, a5, a6, a7);
            }
            case 2:
            {
                return ((int (*)(int, int, int, int))(0xC0ADD40))(a4, a5, a6, a7);
            }
            case 4:
            {
                return stage_type01_mode_02(a4);
            }
            case 6:
            {
                return stage_type01_mode_03();
            }
            case 8:
            {
                return ((int (*)(int, int, int, int))(0xC0ADFD2))(a4, a5, a6, a7);
            }
            case 10:
            {
                return stage_type01_mode_05_held(a4);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC0AD75E))(a4, a5, a6, a7);
            }
            case 14:
            {
                return ((int (*)(int, int, int, int))(0xC0AD762))(a4, a5, a6, a7);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC0AD79C))(a4, a5, a6, a7);
            }
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC0AD7A0))(a4, a5, a6, a7);
            }
            case 20:
            {
                return ((int (*)(int, int, int, int))(0xC0ADB42))(a4, a5, a6, a7);
            }
            case 22:
            {
                return ((int (*)(int, int, int, int))(0xC0ADCC8))(a4, a5, a6, a7);
            }
            default:
            {
                return ((int (*)(int, int, int, int))(0xC0AD984))(a4, a5, a6, a7);
            }
        }
    }
    return t0;
}
