/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c6658-0c0c67c4) */

struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);

int fx_spawn_34(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t27;
    register int t4;
    register float u10;
    register float u14;
    register int t15;
    register int t16;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t26;

    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x1, 0x1, 0x4);
    t27 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C6A88;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 4)));
        FUN_0c0e6fe8();
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t4 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
        *(int *)((int)stk + 0) = (t0 + 0x20);
        u10 = ((((struct o20_float *)(t0))->v));
        u10 = u10 + 10.0f * (math_sin_angle16((*(int *)((t0 + 0x30)))));
        (((struct o20_float *)(t0))->v) = u10;
        *(int *)((int)stk + 0) = (t0 + 0x28);
        u14 = ((((struct o28_float *)(t0))->v));
        u14 = u14 + 10.0f * (math_cos_angle16((*(int *)((t0 + 0x30)))));
        (((struct o28_float *)(t0))->v) = u14;
        t15 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t15 + 0x0)) = 0x1;
        *(unsigned short *)((t15 + 0x2)) = 0xF;
        t16 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t15, ((signed char)((((t16 << 1) + t16) << 2) << 1) + 0xC6002D0), 0x4);
        *(unsigned int *)(((int)stk + 4)) = ((0x2E0 + t0) + 0x4);
        t20 = 0x0;
        for (;;) {
            t21 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t21 + 0x4);
            t22 = *(int *)((((t21 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t22 + 0x0)) = 0x1;
            *(unsigned short *)((t22 + 0x2)) = 0x3F;
            t23 = *(signed char *)((a4 + 0x3));
            t26 = FUN_0c06233a(t22, ((signed char)((((t23 << 1) + t23) << 2) << 1) + 0xC6002D0), 0x5);
            t20 = (t20 + 0x1);
            if ((int)t20 >= (int)0x3) {
                break;
            }
        }
        t27 = t26;
    }
    return t27;
}
