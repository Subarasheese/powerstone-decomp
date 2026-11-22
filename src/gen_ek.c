/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o204_int { char p[0x204]; int v; };
struct o208_int { char p[0x208]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o38_int { char p[0x38]; int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0e4358(int, int, int, float, float, float, float);
int FUN_0c0e4454(float, float, float, float);
int FUN_0c0ed9c0(int, int, int);
int FUN_0c0eee64(int);
int FUN_0c0efdee(int);
int FUN_0c0efe10(int);
int FUN_0c0f2292(int);
int FUN_0c0f22d0(int, int, int);
int FUN_0c0f2486(int, int);
int FUN_0c0f24d6(int, int, int);
int FUN_0c0f9872(int);
int FUN_0c0fe8c0(int, int, int, int);
int FUN_0c101140(int);
int FUN_0c1012f4(int, int, int);
int FUN_0c101b1c(int);
int FUN_0c101b58(int, int, int);
int FUN_0c102556(int, int);
int FUN_0c10274c(int, int);
int FUN_0c103f6c(int, int);
int FUN_0c105438(int, int, int, int, int, int);
int FUN_0c107432(int, int, int, int, int);
int FUN_0c109d40(int, int);
int FUN_0c109f4c(int, int, int);
int FUN_0c10aa20(void);
int FUN_0c10aa80(int);
int FUN_0c10aad4(int, int, int);
int FUN_0c10ab3c(int, int, int);
int FUN_0c112ff8(void);
int FUN_0c11568c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_cache(int);
int fmMngBit2Num(int, int);
int fmMngMcpy4(int, int, int);
extern int get_fat();
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetBlockRead(int, int, int, int, int);
int kmiWriteRegister(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int memcpy(int, int, int);
int memset(int, int, int);
int nl_set_virtual_screen(float, float);
int search_fat(int, int);
int search_fat_free_xross(int);
int set_fat(int, int, int);
int thunk_FUN_0c111b54(int);
int thunk_FUN_0c111b6e(int);
int thunk_FUN_0c1155a8(void);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_memcpyl(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int, int, int, int);
int write_sys(int);
int nl_sprite_draw(int a4);
int FUN_0c10a2e0(int a4, int a5, int a6, int a7);
int kmiStartRenderTextureEntry(int a4, int a5, int a6, int a7);
int FUN_0c10a8de(int a4, int a5);
void FUN_0c0f250a(void);
int vmsio_block_read(int a4, int a5, int a6);
int FUN_0c104742(int a4, int a5, int a6, int a7);
int FUN_0c109e20(int a4, int a5);
int FUN_0c107bbe(int a4);
int vmsfs_fwrite1(int a4, int a5);
int FUN_0c11035c(int a4, int a5, int a6);
int FUN_0c101a22(int a4, int a5, int a6);
int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9);
int nl_sprite_tables_init(int a4, int a5, int a6);
int FUN_0c1136ee(int a4);
int FUN_0c11533a(int a4, int a5, int a6, int a7);
void FUN_0c0f184c(int a4, int a5, int a6);
int FUN_0c0f0072(int a4);
int vmsfs_mount2(int a4);

int nl_sprite_draw(int a4)
{
    int stk[31];
    register int t4;
    register int t9;
    register float u35;
    register float u40;
    register float t48;
    register float u54;
    register float u55;
    register int t58;
    register float u59;
    register float u60;
    register int t69;
    register int t71;
    register int t73;
    register int t77;
    register int t85;
    register int t93;
    register int t100;
    register int t103;
    register int t107;
    register int t109;
    register int t112;
    register int t161;
    register int t162;
    register int t168;
    register int t183;
    register int t187;
    register int t188;
    register int t189;
    register int t207;
    register int t242;
    register int t245;
    int t13;
    register int t14;

    (((struct o78_uint *)(((int)stk + 0)))->v) = a4;
    t4 = *(short *)((((((struct o0_int *)0xC7FD044)->v)) + ((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) << 1)));
    *(unsigned int *)(((int)stk + 32)) = (short)t4;
    if ((short)t4 == -1) {
        return (short)t4;
    }
    *(unsigned int *)(((int)stk + 104)) = (((((*(int *)(((int)stk + 32))) << 2) << 2) << 1) + ((((struct oC_int *)0xC7FD044)->v)));
    t9 = *(int *)(((*(int *)(((int)stk + 120))) + 0x30));
    if (t9 != 0) {
        if (t9 != 2) {
            *(float *)(((int)stk + 36)) = ((((struct o2C_float *)((*(int *)(((int)stk + 120)))))->v));
            *(unsigned int *)(((int)stk + 40)) = 0x0;
            if (!(1.0f > (*(float *)(((int)stk + 36)))) && (t13 = *(int *)(((int)stk + 104)), t14 = *(int *)((t13 + 0x14)), t14 == 0)) {
            } else {
                *(unsigned int *)(((int)stk + 40)) = 0x1;
            }
        } else {
            *(float *)(((int)stk + 36)) = ((((struct o2C_float *)((*(int *)(((int)stk + 120)))))->v));
            *(unsigned int *)(((int)stk + 40)) = 0x1;
        }
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0x0;
    }
    u35 = (((((struct o18_float *)((*(int *)(((int)stk + 104)))))->v)) * ((((struct o10_float *)((*(int *)(((int)stk + 120)))))->v)));
    *(float *)(((int)stk + 112)) = (u35 * 0.5f);
    u40 = (((((struct o1C_float *)((*(int *)(((int)stk + 104)))))->v)) * ((((struct o14_float *)((*(int *)(((int)stk + 120)))))->v)));
    *(float *)(((int)stk + 108)) = (u40 * 0.5f);
    *(float *)(((int)stk + 116)) = (1.0f / ((((struct oC_float *)((*(int *)(((int)stk + 120)))))->v)));
    *(float *)(((int)stk + 68)) = (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 120))) + 0x28)))));
    t48 = math_cos_angle16((*(int *)(((*(int *)(((int)stk + 120))) + 0x28))));
    *(float *)(((int)stk + 64)) = t48;
    FUN_0c0e4358((*(int *)(((int)stk + 120))), (((int)stk + 0) + 0x58), (((int)stk + 0) + 0x48), (*(float *)(((int)stk + 112))), (*(float *)(((int)stk + 108))), (*(float *)(((int)stk + 68))), t48);
    u54 = (((struct o0_float *)0xC346AC4)->v);
    u55 = (((struct o10_float *)0xC7FD044)->v);
    *(float *)(((int)stk + 8)) = (u55 * u54);
    *(float *)(((int)stk + 4)) = (((((struct o14_float *)0xC7FD044)->v)) * ((((struct o4_float *)0xC346AC4)->v)));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t58 = 0xC346AC8;
    u59 = (u55 * u54);
    u60 = u54;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        t58 = (*(int *)(((int)stk + 0)));
        t58 = (t58 << 2);
        t58 = (t58 + (((int)stk + 0) + 0x58));
        u60 = (*(float *)(((int)stk + 8)));
        u59 = (*(float *)((t58 + 0x0)));
        u59 = (u59 * u60);
        *(float *)((t58 + 0x0)) = u59;
        t58 = (*(int *)(((int)stk + 0)));
        t58 = (t58 << 2);
        t58 = (t58 + (((int)stk + 0) + 0x48));
        u60 = (*(float *)(((int)stk + 4)));
        u59 = (*(float *)((t58 + 0x0)));
        u59 = (u59 * u60);
        *(float *)((t58 + 0x0)) = u59;
        t58 = (*(int *)(((int)stk + 0)));
        t58 = (t58 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t58;
    }
    t69 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t69 + 0x0)) = ((*(int *)((t69 + 0x0))) & 0xF8FCFFFF);
    t71 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t71 + 0x4)) = ((*(int *)((t71 + 0x4))) & 0x1FFFFFFF);
    t73 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t73 + 0x8)) = ((*(int *)((t73 + 0x8))) & 0x3278FFF);
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x800) != 0) {
    } else {
        t77 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t77 + 0x8)) = ((*(int *)((t77 + 0x8))) | 0x800000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x1000) != 0) {
        t85 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t85 + 0x8)) = ((*(int *)((t85 + 0x8))) | 0x2000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x10000) != 0) {
        t93 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t93 + 0x8)) = ((*(int *)((t93 + 0x8))) | 0x1000);
    }
    t100 = *(int *)(((*(int *)(((int)stk + 120))) + 0x34));
    *(unsigned int *)(((int)stk + 60)) = (((int)t100 >> 8) & 0x7);
    if ((((int)t100 >> 8) & 0x7) == 0) {
        *(unsigned int *)(((int)stk + 60)) = 0x4;
    }
    t103 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t103 + 0x4)) = ((*(int *)((t103 + 0x4))) | ((*(int *)(((int)stk + 60))) << 29));
    if ((*(int *)(((int)stk + 40))) != 0) {
        t107 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t107 + 0x0)) = ((*(int *)((t107 + 0x0))) | 0x2000000);
        t109 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t109 + 0x8)) = ((*(int *)((t109 + 0x8))) | ((((((((struct o38_int *)0xC3468B0)->v)) ^ 0xFC) << 16) << 8) | 0x100000));
    } else {
        t112 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t112 + 0x8)) = ((*(int *)((t112 + 0x8))) | 0x20080000);
        *(float *)(((int)stk + 36)) = 1.0f;
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x2000) != 0) {
        *(unsigned int *)((((*(int *)(((int)stk + 104))) + 0x10) + 0x0)) = (FUN_0c0e4454((*(float *)(((int)stk + 36))), ((((struct o0_float *)0xC3468B0)->v)), ((((struct o4_float *)0xC3468B0)->v)), ((((struct o8_float *)0xC3468B0)->v))));
    } else {
        *(unsigned int *)((((*(int *)(((int)stk + 104))) + 0x10) + 0x0)) = (FUN_0c0e4454((*(float *)(((int)stk + 36))), 1.0f, 1.0f, 1.0f));
    }
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x30);
    *(float *)(((int)stk + 56)) = ((((struct o18_float *)((*(int *)(((int)stk + 120)))))->v));
    *(float *)(((int)stk + 52)) = ((((struct o20_float *)((*(int *)(((int)stk + 120)))))->v));
    if (((*(int *)(((int)stk + 8))) & 16) != 0) {
        *(float *)(((int)stk + 56)) = (1.0f - (*(float *)(((int)stk + 56))));
        *(float *)(((int)stk + 52)) = (1.0f - (*(float *)(((int)stk + 52))));
    }
    *(float *)(((int)stk + 48)) = ((((struct o1C_float *)((*(int *)(((int)stk + 120)))))->v));
    *(float *)(((int)stk + 44)) = ((((struct o24_float *)((*(int *)(((int)stk + 120)))))->v));
    if (((*(int *)(((int)stk + 8))) & 32) != 0) {
    } else {
        *(float *)(((int)stk + 48)) = (1.0f - (*(float *)(((int)stk + 48))));
        *(float *)(((int)stk + 44)) = (1.0f - (*(float *)(((int)stk + 44))));
    }
    t161 = *(int *)(((*(int *)(((int)stk + 120))) + 0x34));
    if ((t161 & 0xC000) != 0x8000) {
        if ((t161 & 0xC000) != 0xC000) {
        } else {
            t162 = *(int *)(((int)stk + 104));
            *(unsigned int *)((t162 + 0x0)) = ((*(int *)((t162 + 0x0))) | 0x30000);
        }
    } else {
        t168 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t168 + 0x0)) = ((*(int *)((t168 + 0x0))) | 0x20000);
    }
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 56)));
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 12))) & 0xFFFF0000);
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 52)));
    *(unsigned int *)(((int)stk + 24)) = (0xFFFF0000 & (*(int *)(((int)stk + 12))));
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 48)));
    *(unsigned int *)(((int)stk + 20)) = ((unsigned int)(*(int *)(((int)stk + 12))) >> 16);
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 44)));
    *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(*(int *)(((int)stk + 12))) >> 16);
    t183 = 0x0;
    if ((*(int *)(((int)stk + 40))) != 0) {
        t183 = 0x2;
    }
    *(unsigned int *)(((int)stk + 4)) = t183;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t183 << 2) + (*(int *)0xC803DF4))));
    *(unsigned int *)(((int)stk + 0)) = 0xFF000038;
    t187 = *(int *)(((int)stk + 0));
    t188 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t187 + 0x0)) = ((unsigned int)((unsigned int)t188 >> 16) >> 8);
    *(unsigned int *)(((t187 + 0x4) + 0x0)) = ((unsigned int)((unsigned int)t188 >> 16) >> 8);
    t189 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = ((t189 & 0x3FFFFFF) | 0xE0000000);
    *(unsigned int *)((((t189 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = ((*(int *)(((*(int *)(((int)stk + 104))) + 0x0))) | ((((struct o0_int *)0xC7FD4C8)->v)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0x4)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = ((*(int *)(((*(int *)(((int)stk + 104))) + 0x8))) | ((((struct o4_int *)0xC7FD4C8)->v)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xC)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0xC)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x10)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0x10)));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 8))));
    t207 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t207 + 0x20);
    *(unsigned int *)(((t207 + 0x20) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = (*(int *)(((int)stk + 88)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = (*(int *)(((int)stk + 72)));
    (((struct oC_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x10)) = (*(int *)(((int)stk + 92)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x14)) = (*(int *)(((int)stk + 76)));
    (((struct o18_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x1C)) = (*(int *)(((int)stk + 96)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x20)) = (*(int *)(((int)stk + 80)));
    (((struct o24_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x28)) = (*(int *)(((int)stk + 100)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x2C)) = (*(int *)(((int)stk + 84)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x30)) = ((*(int *)(((int)stk + 32))) | 0x53500000);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x34)) = ((*(int *)(((int)stk + 28))) | (*(int *)(((int)stk + 20))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x38)) = ((*(int *)(((int)stk + 24))) | (*(int *)(((int)stk + 20))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x3C)) = ((*(int *)(((int)stk + 24))) | (*(int *)(((int)stk + 16))));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 8))));
    t242 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t242 + 0x20);
    _builtin_prefetch((void *)(t242 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x20);
    t245 = *(int *)0xC803DF4;
    *(unsigned int *)(((((*(int *)(((int)stk + 4))) << 2) + t245) + 0x0)) = (((*(int *)((((*(int *)(((int)stk + 4))) << 2) + t245))) & 0xFC000000) | ((*(int *)(((int)stk + 8))) & 0x3FFFFFF));
    return t245;
}

