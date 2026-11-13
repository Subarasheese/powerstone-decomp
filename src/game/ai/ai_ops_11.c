/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c0510f0-0c051360) */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
struct o2A_short { char p[0x2A]; short v; };
struct o2DC_int { char p[0x2DC]; int v; };
int ai_calc_goal_angle(int);
int ai_calc_dist_to_goal_obj(int);
int ai_angle_to_pad_dir(int);
float math_rand_float(void);

int ai_op60(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC3673E8)->v);
    (((struct o0_uint *)0xC3673E8)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t2 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
                t0 = ai_clear_op_state();
                *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0xC)) = ((((struct o0_int *)0xC3673E8)->v));
                t2 = t0;
            }
            t0 = t2;
        } else {
            (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
            t2 = *(signed char *)0xC3673EE;
            t3 = *(short *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x1A));
            *(unsigned short *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x1A)) = (t3 - 1);
            if ((unsigned short)(t3 - 1) == 0) {
                t2 = *(signed char *)0xC3673EE;
                *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
            }
            t0 = (unsigned short)(t3 - 1);
        }
        t2 = t0;
    } else {
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254) + 0xC366F40) + 0x1A)) = t1;
        t0 = *(signed char *)0xC3673EE;
        *(unsigned char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
        (((struct o4_ushort *)0xC3673E8)->v) = 0x0;
        t0 = *(signed char *)0xC3673EE;
        t1 = *(short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x1A));
        *(unsigned short *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x1A)) = (t1 - 1);
        if ((unsigned short)(t1 - 1) == 0) {
            t0 = *(signed char *)0xC3673EE;
            *(unsigned char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)t0 * (short)0x254) + 0xC366F40) + 0x0))) + 0x1);
        }
        t2 = (unsigned short)(t1 - 1);
    }
    return t2;
}

int ai_op47(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
    register float F0;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = a4;
    v0_0 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_0 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((v0_0 + 0x2) - 2) + 0x0)));
    *(unsigned short *)(((int)stk + 4)) = (ai_calc_dist_to_goal_obj(v0_3));
    v0_8 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    v0_5 = ((unsigned char)v0_8);
    v0_4 = (0xC3673EC);
    v0_2 = (v0_3);
    v0_1 = (0xC3673EE);
    v0_0 = (0xC366F40);
    v0_6 = (0xC3673E8);
    v0_7 = (0x254);
    if (((unsigned char)v0_8 == 0)) goto L_C051218;
    if ((v0_5 == 1)) goto L_C051268;
    if ((v0_5 != 2)) goto L_C0511FA;
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    v0_2 = ai_clear_op_state();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)((v0_6 + 0x0)));
    v0_5 = (v0_2);
    L_C051318:;
    return v0_5;
    L_C0511FA:;
    goto L_C051318;
    L_C051268:;
    *(unsigned short *)((v0_4 + 0x0)) = 0x0;
    v0_3 = ((((struct o2A_short *)(((short)((short)(unsigned char)(*(signed char *)((v0_1 + 0x0))) * (short)0x254) + v0_0)))->v)) == 0;
    v0_6 = ((ai_calc_goal_angle(v0_2)));
    if (v0_3) goto L_C0512A0;
    ai_angle_to_pad_dir((0x4000 + v0_6));
    v0_4 = ((ai_angle_to_pad_dir((0x5555 + v0_6))));
    v0_3 = (0x2AAA);
    L_C0512B4:;
    v0_7 = *(short *)(((int)stk + 4));
    v0_8 = *(short *)(((int)stk + 0));
    v0_9 = (ai_angle_to_pad_dir((v0_3 + v0_6)));
    v0_5 = (v0_7);
    v0_3 = (v0_8);
    v0_6 = (v0_7);
    v0_9 = v0_9;
    if (((int)v0_8 >= (int)(v0_7 - 10))) goto L_C0512D4;
    v0_5 = (0x2DC);
    v0_7 = ((((((struct o2DC_int *)(v0_2))->v)) | (unsigned short)v0_9));
    L_C0512E2:;
    *(unsigned int *)((v0_2 + v0_5)) = v0_7;
    goto L_C051318;
    L_C0512D4:;
    if (((int)v0_3 <= (int)(v0_6 + 0xA))) goto L_C0512E6;
    v0_5 = (0x2DC);
    v0_7 = ((((((struct o2DC_int *)(v0_2))->v)) | (unsigned short)v0_4));
    goto L_C0512E2;
    L_C0512E6:;
    v0_1 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C051318;
    L_C0512A0:;
    ai_angle_to_pad_dir((0xC000 + v0_6));
    v0_4 = ((ai_angle_to_pad_dir((0xAAAA + v0_6))));
    v0_3 = (0xD555);
    goto L_C0512B4;
    L_C051218:;
    *(unsigned short *)((v0_4 + 0x0)) = 0x0;
    v0_5 = *(signed char *)((v0_1 + 0x0));
    w0_0 = math_rand_float();
    v0_5 = ((((short)((short)(unsigned char)v0_5 * (short)v0_7) + v0_0) + 0x2A));
    w0_1 = (2.14748365e+09f);
    w0_2 = ((w0_0 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_0 * 255.0f))) goto L_C051248;
    w0_2 = ((w0_2 - (w0_1 + w0_1)));
    L_C051248:;
    *(unsigned short *)((v0_5 + 0x0)) = ((unsigned int)(int)w0_2 % 2u);
    v0_3 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_3 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C051268;
}
