/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02114c(int, int, int, int, float, float, float, float);

int FUN_0c021e20(int a4, int a5, int a6, int a7)
{
    int stk[6];
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
    register int t33;
    register float u44;
    register float u112;
    register float u116;
    register float u143;
    register float u176;
    register float u180;
    register float u207;
    register float u250;
    register float u251;
    register float u252;
    register float u257;
    register float u258;
    register float u259;
    register float u264;
    register float u265;
    register float u266;
    register float u271;
    register float u272;
    register float u273;
    register float u278;
    register float u279;
    register float u280;
    register float u285;
    register float u286;
    register float u287;
    register float u302;
    register float u306;
    register float u340;
    register float u344;
    int t38;
    float u46;
    register float u124;
    register float u132;
    float u144;
    register float u188;
    register float u196;
    register float u314;
    register float u322;
    register float u352;
    register float u360;

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a7 + 0x0));
    u2 = (((struct oC_float *)(a7))->v);
    u3 = (((struct oC_float *)(a6))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = (u1 - u0);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)(a7))->v);
    u7 = (((struct o14_float *)(a6))->v);
    u8 = (((struct o8_float *)(a6))->v);
    u9 = (((struct o8_float *)(a7))->v);
    u10 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u10 = (u9 - u8);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u7 + u6) - u10);
    u12 = (((struct oC_float *)(a7))->v);
    u13 = (((struct o10_float *)(a6))->v);
    u14 = (((struct o4_float *)(a6))->v);
    u15 = (((struct o4_float *)(a7))->v);
    u16 = (u14 - u15);
    if (0.0f > (u14 - u15)) {
        u16 = (u15 - u14);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u13 + u12) - u16);
    if (0.0f > ((((struct oC_float *)(((int)stk + 0)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v))) {
        return 0x0;
    }
    if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0xC)))->v))) {
        return 0x0;
    }
    t33 = *(signed char *)((a4 + 0x2D9));
    if ((signed char)t33 == 2) {
        return ((int (*)(int, int, int, int, float, float, float))(0xC02220C))(t33, a5, a6, a7, (u14 - u15), u14, u15);
    }
    if ((*(signed char *)((a5 + 0x2D9))) == 2) {
        return ((int (*)(int, int, int, int, float, float, float))(0xC02220C))(t33, a5, a6, a7, (u14 - u15), u14, u15);
    }
    if (((signed char)t33 != 0) && (t38 = *(signed char *)((a5 + 0x2D9)), t38 != 0)) {
        return ((int (*)(int, int, int, int, float, float, float))(0xC02220C))(t33, a5, a6, a7, (u14 - u15), u14, u15);
    }
    FUN_0c02114c(((int)stk + 0), a5, a6, a7, (*(float *)((a6 + 0x0))), ((((struct o8_float *)(a6))->v)), (*(float *)((a7 + 0x0))), ((((struct o8_float *)(a7))->v)));
    u44 = (((struct oC_float *)(((int)stk + 0)))->v);
    if (!(u44 > ((((struct o4_float *)((((int)stk + 0) + 0xC)))->v))) && (u46 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u44 > u46))) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            u112 = ((((struct o20_float *)(a5))->v));
            u112 = u112 + ((((struct oC_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 0)));
            (((struct o20_float *)(a5))->v) = u112;
            u116 = ((((struct o28_float *)(a5))->v));
            u116 = u116 + ((((struct oC_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u116;
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u124 = (-((((struct oC_float *)(((int)stk + 0)))->v)));
            } else {
                u124 = ((((struct oC_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u124);
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u132 = (-((((struct oC_float *)(((int)stk + 0)))->v)));
        } else {
            u132 = ((((struct oC_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u132 / 2.0f));
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((((*(float *)(((int)stk + 0))) * ((((struct oC_float *)(((int)stk + 0)))->v))) / 2.0f)));
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct oC_float *)(((int)stk + 0)))->v))) / 2.0f)));
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
    }
    u143 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
    if ((u44 > u143) && (u144 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u144 > u143)) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            u176 = ((((struct o20_float *)(a5))->v));
            u176 = u176 + ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)) * (*(float *)(((int)stk + 0)));
            (((struct o20_float *)(a5))->v) = u176;
            u180 = ((((struct o28_float *)(a5))->v));
            u180 = u180 + ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)) * ((((struct o8_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u180;
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                u188 = (-((((struct o14_float *)(((int)stk + 0)))->v)));
            } else {
                u188 = ((((struct o14_float *)(((int)stk + 0)))->v));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u188);
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
        }
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u196 = (-((((struct o14_float *)(((int)stk + 0)))->v)));
        } else {
            u196 = ((((struct o14_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u196 / 2.0f));
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((((*(float *)(((int)stk + 0))) * ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v))) / 2.0f)));
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v))) / 2.0f)));
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
    }
    u207 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
    if (u207 > u44) {
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
    }
    if (u207 > u143) {
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
    }
    if (((((struct o4_float *)(a6))->v)) > ((((struct o4_float *)(a7))->v))) {
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            (((struct o24_float *)(a5))->v) = (((((struct o24_float *)(a5))->v)) - u207);
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            u250 = (((struct oC_float *)(((int)stk + 0)))->v);
            u251 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
            u252 = u251;
            if (u251 > u250) {
                u252 = u250;
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((-((*(float *)(((int)stk + 0))) * u252))));
            u257 = (((struct oC_float *)(((int)stk + 0)))->v);
            u258 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
            u259 = u258;
            if (u258 > u257) {
                u259 = u257;
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((-(((((struct o8_float *)(((int)stk + 0)))->v)) * u259))));
            return ((int (*)(float, float, float))(0xC02220C))(u257, u258, u44);
        }
        u264 = (((struct oC_float *)(((int)stk + 0)))->v);
        u265 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
        u266 = u265;
        if (u265 > u264) {
            u266 = u264;
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (((-((*(float *)(((int)stk + 0))) * u266)) / 2.0f)));
        u271 = (((struct oC_float *)(((int)stk + 0)))->v);
        u272 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
        u273 = u272;
        if (u272 > u271) {
            u273 = u271;
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((-(((((struct o8_float *)(((int)stk + 0)))->v)) * u273)) / 2.0f)));
        u278 = (((struct oC_float *)(((int)stk + 0)))->v);
        u279 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
        u280 = u279;
        if (u279 > u278) {
            u280 = u278;
        }
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((((*(float *)(((int)stk + 0))) * u280) / 2.0f)));
        u285 = (((struct oC_float *)(((int)stk + 0)))->v);
        u286 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v);
        u287 = u286;
        if (u286 > u285) {
            u287 = u285;
        }
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o8_float *)(((int)stk + 0)))->v)) * u287) / 2.0f)));
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u285, u286);
    }
    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - u207);
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, u44);
    }
    if ((*(signed char *)((a4 + 0x2DA))) == 0) {
        return 0x0;
    }
    if (u143 > u44) {
        if (u44 > 5.0f) {
            (((struct oC_float *)(((int)stk + 0)))->v) = 5.0f;
        }
        if ((*(signed char *)((a4 + 0x2D9))) != 0) {
            u302 = ((((struct o20_float *)(a5))->v));
            u302 = u302 + ((((struct oC_float *)(((int)stk + 0)))->v)) * (*(float *)(((int)stk + 0)));
            (((struct o20_float *)(a5))->v) = u302;
            u306 = ((((struct o28_float *)(a5))->v));
            u306 = u306 + ((((struct oC_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)(((int)stk + 0)))->v));
            (((struct o28_float *)(a5))->v) = u306;
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
        }
        if ((*(signed char *)((a5 + 0x2D9))) != 0) {
            if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                u314 = (-((((struct oC_float *)(((int)stk + 0)))->v)));
            } else {
                u314 = ((((struct oC_float *)(((int)stk + 0)))->v));
            }
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + u314);
            return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
        }
        if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
            u322 = (-((((struct oC_float *)(((int)stk + 0)))->v)));
        } else {
            u322 = ((((struct oC_float *)(((int)stk + 0)))->v));
        }
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + (u322 / 2.0f));
        (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((((*(float *)(((int)stk + 0))) * ((((struct oC_float *)(((int)stk + 0)))->v))) / 2.0f)));
        (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct oC_float *)(((int)stk + 0)))->v))) / 2.0f)));
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
    }
    if (u143 > 5.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 5.0f;
    }
    if ((*(signed char *)((a4 + 0x2D9))) != 0) {
        u340 = ((((struct o20_float *)(a5))->v));
        u340 = u340 + ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)) * (*(float *)(((int)stk + 0)));
        (((struct o20_float *)(a5))->v) = u340;
        u344 = ((((struct o28_float *)(a5))->v));
        u344 = u344 + ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v)) * ((((struct o8_float *)(((int)stk + 0)))->v));
        (((struct o28_float *)(a5))->v) = u344;
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
    }
    if ((*(signed char *)((a5 + 0x2D9))) != 0) {
        if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
            u352 = (-((((struct o14_float *)(((int)stk + 0)))->v)));
        } else {
            u352 = ((((struct o14_float *)(((int)stk + 0)))->v));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + u352);
        return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
    }
    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
        u360 = (-((((struct o14_float *)(((int)stk + 0)))->v)));
    } else {
        u360 = ((((struct o14_float *)(((int)stk + 0)))->v));
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (u360 / 2.0f));
    (((struct o20_float *)(a5))->v) = (((((struct o20_float *)(a5))->v)) + ((((*(float *)(((int)stk + 0))) * ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v))) / 2.0f)));
    (((struct o28_float *)(a5))->v) = (((((struct o28_float *)(a5))->v)) + (((((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o8_float *)((((int)stk + 0) + 0xC)))->v))) / 2.0f)));
    return ((int (*)(float, float, float))(0xC02220C))(2.0f, u44, 5.0f);
}
