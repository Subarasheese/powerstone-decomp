/* hit box data converters, per-frame object lists, hit edit draw (0c023d04-0c025958) */

int FUN_0c0210c8(int, int, int);
int FUN_0c0210f4(int, int, int);
int FUN_0c021120(int, int, int);
int hit_find_part_entry(int, int, int, int);
int FUN_0c0229d8(int, int, int);
int hit_offset_point_by_owner(int, int, int);
int FUN_0c022e90(int, int, int);
int FUN_0c023ebc(int);
int FUN_0c024298(int, float, float, float, float, float);
int FUN_0c024300(int, float, float, float, float);
int FUN_0c0243b0(int, int, float, float, float);
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float);
float math_signed_sqrt(float);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
extern int hit_update_object_list();
extern int FUN_0c0255ae();

int FUN_0c0240e8(int a4, int a5, int a6)
{
    int stk[21];
    register int t1;
    register int t18;
    register int t19;
    register int t22;
    register int t27;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    FUN_0c023ebc((a4 + 0x20));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)(((((*(signed char *)((a4 + 0x2))) << 1) + 0xC320034) + 0x0)))) {
            break;
        }
        t19 = (hit_find_part_entry(a4, 0x0, (*(signed char *)(((int)stk + 0))), t1));
        if ((*(signed char *)((t19 + 0x1))) == 0) {
            FUN_0c0229d8(a4, (*(short *)((t19 + 0x2))), (((int)stk + 0) + 0x8));
            hit_offset_point_by_owner(a4, (((int)stk + 0) + 0x8), (*(signed char *)((t19 + 0x0))));
            FUN_0c022e90(a4, (((int)stk + 0) + 0x8), (*(signed char *)((t19 + 0x0))));
            FUN_0c024300((((int)stk + 0) + 0x8), (*(float *)(((int)stk + 20))), 1.0f, 0.0f, 0.0f);
        }
        t1 = (t1 + 0x1);
    }
    t18 = 0x0;
    for (;;) {
        t22 = *(signed char *)(((((*(signed char *)((a4 + 0x2))) << 1) + 0xC320034) + 0x1));
        if ((int)t18 >= (int)t22) {
            break;
        }
        t19 = (hit_find_part_entry(a4, 0x1, (*(signed char *)(((int)stk + 4))), t18));
        if (t18 == 0) {
            t27 = *(signed char *)((t19 + 0x1));
            if ((t27 & 0xF) != 0) {
                if ((t27 & 0xF) != 1) {
                    if ((t27 & 0xF) != 2) {
                    } else {
                        FUN_0c0210c8(a4, (((int)stk + 0) + 0x2C), t19);
                        FUN_0c0243b0((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x38), 0.0f, 0.0f, 1.0f);
                    }
                } else {
                    FUN_0c0210f4(a4, (((int)stk + 0) + 0x18), t19);
                    FUN_0c024298((((int)stk + 0) + 0x18), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 36))), 0.0f, 0.0f, 1.0f);
                }
            } else {
                FUN_0c021120(a4, (((int)stk + 0) + 0x44), t19);
                FUN_0c024300((((int)stk + 0) + 0x44), (*(float *)(((int)stk + 80))), 0.0f, 0.0f, 1.0f);
            }
        } else {
            if ((*(signed char *)((t19 + 0x1))) == 0) {
                FUN_0c0229d8(a4, (*(short *)((t19 + 0x2))), (((int)stk + 0) + 0x8));
                hit_offset_point_by_owner(a4, (((int)stk + 0) + 0x8), (*(signed char *)((t19 + 0x0))));
                FUN_0c022e90(a4, (((int)stk + 0) + 0x8), (*(signed char *)((t19 + 0x0))));
                FUN_0c024300((((int)stk + 0) + 0x8), (*(float *)(((int)stk + 20))), 0.0f, 1.0f, 0.0f);
            }
        }
        t18 = (t18 + 0x1);
    }
    return t22;
}

int FUN_0c024ea6(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u77;
    register float u68;
    register float u35;
    register float u38;
    register float u39;
    register float u40;
    register float u78;
    register float u69;
    register float u59;
    register float u60;
    register float u45;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    u77 = t16;
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        u68 = t16;
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            if (t16 > ((u0 + u1) - t9)) {
                FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)));
                u35 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u35 = -u35;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u35);
                u38 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u38 = -u38;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u38);
            } else {
                u39 = (((struct o4_float *)(a6))->v);
                u40 = (((struct o4_float *)(a4))->v);
                if (u40 > u39) {
                    u45 = ((u40 - ((((struct o10_float *)(a4))->v))) - ((((struct o10_float *)(a6))->v)));
                } else {
                    u45 = ((u40 + ((((struct o10_float *)(a4))->v))) + ((((struct o10_float *)(a6))->v)));
                }
                (((struct o24_float *)(a5))->v) = ((u45 - u39) + ((((struct o24_float *)(a5))->v)));
                *(volatile float *)((a4 + 0x4));
                *(volatile float *)((a6 + 0x4));
                
                u59 = u39;
                u60 = u40;
            }
            u68 = u59;
            u69 = u60;
        }
        u77 = u68;
        u78 = u69;
    }
    return ((int (*)(float, float))(0xC024FD8))(u77, u78);
}

