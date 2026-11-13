/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0aba84-0c0abd20) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
struct o2E0_int { char p[0x2E0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);

int menu_ui_task_38(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
                    t0 = 0x0;
                    t1 = (0x2E0 + a4);
                    t2 = 0x0;
                    for (;;) {
                        t4 = *(int *)((((0x2E0 + a4) + t0) + 0x0));
                        (((struct o40_float *)(t4))->v) = (((((struct o40_float *)(t4))->v)) - 0.049999997f);
                        t2 = (t2 + 0x1);
                        t3 = 0x40;
                        if (0.0f > ((((struct o40_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v))) {
                            (((struct o40_float *)((*(int *)((t1 + 0x0)))))->v) = 0.0f;
                            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                            t3 = 0x0;
                        }
                        t1 = (t1 + 0x4);
                        t0 = (t0 + 0x4);
                        if ((int)t2 >= (int)0x8) {
                            break;
                        }
                    }
                    return t3;
                }
                return obj_destroy(a4, 0xFFFF, a6, a7);
            }
            *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
            t0 = 0x0;
            for (;;) {
                if ((t0 & 0x1) != 0) {
                    t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
                    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) + 0xB6);
                } else {
                    t1 = *(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
                    *(unsigned int *)((t1 + 0x14)) = ((*(int *)((t1 + 0x14))) - 0xB6);
                }
                t1 = (t0 << 2);
                t0 = (t0 + 0x1);
                t2 = *(int *)((((0x2E0 + a4) + t1) + 0x0));
                *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) & 0xFFFF);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0xEC;
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
                t0 = 0x0;
                t2 = 0x0;
                for (;;) {
                    t2 = (t2 + 0x1);
                    *(unsigned short *)(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x2)) = 0x40F;
                    (((struct o40_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v) = 1.0f;
                    t0 = (t0 + 0x4);
                    if ((int)t2 >= (int)0x8) {
                        break;
                    }
                }
                t1 = 0x40;
            }
            return t1;
        }
        *(unsigned int *)((a4 + 0x30)) = ((0xA93E + (*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)))) & 0xFFFF);
        t0 = *(signed char *)0xC7F2EE7;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 2) {
        } else {
            t0 = *(signed char *)0xC7F2EE8;
            t2 = (unsigned char)t0;
            if ((unsigned char)t0 != 1) {
            } else {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                *(unsigned char *)((a4 + 0x9)) = 0x0;
                (((struct oEC_ushort *)(a4))->v) = 0x3C;
                t2 = 0xEC;
            }
            t1 = t2;
        }
        return t1;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    t0 = 0x0;
    for (;;) {
        FUN_0c0623a6((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), ((int)g_res_csel_ksel), (t0 + 0x6));
        *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x1;
        *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x2)) = 0xF;
        t1 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((*(int *)(((t1 + (0x2E0 + a4)) + 0x0))) + 0x14)) = 0x0;
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return 0xF;
}
