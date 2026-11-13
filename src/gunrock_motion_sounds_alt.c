/* tail of the Gunrock (char 4) block: motion sound table and effect-at-frame helper (0c07a1e4-0c07ac0c) */

struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };

int pl_set_effect_at_frame(int a4, int a5, int a6, int a7)
{
    if ((unsigned short)((((struct o719E_short *)(a4))->v)) == (unsigned char)a5) {
        if ((signed char)a6 != 0) {
            if ((signed char)a6 != 1) {
                if ((signed char)a6 != 2) {
                    if ((signed char)a6 != 3) {
                        if ((signed char)a6 != 4) {
                            if ((signed char)a6 != 5) {
                                return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
                            }
                            *(volatile signed char *)(((*(int *)((a4 + 0x1C))) + 0x71F1));
                            return ((int (*)(int, int, int, int))(0xC07ABF8))(a4, (unsigned char)a5, a6, a7);
                        }
                        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
                            (((struct o710A_uchar *)(a4))->v) = a7;
                            return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
                    }
                    (((struct o710B_uchar *)((*(int *)((a4 + 0x1C)))))->v) = a7;
                    (((struct o710C_uchar *)((*(int *)((a4 + 0x1C)))))->v) = a7;
                    return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
                }
                (((struct o710B_uchar *)(a4))->v) = a7;
            }
            (((struct o710C_uchar *)(a4))->v) = a7;
            return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
        }
        (((struct o710B_uchar *)(a4))->v) = a7;
        return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07AC02))(a4, (unsigned char)a5, a6, a7);
}
