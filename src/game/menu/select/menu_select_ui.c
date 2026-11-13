/* UI task objects (spawn/update pairs) of the player-select and stage-select screens (0c0a71c4-0c0a7320) */

/* named globals (symbols.txt) */
extern char g_res_csel_ksel[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c0623a6(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);

int menu_ui_task_10(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)((a4 + 0x1C))) == 0) {
        return obj_destroy(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
        (((struct o48_float *)(a4))->v) = ((float)(*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14))) - ((((struct o3C_float *)(a4))->v)));
        (((struct o3C_float *)(a4))->v) = (float)(*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = (int)((float)(*(int *)((t0 + 0x14))) + (((((struct o48_float *)(a4))->v)) + (float)((((struct oEE_short *)(a4))->v))));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) & 0xFFFF);
        return 0x2E0;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x5;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x19;
    FUN_0c0623a6(((((struct o2E0_int *)(a4))->v)), ((int)g_res_csel_ksel), ((*(signed char *)((a4 + 0x4))) + 0x6));
    *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(a4))->v)) + 0x2)) = 0xF;
    *(unsigned int *)((((((struct o2E0_int *)(a4))->v)) + 0x14)) = ((short)(*(signed char *)((a4 + 0x4))) * (short)0x1C71);
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = 1.0f;
    math_rand_float();
    
    (((struct oEE_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x5);
    (((struct o3C_float *)(a4))->v) = (float)(*(int *)((((((struct o2E0_int *)((*(int *)((a4 + 0x1C)))))->v)) + 0x14)));
    return 0x3C;
}
