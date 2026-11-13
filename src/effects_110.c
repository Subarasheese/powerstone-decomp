/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c046360-0c046798) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o34_float { char p[0x34]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
float math_rand_float(void);
int FUN_0c0e6f24(void);
int FUN_0c0e6fe8(void);
int memset(int, int, int);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c042980(int, int);
int obj_destroy(int);
int math_vec3_sub(int, int, int);
int FUN_0c06231c(int, int, int);
int FUN_0c0e24f0(int);
int FUN_0c0e6e5c(int);
int thunk_FUN_0c062242(int);

int fx_spawn_046360(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = obj_create(0x5, 0x1, 0x1);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned short *)((t0 + 0x6)) = 0xF;
    *(unsigned char *)((t0 + 0x5)) = 0x1;
    *(unsigned int *)((t0 + 0x10)) = 0xC046534;
    FUN_0c0e6fe8();
    (((struct o118_uint *)(t0))->v) = 0x0;
    FUN_0c0e6fe8();
    FUN_0c0e6fe8();
    t1 = (((struct o2E0_int *)(t0))->v);
    memset((t1 + 0x34), 0x0, 0xC);
    FUN_0c06233a(t1, 0xC4CFA68, ((*(signed char *)(((t1 + 0x34) + 0x6))) + 0x75));
    *(unsigned char *)((t1 + 0x0)) = 0x1;
    *(unsigned short *)((t1 + 0x2)) = 0x31;
    math_rand_float();
    
    t0 = FUN_0c0e6f24();
    u0 = (float)(t0 + 0x1);
    if ((int)(t0 + 0x1) < 0) {
        u0 = ((float)(t0 + 0x1) + 4.2949673e+09f);
    }
    (((struct o24_float *)(t1))->v) = ((u0 / 10.0f) + 1.0f);
    (((struct o20_float *)(t1))->v) = ((u0 / 10.0f) + 1.0f);
    (((struct o1C_float *)(t1))->v) = ((u0 / 10.0f) + 1.0f);
    (((struct o34_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) / 8.0f);
    *(unsigned char *)(((t1 + 0x34) + 0x4)) = 0x1;
    math_rand_float();
    
    *(unsigned char *)(((t1 + 0x34) + 0x5)) = ((FUN_0c0e6f24()) + 0x1);
    math_rand_float();
    
    *(unsigned char *)(((t1 + 0x34) + 0x6)) = (FUN_0c0e6f24());
    u0 = math_rand_float();
    if (!(2.14748365e+09f > (u0 * 255.0f))) {
        return ((int (*)(void))(0xC0464F4))();
    }
    return ((int (*)(void))(0xC0464F8))();
}

int fx_tick_046360(int a4)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t4;
    register int t13;
    register int t27;
    register int t32;
    register int t58;
    register int t60;
    register int t74;
    register int t89;
    register int t124;
    int t2;
    int t28;
    register int t127;

    t0 = *(int *)((a4 + 0x1C));
    if (((*(signed char *)((t0 + 0x71DD))) == 21) && (t2 = *(signed char *)((t0 + 0x9)), t2 == 1)) {
        t3 = (((struct o2E0_int *)(a4))->v);
        t4 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 0)) = ((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t4 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x160));
        math_vec3_sub((((int)stk + 0) + 0x4), (((((struct o2E0_int *)(a4))->v)) + 0x4), 0xC7F2AB4);
        FUN_0c0e24f0((((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 30.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 30.0f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 30.0f);
        t13 = (((struct o2E0_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 0)) = t13;
        math_vec3_sub(((*(int *)(((int)stk + 0))) + 0x4), (t13 + 0x4), (((int)stk + 0) + 0x4));
        if (((*(int *)0xC7F307C) & 7) == 0) {
            FUN_0c042980((*(signed char *)((a4 + 0x3))), ((*(int *)((((((((struct oF2_short *)(a4))->v)) << 2) + (0x2E0 + a4)) + 0x0))) + 0x4));
            (((struct oF2_ushort *)(a4))->v) = 0x0;
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = 0x2;
    }
    t27 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t27 - 1);
    if (((short)(t27 - 1) == 0) && (t28 = (((struct oEE_short *)(a4))->v), t28 == 0)) {
        (((struct oEE_ushort *)(a4))->v) = 0x1;
    }
    t32 = *(signed char *)((a4 + 0x8));
    if (t32 != 0) {
        if (t32 == 1) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            t127 = (obj_destroy(a4));
        } else {
            if (t32 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                t127 = (obj_destroy(a4));
            } else {
                t127 = t32;
                if (t32 == 3) {
                    t127 = (obj_destroy(a4));
                }
            }
        }
    } else {
        t58 = (((struct o2E0_int *)(a4))->v);
        if ((*(signed char *)(((t58 + 0x34) + 0x4))) != 0) {
            t60 = *(signed char *)(((t58 + 0x34) + 0x5));
            *(unsigned char *)(((t58 + 0x34) + 0x5)) = (t60 - 1);
            if ((signed char)(t60 - 1) == 0) {
                *(unsigned char *)(((t58 + 0x34) + 0x5)) = 0x2;
                *(volatile signed char *)(((t58 + 0x34) + 0x6));
                *(unsigned char *)(((t58 + 0x34) + 0x6)) = (FUN_0c0e6e5c((0x2E0 + a4)));
                FUN_0c06231c(t58, 0xC4CFA68, ((*(signed char *)(((t58 + 0x34) + 0x6))) + 0x75));
            }
            if (((((struct oEE_short *)(a4))->v)) != 0) {
                if ((*(signed char *)(((t58 + 0x34) + 0x9))) == 0) {
                    t74 = *(signed char *)(((t58 + 0x34) + 0x7));
                    *(unsigned char *)(((t58 + 0x34) + 0x7)) = (t74 - 1);
                    if ((signed char)(t74 - 1) == 0) {
                        *(unsigned char *)(((t58 + 0x34) + 0x7)) = (*(signed char *)((0xC14A77C + ((*(signed char *)(((t58 + 0x34) + 0x8))) << 1))));
                        *(unsigned char *)(((t58 + 0x34) + 0x9)) = ((*(signed char *)(((t58 + 0x34) + 0x9))) + 0x1);
                        *(unsigned char *)((t58 + 0x0)) = 0x0;
                        (((struct o1C_float *)(t58))->v) = (((((struct o1C_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                        (((struct o20_float *)(t58))->v) = (((((struct o20_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                        (((struct o24_float *)(t58))->v) = (((((struct o24_float *)(t58))->v)) - ((((struct o34_float *)(t58))->v)));
                    }
                } else {
                    t89 = *(signed char *)(((t58 + 0x34) + 0x7));
                    *(unsigned char *)(((t58 + 0x34) + 0x7)) = (t89 - 1);
                    if ((signed char)(t89 - 1) == 0) {
                        *(unsigned char *)(((t58 + 0x34) + 0x7)) = (*(signed char *)(((((*(signed char *)(((t58 + 0x34) + 0x8))) << 1) + 0xC14A77C) + 0x1)));
                        *(unsigned char *)(((t58 + 0x34) + 0x8)) = ((*(signed char *)(((t58 + 0x34) + 0x8))) + 0x1);
                        *(unsigned char *)(((t58 + 0x34) + 0x9)) = 0x0;
                        *(unsigned char *)((t58 + 0x0)) = 0x1;
                        if (!(4.0f > (float)(*(signed char *)(((t58 + 0x34) + 0x8))))) {
                            *(unsigned char *)(((t58 + 0x34) + 0x4)) = 0x0;
                            (((struct oF0_ushort *)(a4))->v) = (((((struct oF0_short *)(a4))->v)) - 1);
                            *(unsigned char *)((t58 + 0x0)) = 0x0;
                        }
                    }
                }
            }
        }
        t127 = 0xF0;
        if (((((struct oF0_short *)(a4))->v)) == 0) {
            t124 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t124 + 0x1);
            t127 = (t124 + 0x1);
        }
    }
    return t127;
}
