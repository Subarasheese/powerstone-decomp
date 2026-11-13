/* @unit 0c0aca24-0c0acaf8 -extra=a=400 */
/* _quick_odd_mvn */
struct V { int a, b, c; };
struct E { char b0, b1, b2, b3, b4, b5; short w6; char b8, b9; char p10[6]; void (*f16)(void); char p20[60]; struct V v80; char p92[0x102-92]; char c102; char p103[2]; char c105, c106; char p107[0x2d9-0x107]; char c2d9, c2da; char p2db[5]; char *p2e0; char p2e4[0x308-0x2e4]; int *i308; char c30c, c30d; };
struct B { char p[0x2e0]; short *q; };
struct A { char a0, a1, a2, a3, a4, a5, a6, a7, a8, a9; };
extern struct E *obj_create(int, int, int, int);
extern void stage_obj_load_layout_pos(struct E *);
extern void FUN_0c06233a(char *, int, int);
extern struct V g_vec3_one_339cec;
extern char g_res_stage_b;
void stage_type03_update_nop(void);
void stage_spawn_type03(struct A *a)
{
    register struct E *e;
    register int one;
    register int zero;
    if ((e = obj_create(2, 1, 1, 0))) {
        one = 1;
        zero = 0;
        e->b0 = 1;
        e->b1 = one;
        e->b3 = 2;
        e->w6 = 5;
        e->b5 = 25;
        e->b8 = zero;
        e->b9 = zero;
        e->c30d = zero;
        e->f16 = stage_type03_update_nop;
        e->b4 = 3;
        *(struct A **)&e->i308 = a;
        e->c2d9 = a->a8;
        e->c2da = a->a9;
        e->c102 = a->a5;
        e->c105 = one;
        e->c106 = one;
        stage_obj_load_layout_pos(e);
        e->v80 = g_vec3_one_339cec;
        FUN_0c06233a(e->p2e0, (int)&g_res_stage_b, a->a2);
        *e->p2e0 = one;
        ((short *)((struct B *)e)->q)[1] = one;
    }
}
void stage_type03_update_nop(void) {}
