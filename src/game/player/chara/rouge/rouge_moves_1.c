/* Rouge (char 7) frame hook, move init stubs and attack dispatch (part 1 of 2 of the same module) (0c080ff4-0c081130) */

/* named globals (symbols.txt) */
extern char g_rouge_move_init_tab[];
struct o2DC_int { char p[0x2DC]; int v; };
struct o72BC_uchar { char p[0x72BC]; unsigned char v; };
int pl_rouge_play_motion_sounds(int);
int fx_spawn_31(int);
struct Obj {
    char pad0[0xF0];
    short field_f0;
    char pad1[0x71A8 - 0xF2];
    char flag_71a8;
    char flag_71a9;
    char pad2[0x721F - 0x71AA];
    signed char mode;
    char pad3[0x7238 - 0x7220];
    unsigned char sel;
};
void pl_falcon_state_enter(struct Obj *obj);
int pl_start_motion(int, int, int);
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };

int pl_rouge_frame_hook(int a4)
{
    int t2;

    pl_rouge_play_motion_sounds(a4);
    if (((*(signed char *)((a4 + 0x71F3))) != 0) && (t2 = *(signed char *)(((0x72BC + a4) + 0x0)), t2 == 0)) {
        (((struct o72BC_uchar *)(a4))->v) = 0x1;
        fx_spawn_31(a4);
    }
    if ((*(signed char *)((a4 + 0x71F3))) == 0) {
        (((struct o72BC_uchar *)(a4))->v) = 0x0;
    }
    if ((((((struct o2DC_int *)(a4))->v)) & 0x400) != 0) {
        *(unsigned short *)(((0x72BC + a4) + 0x2)) = ((*(short *)(((0x72BC + a4) + 0x2))) + 0x1);
        if ((int)(*(short *)(((0x72BC + a4) + 0x2))) >= (int)0xFF) {
            *(unsigned short *)(((0x72BC + a4) + 0x2)) = 0xFF;
        }
    } else {
        *(unsigned short *)(((0x72BC + a4) + 0x2)) = 0x0;
    }
    return 0x0;
}

void pl_rouge_attack_init(struct Obj *obj)
{
    void (**handlers)(struct Obj *) = (void (**)(struct Obj *))((int)g_rouge_move_init_tab);
    signed char mode_val = obj->mode;
    if (mode_val == 0 || mode_val == 2) {
        obj->field_f0 = 0;
        handlers[obj->sel](obj);
        obj->flag_71a9 = 1;
        obj->flag_71a8 = 1;
    } else {
        pl_falcon_state_enter(obj);
    }
}

int pl_rouge_move00_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x18);
}

int pl_rouge_move01_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x10);
}

int pl_rouge_move02_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x19);
}

int pl_rouge_move03_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x11);
}

int pl_rouge_move04_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x3);
}

int pl_rouge_move05_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1A);
}

int pl_rouge_move06_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x12);
}

int pl_rouge_move07_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x1C);
}

int pl_rouge_move08_init(int a4)
{
    return pl_start_motion(a4, 0x1, 0x13);
}

int pl_rouge_move09_init(int a4)
{
    pl_start_motion(a4, 0x1, 0x1B);
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    return 0xEE;
}
