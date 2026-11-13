/* not identified yet (keep old name) (0c0276c4-0c027b90) */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o5E_uchar { char p[0x5E]; unsigned char v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o7218_uchar { char p[0x7218]; unsigned char v; };
struct o7221_uchar { char p[0x7221]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7224_uchar { char p[0x7224]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };

int FUN_0c0276c4(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x4));
    if ((unsigned int)(unsigned char)t0 < (unsigned int)0x10) {
        switch (((unsigned char)t0 << 1)) {
            default:
            {
            }
                break;
        }
        t2 = *(signed char *)((a4 + 0x3));
        (((struct o7222_uchar *)(a4))->v) = 0x0;
        (((struct o7221_uchar *)(a4))->v) = 0x0;
        (((struct o7218_uchar *)(a4))->v) = 0x0;
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x7C))) == 1) {
            (((struct o7C_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
        }
        if ((*(signed char *)((a4 + 0x71BC))) == 2) {
            if ((*(signed char *)((a4 + 0x4))) == 7) {
                return ((int (*)(int, int, int, int))(0xC027B38))(a4, t2, 0xC362E70, 0x0);
            }
            return ((int (*)(int, int, int, int))(0xC027B7C))(a4, t2, 0xC362E70, 0x0);
        }
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x4))) == 1) {
            *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0x4)) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x1;
        }
        if ((unsigned char)(*(signed char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xE))) == 1) {
            *(unsigned char *)((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xE)) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x5;
        }
        if ((unsigned char)(*(signed char *)((0x18 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o18_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x7;
        }
        if ((unsigned char)(*(signed char *)((0x22 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o22_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x3;
        }
        if ((unsigned char)(*(signed char *)((0x2C + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o2C_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x8;
        }
        if ((unsigned char)(*(signed char *)((0x36 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o36_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x2;
        }
        if ((unsigned char)(*(signed char *)((0x40 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o40_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x6;
        }
        if ((unsigned char)(*(signed char *)((0x4A + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o4A_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x4;
        }
        if ((unsigned char)(*(signed char *)((0x54 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o54_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x1;
        }
        if ((unsigned char)(*(signed char *)((0x5E + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o5E_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x2;
        }
        if ((unsigned char)(*(signed char *)((0x68 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o68_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7221_uchar *)(a4))->v) = 0x9;
        }
        if ((unsigned char)(*(signed char *)((0x72 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            (((struct o72_uchar *)(((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))->v) = 0x0;
            (((struct o7218_uchar *)(a4))->v) = 0x3;
        }
        if ((unsigned char)(*(signed char *)((0xA4 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xA0)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x1;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xA0) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xAE + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xAA)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x2;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xAA) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xB8 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xB4)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x3;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xB4) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xC2 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((0x4 + (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xBE)) + 0x0)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x4;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xBE) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x5;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xC8) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x6;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xD2) + 0x5)));
        }
        if ((unsigned char)(*(signed char *)((0xE0 + ((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70)))) == 1) {
            *(unsigned char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC) + 0x4)) = 0x0;
            (((struct o7222_uchar *)(a4))->v) = 0x7;
            (((struct o7224_uchar *)(a4))->v) = (*(signed char *)(((((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC) + 0x5)));
            return ((int (*)(int, int, int, int))(0xC027B7C))(a4, (((short)((short)(unsigned char)t2 * (short)0x190) + 0xC362E70) + 0xDC), 0xC362E70, 0x0);
        }
        return ((int (*)(int, int, int, int))(0xC027B7C))(a4, t2, 0xC362E70, 0x0);
    }
    return (unsigned char)t0;
}
