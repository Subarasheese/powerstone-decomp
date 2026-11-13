/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b384-0c03b4d0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
extern int obj_destroy(char *o, int a);

int fx_spawn_03b384(int a4, int a5)
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
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = a5;
        (((struct oF0_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x71A4)));
        (((struct oF2_ushort *)(t0))->v) = (unsigned char)(*(signed char *)((a4 + 0x71A5)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC3217A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC3217B0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC32178C); }
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct o118_uint *)(t0))->v) = (0x580 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)));
        *(unsigned int *)((t0 + 0x10)) = 0xC03B45A;
        t2 = (((struct o2E0_int *)(t0))->v);
        t0 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t0 << 1) + t0) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x2)) = 0x1;
        t1 = 0x1;
    }
    return t1;
}

int fx_tick_03b384(char *o, int a5)
{
    short n = *(short *)(o + 0xEC) + 1;
    char *p;

    *(short *)(o + 0xEC) = n;
    if (n >= *(short *)(o + 0xEE))
        return obj_destroy(o, a5);
    p = *(char **)(o + 0x1C);
    if (*(short *)(o + 0xF0) != *(signed char *)(p + 0x71A4))
        return obj_destroy(o, (int)p);
    if (*(short *)(o + 0xF2) == *(unsigned char *)(p + 0x71A5))
        return 0x71A5;
    return obj_destroy(o, (int)p);
}
