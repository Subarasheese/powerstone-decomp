/* @unit 0c0a16bc-0c0a18f8 */
struct O;

struct O {
    char pad0[3];
    char b3;
    char pad1[44];
    int w48;
    char pad2[4];
    float f56;
    float f60;
    float f64;
    char pad3[168];
    short s236;
    short s238;
    short s240;
    char pad4[20];
    char b262;
    char pad5[469];
    int i732;
    char pad6[28202];
    char b28938;
    char b28939;
    char b28940;
    char pad7[153];
    char b29094;
    char b29095;
    char b29096;
    char b29097;
    char pad8[16];
    char b29114;
    char pad9[1];
    char b29116;
    char pad10[11];
    struct O * p29128;
    struct O * p29132;
    char pad11[15];
    char b29151;
    char pad12[44];
    short s29196;
    char pad13[40];
    char b29238;
};
extern int g_w31e0;
extern void FUN_0c099b60(struct O *);
extern void FUN_0c09c506(struct O *);
extern void FUN_0c09a808(struct O *, int, int);
extern int FUN_0c09db78(struct O *);
extern int FUN_0c09ddfe(struct O *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern int FUN_0c0ac6a2(struct O *, int);
extern void FUN_0c0abe44(struct O *, int, int);
void FUN_0c0a16bc(struct O *o0, char c)
{
    register struct O *o = o0;
    register void (*fn)(struct O *, int, int) = FUN_0c09a808;
    register short five = 5;
    register int z = 0;
    int d;
    int a6;
    float f;
    o->b29114 = 24;
    o->b29151 = z;
    FUN_0c099b60(o);
    o->b28938 = z;
    o->b28939 = z;
    o->b28940 = z;
    FUN_0c09c506(o);
    o->s240 = c;
    switch (c) {
    case 0:
    default:
        if (o->b29116 == 1) fn(o, 0, 1); else fn(o, 0, 0);
        o->b29095 = 8;
        o->b29094 = 8;
        o->s236 = 8;
        o->s238 = z;
        o->s29196 = five;
        break;
    case 1:
        a6 = 156;
        goto common;
    case 2:
        a6 = 157;
    common:
        fn(o, 2, a6);
        o->b29096 = o->b29097 = !z;
        o->s29196 = five;
        break;
    case 3:
        o->w48 = FUN_0c09db78(o);
        fn(o, 1, 83);
        o->b29096 = o->b29097 = !z;
        break;
    case 4:
        fn(o, 2, 157);
        o->b29096 = o->b29097 = !z;
        o->s29196 = five;
        if (o->i732 & 240)
            o->w48 = (unsigned short)(FUN_0c09ddfe(o) + g_w31e0 + 32768);
        f = -9.0f;
        d = (unsigned short)(o->w48 - FUN_0c09db78(o));
        if (d & 0x8000) d |= 0xffff0000;
        if (d > 16384 || d < -16384) f = -4.5f;
        o->f60 = 18.0f;
        o->f56 = FUN_0c0df4d0(-o->w48 + 81920) * f;
        o->f64 = FUN_0c0dfa50(-o->w48 + 81920) * f;
        o->b262 = 10;
        break;
    }
}
void FUN_0c0a1844(struct O *o)
{
    struct O *p;
    o->b29114 = 25;
    o->b29116 = 0;
    FUN_0c09a808(o, 2, 226);
    o->b29097 = 1;
    o->b29096 = 1;
    o->w48 = FUN_0c09db78(o);
    p = o->p29128;
    if (p) {
        if (FUN_0c0ac6a2(p, o->b3)) {
            FUN_0c0abe44(p, 5, o->b3);
            o->p29132 = p;
            o->b29238 = 1;
        }
    }
}
