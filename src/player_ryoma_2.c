/* character 1 (Ryoma) (0c06ce50-0c06cf4c) */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);

int pl_ryoma_update_action_21(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06CB36))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC06CAB4))(a4, a5, a6, a7);
}

int pl_ryoma_special2_phase0(int a4)
{
    register int t4;

    obj_place_linked_ahead(a4, 0x0, 140.0f);
    pl_start_motion(a4, 0x4, 0x3);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x4, 0x34);
    t4 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t4))->v) = 0x1;
    (((struct o71A8_uchar *)(t4))->v) = 0x1;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 14.0f;
    (((struct o48_float *)(a4))->v) = -1.0f;
    (((struct o710C_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1))) == 0) {
        (((struct o710A_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    }
    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0xC;
    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xB)) = 0x2;
    *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xC)) = 0x0;
    (((struct oF0_ushort *)(a4))->v) = 0x0;
    return 0xF0;
}