int FUN_0c10a2e0(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
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
    v0_5 = a4;
    v0_6 = a5;
    v0_1 = a6;
    v0_7 = a7;
    v0_2 = (int)((int)v0_6 % (int)0x20);
    v0_0 = (v0_6);
    v0_6 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C10A30A;
    v0_0 = ((v0_0 + (0x20 - v0_6)));
    L_C10A30A:;
    v0_8 = *(int *)((((signed char)(((v0_5 << 2) + v0_5) << 2) + 0xC347648) + 0x8));
    v0_2 = ((signed char)(((v0_5 << 2) + v0_5) << 2));
    v0_3 = (0xC347648);
    v0_4 = (0x0);
    v0_5 = (v0_8);
    v0_6 = (0x0);
    if ((v0_8 == 0)) goto L_C10A338;
    L_C10A326:;
    if (((int)(*(int *)((v0_5 + 0x10))) < (int)v0_0)) goto L_C10A332;
    v0_4 = (v0_5);
    v0_5 = (v0_6);
    L_C10A334:;
    if ((v0_5 != 0)) goto L_C10A326;
    L_C10A338:;
    if (!((v0_4 != 0))) goto L_C10A452;
    v0_5 = ((short)v0_7);
    if (((*(int *)((v0_4 + 0x10))) != v0_0)) goto L_C10A3CC;
    FUN_0c10ab3c(((v0_2 + v0_3) + 0x8), ((v0_2 + v0_3) + 0xC), v0_4);
    FUN_0c10aad4((v0_2 + v0_3), ((v0_2 + v0_3) + 0x4), v0_4);
    *(unsigned short *)((v0_4 + 0x0)) = 0x1;
    v0_0 = (v0_5);
    if ((v0_5 == 8)) goto L_C10A3A0;
    if ((v0_0 == 0x2000)) goto L_C10A3B0;
    goto L_C10A452;
    L_C10A452:;
    v0_0 = (0x3);
    L_C10A468:;
    return v0_0;
    L_C10A3B0:;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_4 + 0x14)) = v0_1;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x2000);
    L_C10A3C0:;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x4);
    v0_2 = ((v0_2 + v0_3));
    v0_0 = ((*(int *)((v0_4 + 0x10))));
    L_C10A460:;
    *(unsigned int *)((v0_2 + 0x10)) = ((*(int *)((v0_2 + 0x10))) - v0_0);
    v0_0 = (0x0);
    goto L_C10A468;
    L_C10A3A0:;
    *(unsigned int *)((v0_1 + 0x1C)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_4 + 0x14)) = v0_1;
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) | 0x8);
    goto L_C10A3C0;
    L_C10A3CC:;
    v0_7 = FUN_0c10aa20();
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C10A452;
    *(unsigned int *)((v0_6 + 0xC)) = (*(int *)((v0_4 + 0xC)));
    *(unsigned int *)((v0_6 + 0x10)) = v0_0;
    *(unsigned int *)((v0_4 + 0x10)) = ((*(int *)((v0_4 + 0x10))) - v0_0);
    *(unsigned int *)((v0_4 + 0xC)) = (v0_0 + (*(int *)((v0_4 + 0xC))));
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + v0_3);
    FUN_0c10aad4((*(int *)(((int)stk + 0))), ((v0_2 + v0_3) + 0x4), v0_6);
    v0_0 = (v0_5);
    if ((v0_5 == 8)) goto L_C10A406;
    if ((v0_0 == 0x2000)) goto L_C10A440;
    goto L_C10A452;
    L_C10A440:;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_1;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x2000);
    L_C10A456:;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x4);
    v0_2 = ((v0_2 + v0_3));
    v0_0 = ((*(int *)((v0_6 + 0x10))));
    goto L_C10A460;
    L_C10A406:;
    *(unsigned int *)((v0_1 + 0x1C)) = (*(int *)((v0_6 + 0xC)));
    *(unsigned int *)((v0_6 + 0x14)) = v0_1;
    *(unsigned short *)((v0_6 + 0x0)) = ((*(short *)((v0_6 + 0x0))) | 0x8);
    goto L_C10A456;
    L_C10A332:;
    v0_5 = ((*(int *)((v0_5 + 0x8))));
    goto L_C10A334;
}

