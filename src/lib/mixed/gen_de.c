/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o184_uchar { char p[0x184]; unsigned char v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o1A4_uint { char p[0x1A4]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o721E_uchar { char p[0x721E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oAC_uchar { char p[0xAC]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int ADXSTM_GetFad(int, int);
int FUN_0c02df98(int, int, float, float);
int FUN_0c02e050(int, float, float);
int fx_spawn_048074(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);
int ai_roll_chance(int, int);
int obj_set_record_char(int, int);
int menu_ui_task_34_bind_models(int, int);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _divls(void);
int _modlu(void);
int _quick_odd_mvn(void);
int ADXF_Open(int);
int ADXF_Close(int);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int, int, int, int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiWriteRegister(int, int);
int thunk_math_mat_get_translate(int, int);
int fx_spawn_12(int a4, int a5, int a6, float f4);
int fx_tick_0588d8(int a4, int a5, int a6, int a7);
int FUN_0c0f5238(int a4, int a5, int a6, int a7);
int kmiProcessVertex_12(int a4);
int FUN_0c09e4ac(int a4, int a5, int a6);
int fx_homing_shell_create(int a4, int a5);
int FUN_0c0fba80(int a4, int a5);
int kmiProcessVertex_10(int a4);
int fx_spawn_049b7c(void);
int menu_ui_task_34(int a4, int a5, int a6, int a7);
int pl_load_motion_attack_record(int a4, int a5, int a6);
int FUN_0c02e2da(int a4);
int ai_run_reaction_script(int a4);
int FUN_0c0d9078(int a4, int a5, int a6, int a7);
int FUN_0c02e144(int a4, float f4, float f5);

int FUN_0c0f5238(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_7 = a5;
    v0_2 = a6;
    v0_0 = a7;
    v0_1 = R11;
    *(int *)((int)stk + 40) = v0_1;
    v0_4 = R10;
    *(int *)((int)stk + 36) = v0_4;
    v0_5 = R9;
    *(int *)((int)stk + 32) = v0_5;
    v0_6 = R8;
    *(int *)((int)stk + 28) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    v0_3 = adxf_ChkPrmPt((*(int *)(((int)stk + 0))), v0_2);
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_4 = (v0_3);
    v0_1 = (v0_2);
    v0_2 = (v0_2);
    if (((int)v0_3 >= 0)) goto L_C0F5264;
    L_C0F538C:;
    v0_0 = (v0_4);
    L_C0F5390:;
    return v0_0;
    L_C0F5264:;
    v0_3 = (int)(ADXSTM_GetFad((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x4))) < 0;
    if (v0_3) goto L_C0F5280;
    v0_3 = ADXF_Open((*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    if (!((v0_3 != 0))) goto L_C0F5280;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_2 + 0x0)) = (*(int *)((((v0_3 << 2) + 0xC7FF7E8) + 0x0)));
    *(unsigned int *)((((v0_3 << 2) + 0xC7FF7E8) + 0x0)) = v0_1;
    *(unsigned int *)((v0_2 + 0x8)) = (*(int *)(((int)stk + 4)));
    (((struct o12_uchar *)(v0_2))->v) = 0x1;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x14);
    *(unsigned int *)((v0_2 + 0xC)) = 0x0;
    R10 = (0x0);
    R11 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_1 = (0xC801C80);
    R8 = (0x0);
    R9 = (0xC801C84);
    goto L_C0F536A;
    L_C0F5280:;
    v0_0 = (0xFFFFFFFF);
    goto L_C0F5390;
    L_C0F536A:;
    v0_3 = (0x3);
    if (!(((int)R10 < (int)0x3))) goto L_C0F5370;
    v0_3 = (int)(adxf_LoadData((*(int *)(((int)stk + 16))), 0x1, v0_1, v0_0, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8), *(int *)((int)stk + 12))) <= 0;
    if (v0_3) goto L_C0F5368;
    v0_5 = (*(int *)((v0_2 + 0xC))) != 0;
    v0_3 = (0x0);
    if (v0_5) goto L_C0F52EE;
    v0_5 = (int)(*(int *)((R9 + 0x0))) <= (int)0x10000;
    v0_3 = (0x10000);
    if (v0_5) goto L_C0F52DC;
    *(unsigned int *)((R9 + 0x0)) = v0_3;
    v0_4 = (0xFFFFFFFC);
    goto L_C0F5370;
    L_C0F5370:;
    *(unsigned short *)((v0_2 + 0x10)) = R8;
    *(unsigned int *)((v0_2 + 0x4)) = (((((unsigned short)(*(short *)((v0_2 + 0x10))) << 2) << 1) + (*(int *)(((*(int *)((v0_2 + 0x0))) + 0x4)))) + 0x14);
    ADXF_Close((*(int *)(((int)stk + 16))));
    goto L_C0F538C;
    L_C0F52DC:;
    v0_3 = *(int *)((R9 + 0x0));
    v0_5 = (int)(*(int *)(((int)stk + 12))) >= (int)v0_3;
    v0_3 = (v0_3);
    if (v0_5) goto L_C0F52E8;
    v0_3 = *(int *)(((int)stk + 12));
    v0_3 = (v0_3);
    L_C0F52EA:;
    *(unsigned int *)((v0_2 + 0xC)) = v0_3;
    v0_3 = (0x2);
    L_C0F52EE:;
    R10 = (0x200);
    if (((int)v0_3 >= (int)0x200)) goto L_C0F5364;
    L_C0F52F4:;
    v0_5 = (*(int *)((v0_1 + (v0_3 << 2)))) != 0;
    if (v0_5) goto L_C0F5318;
    v0_3 = ((v0_3 + 0x2));
    L_C0F5354:;
    v0_5 = (int)(R11 + 0x1) < (int)(*(int *)((v0_2 + 0xC)));
    R11 = ((R11 + 0x1));
    if (v0_5) goto L_C0F5360;
    v0_4 = (0x0);
    goto L_C0F5370;
    L_C0F5360:;
    if (((int)v0_3 < (int)R10)) goto L_C0F52F4;
    L_C0F5364:;
    R10 = (0x0);
    goto L_C0F536A;
    L_C0F5318:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned short *)(((((R8 << 2) << 1) + v0_5) + 0x0)) = R11;
    *(unsigned int *)(((((R8 << 2) << 1) + v0_5) + 0x4)) = ((int)((int)((*(int *)((v0_1 + (v0_3 << 2)))) + 0x7FF) / (int)0x800));
    *(unsigned short *)(((((R8 << 2) << 1) + v0_5) + 0x2)) = ((int)((int)((*(int *)((v0_1 + ((v0_3 + 0x1) << 2)))) + 0x7FF) / (int)0x800));
    v0_3 = (((v0_3 + 0x1) + 0x1));
    R8 = ((R8 + 0x1));
    goto L_C0F5354;
    L_C0F52E8:;
    v0_3 = (v0_3);
    goto L_C0F52EA;
    L_C0F5368:;
    R10 = ((R10 + 0x1));
    goto L_C0F536A;
}

int kmiProcessVertex_12(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t19;
    register int t28;
    register int t33;
    register int t42;
    register int t48;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    t4 = (((struct o8_int *)0xC81715C)->v);
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = t4;
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    *(unsigned int *)(((t14 << 2) + 0xC817064)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x18)));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t19 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC817064)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC81715C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c0fba80(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if (((int)(((((struct o1C_int *)0xC816FFC)->v)) + a4) > (int)0xA) && (t0 = (((struct o14_int *)0xC816FFC)->v), t0 != a4)) {
        (((struct o14_uint *)0xC816FFC)->v) = a4;
        (((struct o0_uint *)0xC8172C0)->v) = (((((struct o1C_int *)0xC816FFC)->v)) + ((((struct o14_int *)0xC816FFC)->v)));
        kmiWriteRegister(0xEC, ((((struct o0_int *)0xC8172C0)->v)));
    }
    if (((int)(((((struct o20_int *)0xC816FFC)->v)) + a5) <= 0) && (t1 = (((struct o24_int *)0xC816FFC)->v), (int)(t1 + a5) <= 0)) {
    } else {
        if (((((struct o18_int *)0xC816FFC)->v)) == a5) {
        } else {
            (((struct o18_uint *)0xC816FFC)->v) = a5;
            (((struct o4_uint *)0xC8172C0)->v) = ((((((struct o20_int *)0xC816FFC)->v)) + ((((struct o18_int *)0xC816FFC)->v))) | ((((((struct o24_int *)0xC816FFC)->v)) + ((((struct o18_int *)0xC816FFC)->v))) << 16));
            kmiWriteRegister(0xF0, ((((struct o4_int *)0xC8172C0)->v)));
            if ((int)a5 > 0) {
                t0 = (((struct o0_int *)0xC817278)->v);
                t1 = (((struct o8_int *)0xC816FFC)->v);
                t2 = 0xC816FFC;
                if ((int)((((struct o0_int *)0xC816FFC)->v)) < (int)((((struct o18_int *)0xC816FFC)->v))) {
                    t2 = 0xC817014;
                }
                t3 = *(int *)((t2 + 0x0));
                t2 = (t1 - t3);
                if ((unsigned int)(((((struct o18_int *)0xC816FFC)->v)) + (t1 - t3)) > (unsigned int)((((struct o8_int *)0xC816FFC)->v))) {
                    t2 = (((((struct o8_int *)0xC816FFC)->v)) - ((((struct o0_int *)0xC816FFC)->v)));
                }
                if ((unsigned int)((((struct o8_int *)0xC816FFC)->v)) < (unsigned int)t2) {
                    (((struct o8_uint *)0xC816FFC)->v) = t2;
                }
                (((struct o0_uint *)0xC817278)->v) = ((((t2 & 0x3FF) << 8) << 2) | (t0 & 0xFFF003FF));
                kmiWriteRegister(0x44, (((((struct o8_int *)0xC817278)->v)) & 0xFFFFFFFE));
                kmiWriteRegister(0x5C, ((((struct o0_int *)0xC817278)->v)));
                kmiWriteRegister(0x44, ((((struct o8_int *)0xC817278)->v)));
            }
        }
    }
    return 0x0;
}

int kmiProcessVertex_10(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u22;
    register float u30;
    register int t31;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC81715C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC81715C)->v));
    t5 = (((struct oC_int *)0xC81715C)->v);
    (((struct o0_uint *)0xC817064)->v) = t3;
    (((struct o4_uint *)0xC817064)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC817064)->v) = t5;
    (((struct oC_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC817064)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    u14 = (((struct o10_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    (((struct o18_uint *)0xC817064)->v) = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    (((struct o1C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    u22 = (((struct o10_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    (((struct o28_uint *)0xC817064)->v) = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    (((struct o2C_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC817064)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    u30 = (((struct o10_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o38_uint *)0xC817064)->v) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    (((struct o0_uint *)0xC81715C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC81715C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

