/* same module (0c0eb238-0c0eb400) */

struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
int FUN_0c0ed7e4(int);
int FUN_0c0ed8f4(int, int);
int FUN_0c0ff1ac(int, int, int, int);
int memset(int, int, int);

int FUN_0c0eb238(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC346B74 = 0xC7FD4E0;
    memset(0xC7FD4E0, 0x0, 0x114);
    *(unsigned int *)(((*(int *)0xC346B74) + 0x0)) = 0xA05F7800;
    (((struct oD4_uint *)((*(int *)0xC346B74)))->v) = 0x1;
    (((struct oD8_uint *)((*(int *)0xC346B74)))->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x0)) = t0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x28)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x2C)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x30)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x4)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x8)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0xC)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x10)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x14)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x18)) = 0x3;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x1C)) = 0x0;
        *(unsigned int *)(((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)) + 0x20)) = 0x0;
        FUN_0c0ed7e4((((*(int *)0xC346B74) + 0x4) + (t0 * 0x34)));
        t1 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((0xDC + (*(int *)0xC346B74)) + t1) + 0x0)) = 0x0;
        *(unsigned int *)((((0xFC + (*(int *)0xC346B74)) + t1) + 0x0)) = 0x0;
        *(unsigned int *)(((t1 + (0xEC + (*(int *)0xC346B74))) + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o10C_uint *)((*(int *)0xC346B74)))->v) = 0x0;
    (((struct o110_uint *)((*(int *)0xC346B74)))->v) = 0x0;
    FUN_0c0ed8f4(0xC000000, 0xCFFFFFF);
    (((struct oD4_uint *)((*(int *)0xC346B74)))->v) = 0x1;
    t0 = *(int *)0xC346B74;
    *(unsigned int *)(((0x24 + (t0 + 0x4)) + 0x0)) = (FUN_0c0ff1ac(0xA60, 0xC0ED78C, 0x60, (t0 + 0x4)));
    t0 = *(int *)0xC346B74;
    *(unsigned int *)(((0x24 + (t0 + 0x38)) + 0x0)) = (FUN_0c0ff1ac(0xA80, 0xC0ED78C, 0x60, (t0 + 0x38)));
    t0 = *(int *)0xC346B74;
    *(unsigned int *)(((0x24 + (t0 + 0x6C)) + 0x0)) = (FUN_0c0ff1ac(0xAA0, 0xC0ED78C, 0x60, (t0 + 0x6C)));
    t0 = *(int *)0xC346B74;
    *(unsigned int *)(((0x24 + ((t0 + 0x4) + 0x9C)) + 0x0)) = (FUN_0c0ff1ac(0xAC0, 0xC0ED78C, 0x60, ((t0 + 0x4) + 0x9C)));
    *(unsigned int *)0xC7FD608 = 0x0;
    return 0x0;
}
