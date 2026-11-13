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
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();

int fx_spawn_04bc94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((a4 == 0) && ((a6 == 0) || (a7 == 0))) {
    } else {
        t0 = obj_create(0x5, 0x1, 0x1, 0x0);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned char *)((t0 + 0x1)) = 0x1;
            *(unsigned char *)((t0 + 0x8)) = 0x0;
            (((struct oEC_ushort *)(t0))->v) = 0x0;
            *(unsigned char *)((t0 + 0x4)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x5;
            *(unsigned char *)((t0 + 0x5)) = 0x19;
            *(unsigned int *)((t0 + 0x10)) = 0xC04BDA4;
            (((struct o118_uint *)(t0))->v) = 0x0;
            if (a4 != 0) {
                *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((0x10C + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)((a4 + 0x2C)); }
            } else {
                *(unsigned char *)((t0 + 0x3)) = 0x2;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a6); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(a7); }
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC322024); }
            t2 = (((struct o2E0_int *)(t0))->v);
            FUN_0c06233a(t2, 0xC4CFA68, 0x1B);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x211;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o4C_float *)(t2))->v) = 1.0f;
            (((struct o1C_float *)(t2))->v) = 0.0399999991f;
            (((struct o20_float *)(t2))->v) = 0.0399999991f;
            (((struct o24_float *)(t2))->v) = 0.0399999991f;
            t1 = 0x24;
        }
        t0 = t1;
    }
    return t0;
}
