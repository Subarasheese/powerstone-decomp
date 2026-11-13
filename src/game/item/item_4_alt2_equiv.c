/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05ae26-0c05b6dc) */

struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int snd_play_side_se(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6fe8(int);

int item_tick_thrown(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x30C))) == 14) {
        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x35);
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC05B6A8))(a4, a5, a6, a7);
        }
        if (((((struct o274_float *)(a4))->v)) > 0.0f) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = 0x0;
            return 0xEC;
        }
        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0xB6);
        t0 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x16C);
        return 0x2E0;
    }
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    FUN_0c0e6fe8(a4);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 180.0f);
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o3C_float *)(a4))->v) = 10.0f;
    (((struct o40_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((t0 + 0x30)))) + 0x14000))) * 5.0f));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 180.0f);
    (((struct o48_float *)(a4))->v) = -2.0f;
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 180.0f);
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o107_uchar *)(a4))->v) = 0x0;
    return 0x107;
}
