/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03d254-0c03d60c) */

int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF2_short { char p[0xF2]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
int _quick_odd_mvn(int, int, int, float);
int thunk_FUN_0c062242(int, int);

int FUN_0c03d2fc(int a4, int a5, int a6);
int FUN_0c03d33e(int a4, int a5);

int fx_spawn_03d254(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t12;
    register int t3;
    register int t6;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x5, 0x1, 0x2);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC03D3A4;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        t3 = 0x0;
        for (;;) {
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + ((signed char)t3 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + ((signed char)t3 << 2)) + 0x0))) + 0x2)) = 0xF;
            t6 = *(signed char *)((a4 + 0x3));
            t10 = FUN_0c06233a((*(int *)((((0x2E0 + t0) + ((signed char)t3 << 2)) + 0x0))), ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), t3);
            t3 = (t3 + 0x1);
            if ((int)(signed char)t3 >= (int)0x2) {
                break;
            }
        }
        t12 = t10;
    }
    return t12;
}

int FUN_0c03d2fc(int a4, int a5, int a6)
{
    register int t2;
    register int t1;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 + (0x2E0 + a4));
        t2 = (t2 + 0x1);
        *(unsigned char *)((((*(int *)((t1 + 0x0)))) + 0x0)) = 0x0;
    }
    (((struct oF2_ushort *)(a4))->v) = (*(signed char *)(((((short)a6 << 2) + a5) + 0x0)));
    *(unsigned char *)(((*(int *)(((0x2E0 + a4) + ((*(signed char *)(((((short)a6 << 2) + a5) + 0x1))) << 2)))) + 0x0)) = 0x1;
    (((struct oF0_ushort *)(a4))->v) = a6;
    return 0xF0;
}

int FUN_0c03d33e(int a4, int a5)
{
    register int t0;

    t0 = (((struct oF2_short *)(a4))->v);
    (((struct oF2_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x2))) == 0xFF) {
            (((struct oF0_ushort *)(a4))->v) = (*(signed char *)((((((((struct oF0_short *)(a4))->v)) << 2) + a5) + 0x3)));
        } else {
            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) + 0x1);
        }
        return FUN_0c03d2fc(a4, a5, ((((struct oF0_short *)(a4))->v)));
    }
    return 0xF2;
}

int fx_tick_03d254(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_2 = a4;
    v0_4 = *(signed char *)((v0_2 + 0x8));
    v0_3 = (v0_4);
    v0_1 = (0xC3217C0);
    v0_0 = (v0_2);
    w0_0 = (2.0f);
    w0_1 = (1.0f);
    if ((v0_4 == 0)) goto L_C03D3D2;
    if ((v0_3 == 1)) goto L_C03D438;
    if ((v0_3 != 2)) goto L_C03D3CE;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C03D55C;
    if ((v0_3 == 1)) goto L_C03D590;
    L_C03D5E4:;
    return v0_3;
    L_C03D590:;
    (((struct o60_float *)(v0_0))->v) = (((((struct o60_float *)(v0_0))->v)) + -0.25f);
    (((struct o64_float *)(v0_0))->v) = (((((struct o64_float *)(v0_0))->v)) + -0.25f);
    (((struct o68_float *)(v0_0))->v) = (((((struct o68_float *)(v0_0))->v)) + -0.25f);
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_3 = (0xEC);
    if (((short)(v0_1 - 1) != 0)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    (((struct o64_float *)(v0_0))->v) = 0.0f;
    (((struct o68_float *)(v0_0))->v) = 0.0f;
    v0_3 = (0x68);
    goto L_C03D5E4;
    L_C03D55C:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x4;
    FUN_0c03d2fc(v0_0, v0_1, 0x1);
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = 0.099999994f;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x6)) = 0x200;
    (((struct o60_float *)(v0_0))->v) = w0_1;
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o68_float *)(v0_0))->v) = w0_1;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C03D590;
    L_C03D3CE:;
    return obj_destroy(v0_0);
    L_C03D438:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    FUN_0c03d33e(v0_0, v0_1);
    v0_1 = *(signed char *)((v0_0 + 0x4));
    v0_3 = (v0_1);
    if ((v0_1 != 0)) goto L_C03D486;
    v0_1 = *(int *)((v0_0 + 0x1C));
    v0_2 = *(signed char *)((v0_1 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x580), (v0_0 + 0x20));
    v0_2 = ((*(int *)(((0x72BC + v0_1) + 0x8))));
    L_C03D496:;
    v0_2 = ((v0_2 + 0x308));
    if ((((((struct oEC_short *)(v0_0))->v)) == 0)) goto L_C03D4A8;
    if (!(((*(signed char *)((v0_2 + 0x0))) != 0))) goto L_C03D4A8;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C03D4F6;
    if ((v0_3 == 1)) goto L_C03D514;
    goto L_C03D5E4;
    L_C03D4A8:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = 0x0;
    v0_3 = (0x0);
    goto L_C03D5E4;
    L_C03D514:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + -0.099999994f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + -0.099999994f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) + -0.099999994f);
    v0_3 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0x121)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    v0_3 = (0x58);
    goto L_C03D5E4;
    L_C03D4F6:;
    v0_3 = (0xEC);
    if ((((((struct oEC_short *)(v0_0))->v)) != 0x12B)) goto L_C03D5E4;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    v0_3 = (0x50);
    goto L_C03D5E4;
    L_C03D486:;
    v0_1 = *(int *)((v0_0 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((v0_1 + 0x20)); }
    v0_2 = (v0_1);
    goto L_C03D496;
    L_C03D3D2:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x12C;
    if (((*(signed char *)((v0_0 + 0x4))) != 0)) goto L_C03D412;
    v0_2 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) - 16384);
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)((v0_2 + 0x30)));
    v0_2 = ((0x2E0 + v0_0));
    v0_3 = (0x0);
    v0_4 = (0x2);
    w0_2 = (10.0f);
    L_C03D402:;
    (((struct o8_float *)((*(int *)((v0_2 + 0x0)))))->v) = w0_2;
    v0_5 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    if (v0_5) goto L_C03D402;
    L_C03D420:;
    FUN_0c03d2fc(v0_0, v0_1, 0x0);
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o54_float *)(v0_0))->v) = 0.099999994f;
    (((struct o58_float *)(v0_0))->v) = w0_1;
    goto L_C03D438;
    L_C03D412:;
    v0_2 = *(int *)((v0_0 + 0x1C));
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x4000);
    *(unsigned int *)((v0_0 + 0x30)) = (*(int *)((v0_2 + 0x30)));
    v0_2 = (v0_2);
    goto L_C03D420;
}