int kmiStartRenderTextureEntry(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC8171C8)->v) = 0x1;
    t0 = (((struct o0_int *)0xC81731C)->v);
    if (((*(int *)0xC816FC8) & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    kmiWriteRegister(0x2C, (*(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC817428))));
    kmiWriteRegister(0x20, (*(int *)(((0xC817424 + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18))));
    kmiWriteRegister(0x60, (*(int *)((a4 + 0x8))));
    kmiWriteRegister(0x48, (*(int *)((a4 + 0x0))));
    kmiWriteRegister(0x4C, (*(int *)((a4 + 0x4))));
    kmiWriteRegister(0x68, (*(int *)((a4 + 0xC))));
    kmiWriteRegister(0x6C, (*(int *)((a4 + 0x10))));
    (((struct oC_uint *)0xC81731C)->v) = 0x0;
    t0 = 0x0;
    if (((((struct o4_int *)0xC8171C8)->v)) != 0) {
        for (;;) {
            t1 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC817228)->v))))(((((struct o4_int *)0xC817228)->v)), a5, a6, a7);
            if ((unsigned int)((((struct oC_int *)0xC81731C)->v)) > (unsigned int)((((struct o20_int *)0xC8171C8)->v))) {
                break;
            }
            if (((((struct o4_int *)0xC8171C8)->v)) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, ((((struct o18_int *)0xC81726C)->v)));
                    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC81726C)->v)));
                    kmiWriteRegister(0x68, ((((struct o0_int *)0xC81726C)->v)));
                    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC81726C)->v)));
                    (((struct o4_uint *)0xC8171C8)->v) = 0x0;
                    (((struct o14_uint *)0xC81731C)->v) = 0x0;
                    return FUN_0c0f9872((*(int *)0xC346FF4));
                }
                kmiWriteRegister(0x8C, ((((struct o4_int *)0xC817170)->v)));
                kmiWriteRegister(0x88, (((((struct o0_int *)0xC817170)->v)) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t0 = 0x1;
    }
    if (t0 != 0) {
        kmiWriteRegister(0x48, ((((struct o18_int *)0xC81726C)->v)));
        kmiWriteRegister(0x4C, ((((struct o10_int *)0xC81726C)->v)));
        kmiWriteRegister(0x68, ((((struct o0_int *)0xC81726C)->v)));
        kmiWriteRegister(0x6C, ((((struct o4_int *)0xC81726C)->v)));
        (((struct o4_uint *)0xC8171C8)->v) = 0x0;
        (((struct o14_uint *)0xC81731C)->v) = 0x0;
        return FUN_0c0f9872((*(int *)0xC346FF4));
    }
    kmiWriteRegister(0x8C, ((((struct o4_int *)0xC817170)->v)));
    kmiWriteRegister(0x88, (((((struct o0_int *)0xC817170)->v)) & 0xFFFFFFF0));
    return (kmiWriteRegister(0x14, 0xFFFFFFFF));
}

