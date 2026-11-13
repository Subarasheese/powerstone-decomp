/* Screen state machine on the record at 0xC7F2EE0 (state byte +7, step byte +8, countdown +20): runs the per-state setup, the common update calls (FUN_0c031030, FUN_0c0527a2) and, when the countdown reaches zero, moves to the next state and chains FUN_0c0dc1c0. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c031030(void);
int FUN_0c031496(int, int, int, int);
extern int FUN_0c0527a2();
int FUN_0c0a2f7a(void);
int FUN_0c0a3538(void);
int FUN_0c0d366c(void);
int FUN_0c0d3ada(void);
int FUN_0c0d4692(void);
int FUN_0c0d5292(void);
int FUN_0c0dc1c0(int, int, int);
int FUN_0c0d437a(int a4, int a5, int a6, float f4);

int FUN_0c0d437a(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t0 = (((struct oE_short *)0xC7F2EE6)->v);
                (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o0_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE6) + 0x1);
                    (((struct o1_uchar *)0xC7F2EE6)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                }
                t0 = ((int (*)(int, int, int))(FUN_0c0527a2))(0xC7F2EE7, a5, a6);
                t0 = (FUN_0c031030());
            } else {
                t1 = *(signed char *)0xC7F2EE8;
                if ((unsigned char)t1 != 0) {
                    if ((unsigned char)t1 != 1) {
                        if ((unsigned char)t1 != 2) {
                            (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
                            (((struct oE_ushort *)0xC7F2EE6)->v) = 0x10;
                            FUN_0c031496(0xFF000000, 0x0, 0x1, 0xF);
                        } else {
                            t1 = FUN_0c0d3ada();
                            if (t1 != 0) {
                                (((struct o2_uchar *)0xC7F2EE6)->v) = 0x3;
                            }
                        }
                    } else {
                        t1 = FUN_0c0d366c();
                        if (t1 == 0) {
                        } else {
                            (((struct o2_uchar *)0xC7F2EE6)->v) = 0x3;
                        }
                    }
                } else {
                    (((struct o3_uchar *)0xC7F2EE6)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F3018) + 0x1);
                }
                FUN_0c031030();
                t0 = (((int (*)(void))(FUN_0c0527a2))());
            }
            return t0;
        }
    } else {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        (((struct oE_ushort *)0xC7F2EE6)->v) = 0x708;
        FUN_0c0d5292();
    }
    if (((*(int *)0xC7F3014) & 16) != 0) {
        FUN_0c0d4692();
    }
    FUN_0c031030();
    t0 = ((int (*)(void))(FUN_0c0527a2))();
    t0 = (((struct oE_short *)0xC7F2EE6)->v);
    (((struct oE_ushort *)0xC7F2EE6)->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o1_uchar *)0xC7F2EE6)->v) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct o2_uchar *)0xC7F2EE6)->v) = 0x0;
        FUN_0c0a2f7a();
        FUN_0c0a3538();
        return FUN_0c0dc1c0(0x0, 0x0, 0x63);
    }
    return (short)(t0 - 1);
}
