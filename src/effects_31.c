/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c037ab8-0c037d88) */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c0555dc(void);
int obj_destroy(int);
int thunk_FUN_0c062242(int);

int obj_spawn_037ab8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = obj_create(0x1, 0x1, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC037B9C;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o24_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = (*(float *)0xC037BE4);
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), (t2 + 0x17));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0x3F;
            (((struct o1C_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o20_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            (((struct o24_float *)((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0)))))->v) = 0.0f;
            t3 = ((t2 << 2) + (0x2E0 + t0));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x18)) = 0x0;
            if ((int)t2 >= (int)0x3) {
                break;
            }
        }
        t1 = 0x24;
    }
    return t1;
}

int obj_tick_037ab8(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t11;
    register float u16;
    register int t17;
    register int t21;
    register int t22;
    register float u23;
    register int t32;
    register int t33;
    register int t48;
    register int t54;
    register int t58;
    register int t83;
    register int t89;
    register int t93;
    register int t99;
    register int t36;
    register int t18;
    register int t19;
    register int t20;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        *(unsigned char *)((a4 + 0x8)) = 0x4;
    }
    t3 = *(signed char *)((a4 + 0x8));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t36 = (obj_destroy(a4));
                } else {
                    t36 = t3;
                    if (t3 == 4) {
                        t36 = (obj_destroy(a4));
                    }
                }
            } else {
                t11 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
                *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4);
                thunk_FUN_0c062242((((((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t11 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
                (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
                u16 = *(float *)(((int)stk + 12));
                (((struct o28_float *)(a4))->v) = u16;
                t17 = 0xC037D6C;
                t21 = 0x0;
                t22 = 0x0;
                u23 = u16;
                for (;;) {
                    if ((int)t22 >= (int)0x3) {
                        break;
                    }
                    t19 = 0x2E0;
                    t17 = 0x1C;
                    t22 = (t22 + 0x1);
                    t19 = (t19 + a4);
                    t19 = (t19 + t21);
                    t20 = (*(int *)((t19 + 0x0)));
                    u23 = (*(float *)((t20 + t17)));
                    u23 = (u23 + 0.049999997f);
                    *(float *)((t20 + t17)) = u23;
                    t17 = 0x20;
                    t20 = 0x2E0;
                    t20 = (t20 + a4);
                    t20 = (t20 + t21);
                    t19 = (*(int *)((t20 + 0x0)));
                    t20 = 0x2E0;
                    u23 = (*(float *)((t19 + t17)));
                    t20 = (t20 + a4);
                    u23 = (u23 + 0.049999997f);
                    t20 = (t20 + t21);
                    *(float *)((t19 + t17)) = u23;
                    t17 = 0x24;
                    t19 = (*(int *)((t20 + 0x0)));
                    t20 = 0x2E0;
                    u23 = (*(float *)((t19 + t17)));
                    t20 = (t20 + a4);
                    u23 = (u23 + 0.049999997f);
                    t20 = (t20 + t21);
                    *(float *)((t19 + t17)) = u23;
                    t19 = (*(int *)((t20 + 0x0)));
                    t18 = (*(int *)((t19 + 0x18)));
                    t18 = (t18 - 182);
                    *(unsigned int *)((t19 + 0x18)) = t18;
                    t21 = (t21 + 0x4);
                }
                t32 = (((struct oEC_short *)(a4))->v);
                (((struct oEC_ushort *)(a4))->v) = (t32 - 1);
                t36 = 0xEC;
                if ((short)(t32 - 1) == 0) {
                    t33 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t33 + 0x1);
                    t36 = (t33 + 0x1);
                }
            }
            t99 = t36;
        } else {
            t48 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4);
            thunk_FUN_0c062242((((((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t48 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
            (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
            (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            t54 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t54 - 1);
            t99 = 0xEC;
            if ((short)(t54 - 1) == 0) {
                *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct oEC_ushort *)(a4))->v) = 0x24;
                t58 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t58 + 0x1);
                t99 = (t58 + 0x1);
            }
        }
    } else {
        (((struct o1C_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        (((struct o24_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct oEC_ushort *)(a4))->v) = 0x64;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t83 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t83 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0xC60));
        (((struct o20_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
        (((struct o24_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
        (((struct o28_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
        t89 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t89 - 1);
        t99 = 0xEC;
        if ((short)(t89 - 1) == 0) {
            *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o2E4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct o2E8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct oEC_ushort *)(a4))->v) = 0x24;
            t93 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t93 + 0x1);
            t99 = (t93 + 0x1);
        }
    }
    return t99;
}
