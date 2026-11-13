/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c028dec-0c029268) */

struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_destroy(int, int, int, int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };

int FUN_0c028dec(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x8));
    v0_1 = (v0_2);
    w0_0 = (1.0f);
    if ((v0_2 == 0)) goto L_C028DFC;
    if ((v0_1 == 1)) goto L_C028E20;
    L_C028E88:;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) - 1);
    v0_1 = (0xEC);
    if (((int)((((struct oEC_short *)(v0_0))->v)) > 0)) goto L_C028E9C;
    return obj_destroy(v0_0, R5, a6, a7);
    L_C028E9C:;
    return v0_1;
    L_C028E20:;
    v0_2 = *(signed char *)((v0_0 + 0x9));
    v0_1 = (v0_2);
    R5 = (0x8);
    w0_1 = ((*(float *)0xC028EB8));
    if ((v0_2 == 0)) goto L_C028E3C;
    if ((v0_1 == 1)) goto L_C028E46;
    if ((v0_1 == 2)) goto L_C028E6A;
    if ((v0_1 == 3)) goto L_C028E7A;
    goto L_C028E88;
    L_C028E7A:;
    v0_1 = (((struct oEC_short *)(v0_0))->v);
    w0_0 = (((float)v0_1 / w0_1));
    FPUL_ = (v0_1);
    L_C028E84:;
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    goto L_C028E88;
    L_C028E6A:;
    if (((int)((((struct oEC_short *)(v0_0))->v)) > (int)R5)) goto L_C028E88;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C028E88;
    L_C028E46:;
    (((struct oF2_ushort *)(v0_0))->v) = (((((struct oF2_short *)(v0_0))->v)) - 1);
    if ((((((struct oF2_short *)(v0_0))->v)) != 0)) goto L_C028E5A;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    L_C028E5A:;
    v0_1 = (((struct oF2_short *)(v0_0))->v);
    w0_0 = (((-((float)v0_1 / w0_1)) + w0_0));
    FPUL_ = (v0_1);
    goto L_C028E84;
    L_C028E3C:;
    (((struct oF2_ushort *)(v0_0))->v) = R5;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C028E46;
    L_C028DFC:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    *(unsigned short *)((v0_0 + 0x6)) = ((*(short *)((v0_0 + 0x6))) | 0x400);
    (((struct o68_float *)(v0_0))->v) = w0_0;
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o60_float *)(v0_0))->v) = w0_0;
    *(unsigned char *)((v0_0 + 0x9)) = 0x0;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    goto L_C028E20;
}

int FUN_0c028ea0(int a4, int a5, int a6, int a7, float f4)
{
    register float u2;

    u2 = 1.0f;
    if ((*(int *)0xC386830) != 0) {
        u2 = 0.833333313f;
    }
    *(unsigned char *)((a5 + 0x0)) = 0x1;
    *(unsigned char *)((a5 + 0x3)) = 0x2;
    *(unsigned char *)((a5 + 0x1)) = 0x1;
    *(unsigned short *)((a5 + 0x6)) = 0x1F;
    *(unsigned char *)((a5 + 0x5)) = 0x0;
    *(unsigned char *)((a5 + 0xA)) = 0x0;
    *(unsigned char *)((a5 + 0x9)) = 0x0;
    *(unsigned char *)((a5 + 0x8)) = 0x0;
    (((struct oEC_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x10))) * u2);
    (((struct oEE_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x18))) * u2);
    (((struct oF0_ushort *)(a5))->v) = (int)((float)(*(int *)((a4 + 0x20))) * u2);
    (((struct o20_float *)(a5))->v) = f4;
    (((struct o24_float *)(a5))->v) = ((((struct oC_float *)(a4))->v));
    (((struct o28_float *)(a5))->v) = 0.0f;
    *(unsigned int *)((a5 + 0x34)) = 0x0;
    return ((int (*)(int, int, int, int, float, float, float))(0xC028F30))(a4, a5, 0x0, a7, f4, u2, 1.0f);
}
