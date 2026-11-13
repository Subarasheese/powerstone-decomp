/* screen fade: start/reset/draw (full-screen coloured quad) (0c03148c-0c0318e0) */

/* named globals (symbols.txt) */
int ui_fade_draw(int a4, int a5, int a6, int a7, float f4, float f5);
extern char g_fade_state[];
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

    (((struct o4_uint *)g_fade_state)->v) = a4;
    (((struct o0_uchar *)g_fade_state)->v) = a5;
    (((struct o1_uchar *)g_fade_state)->v) = a6;
    (((struct o2_uchar *)g_fade_state)->v) = a7;
    (((struct o3_uchar *)g_fade_state)->v) = a7;
    if (((*(int *)0xC386830) != 0) && ((signed char)a6 != 0)) {
        (((struct o3_uchar *)g_fade_state)->v) = ((*(signed char *)0xC7F31CB) - 1);
    }
    if ((signed char)a5 != 0) {
        (((struct o3_uchar *)g_fade_state)->v) = ((*(signed char *)0xC7F31CB) + 0x1);
    }
    t7 = *(signed char *)0xC7F31CA;
    t8 = t7;
    if (t7 == 0) {
        (((struct o2_uchar *)g_fade_state)->v) = 0x1;
        t8 = 0x1;
    }
    return t8;
}

void ui_fade_reset(void)
{
    *(unsigned char *)0xC7F31CB = 0x0;
}

