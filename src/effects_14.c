/* @unit 0c034dd0-0c034eb0 */
struct R { char b0; char b1; char b2; char b3; };
struct W { short pad; short s2; };
struct O { char b0, b1, b2, b3, b4, b5; short s6; char c8[8]; void (*fn)(void); char c20[8]; void *p28; char c32[48];
  float f80, f84, f88, f92; char c96[140]; short s236; short s238; char c240[496]; struct { char b0; char x; short s2; } *p736; struct { char b0; char x; short s2; } *p740; };
extern struct O *obj_create(int, int, int, int);
extern void fx_tick_034dd0(void);
extern void FUN_0c06233a(void *, char *, int);
extern char g_spr_bank_player_fx[];
void fx_spawn_034dd0(struct O *a, int b)
{
    struct O *o;
    if (!(o = obj_create(5, 1, 2, 0))) return;
    o->b0 = 1;
    o->b3 = a->b3;
    o->b1 = 0;
    o->s6 = 1039;
    o->b5 = 25;
    o->fn = fx_tick_034dd0;
    o->f88 = 1.0f;
    o->f84 = 1.0f;
    o->f80 = 1.0f;
    o->f92 = 1.0f;
    o->p28 = a;
    o->s236 = o->s238 = b;
    if (!o->s238) o->s238 = 1;
    o->p736->b0 = 1;
    o->p736->s2 = 57;
    FUN_0c06233a(o->p736, &g_spr_bank_player_fx[(char)(o->b3 * 24)], 13);
    o->p740->b0 = 1;
    o->p740->s2 = 31;
    FUN_0c06233a(o->p740, &g_spr_bank_player_fx[(char)(o->b3 * 24)], 14);
}
