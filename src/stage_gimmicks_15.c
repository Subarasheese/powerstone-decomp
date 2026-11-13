/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b08a8-0c0b0a30) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c06231c(int, int, int);
int FUN_0c0e6e5c(int);

int stage_gimmick_16_spawn(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = obj_create(0x5, 0x1, 0x4);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        *(unsigned char *)((t1 + 0x5)) = 0x19;
        *(unsigned char *)((t1 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t1))->v) = 0x0;
        (((struct oEE_ushort *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC0B097C;
        *(unsigned char *)((t1 + 0x4)) = 0xD;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t3 = ((int (*)(void))(FUN_0c0e6fe8))();
        t3 = t0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))), 0xC664958, 0x25);
            *(unsigned char *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0))) + 0x2)) = 0xF;
            *(volatile int *)((((0x2E0 + t1) + (t3 << 2)) + 0x0));
            t0 = ((int (*)(void))(FUN_0c0e6fe8))();
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int stage_gimmick_16_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        t3 = t2;
        if (t2 == 1) {
            t2 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
            t4 = 0xEC;
            if ((short)(t2 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x6;
                *(volatile short *)((a4 + 0xEE));
                (((struct oEE_ushort *)(a4))->v) = (FUN_0c0e6e5c(0x0));
                t2 = (0x2E0 + a4);
                t5 = t0;
                for (;;) {
                    t6 = *(int *)((t2 + 0x0));
                    t2 = (t2 + 0x4);
                    t0 = FUN_0c06231c(t6, 0xC664958, ((*(signed char *)((a4 + 0xEE))) + 0x25));
                    t5 = (t5 + 0x1);
                    if ((int)t5 >= (int)0x4) {
                        break;
                    }
                }
                t4 = t0;
            }
            t3 = t4;
        }
        t0 = t3;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        t3 = 0xEC;
        if ((short)(t2 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x6;
            *(volatile short *)((a4 + 0xEE));
            (((struct oEE_ushort *)(a4))->v) = (FUN_0c0e6e5c(0x0));
            t2 = (0x2E0 + a4);
            t4 = t1;
            for (;;) {
                t5 = *(int *)((t2 + 0x0));
                t2 = (t2 + 0x4);
                t1 = FUN_0c06231c(t5, 0xC664958, ((*(signed char *)((a4 + 0xEE))) + 0x25));
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)0x4) {
                    break;
                }
            }
            t3 = t1;
        }
        t0 = t3;
    }
    return t0;
}
