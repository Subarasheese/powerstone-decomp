/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b4dc4-0c0b5308) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

int stage_gimmick_36_spawn_b(int a4)
{
    register int t0;
    register int t5;
    register int t1;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5180;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)((a4 + 0x50)); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t1 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t1, 0xC664958, ((((struct oF2_short *)((*(int *)((t0 + 0x1C)))))->v)));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x2)) = 0x21F;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o4C_float *)(t1))->v) = 0.5f;
        t5 = 0x4C;
    }
    return t5;
}
