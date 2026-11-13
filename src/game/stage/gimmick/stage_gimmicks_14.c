/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0710-0c0b08a8) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
struct oEC_short { char p[0xEC]; short v; };
int FUN_0c06231c(int, int, int);
int _modls(int);
struct oEE_short { char p[0xEE]; short v; };


int stage_gimmick_15_spawn(void)
{
    register int t0;
    register int t12;
    register int t1;
    register int t8;

    t0 = obj_create(0x5, 0x1, 0x4, 0x0);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B07F2;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A3E0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A3D4); }
        t1 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))), 0xC664958, 0x1E);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t1 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC33A3EC)); }
            t8 = (t1 << 2);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((*(int *)((((0x2E0 + t0) + t8) + 0x0))) + 0x14)) = (*(int *)((t8 + 0xC33A41C)));
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t12 = 0xC33A41C;
    }
    return t12;
}

int stage_gimmick_15_update(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t2 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                (((struct oEC_ushort *)(a4))->v) = 0x6;
                (((struct oEE_ushort *)(a4))->v) = ((int)((int)(((((struct oEE_short *)(a4))->v)) + 0x1) % (int)0x4));
                t0 = (0x2E0 + a4);
                t3 = 0x0;
                for (;;) {
                    t5 = *(int *)((t0 + 0x0));
                    t0 = (t0 + 0x4);
                    t4 = FUN_0c06231c(t5, 0xC664958, ((*(signed char *)((a4 + 0xEE))) + 0x1E));
                    t3 = (t3 + 0x1);
                    if ((int)t3 >= (int)0x4) {
                        break;
                    }
                }
                t2 = t4;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x1;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 - 1);
        t2 = 0xEC;
        if ((short)(t1 - 1) == 0) {
            (((struct oEC_ushort *)(a4))->v) = 0x6;
            (((struct oEE_ushort *)(a4))->v) = ((int)((int)(((((struct oEE_short *)(a4))->v)) + 0x1) % (int)0x4));
            t1 = (0x2E0 + a4);
            t3 = 0x0;
            for (;;) {
                t5 = *(int *)((t1 + 0x0));
                t1 = (t1 + 0x4);
                t4 = FUN_0c06231c(t5, 0xC664958, ((*(signed char *)((a4 + 0xEE))) + 0x1E));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x4) {
                    break;
                }
            }
            t2 = t4;
        }
        t0 = t2;
    }
    return t0;
}
