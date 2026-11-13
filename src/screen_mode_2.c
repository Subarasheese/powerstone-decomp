/* mode init helper (clears records (0c0d7108-0c0d71f4) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int ui_fade_reset(void);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int gfx_set_background_color(int, int, int);
int memset(int, int, int);

int FUN_0c0d7108(float f4)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return ((int (*)(void))(0xC0CD028))();
        }
    } else {
        gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
        (((struct oD_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oC_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oB_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct oA_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o9_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o8_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o7_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o6_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o5_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o4_uchar *)0xC7F2EE0)->v) = 0x0;
        (((struct o0_uchar *)0xC7F2EE0)->v) = 0x1;
        ui_fade_reset();
        memset(0xC7F31A0, 0x0, 0x6);
        memset(0xC7F31A6, 0x0, 0x6);
        (((struct o0_uchar *)0xC7F31AC)->v) = 0x0;
        (((struct o1_uchar *)0xC7F31AC)->v) = 0x0;
        (((struct o2_uchar *)0xC7F31AC)->v) = 0x0;
        res_switch_scene(0x1);
    }
    (((struct o28_float *)0xC7F31AC)->v) = 1.0f;
    (((struct o2C_float *)0xC7F31AC)->v) = 0.0f;
    (((struct o30_float *)0xC7F31AC)->v) = 0.0f;
    (((struct o38_float *)0xC7F31AC)->v) = 1.0f;
    (((struct o3C_float *)0xC7F31AC)->v) = 0.0f;
    *(float *)0xC7F31EC = 0.0f;
    (((struct o0_uchar *)0xC7F2EE0)->v) = 0x2;
    return FUN_0c05f2d4(0x0, 0x0);
}
