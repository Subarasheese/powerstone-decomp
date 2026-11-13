/* state update functions of the player state machine (table 0xC3390D4) (part 2 of 14 of the same module) (0c093d88-0c094562) */

struct o2DC_int { char p[0x2DC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_step_motion(int);
int pl_check_dual_button_input(int);
int pl_check_power_form_attack_input(int, int, int);
int pl_try_dual_button_action(int, int, int);
int pl_start_power_form_attack(int, int, int);
int pl_change_state(int, int, int);
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c09e89a(int, int, int);
int pl_end_action_choose_state(int);

int pl_state04_update(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    pl_step_motion(v0_1);
    v0_0 = (v0_1);
    if ((((((struct oEC_short *)(v0_1))->v)) != 0)) goto L_C093DCA;
    v0_1 = (signed char)(pl_check_dual_button_input(v0_0)) == 0;
    if (v0_1) goto L_C093DB2;
    v0_2 = pl_try_dual_button_action(v0_0, R5, R6);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 != 0)) goto L_C093DF0;
    L_C093DB2:;
    v0_1 = (signed char)(pl_check_power_form_attack_input(v0_0, R5, R6)) == 0;
    if (v0_1) goto L_C093DCA;
    v0_2 = pl_start_power_form_attack(v0_0, R5, R6);
    v0_1 = ((signed char)v0_2);
    if (((signed char)v0_2 != 0)) goto L_C093DF0;
    L_C093DCA:;
    if (((((((struct o2DC_int *)(v0_0))->v)) & 4) == 0)) goto L_C093DE2;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    v0_1 = (0xEC);
    if (((int)(short)(v0_2 + 0x1) < (int)0x4)) goto L_C093DF0;
    L_C093DE2:;
    return pl_change_state(v0_0, 0x5, 0x0);
    L_C093DF0:;
    return v0_1;
}

int pl_state05_update(int a4, int a5, int a6, int a7)
{
    register int t1;

    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
    t1 = *(signed char *)((a4 + 0xA));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        return ((int (*)(int, int, int, int))(0xC09413A))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC093DF6))(a4, a5, a6, a7);
}

int pl_state_land_update(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c09e89a(a4, a5, a6);
    if ((signed char)t0 != 0) {
        return pl_change_state(a4, 0x1F, 0x1);
    }
    pl_step_motion(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0xEC;
}
