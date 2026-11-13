/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C_float { char p[0x3C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int);
int pl_landed(int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c091260(int a4);
int FUN_0c092370(int a4);
int FUN_0c079b30(int a4);

int FUN_0c091260(int a4)
{
    register int t5;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_step_motion(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        return 0xEC;
    }
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t5 = pl_landed(a4);
        if ((signed char)t5 != 0) {
            return pl_change_state(a4, 0x6, 0x0);
        }
    }
    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    return pl_step_motion(a4);
}

int FUN_0c092370(int a4)
{
    register int t4;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    pl_step_motion(a4);
    if (0.0f > ((((struct o3C_float *)(a4))->v))) {
        t4 = pl_landed(a4);
        if ((signed char)t4 != 0) {
            return pl_change_state(a4, 0xF, 0x1);
        }
        return (signed char)t4;
    }
    return 0x3C;
}

int FUN_0c079b30(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, 0x0);
    }
    return 0x71AA;
}
