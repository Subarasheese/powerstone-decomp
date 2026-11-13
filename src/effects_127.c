/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04a8ec-0c04aa24) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();

int FUN_0c04a8ec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t3 = obj_create(0x5, 0x0, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned char *)((t3 + 0x1)) = 0x1;
        *(unsigned char *)((t3 + 0x3)) = 0x2;
        *(unsigned short *)((t3 + 0x6)) = 0x40F;
        *(unsigned char *)((t3 + 0x5)) = 0x19;
        *(unsigned char *)((t3 + 0x8)) = 0x0;
        *(unsigned char *)((t3 + 0x9)) = 0x0;
        *(unsigned char *)((t3 + 0xA)) = 0x0;
        *(unsigned char *)((t3 + 0xB)) = 0x0;
        *(unsigned int *)((t3 + 0x10)) = 0xC04A9D8;
        FUN_0c0e6fe8(t3);
        FUN_0c0e6fe8(t0);
        FUN_0c0e6fe8(t1);
        (((struct o5C_float *)(t2))->v) = 0.5f;
        (((struct o60_float *)(t2))->v) = 1.0f;
        (((struct o64_float *)(t2))->v) = 1.0f;
        (((struct o68_float *)(t2))->v) = 1.0f;
        (((struct o118_uint *)(t2))->v) = ((((struct o118_int *)(a4))->v));
        t0 = (((struct o2E0_int *)(t2))->v);
        FUN_0c06233a(t0, ((int)g_res_kyoutsuu), 0x0);
        (((struct o9C_uint *)(t0))->v) = a5;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x2)) = 0xF;
        t4 = 0xF;
    }
    return t4;
}

int FUN_0c04a9d8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC04A9D2))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC04A9AE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC04A9A0))(a4, a5, a6, a7);
}
