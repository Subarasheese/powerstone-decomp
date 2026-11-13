/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a8600-0c0a8d6c) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int menu_ui_task_22(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x9)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned short *)((a4 + 0x6)) = 0x1F;
        *(unsigned char *)((a4 + 0x5)) = 0x19;
        t0 = 0x0;
        for (;;) {
            t1 = 0x3;
            if ((int)t0 < (int)0x2) {
                t1 = 0x1;
            }
            FUN_0c06233a((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))), 0xC664A60, (t1 + 0x25));
            *(unsigned char *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0))) + 0x2)) = 0x3F;
            *(volatile int *)((((0x2E0 + a4) + (t0 << 2)) + 0x0));
            FUN_0c0e6fe8();
            t1 = (t0 << 2);
            t0 = (t0 + 0x1);
            (((struct o1C_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 2.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = 2.0f;
            (((struct o24_float *)((*(int *)(((t1 + (0x2E0 + a4)) + 0x0)))))->v) = 2.0f;
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        (((struct oEC_ushort *)(a4))->v) = 0x10;
        (((struct oEE_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)((t0 - 1) + 0x1) == 0) {
        (((struct oEC_ushort *)(a4))->v) = 0x8;
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) ^ 0x1);
        if (((((struct oEE_short *)(a4))->v)) != 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2EC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        t1 = 0x2EC;
    }
    t0 = t1;
    if ((int)(unsigned char)(*(signed char *)0xC7F2EE4) >= (int)0x3) {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
