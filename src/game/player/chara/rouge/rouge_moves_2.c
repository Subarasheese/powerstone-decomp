/* Rouge (char 7) frame hook, move init stubs and attack dispatch (part 2 of 2 of the same module) (0c081130-0c081a46) */

/* named globals (symbols.txt) */
extern char g_rouge_move_update_tab[];
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_start_motion(int, int, int);
struct o274_float { char p[0x274]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
int fx_spawn_03b4d0(int, int, int, int, float);
int FUN_0c0641a0(int, float, float);
int pl_falcon_state_update(int, int, int, int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_landed(int);
int pl_end_action_choose_state(int, int, int, int, int);
int pl_change_state(int, int, int);
int _modls(void);
int thunk_math_mat_get_translate(int, int);

int pl_rouge_move10_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x2);
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_rouge_move11_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x5);
    (((struct oEC_ushort *)(a4))->v) = 0x2;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_rouge_move12_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x0);
    (((struct oEC_ushort *)(a4))->v) = 0x3;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_rouge_move13_init(int a4)
{
    pl_start_motion(a4, 0x1, 0xE);
    (((struct oEC_ushort *)(a4))->v) = 0x4;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_rouge_move14_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x5;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}

int pl_rouge_move15_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1);
}

int pl_rouge_move16_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x2);
}

int pl_rouge_move17_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_rouge_move18_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x5);
}

int pl_rouge_attack_update(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t0;
    register int t1;
    register int t4;
    register float u10;
    register int t22;
    register int t27;
    register int t40;
    register int t43;
    register int t46;
    register int t50;
    register int t55;
    register int t54;
    register int t60;
    register int t25;

    t0 = *(signed char *)((a4 + 0x721F));
    if ((t0 != 0) && (t0 != 2)) {
        if (t0 != 7) {
            return pl_falcon_state_update(a4, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0xA));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    return t1;
                }
                *(int *)((int)stk + 24) = a4;
                if (((((struct oEC_short *)(a4))->v)) != 0) {
                    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
                    t4 = *(signed char *)((a4 + 0x3));
                    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
                    thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), (((int)stk + 0) + 0x4));
                    if (((int)((int)((((struct oEC_short *)(a4))->v)) % (int)0x3)) == 0) {
                        u10 = 0.049999997f;
                        u10 = u10 + 0.0199999996f * (float)((((struct oEE_short *)(a4))->v));
                        fx_spawn_03b4d0(a4, (((int)stk + 0) + 0x4), 0xF, 0x0, u10);
                        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
                    }
                }
                t22 = pl_step_motion(a4);
                if ((signed char)t22 != 0) {
                    t25 = (pl_end_action_choose_state(a4, 0x0, 0x0, 0x0, a4));
                } else {
                    t25 = (pl_apply_motion_translation(a4));
                }
                return t25;
            }
            *(int *)((int)stk + 24) = a4;
            t27 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t27 - 1);
            if ((int)(short)(t27 - 1) > 0) {
                (((struct o2D9_uchar *)(a4))->v) = 0x2;
            }
            if (0.0f > ((((struct o274_float *)(a4))->v))) {
                (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) / 2.0f);
            }
            pl_step_motion(a4);
            if (0.0f > ((((struct o3C_float *)(a4))->v))) {
                t40 = pl_landed(a4);
                if ((signed char)t40 != 0) {
                    if ((*(signed char *)((a4 + 0x108))) != 0) {
                        t43 = pl_get_hit_count_of_opponent(a4);
                        if ((signed char)t43 != 0) {
                            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
                            (((struct oEC_ushort *)(a4))->v) = 0x14;
                            (((struct oEE_ushort *)(a4))->v) = 0x0;
                            pl_start_motion(a4, 0x1, 0xFFFFFF98);
                            (((struct o71A9_uchar *)(a4))->v) = 0x1;
                            (((struct o71A8_uchar *)(a4))->v) = 0x1;
                            t46 = *(signed char *)((a4 + 0xA));
                            *(unsigned char *)((a4 + 0xA)) = (t46 + 0x1);
                            return (t46 + 0x1);
                        }
                        return pl_change_state(a4, 0x6, 0x0);
                    }
                    return pl_change_state(a4, 0x6, 0x0);
                }
            }
            pl_apply_velocity(a4);
            return pl_apply_acceleration(a4);
        }
        *(int *)((int)stk + 24) = a4;
        (((struct o2D9_uchar *)(a4))->v) = 0x2;
        pl_step_motion(a4);
        t50 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t50 - 1);
        t55 = 0xEC;
        if ((int)(short)(t50 - 1) <= 0) {
            (((struct o71BC_uchar *)(a4))->v) = 0x2;
            *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
            FUN_0c0641a0(a4, 35.0f, -3.5f);
            pl_start_motion(a4, 0x1, 0xFFFFFF97);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x2;
            t54 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t54 + 0x1);
            t55 = (t54 + 0x1);
        }
        return t55;
    }
    t60 = *(int *)((((*(signed char *)((a4 + 0x7238))) << 2) + 0xC33785C));
    return ((int (*)(int, int, int, int))(t60))(a4, a5, a6, a7);
}
