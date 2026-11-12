/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int FUN_0c014c8c(int, int, int);
int FUN_0c04add0(int, int, int);
int FUN_0c04ae50(int, int, int, float, float, float);
int FUN_0c059330(int, int, int, int);
float FUN_0c0df940(void);
int FUN_0c0e6f24(void);
int FUN_0c04aeec(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c014426(int a4, int a5, int a6, int a7);

int FUN_0c04aeec(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    *(float *)0xC321FC0 = ((*(float *)0xC321FC0) - 0.099999994f);
    if (!((*(float *)0xC321FC0) > 0.0f)) {
        *(float *)0xC321FC0 = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c059330(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = (*(short *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x2)));
    }
    t0 = a4;
    t1 = 0x0;
    u0 = 0.099999994f;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t0 = ((((struct oF0_short *)(a4))->v));
        t0 = (signed char)(FUN_0c04ae50(t0, (*(signed char *)((t1 + (*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x4)))))), ((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x1C), f4, f5, f6));
        if (t0 != 0) {
            t0 = ((((struct oF0_short *)(a4))->v));
            t0 = (signed char)(FUN_0c04add0(t0, (*(signed char *)((t1 + (*(int *)((((((*(signed char *)((a4 + 0x4))) << 2) << 1) + 0xC321F98) + 0x4)))))), ((*(int *)((((0x2E0 + a4) + t2) + 0x0))) + 0x40)));
        }
        t3 = 0x2E0;
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t4 = *(int *)((t3 + 0x0));
        t3 = 0x2E0;
        *(unsigned char *)((t4 + 0x0)) = t0;
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t4 = *(int *)((t3 + 0x0));
        u0 = ((((struct o1C_float *)(t4))->v));
        u0 = (u0 / 10.0f);
        (((struct o1C_float *)(t4))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = ((((struct o20_float *)(t3))->v));
        u0 = (u0 / 10.0f);
        (((struct o20_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = ((((struct o24_float *)(t3))->v));
        u0 = (u0 / 10.0f);
        (((struct o24_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        t1 = (t1 + 0x1);
        u0 = (*(float *)0xC321FC0);
        (((struct o44_float *)(t3))->v) = u0;
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        u0 = (*(float *)0xC321FC0);
        (((struct o48_float *)(t3))->v) = u0;
        u0 = (*(float *)0xC321FC0);
        t3 = (*(int *)((((0x2E0 + a4) + t2) + 0x0)));
        (((struct o4C_float *)(t3))->v) = u0;
    }
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = 0xF2;
    if ((int)(short)((t0 + 0x1) - 1) >= (int)((((struct oF2_short *)(a4))->v))) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c014426(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) != 0) {
        } else {
            t2 = *(signed char *)((a4 + 0x4));
            switch (t2) {
            case 0:
                FUN_0c0df940();
                t2 = FUN_0c0e6f24();
                t3 = 0x8;
                if (t2 != 0) {
                    t3 = 0x7;
                }
                FUN_0c014c8c(0x9, 0x0, t3);
                FUN_0c0df940();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x3);
                break;
            case 1:
                FUN_0c014c8c(0x9, 0x1, 0x8);
                FUN_0c0df940();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            case 2:
                FUN_0c014c8c(0x9, 0x1, 0x5);
                FUN_0c0df940();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            case 3:
                FUN_0c014c8c(0xC, 0x0, 0x4);
                FUN_0c0df940();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x8);
                break;
            case 4:
                FUN_0c014c8c(0xD, 0x0, 0x8);
                FUN_0c0df940();
                (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
                break;
            }
        }
        if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t0 = (((struct o2_short *)0xC7F3040)->v), t0 == 0)) {
            t2 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        return t2;
    }
    (((struct oEC_ushort *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = *(signed char *)((a4 + 0x4));
        switch (t0) {
        case 0:
            FUN_0c0df940();
            t0 = FUN_0c0e6f24();
            t2 = 0x8;
            if (t0 != 0) {
                t2 = 0x7;
            }
            FUN_0c014c8c(0x9, 0x0, t2);
            FUN_0c0df940();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x3);
            break;
        case 1:
            FUN_0c014c8c(0x9, 0x1, 0x8);
            FUN_0c0df940();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        case 2:
            FUN_0c014c8c(0x9, 0x1, 0x5);
            FUN_0c0df940();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        case 3:
            FUN_0c014c8c(0xC, 0x0, 0x4);
            FUN_0c0df940();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0x8);
            break;
        case 4:
            FUN_0c014c8c(0xD, 0x0, 0x8);
            FUN_0c0df940();
            (((struct oEC_ushort *)(a4))->v) = ((FUN_0c0e6f24()) + 0xA);
            break;
        }
    }
    if ((((((struct o0_short *)0xC7F3040)->v)) == 0) && (t1 = (((struct o2_short *)0xC7F3040)->v), t1 == 0)) {
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
