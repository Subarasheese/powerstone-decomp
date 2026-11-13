/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c05203c-0c052150) */

int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };

int ai_op61(int a4, float f4)
{

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    ai_calc_goal_angle(v0_0, f4);
    v0_6 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    v0_7 = ((unsigned char)v0_6);
    v0_3 = (v0_0);
    v0_1 = (0xC3673EE);
    v0_2 = (0xC366F40);
    v0_4 = (0x254);
    v0_0 = (0xC3673EC);
    v0_5 = (0x0);
    if (((unsigned char)v0_6 == 0)) goto L_C052074;
    if ((v0_7 == 1)) goto L_C052088;
    if ((v0_7 == 2)) goto L_C0520A8;
    L_C0520C4:;
    return v0_7;
    L_C0520A8:;
    *(unsigned short *)((v0_0 + 0x0)) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_2) + 0xC)) = (*(int *)0xC3673E8);
    v0_7 = (0xC3673E8);
    goto L_C0520C4;
    L_C052088:;
    *(unsigned short *)((v0_0 + 0x0)) = v0_5;
    v0_7 = (0x100);
    if (((*(signed char *)(((*(int *)((v0_3 + 0x1C))) + 0x100))) != 0)) goto L_C0520C4;
    v0_3 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_2) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_2) + 0x0))) + 0x1);
    goto L_C0520A8;
    L_C052074:;
    *(unsigned short *)((v0_0 + 0x0)) = v0_5;
    v0_6 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_6 * (short)v0_4) + v0_2) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_6 * (short)v0_4) + v0_2) + 0x0))) + 0x1);
    goto L_C052088;
}

int ai_op65(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((((((struct o0_int *)0xC3673E8)->v)) + 0x0));
    if ((unsigned char)(*(signed char *)0xC3673F1) == (unsigned short)t0) {
        t1 = *(signed char *)0xC3673F2;
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 == (unsigned short)t0) {
            t0 = *(signed char *)0xC3673EE;
            t1 = (((struct o0_int *)0xC3673E8)->v);
            (((struct o0_uint *)0xC3673E8)->v) = (t1 + 0x2);
            *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = (t1 + 0x2);
            (((struct oB_uchar *)0xC3673E8)->v) = (*(signed char *)0xC3673F1);
            (((struct oC_uchar *)0xC3673E8)->v) = (*(signed char *)0xC3673F2);
            t2 = (ai_clear_op_state());
        }
        t0 = t2;
    }
    (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
    return t0;
}
