/* battle round flow record g_round_flow (init (0c0cc074-0c0ccefc) */

/* named globals (symbols.txt) */
extern char g_cam_split_flag[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0555c4(void);
int item_create(int, int);
int item_director_count_free_slots(void);
int item_director_pick_spot(void);
int item_director_pick_kind(int);
int item_director_spawn_queued(int);
int item_director_phase0(void);
int item_director_phase1(void);
int item_director_phase2(void);
int item_director_phase3(void);
int item_director_phase4(void);
int FUN_0c0ccb60(void);
struct o118_int { char p[0x118]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
float FUN_0c02649a(int, int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(int, int, int, int, float, float, float, float, float, float, float);
int _slow_mvn(int);

int FUN_0c0ccbca(void);

int item_director_tick(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c0555c4();
    t2 = t1;
    if (t1 != 0) {
        if ((*(signed char *)g_cam_split_flag) == 0) {
            FUN_0c0ccbca();
        }
        if (((*(signed char *)0xC7E40C8) == 10) && (t0 = *(signed char *)0xC7EB398, t0 == 10)) {
            t1 = t0;
        } else {
            (((struct o0_uchar *)0xC7F2977)->v) = (item_director_count_free_slots());
            (((struct o1_uchar *)0xC7F2977)->v) = 0x0;
            t0 = *(signed char *)0xC7F266C;
            switch (t0) {
            case 0:
                item_director_phase0();
                break;
            case 1:
                item_director_phase1();
                break;
            case 2:
                item_director_phase2();
                break;
            case 3:
                item_director_phase3();
                break;
            case 4:
                item_director_phase4();
                break;
            }
            t0 = 0x314;
            if ((*(signed char *)0xC7F2978) != 0) {
                t3 = item_director_pick_spot();
                if ((*(signed char *)0xC7F2991) != 0) {
                    t0 = (item_director_spawn_queued(t3));
                } else {
                    t0 = item_director_pick_kind((*(signed char *)0xC7F2670));
                    item_create(t3, t0);
                    t3 = *(signed char *)0xC7F2670;
                    *(unsigned char *)0xC7F2670 = (t3 + 0x1);
                    t0 = (signed char)(t3 + 0x1);
                    if ((int)(signed char)(t3 + 0x1) >= (int)0xA) {
                        *(unsigned char *)0xC7F2670 = 0x0;
                        t0 = 0x0;
                    }
                }
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0ccbca(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned char *)0xC7F2945 = (FUN_0c0ccb60());
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)0xC7F2945;
        t3 = *(signed char *)((t1 + ((t2 << 2) + 0xC33D08C)));
        t4 = (0xC7F2941 + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)((t4 + 0x0)) = t3;
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return ((t2 << 2) + 0xC33D08C);
}

float FUN_0c0ccc98(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F0;
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
    v0_5 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_0 = f10;
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(signed char *)0xC153420);
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (*(signed char *)0xC153421);
    *(unsigned int *)(((int)stk + 8)) = 0xC7E4078;
    *(unsigned int *)(((int)stk + 4)) = 0xC7E407C;
    v0_1 = (0x0);
    v0_2 = ((((int)stk + 4) + 0xC));
    v0_0 = (v0_5);
    v0_5 = (0xC7E407C);
    v0_3 = (0xC02649A);
    v0_3 = (0x1);
    L_C0CCE76:;
    if (((int)v0_1 >= (int)0x2)) goto L_C0CCE80;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_0) + (v0_1 << 2)) + 0x0))) + 0x0)) = 0x0;
    *(unsigned int *)((v0_2 + (v0_1 << 2))) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    v0_7 = ((v0_1 << 2));
    v0_6 = (((v0_1 << 2) + v0_2));
    v0_4 = ((v0_1 << 2));
    L_C0CCDBC:;
    if (!(((*(int *)((v0_6 + 0x0))) != 0))) goto L_C0CCDC2;
    v0_5 = *(int *)((v0_6 + 0x0));
    v0_7 = (v0_5);
    if (((*(signed char *)((((0x310 + v0_5) + v0_1) + 0x0))) == 0)) goto L_C0CCDB6;
    v0_7 = *(signed char *)(((*(int *)((v0_6 + 0x0))) + 0x4));
    v0_5 = (v0_7);
    if ((v0_7 == 1)) goto L_C0CCD58;
    if ((v0_5 == 2)) goto L_C0CCD58;
    v0_7 = (v0_5);
    if ((v0_5 != 3)) goto L_C0CCDB6;
    goto L_C0CCD58;
    L_C0CCDC2:;
    if (((*(signed char *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x0))) != 0)) goto L_C0CCE74;
    *(unsigned int *)((v0_2 + v0_4)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    v0_7 = (v0_4);
    v0_6 = ((v0_4 + v0_2));
    L_C0CCE6E:;
    if (!(((*(int *)((v0_6 + 0x0))) != 0))) goto L_C0CCE74;
    v0_5 = *(int *)((v0_6 + 0x0));
    v0_7 = (v0_5);
    if (((*(signed char *)((((0x310 + v0_5) + v0_1) + 0x0))) == 0)) goto L_C0CCE68;
    v0_5 = *(signed char *)(((*(int *)((v0_6 + 0x0))) + 0x4));
    v0_7 = (v0_5);
    if ((v0_5 != 6)) goto L_C0CCE68;
    v0_7 = (0x30D);
    if (((*(signed char *)(((*(int *)((v0_6 + 0x0))) + 0x30D))) != 0)) goto L_C0CCE68;
    v0_7 = (0x118);
    if ((((((struct o118_int *)((*(int *)((v0_6 + 0x0)))))->v)) != 0)) goto L_C0CCE68;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x0)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x4)) = *(struct mv3 *)(((*(int *)(((v0_4 + v0_2) + 0x0))) + 0x20)); }
    v0_5 = *(int *)((v0_4 + (0x2E0 + v0_0)));
    *(int *)((int)stk + 0) = (0x8 + v0_5);
    FUN_0c02649a((*(int *)(((v0_4 + v0_2) + 0x0))), 0x1);
    *(unsigned int *)(((int)stk + 0)) = (0x8 + v0_5);
    if ((v0_1 == 0)) goto L_C0CCE5C;
    v0_7 = (0xC0CCEE8);
    w0_0 = (1.5f);
    goto L_C0CCE60;
    L_C0CCE74:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C0CCE76;
    L_C0CCE60:;
    *(float *)(((*(int *)((int)stk + 0)) + 0x0)) = (F0 + w0_0);
    F0 = ((F0 + w0_0));
    goto L_C0CCE74;
    L_C0CCE5C:;
    v0_7 = (0xC0CCEEC);
    w0_0 = (2.0f);
    goto L_C0CCE60;
    L_C0CCE68:;
    *(unsigned int *)((v0_6 + 0x0)) = (*(int *)(((*(int *)((v0_6 + 0x0))) + 0x18)));
    goto L_C0CCE6E;
    L_C0CCD58:;
    v0_7 = (0x30D);
    if (((*(signed char *)(((*(int *)((v0_6 + 0x0))) + 0x30D))) != 0)) goto L_C0CCDB6;
    v0_7 = (0x118);
    if ((((((struct o118_int *)((*(int *)((v0_6 + 0x0)))))->v)) != 0)) goto L_C0CCDB6;
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x0)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + v0_0) + v0_4) + 0x0))) + 0x4)) = *(struct mv3 *)(((*(int *)(((v0_4 + v0_2) + 0x0))) + 0x20)); }
    v0_5 = *(int *)((v0_4 + (0x2E0 + v0_0)));
    *(int *)((int)stk + 0) = (0x8 + v0_5);
    FUN_0c02649a((*(int *)(((v0_4 + v0_2) + 0x0))), 0x1);
    *(unsigned int *)(((int)stk + 0)) = (0x8 + v0_5);
    if ((v0_1 == 0)) goto L_C0CCDAA;
    v0_7 = (0xC0CCDEC);
    w0_0 = (1.5f);
    L_C0CCDAE:;
    *(float *)(((*(int *)((int)stk + 0)) + 0x0)) = (F0 + w0_0);
    F0 = ((F0 + w0_0));
    goto L_C0CCDC2;
    L_C0CCDAA:;
    v0_7 = (0xC0CCDF0);
    w0_0 = (2.0f);
    goto L_C0CCDAE;
    L_C0CCDB6:;
    *(unsigned int *)((v0_6 + 0x0)) = (*(int *)(((*(int *)((v0_6 + 0x0))) + 0x18)));
    goto L_C0CCDBC;
    L_C0CCE80:;
    v0_5 = ((0x2E0 + v0_0));
    if (((*(signed char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0))) == 0)) goto L_C0CCEC8;
    if (((*(signed char *)(((*(int *)((v0_5 + 0x4))) + 0x0))) == 0)) goto L_C0CCEC8;
    if (((*(int *)((v0_2 + 0x0))) != (*(int *)((v0_2 + 0x4))))) goto L_C0CCEC8;
    v0_1 = ((((struct o2E0_int *)(v0_0))->v));
    *(int *)((int)stk + 0) = v0_1;
    *(unsigned char *)((v0_1 + 0x0)) = ((int)((int)((int)((int)(*(int *)0xC7F3014) / (int)0xA)) % (int)0x2));
    v0_1 = *(signed char *)((((((struct o2E0_int *)(v0_0))->v)) + 0x0));
    *(unsigned char *)(((*(int *)(((0x2E0 + v0_0) + 0x4))) + 0x0)) = ((-v0_1) + 0x1);
    v0_7 = (((-v0_1) + 0x1));
    L_C0CCEC8:;
    return F0;
}
