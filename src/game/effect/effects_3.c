/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c032fd4-0c033114) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

int fx_spawn_032fd4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t25;
    register int t1;
    register int t16;
    register int t3;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t25 = t0;
    if (t0 == 0) {
        t1 = obj_create(0x5, 0x1, 0x3, 0x0);
        t16 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC033114;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x20)) = *(struct mv3 *)(0xC1495F8); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x50)) = *(struct mv3 *)(0xC149604); }
            *(unsigned int *)((t1 + 0x2C)) = 0x4000;
            *(unsigned int *)((t1 + 0x30)) = 0x0;
            *(unsigned int *)((t1 + 0x34)) = 0x0;
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t6 = *(signed char *)((a4 + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))), ((signed char)((((t6 << 1) + t6) << 2) << 1) + 0xC6002D0), (t3 + 0xB));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)(0xC1495F8); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x1C)) = *(struct mv3 *)(0xC149604); }
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x3) {
                    break;
                }
            }
            (((struct o118_uint *)(t1))->v) = (0xC7E4130 + (unsigned short)((unsigned short)(*(signed char *)((t1 + 0x3))) * (unsigned short)0x72D0));
            *(unsigned char *)((t1 + 0x8)) = (*(signed char *)(((int)stk + 0)));
            *(unsigned int *)((t1 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t1))->v) = 0x258;
            (((struct oEE_ushort *)(t1))->v) = 0x0;
            t16 = 0xEE;
        }
        t25 = t16;
    }
    return t25;
}
