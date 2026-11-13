/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03b384-0c03b4d0) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);
extern int obj_destroy(char *o, int a);

int fx_spawn_03b384(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = obj_create(0x5, 0x1, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t3 + 0x6)) = 0xF;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        *(unsigned char *)((t3 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t3))->v) = 0x0;
        (((struct oEE_ushort *)(t3))->v) = a5;
        (((struct oF0_ushort *)(t3))->v) = (*(signed char *)((a4 + 0x71A4)));
        (((struct oF2_ushort *)(t3))->v) = (unsigned char)(*(signed char *)((a4 + 0x71A5)));
        t5 = ((int (*)(int, int))(FUN_0c0e6fe8))(t3, 0x0);
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
        t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
        *(unsigned int *)((t2 + 0x1C)) = a4;
        (((struct o118_uint *)(t2))->v) = (0x580 + ((short)((short)(*(signed char *)((a4 + 0x71F1))) * (short)0xDC0) + (0x300 + a4)));
        *(unsigned int *)((t2 + 0x10)) = 0xC03B45A;
        t0 = (((struct o2E0_int *)(t2))->v);
        t1 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(t0, ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0x3);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0x1;
        t4 = 0x1;
    }
    return t4;
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
