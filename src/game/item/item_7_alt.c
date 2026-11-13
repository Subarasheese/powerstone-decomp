typedef struct { int w[8]; } Stk8;
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
int FUN_0c026554(int, Stk8);
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
int _quick_evn_mvn(int);
extern int _quick_odd_mvn();
int thunk_FUN_0c062242(int, int);

void FUN_0c05c728(int a4)
{
    int stk[18];
    register int t0;
    register int t8;
    register int t11;
    register int t12;
    register int t16;
    register int t17;
    register float u19;
    register int t20;
    register int t35;
    register float u37;
    register float u40;
    register float u41;
    register float u42;
    register float u44;
    register float u47;
    register float u48;
    register float u49;
    register int t50;
    register int t54;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        obj_destroy(a4);
    return;
    }
    if ((*(signed char *)((a4 + 0xB))) == 0) {
        *(unsigned char *)(((0xC7F2974 + (*(signed char *)((a4 + 0xD)))) + 0x0)) = 0x1;
    }
    t8 = *(signed char *)((a4 + 0x30D));
    if (t8 != 0) {
        if (t8 != 4) {
            if (t8 != 5) {
                if (t8 != 15) {
                    if (t8 == 16) {
                        FUN_0c05ae26(a4);
                        FUN_0c05c6e0(a4);
    return;
                    }
                    obj_destroy(a4);
    return;
                }
                FUN_0c05c6e0(a4);
                t11 = *(signed char *)((a4 + 0x8));
                if (t11 != 0) {
                    if (t11 != 1) {
                        if (t11 != 2) {
                            return;
                        }
                        obj_destroy(a4);
    return;
                    }
                    *(int *)((int)stk + 68) = a4;
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 0)) = *(struct mv8 *)(0xC14CC28); }
                    t12 = FUN_0c026554(a4, *(Stk8 *)(((int)stk + 0)));
                    if ((signed char)t12 != 0) {
                        snd_play_side_se((*(signed char *)((a4 + 0x3))), 0x1E);
                        fx_spawn_thrown_item_kind((a4 + 0x20), 0x3);
                        t16 = ((int)stk + 0);
                        t17 = 0x0;
                        for (;;) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)((a4 + 0x20)); }
                            u19 = *(float *)((t16 + 0x0));
                            t20 = (0x4 + t16);
                            t16 = (t16 + 0x8);
                            (((struct o20_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(((int)stk + 0)))->v)) + u19);
                            (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) + (*(float *)((t20 + 0x0))));
                            fx_spawn_thrown_item_kind((a4 + 0x20), 0x0);
                            t17 = (t17 + 0x1);
                            if ((int)t17 >= (int)0x4) {
                                break;
                            }
                        }
                        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                    } else {
                        *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + 0x38E);
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x71C);
                        FUN_0c0e21b0((a4 + 0x20), (a4 + 0x38));
                        FUN_0c0e21b0((a4 + 0x38), (a4 + 0x44));
                    }
                    return;
                }
                *(int *)((int)stk + 68) = a4;
                t35 = *(int *)((a4 + 0x1C));
                *(unsigned char *)((a4 + 0x3)) = 0x2;
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                (((struct o101_uchar *)(a4))->v) = 0x0;
                (((struct o102_uchar *)(a4))->v) = 0x9;
                (((struct o107_uchar *)(a4))->v) = 0x0;
                (((struct o118_uint *)(a4))->v) = 0x0;
                u37 = (((struct o7298_float *)(t35))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((t35 + 0x20)); }
                *(int *)((int)stk + 16) = (a4 + 0x20);
                u40 = (((struct o20_float *)(a4))->v);
                u41 = ((math_cos_angle16(((-(*(int *)((t35 + 0x30)))) + 0x14000))) * u37);
                u42 = u40;
                u42 = u42 + 100.0f * u41;
                (((struct o20_float *)(a4))->v) = u42;
                u44 = ((((struct o24_float *)(a4))->v));
                u44 = u44 + 180.0f * u37;
                (((struct o24_float *)(a4))->v) = u44;
                *(int *)((int)stk + 16) = (a4 + 0x28);
                u47 = (((struct o28_float *)(a4))->v);
                u48 = ((math_sin_angle16(((-(*(int *)((t35 + 0x30)))) + 0x14000))) * u37);
                u49 = u47;
                u49 = u49 + 100.0f * u48;
                (((struct o28_float *)(a4))->v) = u49;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)((t35 + 0x2C)); }
                t50 = *(signed char *)((t35 + 0x4));
                *(float *)(((int)stk + 20)) = (*(float *)((0xC33C05C + ((((t50 << 1) + t50) << 2) << 1))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x14)) = *(struct mv3 *)((a4 + 0x20)); }
                t54 = *(signed char *)((t35 + 0x3));
                *(unsigned int *)(((int)stk + 24)) = ((unsigned short)((unsigned short)((-t54) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)((-t54) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)((-t54) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0), (((int)stk + 20) + 0x8));
                FUN_0c0c07bc((a4 + 0x38), (((int)stk + 20) + 0x14), (((int)stk + 20) + 0x8), (*(int *)((t35 + 0x30))), (*(float *)(((int)stk + 20))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC3362F8); }
                return;
            }
            FUN_0c05c6e0(a4);
            item_tick_held(a4);
    return;
        }
        FUN_0c05c6e0(a4);
        item_tick_thrown(a4);
    return;
    }
    FUN_0c05aeca(a4);
    FUN_0c05c6e0(a4);
}
