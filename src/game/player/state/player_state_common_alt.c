/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c063318-0c0641a0) */

int pl_mode06_enter(int a4, int a5, int a6, int a7);
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
int obj_set_mode_owner(int, int, int);
int FUN_0c0638a0(int);
int FUN_0c0638fe(int);
int FUN_0c063a12(int);
int FUN_0c063b38(int);
int FUN_0c063bb8(int);
int pl_wait_anim_end(int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int obj_touched_by_slot(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c063fd2(int);
int FUN_0c064014(int);
int FUN_0c064056(int);

int FUN_0c0634b4(int a4)
{
    if (((((struct o71CC_int *)(a4))->v)) != 0) {
        (((struct o7236_uchar *)(a4))->v) = 0x0;
        obj_set_mode_owner(((((struct o71CC_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x3))));
        (((struct o71CC_uint *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int pl_mode04_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return pl_wait_anim_end(a4);
                    }
                    return FUN_0c063bb8(a4);
                }
                return FUN_0c063b38(a4);
            }
            return FUN_0c063a12(a4);
        }
        return FUN_0c0638fe(a4);
    }
    return FUN_0c0638a0(a4);
}


int pl_mode06_update(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c064056(a4);
        }
        return FUN_0c064014(a4);
    }
    return FUN_0c063fd2(a4);
}
