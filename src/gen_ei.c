/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c094d8a(int);
int FUN_0c094dba(int);
int FUN_0c0a22d6(int);
int FUN_0c0a2490(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c094eac(int a4, int a5, int a6, int a7);

int FUN_0c094eac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t2 = FUN_0c0a22d6(a4);
    if ((signed char)t2 != 0) {
        t2 = FUN_0c0a2490(a4);
        if ((signed char)t2 == 0) {
            if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u0 = (((struct o274_float *)(a4))->v), !(u0 > 0.0f)) && (t0 = *(signed char *)((a4 + 0x2D9)), t0 != 2))) {
                (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
                t0 = (((struct oF2_short *)(a4))->v);
                (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) > (int)0xA) {
                    return FUN_0c0a2e26(a4, 0x5, 0x6);
                }
            } else {
                (((struct o71E8_float *)(a4))->v) = 0.0f;
                (((struct oF2_ushort *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0xB));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC094E44))(a4, a5, a6, a7);
                }
                return FUN_0c094dba(a4);
            }
            return FUN_0c094d8a(a4);
        }
        return (signed char)t2;
    }
    if (((*(signed char *)((a4 + 0x71BC))) != 2) && ((u1 = (((struct o274_float *)(a4))->v), !(u1 > 0.0f)) && (t1 = *(signed char *)((a4 + 0x2D9)), t1 != 2))) {
        (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
        t0 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xA) {
            return FUN_0c0a2e26(a4, 0x5, 0x6);
        }
    } else {
        (((struct o71E8_float *)(a4))->v) = 0.0f;
        (((struct oF2_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC094E44))(a4, a5, a6, a7);
        }
        return FUN_0c094dba(a4);
    }
    return FUN_0c094d8a(a4);
}
