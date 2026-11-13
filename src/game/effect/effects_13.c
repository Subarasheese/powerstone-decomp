/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c034bfc-0c034dd0) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_034bfc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = obj_create(0x5, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x435;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC034CB8;
        u0 = *(float *)0xC034D34;
        (((struct o58_float *)(t0))->v) = u0;
        (((struct o54_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = u0;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        (((struct oF2_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        *(unsigned int *)((t0 + 0x30)) = 0x8000;
        t1 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x2)) = 0xF;
        t2 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(t1, ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x11);
        t1 = (((struct o2E4_int *)(t0))->v);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x2)) = 0xF;
        t2 = *(signed char *)((t0 + 0x3));
        return FUN_0c06233a(t1, ((signed char)((((t2 << 1) + t2) << 2) << 1) + 0xC6002D0), 0x12);
    }
    return t0;
}

int fx_tick_034bfc(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C034CCA;
    if ((v0_1 == 1)) goto L_C034CD0;
    if ((v0_1 == 2)) goto L_C034DB8;
    L_C034DBE:;
    return v0_1;
    L_C034DB8:;
    return obj_destroy(v0_0, R5, a6, a7);
    L_C034CD0:;
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + 0.099999994f);
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    R5 = (0x6);
    w0_0 = (0.099999994f);
    if ((v0_2 == 0)) goto L_C034CF4;
    if ((v0_1 == 1)) goto L_C034CFE;
    if ((v0_1 == 2)) goto L_C034D4C;
    if ((v0_1 == 3)) goto L_C034D72;
    goto L_C034DBE;
    L_C034D72:;
    (((struct o5C_float *)(v0_0))->v) = (((((struct o5C_float *)(v0_0))->v)) - 0.049999997f);
    w0_1 = (((struct o5C_float *)(v0_0))->v);
    v0_1 = (0x5C);
    w0_2 = (w0_1);
    w0_2 = (0.0f);
    FPUL_ = (0x3D4CCCCC);
    if ((!(0.0f > w0_1))) goto L_C034D8A;
    *(float *)((v0_0 + v0_1)) = w0_2;
    L_C034D8A:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0x50);
    w0_1 = (0.199999988f);
    if ((!(0.199999988f > ((((struct o50_float *)(v0_0))->v))))) goto L_C034DA0;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C034DA0:;
    w0_2 = (((struct o54_float *)(v0_0))->v);
    (((struct o54_float *)(v0_0))->v) = (w0_2 - w0_0);
    v0_1 = (0x54);
    if ((!(w0_1 > (w0_2 - w0_0)))) goto L_C034DBE;
    *(float *)((v0_0 + v0_1)) = w0_1;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C034DBE;
    L_C034D4C:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C034DBE;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C034DBE;
    L_C034CFE:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0)) goto L_C034DBE;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = R5;
    v0_1 = (0xEC);
    goto L_C034DBE;
    L_C034CF4:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = R5;
    goto L_C034CFE;
    L_C034CCA:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C034CD0;
}
