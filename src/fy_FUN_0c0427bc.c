/* Spawns an effect at position *p every few frames: skips unless n is a multiple of a period looked up by idx, then rotates a copy of p by a table entry chosen by the frame counter at 0xC7F3014 (FUN_0c062050), creates the effect object with FUN_0c042f48 and sets its speed (+780) to n/2 (capped at 2.0, or 3.0 when n is 0) and four scale floats of its sub-object (+736) to 1.0. */
struct V3 { int a, b, c; };
struct Sub { char pad[64]; float s0, s1, s2, s3; };
struct Eff { char pad0[736]; struct Sub *sub; char pad1[780 - 740]; float speed; };
void FUN_0c062050(struct V3 *dst, struct V3 *src, int rot);
struct Eff *FUN_0c042f48(int a, int b, int c, struct V3 *p, int e, int f);
void FUN_0c0427bc(struct V3 *p, int unused, unsigned short n, signed char idx)
{
    struct V3 loc;
    struct Eff *e;
    float v;
    if ((unsigned short)n % *(signed char *)(0xC14A284 + *(signed char *)(0xC7E40C8 + (unsigned short)((unsigned short)(signed char)idx * (unsigned short)0x72D0))) != 0)
        return;
    loc = *p;
    FUN_0c062050(&loc, &loc, 0xC14A1C4 + (signed char)((*(int *)0xC7F3014 >> 1 & 7) * 12));
    e = FUN_0c042f48(2, 1, 1, &loc, 0xC149DD0, 0xC14A224 + (signed char)((*(char *)0xC7F3014 & 3) * 12));
    if (e == 0)
        return;
    if (n == 0) {
        e->speed = 3.0f;
    } else {
        v = (float)(int)n / 2.0f;
        e->speed = v;
        if (v > 2.0f)
            e->speed = 2.0f;
    }
    e->sub->s0 = 1.0f;
    e->sub->s1 = 1.0f;
    e->sub->s2 = 1.0f;
    e->sub->s3 = 1.0f;
}
