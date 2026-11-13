/* state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 1 of 2 of the same module) (0c097c26-0c098160) */

struct o100_uchar { char p[0x100]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71E0_float { char p[0x71E0]; float v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o721F_uchar { char p[0x721F]; unsigned char v; };
struct o7234_uchar { char p[0x7234]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o729C_float { char p[0x729C]; float v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int pl_reset_pose(int);
int pl_timer_disable(int);
int pl_reset_combo_counter(int);
int pl_change_state(int, int, int);
int FUN_0c098026(int a4);

int pl_end_action_reset(int a4)
{
    register int t4;

    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0xD)) = 0x0;
    *(unsigned char *)((a4 + 0xC)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    pl_reset_pose(a4);
    (((struct o710A_uchar *)(a4))->v) = 0x0;
    (((struct o710B_uchar *)(a4))->v) = 0x0;
    (((struct o710C_uchar *)(a4))->v) = 0x0;
    pl_reset_combo_counter(a4);
    (((struct o7234_uchar *)(a4))->v) = 0x0;
    (((struct o720A_uchar *)(a4))->v) = 0x0;
    pl_timer_disable(a4);
    (((struct o71E0_float *)(a4))->v) = ((((struct o24_float *)(a4))->v));
    (((struct o729C_float *)(a4))->v) = 0.0f;
    (((struct o100_uchar *)(a4))->v) = 0x0;
    (((struct oF4_uint *)(a4))->v) = 0x0;
    (((struct o7238_uchar *)(a4))->v) = 0x0;
    (((struct o721F_uchar *)(a4))->v) = 0x0;
    t4 = FUN_0c098026(a4);
    if ((signed char)t4 != 0) {
        return pl_change_state(a4, 0xB, 0x0);
    }
    return pl_change_state(a4, 0x0, 0x0);
}
