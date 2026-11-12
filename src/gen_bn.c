/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C_float { char p[0x3C]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c01015c(void);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c05cdb2(int);
int FUN_0c05d1cc(void);
int FUN_0c079f68(int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09da1c(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2080(int);
int FUN_0c077750(int a4);
int FUN_0c05cd68(int a4);
int FUN_0c06d3d4(int a4);
int FUN_0c06e37e(int a4);

int FUN_0c077750(int a4)
{
    register int t3;

    FUN_0c079f68(a4);
    if (((((struct oEE_short *)(a4))->v)) != 0) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) - 1);
    } else {
        t3 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t3 - 1);
        if ((int)(short)(t3 - 1) >= 0) {
            FUN_0c09d990(a4);
            FUN_0c09d9bc(a4);
        }
    }
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}

int FUN_0c05cd68(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0555dc();
    if (t0 != 0) {
        return FUN_0c059330(a4);
    }
    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 != 0) {
        if (t0 != 3) {
        } else {
            FUN_0c05d1cc();
        }
    } else {
        FUN_0c05cdb2(a4);
    }
    t0 = *(signed char *)((a4 + 0xD));
    t1 = t0;
    if (t0 != -1) {
        t0 = *(signed char *)((a4 + 0xD));
        *(unsigned char *)(((0xC7F2974 + t0) + 0x0)) = 0x1;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06d3d4(int a4)
{
    register int t2;

    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    t2 = FUN_0c09e7b8(a4);
    if ((signed char)t2 != 0) {
        (((struct o3C_float *)(a4))->v) = 0.0f;
    }
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}

int FUN_0c06e37e(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x71F1))) != 0) {
        t1 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t1 + 0x1);
        if ((short)(t1 + 0x1) == 10) {
            *(volatile signed char *)((a4 + 0x3));
            FUN_0c01015c();
        }
    }
    FUN_0c09a910(a4);
    FUN_0c09da1c(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return FUN_0c0a2080(a4);
    }
    return 0x71AA;
}
