/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
typedef struct { int w[63]; } Stk63;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10BC_uint { char p[0x10BC]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D4_uint { char p[0x10D4]; unsigned int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10E8_uint { char p[0x10E8]; unsigned int v; };
struct o10EC_uint { char p[0x10EC]; unsigned int v; };
struct o10F0_uint { char p[0x10F0]; unsigned int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o10F8_uint { char p[0x10F8]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o448_uint { char p[0x448]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8C_uint { char p[0xF8C]; unsigned int v; };
struct oFA8_uint { char p[0xFA8]; unsigned int v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct oFE0_int { char p[0xFE0]; int v; };
struct oFE0_uint { char p[0xFE0]; unsigned int v; };
struct oFE4_uint { char p[0xFE4]; unsigned int v; };
int FUN_0c0e3510(void);
int FUN_0c0eae20(int, int);
int FUN_0c0eaef0(int, int);
int FUN_0c0eb0c0(int, int, int);
int FUN_0c0f619a(void);
int FUN_0c0fad80(int);
int FUN_0c0fae08(void);
int FUN_0c0faee0(void);
int FUN_0c1092e0(int, int);
int FUN_0c10aa20(void);
int FUN_0c10aa80(int);
int FUN_0c10aad4(int, int, int);
int FUN_0c10ab20(int, int, int);
int FUN_0c10ab3c(int, int, int);
int FUN_0c10ab6c(int, int, int);
int FUN_0c10bc80(int, int, int);
int FUN_0c10c0e0(Stk29);
int FUN_0c112f1e(int);
int gfx_set_frame_buffer_size(int, int, int);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetGetMediaInfo(void);
int kmiCopyToPVRMemory(int, int, int);
int kmiInitializeBackGroundPlane(void);
int kmiReadRegister(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
float math_tan_angle16(int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_init_memory(void);
int mpdrv_insertnop(int);
int mpdrv_memset_l(int, int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_swapmode(int);
int nlMultiMatrix(int);
int nl_sprite_record_alloc(void);
int nl_sprite_record_build(int, int);
int nl_texture_slot_alloc(void);
int nl_texture_slot_finish(int, int, int);
int nl_texture_slot_load(int, int, int);
int thunk_FUN_0c10e184(int, int);
int thunk_FUN_0c111b54(int);
int thunk_FUN_0c111b6e(int);
int thunk_FUN_0c111b7e(int);
extern int thunk_FUN_0c1155a8();
int FUN_0c10c280(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c108b64(void);
int nl_sprite_texture_bind(int a4, int a5, int a6);
int FUN_0c10acec(int a4, int a5, int a6);
int nlPerspective(int a4, float f4, float f5, float f6);
int FUN_0c10c760(Stk63 s);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c111cb8(void);
int FUN_0c11142c(int a4, int a5, int a6, int a7);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int vmsio_get_media_info(int a4, int a5, int a6, int a7);
int snd_driver_upload(int a4, int a5);
int FUN_0c0f7b60(int a4, int a5, int a6, int a7, int a8);

int FUN_0c10c280(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[66];
    register int t68;

    register int R3;
    int R6;
    int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_2 = a4;
    v0_3 = a5;
    R6 = a6;
    v0_7 = a7;
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0x0)) = ((((struct o0_int *)0xC15B628)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0x4)) = ((((struct o4_int *)0xC15B628)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0x8)) = ((((struct o8_int *)0xC15B628)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0xC)) = ((((struct oC_int *)0xC15B628)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0x10)) = ((((struct o10_int *)0xC15B628)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x8) + 0x14)) = ((((struct o14_int *)0xC15B628)->v));
    v0_4 = ((*(int *)((((R6 << 2) + (((int)stk + 116) + 0x8)) + 0x0))));
    if ((a9 == 0)) goto L_C10C2CE;
    if ((v0_3 != 0xF0)) goto L_C10C2CE;
    v0_3 = ((v0_3 << 1));
    L_C10C2CE:;
    (((struct o24_uint *)0xC816FE4)->v) = v0_2;
    (((struct o28_uint *)0xC816FE4)->v) = v0_3;
    *(unsigned int *)(((((int)stk + 116) + 0x20) + 0x20)) = 0x1;
    *(unsigned int *)(((((int)stk + 116) + 0x20) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 116) + 0x20) + 0x34)) = 0x0;
    (((struct o40_uint *)((((int)stk + 116) + 0x20)))->v) = 0x0;
    (((struct o70_uint *)((((int)stk + 116) + 0x20)))->v) = 0x0;
    (((struct o68_uint *)((((int)stk + 116) + 0x20)))->v) = 0x0;
    (((struct o64_uint *)((((int)stk + 116) + 0x20)))->v) = 0x0;
    R12 = (0x1);
    v0_0 = (0x0);
    v0_1 = ((((int)stk + 116) + 0x20));
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x1) == 0)) goto L_C10C304;
    (((struct o6C_uint *)(v0_1))->v) = R12;
    *(unsigned int *)(((int)stk + 120)) = R12;
    L_C10C312:;
    v0_5 = (v0_0);
    L_C10C344:;
    v0_8 = (v0_4);
    if ((v0_4 == 16)) goto L_C10C356;
    if ((v0_8 == 24)) goto L_C10C384;
    if (!((v0_8 == 32))) goto L_C10C398;
    *(unsigned int *)((v0_1 + 0x30)) = 0x6;
    *(unsigned int *)((v0_1 + 0x3C)) = 0x3;
    goto L_C10C396;
    L_C10C398:;
    *(unsigned int *)((v0_1 + 0x28)) = v0_0;
    *(unsigned int *)((v0_1 + 0x24)) = v0_7;
    *(unsigned int *)((v0_1 + 0x1C)) = v0_0;
    *(unsigned int *)(((int)stk + 116)) = (v0_2 * v0_4);
    v0_6 = ((v0_2 * v0_4));
    if (((int)(v0_2 * v0_4) >= 0)) goto L_C10C3AA;
    v0_6 = ((v0_6 + 0x3F));
    L_C10C3AA:;
    (((struct o44_uint *)(v0_1))->v) = ((int)v0_6 >> 6);
    *(unsigned int *)((v0_1 + 0x0)) = (((int)((int)(*(int *)(((int)stk + 116))) / (int)0x20)) - 1);
    v0_9 = (v0_4);
    R6 = (0x20);
    if (((int)v0_4 >= 0)) goto L_C10C3C8;
    v0_9 = ((v0_9 + 0x7));
    L_C10C3C8:;
    v0_8 = (v0_7);
    v0_9 = (((((v0_9 >> 1) >> 1) >> 1) * v0_2));
    v0_6 = ((v0_3 - 1));
    if ((v0_7 != 1)) goto L_C10C44E;
    if ((v0_3 != 0x1E0)) goto L_C10C440;
    *(unsigned int *)((v0_1 + 0x4)) = 0xEF;
    *(unsigned int *)((v0_1 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 116))) / (int)R6)) + 0x1);
    *(volatile int *)0xC816FE4;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_9;
    L_C10C4CC:;
    v0_8 = (0xB8);
    v0_7 = (0x401);
    if ((a9 == 0)) goto L_C10C576;
    *(unsigned int *)0xC817028 = ((*(int *)0xC817028) | R12);
    *(unsigned int *)((v0_1 + 0xC)) = R12;
    v0_9 = (0x2);
    if (((((((struct o0_int *)0xC816FE4)->v)) & R12) == 0)) goto L_C10C4F4;
    *(unsigned int *)((v0_1 + 0x10)) = v0_7;
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) - 2);
    L_C10C60C:;
    *(unsigned int *)((v0_1 + 0x14)) = 0x40;
    *(unsigned int *)((v0_1 + 0x18)) = 0x80;
    (((struct o0_uint *)0xC817414)->v) = (((int)((int)v0_2 / (int)R6)) * v0_9);
    (((struct o4_uint *)0xC817414)->v) = (((int)((int)(v0_3 * (*(int *)(((int)stk + 120)))) / (int)R6)) + v0_5);
    v0_5 = (0xC817418);
    R6 = (0xF);
    if (((unsigned int)((((struct o4_int *)0xC817414)->v)) <= (unsigned int)0xF)) goto L_C10C644;
    (((struct o4_uint *)0xC817414)->v) = R6;
    L_C10C644:;
    (((struct o4C_uint *)(v0_1))->v) = 0x9;
    (((struct o48_uint *)(v0_1))->v) = 0x6;
    if ((v0_4 != 16)) goto L_C10C680;
    (((struct o50_uint *)(v0_1))->v) = 0x8;
    L_C10C686:;
    (((struct o58_uint *)(v0_1))->v) = v0_0;
    (((struct o54_uint *)(v0_1))->v) = (v0_2 - 1);
    (((struct o60_uint *)(v0_1))->v) = v0_0;
    if (((((((struct o0_int *)0xC816FE4)->v)) & R12) != 1)) goto L_C10C6A6;
    if ((v0_0 == 0)) goto L_C10C700;
    L_C10C6BC:;
    (((struct o5C_uint *)(v0_1))->v) = ((((int)((unsigned int)((int)((unsigned int)v0_3 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_3)) ? 1u : 0u))) >> 1) - 1);
    L_C10C704:;
    v0_2 = v0_1;
    v0_3 = ((int)stk + 0);
    for (;;) { t68 = *(int *)v0_2; v0_2 = (v0_2 + 4); if ((unsigned int)((v0_1 + 116)) < (unsigned int)v0_2) break; *(unsigned int *)v0_3 = t68; v0_3 = (v0_3 + 4); }
    FUN_0c10c0e0(*(Stk29 *)((int)stk + 0));
    (((struct o18_uint *)0xC816FE4)->v) = v0_0;
    (((struct o14_uint *)0xC816FE4)->v) = v0_0;
    return v0_0;
    L_C10C700:;
    (((struct o5C_uint *)(v0_1))->v) = v0_6;
    goto L_C10C704;
    L_C10C6A6:;
    if (((((((struct o0_int *)0xC816FE4)->v)) & 0x2C) != 32)) goto L_C10C6B8;
    if ((R12 == 0)) goto L_C10C700;
    goto L_C10C6BC;
    L_C10C6B8:;
    if ((v0_0 == 0)) goto L_C10C700;
    goto L_C10C6BC;
    L_C10C680:;
    (((struct o50_uint *)(v0_1))->v) = 0xB;
    v0_5 = (0xB);
    goto L_C10C686;
    L_C10C4F4:;
    v0_10 = (((struct o0_int *)0xC816FE4)->v);
    v0_8 = ((v0_10 & 0xFFFFFFEC));
    if (((v0_10 & 0xFFFFFFEC) == 0)) goto L_C10C560;
    if ((v0_8 == 4)) goto L_C10C560;
    if ((v0_8 == 32)) goto L_C10C560;
    if ((v0_8 == 36)) goto L_C10C514;
    if ((v0_8 == 40)) goto L_C10C514;
    goto L_C10C60C;
    L_C10C514:;
    *(unsigned int *)((v0_1 + 0x10)) = v0_7;
    v0_7 = (int)((int)(*(int *)(((int)stk + 116))) / (int)R6);
    *(unsigned int *)((v0_1 + 0x8)) = (v0_7 + 0x1);
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) - 2);
    v0_8 = ((v0_7 + 0x1));
    goto L_C10C60C;
    L_C10C560:;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_0;
    *(unsigned int *)((v0_1 + 0x10)) = 0x800;
    *(unsigned int *)((v0_1 + 0x8)) = R12;
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) - 2);
    v0_8 = (0xC8171D8);
    goto L_C10C60C;
    L_C10C576:;
    *(unsigned int *)((v0_1 + 0xC)) = v0_0;
    v0_9 = (((struct o0_int *)0xC816FE4)->v);
    v0_8 = ((v0_9 & R12));
    if (((v0_9 & R12) != 1)) goto L_C10C58A;
    if ((v0_0 == 0)) goto L_C10C5E0;
    L_C10C5A0:;
    *(unsigned int *)((v0_1 + 0x10)) = 0x800;
    *(unsigned int *)((v0_1 + 0x4)) = 0xEE;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_0;
    *(unsigned int *)((v0_1 + 0x8)) = R12;
    L_C10C60A:;
    v0_9 = (R12);
    goto L_C10C60C;
    L_C10C5E0:;
    if (((((((struct o0_int *)0xC816FE4)->v)) & R12) == 0)) goto L_C10C5EE;
    *(unsigned int *)((v0_1 + 0x10)) = 0x400;
    v0_8 = (0x400);
    goto L_C10C60A;
    L_C10C5EE:;
    if (((((((struct o0_int *)0xC816FE4)->v)) & R6) == 0)) goto L_C10C600;
    *(unsigned int *)((v0_1 + 0x10)) = v0_7;
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) - 2);
    goto L_C10C60A;
    L_C10C600:;
    *(unsigned int *)((v0_1 + 0x10)) = 0x400;
    v0_7 = *(int *)((v0_1 + 0x4));
    *(unsigned int *)((v0_1 + 0x4)) = (v0_7 - 1);
    v0_8 = ((v0_7 - 1));
    goto L_C10C60A;
    L_C10C58A:;
    v0_9 = (((struct o0_int *)0xC816FE4)->v);
    v0_8 = ((v0_9 & 0x2C));
    if (((v0_9 & 0x2C) != 32)) goto L_C10C59C;
    if ((R12 == 0)) goto L_C10C5E0;
    goto L_C10C5A0;
    L_C10C59C:;
    if ((v0_0 == 0)) goto L_C10C5E0;
    goto L_C10C5A0;
    L_C10C440:;
    *(unsigned int *)((v0_1 + 0x4)) = v0_6;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_9;
    *(unsigned int *)((v0_1 + 0x8)) = R12;
    goto L_C10C4CC;
    L_C10C44E:;
    if (((((((struct o0_int *)0xC816FE4)->v)) & R12) == 0)) goto L_C10C464;
    *(unsigned int *)((v0_1 + 0x4)) = v0_6;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_9;
    *(unsigned int *)((v0_1 + 0x8)) = R12;
    goto L_C10C4CC;
    L_C10C464:;
    if ((v0_3 != 0x1E0)) goto L_C10C4C0;
    *(unsigned int *)((v0_1 + 0x4)) = 0xEF;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_9;
    *(unsigned int *)((v0_1 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 116))) / (int)R6)) + 0x1);
    goto L_C10C4CC;
    L_C10C4C0:;
    *(unsigned int *)((v0_1 + 0x4)) = v0_6;
    (((struct o0_uint *)0xC8171D8)->v) = v0_0;
    (((struct o4_uint *)0xC8171D8)->v) = v0_9;
    *(unsigned int *)((v0_1 + 0x8)) = R12;
    goto L_C10C4CC;
    L_C10C396:;
    *(unsigned int *)((v0_1 + 0x2C)) = v0_0;
    goto L_C10C398;
    L_C10C384:;
    *(unsigned int *)((v0_1 + 0x30)) = 0x4;
    *(unsigned int *)((v0_1 + 0x3C)) = 0x2;
    goto L_C10C396;
    L_C10C356:;
    if ((R6 != 3)) goto L_C10C362;
    *(unsigned int *)((v0_1 + 0x30)) = 0x3;
    L_C10C374:;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_0;
    L_C10C37C:;
    *(unsigned int *)((v0_1 + 0x2C)) = a8;
    goto L_C10C398;
    L_C10C362:;
    if ((R6 != 0)) goto L_C10C36C;
    *(unsigned int *)((v0_1 + 0x30)) = R12;
    *(unsigned int *)((v0_1 + 0x3C)) = R12;
    goto L_C10C37C;
    L_C10C36C:;
    if ((R6 != 1)) goto L_C10C378;
    *(unsigned int *)((v0_1 + 0x30)) = v0_0;
    goto L_C10C374;
    L_C10C378:;
    *(unsigned int *)((v0_1 + 0x30)) = R12;
    *(unsigned int *)((v0_1 + 0x3C)) = R12;
    goto L_C10C37C;
    L_C10C304:;
    (((struct o6C_uint *)(v0_1))->v) = v0_0;
    if ((v0_7 != 1)) goto L_C10C340;
    *(unsigned int *)(((int)stk + 120)) = 0x2;
    goto L_C10C312;
    L_C10C340:;
    *(unsigned int *)(((int)stk + 120)) = R12;
    v0_5 = (R12);
    goto L_C10C344;
}

