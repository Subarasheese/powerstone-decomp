/* camera records (0c0d80d4-0c0d8f10) */

int FUN_0c0d811e(char *obj);
int cam_calc_side_of_targets(char *obj);
int cam_select_mode0_variant(char *obj);
int FUN_0c0d827e(char *obj);
int cam_mode_11_12(char *obj);
int cam_mode_default(char *obj);
int cam_mode_28(char *obj);
int cam_mode_16(char *obj);
int cam_mode_01(char *obj);
int cam_mode_02(char *obj);
int cam_mode_05(char *obj);
int cam_mode_06(char *obj);
int cam_mode_07(char *obj);
int cam_mode_13(char *obj);
int cam_mode_18(char *obj);
int cam_mode_14(char *obj);
int cam_mode_20(char *obj);
int cam_mode_03(char *obj);
int cam_mode_04(char *obj);
int cam_mode_17(char *obj);
int cam_mode_27_debug_free(char *obj);
int cam_mode_15(char *obj);
int cam_mode_08_09(char *obj);
int cam_mode_10(char *obj);
int cam_mode_21(char *obj);
int cam_mode_22(char *obj);
int cam_mode_23(char *obj);
int cam_mode_24_stage_select(char *obj);
int cam_mode_25(char *obj);
int cam_mode_26(char *obj);
int cam_mode_00_variant0(char *obj);
int cam_mode_00_variant1(char *obj);
int cam_mode_00_variant3(char *obj);
int cam_mode_00_variant2(char *obj);
int cam_mode_00_variant4(char *obj);
int cam_mode_19(char *obj);
int cam_set_view_matrix(int, float);

int cam_update_by_mode(char *obj)
{
    int result;

    switch (*(signed char *)(obj + 2)) {
    case 0:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        result = cam_select_mode0_variant(obj);
        if (result == 1) {
            return cam_mode_00_variant1(obj);
        }
        if (result == 2) {
            return cam_mode_00_variant2(obj);
        }
        if (result == 3) {
            return cam_mode_00_variant3(obj);
        }
        if (result == 4) {
            return cam_mode_00_variant4(obj);
        }
        return cam_mode_00_variant0(obj);
    case 1:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_01(obj);
    case 2:
        return cam_mode_02(obj);
    case 3:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_03(obj);
        return FUN_0c0d827e(obj);
    case 4:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_04(obj);
        return FUN_0c0d827e(obj);
    case 5:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_05(obj);
    case 6:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_06(obj);
    case 7:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_07(obj);
    case 8:
    case 9:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_08_09(obj);
    case 10:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_10(obj);
    case 11:
    case 12:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_11_12(obj);
    case 13:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_13(obj);
    case 14:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_14(obj);
    case 15:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_15(obj);
    case 16:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_16(obj);
    case 17:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_17(obj);
    case 18:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        return cam_mode_18(obj);
    case 19:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_19(obj);
        return FUN_0c0d827e(obj);
    case 20:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_20(obj);
        return FUN_0c0d827e(obj);
    case 21:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_21(obj);
        return FUN_0c0d827e(obj);
    case 22:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_22(obj);
        return FUN_0c0d827e(obj);
    case 23:
        return cam_mode_23(obj);
    case 24:
        return cam_mode_24_stage_select(obj);
    case 25:
        return cam_mode_25(obj);
    case 26:
        return cam_mode_26(obj);
    case 27:
        FUN_0c0d811e(obj);
        cam_calc_side_of_targets(obj);
        cam_mode_27_debug_free(obj);
        return FUN_0c0d827e(obj);
    case 28:
        return cam_mode_28(obj);
    default:
        return cam_mode_default(obj);
    }
}

int cam_update_view_matrices(float f4)
{
    register int t1;
    register int t2;

    if ((*(signed char *)0xC7F319E) != 0) {
        t1 = 0x0;
        for (;;) {
            t2 = cam_set_view_matrix(((short)((short)t1 * (short)0x1FC) + 0xC7F29F8), f4);
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        return t2;
    }
    return cam_set_view_matrix(0xC7F29F8, f4);
}
