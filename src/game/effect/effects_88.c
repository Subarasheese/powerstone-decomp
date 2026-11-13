/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c041574-0c0416d8) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(int);
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oEC_short { char p[0xEC]; short v; };
float math_sin_angle16(int);
int thunk_FUN_0c062242(int);

int FUN_0c041574(int a4)
{
    register int t0;
    register int t8;
    register int t2;
    register int t3;

    t0 = obj_create(0x5, 0x1, 0x1, 0x0);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC041614;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC149B78); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC149B84); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC149B90); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        t2 = (((struct o2E0_int *)(t0))->v);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        t3 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(t2, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x18);
        *(unsigned short *)((t2 + 0x2)) = 0x1F;
        (((struct oC_float *)(t2))->v) = (*(float *)0xC0416C0);
        t8 = 0xC;
    }
    return t8;
}

float FUN_0c041614(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x3));
    thunk_FUN_0c062242((((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x2C0));
    t0 = (((struct o2E0_int *)(a4))->v);
    u0 = math_sin_angle16(((((struct oEC_short *)(a4))->v)));
    (((struct o20_float *)(t0))->v) = ((u0 / 2.0f) + 0.5f);
    (((struct o1C_float *)(t0))->v) = ((u0 / 2.0f) + 0.5f);
    (((struct oEC_ushort *)(a4))->v) = ((((((struct oEC_short *)(a4))->v)) + 0x400) & 0x7FFF);
    return ((u0 / 2.0f) + 0.5f);
}
