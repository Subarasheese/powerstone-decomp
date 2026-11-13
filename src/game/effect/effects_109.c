/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c045f9c-0c046360) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int);
int FUN_0c06231c(int, int, int);
int _modls(void);
int memset(int, int, int);
int thunk_FUN_0c062242(int, int);

int fx_spawn_045f9c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = obj_create(0x6, 0x1, 0x4, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC046072;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC14A730); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC14A748); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC14A73C); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC4CFA68, 0x7C);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x10)) = *(struct mv3 *)((a4 + 0x2C)); }
        (((struct o20_float *)(t2))->v) = 1.0f;
        (((struct o1C_float *)(t2))->v) = 1.0f;
        (((struct o24_float *)(t2))->v) = (*(float *)0xC0460DC);
        t2 = ((0x2E0 + t0) + 0x4);
        t0 = 0x1;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c06233a(t3, 0xC4CFA68, 0x7C);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t0 = (t0 + 0x1);
            *(unsigned short *)((t3 + 0x2)) = 0x21F;
            if ((int)(signed char)t0 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x21F;
    }
    return t1;
}

int fx_tick_045f9c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register float F10;
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
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    v0_5 = *(signed char *)((v0_7 + 0x8));
    v0_6 = (v0_5);
    v0_1 = (0x0);
    v0_2 = (0x4);
    v0_4 = ((0x308 + v0_7));
    v0_0 = (v0_7);
    v0_3 = (0x0);
    if ((v0_5 == 0)) goto L_C0460E0;
    if ((v0_6 == 1)) goto L_C046102;
    if ((v0_6 != 2)) goto L_C0460A6;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_6 = ((v0_1 + 0x1));
    L_C04632C:;
    return v0_6;
    L_C0460A6:;
    if ((v0_6 != 3)) goto L_C0460AE;
    return obj_destroy(v0_0);
    L_C0460AE:;
    goto L_C04632C;
    L_C046102:;
    v0_7 = (((struct o2E0_int *)(v0_0))->v);
    v0_6 = (v0_7);
    v0_5 = (0x1);
    w0_0 = (0.099999994f);
    if (((*(signed char *)((v0_7 + 0x0))) == 0)) goto L_C0461AE;
    v0_7 = *(signed char *)((v0_0 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x210), (v0_6 + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x10)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x1C))) + 0x2C)); }
    *(unsigned int *)((v0_6 + 0x10)) = ((*(int *)((v0_6 + 0x10))) - 10922);
    (((struct o24_float *)(v0_6))->v) = (((((struct o24_float *)(v0_6))->v)) + 0.125f);
    (((struct o1C_float *)(v0_6))->v) = (((((struct o1C_float *)(v0_6))->v)) - w0_0);
    w0_1 = (((struct o20_float *)(v0_6))->v);
    (((struct o20_float *)(v0_6))->v) = (w0_1 - w0_0);
    v0_7 = *(signed char *)((v0_4 + 0x1));
    *(unsigned char *)((v0_4 + 0x1)) = (v0_7 - 1);
    v0_3 = ((v0_3 + 0x1));
    w0_1 = ((w0_1 - w0_0));
    FPUL_ = (0x3E000000);
    if (((signed char)(v0_7 - 1) != 0)) goto L_C04619C;
    *(unsigned char *)((v0_4 + 0x1)) = v0_2;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) ^ 0x1);
    FUN_0c06231c(v0_6, 0xC4CFA68, ((*(signed char *)((v0_4 + 0x0))) + 0x7C));
    L_C04619C:;
    if ((((((struct o1C_float *)(v0_6))->v)) > 0.0f)) goto L_C0461AE;
    *(unsigned char *)((v0_6 + 0x0)) = v0_1;
    *(unsigned char *)((v0_4 + 0x5)) = v0_5;
    L_C0461AE:;
    v0_6 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_6 - 1);
    if (((short)(v0_6 - 1) != 0)) goto L_C0462A4;
    if ((((((struct oEE_short *)(v0_0))->v)) == 0)) goto L_C0462A4;
    (((struct oEC_ushort *)(v0_0))->v) = v0_5;
    v0_7 = *(int *)(((((*(signed char *)((v0_4 + 0x2))) << 2) + (0x2E0 + v0_0)) + 0x4));
    v0_6 = (v0_7);
    if (((*(signed char *)((v0_7 + 0x0))) != 0)) goto L_C0462A4;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) - 1);
    *(unsigned char *)((v0_6 + 0x0)) = v0_5;
    FUN_0c06231c(v0_6, 0xC4CFA68, (((*(signed char *)((v0_4 + 0x2))) << 1) + 0x70));
    (((struct o24_float *)(v0_6))->v) = 0.125f;
    (((struct o20_float *)(v0_6))->v) = 0.125f;
    (((struct o1C_float *)(v0_6))->v) = 0.125f;
    (((struct o4C_float *)(v0_6))->v) = 1.0f;
    (((struct o48_float *)(v0_6))->v) = 1.0f;
    (((struct o44_float *)(v0_6))->v) = 1.0f;
    v0_7 = *(signed char *)((v0_0 + 0x3));
    v0_7 = (((((unsigned short)((unsigned short)v0_7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
    v0_8 = ((v0_6 + 0x4));
    thunk_FUN_0c062242((v0_7 + 0x160), v0_8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x10)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x1C))) + 0x2C)); }
    *(unsigned int *)((v0_6 + 0x10)) = ((*(int *)((v0_6 + 0x10))) - 10922);
    *(unsigned char *)((v0_4 + 0x2)) = ((int)((int)((*(signed char *)((v0_4 + 0x2))) + 0x1) % (int)0x3));
    L_C0462A4:;
    v0_6 = (0xC046358);
    v0_8 = (v0_5);
    v0_4 = (((0x2E0 + v0_0) + 0x4));
    w0_1 = (0.049999997f);
    L_C0462B0:;
    v0_5 = *(int *)((v0_4 + 0x0));
    v0_7 = (v0_5);
    v0_4 = ((v0_4 + 0x4));
    if (((*(signed char *)((v0_5 + 0x0))) == 0)) goto L_C0462F6;
    (((struct o1C_float *)(v0_7))->v) = (((((struct o1C_float *)(v0_7))->v)) + w0_1);
    (((struct o20_float *)(v0_7))->v) = (((((struct o20_float *)(v0_7))->v)) + w0_1);
    (((struct o24_float *)(v0_7))->v) = (((((struct o24_float *)(v0_7))->v)) + w0_1);
    (((struct o44_float *)(v0_7))->v) = (((((struct o44_float *)(v0_7))->v)) - w0_0);
    (((struct o48_float *)(v0_7))->v) = (((((struct o48_float *)(v0_7))->v)) - w0_0);
    (((struct o4C_float *)(v0_7))->v) = (((((struct o4C_float *)(v0_7))->v)) - w0_0);
    v0_6 = (0x44);
    v0_3 = ((v0_3 + 0x1));
    if ((((((struct o44_float *)(v0_7))->v)) > 0.0f)) goto L_C0462F6;
    *(unsigned char *)((v0_7 + 0x0)) = v0_1;
    L_C0462F6:;
    v0_5 = (int)(v0_8 + 0x1) < (int)v0_2;
    v0_8 = ((v0_8 + 0x1));
    if (v0_5) goto L_C0462B0;
    if ((v0_3 != 0)) goto L_C04632C;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_6 = ((v0_1 + 0x1));
    goto L_C04632C;
    L_C0460E0:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    memset(v0_4, 0x0, 0x14);
    *(unsigned char *)((v0_4 + 0x0)) = v0_1;
    *(unsigned char *)((v0_4 + 0x1)) = v0_2;
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = 0x3;
    goto L_C046102;
}
