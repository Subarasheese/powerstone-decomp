/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039090-0c03921c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
int thunk_FUN_0c062242(int);

int fx_spawn_039090(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t4 = obj_create(0x5, 0x1, 0xA);
    t5 = t4;
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned char *)((t4 + 0x1)) = 0x1;
        *(unsigned char *)((t4 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t4 + 0x6)) = 0xF;
        *(unsigned char *)((t4 + 0x5)) = 0x19;
        *(unsigned char *)((t4 + 0x8)) = 0x0;
        *(unsigned char *)((t4 + 0x9)) = 0x0;
        *(unsigned char *)((t4 + 0xA)) = 0x0;
        *(unsigned char *)((t4 + 0xB)) = 0x0;
        (((struct oEC_ushort *)(t4))->v) = 0x0;
        (((struct oEE_ushort *)(t4))->v) = 0x0;
        *(unsigned int *)((t4 + 0x1C)) = a4;
        t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, 0xC3213E0);
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(0x0, t0);
        (((struct o118_uint *)(t4))->v) = t1;
        *(unsigned int *)((t4 + 0x10)) = 0xC03921C;
        t0 = t1;
        t6 = t1;
        for (;;) {
            t1 = *(signed char *)((a4 + 0x3));
            t7 = *(int *)((((0x2E0 + t4) + t6) + 0x0));
            FUN_0c06233a(t7, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x6);
            t0 = (t0 + 0x1);
            *(unsigned char *)((t7 + 0x0)) = 0x1;
            *(unsigned short *)((t7 + 0x2)) = 0x231;
            (((struct o1C_float *)(t7))->v) = (*(float *)(((0xC321404 + t6) + 0x0)));
            (((struct o20_float *)(t7))->v) = (*(float *)(((0xC321404 + t6) + 0x0)));
            (((struct o44_float *)(t7))->v) = 1.0f;
            (((struct o48_float *)(t7))->v) = 1.0f;
            (((struct o4C_float *)(t7))->v) = 1.0f;
            t6 = (t6 + 0x4);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        t0 = *(signed char *)((t4 + 0x3));
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)));
        t0 = 0x4;
        t1 = 0x1;
        for (;;) {
            *(volatile int *)(((0x2E0 + t4) + 0x0));
            *(volatile int *)((t0 + (0x2E0 + t4)));
            t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(t0, t1);
            t1 = (t2 + 0x1);
            t0 = (t3 + 0x4);
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        t5 = t6;
    }
    return t5;
}
