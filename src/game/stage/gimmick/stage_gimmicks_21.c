/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b1264-0c0b13c8) */

struct o90_uint { char p[0x90]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
int memset(int, int, int);

int stage_gimmick_20_spawn(void)
{
    int stk[1];
    register int t0;
    register int t13;
    register int t1;
    register int t3;
    register int t8;
    register int t11;

    t0 = obj_create(0x5, 0x1, 0x9, 0x0);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B1A60;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC33A550); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33A568); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33A55C); }
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = (((t1 << 1) + t1) << 2);
            t3 = *(int *)((((((t1 << 1) + t1) << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t3, 0xC664958, 0x2E);
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x4)) = *(struct mv3 *)((0xC152E90 + (signed char)(((t1 << 1) + t1) << 2))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x10)) = *(struct mv3 *)((0xC152EB4 + (signed char)(((t1 << 1) + t1) << 2))); }
            memset((t3 + 0x28), 0x0, 0x28);
            t8 = *(int *)((((0x2E0 + t0) + (*(int *)(((int)stk + 0)))) + 0x4));
            FUN_0c06233a(t8, 0xC664958, 0x2F);
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            *(unsigned short *)((t8 + 0x2)) = 0xF;
            (((struct o90_uint *)(t8))->v) = (t3 + 0x50);
            t11 = *(int *)((((0x2E0 + t0) + (*(int *)(((int)stk + 0)))) + 0x8));
            FUN_0c06233a(t11, 0xC664958, 0x30);
            *(unsigned char *)((t11 + 0x0)) = 0x1;
            *(unsigned short *)((t11 + 0x2)) = 0xF;
            t1 = (t1 + 0x1);
            (((struct o90_uint *)(t11))->v) = (t3 + 0x50);
            if ((int)t1 >= (int)0x3) {
                break;
            }
        }
        t13 = 0x90;
    }
    return t13;
}
