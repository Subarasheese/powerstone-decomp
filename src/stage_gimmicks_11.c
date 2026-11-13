/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b0150-0c0b0324) */

struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();

int stage_gimmick_11_spawn(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x41F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B01CA;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, 0xE);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t1 = 0xF;
    }
    return t1;
}