int FUN_0c108b64(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((*(int *)0xC347628) == 0) {
        *(unsigned int *)0xC347628 = 0xC816FC0;
        memset((*(int *)0xC347628), 0x0, 0x4D0);
    }
    (((struct o0_uint *)0xC817490)->v) = 0x3;
    (((struct o4_uint *)0xC817490)->v) = 0x2;
    (((struct o8_uint *)0xC817490)->v) = 0x6;
    (((struct oC_uint *)0xC817490)->v) = 0x0;
    (((struct o10_uint *)0xC817490)->v) = 0xC3473B8;
    (((struct o0_uint *)0xC816FC0)->v) = 0xC817490;
    (((struct o34_uint *)0xC816FC0)->v) = 0x0;
    (((struct o38_uint *)0xC816FC0)->v) = 0x0;
    (((struct o3C_uint *)0xC816FC0)->v) = 0x0;
    (((struct o0_uint *)0xC817010)->v) = 0x0;
    (((struct o4_uint *)0xC817010)->v) = 0x0;
    FUN_0c0faee0();
    (((struct o0_uint *)0xC8171C8)->v) = 0x0;
    (((struct o4_uint *)0xC8171C8)->v) = 0x0;
    (((struct o24_uint *)0xC817180)->v) = ((FUN_0c10bc80(0xC15B530, 0xC15B538, 0x1)) - 1);
    (((struct o20_uint *)0xC817180)->v) = ((((struct o24_int *)0xC817180)->v));
    (((struct o14_uint *)0xC816FC0)->v) = 0x10000;
    (((struct o18_uint *)0xC816FC0)->v) = 0x800000;
    (((struct o1C_uint *)0xC816FC0)->v) = 0x800000;
    (((struct o8_uint *)0xC817180)->v) = 0x0;
    (((struct o4_uint *)0xC817180)->v) = 0x0;
    (((struct o0_uint *)0xC817180)->v) = 0x0;
    (((struct o1C_uint *)0xC817180)->v) = 0x3;
    *(unsigned int *)0xC817260 = 0x1;
    kmiInitializeBackGroundPlane();
    t0 = FUN_0c10bc80(0xC15B530, 0xC15B544, 0x6000);
    t1 = FUN_0c10bc80(0xC15B530, 0xC15B550, 0x7A000);
    t2 = FUN_0c10bc80(0xC15B530, 0xC15B55C, 0x180000);
    t3 = FUN_0c10bc80(0xC15B530, 0xC15B56C, 0x180000);
    (((struct o0_uint *)0xC817054)->v) = (((((unsigned int)((unsigned int)((unsigned int)t2 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    (((struct o4_uint *)0xC817054)->v) = (((((unsigned int)((unsigned int)((unsigned int)t3 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    t6 = 0x0;
    for (;;) {
        *(unsigned int *)((t5 + 0xC81702C)) = t4;
        *(unsigned int *)(((0xC81702C + t5) + 0x4)) = (t4 + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        *(unsigned int *)(((0xC81702C + t5) + 0x8)) = (((((((unsigned int)((unsigned int)((unsigned int)t1 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1)) + t4);
        *(unsigned int *)((t5 + 0xC817038)) = (((((((unsigned int)((unsigned int)((unsigned int)t2 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t1 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1))) + t4);
        *(unsigned int *)((t6 + 0xC81704C)) = (0x7D0000 - t4);
        t5 = (t5 + 0x10);
        t6 = (t6 + 0x4);
        t4 = (t4 + 0x400000);
        *(unsigned int *)((t5 + 0xC81702C)) = t4;
        *(unsigned int *)(((0xC81702C + t5) + 0x4)) = (t4 + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        *(unsigned int *)(((0xC81702C + t5) + 0x8)) = (((((((unsigned int)((unsigned int)((unsigned int)t1 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1)) + t4);
        *(unsigned int *)((t5 + 0xC817038)) = (((((((unsigned int)((unsigned int)((unsigned int)t2 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t1 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t0 >> 8) >> 2) >> 1) << 8) << 2) << 1))) + t4);
        *(unsigned int *)((t6 + 0xC81704C)) = (0x7D0000 - t4);
        t3 = (t3 + 0x2);
        t4 = (t4 + 0x400000);
        t6 = (t6 + 0x4);
        t5 = (t5 + 0x10);
        if ((int)t3 < (int)0x2) continue;
        break;
    }
    (((struct o0_uint *)0xC8172FC)->v) = 0x0;
    (((struct o0_uint *)0xC8173D8)->v) = 0x0;
    (((struct o8_uint *)0xC8172FC)->v) = 0x0;
    (((struct oC_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC8172FC)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC8172FC)->v) = 0x0;
    (((struct o1C_uint *)0xC8172FC)->v) = 0x0;
    (((struct o20_uint *)0xC8172FC)->v) = 0x0;
    (((struct oC_uint *)0xC8173D8)->v) = 0x0;
    (((struct o14_uint *)0xC8173D8)->v) = 0x0;
    (((struct o10_uint *)0xC8173D8)->v) = 0x1;
    (((struct o20_uint *)0xC8173D8)->v) = (FUN_0c10bc80(0xC15B57C, 0xC15B58C, 0xACC00000));
    (((struct o24_uint *)0xC8173D8)->v) = (FUN_0c10bc80(0xC15B57C, 0xC15B598, 0x400000));
    (((struct o14_uint *)0xC817010)->v) = (FUN_0c10bc80(0xC15B530, 0xC15B5A4, 0x0));
    (((struct o1C_uint *)0xC8171C8)->v) = (FUN_0c10bc80(0xC15B530, 0xC15B5B4, 0xA));
    (((struct o20_uint *)0xC8171C8)->v) = (FUN_0c10bc80(0xC15B530, 0xC15B5C4, 0xA));
    (((struct o24_uint *)0xC8171C8)->v) = (FUN_0c10bc80(0xC15B530, 0xC15B5D4, 0xA));
    (((struct o14_uint *)0xC817180)->v) = 0x0;
    (((struct o18_uint *)0xC817180)->v) = 0x1;
    (((struct o18_uint *)0xC817010)->v) = 0xF;
    (((struct o18_uint *)0xC817010)->v) = (((((struct o18_int *)0xC817010)->v)) | 0x0);
    (((struct o10_uint *)0xC8171C8)->v) = 0x0;
    (((struct o14_uint *)0xC8171C8)->v) = 0x0;
    return (FUN_0c0f619a());
}

int nl_sprite_texture_bind(int a4, int a5, int a6)
{
    int stk[17];

    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    (((struct o40_uint *)(((int)stk + 0)))->v) = v0_2;
    *(unsigned int *)(((int)stk + 60)) = v0_0;
    *(unsigned int *)(((int)stk + 56)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 56)));
    v0_2 = *(int *)(((int)stk + 56));
    v0_3 = *(int *)0xC7FD490;
    *(unsigned int *)(((int)stk + 52)) = (v0_3 + v0_2);
    *(unsigned int *)(((int)stk + 40)) = ((((*(int *)(((int)stk + 16))) << 2) << 2) + (*(int *)(((int)stk + 64))));
    *(unsigned int *)(((int)stk + 56)) = (v0_3 + v0_2);
    if (((*(int *)((((((*(int *)(((int)stk + 56))) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x0))) != 0)) goto L_C0E36B6;
    *(unsigned int *)(((((((*(int *)(((int)stk + 56))) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x4) + 0x0)) = (nl_texture_slot_alloc());
    L_C0E36B6:;
    v0_2 = *(int *)(((int)stk + 56));
    v0_3 = (((struct o8_int *)0xC7F87C0)->v);
    *(unsigned int *)(((((v0_2 << 2) << 1) + v0_3) + 0x0)) = ((*(int *)(((((v0_2 << 2) << 1) + v0_3) + 0x0))) + 0x1);
    *(unsigned int *)(((int)stk + 56)) = (*(int *)((((((*(int *)(((int)stk + 56))) << 2) << 1) + ((((struct o8_int *)0xC7F87C0)->v))) + 0x4)));
    *(unsigned int *)(((int)stk + 36)) = (((*(int *)(((int)stk + 56))) * 0x3C) + (*(int *)0xC7FC4F0));
    v0_2 = (((struct o4_int *)0xC7FD040)->v);
    v0_3 = (v0_2);
    if (((short)(*(short *)((v0_2 + ((*(int *)(((int)stk + 52))) << 1)))) != -1)) goto L_C0E371A;
    *(unsigned short *)(((((*(int *)(((int)stk + 52))) << 1) + v0_3) + 0x0)) = (nl_sprite_record_alloc());
    L_C0E371A:;
    v0_2 = (((struct o4_int *)0xC7FD040)->v);
    *(unsigned int *)(((int)stk + 48)) = (short)(*(short *)((((*(int *)(((int)stk + 52))) << 1) + v0_2)));
    v0_2 = (v0_2);
    if (((*(int *)(((*(int *)(((int)stk + 36))) + 0x2C))) != 0)) goto L_C0E378C;
    v0_2 = nl_texture_slot_load((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 56))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x8))));
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    if ((v0_2 == 0)) goto L_C0E3752;
    (((struct o0_uint *)0xC7FD040)->v) = 0x1;
    L_C0E374E:;
    goto L_C0E374E;
    L_C0E3752:;
    nl_texture_slot_finish((*(int *)(((int)stk + 56))), v0_0, v0_1);
    *(unsigned int *)(((*(int *)(((int)stk + 36))) + 0x38)) = (*(int *)(((int)stk + 56)));
    v0_2 = ((nl_sprite_record_build((((((*(int *)(((int)stk + 48))) << 2) << 2) << 1) + ((((struct o10_int *)0xC7FD040)->v))), (*(int *)(((int)stk + 56))))));
    L_C0E378C:;
    v0_0 = *(int *)(((int)stk + 36));
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x1);
    if (!(((*(int *)(((int)stk + 60))) != 0))) goto L_C0E38F0;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((((*(int *)(((int)stk + 16))) << 2) + (*(int *)(((int)stk + 60))))));
    v0_0 = *(int *)(((int)stk + 48));
    v0_1 = (((struct o10_int *)0xC7FD040)->v);
    *(unsigned int *)(((int)stk + 32)) = ((((v0_0 << 2) << 2) << 1) + v0_1);
    *(unsigned int *)(((int)stk + 28)) = (((unsigned int)(*(int *)((((((v0_0 << 2) << 2) << 1) + v0_1) + 0xC))) >> 27) & 0x7);
    v0_2 = (0xC7FD050);
    if (((*(int *)0xC346B68) == 0)) goto L_C0E37D0;
    if (((*(int *)(((int)stk + 28))) == 5)) goto L_C0E38D8;
    v0_0 = *(int *)(((int)stk + 28));
    v0_2 = (v0_0);
    if ((v0_0 != 6)) goto L_C0E38F0;
    goto L_C0E38D8;
    L_C0E38F0:;
    return v0_2;
    L_C0E38D8:;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0xC)) = (((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) & 0xF81FFFFF) | ((*(int *)(((int)stk + 12))) << 21));
    v0_2 = (0x15);
    goto L_C0E38F0;
    L_C0E37D0:;
    if ((((((struct o0_int *)0xC7F87C0)->v)) == 0)) goto L_C0E38C8;
    v0_0 = *(int *)(((int)stk + 28));
    v0_2 = (v0_0);
    if ((v0_0 == 5)) goto L_C0E37E4;
    v0_0 = *(int *)(((int)stk + 28));
    v0_2 = (v0_0);
    if ((v0_0 != 6)) goto L_C0E38C8;
    L_C0E37E4:;
    if (((int)(*(int *)(((int)stk + 24))) >= (int)((((struct o0_short *)0xC7FD624)->v)))) goto L_C0E38C8;
    *(unsigned int *)(((int)stk + 12)) = ((((struct o14_int *)0xC7FD624)->v));
    v0_0 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 8)) = ((((v0_0 << 1) + v0_0) << 2) + ((((struct o0_int *)0xC7F87C0)->v)));
    v0_0 = *(int *)(((int)stk + 24));
    v0_1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + ((v0_0 << 2) << 1));
    if (((*(short *)(((v0_1 + ((v0_0 << 2) << 1)) + 0x4))) == 0)) goto L_C0E3842;
    v0_0 = *(int *)(((int)stk + 12));
    *(unsigned short *)((v0_0 + 0x4)) = ((*(short *)((v0_0 + 0x4))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = (*(short *)(((*(int *)(((int)stk + 12))) + 0x0)));
    L_C0E38B4:;
    *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0xC)) = (((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) & 0xF81FFFFF) | ((*(int *)(((int)stk + 4))) << 21));
    v0_2 = (0x15);
    L_C0E38C8:;
    goto L_C0E38F0;
    L_C0E3842:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x2)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x2)));
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x3)) = ((int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8))) + 0xF) >> 4);
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x4)) = 0x1;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = (*(short *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x8)));
    v0_0 = FUN_0c0eae20((*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (*(int *)(((int)stk + 0))));
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    if (((int)v0_0 < 0)) goto L_C0E38B0;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(int *)(((int)stk + 4)));
    FUN_0c0eaef0((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
    FUN_0c0eb0c0((((*(int *)(((int)stk + 4))) << 2) << 2), (*(int *)(((*(int *)(((int)stk + 8))) + 0x4))), (*(int *)(((int)stk + 0))));
    goto L_C0E38B4;
    L_C0E38B0:;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    goto L_C0E38B4;
}

int FUN_0c10acec(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    R4 = a4;
    v0_5 = a5;
    v0_4 = a6;
    v0_0 = R8;
    v0_3 = *(int *)((R4 + 0x0));
    v0_1 = *(int *)((v0_4 + 0x0));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    R8 = (R4);
    v0_2 = (v0_5);
    if ((v0_3 != 0)) goto L_C10AD0C;
    L_C10AF52:;
    v0_7 = (0x0);
    L_C10AF54:;
    return v0_7;
    L_C10AD0C:;
    if ((v0_1 != 0)) goto L_C10AD14;
    goto L_C10AF52;
    L_C10AD14:;
    v0_3 = (0x0);
    L_C10AD16:;
    v0_4 = *(short *)((v0_1 + 0x0));
    v0_5 = (v0_3);
    R4 = ((unsigned short)v0_4);
    if (((0x20 & (unsigned short)v0_4) != 0)) goto L_C10AD40;
    if (((0x40 & R4) != 0)) goto L_C10AD40;
    if (((0x2 & R4) != 0)) goto L_C10AD42;
    if (((0x80 & R4) != 0)) goto L_C10AD40;
    if (((0x2 & R4) != 0)) goto L_C10AD42;
    if (((0x100 & R4) == 0)) goto L_C10AD42;
    L_C10AD40:;
    v0_5 = (0x1);
    L_C10AD42:;
    v0_4 = *(short *)((v0_1 + 0x0));
    R4 = ((unsigned short)v0_4);
    if (((0x200 & (unsigned short)v0_4) != 0)) goto L_C10AD6A;
    if (((0x400 & R4) != 0)) goto L_C10AD6A;
    if (((0x2 & R4) != 0)) goto L_C10AD6C;
    if (((0x800 & R4) != 0)) goto L_C10AD6A;
    if (((0x2 & R4) != 0)) goto L_C10AD6C;
    if (((0x1000 & R4) == 0)) goto L_C10AD6C;
    L_C10AD6A:;
    v0_5 = (0x2);
    L_C10AD6C:;
    if ((v0_5 != 0)) goto L_C10AD74;
    if ((v0_0 == 0)) goto L_C10AF52;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) >= (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AF28;
    L_C10AF1A:;
    v0_4 = *(int *)((v0_0 + 0x8));
    v0_0 = (v0_4);
    if ((v0_4 == 0)) goto L_C10AF52;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) < (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AF1A;
    L_C10AF28:;
    if ((v0_0 == 0)) goto L_C10AF52;
    if ((v0_1 == 0)) goto L_C10AF52;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) <= (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AF46;
    L_C10AF38:;
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C10AF52;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) > (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AF38;
    L_C10AF46:;
    if ((v0_1 == 0)) goto L_C10AF52;
    L_C10AF4A:;
    if ((v0_0 == 0)) goto L_C10AF52;
    goto L_C10AD16;
    L_C10AD74:;
    v0_4 = ((*(int *)((v0_0 + 0xC))) + (*(int *)((v0_0 + 0x10)))) == (*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AD84;
    L_C10AEEC:;
    if ((v0_1 == 0)) goto L_C10AF06;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) <= (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AF06;
    L_C10AEF8:;
    v0_4 = *(int *)((v0_1 + 0x8));
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C10AF06;
    v0_4 = (int)(*(int *)((v0_0 + 0xC))) > (int)(*(int *)((v0_1 + 0xC)));
    if (v0_4) goto L_C10AEF8;
    L_C10AF06:;
    if ((v0_1 != 0)) goto L_C10AF4A;
    goto L_C10AF52;
    L_C10AD84:;
    v0_4 = ((int)((int)(*(int *)((v0_0 + 0xC))) % (int)0x20)) == 0;
    if (v0_4) goto L_C10ADF6;
    v0_4 = FUN_0c10aa20();
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C10ADC0;
    v0_7 = (0x3);
    goto L_C10AF54;
    L_C10ADC0:;
    *(unsigned int *)((v0_6 + 0xC)) = (*(int *)((v0_0 + 0xC)));
    *(unsigned int *)((v0_0 + 0xC)) = (((*(int *)((v0_0 + 0xC))) + 0x1F) & 0xFFFFFFE0);
    v0_4 = *(int *)((v0_0 + 0xC));
    v0_7 = *(int *)((v0_6 + 0xC));
    *(unsigned int *)((v0_6 + 0x10)) = (v0_4 - v0_7);
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) - (v0_4 - v0_7));
    v0_7 = *(int *)((v0_0 + 0x4));
    v0_4 = (v0_7);
    if ((v0_7 != 0)) goto L_C10ADF0;
    FUN_0c10aad4(R8, v0_2, v0_6);
    L_C10ADF6:;
    FUN_0c10ab6c((*(int *)((v0_0 + 0xC))), (*(int *)((v0_1 + 0xC))), (*(int *)((v0_1 + 0x10))));
    v0_6 = *(int *)((v0_1 + 0xC));
    v0_4 = *(int *)((v0_0 + 0xC));
    *(unsigned int *)((v0_1 + 0xC)) = v0_4;
    *(unsigned int *)((v0_0 + 0xC)) = ((*(int *)((v0_0 + 0xC))) + (*(int *)((v0_1 + 0x10))));
    v0_7 = (v0_5);
    v0_6 = ((v0_6 - v0_4));
    R4 = (v0_4);
    if ((v0_5 != 1)) goto L_C10AE1E;
    *(unsigned int *)(((*(int *)((v0_1 + 0x14))) + 0x1C)) = (*(int *)((v0_1 + 0xC)));
    L_C10AEC6:;
    v0_4 = *(int *)((v0_0 + 0x8));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C10AEEC;
    v0_4 = ((*(int *)((v0_0 + 0xC))) + (*(int *)((v0_0 + 0x10)))) != (*(int *)((v0_6 + 0xC)));
    if (v0_4) goto L_C10AEEC;
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) + (*(int *)((v0_6 + 0x10))));
    FUN_0c10ab3c(R8, v0_2, v0_6);
    v0_4 = FUN_0c10aa80(v0_6);
    v0_7 = (v0_4);
    goto L_C10AEEC;
    L_C10AE1E:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x14))) + 0x8)) = (*(int *)((v0_1 + 0xC)));
    R4 = (v0_3);
    v0_5 = (v0_3);
    v0_4 = (v0_3);
    v0_6 = ((((unsigned int)v0_6 >> 2) << 2));
    L_C10AE30:;
    v0_7 = (*(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + v0_5) + 0x0))) == 0;
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C10AE50;
    v0_7 = *(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + R4) + 0x0));
    *(unsigned int *)((v0_7 + 0x1C)) = ((*(int *)((v0_7 + 0x1C))) - v0_6);
    L_C10AE50:;
    v0_7 = (*(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + (v0_5 + 0x4)) + 0x0))) == 0;
    R4 = ((R4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    if (v0_7) goto L_C10AE72;
    v0_7 = *(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + R4) + 0x0));
    *(unsigned int *)((v0_7 + 0x1C)) = ((*(int *)((v0_7 + 0x1C))) - v0_6);
    L_C10AE72:;
    v0_7 = (*(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + (v0_5 + 0x4)) + 0x0))) == 0;
    R4 = ((R4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C10AE96;
    v0_7 = *(int *)(((((*(int *)((v0_1 + 0x14))) + 0xC) + R4) + 0x0));
    *(unsigned int *)((v0_7 + 0x1C)) = ((*(int *)((v0_7 + 0x1C))) - v0_6);
    L_C10AE96:;
    v0_7 = *(int *)((v0_1 + 0x14));
    v0_8 = (*(int *)((((v0_7 + 0xC) + (v0_5 + 0x4)) + 0x0))) == 0;
    v0_7 = (v0_7);
    R4 = ((R4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    if (v0_8) goto L_C10AEBA;
    v0_7 = *(int *)((v0_1 + 0x14));
    v0_8 = *(int *)((((v0_7 + 0xC) + R4) + 0x0));
    *(unsigned int *)((v0_8 + 0x1C)) = ((*(int *)((v0_8 + 0x1C))) - v0_6);
    v0_7 = (v0_7);
    L_C10AEBA:;
    v0_7 = (int)(v0_4 + 0x1) < (int)0x10;
    R4 = ((R4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C10AE30;
    goto L_C10AEC6;
    L_C10ADF0:;
    FUN_0c10ab20(v0_2, v0_6, v0_4);
    goto L_C10ADF6;
}

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int stk[22];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float u42;
    register float t43;
    register float t45;
    register float t46;
    register float t47;
    register float u50;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    t2 = math_tan_angle16((t0 >> 1));
    *(float *)(((int)stk + 0)) = (1.0f / t2);
    u3 = *(float *)(((int)stk + 8));
    if (((((struct oC_float *)0xC346AB0)->v)) != 0.0f) {
        t5 = math_atan_angle16((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 4)) = t5;
        t6 = math_tan_angle16(t5);
        t8 = math_atan_angle16((t6 * (((((struct oC_float *)0xC346AB0)->v)) + 1.0f)));
        *(float *)(((int)stk + 20)) = (1.0f / (math_cos_angle16(t8)));
    } else {
        t10 = math_atan_angle16((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 20)) = (1.0f / (math_cos_angle16(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o10_float *)0xC346AB0)->v)) != 0.0f) {
        t17 = math_tan_angle16((t0 >> 1));
        t21 = (math_atan_angle16((t17 * (((((struct o10_float *)0xC346AB0)->v)) + 1.0f))));
    }
    t25 = math_cos_angle16(t21);
    (((struct oC_float *)0xC346AB0)->v) = 0.0f;
    (((struct o10_float *)0xC346AB0)->v) = 0.0f;
    u26 = *(float *)0xC0E2B0C;
    u27 = *(float *)(((int)stk + 0));
    u28 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 16)) = (u27 / u28);
    u30 = ((u27 / u28) * (*(float *)(((int)stk + 20))));
    (((struct o0_float *)0xC346AB0)->v) = (u30 * u26);
    u32 = ((*(float *)(((int)stk + 0))) * (1.0f / t25));
    (((struct o4_float *)0xC346AB0)->v) = (u32 * u26);
    (((struct o0_float *)0xC7FCF68)->v) = (((((struct o14_float *)0xC346AB0)->v)) * ((((struct o0_float *)0xC346AB0)->v)));
    u35 = (((struct o4_float *)0xC346AB0)->v);
    u36 = (((struct o18_float *)0xC346AB0)->v);
    (((struct o4_float *)0xC7FCF68)->v) = (u36 * u35);
    u37 = (((struct o0_float *)0xC7FCF68)->v);
    if (u37 > (u36 * u35)) {
        (((struct o8_float *)0xC346AB0)->v) = u37;
    } else {
        (((struct o8_float *)0xC346AB0)->v) = (u36 * u35);
    }
    t39 = math_tan_angle16((t0 >> 1));
    *(float *)(((int)stk + 12)) = (float)(math_atan_angle16((t39 * (*(float *)(((int)stk + 8))))));
    (((struct o14_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o4_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o30_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o20_float *)0xC7FCF28)->v) = 0.0f;
    u42 = *(float *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = (int)u42;
    t43 = math_cos_angle16((int)u42);
    (((struct o0_float *)0xC7FCF28)->v) = t43;
    (((struct o10_float *)0xC7FCF28)->v) = (-t43);
    t45 = math_sin_angle16((*(int *)(((int)stk + 4))));
    (((struct o18_float *)0xC7FCF28)->v) = t45;
    (((struct o8_float *)0xC7FCF28)->v) = t45;
    t46 = math_cos_angle16((t0 >> 1));
    (((struct o24_float *)0xC7FCF28)->v) = t46;
    (((struct o34_float *)0xC7FCF28)->v) = (-t46);
    t47 = math_sin_angle16((t0 >> 1));
    (((struct o38_float *)0xC7FCF28)->v) = t47;
    (((struct o28_float *)0xC7FCF28)->v) = t47;
    (((struct o1C_float *)0xC7FCF28)->v) = 0.0f;
    (((struct oC_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o3C_float *)0xC7FCF28)->v) = 0.0f;
    (((struct o2C_float *)0xC7FCF28)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 68)) = -1.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    u50 = (f5 * f6);
    *(float *)(((int)stk + 80)) = ((u50 * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC7FD63C)->v) = f5;
    (((struct o4_float *)0xC7FD63C)->v) = f6;
    (((struct o8_float *)0xC7FD63C)->v) = (1.0f / f5);
    (((struct o18_float *)0xC7FCC8C)->v) = f5;
    (((struct o0_float *)0xC7FCC8C)->v) = (-f5);
    (((struct o1C_float *)0xC7FCC8C)->v) = f6;
    (((struct o14_float *)0xC7FCC8C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (FUN_0c0e3510());
}

int FUN_0c10c760(Stk63 s)
{
    int stk[72];
    register int t46;
    register int t47;
    register int t60;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    stk[7] = s.w[6];
    stk[8] = s.w[7];
    stk[9] = s.w[8];
    stk[10] = s.w[9];
    stk[11] = s.w[10];
    stk[12] = s.w[11];
    stk[13] = s.w[12];
    stk[14] = s.w[13];
    stk[15] = s.w[14];
    stk[16] = s.w[15];
    stk[17] = s.w[16];
    stk[18] = s.w[17];
    stk[19] = s.w[18];
    stk[20] = s.w[19];
    stk[21] = s.w[20];
    stk[22] = s.w[21];
    stk[23] = s.w[22];
    stk[24] = s.w[23];
    stk[25] = s.w[24];
    stk[26] = s.w[25];
    stk[27] = s.w[26];
    stk[28] = s.w[27];
    stk[29] = s.w[28];
    stk[30] = s.w[29];
    stk[31] = s.w[30];
    stk[32] = s.w[31];
    stk[33] = s.w[32];
    stk[34] = s.w[33];
    stk[35] = s.w[34];
    stk[36] = s.w[35];
    stk[37] = s.w[36];
    stk[38] = s.w[37];
    stk[39] = s.w[38];
    stk[40] = s.w[39];
    stk[41] = s.w[40];
    stk[42] = s.w[41];
    stk[43] = s.w[42];
    stk[44] = s.w[43];
    stk[45] = s.w[44];
    stk[46] = s.w[45];
    stk[47] = s.w[46];
    stk[48] = s.w[47];
    stk[49] = s.w[48];
    stk[50] = s.w[49];
    stk[51] = s.w[50];
    stk[52] = s.w[51];
    stk[53] = s.w[52];
    stk[54] = s.w[53];
    stk[55] = s.w[54];
    stk[56] = s.w[55];
    stk[57] = s.w[56];
    stk[58] = s.w[57];
    stk[59] = s.w[58];
    stk[60] = s.w[59];
    stk[61] = s.w[60];
    stk[62] = s.w[61];
    stk[63] = s.w[62];
    (((struct o8_uint *)0xC817010)->v) = ((((struct oF8_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct oC_uint *)0xC817010)->v) = ((((struct oF0_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct o10_uint *)0xC817010)->v) = ((((struct oF4_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct o0_uint *)0xC817298)->v) = ((((((((((((((struct o54_int *)((((int)stk + 4) + 0x10)))->v)) << 1) | ((((struct o50_int *)((((int)stk + 4) + 0x10)))->v))) | (((((struct o5C_int *)((((int)stk + 4) + 0x10)))->v)) << 2)) | ((((((struct o68_int *)((((int)stk + 4) + 0x10)))->v)) << 2) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x30))) << 2) << 2)) | (((((((struct o60_int *)((((int)stk + 4) + 0x10)))->v)) << 2) << 2) << 1)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x28))) << 2) << 2) << 2)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x2C))) << 7)) | (((((struct o48_int *)((((int)stk + 4) + 0x10)))->v)) << 8)) | ((((((struct o4C_int *)((((int)stk + 4) + 0x10)))->v)) << 8) << 1));
    (((struct oC_uint *)0xC817298)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) & 0x7FF) << 16));
    (((struct o4_uint *)0xC817298)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) << 16);
    (((struct o10_uint *)0xC817298)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x8))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x14))) & 0x7FF) << 16));
    (((struct o14_uint *)0xC817298)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x10))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0x7FF) << 16));
    (((struct o8_uint *)0xC817298)->v) = ((((((struct o74_int *)((((int)stk + 4) + 0x10)))->v)) & 0x7FF) | ((((((struct o78_int *)((((int)stk + 4) + 0x10)))->v)) & 0x7FF) << 16));
    (((struct o18_uint *)0xC817298)->v) = (((((*(int *)(((((int)stk + 4) + 0x10) + 0x18))) & 0x7F) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x1C))) & 0xF) << 8)) | (((((*(int *)(((((int)stk + 4) + 0x10) + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x24))) & 0x7F) << 22));
    (((struct o24_uint *)0xC817298)->v) = ((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x34))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x38))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x3C))) & 0x1) << 2)) | (((((((struct o40_int *)((((int)stk + 4) + 0x10)))->v)) & 0x1) << 2) << 1)) | (((0xF & ((((struct o44_int *)((((int)stk + 4) + 0x10)))->v))) << 2) << 2)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x10)))->v)) & 0x1) << 8)) | ((((((struct o70_int *)((((int)stk + 4) + 0x10)))->v)) & 0x3F) << 16));
    (((struct o28_uint *)0xC817298)->v) = (((((struct o8_int *)0xC817010)->v)) + ((((struct o0_int *)0xC817010)->v)));
    (((struct o2C_uint *)0xC817298)->v) = ((((((struct oC_int *)0xC817010)->v)) + ((((struct o4_int *)0xC817010)->v))) | ((((((struct o10_int *)0xC817010)->v)) + ((((struct o4_int *)0xC817010)->v))) << 16));
    if ((((((struct o0_int *)0xC816FC8)->v)) & 2) != 0) {
        for (;;) {
            t46 = kmiReadRegister(0x10C);
            if ((t46 & 0x3FF) != 0) {
                break;
            }
        }
        for (;;) {
            t47 = kmiReadRegister(0x10C);
            if ((t47 & 0x3FF) == 0) {
                break;
            }
        }
    }
    thunk_FUN_0c10e184(0xE8, (((((struct o24_int *)0xC817298)->v)) | 0x8));
    t60 = 0x0;
    if ((((((struct o18_int *)0xC816FC8)->v)) & 1) != 0) {
        t60 = 0x800000;
    }
    thunk_FUN_0c10e184(0x44, t60);
    thunk_FUN_0c10e184(0x5C, 0x0);
    thunk_FUN_0c10e184(0xD0, ((((struct o0_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xD8, ((((struct o10_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xCC, ((((struct o8_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xD4, ((((struct oC_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xDC, ((((struct o14_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xE0, ((((struct o18_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xEC, ((((struct o28_int *)0xC817298)->v)));
    thunk_FUN_0c10e184(0xF0, ((((struct o2C_int *)0xC817298)->v)));
    return (thunk_FUN_0c10e184(0xC8, ((((struct o4_int *)0xC817298)->v))));
}

int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[8];
    register int t0;
    register int t117;
    int t3;
    register int t4;
    register int t19;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t32;
    register int t33;
    register int t43;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t54;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t70;
    register int t71;
    register int t72;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t101;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t6;
    int t7;
    register int t8;
    register int t9;
    register int t62;

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)0xC843924;
    t117 = 0xFFFFFFFF;
    if ((*(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6))) != 0) {
    } else {
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 12)) = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0xC15B694));
        (((struct o10_uchar *)(((int)stk + 4)))->v) = t3;
        *(unsigned int *)(((int)stk + 16)) = (unsigned char)(0xC0 & t3);
        *(unsigned int *)(((int)stk + 4)) = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0xC843924;
        if (((int)((((struct o10CC_int *)(t4))->v)) > 0) && ((t6 = (((struct oFD8_int *)(t4))->v), (int)t6 > 0) && (t7 = (((struct oFCC_int *)(t4))->v), t8 = *(int *)((t7 + 0x0)), t9 = *(int *)(((int)stk + 4)), t9 == (0x3 & (short)((unsigned int)t8 >> 16))))) {
            mpdrv_insertnop(((((struct o10CC_int *)(t4))->v)));
        }
        t19 = *(int *)0xC843924;
        (((struct oFCC_uint *)(t19))->v) = (((((struct oFCC_int *)(t19))->v)) + (((((struct oFD8_int *)(t19))->v)) << 2));
        t22 = *(int *)(((int)stk + 4));
        t24 = (((struct oFCC_int *)((*(int *)0xC843924)))->v);
        *(unsigned int *)(((int)stk + 24)) = (unsigned char)(a7 + a9);
        *(unsigned int *)((t24 + 0x0)) = ((t22 << 16) | (unsigned char)(a7 + a9));
        *(int *)((int)stk + 0) = (t24 + 0x4);
        t25 = *(int *)0xC843924;
        t26 = (((struct o10B4_int *)(t25))->v);
        *(unsigned int *)(((t24 + 0x4) + 0x0)) = (FUN_0c112f1e((*(int *)(((a4 << 2) + ((t25 + 0xFE8) + (((((t26 << 1) + t26) << 2) << 2) << 1)))))));
        t32 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((int)stk + 8)));
        t33 = *(signed char *)(((int)stk + 20));
        if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 4))) << 16) << 8) & 0xFF000000) | (((unsigned char)t33 << 16) & 0xFF0000)) | (((*(int *)(((int)stk + 16))) << 8) & 0xFF00)) | (*(int *)(((int)stk + 24))));
            t43 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t39 = t32;
                t40 = 0x0;
                t41 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t42 = *(int *)((t39 + 0x0));
                    t39 = (t39 + 0x4);
                    t40 = (t40 + 0x1);
                    *(unsigned int *)((t41 + 0x0)) = t42;
                    t41 = (t41 + 0x4);
                    if ((int)t40 >= (int)a7) {
                        break;
                    }
                }
                t43 = t41;
            }
            t62 = t43;
        } else {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = ((((((*(int *)(((int)stk + 16))) << 16) & 0xFF0000) | (((unsigned char)t33 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 4))));
            t54 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t49 = t32;
                t50 = 0x0;
                t51 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t52 = *(int *)((t49 + 0x0));
                    t49 = (t49 + 0x4);
                    t50 = (t50 + 0x1);
                    *(unsigned int *)((t51 + 0x0)) = ((((((t52 << 16) << 8) & 0xFF000000) | ((t52 << 8) & 0xFF0000)) | (((int)t52 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t52 >> 16) >> 8));
                    t51 = (t51 + 0x4);
                    if ((int)t50 >= (int)a7) {
                        break;
                    }
                }
                t54 = t51;
            }
            t62 = t54;
        }
        if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
            if ((int)a9 > 0) {
                t70 = a8;
                t71 = 0x0;
                t72 = t62;
                for (;;) {
                    t71 = (t71 + 0x1);
                    *(unsigned int *)((t72 + 0x0)) = ((((((*(signed char *)((t70 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t70 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t70 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t70 + 0x3))));
                    t72 = (t72 + 0x4);
                    t70 = (t70 + 0x4);
                    if ((int)t71 >= (int)a9) {
                        break;
                    }
                }
            }
        } else {
            if ((int)a9 > 0) {
                t83 = 0x0;
                t84 = a8;
                t85 = t62;
                for (;;) {
                    t86 = *(int *)((t84 + 0x0));
                    t84 = (t84 + 0x4);
                    t83 = (t83 + 0x1);
                    *(unsigned int *)((t85 + 0x0)) = t86;
                    t85 = (t85 + 0x4);
                    if ((int)t83 >= (int)a9) {
                        break;
                    }
                }
            }
        }
        (((struct oFD8_uint *)((*(int *)0xC843924)))->v) = (*(int *)(((int)stk + 12)));
        t101 = *(int *)0xC843924;
        (((struct oFDC_uint *)(t101))->v) = (((((struct oFDC_int *)(t101))->v)) + ((*(int *)(((int)stk + 12))) << 2));
        t104 = *(int *)0xC843924;
        t105 = *(int *)0xC843924;
        t106 = (((struct oFE0_int *)(t104))->v);
        (((struct oFE0_uint *)(t104))->v) = (t106 + 0x1);
        *(unsigned int *)((((t105 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t106 + 0x1) - 1);
        t107 = *(int *)0xC843924;
        (((struct oFE0_uint *)(t107))->v) = (((((struct oFE0_int *)(t107))->v)) & 0x7FFFFFFF);
        if (((((struct oFE0_int *)((*(int *)0xC843924)))->v)) == 0) {
            (((struct oFE0_uint *)((*(int *)0xC843924)))->v) = 0x1;
        }
        t117 = (*(int *)(((((*(int *)0xC843924) + 0x28) + (a4 * 0x2C)) + 0x18)));
    }
    return t117;
}

int FUN_0c111cb8(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t11;
    register int t13;
    register int t15;
    register int t21;
    register int t24;
    register int t26;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;

    (((struct o10B4_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10B8_uint *)((*(int *)0xC843924)))->v) = 0x0;
    t2 = 0x0;
    t3 = 0x6000;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)0xC843924;
        *(unsigned int *)((((0xFE8 + t5) + t2) + 0x0)) = (((((struct oFC8_int *)(t5))->v)) + t4);
        t7 = *(int *)0xC843924;
        t8 = ((0x1048 + t7) + t2);
        t2 = (t2 + 0x4);
        *(unsigned int *)((t8 + 0x0)) = (((((struct oFC8_int *)(t7))->v)) + t3);
        t3 = (t3 + 0x400);
        t4 = (t4 + 0x400);
        if ((unsigned int)t2 >= (unsigned int)0x60) {
            break;
        }
    }
    t11 = *(int *)0xC843924;
    (((struct o10A8_uint *)(t11))->v) = ((((struct oFC4_int *)(t11))->v));
    t13 = *(int *)0xC843924;
    (((struct o10AC_uint *)(t13))->v) = (((((struct oFC4_int *)(t13))->v)) + 0x3000);
    t15 = *(int *)0xC843924;
    (((struct oFCC_uint *)(t15))->v) = ((((struct o10A8_int *)(t15))->v));
    mpdrv_memset_l(((*(int *)0xC843924) + 0x4), 0x0, 0x8);
    mpdrv_memset_l(((*(int *)0xC843924) + 0x28), 0x0, 0x108);
    t21 = 0x0;
    for (;;) {
        mpdrv_clear_deviceinfo((((*(int *)0xC843924) + 0x44C) + t21));
        t21 = (t21 + 0x78);
        if ((unsigned int)t21 >= (unsigned int)0xB40) {
            break;
        }
    }
    t24 = 0x0;
    for (;;) {
        t26 = ((0xF90 + (*(int *)0xC843924)) + t24);
        t24 = (t24 + 0x1);
        *(unsigned char *)((t26 + 0x0)) = 0x0;
        if ((int)t24 >= (int)0x18) {
            break;
        }
    }
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(signed char *)0xC15B668);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = (*(signed char *)0xC15B669);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = (*(signed char *)0xC15B66A);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)0xC15B66B);
    t32 = 0xF;
    if ((int)(unsigned char)(*(int *)0xA05F689C) <= (int)0x1) {
        t32 = 0x7;
    }
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x4);
    t34 = 0xA05F689C;
    t35 = ((((int)stk + 0) + 0x4) + 0x4);
    t36 = (((int)stk + 0) + 0x4);
    t37 = 0x0;
    t38 = 0x0;
    t39 = t21;
    for (;;) {
        if (((*(signed char *)((t36 + 0x0))) & (signed char)t32) != 0) {
            t35 = t38;
            t34 = (*(int *)0xC843924);
            t35 = (t35 + 0x1);
            t39 = 0x0;
            *(unsigned char *)((((0xF90 + t34) + t37) + 0x0)) = 0x52;
            for (;;) {
                t39 = (t39 + 0x1);
                t34 = (*(int *)0xC843924);
                *(unsigned char *)((((0xF90 + t34) + t35) + 0x0)) = 0x45;
                t35 = (t35 + 0x1);
                if ((int)t39 >= (int)0x5) {
                    break;
                }
            }
        }
        t36 = (t36 + 0x1);
        t38 = (t38 + 0x6);
        t37 = (t37 + 0x6);
        if ((unsigned int)t36 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
    }
    (((struct o10C0_uint *)((*(int *)0xC843924)))->v) = 0xC3500000;
    (((struct oFDC_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct oFD8_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct oFE0_uint *)((*(int *)0xC843924)))->v) = 0x1;
    (((struct o10C8_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10EC_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10E8_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10CC_uint *)((*(int *)0xC843924)))->v) = 0x5;
    (((struct o10D0_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10D8_uint *)((*(int *)0xC843924)))->v) = 0xA;
    (((struct o10DC_uint *)((*(int *)0xC843924)))->v) = 0x5;
    (((struct o10E0_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct o10E4_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct oFAC_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct oFB0_uint *)((*(int *)0xC843924)))->v) = 0x0;
    (((struct oFBC_uint *)((*(int *)0xC843924)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC843924) + 0x0)) = 0x54524F50;
    *(unsigned int *)(((*(int *)0xC843924) + 0x24)) = 0x20564544;
    (((struct o448_uint *)((*(int *)0xC843924)))->v) = 0x4F464E49;
    (((struct oF8C_uint *)((*(int *)0xC843924)))->v) = 0x4C424E45;
    (((struct oFA8_uint *)((*(int *)0xC843924)))->v) = 0x54415453;
    (((struct oFE4_uint *)((*(int *)0xC843924)))->v) = 0x52444152;
    (((struct o10BC_uint *)((*(int *)0xC843924)))->v) = 0x54554F54;
    (((struct o10D4_uint *)((*(int *)0xC843924)))->v) = 0x43515244;
    (((struct o10F0_uint *)((*(int *)0xC843924)))->v) = 0x434E5546;
    (((struct o10F8_uint *)((*(int *)0xC843924)))->v) = 0x20444E45;
    mpdrv_swapmode(0x0);
    return (mpdrv_init_memory());
}

int FUN_0c11142c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t12;
    register int t15;
    register int t20;
    register int t22;
    register int t25;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t45;
    register int t47;
    register int t49;
    register int t51;
    register int t53;
    register int t56;
    register int t57;
    int t58;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t78;
    register int t99;
    register int t88;
    register int t89;
    register int t90;
    register int t91;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)0xC843924 = 0xC842828;
    *(unsigned int *)0xC8437EC = a6;
    (((struct oFC8_uint *)((*(int *)0xC843924)))->v) = (*(int *)(((int)stk + 0)));
    if ((((((struct oFC4_int *)((*(int *)0xC843924)))->v)) & 0x1F) != 0) {
        t4 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t4))->v) = (((((struct oFC4_int *)(t4))->v)) + 0x20);
        t6 = *(int *)0xC843924;
        (((struct oFC4_uint *)(t6))->v) = (((((struct oFC4_int *)(t6))->v)) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC843924;
    if ((((((struct oFC8_int *)(t12))->v)) & 0x1F) != 0) {
        (((struct oFC8_uint *)(t12))->v) = (((((struct oFC8_int *)(t12))->v)) + 0x20);
        t15 = *(int *)0xC843924;
        (((struct oFC8_uint *)(t15))->v) = (((((struct oFC8_int *)(t15))->v)) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC843924;
    (((struct oFC4_uint *)(t20))->v) = (((((struct oFC4_int *)(t20))->v)) | 0xA0000000);
    t22 = *(int *)0xC843924;
    (((struct oFC8_uint *)(t22))->v) = (((((struct oFC8_int *)(t22))->v)) | 0xA0000000);
    FUN_0c111cb8();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC843924)) + t25) + 0x0)) = 0x0;
        t28 = ((0x1048 + (*(int *)0xC843924)) + t25);
        t25 = (t25 + 0x4);
        *(unsigned int *)((t28 + 0x0)) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 4));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC843924)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            *(unsigned int *)((((t36 << 2) + (0x1048 + (*(int *)0xC843924))) + 0x0)) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC843924;
    (((struct o10A8_uint *)(t45))->v) = ((((struct oFC4_int *)(t45))->v));
    t47 = *(int *)0xC843924;
    (((struct o10AC_uint *)(t47))->v) = (((a7 << 8) << 2) + ((((struct oFC4_int *)(t47))->v)));
    t49 = *(int *)0xC843924;
    (((struct oFCC_uint *)(t49))->v) = ((((struct o10A8_int *)(t49))->v));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC843924)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t57 = *(int *)(((int)stk + 8));
    if ((int)a7 > 0) {
        t56 = 0x0;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC843924))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC843924))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC843924))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0xC15B6AC;
    t74 = 0xC15B6AC;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0xC15B6AC;
    t78 = 0xC15B6AC;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC843924)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0xC15B6BC) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC843924)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC843924)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x10)) = 0x0;
    t99 = *(int *)0xC843924;
    (((struct o80_uint *)(((((struct o10F4_int *)(t99))->v))))->v) = (((((struct o10C0_int *)(t99))->v)) | ((((struct o10D0_int *)(t99))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC843924)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t17;
    register int t21;
    register int t22;
    register int t23;
    register int t30;
    register int t42;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t53;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t68;
    register int t69;
    register int t70;
    register int t81;
    register int t82;
    register int t83;
    register int t84;
    register int t99;
    register int t5;
    int t6;
    register int t7;
    register int t61;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0xC15B694)));
    t2 = *(signed char *)(((((int)stk + 4) + 0xC) + 0x0));
    t3 = *(int *)0xC843924;
    if (((int)((((struct o10CC_int *)(t3))->v)) > 0) && ((t5 = (((struct oFD8_int *)(t3))->v), (int)t5 > 0) && (t6 = (((struct oFCC_int *)(t3))->v), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop(((((struct o10CC_int *)(t3))->v)));
    }
    t17 = *(int *)0xC843924;
    (((struct oFCC_uint *)(t17))->v) = (((((struct oFCC_int *)(t17))->v)) + (((((struct oFD8_int *)(t17))->v)) << 2));
    t21 = (((struct oFCC_int *)((*(int *)0xC843924)))->v);
    *(unsigned int *)(((int)stk + 24)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    *(int *)((int)stk + 0) = (t21 + 0x4);
    t22 = *(int *)0xC843924;
    t23 = (((struct o10B4_int *)(t22))->v);
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (FUN_0c112f1e((*(int *)((((*(int *)(((int)stk + 4))) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t30 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((int)stk + 16)));
    if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 8))) << 16) << 8) & 0xFF000000) | (((*(int *)(((int)stk + 4))) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 24))));
        t42 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t37 = t30;
            t38 = 0x0;
            t39 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t40 = *(int *)((t37 + 0x0));
                t37 = (t37 + 0x4);
                t38 = (t38 + 0x1);
                *(unsigned int *)((t39 + 0x0)) = t40;
                t39 = (t39 + 0x4);
                if ((int)t38 >= (int)a7) {
                    break;
                }
            }
            t42 = t39;
        }
        t61 = t42;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((*(int *)(((int)stk + 4))) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 8))));
        t53 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t47 = t30;
            t48 = 0x0;
            t49 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t50 = *(int *)((t47 + 0x0));
                t47 = (t47 + 0x4);
                t48 = (t48 + 0x1);
                *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                t49 = (t49 + 0x4);
                if ((int)t48 >= (int)a7) {
                    break;
                }
            }
            t53 = t49;
        }
        t61 = t53;
    }
    if (((((struct o10C4_int *)((*(int *)0xC843924)))->v)) == 1) {
        if ((int)a9 > 0) {
            t68 = a8;
            t69 = 0x0;
            t70 = t61;
            for (;;) {
                t69 = (t69 + 0x1);
                *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                t70 = (t70 + 0x4);
                t68 = (t68 + 0x4);
                if ((int)t69 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t81 = 0x0;
            t82 = a8;
            t83 = t61;
            for (;;) {
                t84 = *(int *)((t82 + 0x0));
                t82 = (t82 + 0x4);
                t81 = (t81 + 0x1);
                *(unsigned int *)((t83 + 0x0)) = t84;
                t83 = (t83 + 0x4);
                if ((int)t81 >= (int)a9) {
                    break;
                }
            }
        }
    }
    (((struct oFD8_uint *)((*(int *)0xC843924)))->v) = (*(int *)(((int)stk + 12)));
    t99 = *(int *)0xC843924;
    (((struct oFDC_uint *)(t99))->v) = (((((struct oFDC_int *)(t99))->v)) + ((*(int *)(((int)stk + 12))) << 2));
    return 0x0;
}

int vmsio_get_media_info(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t6;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t19;
    register int t20;
    register int t53;
    register int t54;
    register int t61;
    register int t62;
    register int t67;
    register int t63;

    t0 = *(int *)(((a4 << 2) + 0xC15B6C4));
    *(unsigned int *)(((int)stk + 0)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0) {
        t6 = ((int (*)(int))(thunk_FUN_0c1155a8))(t2);
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            t8 = ((int (*)(int))(thunk_FUN_0c1155a8))(t2);
            t63 = 0xFFFFFF01;
        } else {
            thunk_FUN_0c111b7e(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo();
                    if ((int)t11 < 0) {
                        t12 = ((int (*)(void))(thunk_FUN_0c1155a8))();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = thunk_FUN_0c111b54(t0);
                    if (t13 == 0) {
                        t14 = ((int (*)(void))(thunk_FUN_0c1155a8))();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = thunk_FUN_0c111b6e(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x4, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x6, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x8, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0xA, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0xC, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x10, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x12, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0xC)))))((t20 + 0x8), 0x14, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 0) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 10)));
                    (((struct o40_uint *)(a5))->v) = (unsigned short)(*(short *)(((int)stk + 8)));
                    (((struct o44_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 10)))));
                    (((struct o48_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 8)))));
                    return 0x0;
                }
                t61 = ((int (*)(void))(thunk_FUN_0c1155a8))();
                return 0xFFFFFF01;
            }
            t62 = ((int (*)(void))(thunk_FUN_0c1155a8))();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
}

