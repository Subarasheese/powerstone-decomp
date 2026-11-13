/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03fd08-0c040260) */

struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
int obj_create_beside(int, int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();

void fx_spawn_04015c(int a4)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(int *)((int)stk + 0) = 0x0;
    t0 = obj_create_beside(0x5, a4, 0x1, 0xA, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0404BA;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149AC4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149AD0); }
        (((struct o118_uint *)(t0))->v) = ((((struct o118_int *)(a4))->v));
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned int *)(((int)stk + 4)) = (0x2E0 + t0);
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t4 + 0x4);
            t5 = *(int *)((((t4 + 0x4) - 4) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            t6 = *(signed char *)((t0 + 0x3));
            FUN_0c06233a(t5, ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), 0x10);
            *(unsigned short *)((t5 + 0x2)) = 0x221;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x1C)) = *(struct mv3 *)(0xC149AC4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x10)) = *(struct mv3 *)(0xC149AD0); }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xA) {
                break;
            }
        }
    }
}
