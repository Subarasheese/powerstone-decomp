/* @unit 0c06dff0-0c06e18c */
extern int pl_wangtang_motion_sfx(void);
int pl_wangtang_frame_hook(void)
{
    pl_wangtang_motion_sfx();
    return 0;
}
extern void (*g_pl_wangtang_start_action_tbl[])(void *);
extern void pl_mode01_03_enter(void*), pl_mode04_enter(void*), pl_mode05_enter(void*), pl_mode06_enter(void*), pl_mode07_enter(void*), pl_mode08_enter(void*), pl_mode09_enter(void*);
extern void pl_mode10_enter(void*), FUN_0c0645ee(void*), pl_mode11_enter(void*), pl_mode12_enter(void*), pl_mode13_enter(void*), pl_mode14_enter(void*), pl_mode15_enter(void*);
typedef struct { char pad0[0xf0]; short s; char pad1[0x71a8-0xf2]; char a8; char a9; char pad5[0x71f1-0x71aa]; char c71f1; char pad2[0x721f-0x71f2]; char c721f; char pad3[0x7238-0x7220]; char c7238; } O;
void FUN_0c06e004(O *p)
{
    switch (p->c721f) {
    case 0: case 2:
        p->s = 0;
        g_pl_wangtang_start_action_tbl[p->c7238](p);
        break;
    case 1: case 3: pl_mode01_03_enter(p); break;
    case 4: pl_mode04_enter(p); break;
    case 5: pl_mode05_enter(p); break;
    case 6: pl_mode06_enter(p); break;
    case 7: pl_mode07_enter(p); break;
    case 8: pl_mode08_enter(p); break;
    case 9: pl_mode09_enter(p); break;
    case 10:
        if (!p->c71f1) { pl_mode10_enter(p); } else { FUN_0c0645ee(p); }
        break;
    case 11: pl_mode11_enter(p); break;
    case 12: pl_mode12_enter(p); break;
    case 13: pl_mode13_enter(p); break;
    case 14: pl_mode14_enter(p); break;
    case 15: pl_mode15_enter(p); break;
    }
    p->a8 = p->a9 = 1;
}

extern void pl_start_motion(void *, int, int);
void pl_wangtang_start_motion_16(void *p) { pl_start_motion(p, 1, 16); }
void pl_wangtang_start_motion_24(void *p) { pl_start_motion(p, 1, 24); }
void pl_wangtang_start_motion_17(void *p) { pl_start_motion(p, 1, 17); }
void pl_wangtang_start_motion_25(void *p) { pl_start_motion(p, 1, 25); }
void pl_wangtang_start_motion_18(void *p) { pl_start_motion(p, 1, 18); }
void pl_wangtang_start_motion_29(void *p) { pl_start_motion(p, 1, 29); }
void pl_wangtang_start_motion_20(void *p) { pl_start_motion(p, 1, 20); }
void pl_wangtang_start_motion_26(void *p) { pl_start_motion(p, 1, 26); }
void pl_wangtang_start_motion_19(void *p) { pl_start_motion(p, 1, 19); }
