/* AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai (0c052150-0c052708) */

struct o2A_short { char p[0x2A]; short v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_angle_to_pad_dir(int);
float math_rand_float(void);
int _modlu(int);
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o6C_int { char p[0x6C]; int v; };
int ai_calc_angle_to_target(void);
struct o0_int { int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_calc_angle_to_goal_point(int);

float ai_op66(int a4, int a5, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R7;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = ((int (*)(int, int, float))ai_calc_goal_angle)(v0_0, a5, f4);
    *(unsigned short *)(((int)stk + 0)) = (ai_angle_to_pad_dir((0x4000 + v0_1)));
    *(unsigned short *)(((int)stk + 4)) = (ai_angle_to_pad_dir((0xFFFFC000 + v0_1)));
    v0_7 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    v0_5 = ((unsigned char)v0_7);
    v0_1 = (0x0);
    v0_2 = (v0_0);
    v0_4 = (0xC3673EC);
    v0_0 = (0xC366F40);
    v0_3 = (0xC3673EE);
    v0_6 = (0x254);
    if (((unsigned char)v0_7 == 0)) goto L_C0521AE;
    if ((v0_5 == 1)) goto L_C052204;
    if ((v0_5 == 2)) goto L_C052200;
    if ((v0_5 == 3)) goto L_C052204;
    if ((v0_5 == 4)) goto L_C052280;
    L_C05229C:;
    return F0;
    L_C052280:;
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_3 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)0xC3673E8);
    v0_5 = (0xC3673E8);
    goto L_C05229C;
    L_C052204:;
    *(unsigned short *)((v0_4 + 0x0)) = v0_1;
    if ((((((struct o2A_short *)(((short)((short)(unsigned char)(*(signed char *)((v0_3 + 0x0))) * (short)0x254) + v0_0)))->v)) == 0)) goto L_C05222A;
    (((struct o2DC_uint *)(v0_2))->v) = (((((struct o2DC_int *)(v0_2))->v)) | (unsigned short)(*(short *)(((int)stk + 0))));
    v0_5 = (0x2DC);
    L_C05223A:;
    v0_1 = *(signed char *)((v0_3 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C05229C;
    L_C05222A:;
    v0_1 = *(short *)(((int)stk + 4));
    (((struct o2DC_uint *)(v0_2))->v) = (((((struct o2DC_int *)(v0_2))->v)) | (unsigned short)v0_1);
    v0_5 = ((unsigned short)v0_1);
    goto L_C05223A;
    L_C052200:;
    *(unsigned short *)((v0_4 + 0x0)) = v0_1;
    goto L_C05223A;
    L_C0521AE:;
    *(unsigned short *)((v0_4 + 0x0)) = v0_1;
    v0_7 = *(signed char *)((v0_3 + 0x0));
    w0_0 = math_rand_float();
    v0_5 = (0xC052274);
    v0_5 = ((((short)((short)(unsigned char)v0_7 * (short)v0_6) + v0_0) + 0x2A));
    F0 = (w0_0);
    w0_2 = (2.14748365e+09f);
    w0_1 = ((w0_0 * 255.0f));
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > (w0_0 * 255.0f))) goto L_C0521DC;
    w0_1 = ((w0_1 - (w0_2 + w0_2)));
    L_C0521DC:;
    *(unsigned short *)((v0_5 + 0x0)) = ((int)((unsigned int)(int)w0_1 % (unsigned int)0x2));
    v0_5 = *(signed char *)((v0_3 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_5 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_5 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    FPUL_ = ((int)w0_1);
    goto L_C052204;
}

int ai_op67(int a4, float f4)
{
    int stk[2];

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_3 = a4;
    v0_0 = *(int *)0xC3673E8;
    *(unsigned int *)0xC3673E8 = (v0_0 + 0x2);
    v0_0 = *(short *)((((v0_0 + 0x2) - 2) + 0x0));
    v0_8 = ai_calc_goal_angle(v0_3, f4);
    v0_9 = *(signed char *)0xC3673EE;
    v0_1 = (0x4C);
    v0_5 = (v0_8);
    v0_7 = (v0_0);
    v0_4 = (v0_3);
    v0_0 = (0xC366F40);
    v0_2 = (0xC3673EE);
    v0_3 = (((short)((short)(unsigned char)v0_9 * (short)0x254) + 0xC366F40));
    v0_6 = (0xC3673E8);
    if (((int)(unsigned short)((v0_8 - ((((struct o4C_short *)(((short)((short)(unsigned char)v0_9 * (short)0x254) + 0xC366F40)))->v))) + 0x1000) >= (int)0x2000)) goto L_C052302;
    v0_5 = ((*(int *)((v0_3 + v0_1))));
    L_C052304:;
    *(unsigned short *)(((int)stk + 4)) = (ai_angle_to_pad_dir(v0_5));
    *(unsigned short *)(((int)stk + 0)) = (ai_angle_to_pad_dir((0x8000 + v0_5)));
    v0_5 = (0x1);
    v0_8 = (0xC3673EC);
    if (!(((*(signed char *)((((((struct o6C_int *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0)))->v)) + 0x1))) != 0))) goto L_C052490;
    v0_11 = *(signed char *)((v0_0 + (short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254)));
    v0_1 = ((unsigned char)v0_11);
    v0_12 = (0x254);
    v0_3 = (0x0);
    v0_9 = ((unsigned short)(*(short *)(((int)stk + 0))));
    v0_10 = ((unsigned short)(*(short *)(((int)stk + 4))));
    if (((unsigned char)v0_11 == 0)) goto L_C05236E;
    if ((v0_1 == 1)) goto L_C05240C;
    if ((v0_1 == 2)) goto L_C052434;
    if ((v0_1 == 3)) goto L_C052438;
    if ((v0_1 != 4)) goto L_C05236A;
    goto L_C052490;
    L_C052490:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_5;
    v0_1 = ai_clear_op_state();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)((v0_6 + 0x0)));
    v0_1 = (v0_1);
    L_C0524A8:;
    return v0_1;
    L_C05236A:;
    goto L_C0524A8;
    L_C052438:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_3;
    if ((((((struct o2A_short *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0)))->v)) == 0)) goto L_C052458;
    v0_1 = (0x2DC);
    v0_3 = ((((((struct o2DC_int *)(v0_4))->v)) | v0_10));
    L_C05245E:;
    *(unsigned int *)((v0_4 + v0_1)) = v0_3;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    v0_3 = *(short *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x1C));
    *(unsigned short *)((((short)((short)(unsigned char)v0_1 * (short)0x254) + v0_0) + 0x1C)) = (v0_3 - 1);
    v0_1 = ((unsigned short)(v0_3 - 1));
    if (((unsigned short)(v0_3 - 1) != 0)) goto L_C0524A8;
    L_C05247A:;
    v0_2 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C0524A8;
    L_C052458:;
    v0_1 = (0x2DC);
    v0_3 = ((((((struct o2DC_int *)(v0_4))->v)) | v0_9));
    goto L_C05245E;
    L_C052434:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_3;
    goto L_C05247A;
    L_C05240C:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_3;
    if ((((((struct o2A_short *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)v0_12) + v0_0)))->v)) == 0)) goto L_C05242A;
    v0_1 = (0x2DC);
    v0_3 = ((((((struct o2DC_int *)(v0_4))->v)) | v0_10));
    L_C052430:;
    *(unsigned int *)((v0_4 + v0_1)) = v0_3;
    goto L_C05247A;
    L_C05242A:;
    v0_1 = (0x2DC);
    v0_3 = ((((((struct o2DC_int *)(v0_4))->v)) | v0_9));
    goto L_C052430;
    L_C05236E:;
    *(unsigned short *)((v0_8 + 0x0)) = v0_3;
    if (((short)v0_7 != 0)) goto L_C052378;
    v0_7 = (v0_5);
    L_C052378:;
    v0_6 = ((short)v0_7);
    if (((int)(short)v0_7 <= 0)) goto L_C0523CC;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0x1C)) = v0_7;
    (((struct o2A_ushort *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0)))->v) = v0_5;
    L_C0523EE:;
    v0_5 = *(signed char *)((v0_4 + 0x71BA));
    v0_1 = (v0_5);
    if ((v0_5 != 31)) goto L_C05247A;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0x0)) = 0x3;
    goto L_C052438;
    L_C0523CC:;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0x1C)) = (-v0_6);
    (((struct o2A_ushort *)(((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0)))->v) = v0_3;
    goto L_C0523EE;
    L_C052302:;
    *(unsigned int *)((v0_3 + v0_1)) = v0_5;
    goto L_C052304;
}

