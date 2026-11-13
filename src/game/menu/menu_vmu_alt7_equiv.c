/* VMU save/load menu UI (handlers over the vmu_step_* state machines) (0c01e798-0c020258) */

struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
int FUN_0c01ed94(int);
int FUN_0c01f48c(int, int);
int vmu_menu_spawn_message(int);
int FUN_0c01f874(int);
int vmu_menu_scan_port_masks(void);
int vmu_menu_update_objs(int, int, int, int);
int vmu_menu_pad_pressed(int);
int FUN_0c01fe52(int);
int snd_play_side_se(int, int);

int FUN_0c02002a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c01ed94(a4);
        }
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t0 = ((int (*)(int, int, int, int))(vmu_menu_update_objs))(a4, a5, a6, a7);
        vmu_menu_spawn_message(0x4);
        (((struct o2D_uchar *)(a4))->v) = 0x0;
        (((struct o2C_uchar *)(a4))->v) = 0x0;
        FUN_0c01f874(0x0);
    }
    t0 = vmu_menu_scan_port_masks();
    t1 = (signed char)t0;
    if ((signed char)t0 == 0) {
        FUN_0c01fe52(a4);
        t0 = vmu_menu_pad_pressed(0x2);
        if ((signed char)t0 != 0) {
            t0 = ((int (*)(void))(vmu_menu_update_objs))();
            snd_play_side_se(0x0, 0x4E);
            *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((a4 + 0x30)));
            t0 = 0x30;
        } else {
            t2 = vmu_menu_pad_pressed(0x4);
            t0 = (signed char)t2;
            if ((signed char)t2 != 0) {
                t2 = 0x4E;
                if ((((int)0x1 << (int)(((*(signed char *)((a4 + 0x2C))) << 1) + (*(signed char *)((a4 + 0x2D))))) & (*(int *)((a4 + 0xC)))) != 0) {
                    *(unsigned char *)((a4 + 0x3)) = 0x2;
                    (((struct o31_uchar *)(a4))->v) = 0x0;
                    FUN_0c01f48c((*(signed char *)((a4 + 0x2C))), (*(signed char *)((a4 + 0x2D))));
                    t2 = 0x4D;
                }
                t0 = (snd_play_side_se(0x0, t2));
            }
        }
        t1 = t0;
    }
    return t1;
}
