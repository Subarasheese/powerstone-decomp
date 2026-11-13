/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0acaf8-0c0acc54) */

/* named globals (symbols.txt) */
extern char g_res_stage_c[];
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int snd_play_stage_obj_se(int, int, int);
int _quick_odd_mvn(void);

int fx_spawn_burst_sprites(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u6;

    t0 = obj_create(0x5, 0x1, 0xA, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = (signed char)a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC339D08); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC339D20); }
        *(unsigned int *)((t0 + 0x10)) = 0xC0ACC54;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t2, 0xC664970, (t1 + 0xF));
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x2)) = 0x401;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4)) = *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC339D2C)); }
            if ((signed char)a4 != 0) {
                u6 = ((((struct o4_float *)(t2))->v));
                u6 *= -1.0f;
                (((struct o4_float *)(t2))->v) = u6;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x10)) = *(struct mv3 *)(0xC339D20); }
            if ((signed char)a4 != 0) {
                *(unsigned int *)((t2 + 0x14)) = 0x8000;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(0xC339D08); }
            t1 = (t1 + 0x1);
            (((struct o40_float *)(t2))->v) = 1.0f;
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        return snd_play_stage_obj_se((*(signed char *)0xC7F3051), 0x2, 0x3);
    }
    return t0;
}