int snd_driver_upload(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C0E542A;
    (((struct oC_uint *)0xC7FD0E0)->v) = 0x200000;
    L_C0E5442:;
    *(unsigned int *)0xA0702800 = (*(int *)(((int)stk + 0)));
    *(unsigned int *)0xA0702C00 = (0x1 | (0xFFFE & (*(int *)0xA0702C00)));
    v0_0 = (0xA0800000);
    v0_1 = ((*(int *)(((int)stk + 4))));
    v0_2 = (((((struct o54_int *)((*(int *)(((int)stk + 4)))))->v)));
    v0_3 = (0x0);
    L_C0E5470:;
    if (((unsigned int)v0_3 < (unsigned int)((unsigned int)v0_2 >> 2))) goto L_C0E5466;
    (((struct o0_uint *)0xA0800050)->v) = (*(int *)(((int)stk + 0)));
    v0_0 = (0xA0800060);
    v0_3 = (0x0);
    L_C0E5494:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E5486;
    *(unsigned int *)0xA0702C00 = ((*(int *)0xA0702C00) & 0xFFFE);
    v0_3 = (0x0);
    L_C0E550C:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E54D0;
    v0_3 = (0x0);
    L_C0E5558:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E5518;
    (((struct o4_uint *)0xC7FD0E0)->v) = (((((struct o84_int *)((*(int *)(((int)stk + 4)))))->v)) + 0xA0800000);
    (((struct o8_uint *)0xC7FD0E0)->v) = (((((struct o80_int *)((*(int *)(((int)stk + 4)))))->v)) + 0xA0800010);
    (((struct o0_uint *)0xC7FD0E0)->v) = 0xA0800400;
    (((struct o10_uint *)0xC7FD0E0)->v) = 0x0;
    (((struct o18_uint *)0xC7FD0E0)->v) = 0x0;
    L_C0E5594:;
    if ((((((struct oC_int *)0xA0800050)->v)) == 0)) goto L_C0E5594;
    v0_0 = (0x0);
    L_C0E55A2:;
    return v0_0;
    L_C0E5518:;
    *(unsigned short *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD110)) = 0xFFFFFFFF;
    *(unsigned int *)((((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD110) + 0x8)) = 0xFFFFFFFF;
    *(unsigned int *)((((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC7FD110) + 0x4)) = 0xFFFFFFFF;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E5558;
    L_C0E54D0:;
    *(unsigned int *)(((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC7FD1D0)) = 0xFFFFFFFF;
    *(unsigned int *)((((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC7FD1D0) + 0x4)) = 0x0;
    *(unsigned int *)((((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC7FD1D0) + 0x8)) = 0x0;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E550C;
    L_C0E5486:;
    *(unsigned int *)((v0_0 + 0x0)) = 0xFFFFFFFF;
    if (((*(int *)((v0_0 + 0x0))) != -1)) goto L_C0E5486;
    v0_0 = ((v0_0 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E5494;
    L_C0E5466:;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_1 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E5470;
    L_C0E542A:;
    if (((*(int *)(((int)stk + 0))) != 0x200)) goto L_C0E543C;
    (((struct oC_uint *)0xC7FD0E0)->v) = 0x800000;
    goto L_C0E5442;
    L_C0E543C:;
    v0_0 = (0xFFFFFFFE);
    goto L_C0E55A2;
}

int FUN_0c0f7b60(int a4, int a5, int a6, int a7, int a8)
{
    int stk[647];
    register int t24;
    register int t26;
    register int t64;
    register int t33;
    register int t34;
    register int t37;
    register int t77;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((((struct o0_int *)0xC15A9E0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = ((((struct o4_int *)0xC15A9E0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((((struct o8_int *)0xC15A9E0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = ((((struct oC_int *)0xC15A9E0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x10)) = ((((struct o10_int *)0xC15A9E0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x14)) = ((((struct o14_int *)0xC15A9E0)->v));
    *(unsigned int *)((((((*(int *)0xC347080) << 2) << 2) + 0xC803D94) + 0x0)) = a4;
    *(unsigned int *)((((((*(int *)0xC347080) << 2) << 2) + 0xC803D94) + 0x4)) = a5;
    *(unsigned int *)((((((*(int *)0xC347080) << 2) << 2) + 0xC803D94) + 0x8)) = (*(int *)(((int)stk + 0)));
    (((struct o0_uint *)0xC803D90)->v) = a7;
    *(unsigned int *)((((((*(int *)0xC347080) << 2) << 2) + 0xC803D94) + 0xC)) = a8;
    *(unsigned int *)0xC347080 = (((*(int *)0xC347080) + 0x1) & 0x1);
    (((struct oC_uint *)0xC816FE8)->v) = a7;
    if (((((struct o3C_int *)0xC803D90)->v)) != 0) {
        gfx_set_frame_buffer_size(0xFF, a7, (*(int *)(((int)stk + 0))));
    }
    t24 = FUN_0c0fae08();
    if (t24 == 0x80000000) {
        t26 = FUN_0c1092e0((*(int *)0xC803DD8), a4);
        t64 = t26;
        if (t26 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            *(unsigned int *)((a4 + 0x4)) = (*(int *)((((((((struct o0_int *)0xC816FE8)->v)) << 2) + (((int)stk + 0) + 0x4)) + 0x0)));
            *(unsigned int *)((a4 + 0x8)) = ((((struct o0_int *)0xC816FE8)->v));
            *(unsigned int *)((a4 + 0xC)) = ((((struct o30_int *)0xC803D90)->v));
            *(unsigned int *)((a4 + 0x10)) = ((((struct o34_int *)0xC803D90)->v));
            if (a7 == 1) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            }
            if (a8 == 1) {
                t33 = (((int)stk + 0) + 0x1C);
                t34 = 0x0;
                for (;;) {
                    *(unsigned int *)((t33 + 0x0)) = 0x0;
                    t34 = (t34 + 0x2);
                    t33 = (t33 + 0x4);
                    *(unsigned int *)((t33 + 0x0)) = 0x0;
                    t33 = (t33 + 0x4);
                    if ((unsigned int)t34 >= (unsigned int)0x280) {
                        break;
                    }
                }
                if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x14)))) {
                    t37 = 0x0;
                    for (;;) {
                        kmiCopyToPVRMemory(((*(int *)((a4 + 0x1C))) + t37), (((int)stk + 0) + 0x1C), 0xA00);
                        t37 = (t37 + 0xA00);
                        if ((unsigned int)t37 >= (unsigned int)(*(int *)((a4 + 0x14)))) {
                            break;
                        }
                    }
                }
            }
            t64 = 0x0;
        }
        t77 = t64;
    } else {
        FUN_0c0fad80(0x200);
        t77 = 0x0;
    }
    return t77;
}