int FUN_0c10a8de(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) & 0xFFFB);
    FUN_0c10ab3c(((signed char)(((a4 << 2) + a4) << 2) + 0xC347648), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x4), a5);
    *(unsigned int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10)) = ((*(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x10))) + (*(int *)((a5 + 0x10))));
    t2 = *(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8));
    t3 = 0x0;
    if (t2 != 0) {
        t4 = t2;
        t2 = 0x0;
        for (;;) {
            t5 = *(int *)((a5 + 0xC));
            t6 = *(int *)((t4 + 0xC));
            if ((t6 != ((*(int *)((a5 + 0x10))) + t5)) && (t0 = *(int *)((t4 + 0x10)), t5 != (t0 + t6))) {
                t4 = (*(int *)((t4 + 0x8)));
            } else {
                t2 = t4;
                t4 = 0x0;
            }
            if (t4 == 0) {
                break;
            }
        }
        t3 = t2;
    }
    t0 = a5;
    if (t3 != 0) {
        t2 = t3;
        t3 = a5;
        for (;;) {
            if ((*(int *)((t2 + 0xC))) == ((*(int *)((t3 + 0xC))) + (*(int *)((t3 + 0x10))))) {
                *(unsigned int *)((t2 + 0xC)) = (*(int *)((t3 + 0xC)));
                *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + (*(int *)((t3 + 0x10))));
            } else {
                *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + (*(int *)((t3 + 0x10))));
            }
            FUN_0c10aa80(t3);
            FUN_0c10ab3c((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0xC), t2);
            t4 = *(int *)((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8));
            t3 = t2;
            t2 = 0x0;
            if (t4 != 0) {
                t5 = t4;
                for (;;) {
                    t4 = *(int *)((t3 + 0xC));
                    t6 = *(int *)((t5 + 0xC));
                    if ((t6 != ((*(int *)((t3 + 0x10))) + t4)) && (t1 = *(int *)((t5 + 0x10)), t4 != (t1 + t6))) {
                        t5 = (*(int *)((t5 + 0x8)));
                    } else {
                        t2 = t5;
                        t5 = 0x0;
                    }
                    if (t5 == 0) {
                        break;
                    }
                }
            }
            if (t2 == 0) {
                break;
            }
        }
        t0 = t3;
    }
    FUN_0c10aad4((((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0x8), (((signed char)(((a4 << 2) + a4) << 2) + 0xC347648) + 0xC), t0);
    return 0x0;
}

void FUN_0c0f250a(void)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;

    if ((*(int *)0xC15A2EC) == 0) {
        return;
    }
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = kdGetDevice(t5);
        t7 = kdGetDeviceInfo(t5);
        *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x30)) = t7;
        *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x2C)) = (*(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x8)));
        *(unsigned int *)(((0xC7FEBEC + (t5 << 2)) + 0x0)) = (FUN_0c0f24d6(((t5 * 0x34) + 0xC7FE70C), t7, t6));
        if (((int)((int)t5 % (int)0x6)) == 0) {
            if ((((*(int *)((t7 + 0x0))) & 33) != 0) && ((t0 = *(signed char *)((t6 + 0x2)), t0 == 0) && (t1 = *(signed char *)((t6 + 0x4)), (unsigned char)t1 == 8))) {
                FUN_0c0f2486(((t5 * 0x34) + 0xC7FE70C), t7);
                FUN_0c0f22d0(((t5 * 0x34) + 0xC7FE70C), t6, t5);
            } else {
                if ((((*(int *)((t7 + 0x0))) & 64) != 0) && ((t2 = *(signed char *)((t6 + 0x2)), t2 == 0) && (t3 = *(signed char *)((t6 + 0x4)), (unsigned char)t3 == 8))) {
                    FUN_0c0fe8c0(t4, ((t5 * 0x34) + 0xC7FE70C), t6, t7);
                } else {
                    FUN_0c0f2292(((t5 * 0x34) + 0xC7FE70C));
                }
            }
            *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0xC)) = (~(*(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x8))));
            if ((*(int *)0xC7FEC4C) == 0) {
                t6 = *(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x2C));
                t8 = *(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x8));
                *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x10)) = (t8 & (t6 ^ t8));
                t9 = ((t6 ^ t8) & (*(int *)((((t5 * 0x34) + 0xC7FE70C) + 0xC))));
            } else {
                t6 = *(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x2C));
                t8 = *(int *)((((t5 * 0x34) + 0xC7FE70C) + 0x8));
                *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x10)) = (t8 | ((t6 ^ t8) ^ 0xFFFFFFFF));
                t9 = (((t6 ^ t8) ^ 0xFFFFFFFF) | (*(int *)((((t5 * 0x34) + 0xC7FE70C) + 0xC))));
            }
            *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x14)) = t9;
            t4 = (t4 + 0x1);
        } else {
            *(unsigned int *)((((t5 * 0x34) + 0xC7FE70C) + 0x24)) = (t7 + 0x14);
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x18) {
            break;
        }
    }
}

