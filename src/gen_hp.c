/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10A_uchar { char p[0x10A]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71DC_uchar { char p[0x71DC]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o71DE_uchar { char p[0x71DE]; unsigned char v; };
struct o7211_uchar { char p[0x7211]; unsigned char v; };
struct o7212_uchar { char p[0x7212]; unsigned char v; };
struct o7213_uchar { char p[0x7213]; unsigned char v; };
struct o7226_uchar { char p[0x7226]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct o72A8_uint { char p[0x72A8]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c0555c4(void);
int FUN_0c08d644(int, int);
int FUN_0c08d662(int);
int FUN_0c08d6aa(int, int);
int FUN_0c08dfa4(void);
int FUN_0c09b7a4(int, int);
int FUN_0c09c51e(int);
int FUN_0c09dc1c(int, int);
int FUN_0c0a2e26(int, int, int, int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c08d6ec(int a4, int a5, int a6, int a7);

int FUN_0c08d6ec(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t45;
    register int t129;
    register int t151;
    register int t130;
    register int t133;
    register int t141;
    register int t16;
    register int t17;
    int t18;
    register int t19;
    register int t178;
    register int t105;
    register int t158;
    register int t159;
    register int t160;
    int t161;

    t0 = (((struct oF4_int *)(a4))->v);
    (((struct oF8_uint *)(a5))->v) = t0;
    if (t0 == 0) {
        (((struct oF8_uint *)(a5))->v) = (*(int *)0xC338A98);
    }
    (((struct o71DC_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x103)));
    (((struct o71BD_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x100)));
    *(unsigned char *)((a5 + 0x1)) = 0x1;
    (((struct o108_uchar *)(a4))->v) = 0x1;
    (((struct o10A_uchar *)(a5))->v) = 0x1;
    (((struct o7294_uint *)(a5))->v) = ((((struct oFC_int *)(a5))->v));
    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
        (((struct o108_uchar *)(((unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
    }
    if ((((((struct o71CC_int *)(a5))->v)) != 0) && ((t16 = (((struct o71CC_int *)(a5))->v), t17 = *(signed char *)((t16 + 0x4)), t17 == 6) && (t18 = (((struct o71CC_int *)(a5))->v), t19 = *(signed char *)((0x30C + t18)), t19 == 11))) {
        (((struct o10B_uchar *)(a4))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2)));
        (((struct o108_uchar *)(a4))->v) = 0x0;
        if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
            (((struct o108_uchar *)((0xC7E40C4 + (unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0))))->v) = 0x0;
        }
        if ((int)(*(signed char *)((a5 + 0x7212))) < (int)0x20) {
            (((struct o72A8_uint *)(a5))->v) = (*(int *)((a4 + 0x30)));
        } else {
            (((struct o72A8_uint *)(a5))->v) = (FUN_0c08d662(a4));
            (((struct o7212_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x7212))) - 32);
        }
        FUN_0c08d644(a5, (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xF))));
        t178 = (FUN_0c0a2e26(a5, 0x9, 0x0, 0x0));
    } else {
        t45 = *(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2));
        (((struct o10B_uchar *)(a4))->v) = t45;
        (((struct o10B_uchar *)(a5))->v) = t45;
        if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x5))) == 2) {
            (((struct o10B_uchar *)(((unsigned short)((unsigned short)((*(signed char *)((a4 + 0x3))) & 0x1) * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x2)));
        }
        (((struct o7211_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xD)));
        (((struct o7212_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xE)));
        (((struct o7213_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xC)));
        if ((*(signed char *)((a5 + 0x7212))) == 64) {
            (((struct o7212_uchar *)(a5))->v) = 0x0;
            *(float *)(((int)stk + 8)) = 0.0f;
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 0)) = 0.0f;
            (((struct o72A8_uint *)(a5))->v) = (FUN_0c09dc1c((a5 + 0x20), ((int)stk + 0)));
        } else {
            if ((*(signed char *)((a5 + 0x7212))) == 65) {
                (((struct o7212_uchar *)(a5))->v) = 0x0;
                (((struct o72A8_uint *)(a5))->v) = (FUN_0c09dc1c((a4 + 0x20), (a5 + 0x20)));
            } else {
                if ((*(signed char *)((a5 + 0x7212))) == 66) {
                    (((struct o7212_uchar *)(a5))->v) = 0x0;
                    (((struct o72A8_uint *)(a5))->v) = (FUN_0c09dc1c((((unsigned short)((unsigned short)((-(*(signed char *)((a5 + 0x3)))) + 0x1) * (unsigned short)0x72D0) + 0xC7E40C4) + 0x20), (a5 + 0x20)));
                } else {
                    if ((int)(*(signed char *)((a5 + 0x7212))) < (int)0x20) {
                        (((struct o72A8_uint *)(a5))->v) = (*(int *)((a4 + 0x30)));
                        t105 = a5;
                    } else {
                        (((struct o72A8_uint *)(a5))->v) = (FUN_0c08d662(a4));
                        (((struct o7212_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x7212))) - 32);
                    }
                }
            }
        }
        if ((*(signed char *)((a5 + 0x4))) != 10) {
            FUN_0c08d6aa(a5, t105);
        }
        FUN_0c08d644(a5, (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0xF))));
        if ((unsigned char)(*(signed char *)((0x12 + ((((struct oF8_int *)(a5))->v))))) != 99) {
            FUN_0c0a3762((*(signed char *)((a5 + 0x3))), (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x12))));
        }
        if ((*(signed char *)((a5 + 0x4))) == 10) {
            t129 = FUN_0c0555c4();
            t151 = t129;
            if (t129 != 0) {
                t130 = (((struct o71D6_short *)(a5))->v);
                FUN_0c08dfa4();
                if ((int)((((struct o71D4_short *)(a5))->v)) >= 0) {
                    (((struct o7226_uchar *)(a5))->v) = 0x40;
                    (((struct o7228_ushort *)(a5))->v) = 0x4;
                    t133 = 0x0;
                    for (;;) {
                        if ((*(short *)((0xC1507C8 + (t133 << 1)))) == 0) {
                            return (t133 << 1);
                        }
                        t141 = *(short *)((0xC1507C8 + (t133 << 1)));
                        if (((int)((((struct o71D6_short *)(a5))->v)) <= (int)t141) && ((int)(short)t130 > (int)t141)) {
                            break;
                        }
                        t133 = (t133 + 0x1);
                    }
                    *(unsigned char *)((a5 + 0x9)) = 0x1;
                    *(unsigned char *)((a5 + 0xA)) = 0x0;
                    *(unsigned char *)((a5 + 0xD)) = 0x0;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                    *(unsigned char *)((a5 + 0xB)) = 0x0;
                    (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                    (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                    FUN_0c0a3914(a5, (t133 + 0x7));
                    t151 = (FUN_0c09b7a4(a5, 0x5));
                } else {
                    *(unsigned char *)((a5 + 0x9)) = 0x1;
                    *(unsigned char *)((a5 + 0xA)) = 0x0;
                    *(unsigned char *)((a5 + 0xD)) = 0x0;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                    *(unsigned char *)((a5 + 0xB)) = 0x0;
                    (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                    (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                    t151 = (FUN_0c09b7a4(a5, 0x5));
                }
            }
            t178 = t151;
        } else {
            FUN_0c08dfa4();
            if ((((unsigned char)(*(signed char *)((0x10 + ((((struct oF8_int *)(a5))->v))))) & 0x20) != 32) && (((t158 = *(signed char *)((a5 + 0x71F3)), t158 != 0) || (t159 = *(signed char *)((a5 + 0x7230)), (int)t159 >= (int)0x3)) && ((t160 = *(signed char *)((a5 + 0x71DD)), t160 != 23) && (t161 = (((struct o71D4_short *)(a5))->v), (int)t161 >= 0)))) {
                t178 = (FUN_0c09c51e(a5));
            } else {
                (((struct o7236_uchar *)(a5))->v) = 0x0;
                (((struct o71DE_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71DD)));
                (((struct o71DD_uchar *)(a5))->v) = (*(signed char *)((((((struct oF8_int *)(a5))->v)) + 0x0)));
                *(unsigned char *)((a5 + 0x9)) = 0x1;
                *(unsigned char *)((a5 + 0xA)) = 0x0;
                *(unsigned char *)((a5 + 0xD)) = 0x0;
                *(unsigned char *)((a5 + 0xC)) = 0x0;
                *(unsigned char *)((a5 + 0xB)) = 0x0;
                (((struct o71BB_uchar *)(a5))->v) = (*(signed char *)((a5 + 0x71BA)));
                (((struct o71BA_uchar *)(a5))->v) = 0x1B;
                (((struct o100_uchar *)(a5))->v) = 0x0;
                t178 = 0x100;
            }
        }
    }
    return t178;
}
