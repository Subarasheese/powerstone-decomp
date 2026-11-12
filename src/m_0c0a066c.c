/* @unit 0c0a066c-0c0a07e4 */
struct O { char c0[4]; char c4; };
struct S {
    char c0[3]; char c3; char p4[6]; char c10; char p11[21]; char v32[16]; int i48;
    char pad[0x71a8 - 52]; char b71a8, b71a9; char pad5[0x71ba - 0x71aa];
    char b71ba, b71bb, b71bc; char pad6[0x71c8 - 0x71bd]; struct O *o71c8; struct O *o71cc;
};
struct S3 { char pad[0x7236]; char b7236; };
extern char FUN_0c09c6b8(struct S *p);
extern void FUN_0c09a808(struct S *p, int a, int b);
extern void FUN_0c0a3914(struct S *p, int a);
extern void FUN_0c0a3796(int a, int b);
extern int FUN_0c09dc1c(char *a, char *b);
extern char FUN_0c0ac6a2(struct O *o, int a);
extern void FUN_0c0abe44(struct O *o, int a, int b);
void FUN_0c0a066c(struct S *pp, int u)
{
    register struct S *p = pp;
    register void (*fn)(struct S *, int, int) = FUN_0c09a808;
    int v;
    switch (((struct S3 *)p)->b7236 = FUN_0c09c6b8(p)) {
    case 0: case 1: case 11: case 17: case 18: case 19:
        fn(p, 2, 219); break;
    case 13: fn(p, 2, 54); break;
    case 5: case 6: case 7: fn(p, 2, 195); break;
    case 14: fn(p, 2, 30); break;
    case 2: case 3: fn(p, 2, 237); break;
    case 15: fn(p, 2, 103); break;
    case 9: case 10: case 12: fn(p, 2, 229); break;
    case 4: case 16: fn(p, 2, 80); break;
    case 8: fn(p, 2, 247); break;
    }
    p->b71a8 = p->b71a9 = 1;
    p->c10 = 0;
}
void FUN_0c0a070e(struct S *pp)
{
    register struct S *p = pp;
    register struct O *o;
    int d, t; unsigned short us;
    p->b71ba = 35;
    p->b71bc = 0;
    o = p->o71c8;
    if (o) {
        if (p->o71c8->c4 == 6) {
            FUN_0c0a3914(p, 18);
            FUN_0c0a3796(p->c3, 14);
        }
        d = FUN_0c09dc1c(p->v32, (char *)o + 32);
        d = (unsigned short)(d - p->i48);
        if (d & 0x8000) d |= 0xffff0000;
        if (d >= 0x4000 || d <= -0x4000) {
            *(short *)((char *)p + 236) = 5;
            p->c10 = 1;
            return;
        }
        if (FUN_0c0ac6a2(o, p->c3)) {
            FUN_0c0abe44(o, 5, p->c3);
            p->o71cc = o;
        }
    }
    FUN_0c0a066c(p, 0);
}
