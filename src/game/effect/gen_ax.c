/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0e21b0(int, int);
int FUN_0c0e6e5c(int);
int FUN_0c0e6fe8(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int obj_destroy(int);
int snd_play_side_se(int, int);
int FUN_0c05e9d2(int a4);

int FUN_0c05e9d2(int a4)
{
    register int t0;
    register int t1;

    snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x32);
    t1 = *(signed char *)((a4 + 0x8));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            *(volatile short *)((a4 + 0xEC));
            *(unsigned char *)((t0 + 0x1)) = (FUN_0c0e6e5c(a4));
            t1 = (((struct oEC_short *)(t0))->v);
            (((struct oEC_ushort *)(t0))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x1E) {
                return obj_destroy(t0);
            }
            return 0xEC;
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
        *(volatile int *)(((0x2E0 + a4) + 0x0));
        *(volatile int *)(((0x2E0 + a4) + 0x4));
        return (FUN_0c0e6fe8((0x2E0 + a4)));
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
