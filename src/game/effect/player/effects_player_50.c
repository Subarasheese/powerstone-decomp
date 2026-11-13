/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c6658-0c0c67c4) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _quick_odd_mvn(void);
int thunk_math_mat_get_translate(int, int);

int fx_spawn_34(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t26;
    register int t3;
    register float u9;
    register float u13;
    register int t14;
    register int t15;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t25;

    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x1, 0x1, 0x4, 0x0);
    t26 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C6A88;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t3 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (t0 + 0x20));
        *(int *)((int)stk + 0) = (t0 + 0x20);
        u9 = ((((struct o20_float *)(t0))->v));
        u9 = u9 + 10.0f * (math_sin_angle16((*(int *)((t0 + 0x30)))));
        (((struct o20_float *)(t0))->v) = u9;
        *(int *)((int)stk + 0) = (t0 + 0x28);
        u13 = ((((struct o28_float *)(t0))->v));
        u13 = u13 + 10.0f * (math_cos_angle16((*(int *)((t0 + 0x30)))));
        (((struct o28_float *)(t0))->v) = u13;
        t14 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x2)) = 0xF;
        t15 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t14, ((signed char)((((t15 << 1) + t15) << 2) << 1) + 0xC6002D0), 0x4);
        *(unsigned int *)(((int)stk + 4)) = ((0x2E0 + t0) + 0x4);
        t19 = 0x0;
        for (;;) {
            t20 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t20 + 0x4);
            t21 = *(int *)((((t20 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t21 + 0x0)) = 0x1;
            *(unsigned short *)((t21 + 0x2)) = 0x3F;
            t22 = *(signed char *)((a4 + 0x3));
            t25 = FUN_0c06233a(t21, ((signed char)((((t22 << 1) + t22) << 2) << 1) + 0xC6002D0), 0x5);
            t19 = (t19 + 0x1);
            if ((int)t19 >= (int)0x3) {
                break;
            }
        }
        t26 = t25;
    }
    return t26;
}
