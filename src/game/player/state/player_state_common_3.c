/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064a1c-0c064b7c) */

struct o24_float { char p[0x24]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7254_float { char p[0x7254]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c062242(int, int);

int FUN_0c064a1c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    (((struct o2D9_uchar *)(a4))->v) = 0x2;
    t0 = pl_step_motion(a4);
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        u0 = *(float *)0xC494D1C;
        t0 = *(int *)((a4 + 0x1C));
        u1 = u0;
        if (u0 == 0.0f) {
            u1 = 0.00999999978f;
        }
        (((struct o7254_float *)(a4))->v) = ((((((struct o24_float *)(a4))->v)) - ((((struct o24_float *)(t0))->v))) + -50.0f);
        t0 = math_atan_angle16((((((struct o7254_float *)(a4))->v)) / u1));
        *(unsigned int *)((a4 + 0x2C)) = ((t0 + 0x4000) & 0xFFFF);
        (((struct o3C_float *)(a4))->v) = ((math_sin_angle16(((-((t0 + 0x4000) & 0xFFFF)) + 0x14000))) * 25.0f);
        (((struct o7254_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x2C)))) + 0x14000))) * 25.0f);
        (((struct o38_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o40_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o7254_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        pl_start_motion(a4, 0x1, 0x48);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x3));
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), a4 + 0x20);
        (((struct oEC_ushort *)(a4))->v) = 0x28;
        (((struct oF2_ushort *)(a4))->v) = 0x2;
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
