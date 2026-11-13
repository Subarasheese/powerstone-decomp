/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0367e4-0c036a6c) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
float math_cos_angle16(int);
float math_sin_angle16(int);

int obj_spawn_0367e4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t22;
    register float u10;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0368A0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = ((((struct o20_float *)(a4))->v));
        (((struct o24_float *)(t0))->v) = ((((struct o24_float *)(a4))->v));
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        u10 = 2.25f;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            u10 = 1.5f;
        }
        t12 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t12 << 1) + t12) << 2) << 1) + 0xC6002D0), 0x6);
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1F;
        (((struct o1C_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u10;
        (((struct o20_float *)(((((struct o2E0_int *)(t0))->v))))->v) = u10;
        (((struct o24_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 0.0f;
        t22 = 0x24;
    }
    return t22;
}

int obj_tick_0367e4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F12;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = (FUN_0c0555dc()) == 0;
    v0_0 = (v0_0);
    if (v0_1) goto L_C0368BC;
    *(unsigned char *)((v0_0 + 0x8)) = 0x4;
    L_C0368BC:;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (0.0249999985f);
    if ((v0_2 == 0)) goto L_C036908;
    if ((v0_1 == 1)) goto L_C036968;
    if ((v0_1 != 2)) goto L_C0368D2;
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_0);
    if ((0.0f > ((((struct o24_float *)(((((struct o2E0_int *)(v0_0))->v))))->v)))) goto L_C036A24;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0xEC);
    if (((short)(v0_2 - 1) != 0)) goto L_C036A40;
    L_C036A24:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    L_C036A40:;
    return v0_1;
    L_C0368D2:;
    if (!((v0_1 != 3))) goto L_C036A2C;
    if ((v0_1 != 4)) goto L_C0368E2;
    goto L_C036A2C;
    L_C036A2C:;
    return obj_destroy(v0_0);
    L_C0368E2:;
    goto L_C036A40;
    L_C036968:;
    if (((*(signed char *)((v0_0 + 0x2D8))) != 0)) goto L_C03697E;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (!(((short)(v0_1 - 1) != 0))) goto L_C03697E;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((struct o38_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - ((((struct o3C_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o40_float *)(v0_0))->v)));
    v0_0 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + w0_0);
    v0_1 = (0x24);
    goto L_C036A40;
    L_C03697E:;
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) - ((((struct o38_float *)(v0_0))->v)));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) + ((((struct o3C_float *)(v0_0))->v)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - ((((struct o40_float *)(v0_0))->v)));
    v0_1 = (((struct o2E0_int *)(v0_0))->v);
    (((struct o24_float *)(v0_1))->v) = (((((struct o24_float *)(v0_1))->v)) - w0_0);
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    goto L_C036A24;
    L_C036908:;
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    w0_1 = (w0_1 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000))));
    (((struct o38_float *)(v0_0))->v) = (w0_1 * 50.0f);
    (((struct o3C_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000))) * 50.0f);
    w0_2 = math_sin_angle16(((-(*(int *)((v0_0 + 0x2C)))) + 0x14000));
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x30)))) + 0x14000));
    w0_2 = (w0_2 * w0_1);
    (((struct o40_float *)(v0_0))->v) = (w0_2 * 50.0f);
    (((struct o2D9_uchar *)(v0_0))->v) = 0x2;
    (((struct oEC_ushort *)(v0_0))->v) = 0x3C;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    w0_1 = (w0_1);
    goto L_C036968;
}
