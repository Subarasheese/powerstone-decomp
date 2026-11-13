/* state update functions of the player state machine (table 0xC3390D4) (part 3 of 14 of the same module) (0c094562-0c09468c) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_apply_velocity(int);
int pl_apply_acceleration(int);

int pl_state07_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC094488))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0942DC))(a4, a5, a6, a7);
}

int pl_state09_update(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (((((struct oEC_short *)(a4))->v)) != 0) {
        pl_apply_velocity(a4);
        pl_apply_acceleration(a4);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
    }
    t7 = *(signed char *)((a4 + 0xA));
    if (t7 != 0) {
        if (t7 != 1) {
            return t7;
        }
        return ((int (*)(int, int, int, int))(0xC0945EE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09457C))(a4, a5, a6, a7);
}
