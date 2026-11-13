/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0357e0-0c03598c) */

struct o90_uint { char p[0x90]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_short { char p[0xF0]; short v; };
int fx_spawn_table_burst(int, int, float);
int obj_destroy(int, int, int, int);
int math_mat_transform_point(int, int);

int fx_spawn_0357e0(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t21;
    register int t3;
    register int t7;
    register int t13;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        t3 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t3 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t3;
        *(unsigned int *)((t0 + 0x10)) = 0xC0358B4;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (*(int *)(((int)stk + 0)));
        (((struct oF0_ushort *)(t0))->v) = 0x0;
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t8 = t7;
            t8 = (t8 << 2);
            *(unsigned int *)(((int)stk + 0)) = t8;
            t8 = (t8 + (0x2E0 + t0));
            t8 = (*(int *)((t8 + 0x0)));
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            *(unsigned short *)((t8 + 0x2)) = 0xF;
            t13 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a(t8, ((signed char)((((t13 << 1) + t13) << 2) << 1) + 0xC6002D0), (*(int *)(((*(int *)(((int)stk + 0))) + 0xC149660))));
            t7 = (t7 + 0x1);
            if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                (((struct o90_uint *)(t8))->v) = ((0x300 + a4) + 0x840);
            } else {
                t6 = 0x1900;
                t6 = (t6 + a4);
                (((struct o90_uint *)(t8))->v) = t6;
            }
        }
        t21 = 0x2DC;
    }
    return t21;
}

int fx_tick_0357e0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_2 + 0x8));
    v0_4 = (v0_3);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C0358F0;
    if ((v0_4 == 1)) goto L_C0358F6;
    v0_4 = ((obj_destroy(v0_2, v0_0, v0_1, a7)));
    L_C03595E:;
    return v0_4;
    L_C0358F6:;
    (((struct oEC_ushort *)(v0_2))->v) = (((((struct oEC_short *)(v0_2))->v)) + 0x1);
    if ((((((struct oEC_short *)(v0_2))->v)) != (*(short *)(((((((struct oF0_short *)(v0_2))->v)) << 1) + 0xC149664))))) goto L_C035944;
    *(float *)(((int)stk + 0)) = -5.0f;
    *(float *)(((int)stk + 4)) = -21.0f;
    *(float *)(((int)stk + 8)) = 18.0f;
    math_mat_transform_point(((int)stk + 0), (((((struct o2E0_int *)(v0_2))->v)) + 0x50));
    fx_spawn_table_burst(((int)stk + 0), 0x0, 0.125f);
    (((struct oF0_ushort *)(v0_2))->v) = (((((struct oF0_short *)(v0_2))->v)) + 0x1);
    L_C035944:;
    v0_4 = (0xEE);
    if (((int)((((struct oEC_short *)(v0_2))->v)) < (int)((((struct oEE_short *)(v0_2))->v)))) goto L_C03595E;
    v0_0 = *(signed char *)((v0_2 + 0x8));
    *(unsigned char *)((v0_2 + 0x8)) = (v0_0 + 0x1);
    v0_4 = ((v0_0 + 0x1));
    goto L_C03595E;
    L_C0358F0:;
    *(unsigned char *)((v0_2 + 0x8)) = ((*(signed char *)((v0_2 + 0x8))) + 0x1);
    goto L_C0358F6;
}
