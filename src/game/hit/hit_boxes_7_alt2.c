/* hit box data converters, per-frame object lists, hit edit draw (0c023d04-0c025958) */

/* named globals (symbols.txt) */
int FUN_0c025706(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c025332(int a4, int a5, int a6);
int FUN_0c024fe4(int a4, int a5, int a6);
int FUN_0c024ea6(int a4, int a5, int a6);
extern char g_obj_list_heads[];
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

