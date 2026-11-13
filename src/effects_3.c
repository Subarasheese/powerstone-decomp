/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c032fd4-0c033114) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int fx_spawn_032fd4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t29;
    register int t1;
    register int t20;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    t29 = t0;
    if (t0 == 0) {
        t1 = obj_create(0x5, 0x1, 0x3);
        t20 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned char *)((t1 + 0x3)) = (*(signed char *)((a4 + 0x3)));
            *(unsigned char *)((t1 + 0x1)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            *(unsigned char *)((t1 + 0x5)) = 0x19;
            *(unsigned int *)((t1 + 0x10)) = 0xC033114;
            FUN_0c0e6fe8();
            FUN_0c0e6fe8();
            *(unsigned int *)((t1 + 0x2C)) = 0x4000;
            *(unsigned int *)((t1 + 0x30)) = 0x0;
            *(unsigned int *)((t1 + 0x34)) = 0x0;
            t5 = 0x0;
            for (;;) {
                *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))) + 0x2)) = 0x1F;
                t8 = *(signed char *)((a4 + 0x3));
                FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0))), ((signed char)((((t8 << 1) + t8) << 2) << 1) + 0xC6002D0), (t5 + 0xB));
                *(volatile int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0));
                FUN_0c0e6fe8();
                *(volatile int *)((((0x2E0 + t1) + (t5 << 2)) + 0x0));
                FUN_0c0e6fe8();
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x3) {
                    break;
                }
            }
            (((struct o118_uint *)(t1))->v) = (0xC7E4130 + (unsigned short)((unsigned short)(*(signed char *)((t1 + 0x3))) * (unsigned short)0x72D0));
            *(unsigned char *)((t1 + 0x8)) = (*(signed char *)(((int)stk + 0)));
            *(unsigned int *)((t1 + 0x1C)) = a4;
            (((struct oEC_ushort *)(t1))->v) = 0x258;
            (((struct oEE_ushort *)(t1))->v) = 0x0;
            t20 = 0xEE;
        }
        t29 = t20;
    }
    return t29;
}
