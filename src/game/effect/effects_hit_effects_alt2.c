/* hit effect spawners (04B6B8..04BEF2) and kind dispatchers (0c04b6b8-0c04bfd0) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();

int fx_spawn_04bc94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((a4 == 0) && ((a6 == 0) || (a7 == 0))) {
    } else {
        t4 = obj_create(0x5, 0x1, 0x1);
        t5 = t4;
        if (t4 != 0) {
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned char *)((t4 + 0x1)) = 0x1;
            *(unsigned char *)((t4 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(t4))->v) = 0x0;
            *(unsigned char *)((t4 + 0x4)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x5;
            *(unsigned char *)((t4 + 0x5)) = 0x19;
            *(unsigned int *)((t4 + 0x10)) = 0xC04BDA4;
            (((struct o118_uint *)(t4))->v) = 0x0;
            if (a4 != 0) {
                *(unsigned char *)((t4 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                t6 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
                t6 = ((int (*)(int))(FUN_0c0e6fe8))(t0);
            } else {
                *(unsigned char *)((t4 + 0x3)) = 0x2;
                t0 = ((int (*)(int, int))(FUN_0c0e6fe8))(t4, 0x0);
                t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
            }
            t0 = ((int (*)(int))(FUN_0c0e6fe8))(t2);
            t0 = (((struct o2E0_int *)(t3))->v);
            FUN_0c06233a(t0, ((int)g_res_kyoutsuu), 0x1B);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x2)) = 0x211;
            (((struct o44_float *)(t0))->v) = 1.0f;
            (((struct o48_float *)(t0))->v) = 1.0f;
            (((struct o4C_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0399999991f;
            (((struct o20_float *)(t0))->v) = 0.0399999991f;
            (((struct o24_float *)(t0))->v) = 0.0399999991f;
            t5 = 0x24;
        }
        t0 = t5;
    }
    return t0;
}
