/* @unit 0c051ce4-0c051e2c -macsave=1 */
typedef struct E { unsigned char c0; char p1[11]; short *q; char pad1[60]; union { int i; short h; } u76; char pad2[512]; } E;
typedef struct A { char p[3]; char c3; char p4[728]; unsigned int m732; } A;
extern short g8_s3ec;
extern unsigned char g8_b3ee;
extern E g8_tab6f40[];
extern short *g8_p3e8;
extern int FUN_0c050068(A *);
extern int FUN_0c050180(int);
extern int FUN_0c05012e(A *);
extern void FUN_0c04cdf2(void);
#define EN ((E *)((char *)tb + (short)(*pb * 596)))
void FUN_0c051ce4(A *a0)
{
    register E *tb;
    register int x;
    unsigned char *pb;
    A *a = a0;
    E *e;
    short s0, s4, v;
    int r, rr, vi;
    short *ps;
    x = FUN_0c050068(a);
    pb = &g8_b3ee;
    tb = g8_tab6f40;
    e = EN;
    if ((unsigned short)(x - e->u76.h + 4096) < 8192)
        x = e->u76.i;
    else
        e->u76.i = x;
    s0 = FUN_0c050180(x);
    s4 = FUN_0c050180(x + 0x8000);
    v = *g8_p3e8++;
    r = FUN_0c05012e(a);
    ps = &g8_s3ec;
    switch (EN->c0) {
    case 0:
        *ps = 0;
        EN->c0++;
    case 1:
        *ps = 0;
        rr = (short)r;
        vi = v;
        if (vi < rr - 20) {
            a->m732 |= (unsigned short)s0;
        } else if (vi > rr + 20) {
            a->m732 |= (unsigned short)s4;
        } else {
            EN->c0++;
        }
        break;
    case 2:
        *ps = 1;
        FUN_0c04cdf2();
        EN->q = g8_p3e8;
        break;
    }
}