int ai_op68(void)
{

    register int R1;
    register int R2;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = *(signed char *)((0xC366F40 + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)));
    v0_1 = ((unsigned char)v0_4);
    v0_2 = (0xC3673EE);
    v0_0 = (0xC366F40);
    v0_3 = (0x254);
    v0_5 = (0xC3673EC);
    v0_6 = (0x0);
    if (((unsigned char)v0_4 == 0)) goto L_C052504;
    if ((v0_1 == 1)) goto L_C05251A;
    if ((v0_1 == 2)) goto L_C052556;
    L_C052572:;
    return v0_1;
    L_C052556:;
    *(unsigned short *)((v0_5 + 0x0)) = 0x1;
    ai_clear_op_state();
    *(unsigned int *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)0x254) + v0_0) + 0xC)) = (*(int *)0xC3673E8);
    v0_1 = (0xC3673E8);
    goto L_C052572;
    L_C05251A:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_6;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    v0_4 = *(short *)((((short)((short)(unsigned char)v0_1 * (short)v0_3) + v0_0) + 0x1C));
    *(unsigned short *)((((short)((short)(unsigned char)v0_1 * (short)v0_3) + v0_0) + 0x1C)) = (v0_4 - 1);
    v0_1 = ((unsigned short)(v0_4 - 1));
    if (((unsigned short)(v0_4 - 1) == 0)) goto L_C052540;
    v0_3 = ai_calc_angle_to_target();
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0x2000)) goto L_C052572;
    L_C052540:;
    v0_2 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0)) = ((*(signed char *)((((short)((short)(unsigned char)v0_2 * (short)0x254) + v0_0) + 0x0))) + 0x1);
    goto L_C052572;
    L_C052504:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_6;
    *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (short)v0_3) + v0_0) + 0x1C)) = 0xA;
    v0_1 = (0xA);
    goto L_C052540;
}

int ai_op69(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = ai_calc_goal_angle(a4, f4);
    t1 = ai_calc_angle_to_goal_point(a4);
    if ((int)(t0 - t1) > 0) {
        if ((int)(t0 - t1) <= (int)0x4000) {
            t2 = (ai_angle_to_pad_dir((0x5555 + t1)));
        } else {
            t2 = (ai_angle_to_pad_dir(t0));
        }
        t3 = t2;
    } else {
        t2 = (0xFFFFAAAB + t1);
        if ((int)(t1 - t0) > (int)0x4000) {
            t2 = t0;
        }
        t3 = (ai_angle_to_pad_dir(t2));
    }
    (((struct o2DC_uint *)(a4))->v) = (((((struct o2DC_int *)(a4))->v)) | (unsigned short)t3);
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    ai_clear_op_state();
    t0 = *(signed char *)0xC3673EE;
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)t0 * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    return (short)((short)(unsigned char)t0 * (short)0x254);
}
