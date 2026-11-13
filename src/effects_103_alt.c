/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c04463c-0c044e38) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o98_float { char p[0x98]; float v; };
int obj_create_beside(int, int, int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(int, int);

int fx_spawn_0446ce(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = obj_create_beside(0x6, a4, 0x1, 0xA, 0x0);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = 0x1;
        *(unsigned char *)((t1 + 0x3)) = 0x2;
        *(unsigned short *)((t1 + 0x6)) = 0x21;
        *(unsigned char *)((t1 + 0x5)) = 0x1;
        *(unsigned int *)((t1 + 0x10)) = 0xC044B94;
        (((struct o118_uint *)(t1))->v) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        *(unsigned int *)((t1 + 0x30)) = 0x0;
        *(unsigned int *)((t1 + 0x2C)) = 0x0;
        (((struct o58_float *)(t1))->v) = 1.0f;
        (((struct o54_float *)(t1))->v) = 1.0f;
        (((struct o50_float *)(t1))->v) = 1.0f;
        FUN_0c0e6fe8(t1, 0x1);
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t1 = (0x2E0 + t0);
        t0 = 0x0;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            FUN_0c06233a(t3, ((int)g_res_kyoutsuu), 0x6D);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            *(unsigned short *)((t3 + 0x2)) = 0x1211;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o48_float *)(t3))->v) = 1.0f;
            t0 = (t0 + 0x1);
            (((struct o4C_float *)(t3))->v) = 1.0f;
            (((struct o98_float *)(t3))->v) = 2.0f;
            if ((int)(signed char)t0 >= (int)0xA) {
                break;
            }
        }
        t2 = 0x98;
    }
    return t2;
}
