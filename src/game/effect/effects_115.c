/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c048aa0-0c048c18) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c0ace1c(int, int);
int thunk_FUN_0c062242(int, int);

int fx_spawn_048aa0(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(signed char *)0xC7F3051;
    t1 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x1, 0x0);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned char *)((t0 + 0x5)) = 0x19;
            *(unsigned short *)((t0 + 0x6)) = 0xF;
            *(unsigned int *)((t0 + 0x10)) = 0xC048B5A;
            (((struct o58_float *)(t0))->v) = 1.0f;
            (((struct o54_float *)(t0))->v) = 1.0f;
            (((struct o50_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            (((struct o24_float *)(t0))->v) = 50.0f;
            (((struct o28_float *)(t0))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x30)) = 0x0;
            *(unsigned int *)((t0 + 0x2C)) = 0x0;
            *(unsigned int *)((t0 + 0x34)) = 0x8000;
            t3 = *(signed char *)((a4 + 0x3));
            (((struct o118_uint *)(t0))->v) = (0x2C0 + ((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t3 * (unsigned short)0x72D0) + 0xC7E40C4))));
            FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, 0xF);
            *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
            t1 = 0xF;
        }
    }
    return t1;
}

int fx_tick_048aa0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t6;
    register int t7;
    register int t12;
    register int t19;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        t19 = t0;
        if (t0 != 1) {
        } else {
            t19 = (obj_destroy(a4, a5, a6, a7));
        }
    } else {
        t6 = *(signed char *)((0x71BA + ((unsigned short)((unsigned short)(*(signed char *)((a4 + 0x3))) * (unsigned short)0x72D0) + 0xC7E40C4)));
        t19 = t6;
        if (t6 != 13) {
            t7 = *(signed char *)((a4 + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t7 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (int)stk + 4);
            FUN_0c0ace1c((((int)stk + 0) + 0x4), (*(signed char *)((a4 + 0x3))));
            t12 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t12 + 0x1);
            t19 = (t12 + 0x1);
        }
    }
    return t19;
}
