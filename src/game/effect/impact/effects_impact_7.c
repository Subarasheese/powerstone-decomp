/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6dcc-0c0b6f5c) */

/* named globals (symbols.txt) */
extern char g_res_item[];
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c0e6fe8();
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0e21b0(int, int);

int fx_spawn_05(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t14;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 8)) = a6;
    t0 = obj_create(0x2, 0x1, 0x1);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x6)) = 0x15;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 0));
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)((t0 + 0x30)) = (*(int *)(((int)stk + 4)));
        t6 = ((int (*)(void))(FUN_0c0e6fe8))();
        t7 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 0)) = (0x14000 - t7);
        (((struct o38_float *)(t0))->v) = ((math_cos_angle16((0x14000 - t7))) * (*(float *)0xC0B6F38));
        (((struct o3C_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = ((math_sin_angle16((*(int *)(((int)stk + 0))))) * (*(float *)0xC0B6F38));
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0xB;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        obj_set_record(t0, 0xF);
        *(unsigned int *)((t0 + 0x10)) = 0xC0B6EAE;
        t14 = (((struct o2E0_int *)(t0))->v);
        FUN_0c06233a(t14, ((int)g_res_item), 0x1D);
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x2)) = 0x1;
        t16 = 0x1;
    }
    return t16;
}

int fx_update_05(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x1);
        if (((int)((((struct oEC_short *)(a4))->v)) <= (int)0x1E) && (t0 = *(signed char *)((a4 + 0x108)), t0 == 0)) {
            if ((int)((((struct oEC_short *)(a4))->v)) < (int)0x1E) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.0299999993f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.0299999993f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0299999993f);
            }
            return FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return obj_destroy(a4, a5, a6, a7);
}
