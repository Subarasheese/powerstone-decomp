/* character special-move effect: homing shell constructor (0c0c74bc) and per-frame update (0c0c7780 in next row) (0c0c74bc-0c0c7668) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int _quick_odd_mvn(void);
int thunk_math_mat_get_translate(int, int);

int fx_homing_shell_create(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = obj_create(0x1, 0x1, 0x2, 0x0);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    *(unsigned short *)((t0 + 0x6)) = 0x1F;
    *(unsigned char *)((t0 + 0x5)) = 0x19;
    *(unsigned int *)((t0 + 0x10)) = 0xC0C7780;
    t1 = *(signed char *)(((0x3 + a4) + 0x0));
    thunk_math_mat_get_translate((((short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0) + (0x300 + ((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4))) + (short)((short)(*(signed char *)(((unsigned char)a5 + 0xC153220))) * (short)0xB0)), (t0 + 0x20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
    *(unsigned int *)((t0 + 0x2C)) = (*(int *)((((unsigned char)a5 << 2) + 0xC153228)));
    (((struct o58_float *)(t0))->v) = 0.099999994f;
    (((struct o54_float *)(t0))->v) = 0.099999994f;
    (((struct o50_float *)(t0))->v) = 0.099999994f;
    (((struct o118_uint *)(t0))->v) = 0x0;
    *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x41F;
    t1 = *(signed char *)((a4 + 0x3));
    FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x1C)) = *(struct mv3 *)(0xC153254); }
    (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
    *(unsigned int *)((t0 + 0x1C)) = a4;
    *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x3F;
    t1 = *(signed char *)((a4 + 0x3));
    FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x1);
    t1 = (((struct o2E4_int *)(t0))->v);
    (((struct o24_float *)(t1))->v) = 0.099999994f;
    (((struct o20_float *)(t1))->v) = 0.099999994f;
    (((struct o1C_float *)(t1))->v) = 0.099999994f;
    *(unsigned int *)((t0 + 0x1C)) = a4;
    (((struct oF2_ushort *)(t0))->v) = (unsigned char)a5;
    (((struct o101_uchar *)(t0))->v) = 0x1;
    (((struct o102_uchar *)(t0))->v) = 0x0;
    return obj_set_record_char(t0, 0x74);
}
