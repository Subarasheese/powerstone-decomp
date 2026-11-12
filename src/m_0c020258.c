/* @unit 0c020258-0c0203d0 -macsave=1 */
typedef struct V { float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9; int i10; float f11; float f12; int i13; } V;
typedef struct R { char p0; signed char b1; char p2[8]; short h10; } R;
extern char g8_o17fea4;
extern R g8_o362a50;
extern void FUN_0c027fa4(V *, void *, int, int, int, int);
extern float FUN_0c0dfa50(int);
void FUN_0c020258(void)
{
    V v;
    float r;
    short *hp;
    v.f4 = 1.0f;
    v.f5 = 1.0f;
    v.i10 = 0;
    v.i13 = 5;
    v.f11 = 1.0f;
    v.f3 = 7.0f;
    v.f2 = 208.0f;
    v.f1 = 208.0f;
    FUN_0c027fa4(&v, &g8_o17fea4, 2, 1, 0, 0);
    v.f1 += 112.0f;
    v.f3 += 0.09999999403f;
    FUN_0c027fa4(&v, &g8_o17fea4, 2, 0, 0, 0);
    v.f2 += 64.0f;
    v.f1 = 204.0f;
    v.f3 += 0.09999999403f;
    FUN_0c027fa4(&v, &g8_o17fea4, 2, 3, 0, 0);
    v.f1 = 190.0f;
    v.f3 += 0.09999999403f;
    FUN_0c027fa4(&v, &g8_o17fea4, 2, 4, 0, 0);
    v.f2 = 208.0f;
    hp = &g8_o362a50.h10;
    v.f1 = (float)(g8_o362a50.b1 * 112 + 208);
    *hp += 1456;
    v.f11 = FUN_0c0dfa50(g8_o362a50.h10) * 0.25f + 0.75f;
    v.f3 += 0.09999999403f;
    v.f4 = 5.0f;
    FUN_0c027fa4(&v, &g8_o17fea4, 2, 2, 0, 0);
}
