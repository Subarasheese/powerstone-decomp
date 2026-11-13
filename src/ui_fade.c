/* screen fade: start/reset/draw (full-screen coloured quad) (0c03148c-0c0318e0) */

int FUN_0c0dd5d0(int, int);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0dcd20(float, float, float);
int FUN_0c0e1550(int);
int FUN_0c0e6fdc(int);
extern int FUN_0c0e6fe8();
int nlObjPutTrnsl(int, float);
int nlUnitMatrix(void);

int FUN_0c03148c(void)
{
    return FUN_0c0dd5d0(0xC321238, 0xC321330);
}

int ui_fade_start(int a4, int a5, int a6, int a7)
{
    register int t7;
    register int t8;

    (((struct o4_uint *)0xC7F31C8)->v) = a4;
    (((struct o0_uchar *)0xC7F31C8)->v) = a5;
    (((struct o1_uchar *)0xC7F31C8)->v) = a6;
    (((struct o2_uchar *)0xC7F31C8)->v) = a7;
    (((struct o3_uchar *)0xC7F31C8)->v) = a7;
    if (((*(int *)0xC386830) != 0) && ((signed char)a6 != 0)) {
        (((struct o3_uchar *)0xC7F31C8)->v) = ((*(signed char *)0xC7F31CB) - 1);
    }
    if ((signed char)a5 != 0) {
        (((struct o3_uchar *)0xC7F31C8)->v) = ((*(signed char *)0xC7F31CB) + 0x1);
    }
    t7 = *(signed char *)0xC7F31CA;
    t8 = t7;
    if (t7 == 0) {
        (((struct o2_uchar *)0xC7F31C8)->v) = 0x1;
        t8 = 0x1;
    }
    return t8;
}

void ui_fade_reset(void)
{
    *(unsigned char *)0xC7F31CB = 0x0;
}

