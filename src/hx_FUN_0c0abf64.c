/* Picks the object a fighter can grab or pick up (stored at +0x71C8, and the object's "seen by" flag +0x310 + side is
   raised): walks the stage object list (*0x0C7E4078, linked through +0x18) and the item list (*0x0C7E407C, kind 6) and
   keeps the nearest that is in reach: carried weapons by type (0x0C33BFD8 table, 10 bytes per type; heavy weapons only
   for big characters 4/5/9, small ones not for 3/6/7) within 300 of the fighter's hand (FUN_0c062242, FUN_0c0e2340 =
   vector length) when held, else lying within 100 in height and 200 (100 more for type 2) on the ground; boxes (kind 2,
   150 when crouching else 100, not for big characters in stage 8 or transformed fighters) and barrels (kind 3, only when
   crouching, 150) whose height span (FUN_0c02649a) overlaps the fighter's; poles (kind 4) within 250 in height and 200
   away; items lying on the floor within 200, or 400 of the hand when flying (+0x30D == 15). */
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
float FUN_0c02649a(char *obj, int top);
void thunk_FUN_0c062242(char *slot, float *pos);
float FUN_0c0e2340(float *v);
extern float _builtin_sqrtf(float);
extern float _builtin_fabsf(float);

#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
#define B(o, n) (*(signed char *)((o) + (n)))
#define UB(o, n) (*(unsigned char *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define NEXT(n) (*(char **)((n) + 24))
#define TYPE(n, k) (*(unsigned char *)((char *)0x0C33BFD8 + B(n, 0x314) * 10 + (k)))

void FUN_0c0abf64(char *o)
{
    struct { char *pl; float a, b, c, d, e, f, g; float hand[3]; float v[3]; } s;
    char *n, *best;
    float bd, d, r, lo;
    signed char t;

    FUN_0c0df4d0(0x14000 - *(int *)(o + 48));
    FUN_0c0dfa50(0x14000 - *(int *)(o + 48));
    bd = 9999.0f;
    best = 0;
    for (n = *(char **)0x0C7E4078; n != 0; n = NEXT(n)) {
        switch (B(n, 4)) {
        case 1:
            if (B(o, 0x71F1) == 0) {
                if (TYPE(n, 6) == 1) {
                    t = B(o, 4);
                    if (t == 3 || t == 6 || t == 7)
                        continue;
                } else if (TYPE(n, 6) == 2) {
                    t = B(o, 4);
                    if (!(t == 4 || t == 5 || t == 9))
                        continue;
                }
            }
            t = B(n, 0x30D);
            if (t == 12 || t == 10 || t == 11 || t == 6 || t == 7 || t == 8 || t == 9) {
                s.pl = PL(B(o, 3));
                thunk_FUN_0c062242(s.pl + 0x300 + (short)(B(s.pl, 0x71F1) * 3520) + 704, s.hand);
                s.v[0] = s.hand[0] - F(n, 32);
                s.v[1] = s.hand[1] - F(n, 36);
                s.v[2] = s.hand[2] - F(n, 40);
                d = FUN_0c0e2340(s.v);
                if (!(300.0f > d))
                    continue;
                if (!(bd > d))
                    continue;
            } else {
                if (B(n, 0x30D) != 0)
                    continue;
                s.v[1] = F(o, 36) - FUN_0c02649a(n, 1);
                if (!(100.0f > _builtin_fabsf(s.v[1])))
                    continue;
                s.v[0] = F(n, 32) - F(o, 32);
                s.v[2] = F(n, 40) - F(o, 40);
                d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
                if (((unsigned char *)0x0C33BFDE)[B(n, 0x314) * 10] == 2)
                    d = d - 100.0f;
                if (!(200.0f > d))
                    continue;
                if (!(bd > d))
                    continue;
            }
            break;
        case 2:
            if (B(n, 0x30D) != 0)
                continue;
            if (B(o, 0x71BC) == 2) {
                r = 150.0f;
            } else {
                if (*(signed char *)(0x0C7F302C + 37) == 8) {
                    if (B(o, 0x71F1) != 0)
                        continue;
                    t = B(o, 4);
                    if (t == 4 || t == 5 || t == 9)
                        continue;
                }
                r = 100.0f;
            }
            s.f = r;
            s.e = FUN_0c02649a(n, 1);
            s.a = FUN_0c02649a(o, 1) + 100.0f;
            s.b = FUN_0c02649a(n, 0);
            lo = FUN_0c02649a(o, 0) + -100.0f;
            if (!(s.a > s.e))
                continue;
            if (!(s.b > lo))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(s.f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        case 3:
            if (B(o, 0x71BC) != 2)
                continue;
            if (B(n, 0x30D) != 0)
                continue;
            s.c = FUN_0c02649a(n, 1);
            s.d = FUN_0c02649a(o, 1) + 100.0f;
            s.e = FUN_0c02649a(n, 0);
            lo = FUN_0c02649a(o, 0) + -100.0f;
            if (!(s.d > s.c))
                continue;
            if (!(s.e > lo))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (B(o, 0x71BC) != 2)
                continue;
            if (!(150.0f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        case 4:
            if (B(n, 0x30D) != 0)
                continue;
            s.v[1] = F(o, 36) - F(n, 36);
            if (!(250.0f > _builtin_fabsf(s.v[1])))
                continue;
            s.v[0] = F(o, 32) - F(n, 32);
            s.v[2] = F(o, 40) - F(n, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(200.0f > d))
                continue;
            if (!(bd > d))
                continue;
            break;
        default:
            continue;
        }
        best = n;
        bd = d;
    }
    for (n = *(char **)0x0C7E407C; n != 0; n = NEXT(n)) {
        if (B(n, 4) != 6)
            continue;
        if (B(n, 0x30D) == 15) {
            s.pl = PL(B(o, 3));
            thunk_FUN_0c062242(s.pl + 0x300 + (short)(B(s.pl, 0x71F1) * 3520) + 704, s.hand);
            s.v[0] = s.hand[0] - F(n, 32);
            s.v[1] = s.hand[1] - F(n, 36);
            s.v[2] = s.hand[2] - F(n, 40);
            d = FUN_0c0e2340(s.v);
            if (!(400.0f > d))
                continue;
            if (!(bd > d))
                continue;
        } else {
            if (B(n, 0x30D) != 0)
                continue;
            s.v[1] = F(o, 36) - FUN_0c02649a(n, 1);
            if (!(100.0f > _builtin_fabsf(s.v[1])))
                continue;
            s.v[0] = F(n, 32) - F(o, 32);
            s.v[2] = F(n, 40) - F(o, 40);
            d = _builtin_sqrtf(s.v[2] * s.v[2] + s.v[0] * s.v[0]);
            if (!(200.0f > d))
                continue;
            if (!(bd > d))
                continue;
        }
        best = n;
        bd = d;
    }
    if (best != 0)
        best[0x310 + B(o, 3)] = 1;
    *(char **)(o + 0x71C8) = best;
}
