/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C_float { char p[0x3C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int FUN_0c046830(int, int, int, int, int, int, int, int);
int FUN_0c059330(int, int, int, int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a2080(int);
int FUN_0c0a2e26(int, int, int);
int FUN_0c0c339a(int);
int FUN_0c0c3500(int);
int FUN_0c0c3b58(int);
int FUN_0c0c49e0(int);
int FUN_0c0c4afa(int);
int FUN_0c0c4b82(int);
int FUN_0c0c4c48(int a4, int a5, int a6, int a7);
int FUN_0c06a2bc(int a4);

int FUN_0c0c4c48(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t8;
    register int t31;

    t0 = *(int *)((a4 + 0x1C));
    if (t0 == 0) {
        return FUN_0c059330(a4, a5, a6, a7);
    }
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    t2 = *(signed char *)((a4 + 0x8));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c059330(a4, a5, a6, a7);
        }
        if ((*(signed char *)((t0 + 0x71F1))) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
        t8 = *(signed char *)((a4 + 0x9));
        switch (t8) {
        case 0:
            FUN_0c0c3500(a4);
            FUN_0c0c3b58(a4);
            break;
        case 1:
            FUN_0c0c49e0(a4);
            break;
        case 2:
            FUN_0c0c3500(a4);
            FUN_0c0c4afa(a4);
            break;
        case 3:
            FUN_0c0c3500(a4);
            FUN_0c0c4b82(a4);
            break;
        default:
            FUN_0c0c3500(a4);
            FUN_0c0c3b58(a4);
            break;
        }
        return FUN_0c0c339a(a4);
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(a4))->v) = 0x3C;
    if ((*(signed char *)((t0 + 0x71F1))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    t31 = *(signed char *)((a4 + 0x9));
    switch (t31) {
    case 0:
        FUN_0c0c3500(a4);
        FUN_0c0c3b58(a4);
        break;
    case 1:
        FUN_0c0c49e0(a4);
        break;
    case 2:
        FUN_0c0c3500(a4);
        FUN_0c0c4afa(a4);
        break;
    case 3:
        FUN_0c0c3500(a4);
        FUN_0c0c4b82(a4);
        break;
    default:
        FUN_0c0c3500(a4);
        FUN_0c0c3b58(a4);
        break;
    }
    return FUN_0c0c339a(a4);
}

int FUN_0c06a2bc(int a4)
{
    register int t0;
    register int t1;

    if (!(((((struct o3C_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c09e7b8(a4);
        if ((signed char)t0 != 0) {
            return FUN_0c0a2e26(a4, 0x6, 0x0);
        }
    }
    FUN_0c09d990(a4);
    FUN_0c09d9bc(a4);
    t0 = (((struct oF0_short *)(a4))->v);
    (((struct oF0_ushort *)(a4))->v) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 3) {
        if ((*(signed char *)((a4 + 0x71F1))) == 0) {
            t0 = 0xC14EECC;
            t1 = 0xC14EEC0;
        } else {
            t0 = 0xC14EEE4;
            t1 = 0xC14EED8;
        }
        FUN_0c046830((*(signed char *)((a4 + 0x3))), 0x1, 0x5, 0x1, 0x14, 0x52, t1, t0);
    }
    t0 = FUN_0c09a910(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c0a2080(a4);
    }
    return (signed char)t0;
}
