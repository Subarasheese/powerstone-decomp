/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c019d1c(int, int, int, int);
int FUN_0c01a190(int);
int FUN_0c01a336(int);
extern int FUN_0c01a3c2();
int FUN_0c01a3ee(int);
int FUN_0c01d0a6(void);
int FUN_0c058f4e(void);
int FUN_0c0593e0(int);
int FUN_0c05948c(int);
int FUN_0c05f2d4(int, int);
int FUN_0c060c88(int);
int FUN_0c0a3796(int, int);
int FUN_0c0d8e6e(int, int, int);
int FUN_0c019bfe(int a4, int a5, int a6, int a7);

int FUN_0c019bfe(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC362328;
    switch (t0) {
    case 0:
        (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) + 0x1);
        FUN_0c05f2d4(0x3, 0x0);
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        FUN_0c058f4e();
        FUN_0c0d8e6e(0x1C, 0x0, 0xF0);
        FUN_0c060c88(0xE);
        FUN_0c01a336(0x0);
        t0 = *(signed char *)0xC362329;
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = FUN_0c01a3ee(0x10);
                if ((signed char)t0 != 0) {
                    FUN_0c0a3796(0x0, 0x4B);
                    t0 = *(signed char *)0xC36232E;
                    (((struct o6_uchar *)0xC362328)->v) = (t0 - 1);
                    if ((int)(signed char)(t0 - 1) < 0) {
                        (((struct o6_uchar *)0xC362328)->v) = 0x2;
                    }
                } else {
                    t0 = FUN_0c01a3ee(0x20);
                    if ((signed char)t0 != 0) {
                        FUN_0c0a3796(0x0, 0x4B);
                        (((struct o6_uchar *)0xC362328)->v) = (*(signed char *)0xC36232E + 1) % 3;
                    }
                }
                t0 = FUN_0c01a3ee(0x4);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) + 0x1);
                    (((struct o1_uchar *)0xC362328)->v) = 0x0;
                    FUN_0c0a3796(0x0, 0x4D);
                } else {
                    t0 = FUN_0c01a3ee(0x2);
                    if ((signed char)t0 != 0) {
                        FUN_0c01d0a6();
                        FUN_0c0a3796(0x0, 0x4D);
                    }
                }
            }
        } else {
            (((struct o1_uchar *)0xC362328)->v) = ((*(signed char *)0xC362329) + 0x1);
            t0 = ((int (*)(int))(FUN_0c01a3c2))(0xF);
            FUN_0c01a190(0x1);
        }
        break;
    case 1:
        t0 = *(signed char *)0xC362329;
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = FUN_0c01a3ee(0x10);
                if ((signed char)t0 != 0) {
                    FUN_0c0a3796(0x0, 0x4B);
                    t0 = *(signed char *)0xC36232E;
                    (((struct o6_uchar *)0xC362328)->v) = (t0 - 1);
                    if ((int)(signed char)(t0 - 1) < 0) {
                        (((struct o6_uchar *)0xC362328)->v) = 0x2;
                    }
                } else {
                    t0 = FUN_0c01a3ee(0x20);
                    if ((signed char)t0 != 0) {
                        FUN_0c0a3796(0x0, 0x4B);
                        (((struct o6_uchar *)0xC362328)->v) = (*(signed char *)0xC36232E + 1) % 3;
                    }
                }
                t0 = FUN_0c01a3ee(0x4);
                if ((signed char)t0 != 0) {
                    (((struct o0_uchar *)0xC362328)->v) = ((*(signed char *)0xC362328) + 0x1);
                    (((struct o1_uchar *)0xC362328)->v) = 0x0;
                    FUN_0c0a3796(0x0, 0x4D);
                } else {
                    t0 = FUN_0c01a3ee(0x2);
                    if ((signed char)t0 != 0) {
                        FUN_0c01d0a6();
                        FUN_0c0a3796(0x0, 0x4D);
                    }
                }
            }
        } else {
            (((struct o1_uchar *)0xC362328)->v) = ((*(signed char *)0xC362329) + 0x1);
            t0 = ((int (*)(int, int, int, int))(FUN_0c01a3c2))(0xF, a5, a6, a7);
            FUN_0c01a190(0x1);
        }
        break;
    case 2:
        FUN_0c019d1c(0xC362328, a5, a6, a7);
        break;
    }
    FUN_0c05948c(0x5);
    return FUN_0c0593e0(0x5);
}