int vmsio_block_read(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t8;
    register int t9;
    register int t11;
    register int t13;
    register int t16;
    register int t19;
    register int t26;
    register int t27;
    register int t38;
    register int t10;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = vmsio_ismount(a4);
    if (t0 == 0) {
        thunk_FUN_0c1155a8();
        t38 = 0xFFFFFF01;
    } else {
        t2 = *(int *)(((a4 << 2) + 0xC15B6C4));
        kdGetDevice(t2);
        t8 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x3C)))) {
                return 0x0;
            }
            t9 = 0x0;
            for (;;) {
                t11 = thunk_FUN_0c111b6e(t2);
                if (t11 == 0) {
                    t10 = 0xC1005D4;
                    t13 = (*(int *)(((int)stk + 12)));
                    *(int *)((int)stk + 0) = t13;
                    t10 = (kdSetBlockRead(t2, 0x2, 0x0, t9, t13));
                    if ((int)t10 < 0) {
                        thunk_FUN_0c1155a8();
                        continue;
                    }
                    for (;;) {
                        t16 = thunk_FUN_0c111b54(t2);
                        if (t16 == 0) {
                            thunk_FUN_0c1155a8();
                            continue;
                        }
                        break;
                    }
                    *(unsigned int *)(((int)stk + 8)) = (kdGetDevice(t2));
                    t19 = thunk_FUN_0c111b6e(t2);
                    if (t19 != 0) {
                        break;
                    }
                    t26 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x4));
                    t27 = *(int *)(((*(int *)(((int)stk + 8))) + 0x8));
                    if ((unsigned char)t26 != 8) {
                        if ((unsigned char)t26 != 0xFC) {
                            if ((unsigned char)t26 == 0xFB) {
                                return 0xFFFF0000;
                            }
                            return 0xFFFFFF01;
                        }
                        continue;
                    }
                    vmsfs_memcpyl(t8, (t27 + 0xC), ((((struct o44_int *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)))))->v)));
                    t9 = (t9 + 0x1);
                    t8 = (t8 + ((((struct o44_int *)((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C)))))->v)));
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C))) + 0x3C)))) {
                        return 0x0;
                    }
                    continue;
                }
                break;
            }
            break;
        }
        t38 = 0xFFFFFF30;
    }
    return t38;
}

