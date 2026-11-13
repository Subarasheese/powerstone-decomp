/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03cc48-0c03cf50) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_sin_angle16(int);
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int);
float math_cos_angle16(int);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);

int FUN_0c03cc48(int a4);

int FUN_0c03cc48(int a4)
{
    int stk[4];
    register int t1;
    register int t4;
    register int t10;
    register float u15;

    *(unsigned int *)(((int)stk + 0)) = ((((struct o2E0_int *)(a4))->v));
    t1 = *(int *)(((0x308 + a4) + 0x8));
    *(unsigned int *)(((0x308 + a4) + 0x8)) = (t1 + 0xE38);
    *(unsigned int *)(((0x308 + a4) + 0xC)) = (t1 + 0xE38);
    *(unsigned int *)(((0x308 + a4) + 0x4)) = 0x0;
    t4 = *(signed char *)((a4 + 0x3));
    mdl_vtx_iter_begin((*(int *)(((*(int *)(((signed char)((((t4 << 1) + t4) << 2) << 1) + 0xC6002D8))) + 0x0))), ((((struct o9C_int *)((*(int *)(((int)stk + 0)))))->v)));
    for (;;) {
        t10 = mdl_vtx_iter_next();
        if (t10 != 0) {
            break;
        }
        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
        u15 = (*(float *)(((int)stk + 8)));
        u15 = u15 + 30.0f * (math_sin_angle16((*(int *)(((0x308 + a4) + 0xC)))));
        *(float *)(((int)stk + 8)) = u15;
        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
        if ((*(int *)(((0x308 + a4) + 0x4))) != 0) {
            *(unsigned int *)(((0x308 + a4) + 0xC)) = ((*(int *)(((0x308 + a4) + 0xC))) + 0x2AAA);
        }
        *(unsigned int *)(((0x308 + a4) + 0x4)) = ((-(*(int *)(((0x308 + a4) + 0x4)))) + 0x1);
    }
    return t10;
}

int fx_tick_03cb28(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F5;
    register float F10;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(int *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 != 0)) goto L_C03CD14;
    return obj_destroy(v0_0);
    L_C03CD14:;
    *(unsigned char *)((v0_0 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    v0_3 = *(signed char *)((v0_0 + 0x8));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C03CD26;
    if ((v0_2 == 1)) goto L_C03CD86;
    return obj_destroy(v0_0);
    L_C03CD86:;
    FUN_0c03cc48(v0_0);
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C03CDA4;
    if ((v0_2 == 1)) goto L_C03CDA4;
    if ((v0_2 == 2)) goto L_C03CDE4;
    if ((v0_2 != 3)) goto L_C03CDA0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x2C)) = *(struct mv3 *)((v0_1 + 0x2C)); }
    v0_2 = *(signed char *)((v0_1 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), (v0_0 + 0x20));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 35.0f);
    v0_1 = *(signed char *)((v0_1 + 0x71BA));
    v0_2 = (v0_1);
    FPUL_ = (0x420C0000);
    if ((v0_1 == 21)) goto L_C03CF24;
    L_C03CF0C:;
    v0_1 = *(signed char *)((v0_0 + 0x8));
    *(unsigned char *)((v0_0 + 0x8)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    L_C03CF24:;
    return v0_2;
    L_C03CDA0:;
    goto L_C03CF24;
    L_C03CDE4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x2C)) = *(struct mv3 *)((v0_1 + 0x2C)); }
    v0_2 = *(signed char *)((v0_1 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)v0_2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160), (v0_0 + 0x20));
    (((struct o24_float *)(v0_0))->v) = (((((struct o24_float *)(v0_0))->v)) - 28.0f);
    w0_0 = ((((struct o20_float *)(v0_0))->v));
    w0_0 = w0_0 + 30.0f * (math_sin_angle16(((*(int *)((v0_0 + 0x30))) + 0x4000)));
    (((struct o20_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o28_float *)(v0_0))->v));
    w0_0 = w0_0 + 30.0f * (math_cos_angle16(((*(int *)((v0_0 + 0x30))) + 0x4000)));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    v0_2 = (((struct oEC_short *)(v0_0))->v);
    (((struct oEC_ushort *)(v0_0))->v) = (v0_2 - 1);
    w0_0 = (30.0f);
    if (((short)(v0_2 - 1) == 0)) goto L_C03CF0C;
    v0_1 = *(signed char *)((v0_1 + 0x71BA));
    v0_2 = (v0_1);
    if ((v0_1 == 22)) goto L_C03CF24;
    goto L_C03CF0C;
    L_C03CDA4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x2C)) = *(struct mv3 *)((v0_1 + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((v0_1 + 0x20)); }
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    if (((*(signed char *)((v0_1 + 0x71BA))) == 11)) goto L_C03CDD4;
    goto L_C03CF0C;
    L_C03CDD4:;
    v0_1 = *(signed char *)((v0_1 + 0xA));
    v0_2 = (v0_1);
    if (((int)v0_1 >= (int)0x2)) goto L_C03CDE0;
    goto L_C03CF24;
    L_C03CDE0:;
    goto L_C03CF0C;
    L_C03CD26:;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    v0_3 = *(signed char *)((v0_0 + 0x4));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C03CD42;
    if ((v0_2 == 1)) goto L_C03CD42;
    if ((v0_2 == 2)) goto L_C03CD4A;
    if ((v0_2 == 3)) goto L_C03CD80;
    goto L_C03CD86;
    L_C03CD80:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x258;
    goto L_C03CD86;
    L_C03CD4A:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x46;
    goto L_C03CD86;
    L_C03CD42:;
    (((struct oEC_ushort *)(v0_0))->v) = 0x0;
    goto L_C03CD86;
}
