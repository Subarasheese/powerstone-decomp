/* @unit 0c0b9ee0-0c0ba090 -macsave=1 */
struct EE { char p[768]; char r[1]; char q[28400]; signed char sc; };
struct W { char b0; char pad[1]; short w2; };
struct F { char b0; char pad[1]; short w2; char p2[16]; int u20; char p3[4]; float f28, f32, f36; };
struct N { char b0; char b1; char p0; char b3; char p1; char b5; short w6; char p2[8]; void *p16; char p3[8]; void *p28; char p4[4]; float f36; char p5[4]; int i44, i48, i52; char p6[24]; float f80, f84, f88; char p7[150]; short w242; char p8[13]; char b257, b258; char p9[477]; struct F *p736, *p740, *p744; };
struct O { char p0[3]; char b3; char p1[40]; int i44, i48, i52; };
extern char g_players[];
extern char g_spr_bank_player_fx[];
extern struct N *obj_create(int, int, int, int);
extern void fx_update_16(void);
extern void thunk_FUN_0c062242(char *, char *);
extern void obj_set_record_char(struct N *, int);
extern void FUN_0c06233a(struct F *, char *, int);
void fx_spawn_16(struct O *o, char c)
{
    struct N *e;
    if ((e = obj_create(1, 1, 3, 0))) {
        e->b0 = 1;
        e->b1 = 0;
        e->b3 = o->b3;
        e->p16 = fx_update_16;
        e->p28 = o;
        e->w6 = 31;
        e->b5 = 25;
#define ENT ((struct EE *)(g_players + (unsigned short)(o->b3 * 29392)))
        thunk_FUN_0c062242(ENT->r + (short)(ENT->sc * 3520) + 704, (char *)e + 32);
        e->f36 += 50.0f;
        e->i44 = o->i44;
        e->i48 = o->i48;
        e->i52 = o->i52;
        e->f80 = 0.0f;
        e->f84 = 0.0f;
        e->f88 = 0.0f;
        e->w242 = (unsigned char)c;
        e->b257 = 2;
        e->b258 = 2;
        obj_set_record_char(e, 115);
        FUN_0c06233a(e->p736, g_spr_bank_player_fx + (signed char)(o->b3 * 24), 7);
        e->p736->b0 = 1;
        e->p736->w2 = 15;
        FUN_0c06233a(e->p740, g_spr_bank_player_fx + (signed char)(o->b3 * 24), 10);
        e->p740->b0 = 1;
        e->p740->w2 = 63;
        e->p740->f28 = 0.0f;
        e->p740->f32 = 0.0f;
        e->p740->f36 = 0.0f;
        e->p740->u20 = 16384;
        FUN_0c06233a(e->p744, g_spr_bank_player_fx + (signed char)(o->b3 * 24), 8);
        e->p744->b0 = 1;
        e->p744->w2 = 63;
        e->p744->f28 = 0.0f;
        e->p744->f32 = 0.0f;
        e->p744->f36 = 0.0f;
        e->p744->u20 = 16384;
    }
}