int FUN_0c104742(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t12;
    register int t13;
    register int t18;
    register int t26;
    register int t30;
    register int t3;
    register int t5;
    register int t6;

    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)(((int)stk + 4)))) {
            if ((*(int *)(((int)stk + 8))) != 0) {
                t12 = write_fat(a4, t0, a6, a7);
                if ((int)t12 >= 0) {
                    t13 = write_sys(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0xC80DBC8) + 0x48) + t4) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t4 << 8) << 1);
            for (;;) {
                t18 = FUN_0c1012f4(a4, t7, ((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28))) + (*(int *)(((int)stk + 0)))));
                if (t18 == 0) {
                    break;
                }
                if (t18 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7, 0xFFFF);
                    t6 = (FUN_0c102556(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6, t5);
                    if (t4 == 0) {
                        t26 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC80DBC4) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x20))), 0x4A, t6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                    } else {
                        set_fat(a4, t3, t6);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t18;
            }
            t30 = ((int (*)(int, int))(get_fat))(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC80DBC8) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t30;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(((int (*)(int, int, int, int))(get_fat))(a4, t7, a6, a7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}

int FUN_0c109e20(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R6;
    int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    R4 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_2 = (int)((int)R4 % (int)0x20);
    v0_0 = (R4);
    R4 = (v0_2);
    v0_1 = (0x0);
    if ((v0_2 == 0)) goto L_C109E50;
    v0_0 = ((v0_0 + (0x20 - R4)));
    L_C109E50:;
    v0_3 = *(int *)0xC347650;
    v0_2 = (v0_3);
    if (!((v0_3 != 0))) goto L_C109F28;
    v0_3 = (0xC34763C);
    R8 = (0x1);
    goto L_C109E60;
    L_C109F28:;
    if (((*(int *)(((int)stk + 4))) != 2)) goto L_C109F36;
    if ((v0_1 == 0)) goto L_C109F36;
    v0_0 = (v0_1);
    L_C109F38:;
    return v0_0;
    L_C109F36:;
    v0_0 = (0xFFFFFFFF);
    goto L_C109F38;
    L_C109E60:;
    if (((int)(*(int *)((v0_2 + 0x10))) < (int)v0_0)) goto L_C109F22;
    v0_5 = *(int *)(((*(int *)(((int)stk + 0))) + 0x18));
    v0_4 = ((((*(int *)((v0_2 + 0xC))) + (*(int *)((v0_2 + 0x10)))) - v0_0));
    R4 = (v0_5);
    if (((v0_5 & R8) == 0)) goto L_C109F00;
    if (((0x8 & R4) != 0)) goto L_C109F00;
    if (((0x20 & R4) != 0)) goto L_C109F00;
    *(volatile int *)(((int)stk + 0));
    v0_5 = FUN_0c109d40(v0_2, v0_0);
    R4 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C109EB0;
    v0_5 = (R4);
    if (((int)R4 > (int)v0_4)) goto L_C109EB0;
    L_C109E98:;
    v0_6 = FUN_0c109f4c(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 == 0)) goto L_C109F18;
    v0_6 = (int)(v0_5 + 0x800) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x800));
    if (v0_6) goto L_C109E98;
    L_C109EB0:;
    *(unsigned int *)(((int)stk + 4)) = 0x2;
    if ((v0_1 != 0)) goto L_C109F22;
    v0_6 = *(int *)((v0_2 + 0xC));
    v0_5 = (v0_6);
    if (((int)v0_6 > (int)v0_4)) goto L_C109F22;
    L_C109EBE:;
    v0_6 = FUN_0c109f4c(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 != 0)) goto L_C109ED2;
    v0_1 = v0_5;
    v0_5 = (v0_4);
    v0_1 = v0_1;
    L_C109ED2:;
    v0_6 = (int)(v0_5 + 0x20) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x20));
    if (v0_6) goto L_C109EBE;
    L_C109F22:;
    v0_4 = *(int *)((v0_2 + 0x8));
    v0_2 = (v0_4);
    if ((v0_4 != 0)) goto L_C109E60;
    goto L_C109F28;
    L_C109F18:;
    v0_0 = (v0_5);
    goto L_C109F38;
    L_C109F00:;
    *(unsigned int *)(((int)stk + 4)) = R8;
    v0_6 = *(int *)((v0_2 + 0xC));
    v0_5 = (v0_6);
    if (((int)v0_6 > (int)v0_4)) goto L_C109F22;
    L_C109F08:;
    v0_6 = FUN_0c109f4c(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 != 0)) goto L_C109F1C;
    goto L_C109F18;
    L_C109F1C:;
    v0_6 = (int)(v0_5 + 0x20) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x20));
    if (v0_6) goto L_C109F08;
    goto L_C109F22;
}

int FUN_0c107bbe(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((a4 + 0x8));
    t2 = (int)((int)0x20 / (int)t1);
    t3 = (int)((int)((t0 - (*(int *)((a4 + 0x3C)))) - ((((struct o58_int *)(a4))->v))) / (int)((t2 << 2) << 1));
    t4 = (((struct o54_int *)(a4))->v);
    t5 = (t0 - t4);
    if ((int)(t3 * ((t2 << 2) << 1)) < (int)(t0 - t4)) {
        t5 = (t3 * ((t2 << 2) << 1));
    }
    t0 = (int)((int)0x800 / (int)t1);
    t3 = t5;
    if ((int)t5 >= (int)((t0 << 2) << 1)) {
        t3 = ((t0 << 2) << 1);
    }
    t0 = (int)((int)(t1 * (((int)((int)t3 / (int)((t2 << 2) << 1))) * ((t2 << 2) << 1))) / (int)0x8);
    t2 = 0xC815534;
    if (t1 == 4) {
        t2 = 0xC815D34;
    }
    t3 = t1;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t4 = t1;
        t4 = (t4 << 2);
        t4 = (t4 + (a4 + 0x28));
        t4 = (*(int *)((t4 + 0x0)));
        t4 = (t4 + ((int)((int)(((((struct o54_int *)(a4))->v)) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
        t3 = a4;
        t3 = (FUN_0c107432(t3, t1, t2, t4, (t0)));
        t1 = (t1 + 0x1);
    }
    t0 = (int)((int)t3 / (int)(*(int *)((a4 + 0x8))));
    (((struct o5C_uint *)(a4))->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}

int vmsfs_fwrite1(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t0 = 0xFFFFFF01;
    } else {
        t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t2 = 0xFFFFFF01;
        if (t1 != 0) {
            t1 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC80DBD0))) == 0) {
            } else {
                t3 = buIsFormat((*(int *)((a4 + 0x28))));
                t4 = 0xFFFFFF03;
                if ((int)t3 < 0) {
                } else {
                    t3 = *(int *)((a4 + 0x28));
                    t5 = search_fat_free_xross(t3);
                    t6 = 0xFFFFFF04;
                    if ((int)t5 >= 0) {
                        t7 = FUN_0c1012f4(t3, t5, a5);
                        if ((int)t7 < 0) {
                            t8 = t7;
                            if (t7 == 0xFFFFFF01) {
                            } else {
                                t7 = t5;
                                for (;;) {
                                    set_fat(t3, t7, 0xFFFF);
                                    t7 = (search_fat(t3, 0xFFFC));
                                    if ((int)t7 < 0) {
                                        break;
                                    }
                                    t9 = FUN_0c1012f4(t3, t7, a5);
                                    if (t9 == 0) {
                                        set_fat(t3, t7, 0xFFFA);
                                        if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t7;
                                        } else {
                                            set_fat(t3, (*(int *)((a4 + 0x3C))), t7);
                                        }
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t7;
                                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                        return 0x0;
                                    }
                                }
                                t8 = 0xFFFFFF04;
                            }
                            t7 = t8;
                        } else {
                            set_fat(t3, t5, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t5;
                            } else {
                                set_fat(t3, (*(int *)((a4 + 0x3C))), t5);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t5;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t7 = 0x0;
                        }
                        t6 = t7;
                    }
                    t4 = t6;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c11035c(int a4, int a5, int a6)
{
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t22;

    kmiWriteRegister(0x124, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC817430))));
    kmiWriteRegister(0x12C, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC817434))));
    kmiWriteRegister(0x128, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC81743C))));
    kmiWriteRegister(0x130, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC817440))));
    kmiWriteRegister(0x13C, ((((a5 - 1) << 16) + a4) - 1));
    t10 = (((struct o4_int *)0xC817464)->v);
    t11 = (((struct o8_int *)0xC817464)->v);
    t12 = (((struct oC_int *)0xC817464)->v);
    t13 = (((struct o10_int *)0xC817464)->v);
    if ((*(int *)0xC816FC4) == 6) {
        t22 = ((((((t10 & 0x3) | (((t11 & 0x3) << 2) << 2)) | ((t12 & 0x3) << 8)) | ((((t13 & 0x3) << 8) << 2) << 2)) | ((((0x1 & ((((struct o0_int *)0xC817464)->v))) << 16) << 2) << 2)) | ((0x3 & ((((struct o14_int *)0xC817464)->v))) << 16));
    } else {
        t22 = (((((t10 & 0x3) | (((t11 & 0x3) << 2) << 2)) | ((t12 & 0x3) << 8)) | ((((t13 & 0x3) << 8) << 2) << 2)) | ((0x1 & ((((struct o0_int *)0xC817464)->v))) << 16));
    }
    kmiWriteRegister(0x140, t22);
    return (kmiWriteRegister(0x144, 0x80000000));
}

