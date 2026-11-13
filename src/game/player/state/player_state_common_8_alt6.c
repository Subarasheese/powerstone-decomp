/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c065cb4-0c06734c) */

struct fld2DC_int { char pad[0x2DC]; int value; };
struct fld3C_float { char pad[0x3C]; float value; };
struct fld48_float { char pad[0x48]; float value; };
struct fld71BC_uchar { char pad[0x71BC]; unsigned char value; };
struct fld71CC_int { char pad[0x71CC]; int value; };
struct fld71CC_uint { char pad[0x71CC]; unsigned int value; };
struct fld7236_uchar { char pad[0x7236]; unsigned char value; };
struct fld7248_int { char pad[0x7248]; int value; };
struct fld7248_short { char pad[0x7248]; short value; };
struct fld7248_uint { char pad[0x7248]; unsigned int value; };
struct fld728C_float { char pad[0x728C]; float value; };
struct fldEE_short { char pad[0xEE]; short value; };
struct fldEE_ushort { char pad[0xEE]; unsigned short value; };
struct fldF0_short { char pad[0xF0]; short value; };
struct fldF0_ushort { char pad[0xF0]; unsigned short value; };
struct fldF2_short { char pad[0xF2]; short value; };
struct fldF2_ushort { char pad[0xF2]; unsigned short value; };
int FUN_0c0634b4(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int FUN_0c09c782(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_stick_dir_angle(int);
int pl_landed(int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int obj_set_mode_owner(int, int);

int pl_mode15_cls03_f1(int player, int arg1)
{
    int stack_args[3];
    register int tmp5;
    register int tmp22;
    register int tmp40;
    register int tmp45;
    register int tmp54;
    register int tmp56;
    register int tmp68;
    int tmp1;

    if (((((((struct fld2DC_int *)(player))->value)) & 0x600) == 0) && (tmp1 = (((struct fldF2_short *)(player))->value), tmp1 == 0)) {
        (((struct fld48_float *)(player))->value) = ((((struct fld728C_float *)(player))->value));
        tmp5 = FUN_0c09c782(player);
        if ((signed char)tmp5 != 0) {
            FUN_0c0634b4(player);
            (((struct fld7236_uchar *)(player))->value) = 0x0;
            (((struct fld71CC_uint *)(player))->value) = 0x0;
        } else {
            *(volatile signed char *)((player + 0x3));
            obj_set_mode_owner(((((struct fld71CC_int *)(player))->value)), 0x5);
        }
        pl_end_action_choose_state(player, 0x0, 0x0, 0x0, *(int *)((int)stack_args + 0), *(int *)((int)stack_args + 0 + 4), *(int *)((int)stack_args + 0 + 8), *(int *)((int)stack_args + 0 + 12), *(int *)((int)stack_args + 0 + 16), *(int *)((int)stack_args + 0 + 20), *(int *)((int)stack_args + 0 + 24), *(int *)((int)stack_args + 0 + 28));
    } else {
        if ((((((struct fld2DC_int *)(player))->value)) & 240) != 0) {
            (((struct fld7248_uint *)(player))->value) = (unsigned short)(((pl_stick_dir_angle(player)) + (*(short *)0xC7F31E0)) - (*(int *)((player + 0x30))));
            if ((((((struct fld7248_int *)(player))->value)) & 0x8000) != 0) {
                (((struct fld7248_uint *)(player))->value) = (((((struct fld7248_int *)(player))->value)) | 0xFFFF0000);
            }
            tmp22 = (((struct fld7248_int *)(player))->value);
            if (((int)tmp22 > (int)0x16C) || ((int)tmp22 < (int)0xFFFFFE94)) {
                if ((int)((((struct fld7248_int *)(player))->value)) > 0) {
                    (((struct fld7248_uint *)(player))->value) = 0x16C;
                } else {
                    (((struct fld7248_uint *)(player))->value) = 0xFFFFFE94;
                }
                *(unsigned int *)((player + 0x30)) = (unsigned short)((*(int *)((player + 0x30))) + ((((struct fld7248_short *)(player))->value)));
            }
        }
        tmp40 = (((struct fldEE_short *)(player))->value);
        (((struct fldEE_ushort *)(player))->value) = (tmp40 - 1);
        if ((int)(short)(tmp40 - 1) < 0) {
            (((struct fldEE_ushort *)(player))->value) = 0x4;
        }
        pl_step_motion(player);
        pl_apply_motion_translation(player);
        tmp45 = FUN_0c09c782(player);
        if ((signed char)tmp45 != 0) {
            FUN_0c0634b4(player);
            (((struct fld7236_uchar *)(player))->value) = 0x0;
            (((struct fld71CC_uint *)(player))->value) = 0x0;
            (((struct fld48_float *)(player))->value) = ((((struct fld728C_float *)(player))->value));
            pl_end_action_choose_state(player, 0x0, 0x0, 0x0, *(int *)((int)stack_args + 0), *(int *)((int)stack_args + 0 + 4), *(int *)((int)stack_args + 0 + 8), *(int *)((int)stack_args + 0 + 12), *(int *)((int)stack_args + 0 + 16), *(int *)((int)stack_args + 0 + 20), *(int *)((int)stack_args + 0 + 24), *(int *)((int)stack_args + 0 + 28));
        }
    }
    if (!(((((struct fld3C_float *)(player))->value)) > 0.0f)) {
        tmp54 = pl_landed(player);
        if ((signed char)tmp54 != 0) {
            pl_start_motion(player, 0x2, 0xF2);
            (((struct fld71BC_uchar *)(player))->value) = 0x0;
            *(unsigned char *)((player + 0xB)) = 0x0;
            return 0x0;
        }
        tmp56 = (((struct fldF0_short *)(player))->value);
        (((struct fldF0_ushort *)(player))->value) = (tmp56 - 1);
        if ((short)(tmp56 - 1) == 0) {
            (((struct fld48_float *)(player))->value) = (((((struct fld48_float *)(player))->value)) * 10.0f);
        }
    } else {
        tmp68 = (((struct fldF0_short *)(player))->value);
        (((struct fldF0_ushort *)(player))->value) = (tmp68 - 1);
        if ((short)(tmp68 - 1) == 0) {
            (((struct fld48_float *)(player))->value) = (((((struct fld48_float *)(player))->value)) * 10.0f);
        }
    }
    if (((((struct fldF2_short *)(player))->value)) != 0) {
        (((struct fldF2_ushort *)(player))->value) = (((((struct fldF2_short *)(player))->value)) - 1);
    }
    pl_apply_velocity(player);
    return pl_apply_acceleration(player);
}
