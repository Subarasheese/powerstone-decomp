/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03bcac-0c03c1ec) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c03bdb2(int);
int obj_destroy(int);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);
int FUN_0c03c0fa(int);

int fx_tick_03bcac(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
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
    v0_2 = a4;
    v0_1 = *(int *)((v0_2 + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_0 = (v0_2);
    if ((v0_1 != 0)) goto L_C03BE62;
    v0_7 = ((obj_destroy(v0_0)));
    L_C03C01E:;
    return v0_7;
    L_C03BE62:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    v0_7 = (v0_1);
    if ((v0_1 == 0)) goto L_C03BE70;
    if ((v0_7 == 1)) goto L_C03BE7C;
    v0_7 = ((obj_destroy(v0_0)));
    goto L_C03C01E;
    L_C03BE7C:;
    FUN_0c03bdb2(v0_0);
    v0_1 = (0xA);
    if ((((((struct oEC_short *)(v0_0))->v)) != 20)) goto L_C03BE98;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C03BF2A:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_7 = (0xC03C014);
    v0_2 = ((0x2E0 + v0_0));
    v0_3 = (0x0);
    v0_4 = ((0x2E0 + v0_0));
    v0_5 = ((0x2E0 + v0_0));
    w0_0 = (0.049999997f);
    w0_1 = (0.0f);
    w0_2 = (2.0f);
    L_C03BF48:;
    v0_6 = ((v0_3 << 2));
    if (((*(signed char *)(((*(int *)((((0x2E0 + v0_0) + (v0_3 << 2)) + 0x0))) + 0x0))) == 0)) goto L_C03BFDC;
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o44_float *)(v0_7))->v) = (((((struct o44_float *)(v0_7))->v)) - w0_0);
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o48_float *)(v0_7))->v) = (((((struct o48_float *)(v0_7))->v)) - w0_0);
    v0_7 = *(int *)((((0x2E0 + v0_0) + v0_6) + 0x0));
    (((struct o4C_float *)(v0_7))->v) = (((((struct o4C_float *)(v0_7))->v)) - w0_0);
    v0_7 = (0x44);
    if ((!(0.0f > ((((struct o44_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v))))) goto L_C03BFA6;
    *(float *)(((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0))) + v0_7)) = w0_1;
    L_C03BFA6:;
    v0_7 = (0x48);
    if ((!(0.0f > ((((struct o48_float *)((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0)))))->v))))) goto L_C03BFC2;
    *(float *)(((*(int *)((((0x2E0 + v0_0) + v0_6) + 0x0))) + v0_7)) = w0_1;
    L_C03BFC2:;
    v0_7 = (0x4C);
    if ((!(0.0f > ((((struct o4C_float *)((*(int *)((v0_4 + 0x0)))))->v))))) goto L_C03BFD2;
    *(float *)(((*(int *)((v0_5 + 0x0))) + v0_7)) = w0_1;
    L_C03BFD2:;
    v0_6 = *(int *)((v0_2 + 0x0));
    (((struct o8_float *)(v0_6))->v) = (((((struct o8_float *)(v0_6))->v)) + w0_2);
    v0_7 = (0x8);
    L_C03BFDC:;
    v0_6 = (int)(v0_3 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((v0_4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    if (v0_6) goto L_C03BF48;
    goto L_C03C01E;
    L_C03BE98:;
    v0_7 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) >= (int)v0_1)) goto L_C03BF2A;
    *(unsigned char *)(((*(int *)(((((*(short *)((v0_0 + v0_7))) << 2) + (0x2E0 + v0_0)) + 0x0))) + 0x0)) = 0x1;
    v0_2 = *(int *)(((((*(short *)((v0_0 + v0_7))) << 2) + (0x2E0 + v0_0)) + 0x0));
    (((struct o24_float *)(v0_2))->v) = 0.099999994f;
    (((struct o20_float *)(v0_2))->v) = 0.099999994f;
    (((struct o1C_float *)(v0_2))->v) = 0.099999994f;
    v0_2 = *(signed char *)((v0_0 + 0x3));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((((((struct oEC_short *)((*(int *)(((int)stk + 0)))))->v)) << 2) << 2) + 0xC1496FC))) * (short)0xB0)), (((int)stk + 0) + 0x8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((((((struct oEC_short *)(v0_0))->v)) << 2) + (0x2E0 + v0_0)) + 0x0))) + 0x4)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
    goto L_C03BF2A;
    L_C03BE70:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    goto L_C03BE7C;
}

int fx_tick_03c02c(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        FUN_0c03c0fa(a4);
        if (((((struct oEC_short *)(a4))->v)) != 0) {
            (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        }
        if (((*(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))))) == 22) && (t0 = (((struct oEC_short *)(a4))->v), t0 != 0)) {
            return 0xEC;
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return obj_destroy(a4);
}
