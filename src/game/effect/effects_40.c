/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c039090-0c03921c) */

struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);
int thunk_FUN_0c062242(int, int);
struct o2E0_int { char p[0x2E0]; int v; };


void fx_spawn_039090(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC3213E0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC3213F8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC3213EC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)(0xC3213E0); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC03921C;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((a4 + 0x3));
            t4 = *(int *)((((0x2E0 + t0) + t2) + 0x0));
            FUN_0c06233a(t4, ((signed char)((((t3 << 1) + t3) << 2) << 1) + 0xC6002D0), 0x6);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x2)) = 0x231;
            (((struct o1C_float *)(t4))->v) = (*(float *)(((0xC321404 + t2) + 0x0)));
            (((struct o20_float *)(t4))->v) = (*(float *)(((0xC321404 + t2) + 0x0)));
            (((struct o44_float *)(t4))->v) = 1.0f;
            (((struct o48_float *)(t4))->v) = 1.0f;
            (((struct o4C_float *)(t4))->v) = 1.0f;
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        t1 = *(signed char *)((t0 + 0x3));
        thunk_FUN_0c062242(((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)), (((((struct o2E0_int *)(t0))->v)) + 0x4));
        t1 = 0x4;
        t2 = 0x1;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((t1 + (0x2E0 + t0)))) + 0x4)) = *(struct mv3 *)((((((struct o2E0_int *)(t0))->v)) + 0x4)); }
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0xA) {
                break;
            }
        }
    }
}
