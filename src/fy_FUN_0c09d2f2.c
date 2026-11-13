/* Scans an object's table of up to n entries (count at +0x2d8, ids at +0x2b8, values at +0x2c0) for one whose FUN_0c025f7a result equals the heading sector ((angle + 0x2000) / 0x4000 + 4) or is 8; for the first one it stores FUN_0c02629e(id, value) minus the float at +36 into *out and returns 1 when that is above thresh, else 2; returns 0 when none matches. */
struct Obj {
    char pad0[36];
    float f36;
    char pad1[48 - 40];
    int w48;
    char pad2[0x2B8 - 52];
    signed char ids[8];
    int vals[6];
    signed char n;
};
void FUN_0c023524(struct Obj *o, int *buf);
int FUN_0c025f7a(int a, int id, int *buf, int val);
float FUN_0c02629e(int id, int val);
int FUN_0c09d2f2(struct Obj *o, float *out, float thresh)
{
    int buf[6];
    int q;
    int i;
    signed char want;
    signed char got;
    float d;
    FUN_0c023524(o, buf);
    q = (unsigned short)(o->w48 + 0x2000) / 0x4000;
    want = q + 4;
    for (i = 0; i < o->n; i++) {
        got = FUN_0c025f7a(1, o->ids[i], buf, o->vals[i]);
        if (got == want || got == 8) {
            d = FUN_0c02629e(o->ids[i], o->vals[i]) - o->f36;
            *out = d;
            if (d > thresh)
                return 1;
            return 2;
        }
    }
    return 0;
}
