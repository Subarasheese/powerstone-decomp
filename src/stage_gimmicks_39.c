/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4dc4-0c0b5308) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c05564e(void);
int obj_destroy(int, int, int, int);
int stage_gimmick_36_spawn_b(int);
int cam_set_priority(int, int);
int cam_request_mode_with_args(int, int, int, int);
int FUN_0c0e6e5c(int);
int thunk_FUN_0c062242(int);

int stage_gimmick_36_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = obj_create(0x5, 0x1, 0x1);
    t3 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = 0x1;
        *(unsigned char *)((t2 + 0x3)) = 0x2;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        *(unsigned char *)((t2 + 0x5)) = 0x19;
        *(unsigned char *)((t2 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t2))->v) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0xC0B4E8E;
        t4 = *(signed char *)0xC7F3051;
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + 0xC350B60) + 0x18));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(0xC7F302C, 0xC350B60);
        t4 = *(signed char *)((t0 + 0x25));
        *(volatile signed char *)((a4 + 0x2));
        *(volatile int *)((((short)((short)t4 * (short)0x34) + t1) + 0x1C));
        t4 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, t1);
        t0 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct oF2_ushort *)(t2))->v) = (*(signed char *)((a4 + 0x2)));
        t0 = (((struct o2E0_int *)(t2))->v);
        FUN_0c06233a(t0, 0xC664958, ((((struct oF2_short *)(t2))->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1F;
        t3 = 0x1F;
    }
    return t3;
}

int stage_gimmick_36_update(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
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
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_0 = *(signed char *)0xC7F3073;
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) + 0x100);
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) & 0xFFFF);
    v0_8 = *(signed char *)((v0_1 + 0x8));
    v0_2 = (v0_8);
    v0_4 = (((-v0_0) + 0x2));
    v0_3 = (0x0);
    v0_0 = (v0_1);
    if ((v0_8 == 0)) goto L_C0B4EC8;
    if ((v0_2 == 1)) goto L_C0B4F0C;
    if ((v0_2 == 2)) goto L_C0B4F68;
    v0_2 = ((obj_destroy(v0_0, v0_5, v0_6, v0_7)));
    L_C0B5172:;
    return v0_2;
    L_C0B4F68:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    v0_5 = *(signed char *)((v0_0 + 0x9));
    v0_2 = (v0_5);
    w0_0 = (20.0f);
    if ((v0_5 == 0)) goto L_C0B4F86;
    if ((v0_2 == 1)) goto L_C0B4FC2;
    if ((v0_2 == 2)) goto L_C0B5010;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = v0_3;
    L_C0B512C:;
    *(volatile short *)((v0_0 + 0xEC));
    v0_1 = FUN_0c0e6e5c(v0_1);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C0B5172;
    v0_2 = ((stage_gimmick_36_spawn_b(v0_0)));
    goto L_C0B5172;
    L_C0B5010:;
    *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)(signed char)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4);
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)(signed char)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)(signed char)v0_4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xB0));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 30.0f);
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o20_float *)(v0_0))->v))) / 40.0f));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o24_float *)(v0_0))->v))) / 40.0f));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((((struct oC_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(v0_0))->v))) / 40.0f));
    w0_1 = *(float *)(((int)stk + 4));
    w0_2 = (((struct o20_float *)(v0_0))->v);
    w0_0 = (40.0f);
    w0_3 = (w0_1);
    w0_4 = (w0_2);
    w0_5 = ((w0_1 - w0_2));
    if ((!(0.0f > (w0_1 - w0_2)))) goto L_C0B50B2;
    w0_1 = ((w0_4 - w0_3));
    L_C0B50B4:;
    if ((!(w0_0 > w0_1))) goto L_C0B50EC;
    if ((!(0.0f > ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_0))->v)))))) goto L_C0B50D8;
    w0_1 = (((-(*(float *)(((int)stk + 12)))) + ((((struct o28_float *)(v0_0))->v))));
    L_C0B50E2:;
    if ((!(w0_0 > w0_1))) goto L_C0B50EC;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    L_C0B50EC:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - 0.049999997f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - 0.049999997f);
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) - 0.049999997f);
    v0_2 = (0x50);
    w0_0 = (0.199999988f);
    if ((!(0.199999988f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0B512C;
    *(float *)((v0_0 + v0_2)) = w0_0;
    (((struct o54_float *)(v0_0))->v) = w0_0;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    goto L_C0B512C;
    L_C0B50D8:;
    w0_1 = (((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(v0_0))->v))));
    goto L_C0B50E2;
    L_C0B50B2:;
    w0_1 = (w0_5);
    goto L_C0B50B4;
    L_C0B4FC2:;
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - w0_0);
    v0_2 = (0x24);
    w0_0 = (150.0f);
    if ((150.0f > ((((struct o24_float *)(v0_0))->v)))) goto L_C0B4FDA;
    goto L_C0B512C;
    L_C0B4FDA:;
    *(float *)((v0_0 + v0_2)) = w0_0;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEE_ushort *)(v0_0))->v) = v0_3;
    goto L_C0B512C;
    L_C0B4F86:;
    (((struct oEE_ushort *)(v0_0))->v) = (((((struct oEE_short *)(v0_0))->v)) + 0x1);
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + w0_0);
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + w0_0);
    w0_0 = (200.0f);
    if ((!(200.0f > ((((struct o20_float *)(v0_0))->v))))) goto L_C0B4FAE;
    goto L_C0B512C;
    L_C0B4FAE:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    (((struct oEE_ushort *)(v0_0))->v) = v0_3;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_0;
    goto L_C0B512C;
    L_C0B4F0C:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    if (((int)((((struct oEC_short *)(v0_0))->v)) < (int)0x19A)) goto L_C0B4F44;
    cam_set_priority(0x0, 0x40);
    cam_request_mode_with_args(0x4, 0x40, (v0_0 + 0x20), ((unsigned short)((unsigned short)(signed char)v0_4 * (unsigned short)0x72D0) + 0xC7E40E4));
    *(unsigned char *)0xC7F29FC = 0x4;
    L_C0B4F44:;
    v0_2 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) >= (int)0x1A4)) goto L_C0B4F52;
    goto L_C0B5172;
    L_C0B4F52:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned char *)((v0_0 + 0x9)) = v0_3;
    (((struct oEC_ushort *)(v0_0))->v) = v0_3;
    (((struct oEE_ushort *)(v0_0))->v) = v0_3;
    v0_2 = (0xEE);
    goto L_C0B5172;
    L_C0B4EC8:;
    v0_1 = FUN_0c05564e();
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C0B4F52;
    goto L_C0B5172;
}

int stage_gimmick_36_update_b(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x14;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x100);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    return t1;
}
