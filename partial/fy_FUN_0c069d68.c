
int pl_ryoma_mode04_phase0(int a4)
{
    register int t3;
    register int t6;

    pl_turn_to_opponent(a4);
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    t3 = pl_step_motion(a4);
    t6 = (signed char)t3;
    if ((signed char)t3 != 0) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o38_float *)(a4))->v) = 0.0f;
        (((struct o3C_float *)(a4))->v) = -25.0f;
        (((struct o48_float *)(a4))->v) = -1.0f;
        pl_start_motion(a4, 0x1, 0x36);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t6 = 0xEE;
    }
    return t6;
}
