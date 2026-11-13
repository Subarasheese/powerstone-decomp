/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

struct vec3 { float x, y, z; };
struct vec4 { struct vec3 xyz; float w; };
struct owner_obj {
    char pad_00[80];
    float scale;            /* 80 */
    char pad_54[24];
    char mat[1];            /* 108 */
};
void math_mat_transform_point(struct vec4 *, char *);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02114c(int, float, float, float, float);
float FUN_0c0211d0(float, float, float, float, float, float, float);

void hit_load_sphere_world(struct owner_obj *obj, struct vec4 *dst, struct vec4 *src)
{
    math_mat_transform_point(src, obj->mat);
    dst->xyz = src->xyz;
    dst->w = src->w * obj->scale;
}

int FUN_0c02180c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[10];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register int t34;
    register float u45;
    register float u155;
    register float u224;
    register float u274;
    register float u278;
    register float u312;
    register float u316;
    register float u328;
    register float u332;
    register float u366;
    register float u370;
    int t39;
    float u47;
    register float u124;
    register float u136;
    register float u144;
    register float u152;
    float u156;
    register float u193;
    register float u205;
    register float u213;
    register float u221;
    register float u252;
    register float u260;
    register float u289;
    register float u306;
    register float u340;
    register float u348;
    register float u378;
    register float u386;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a7))->v);
    u3 = (((struct oC_float *)(a6))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct o1C_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = ((u7 + u6) - u10);
    u12 = (((struct o4_float *)(a7))->v);
    *(float *)(((int)stk + 8)) = u12;
    u13 = (((struct o10_float *)(a7))->v);
    *(float *)(((int)stk + 4)) = u13;
    u14 = *(float *)(((int)stk + 8));
    u15 = (((struct o4_float *)(a6))->v);
    *(float *)(((int)stk + 0)) = u15;
    u16 = (((struct o10_float *)(a6))->v);
    *(float *)(((int)stk + 12)) = u16;
    (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = (FUN_0c0211d0((u16 + (*(float *)(((int)stk + 0)))), (u15 - u16), (u13 + u14), (u12 - u13), f8, f9, f10));
    if (0.0f > ((((struct o1C_float *)(((int)stk + 0)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v))) {
        return 0x0;
    }
    t34 = *(signed char *)((a4 + 0x2D9));
    if ((signed char)t34 == 2) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    if ((*(signed char *)((a5 + 0x2D9))) == 2) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    if (((signed char)t34 != 0) && (t39 = *(signed char *)((a5 + 0x2D9)), t39 != 0)) {
        return ((int (*)(int, int, int, int))(0xC021CA6))(t34, a5, a6, a7);
    }
    FUN_0c02114c((((int)stk + 0) + 0x10), (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)));
    u45 = (((struct o1C_float *)(((int)stk + 0)))->v);
    if (!(u45 > ((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v))) && (u47 = (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v), !(u45 > u47))) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            if ((*(float *)((a6 + 0x0))) > (*(float *)((a7 + 0x0)))) {
                u124 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u124 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + u124);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u136 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u136 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u136);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u144 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u144 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u144 / 2.0f));
        if ((*(float *)((a6 + 0x0))) > (*(float *)((a7 + 0x0)))) {
            u152 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u152 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (u152 / 2.0f));
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    u155 = (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v);
    if ((u45 > u155) && (u156 = (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v), u156 > u155)) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
                u193 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
            } else {
                u193 = ((((struct o24_float *)(((int)stk + 0)))->v));
            }
            (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + u193);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                u205 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
            } else {
                u205 = ((((struct o24_float *)(((int)stk + 0)))->v));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u205);
            return ((int (*)(float, float))(0xC021CA6))(u45, u45);
        }
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u213 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u213 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u213 / 2.0f));
        if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
            u221 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u221 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (u221 / 2.0f));
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    u224 = (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v);
    if (u224 > u45) {
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    if (u224 > u155) {
        return ((int (*)(float, float))(0xC021CA6))(u45, u45);
    }
    if (((((struct o4_float *)(a6))->v)) > ((((struct o4_float *)(a7))->v))) {
        if ((*(signed char *)((a5 + 0x2DA))) != 0) {
            if (u155 > u45) {
                if (u45 > 5.0f) {
                    (((struct o1C_float *)(((int)stk + 0)))->v) = 5.0f;
                }
                if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
                        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                            u252 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
                        } else {
                            u252 = ((((struct o1C_float *)(((int)stk + 0)))->v));
                        }
                        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u252);
                        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                    }
                    if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                        u260 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
                    } else {
                        u260 = ((((struct o1C_float *)(((int)stk + 0)))->v));
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u260 / 2.0f));
                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
                    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                }
                u274 = ((((struct o20_float *)(a5))->v));
                u274 = u274 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
                (((struct o20_float *)(a5))->v) = u274;
                u278 = ((((struct o28_float *)(a5))->v));
                u278 = u278 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
                (((struct o28_float *)(a5))->v) = u278;
                return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
            }
            if (u155 > 5.0f) {
                (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = 5.0f;
            }
            if ((*(signed char *)((a4 + 0x2D9))) == 0) {
                if ((*(signed char *)((a5 + 0x2D9))) == 0) {
                    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u289 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
                    } else {
                        u289 = ((((struct o24_float *)(((int)stk + 0)))->v));
                    }
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u289 / 2.0f));
                    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
                    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
                    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
                }
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u306 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
                } else {
                    u306 = ((((struct o24_float *)(((int)stk + 0)))->v));
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u306);
                return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
            }
            u312 = ((((struct o20_float *)(a5))->v));
            u312 = u312 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
            (((struct o20_float *)(a5))->v) = u312;
            u316 = ((((struct o28_float *)(a5))->v));
            u316 = u316 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u316;
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) - u224);
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + u224);
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if ((*(signed char *)((a4 + 0x2DA))) == 0) {
        *(volatile signed char *)((a5 + 0x2D9));
        return 0x0;
    }
    if (u155 > u45) {
        if (u45 > 5.0f) {
            (((struct o1C_float *)(((int)stk + 0)))->v) = 5.0f;
        }
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            u328 = ((((struct o20_float *)(a5))->v));
            u328 = u328 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
            (((struct o20_float *)(a5))->v) = u328;
            u332 = ((((struct o28_float *)(a5))->v));
            u332 = u332 + ((((struct o1C_float *)(((int)stk + 0)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u332;
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u340 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
            } else {
                u340 = ((((struct o1C_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u340);
            return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u348 = (-((((struct o1C_float *)(((int)stk + 0)))->v)));
        } else {
            u348 = ((((struct o1C_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u348 / 2.0f));
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o1C_float *)(((int)stk + 0)))->v))) / 2.0f)));
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if (u155 > 5.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = 5.0f;
    }
    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
        u366 = ((((struct o20_float *)(a5))->v));
        u366 = u366 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o10_float *)(((int)stk + 0)))->v));
        (((struct o20_float *)(a5))->v) = u366;
        u370 = ((((struct o28_float *)(a5))->v));
        u370 = u370 + ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o18_float *)(((int)stk + 0)))->v));
        (((struct o28_float *)(a5))->v) = u370;
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u378 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
        } else {
            u378 = ((((struct o24_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u378);
        return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
    }
    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
        u386 = (-((((struct o24_float *)(((int)stk + 0)))->v)));
    } else {
        u386 = ((((struct o24_float *)(((int)stk + 0)))->v));
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u386 / 2.0f));
    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + (((((((struct o10_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o18_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v))) / 2.0f)));
    return ((int (*)(float, float, float))(0xC021CA6))(u45, 5.0f, 2.0f);
}