int ui_fade_draw(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    FUN_0c0e1550(0x1);
    nlUnitMatrix();
    t3 = *(signed char *)0xC7F31CB;
    if (t3 == 0) {
        return t3;
    }
    t3 = *(signed char *)0xC7F31CA;
    t4 = *(signed char *)0xC7F31C8;
    if (t4 != 0) {
        if (t4 == 1) {
            if ((*(signed char *)0xC7F31C9) == 0) {
                u0 = ((float)(*(signed char *)0xC7F31CB) / (float)(signed char)t3);
            } else {
                u1 = ((float)((*(signed char *)0xC7F31CB) - 1) / (float)(signed char)t3);
                u1 = -u1;
                u0 = (u1 + 1.0f);
            }
            (((struct oC_float *)0xC366F00)->v) = -320.0f;
            (((struct o0_float *)0xC366F00)->v) = -320.0f;
            (((struct o24_float *)0xC366F00)->v) = 320.0f;
            (((struct o18_float *)0xC366F00)->v) = 320.0f;
            (((struct o2C_float *)0xC366F00)->v) = -100.0f;
            (((struct o20_float *)0xC366F00)->v) = -100.0f;
            (((struct o14_float *)0xC366F00)->v) = -100.0f;
            (((struct o8_float *)0xC366F00)->v) = -100.0f;
            (((struct o0_uint *)0xC366F00)->v) = (((((struct o0_int *)0xC366F00)->v)) | 0x1);
            (((struct oC_uint *)0xC366F00)->v) = (((((struct oC_int *)0xC366F00)->v)) | 0x1);
            (((struct o18_uint *)0xC366F00)->v) = (((((struct o18_int *)0xC366F00)->v)) | 0x1);
            (((struct o24_uint *)0xC366F00)->v) = (((((struct o24_int *)0xC366F00)->v)) | 0x1);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)((unsigned int)(t5 & 0xFF0000) >> 16);
            if ((int)((unsigned int)(t5 & 0xFF0000) >> 16) < 0) {
                u1 = ((float)((unsigned int)(t5 & 0xFF0000) >> 16) + 4.2949673e+09f);
            }
            (((struct o34_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)((unsigned int)(t5 & 0xFF00) >> 8);
            if ((int)((unsigned int)(t5 & 0xFF00) >> 8) < 0) {
                u1 = ((float)((unsigned int)(t5 & 0xFF00) >> 8) + 4.2949673e+09f);
            }
            (((struct o38_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = *(int *)0xC7F31CC;
            u1 = (float)(unsigned char)t5;
            if ((int)(unsigned char)t5 < 0) {
                u1 = ((float)(unsigned char)t5 + 4.2949673e+09f);
            }
            (((struct o3C_float *)0xC366F00)->v) = (u1 / 255.0f);
            t5 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c0e6fdc))(0xC366F30, 0xC366F00, 0xC366F18, 0xC366F0C, 255.0f, 640.0f, 320.0f, -320.0f);
            (((struct o0_float *)0xC32124C)->v) = f5;
            (((struct o20_float *)0xC32124C)->v) = f5;
            FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
            if (0x1 != 0) {
                u1 = (u0 * 3.125f);
                (((struct o1C_float *)0xC366F00)->v) = -37.5f;
                (((struct o4_float *)0xC366F00)->v) = -37.5f;
                (((struct o28_float *)0xC366F00)->v) = (u1 + -37.5f);
                (((struct o10_float *)0xC366F00)->v) = (u1 + -37.5f);
                t5 = ((int (*)(void))(FUN_0c0e6fe8))();
                t5 = ((int (*)(void))(FUN_0c0e6fe8))();
                return (((int (*)(void))(FUN_0c0e6fe8))());
            }
            return ((int (*)(void))(0xC031884))();
        }
        if (t4 == 2) {
            return ((int (*)(int, int, int, int, float, float, float, float))(0xC031880))(0xC366F30, t3, 0xC366F00, a7, 255.0f, 640.0f, 320.0f, -320.0f);
        }
        return ((int (*)(int, int, int, int, float, float, float, float))(0xC031884))(0xC366F30, t3, 0xC366F00, a7, 255.0f, 640.0f, 320.0f, -320.0f);
    }
    if ((*(signed char *)0xC7F31C9) == 0) {
        u0 = ((float)(*(signed char *)0xC7F31CB) / (float)(signed char)t3);
    } else {
        u1 = ((float)((*(signed char *)0xC7F31CB) - 1) / (float)(signed char)t3);
        u1 = -u1;
        u0 = (u1 + 1.0f);
    }
    (((struct oC_float *)0xC366F00)->v) = -320.0f;
    (((struct o0_float *)0xC366F00)->v) = -320.0f;
    (((struct o24_float *)0xC366F00)->v) = 320.0f;
    (((struct o18_float *)0xC366F00)->v) = 320.0f;
    (((struct o1C_float *)0xC366F00)->v) = -240.0f;
    (((struct o4_float *)0xC366F00)->v) = -240.0f;
    (((struct o28_float *)0xC366F00)->v) = 240.0f;
    (((struct o10_float *)0xC366F00)->v) = 240.0f;
    (((struct o2C_float *)0xC366F00)->v) = -1.0f;
    (((struct o20_float *)0xC366F00)->v) = -1.0f;
    (((struct o14_float *)0xC366F00)->v) = -1.0f;
    (((struct o8_float *)0xC366F00)->v) = -1.0f;
    (((struct o0_uint *)0xC366F00)->v) = (((((struct o0_int *)0xC366F00)->v)) | 0x1);
    (((struct oC_uint *)0xC366F00)->v) = (((((struct oC_int *)0xC366F00)->v)) | 0x1);
    (((struct o18_uint *)0xC366F00)->v) = (((((struct o18_int *)0xC366F00)->v)) | 0x1);
    (((struct o24_uint *)0xC366F00)->v) = (((((struct o24_int *)0xC366F00)->v)) | 0x1);
    t3 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c0e6fe8))(0xC366F30, 0xC366F00, 0xC366F18, 0xC366F0C, 255.0f, 640.0f, 320.0f, -320.0f);
    t3 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, 0x0, t0);
    t0 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(0x0, 0x0, t1);
    t0 = ((int (*)(void))(FUN_0c0e6fe8))();
    t0 = *(int *)0xC7F31CC;
    u1 = (float)((unsigned int)(t0 & 0xFF0000) >> 16);
    if ((int)((unsigned int)(t0 & 0xFF0000) >> 16) < 0) {
        u1 = ((float)((unsigned int)(t0 & 0xFF0000) >> 16) + 4.2949673e+09f);
    }
    (((struct o4_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    t0 = *(int *)0xC7F31CC;
    u1 = (float)((unsigned int)(t0 & 0xFF00) >> 8);
    if ((int)((unsigned int)(t0 & 0xFF00) >> 8) < 0) {
        u1 = ((float)((unsigned int)(t0 & 0xFF00) >> 8) + 4.2949673e+09f);
    }
    (((struct o8_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    t0 = *(int *)0xC7F31CC;
    u1 = (float)(unsigned char)t0;
    if ((int)(unsigned char)t0 < 0) {
        u1 = ((float)(unsigned char)t0 + 4.2949673e+09f);
    }
    (((struct oC_float *)(t2))->v) = ((u1 / f4) * 0.75f);
    *(float *)((t2 + 0x0)) = 1.0f;
    t0 = ((int (*)(int, float, float, float))(FUN_0c0e6fdc))(t2, f4, 0.0f, 0.75f);
    (((struct o0_float *)0xC32124C)->v) = f5;
    (((struct o20_float *)0xC32124C)->v) = f5;
    FUN_0c0dcd20(1.0f, 1.0f, 1.0f);
    nlObjPutTrnsl(0xC321238, u0);
    return ((int (*)(void))(0xC031884))();
}
