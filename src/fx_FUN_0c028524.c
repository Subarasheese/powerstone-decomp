/* Keyframe mover: walks a table of 40-byte keyframes (selected by byte +10 through the pointer table at 0xC321074) for the object at +736, easing its position (+4), rotation (+16), scale (+28/+32) and deltas (+40.., +52.., +80, +84) from key to key, with per-key flag effects (wobble, shake, fade, call FUN_0c02a9bc); ends with FUN_0c059330 at the -1 key. */
typedef struct { int a, b, c; } S12;
typedef struct { float x, y, z; } V3;
typedef struct { int x, y, z; } I3;
extern void FUN_0c06206e(V3 *, V3 *, V3 *);
extern void FUN_0c0622e0(I3 *, I3 *, I3 *);
extern void FUN_0c062050(V3 *, V3 *, V3 *);
extern void FUN_0c0622c6(I3 *, I3 *, I3 *);
extern void FUN_0c02a9bc(float);
extern int FUN_0c059330(void *);

#define ST (*(signed char *)(e + 8))
#define S236 (*(short *)(e + 236))
#define S238 (*(short *)(e + 238))
#define S240 (*(short *)(e + 240))
#define S242 (*(short *)(e + 242))
#define ROW(i) (t + 40 * (i))
#define PF(o) (*(float *)(p + (o)))
#define EF(o) (*(float *)(e + (o)))

void FUN_0c028524(char *e)
{
    char *t;
    char *p;
    float k = 0.8333333134651184f;
    float f14, d, fv;
    short j;
    int flags, s;

    t = *(char **)(0xC321074 + 4 * (signed char)e[10]);
    p = *(char **)(e + 736);
    if (ST == 0) {
        ST = ST + 1;
        *(S12 *)(p + 4) = *(S12 *)(t + 8);
        *(S12 *)(p + 16) = *(S12 *)(t + 20);
        PF(28) = *(float *)(t + 32);
        PF(32) = *(float *)(t + 36);
        PF(36) = 1.0f;
        S236 = 0;
        S240 = 0;
        S238 = 0;
        S242 = 0;
        EF(68) = 0.0f;
    }
    S240 = S240 + 1;
    S242 = S242 + 1;
    if (S240 >= S236) {
        S238 = S238 + 1;
        if (*(int *)ROW(S238) == 0) {
            *(S12 *)(p + 4) = *(S12 *)(ROW(S238) + 8);
            *(S12 *)(p + 16) = *(S12 *)(ROW(S238) + 20);
            PF(28) = *(float *)(ROW(S238) + 32);
            PF(32) = *(float *)(ROW(S238) + 36);
            S238 = S238 + 1;
        }
        if (*(int *)ROW(S238) == -1) {
            FUN_0c059330(e);
            return;
        }
        S240 = 0;
        if (*(int *)0xC386830 != 0) {
            S236 = (int)(((float)*(int *)ROW(S238) + EF(68)) * k);
            EF(68) = ((float)*(int *)ROW(S238) + EF(68)) - (float)S236 / k;
        } else {
            S236 = *(int *)ROW(S238);
        }
        f14 = (float)S236;
        j = S238;
        FUN_0c06206e((V3 *)(p + 40), (V3 *)(ROW(j) + 8), (V3 *)(ROW(j - 1) + 8));
        PF(40) = PF(40) / f14;
        PF(44) = PF(44) / f14;
        PF(48) = PF(48) / f14;
        j = S238;
        FUN_0c0622e0((I3 *)(p + 52), (I3 *)(ROW(j) + 20), (I3 *)(ROW(j - 1) + 20));
        *(int *)(p + 52) = (int)((float)*(int *)(p + 52) / f14);
        *(int *)(p + 56) = (int)((float)*(int *)(p + 56) / f14);
        *(int *)(p + 60) = (int)((float)*(int *)(p + 60) / f14);
        EF(80) = *(float *)(ROW(S238) + 32) - *(float *)(ROW(S238 - 1) + 32);
        EF(84) = *(float *)(ROW(S238) + 36) - *(float *)(ROW(S238 - 1) + 36);
        EF(80) = EF(80) / f14;
        EF(84) = EF(84) / f14;
    }
    FUN_0c062050((V3 *)(p + 4), (V3 *)(p + 4), (V3 *)(p + 40));
    FUN_0c0622c6((I3 *)(p + 16), (I3 *)(p + 16), (I3 *)(p + 52));
    PF(28) = PF(28) + EF(80);
    PF(32) = PF(32) + EF(84);
    if (*(int *)(ROW(S238) + 4) & 1) {
        s = (S242 & 1) ? -1 : 1;
        PF(4) = PF(4) + 2.0f * ((float)(S242 & 2) * (float)s);
    }
    if (*(int *)(ROW(S238) + 4) & 2) {
        s = (S242 & 2) ? -1 : 1;
        PF(8) = PF(8) + 1.0f * ((float)(S242 & 4) * (float)s);
    }
    if (*(int *)(ROW(S238) + 4) & 4) {
        s = (S242 & 4) ? -1 : 1;
        PF(28) = PF(28) + 0.03999999910593033f * (float)s;
    }
    if (*(int *)(ROW(S238) + 4) & 8) {
        s = (S242 & 4) ? -1 : 1;
        PF(32) = PF(32) + 0.03999999910593033f * (float)s;
    }
    if (*(int *)(ROW(S238) + 4) & 64) {
        fv = (float)*(int *)ROW(S238 - 1);
        d = fv;
        if (*(int *)0xC386830 != 0) {
            d = d * k;
        }
        *(short *)(e + 6) = *(short *)(e + 6) | 512;
        EF(96) = -((float)S240 / d) + 1.0f;
        EF(104) = EF(96);
        EF(100) = EF(96);
    }
    if (*(int *)(ROW(S238) + 4) & 128) {
        if (!(S242 & 2)) {
            FUN_0c02a9bc(PF(8) + -200.0f);
        }
    }
    PF(152) = PF(28);
    if (1.0f > PF(152)) {
        PF(152) = 1.0f;
    }
    if (PF(32) > PF(152)) {
        PF(152) = PF(32);
    }
}
