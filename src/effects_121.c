/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0498c4-0c049b7c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o274_float { char p[0x274]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0e6fe8(int, int, int, float, float, float, float, float, float, float);
int memset(int, int, int);

int fx_spawn_0498c4(int a4)
{
    register int t0;
    register int t6;
    register int t1;
    register int t2;
    register int t5;

    t0 = obj_create(0x6, 0x1, 0x8);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x20;
        *(unsigned int *)((t0 + 0x10)) = 0xC04997C;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t2) + 0x0))), 0xC4CFA68, 0x5C);
            t5 = *(int *)((((0x2E0 + t0) + t2) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            *(unsigned short *)((t5 + 0x2)) = 0x31;
            (((struct o24_float *)(t5))->v) = 4.0f;
            t1 = (t1 + 0x1);
            (((struct o20_float *)(t5))->v) = 4.0f;
            (((struct o1C_float *)(t5))->v) = 4.0f;
            t2 = (t2 + 0x4);
            if ((int)(signed char)t1 >= (int)0x8) {
                break;
            }
        }
        t6 = 0x1C;
    }
    return t6;
}

int fx_tick_0498c4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register float F10;
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
    v0_6 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_6);
    if (v0_1) goto L_C0499AC;
    return obj_destroy(v0_0, R5, R6);
    L_C0499AC:;
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_4 = (v0_3);
    v0_1 = ((0x308 + v0_0));
    v0_2 = ((*(int *)((v0_0 + 0x1C))));
    if ((v0_3 == 0)) goto L_C0499F4;
    if ((v0_4 == 1)) goto L_C049A0A;
    if (!((v0_4 != 2))) goto L_C049B44;
    if ((v0_4 != 3)) goto L_C0499CC;
    goto L_C049B44;
    L_C049B44:;
    return obj_destroy(v0_0, R5, R6);
    L_C0499CC:;
    L_C049B5A:;
    return v0_4;
    L_C049A0A:;
    v0_6 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_6 - 1);
    v0_4 = (0x4);
    v0_5 = (0x0);
    v0_3 = (0x1);
    if (((short)(v0_6 - 1) != 0)) goto L_C049A8C;
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049A8C;
    (((struct oEC_ushort *)(v0_0))->v) = v0_3;
    v0_7 = *(int *)(((((*(signed char *)((v0_1 + 0x10))) << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_6 = (v0_7);
    if (((*(signed char *)((v0_7 + 0x0))) != 0)) goto L_C049A8C;
    (((struct oEC_ushort *)(v0_0))->v) = 0x2;
    *(unsigned char *)((v0_6 + 0x0)) = v0_3;
    FUN_0c0e6fe8(v0_6, R5, R6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, F10);
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + v0_1) + 0x0)) = v0_5;
    *(unsigned char *)((((*(signed char *)((v0_1 + 0x10))) + (v0_1 + 0x8)) + 0x0)) = v0_4;
    FUN_0c06231c(0x0, 0xC4CFA68, ((*(signed char *)((((*(signed char *)((v0_1 + 0x10))) + v0_1) + 0x0))) + 0x5C));
    (((struct o10_uchar *)(v0_1))->v) = (((*(signed char *)((v0_1 + 0x10))) + 0x1) & 0x7);
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) + 0x1);
    L_C049A8C:;
    v0_7 = (v0_5);
    L_C049A8E:;
    v0_8 = *(int *)(((((signed char)v0_7 << 2) + (0x2E0 + v0_0)) + 0x0));
    v0_6 = (v0_8);
    if (((*(signed char *)((v0_8 + 0x0))) == 0)) goto L_C049B00;
    v0_8 = *(signed char *)((((signed char)v0_7 + (v0_1 + 0x8)) + 0x0));
    *(unsigned char *)((((signed char)v0_7 + (v0_1 + 0x8)) + 0x0)) = (v0_8 - 1);
    if (((signed char)(v0_8 - 1) != 0)) goto L_C049B00;
    *(unsigned char *)((((v0_1 + 0x8) + (signed char)v0_7) + 0x0)) = v0_4;
    v0_8 = *(signed char *)((((signed char)v0_7 + v0_1) + 0x0));
    *(unsigned char *)((((signed char)v0_7 + v0_1) + 0x0)) = (v0_8 + 0x1);
    if (((int)(signed char)(v0_8 + 0x1) <= (int)0x3)) goto L_C049AF0;
    *(unsigned char *)((v0_6 + 0x0)) = v0_5;
    (((struct o11_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x11))) - 1);
    L_C049B00:;
    v0_6 = (int)(signed char)(v0_7 + 0x1) < (int)0x8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_C049A8E;
    if ((!(((((struct o274_float *)(v0_2))->v)) > 0.0f))) goto L_C049B1E;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049B1E;
    *(unsigned char *)((v0_1 + v0_4)) = v0_3;
    L_C049B1E:;
    if (((*(signed char *)((v0_2 + 0xA))) == 0)) goto L_C049B2E;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) != 0)) goto L_C049B2E;
    *(unsigned char *)((v0_1 + v0_4)) = v0_3;
    L_C049B2E:;
    v0_4 = (0x11);
    if (((*(signed char *)((v0_1 + 0x11))) != 0)) goto L_C049B5A;
    v0_4 = (0x12);
    if (((*(signed char *)((v0_1 + 0x12))) == 0)) goto L_C049B5A;
    *(unsigned char *)((v0_0 + 0x8)) = 0x2;
    v0_4 = (0x2);
    goto L_C049B5A;
    L_C049AF0:;
    FUN_0c06231c(v0_6, 0xC4CFA68, ((*(signed char *)((((signed char)v0_7 + v0_1) + 0x0))) + 0x5C));
    goto L_C049B00;
    L_C0499F4:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = 0x2;
    memset(v0_1, 0x0, 0x14);
    goto L_C049A0A;
}
