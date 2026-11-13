/* 192-entry sprite queue used by all menu and HUD draws (0c027f90-0c028030) */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int memset(int, int, int);
int FUN_0c0e6fdc(int, int, int);

int ui_sprite_queue_reset(void)
{
    (((struct o4_uint *)0xC363A68)->v) = 0x0;
    (((struct o0_uint *)0xC363A68)->v) = 0x0;
    return memset(0xC363A70, 0x0, 0x3000);
}

int ui_sprite_queue_add(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t3 = *(int *)((a5 + 0x8));
    t4 = *(int *)((((short)a6 << 2) + t3));
    t5 = *(int *)0xC363A68;
    t6 = t3;
    if ((int)t5 < (int)0xC0) {
        *(unsigned char *)((((((t5 << 2) << 2) << 2) + 0xC363A70) + 0x0)) = ((signed char)(a9 >> 0));
        *(unsigned char *)(((((((*(int *)0xC363A68) << 2) << 2) << 2) + 0xC363A70) + 0x1)) = ((signed char)(a8 >> 0));
        *(volatile int *)0xC363A68;
        t3 = FUN_0c0e6fdc(a4, 0xC363A68, 0xC363A70);
        *(unsigned int *)(((((((*(int *)((t2 + 0x0))) << 2) << 2) << 2) + t0) + 0x4)) = ((t1 * 0x1C) + t4);
        *(unsigned int *)((t2 + 0x0)) = ((*(int *)((t2 + 0x0))) + 0x1);
        t6 = t3;
    }
    return t6;
}
