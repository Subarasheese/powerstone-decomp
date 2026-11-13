/* character 1 (Ryoma) (0c06d3d4-0c06d8b0) */

struct o3C_float { char p[0x3C]; float v; };
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int pl_end_action_choose_state(int);

int pl_ryoma_special2_phase4(int a4)
{
    register int t2;

    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t2 = pl_landed(a4);
    if ((signed char)t2 != 0) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}

int pl_ryoma_special2_dispatch(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC336DF0 + ((*(signed char *)((a4 + 0xA))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int pl_ryoma_special3_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC06D570))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06D4F8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06D42E))(a4, a5, a6, a7);
}

int pl_ryoma_victim_dispatch(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06D7D2))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06D66A))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06D630))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06D5DC))(a4, a5, a6, a7);
}
