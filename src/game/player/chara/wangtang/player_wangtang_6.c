/* character 2 (Wang Tang) (0c06f8a8-0c070b46) */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_end_action_choose_state(int);

int FUN_0c06f8a8(int a4)
{
    register int t1;

    (((struct o3C_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    pl_start_motion(a4, 0x1, 0x60);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int pl_wangtang_wait_anim_end_d(int a4)
{
    register int t0;

    t0 = pl_step_motion(a4);
    if ((signed char)t0 != 0) {
        return pl_end_action_choose_state(a4);
    }
    return (signed char)t0;
}

int pl_wangtang_attack_kind68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        if (t0 != 9) {
                                            return t0;
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0704F4))(a4, a5, a6, a7);
                                    }
                                    return ((int (*)(int, int, int, int))(0xC070480))(a4, a5, a6, a7);
                                }
                                return ((int (*)(int, int, int, int))(0xC070414))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC07030A))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0700C4))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC06FF9C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC06FC84))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06FB22))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06FAA0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06FA2E))(a4, a5, a6, a7);
}
