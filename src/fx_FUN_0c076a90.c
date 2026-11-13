/* Object state step (mirror of FUN_0c06924c: negated velocities, extra helper calls) */
struct v3 { int x, y, z; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int FUN_0c08deec(int, int);
int FUN_0c08eba8(int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a910(int);
int FUN_0c09d990(int);
int FUN_0c09d9bc(int);
int FUN_0c09e7b8(int);
int FUN_0c0a3762(int, int);
int FUN_0c0a3914(int, int);
int FUN_0c0dc18e(int, int);
float FUN_0c0df4d0(int);
float FUN_0c0dfa50(int);
int FUN_0c076a90(int a4);
int FUN_0c076a90(int a4)
{
    register int t0;
    register int t1;

    FUN_0c09a910(a4);
    *(struct v3 *)((*(int *)(a4 + 0x1C)) + 0x20) = *(struct v3 *)(a4 + 0x20);
    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)((t0 - 1) + 0x1) <= 0) {
        (((struct o7248_uint *)(a4))->v) = (unsigned short)(((((struct o7248_short *)(a4))->v)) + 0x160);
        t0 = (((struct o7248_short *)(a4))->v);
        t1 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(t1 + t0);
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((unsigned short)(t1 + t0) + 0x8000);
    }
    t0 = FUN_0c09e7b8(a4);
    if ((signed char)t0 != 0) {
        FUN_0c0dc18e(0xA, 0xA);
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(int *)((a4 + 0x30)));
        FUN_0c09a808(a4, 0x4, 0x4);
        (((struct o71A9_uchar *)(a4))->v) = 0x1;
        (((struct o71A8_uchar *)(a4))->v) = 0x1;
        FUN_0c0a3762(((-(*(signed char *)((a4 + 0x3)))) + 0x1), 0x3);
        FUN_0c0a3914((*(int *)((a4 + 0x1C))), 0xC);
        FUN_0c08eba8(a4, 0x32);
        FUN_0c08deec(a4, 0x32);
        (((struct o3C_float *)(a4))->v) = ((((struct o0_float *)0xC076C00)->v));
        (((struct o48_float *)(a4))->v) = ((((struct o4_float *)0xC076C00)->v));
        (((struct o38_float *)(a4))->v) = (-((FUN_0c0df4d0(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC076C00)->v))));
        (((struct o40_float *)(a4))->v) = (-((FUN_0c0dfa50(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * ((((struct o10_float *)0xC076C00)->v))));
        t0 = *(signed char *)((a4 + 0xA));
        *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    FUN_0c09d990(a4);
    return FUN_0c09d9bc(a4);
}

