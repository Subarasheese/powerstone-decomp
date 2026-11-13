/* player object setup: list search, tint, scale, spawn positions, model nodes (0c098c48-0c099c08) */

struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7110_float { char p[0x7110]; float v; };
struct o7114_float { char p[0x7114]; float v; };
struct o7118_float { char p[0x7118]; float v; };
int pl_reset_scale(int);
int FUN_0c099966(int);
int FUN_0c099a1c(void);

int pl_reset_pose(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    pl_reset_scale(a4);
    FUN_0c099966(a4);
    FUN_0c099a1c();
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    (((struct o7118_float *)(a4))->v) = 0.0f;
    (((struct o7114_float *)(a4))->v) = 0.0f;
    (((struct o7110_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    (((struct o710A_uchar *)(a4))->v) = (*(signed char *)(((signed char)((t1 << 1) + t1) + ((signed char)((t0 << 1) + (t0 << 2)) + 0xC150B0C))));
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)(((0x71F1 + a4) + 0x0));
    (((struct o710B_uchar *)(a4))->v) = (*(signed char *)(((((signed char)((t0 << 1) + (t0 << 2)) + 0xC150B0C) + (signed char)((t1 << 1) + t1)) + 0x1)));
    t0 = *(signed char *)((a4 + 0x4));
    t1 = *(signed char *)((a4 + 0x71F1));
    t2 = *(signed char *)((((0xC150B0C + (signed char)((t0 << 1) + (t0 << 2))) + (signed char)((t1 << 1) + t1)) + 0x2));
    (((struct o710C_uchar *)(a4))->v) = t2;
    return t2;
}
