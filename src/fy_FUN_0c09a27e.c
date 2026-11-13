/* INLINE-ASM: the original copies 208 bytes through the library routine at 0xC0E7080 (r0 = byte count, r1 = destination, r2 = source), a register convention C cannot express and a call the checker must see as a call */
/* Camera follow step for an object: builds the view matrix, aims the camera at the object (two yaw/pitch angle pairs from FUN_0c0df400 of the transformed points), limits the correction to +-1092 and the resulting angles to the ranges in the 208-byte limit table indexed by the type byte at +4, then applies the rotations. */
struct V { float x, y, z; };
struct F {
    unsigned char *p0;
    unsigned char *p4;
    float f8, f12, f16, f20, f24, f28;
    int t[52];
    int A[2];
    int pad248;
    int B[2];
    int pad260;
    unsigned char m264[64];
    unsigned char m328[64];
    struct V v392;
    struct V v404;
    struct V v416;
};
#pragma inline_asm(mvn208)
static void mvn208(void *d, void *s)
{
    MOV.L L1,R3
    MOV.W L2,R0
    MOV R4,R1
    JSR @R3
    MOV R5,R2
    BRA L3
    NOP
    .ALIGN 4
L1: .DATA.L H'0C0E7080
L2: .DATA.W H'00D0
L3: NOP
}
extern void FUN_0c0e7080(void);
extern void FUN_0c0e1240(unsigned char *);
extern void FUN_0c0e0ae0(unsigned char *);
extern void FUN_0c0e2140(unsigned char *);
extern void FUN_0c0e2050(unsigned char *);
extern void nlRotateAX(int);
extern void nlRotateAY(int);
extern void nlCalcPoint(struct V *, struct V *);
extern void nlInvertMatrix(int);
extern void FUN_0c06206e(struct V *, struct V *, struct V *);
extern void FUN_0c062210(struct V *, unsigned char *);
extern void FUN_0c0620dc(struct V *);
extern void FUN_0c062242(unsigned char *, struct V *);
extern float FUN_0c0df340(float);
extern int FUN_0c0df400(float, float);

void FUN_0c09a27e(unsigned char *o)
{
    struct F f;
    unsigned char *m;
    unsigned char *r13;
    unsigned char *p;
    int *T;
    float sq;
    int v;

    f.p4 = *(unsigned char **)(o + 28);
    f.v416 = *(struct V *)0xC150B74;
    f.v404 = *(struct V *)0xC150B80;
    m = o + 768 + (short)((signed char)o[0x71F1] * 3520);
    f.p0 = m + 528;
    r13 = m + 704;
    mvn208(f.t, (void *)0xC150B8C);
    *(struct V *)(0xC439EA8 + (signed char)(o[3] * 12)) = *(struct V *)(r13 + 84);
    FUN_0c0e1240(f.p0);
    f.v392.x = 0;
    f.v392.y = 0;
    f.v392.z = 0;
    nlCalcPoint(&f.v392, &f.v416);
    f.v392.x = 0;
    f.v392.y = 0;
    f.v392.z = 100.0f;
    nlCalcPoint(&f.v392, &f.v404);
    FUN_0c06206e(&f.v392, &f.v404, &f.v416);
    f.f24 = f.v392.x;
    f.f28 = f.v392.z;
    sq = f.v392.z * f.v392.z + f.v392.x * f.f24;
    f.B[0] = FUN_0c0df400(f.v392.y, FUN_0c0df340(sq));
    FUN_0c0e1240(f.p0);
    FUN_0c0e2140(r13 + 152);
    nlRotateAX(f.B[0]);
    FUN_0c0e2050(r13 + 108);
    FUN_0c0e0ae0(f.m264);
    if (o[0x7232] == 0 && *(signed char *)0xC7F300B == 0 && *(signed char *)0xC7F300E == 0 && *(signed char *)0xC7F3078 == 0) {
        nlInvertMatrix(0);
        FUN_0c0e0ae0(f.m328);
        f.v404.y = 0;
        f.v404.x = 0;
        f.v404.z = 100.0f;
        FUN_0c062210(&f.v404, r13);
        FUN_0c062210(&f.v404, f.m328);
        FUN_0c0620dc(&f.v404);
        f.B[1] = -FUN_0c0df400(-f.v404.x, f.v404.z) + 0x10000;
        f.f16 = f.v404.x;
        f.f20 = f.v404.z;
        sq = f.v404.z * f.v404.z + f.v404.x * f.f16;
        f.B[0] = FUN_0c0df400(-f.v404.y, FUN_0c0df340(sq));
        if (f.B[0] & 0x8000)
            f.B[0] |= 0xFFFF0000;
        else
            f.B[0] &= 0x7FFF;
        if (f.B[1] & 0x8000)
            f.B[1] |= 0xFFFF0000;
        else
            f.B[1] &= 0x7FFF;
        p = f.p4;
        FUN_0c062242(p + 768 + (short)((signed char)p[0x71F2] * 3520) + 528, &f.v416);
        f.v416.y = f.v416.y - 20.0f;
        FUN_0c062210(&f.v416, f.m328);
        FUN_0c0620dc(&f.v416);
        f.A[1] = -FUN_0c0df400(-f.v416.x, f.v416.z) + 0x10000;
        f.f8 = f.v416.x;
        f.f12 = f.v416.z;
        sq = f.v416.z * f.v416.z + f.v416.x * f.f8;
        f.A[0] = FUN_0c0df400(-f.v416.y, FUN_0c0df340(sq));
        if (f.A[0] & 0x8000)
            f.A[0] |= 0xFFFF0000;
        else
            f.A[0] &= 0x7FFF;
        if (f.A[1] & 0x8000)
            f.A[1] |= 0xFFFF0000;
        else
            f.A[1] &= 0x7FFF;
        f.A[0] = f.A[0] - f.B[0];
        f.A[1] = f.A[1] - f.B[1];
        if (f.A[0] < -1092)
            f.A[0] = -1092;
        else if (f.A[0] > 1092)
            f.A[0] = 1092;
        if (f.A[1] < -1092)
            f.A[1] = -1092;
        else if (f.A[1] > 1092)
            f.A[1] = 1092;
        *(int *)(r13 + 88) = (unsigned short)(f.B[1] + f.A[1]);
        *(int *)(r13 + 84) = (unsigned short)(f.B[0] + f.A[0]);
        *(int *)(r13 + 92) = 0;
        T = (int *)((unsigned char *)f.t + ((signed char)o[4] << 4));
        v = *(int *)(r13 + 88);
        if (v > T[0] && v < 0x8000)
            *(int *)(r13 + 88) = T[0];
        else if (v < T[1] && v > 0x8000)
            *(int *)(r13 + 88) = T[1];
        v = *(int *)(r13 + 84);
        if (v > T[2] && v < 0x8000)
            *(int *)(r13 + 84) = T[2];
        else if (v < T[3] && v > 0x8000)
            *(int *)(r13 + 84) = T[3];
    }
    FUN_0c0e1240(f.m264);
    nlRotateAY(*(int *)(r13 + 88));
    nlRotateAX(*(int *)(r13 + 84));
    FUN_0c0e0ae0(r13);
}
