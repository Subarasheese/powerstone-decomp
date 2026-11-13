/* character 1 (Ryoma) (0c069a98-0c06ce50) */

struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_apply_motion_translation(int);
int pl_end_action_choose_state(int);

int pl_ryoma_update_action_9(int a4)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;

    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
    if (((*(signed char *)((a4 + 0x108))) != 0) && ((t2 = *(int *)((a4 + 0x1C)), t3 = *(signed char *)((t2 + 0x9)), t3 == 1) && ((t4 = *(int *)((a4 + 0x1C)), t5 = *(signed char *)((t4 + 0x71DD)), t5 == 0) && ((t6 = *(signed char *)((a4 + 0xA)), t6 == 0) && (t7 = (((struct oEC_short *)(a4))->v), (int)t7 >= (int)0x17))))) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        pl_start_motion(a4, 0x1, 0x1B);
    }
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_end_action_choose_state(a4);
    }
    return 0x71AA;
}
