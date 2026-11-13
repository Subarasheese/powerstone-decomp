/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c034dd0-0c034eb0) */

struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);

int fx_spawn_034dd0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = ((int (*)(int, int, int, int))obj_create)(0x5, 0x1, 0x2, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x40F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC034EB0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        (((struct o5C_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        (((struct oEE_ushort *)(t0))->v) = a5;
        (((struct oEC_ushort *)(t0))->v) = a5;
        if (((((struct oEE_short *)(t0))->v)) == 0) {
            (((struct oEE_ushort *)(t0))->v) = 0x1;
        }
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x39;
        t1 = *(signed char *)((t0 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0xD);
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E4_int *)(t0))->v)) + 0x2)) = 0x1F;
        t1 = *(signed char *)((t0 + 0x3));
        return FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), ((signed char)((((t1 << 1) + t1) << 2) << 1) + 0xC6002D0), 0xE);
    }
    return t0;
}
