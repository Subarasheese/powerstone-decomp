/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05c6e0-0c05ca54) */

/* named globals (symbols.txt) */
extern char g_item_player_flags[];
extern char g_proj_char_offset_tbl[];
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o7298_float { char p[0x7298]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c026554(int);
int FUN_0c0555dc(void);
int obj_destroy(int);
int FUN_0c05ae26(int);
int FUN_0c05aeca(int);
int item_tick_held(int);
int item_tick_thrown(int);
int FUN_0c05c6e0(int);
int snd_play_side_se(int, int);
int fx_spawn_thrown_item_kind(int, int);
int FUN_0c0c07bc(int, int, int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e21b0(int, int);
int FUN_0c0e6fdc(int);
extern int FUN_0c0e6fe8();
int thunk_FUN_0c062242(int);

int FUN_0c05c728(int a4)
{
    int stk[18];
    register int t0;
    register int t8;
    register int t11;
    register int t13;
    register int t17;
    register int t18;
    register int t19;
    register float u21;
    register int t22;
    register int t26;
    register int t37;
    register float u39;
    register int t40;
    register float u43;
    register float u44;
    register float u45;
    register float u47;
    register float u50;
    register float u51;
    register float u52;
    register int t53;
    register int t54;
    register int t58;
    register int t59;
    register int t31;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return obj_destroy(a4);
    }
    if ((*(signed char *)((a4 + 0xB))) == 0) {
        *(unsigned char *)(((((int)g_item_player_flags) + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t8 = *(signed char *)((a4 + 0x30D));
    if (t8 != 0) {
        if (t8 != 4) {
            if (t8 != 5) {
                if (t8 != 15) {
                    if (t8 == 16) {
                        FUN_0c05ae26(a4);
                        return FUN_0c05c6e0(a4);
                    }
                    return obj_destroy(a4);
                }
                FUN_0c05c6e0(a4);
                t11 = *(signed char *)((a4 + 0x8));
                if (t11 != 0) {
                    if (t11 != 1) {
                        if (t11 != 2) {
                            return t11;
                        }
                        return obj_destroy(a4);
                    }
                    *(int *)((int)stk + 68) = a4;
                    FUN_0c0e6fdc(a4);
                    t13 = FUN_0c026554(a4);
                    if ((signed char)t13 != 0) {
                        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x1E);
                        fx_spawn_thrown_item_kind((a4 + 0x20), 0x3);
                        t17 = ((int)stk + 0);
                        t18 = 0x0;
                        for (;;) {
                            t19 = ((int (*)(void))(FUN_0c0e6fe8))();
                            u21 = *(float *)((t17 + 0x0));
                            t22 = (0x4 + t17);
                            t17 = (t17 + 0x8);
                            (((struct o20_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(((int)stk + 0)))->v)) + u21);
                            (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) + (*(float *)((t22 + 0x0))));
                            fx_spawn_thrown_item_kind((a4 + 0x20), 0x0);
                            t18 = (t18 + 0x1);
                            if ((int)t18 >= (int)0x4) {
                                break;
                            }
                        }
                        t26 = *(signed char *)((a4 + 0x8));
                        *(unsigned char *)((a4 + 0x8)) = (t26 + 0x1);
                        t31 = (t26 + 0x1);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
                        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                        t31 = (FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44)));
                    }
                    return t31;
                }
                *(int *)((int)stk + 68) = a4;
                t37 = *(int *)((a4 + 0x1C));
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o101_uchar *)(a4))->v) = 0x0;
                (((struct o102_uchar *)(a4))->v) = 0x9;
                (((struct o107_uchar *)(a4))->v) = 0x0;
                (((struct o118_uint *)(a4))->v) = 0x0;
                u39 = (((struct o7298_float *)(t37))->v);
                t40 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
                *(int *)((int)stk + 16) = (a4 + 0x20);
                u43 = (((struct o20_float *)(a4))->v);
                u44 = ((math_cos_angle16(((-(*(int *)((t37 + 0x30)))) + 0x14000))) * u39);
                u45 = u43;
                u45 = u45 + 100.0f * u44;
                (((struct o20_float *)(a4))->v) = u45;
                u47 = ((((struct o24_float *)(a4))->v));
                u47 = u47 + 180.0f * u39;
                (((struct o24_float *)(a4))->v) = u47;
                *(int *)((int)stk + 16) = (a4 + 0x28);
                u50 = (((struct o28_float *)(a4))->v);
                u51 = ((math_sin_angle16(((-(*(int *)((t37 + 0x30)))) + 0x14000))) * u39);
                u52 = u50;
                u52 = u52 + 100.0f * u51;
                (((struct o28_float *)(a4))->v) = u52;
                t53 = ((int (*)(void))(FUN_0c0e6fe8))();
                t54 = *(signed char *)((t37 + 0x4));
                *(float *)(((int)stk + 20)) = (*(float *)((((int)g_proj_char_offset_tbl) + ((((t54 << 1) + t54) << 2) << 1))));
                t58 = ((int (*)(void))(FUN_0c0e6fe8))();
                t59 = *(signed char *)((t37 + 0x3));
                *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t59) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
                FUN_0c0c07bc((a4 + 0x38), (((int)stk + 20) + 0x14), (((int)stk + 20) + 0x8), (*(int *)((t37 + 0x30))), (*(float *)(((int)stk + 20))));
                return (((int (*)(void))(FUN_0c0e6fe8))());
            }
            FUN_0c05c6e0(a4);
            return item_tick_held(a4);
        }
        FUN_0c05c6e0(a4);
        return item_tick_thrown(a4);
    }
    FUN_0c05aeca(a4);
    return FUN_0c05c6e0(a4);
}