int FUN_0c101a22(int a4, int a5, int a6)
{
    register int t0;
    register int t5;
    int t6;
    register int t19;
    register int t4;

    *(unsigned int *)0xC80DBC4 = 0xC80DBB0;
    t0 = 0xC80E608;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC80E628) {
            break;
        }
    }
    memset(0xC80DBB0, 0x0, 0x14);
    memset(0xC80DBC8, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC812AC8)->v) = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = ((((struct o8_int *)0xC812AC8)->v));
            t4 = (t4 + 0x1);
            (((struct o8_uint *)0xC812AC8)->v) = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        FUN_0c101b58(a4, a5, a6);
        *(unsigned int *)(((*(int *)0xC80DBC4) + 0x8)) = 0x0;
    } else {
        FUN_0c101b1c(a4);
        *(unsigned int *)(((*(int *)0xC80DBC4) + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC812AC8)->v) = 0x8;
    (((struct o4_uint *)0xC812AC8)->v) = 0x0;
    FUN_0c101140(0xA);
    t19 = (((struct o0_int *)0xC812AC8)->v);
    memset(0xC812888, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    FUN_0c112ff8();
    return 0x0;
}

int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t43;
    register int t37;
    register int t6;
    register int t31;
    register int t9;
    register int t11;
    register int t12;
    register int t14;
    register int t32;

    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = FUN_0c10274c(a4, 0x0);
    t1 = FUN_0c103f6c(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t43 = t2;
    if ((int)t2 >= 0) {
        t37 = 0xFFFFFF04;
        if ((unsigned int)t2 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                *(int *)((int)stk + 4) = a9;
                *(int *)((int)stk + 0) = a8;
                t32 = (FUN_0c105438(a4, a5, (*(int *)(((int)stk + 12))), a7, a8, a9));
            } else {
                t6 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 8));
                t31 = t6;
                if ((int)t6 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x1)) = a9;
                    t11 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
                    t9 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = ((*(int *)((((((t9 << 2) + t9) << 2) << 2) + 0xC347230))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t12 = 0x0;
                        for (;;) {
                            t14 = vmsfs_fwrite1((*(int *)(((int)stk + 8))), t11);
                            if ((int)t14 >= 0) {
                                t12 = (t12 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t12 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                            return t14;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                    t31 = 0x0;
                }
                t32 = t31;
            }
            t37 = t32;
        }
        t43 = t37;
    }
    return t43;
}

int nl_sprite_tables_init(int a4, int a5, int a6)
{
    int stk[4];
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t20;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    (((struct o0_uint *)0xC7FD040)->v) = 0xFFFFFFFF;
    if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 4)))) {
        (((struct o0_uint *)0xC7FD040)->v) = 0x0;
        for (;;) {
        }
    }
    nl_set_virtual_screen(640.0f, 480.0f);
    (((struct o8_uint *)0xC7FD040)->v) = (*(int *)(((int)stk + 8)));
    (((struct o4_uint *)0xC7FD040)->v) = (*(int *)(((int)stk + 12)));
    t5 = *(int *)(((int)stk + 4));
    t7 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = ((((t5 << 1) + t7) + 0x3) & 0xFFFFFFFC);
    (((struct oC_uint *)0xC7FD040)->v) = ((((t5 << 1) + t7) + 0x3) & 0xFFFFFFFC);
    t9 = (int)((int)((*(int *)(((int)stk + 8))) + 0x1F) / (int)0x20);
    t10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    (((struct o10_uint *)0xC7FD040)->v) = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t11 = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    t12 = 0xFFFFFFFC;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)(*(int *)(((int)stk + 4)))) {
            break;
        }
        t12 = (*(int *)(((int)stk + 0)));
        t12 = (t12 << 1);
        t11 = ((((struct o4_int *)0xC7FD040)->v));
        *(unsigned short *)((t12 + t11)) = 0xFFFFFFFF;
        t12 = (*(int *)(((int)stk + 0)));
        t12 = (t12 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t12;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        t20 = (int)((int)(((((struct o8_int *)0xC7FD040)->v)) + 0x1F) / (int)0x20);
        if ((int)(*(int *)(((int)stk + 0))) >= (int)t20) {
            break;
        }
        *(unsigned int *)((((*(int *)(((int)stk + 0))) << 2) + ((((struct oC_int *)0xC7FD040)->v)))) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    return t20;
}