int FUN_0c024fe4(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u70;
    register float u71;
    register float u61;
    register float u62;
    register float u52;
    register float u53;
    register float u39;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a4))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct oC_float *)(a6))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)));
            if (t16 > ((u0 + u1) - t9)) {
                u29 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u29 = -u29;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u29);
                u32 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u32 = -u32;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u32);
            } else {
                u33 = (((struct o4_float *)(a6))->v);
                u34 = (((struct o4_float *)(a4))->v);
                if (u34 > u33) {
                    u39 = ((u34 - ((((struct o10_float *)(a4))->v))) - ((((struct oC_float *)(a6))->v)));
                } else {
                    u39 = ((u34 + ((((struct o10_float *)(a4))->v))) + ((((struct oC_float *)(a6))->v)));
                }
                (((struct o24_float *)(a5))->v) = ((u39 - u33) + ((((struct o24_float *)(a5))->v)));
                *(volatile float *)((a4 + 0x4));
                *(volatile float *)((a6 + 0x4));
                
                u52 = u33;
                u53 = u34;
            }
            u61 = u52;
            u62 = u53;
        }
        u70 = u61;
        u71 = u62;
    }
    return ((int (*)(float, float))(0xC02511E))(u70, u71);
}

int FUN_0c025332(int a4, int a5, int a6)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u34;
    register float u37;
    float u25;
    register float u26;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 16)) = u10;
    u11 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 20)) = u11;
    u12 = *(float *)(((int)stk + 16));
    u13 = (((struct o4_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u13;
    u14 = (((struct oC_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u14;
    t16 = FUN_0c0211d0((u14 + (*(float *)(((int)stk + 8)))), (u13 - u14), (u11 + u12), (u10 - u11));
    if (!(0.0f > ((u0 + u1) - t9)) && !(0.0f > t16)) {
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            FUN_0c02114c((((int)stk + 0) + 0x18), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
            if (!(t16 > ((u0 + u1) - t9)) && (u25 = (((struct o4_float *)(a4))->v), u26 = (((struct o4_float *)(a6))->v), u25 > u26)) {
                (((struct o24_float *)(a5))->v) = ((((((((struct o4_float *)(a4))->v)) - ((((struct oC_float *)(a4))->v))) - ((((struct o10_float *)(a6))->v))) - ((((struct o4_float *)(a6))->v))) + ((((struct o24_float *)(a5))->v)));
            } else {
                u34 = (((((struct o18_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u34 = -u34;
                (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u34);
                u37 = (((((struct o20_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
                u37 = -u37;
                (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u37);
            }
        }
    }
    return ((int (*)(void))(0xC025452))();
}

int FUN_0c02545c(int a4, int a5, int a6)
{
    int stk[5];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register int t29;
    register float u19;
    register float u22;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a6))->v);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)((a6 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 - u3);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a4))->v);
    *(float *)(((int)stk + 0)) = (u5 - u4);
    u8 = ((u5 - u4) * (u5 - u4));
    u8 = u8 + ((u2 - u3)) * ((u2 - u3));
    t9 = math_signed_sqrt(u8);
    t29 = 0x0;
    if (!(0.0f > ((u0 + u1) - t9))) {
        t29 = 0x1;
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        } else {
            FUN_0c02114c((((int)stk + 0) + 0x8), (*(float *)((a4 + 0x0))), ((((struct o8_float *)(a4))->v)), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)));
            u19 = (((((struct o8_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
            u19 = -u19;
            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u19);
            u22 = (((((struct o10_float *)(((int)stk + 0)))->v)) * ((u0 + u1) - t9));
            u22 = -u22;
            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u22);
            t29 = 0x8;
        }
    }
    return t29;
}

int FUN_0c025706(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t3 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t3 << 1) + t3) + 0xC33EC20) + 0x1)))) {
            break;
        }
        t2 = t0;
        t3 = *(signed char *)0xC7F3051;
        t2 = (t2 << 1);
        t2 = (t2 + t0);
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t1 = (*(int *)(((t3 << 2) + 0xC33EB60)));
        t2 = (t2 + (*(int *)(((t3 << 2) + 0xC33EB20))));
        t1 = (t1 + (t0 << 1));
        t3 = ((int (*)(int, int, int, float))(hit_update_object_list))(t1, t2, ((((struct o8_int *)0xC7E4074)->v)), f4);
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, ((((struct o4_int *)0xC7E4074)->v)));
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, ((((struct o0_int *)0xC7E4074)->v)));
        t3 = ((int (*)(int, int, int))(hit_update_object_list))(t1, t2, 0xC7E40C4);
        t0 = (t0 + 0x1);
    }
    t0 = 0x0;
    t3 = t1;
    t1 = t2;
    for (;;) {
        t2 = *(signed char *)0xC7F3051;
        if ((int)t0 >= (int)(*(signed char *)(((((t2 << 1) + t2) + 0xC33EC20) + 0x0)))) {
            break;
        }
        t2 = *(signed char *)0xC7F3051;
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + t0);
        t1 = (t1 << 2);
        t3 = (*(int *)(((t2 << 2) + 0xC33EAE0)));
        t1 = (t1 + (*(int *)(((t2 << 2) + 0xC33EAA0))));
        t3 = (t3 + (t0 << 1));
        t2 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(FUN_0c0255ae))(t3, t1, ((((struct o8_int *)0xC7E4074)->v)), a7, f4, f5, f6, f7, f8, f9, f10);
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, ((((struct o4_int *)0xC7E4074)->v)));
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, ((((struct o0_int *)0xC7E4074)->v)));
        t2 = ((int (*)(int, int, int))(FUN_0c0255ae))(t3, t1, 0xC7E40C4);
        t0 = (t0 + 0x1);
    }
    return ((int (*)(int, int, int, int))(0xC02588A))(0xC7E4074, a5, a6, a7);
}
