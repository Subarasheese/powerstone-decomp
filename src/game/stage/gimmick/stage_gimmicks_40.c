/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5308-0c0b5420) */

/* named globals (symbols.txt) */
extern char g_cam_split_flag[];
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);

int stage_gimmick_37_spawn(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B53CE;
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x18))) + (((t2 << 1) + t2) << 2))); }
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(((*(int *)((((short)((short)(*(signed char *)0xC7F3051) * (short)0x34) + 0xC350B60) + 0x1C))) + (((t2 << 1) + t2) << 2))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33AA4C); }
        t2 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t2, 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

void stage_gimmick_37_update(void)
{
    if ((*(signed char *)g_cam_split_flag) == 0) {
        ((int (*)(void))(0xC0B5298))();
    return;
    }
}
