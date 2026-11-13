/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ace1c-0c0ad15c) */

/* named globals (symbols.txt) */
extern char g_res_stage_c[];
extern char g_stage_obj_se_cue_tbl[];
int fx_spawn_with_params(int, float, float, float, float);
int snd_play_stage_obj_se(int, int, int);
struct o308_int { char p[0x308]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
extern int _quick_odd_mvn();
int snd_play_stage_obj_se(int a4, int a5, int a6);

int fx_spawn_debris_sprites(int a4, int a5);
int stage_obj_play_break_se(int a4);

int FUN_0c0ace1c(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    fx_spawn_with_params((*(int *)(((int)stk + 0))), 1.0f, 1.0f, 1.0f, (*(float *)0xC0ACE9C));
    fx_spawn_debris_sprites((*(int *)(((int)stk + 0))), 0x2);
    return snd_play_stage_obj_se((*(signed char *)0xC7F3051), (*(signed char *)(((int)stk + 4))), 0x3);
}

int stage_obj_on_break(int a4)
{
    register int t2;

    fx_spawn_with_params((a4 + 0x20), 1.0f, 1.0f, 1.0f, 2.0f);
    t2 = *(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3));
    if (t2 != -1) {
        fx_spawn_debris_sprites((a4 + 0x20), (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3))));
        return stage_obj_play_break_se(a4);
    }
    return t2;
}

int fx_spawn_debris_sprites(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t7;
    register float u2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x5, 0x1, 0x5, 0x0);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC339ED8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC339ECC); }
        (((struct o118_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0ACF90;
        u2 = *(float *)0xC0ACFE8;
        t3 = *(signed char *)(((int)stk + 4));
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((((t4 << 2) + (0x2E0 + t0)) + 0x0));
            FUN_0c06233a(t5, 0xC664970, (t4 + ((t3 << 2) + t3)));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x2)) = 0x1F;
            (((struct o1C_float *)(t5))->v) = u2;
            t4 = (t4 + 0x1);
            (((struct o20_float *)(t5))->v) = u2;
            (((struct o24_float *)(t5))->v) = u2;
            if ((int)t4 >= (int)0x5) {
                break;
            }
        }
        t7 = 0x24;
    }
    return t7;
}

int stage_obj_play_break_se(int a4)
{
    register int t1;
    register int t2;

    t1 = *(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3));
    if (t1 != -1) {
        t2 = *(signed char *)0xC7F3051;
        return snd_play_stage_obj_se(t2, (*(signed char *)((a4 + 0x3))), (*(signed char *)(((((int)g_stage_obj_se_cue_tbl) + (((signed char)t2 << 2) << 2)) + (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x3)))))));
    }
    return t1;
}
