/* character 2 (Wang Tang) (0c071c50-0c071e60) */

struct o0_float { float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_step_motion(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
int pl_start_motion_owner(int, int, int);
int pl_step_motion_owner(int);
int pl_change_state(int, int, int);

int pl_wangtang_special2_phase3(int a4)
{
    register int t0;
    register int t1;

    pl_apply_velocity(a4);
    pl_apply_acceleration(a4);
    pl_step_motion(a4);
    pl_apply_motion_translation(a4);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0xEC;
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)(((*(int *)((a4 + 0x1C))) + 0xA)) = 0x2;
        (((struct oEC_ushort *)((*(int *)((a4 + 0x1C)))))->v) = 0x0;
        t0 = pl_angle_to_opponent(a4);
        *(unsigned int *)((a4 + 0x30)) = t0;
        (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-t0) + 0x14000))) * ((((struct o0_float *)0xC071D6C)->v))));
        (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o0_float *)0xC071D6C)->v))));
        (((struct o3C_float *)(a4))->v) = ((((struct o8_float *)0xC071D6C)->v));
        (((struct o48_float *)(a4))->v) = ((((struct oC_float *)0xC071D6C)->v));
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int pl_wangtang_victim_phase2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0xC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                pl_step_motion_owner(a4);
                pl_apply_motion_translation(a4);
                if ((*(signed char *)((a4 + 0x71AA))) != 0) {
                    return pl_change_state(a4, 0xF, 0x0);
                }
                return 0x71AA;
            }
        } else {
            pl_start_motion_owner(a4, 0x4, 0x40);
            (((struct o71A9_uchar *)(a4))->v) = 0x1;
            (((struct o71A8_uchar *)(a4))->v) = 0x1;
            (((struct o710B_uchar *)(a4))->v) = 0x1;
            (((struct o710C_uchar *)(a4))->v) = 0x1;
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
        pl_step_motion_owner(a4);
        pl_apply_motion_translation(a4);
        t0 = 0x71AA;
        if ((*(signed char *)((a4 + 0x71AA))) != 0) {
            pl_start_motion_owner(a4, 0x2, 0x63);
            t1 = *(signed char *)((a4 + 0xC));
            *(unsigned char *)((a4 + 0xC)) = (t1 + 0x1);
            t0 = (t1 + 0x1);
        }
        return t0;
    }
    pl_step_motion_owner(a4);
    return (pl_apply_motion_translation(a4));
}
