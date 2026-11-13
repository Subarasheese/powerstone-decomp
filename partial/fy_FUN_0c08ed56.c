
int pl_hitreact_update(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t26;
    register int t32;
    register int t65;
    register int t89;
    register int t95;
    register float u16;
    int t17;
    int t27;
    register float u79;
    int t80;
    int t90;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return pl_hitreact_phase4_update(a4);
                }
                return FUN_0c091eee();
            }
            return pl_hitreact_finish(a4);
        }
        if ((*(signed char *)((a4 + 0x10B))) != 0) {
            t2 = *(signed char *)((a4 + 0x10B));
            (((struct o10B_uchar *)(a4))->v) = (t2 - 1);
            if ((int)(signed char)(t2 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x6)) = 0x0;
            }
        }
        if ((*(signed char *)((a4 + 0x71DD))) != 23) {
            pl_update_hitstop_shake(a4);
        }
        sys_return_zero_098c82();
        if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u16 = (((struct o274_float *)(a4))->v), !(u16 > 0.0f)) && (t17 = *(signed char *)((a4 + 0x71DD)), t17 != 23))) {
            (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
        } else {
            (((struct o71E8_float *)(a4))->v) = 0.0f;
        }
        t26 = pl_hitreact_escape_input(a4);
        if (((signed char)t26 != 0) && (t27 = *(signed char *)((a4 + 0x72AC)), t27 == 0)) {
            (((struct o72AC_uchar *)(a4))->v) = 0x5;
        }
        t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x71DD))) << 2) + 0xC338FF8)))))(a4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        *(unsigned char *)((a4 + 0xD)) = 0x0;
        *(unsigned char *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0xB)) = 0x0;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o71E8_float *)(a4))->v) = 0.0f;
        (((struct o72AC_uchar *)(a4))->v) = 0x0;
        (((struct o72A4_ushort *)(a4))->v) = 0x14;
        (((struct o721A_uchar *)(a4))->v) = 0x0;
        pl_reset_pose(a4);
        pl_timer_arm_forever(a4);
        (((struct o720A_uchar *)(a4))->v) = 0x0;
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            (((struct o710A_uchar *)(a4))->v) = 0x1;
        }
        (((struct o710B_uchar *)(a4))->v) = 0x1;
        (((struct o710C_uchar *)(a4))->v) = 0x1;
        pl_hitreact_calc_hit_side(a4);
        (((struct o7216_uchar *)(a4))->v) = 0x0;
        FUN_0c08e704(a4);
        pl_hitreact_start_vibration(a4);
        FUN_0c08e980(a4);
        FUN_0c08e4bc(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x5))) == 0) {
            if ((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x13))) == 0) {
                FUN_0c0d905e();
            } else {
                cam_request_mode_04((*(signed char *)((((((struct oF8_int *)(a4))->v)) + 0x13))), (*(signed char *)((a4 + 0x3))));
            }
        }
        *(int *)((int)stk + 8) = a4;
        if ((*(signed char *)((a4 + 0x10B))) != 0) {
            t65 = *(signed char *)((a4 + 0x10B));
            (((struct o10B_uchar *)(a4))->v) = (t65 - 1);
            if ((int)(signed char)(t65 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x6)) = 0x0;
            }
        }
        if ((*(signed char *)((a4 + 0x71DD))) != 23) {
            pl_update_hitstop_shake(a4);
        }
        sys_return_zero_098c82();
        if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u79 = (((struct o274_float *)(a4))->v), !(u79 > 0.0f)) && (t80 = *(signed char *)((a4 + 0x71DD)), t80 != 23))) {
            (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
        } else {
            (((struct o71E8_float *)(a4))->v) = 0.0f;
        }
        t89 = pl_hitreact_escape_input(a4);
        if (((signed char)t89 != 0) && (t90 = *(signed char *)((a4 + 0x72AC)), t90 == 0)) {
            (((struct o72AC_uchar *)(a4))->v) = 0x5;
        }
        t95 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x71DD))) << 2) + 0xC338FF8)))))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    }
    if (((((struct o72A4_short *)(a4))->v)) != 0) {
        (((struct o72A4_ushort *)(a4))->v) = (((((struct o72A4_short *)(a4))->v)) - 1);
    }
    return 0x72A4;
}
