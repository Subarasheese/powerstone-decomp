/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03a024-0c03a12c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);

int fx_spawn_03a024(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC321560); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC321578); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC32156C); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = (0x880 + a4);
        *(unsigned int *)((t0 + 0x10)) = 0xC03A0CC;
        t2 = (((struct o2E0_int *)(t0))->v);
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0xA);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int fx_tick_03a024(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x8))) == 0) {
        t2 = (((struct oEC_short *)(a4))->v);
        (((struct oEC_ushort *)(a4))->v) = (t2 + 0x1);
        if (((int)(short)(t2 + 0x1) < (int)0x4B) && (t0 = *(int *)((a4 + 0x1C)), t1 = *(signed char *)((0x71BA + t0)), t1 == 22)) {
            return t1;
        }
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    return obj_destroy(a4, a5, a6, a7);
}
