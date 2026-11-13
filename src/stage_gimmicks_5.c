/* @unit 0c0af23c-0c0af2f4 -extra=a=400 */
/* _quick_odd_mvn */
typedef struct V { int a, b, c; } V;
typedef struct T { short pad[1]; short w; } T;
typedef struct S { char b0, b1, b2, b3, b4, b5; short w6; char b8, b9, b10, b11; int pad12; void (*fn)(); char pad2[0x2e0-20]; T *t; char pad3[0x308-0x2e4]; char *q; char pad4[2]; char r; } S;
extern S *obj_create(int a, int b, int c, int d);
extern void stage_obj_load_layout_pos(S*);
extern void FUN_0c06233a(T*, int, int);
extern V g_vec3_one_33a1bc;
extern char g_res_stage_b;
void stage_gimmick_05_update(int *o);
void stage_gimmick_05_spawn(char *q)
{
    S *s;
    if ((s = obj_create(5, 1, 1, 0))) {
        s->b0 = 1;
        s->b1 = 1;
        s->b3 = 2;
        s->w6 = 15;
        s->b5 = 25;
        s->b8 = 0;
        s->b9 = 0;
        s->b10 = 0;
        s->b11 = 0;
        s->fn = stage_gimmick_05_update;
        s->b4 = 13;
        s->q = q;
        s->r = q[1];
        stage_obj_load_layout_pos(s);
        *(V *)((char *)s + 80) = g_vec3_one_33a1bc;
        FUN_0c06233a(s->t, (int)&g_res_stage_b, q[2]);
        *(char *)s->t = 1;
        s->t->w = 1;
    }
}
void stage_gimmick_05_update(int *o)
{
    o[11] += 182;
}
