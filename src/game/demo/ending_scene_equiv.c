/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c0158d8-0c01628c) */

/* named globals (symbols.txt) */
int FUN_0c015fda(int a4, int a5, int a6, int a7);
int FUN_0c0158ee(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
extern char g_ending_scene_work[];
extern char g_res_eyecatch[];
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
extern int FUN_0c016238();
float math_rand_float(void);
int FUN_0c0e6f24(void);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
int ui_sprite_queue_add(int, int, int, int, int, int);

int obj_step_pos_vel_acc(int a4);
int FUN_0c0161d8(void);

int FUN_0c0158d8(void)
{
    (((struct o0_uchar *)g_ending_scene_work)->v) = 0x2;
    (((struct o1_uchar *)g_ending_scene_work)->v) = 0x0;
    return 0x0;
}

int FUN_0c0158e4(void)
{
    (((struct o1_uchar *)g_ending_scene_work)->v) = 0x0;
    (((struct o0_uchar *)g_ending_scene_work)->v) = 0x0;
    return 0x0;
}


int FUN_0c015ac8(int a4)
{
    int stk[16];
    register int t0;
    register int t12;

    t0 = (((struct o44_int *)(a4))->v);
    *(float *)(((int)stk + 12)) = (((((struct o1C_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x4))));
    *(float *)(((int)stk + 16)) = (((((struct o20_float *)(a4))->v)) + (float)(*(short *)((t0 + 0x6))));
    *(float *)(((int)stk + 20)) = ((((struct o24_float *)(a4))->v));
    *(float *)(((int)stk + 24)) = ((((struct o14_float *)(a4))->v));
    *(float *)(((int)stk + 28)) = ((((struct o18_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 48)) = ((((struct o40_int *)(a4))->v));
    *(float *)(((int)stk + 52)) = ((((struct o10_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 60)) = (unsigned short)(*(short *)((t0 + 0x2)));
    *(int *)((int)stk + 4) = 0x0;
    t12 = (*(signed char *)((a4 + 0xC)));
    *(int *)((int)stk + 0) = t12;
    return (ui_sprite_queue_add((((int)stk + 0) + 0x8), ((int)g_res_eyecatch), (unsigned char)(*(signed char *)((a4 + 0x4))), (*(short *)((t0 + 0x0))), t12, 0x0));
}

int obj_step_pos_vel_acc(int a4)
{
    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o28_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o34_float *)(a4))->v)));
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((struct o2C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o38_float *)(a4))->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o30_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
    return 0x30;
}


int FUN_0c0161d8(void)
{
    register int t0;
    register int t6;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x3)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x2)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x1)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x0)) = 0x0;
        *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x7)) = 0x0;
        if ((int)t0 < (int)0x14) {
            *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x4)) = 0x0;
            t3 = t0;
        } else {
            *(unsigned char *)((((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0) + 0x4)) = 0x1;
            t3 = (t0 + 0xEC);
        }
        t6 = ((short)(((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC361CD0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t6 + 0x5)) = t3;
        if ((int)t0 >= (int)0x15) {
            break;
        }
    }
    return t3;
}
