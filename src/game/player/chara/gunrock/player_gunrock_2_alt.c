/* character 4 (Gunrock) (0c07746c-0c079386) */

struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_gunrock_mode01_03_enter_v1(int);

int pl_gunrock_mode04_enter(int a4)
{
    pl_start_motion(a4, 0x1, 0x36);
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 40.0f;
    (((struct o48_float *)(a4))->v) = -2.79999995f;
    (((struct oEC_ushort *)(a4))->v) = 0x12;
    return 0xEC;
}

int pl_gunrock_mode01_03_enter(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x721E));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return pl_gunrock_mode01_03_enter_v1(a4);
    }
    return ((int (*)(int, int, int, int))(0xC077EDC))(a4, a5, a6, a7);
}
