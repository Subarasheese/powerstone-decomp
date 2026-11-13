/* Kraken attack update, class handlers and state updates (part 3 of 7 of the same module) (0c085606-0c086636) */

struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o719E_short { char p[0x719E]; short v; };
struct o72BC_int { char p[0x72BC]; int v; };
int FUN_0c0e6d00(void);
extern float math_rand_float(void);
extern void fx_spawn_03d8b0(char *obj, int choice);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
int math_atan_angle16(float);
float math_sin_angle16(int);
int pl_angle_to_target_pos(int a4);

int FUN_0c085606(int a4)
{
    int stk[3];
    register int t1;
    register int t15;
    register int t27;
    register int t40;
    register int t20;
    register int t23;
    register int t28;
    register int t33;
    register int t36;
    register int t41;
    register int t46;

    t1 = ((((struct o72BC_int *)(a4))->v));
    for (;;) {
        if ((int)(unsigned short)((((struct o719E_short *)(a4))->v)) <= (int)(*(short *)((t1 + 0x0)))) {
            break;
        }
        t1 = (t1 + 0x10);
    }
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == (*(short *)((t1 + 0x0)))) {
        (((struct o54_uint *)(((0x1E80 + a4) + 0x14A0)))->v) = (*(int *)((t1 + 0x4)));
        (((struct o58_uint *)(((0x1E80 + a4) + 0x14A0)))->v) = (*(int *)((t1 + 0x8)));
        (((struct o5C_uint *)(((0x1E80 + a4) + 0x14A0)))->v) = (*(int *)((t1 + 0xC)));
    } else {
        *(volatile int *)(((t1 - 16) + 0x4));
        *(volatile int *)((t1 + 0x4));
        *(volatile short *)(((t1 - 16) + 0x0));
        *(volatile short *)((t1 + 0x0));
        t15 = FUN_0c0e6d00();
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (short)t15;
        if (((short)t15 & 0x8000) != 0) {
            *(unsigned int *)((((int)stk + 0) + 0x0)) = ((*(int *)((((int)stk + 0) + 0x0))) | 0xFFFF0000);
        }
        (((struct o54_uint *)(t20))->v) = (((((struct o54_int *)(t20))->v)) + (*(int *)((((int)stk + 0) + 0x0))));
        *(volatile int *)(((t1 - 16) + 0x8));
        *(volatile int *)((t23 + 0x8));
        *(volatile short *)((t23 + 0x0));
        *(volatile short *)(((t1 - 16) + 0x0));
        t27 = FUN_0c0e6d00();
        *(unsigned int *)((t28 + 0x4)) = (short)t27;
        if (((short)t27 & 0x8000) != 0) {
            *(unsigned int *)((t28 + 0x4)) = ((*(int *)((t28 + 0x4))) | 0xFFFF0000);
        }
        (((struct o58_uint *)(t33))->v) = (((((struct o58_int *)(t33))->v)) + (*(int *)((t28 + 0x4))));
        *(volatile int *)(((t1 - 16) + 0xC));
        *(volatile int *)((t36 + 0xC));
        *(volatile short *)((t36 + 0x0));
        *(volatile short *)(((t1 - 16) + 0x0));
        t40 = FUN_0c0e6d00();
        *(unsigned int *)((t41 + 0x8)) = (short)t40;
        if ((0x8000 & (short)t40) != 0) {
            *(unsigned int *)((t41 + 0x8)) = ((*(int *)((t41 + 0x8))) | 0xFFFF0000);
        }
        *(volatile int *)((t41 + 0x8));
        *(volatile int *)((t46 + 0x5C));
    }
    return 0x5C;
}

void pl_kraken_spawn_random_fx(char *obj)
{
    if ((unsigned)(math_rand_float() * 255.0f) % 32 == 0 && *(short *)(obj + 238) > 0) {
        *(short *)(obj + 238) = *(short *)(obj + 238) - 1;
        fx_spawn_03d8b0(obj, *(signed char *)(0xC15053A + *(short *)(obj + 240) * 4 + *(short *)(obj + 238)));
        return;
    }
    fx_spawn_03d8b0(obj, (unsigned)(math_rand_float() * 255.0f) % 3);
}

int FUN_0c085782(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x2A8)))) {
            break;
        }
        t1 = 0x294;
        t1 = (t1 + a4);
        t2 = *(int *)((((t0 << 2) + t1) + 0x0));
        if (t2 != ((*(int *)((a4 + 0x1C))))) {
            t0 = (t0 + 0x1);
            continue;
        }
        return t2;
    }
    t0 = *(int *)((a4 + 0x1C));
    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o20_float *)(t0))->v);
    *(volatile float *)((t0 + 0x24));
    *(volatile float *)((a4 + 0x24));
    u2 = (((struct o28_float *)(t0))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = *(float *)0xC0858C8;
    u5 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u5 = u4;
    }
    u0 = (u2 - u3);
    if ((u2 - u3) == 0.0f) {
        u0 = u4;
    }
    t0 = math_atan_angle16(((-u0) / u5));
    t1 = t0;
    if (0.0f > u5) {
        t1 = (t0 + 0x8000);
    }
    t2 = t0;
    if ((int)(unsigned short)(((*(int *)((a4 + 0x30))) - t1) + 0xE000) < (int)0x4000) {
        t0 = *(int *)((a4 + 0x1C));
        math_sin_angle16((unsigned short)(t1 + 0x4000));
        *(volatile float *)(((0x20 + t0) + 0x0));
        *(volatile float *)0xC0858DC;
        t2 = 0xC0858DC;
    }
    return t2;
}

int FUN_0c085870(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = pl_angle_to_target_pos(a4);
    t1 = *(int *)((a4 + 0x30));
    t3 = (unsigned short)(t0 - t1);
    if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
        t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
    }
    if ((int)t3 >= 0) {
        if ((int)t3 > (int)0x222) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x222);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
        }
    } else {
        if ((int)t3 >= (int)0xFFFFFDDE) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 546);
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & 0xFFFF);
    return (t0 - t1);
}

int pl_kraken_attack_kind5(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC085C16))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC085BB4))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC085AD4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC085996))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0858F0))(a4, a5, a6, a7);
}

int pl_kraken_attack_kind3(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC085D90))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC085D6C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC085D0E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC085C54))(a4, a5, a6, a7);
}