int FUN_0c1136ee(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t2 = *(int *)((a4 + 0xC));
    t3 = *(int *)((a4 + 0x4));
    t4 = FUN_0c0ed9c0(t3, t2, 0x40);
    t5 = 0xFFFFFFFF;
    if (t4 != -1) {
        t4 = *(int *)((a4 + 0x14));
        t6 = FUN_0c0ed9c0((t3 + ((((t4 + 0x1) << 2) << 2) << 2)), (((((t4 + 0x1) << 2) << 2) << 2) + t2), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t7 = 0xFFFFFFFF;
        if (t6 != -1) {
            t6 = fmMngBit2Num((((((t4 + 0x1) << 2) << 2) << 2) + t2), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t6;
            t4 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t8 = 0x0;
                if ((int)t6 > 0) {
                    t9 = (t3 + 0x40);
                    t3 = t6;
                    for (;;) {
                        t6 = FUN_0c0ed9c0(t9, (a4 + 0x34), 0x40);
                        if (t6 == -1) {
                            break;
                        }
                        if ((unsigned short)((((struct o34_short *)(a4))->v)) != 0xFFFF) {
                            t6 = FUN_0c11568c(0x3E, (a4 + 0x34));
                            if (((unsigned short)((((struct o3E_short *)((a4 + 0x34)))->v)) == (unsigned short)t6) && (t0 = (((struct o34_short *)(a4))->v), t1 = *(int *)((a4 + 0x14)), (int)(unsigned short)t0 < (int)t1)) {
                                fmMngMcpy4((a4 + 0x34), ((((((unsigned short)((((struct o34_short *)(a4))->v)) + 0x1) << 2) << 2) << 2) + t2), 0x40);
                            }
                            t3 = (t3 - 1);
                            t9 = (t9 + 0x40);
                            if ((int)t3 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t8 = 0xFFFFFFFF;
                }
                t4 = t8;
            }
            t7 = t4;
        }
        t5 = t7;
    }
    return t5;
}

int FUN_0c11533a(int a4, int a5, int a6, int a7)
{
    int stk[40];
    register int t14;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    memset((((int)stk + 0) + 0x8), 0x0, 0x98);
    t3 = (((struct o208_int *)(a4))->v);
    t14 = 0xFFFFFFFF;
    if (((((struct o20C_int *)(a4))->v)) != t3) {
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            if ((*(int *)((t5 + 0xC))) == 0) {
                break;
            }
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        *(unsigned int *)((t5 + 0x14)) = ((((struct o204_int *)(a4))->v));
        *(unsigned int *)((t5 + 0x0)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        (((struct o118_uint *)(t5))->v) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        (((struct o11C_uint *)(t5))->v) = 0x0;
        memcpy((t5 + 0x18), (0x104 + a4), 0x100);
        FUN_0c0eee64((((int)stk + 0) + 0x8));
        memcpy((t5 + 0x18), (((int)stk + 0) + 0x8), 0x100);
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + (*(int *)(((int)stk + 0))));
        *(unsigned int *)((t5 + 0x20)) = (*(int *)(((int)stk + 4)));
        t14 = t4;
    }
    return t14;
}

void FUN_0c0f184c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = *(int *)((a4 + 0x8));
            t2 = *(int *)((a4 + 0x10));
            if ((int)(t0 + t1) < (int)(t1 + t2)) {
                t3 = a5;
                if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                    t3 = ((t1 + t2) - (t0 + t1));
                }
                if (t3 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t2 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, 0x0);
                    if (t4 != 0) {
                        *(unsigned int *)((a4 + 0x3C)) = t4;
                        *(unsigned int *)((a4 + 0x1C)) = t3;
                        (((struct o50_ushort *)(a4))->v) = 0x2;
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        (((struct o48_ushort *)(a4))->v) = 0x1;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                    } else {
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                    
                }
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                (((struct o50_ushort *)(a4))->v) = 0x1;
            }
        }
    }
}

int FUN_0c0f0072(int a4)
{
    int stk[4];
    register int t1;
    register int t25;
    register int t4;
    register int t17;
    register int t5;
    register int t9;
    register int t12;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = FUN_0c0efdee((((int)stk + 0) + 0x4));
    t5 = FUN_0c0efe10((*(int *)(((int)stk + 8))));
    t25 = 0xFFFFFFFE;
    if ((int)t5 >= 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((t1 + 0x0)) = (t4 - 1);
        t17 = t5;
        if ((int)t5 < (int)(t4 - 1)) {
            for (;;) {
                *(unsigned int *)((((t1 + 0x8) + ((t5 << 2) << 1)) + 0x0)) = (*(int *)((((t1 + 0x8) + (((t5 + 0x1) << 2) << 1)) + 0x0)));
                t9 = *(int *)((((((t5 + 0x1) << 2) << 1) + (t1 + 0x8)) + 0x4));
                t12 = (((t5 << 2) << 1) + (t1 + 0x8));
                t5 = (t5 + 0x1);
                *(unsigned int *)((t12 + 0x4)) = t9;
                if ((int)t5 >= (int)(*(int *)((t1 + 0x0)))) {
                    break;
                }
            }
            t17 = t5;
        }
        *(unsigned int *)((((t1 + 0x8) + ((t17 << 2) << 1)) + 0x0)) = 0x0;
        *(unsigned int *)(((((t17 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        t25 = 0x0;
    }
    _builtin_set_imask(((unsigned int)((((*(int *)((((int)stk + 0) + 0x0))) & 0xF) << 2) << 2) >> 4));
    return t25;
}

int vmsfs_mount2(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC347204)));
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30));
    t1 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x30)) = (t0 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0) + 0x8))), ((t0 + 0x1) - 1), t1);
    return check_cache(a4);
}
