/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05c1c0-0c05c6e0) */

struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int item_draw_marker(int, int, int, float, float, float, float);
int FUN_0c05c3be(int);
int FUN_0c05c44e(void);
int obj_set_mode_owner(int, int);
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };

int FUN_0c05c370(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t5;

    t0 = *(int *)((a4 + 0x1C));
    item_draw_marker(a4, a5, a6, f4, f5, f6, f7);
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        *(volatile signed char *)((a4 + 0x3));
        return obj_set_mode_owner(a4, 0x4);
    }
    t5 = *(signed char *)((a4 + 0x8));
    if (t5 != 0) {
        if (t5 != 1) {
        } else {
            FUN_0c05c44e();
        }
    } else {
        FUN_0c05c3be(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c05c452(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    item_draw_marker(a4, a5, a6, f4, f5, f6, f7);
    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) - 3);
    if ((int)((((struct oF2_short *)(a4))->v)) < 0) {
        (((struct oF2_ushort *)(a4))->v) = 0x0;
        *(volatile signed char *)((a4 + 0x3));
        return obj_set_mode_owner(a4, 0x4);
    }
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        *(volatile signed char *)((a4 + 0x3));
        return obj_set_mode_owner(a4, 0x4);
    }
    return ((int (*)(void))(0xC05C4C4))();
}
