/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0457d0-0c045968) */

/* named globals (symbols.txt) */
extern char g_res_capcom_logo[];
struct o118_uint { char p[0x118]; unsigned int v; };
struct o308_float { char p[0x308]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
int memset(int, int, int);

int fx_spawn_0457d0(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x8, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x1;
        *(unsigned int *)((t0 + 0x10)) = 0xC045AAC;
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x30)) = 0x0;
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        (((struct o58_float *)(t0))->v) = 1.0f;
        (((struct o54_float *)(t0))->v) = 1.0f;
        (((struct o50_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC14A678); }
        t2 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), 0xC664A18, t2);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC14A69C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x10)) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC14A6D8)); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        t2 = 0x6;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))), 0xC664A18, 0x3);
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x2)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x4)) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC14A69C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0x2E0 + t0) + (t2 << 2)) + 0x0))) + 0x10)) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC14A6D8)); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        memset((t0 + 0x308), 0x0, 0x14);
        *(unsigned char *)(((t0 + 0x308) + 0x5)) = 0x1;
        (((struct o308_float *)(t0))->v) = 0.0f;
        t1 = 0x1;
    }
    return t1;
}
