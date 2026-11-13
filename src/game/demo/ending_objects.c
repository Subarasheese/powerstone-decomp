/* @unit 0c014d54-0c014dc8 */
struct P4 { char a; char pad[2]; char b; char c; char pad2[11]; int v; };
extern struct P4 *obj_create(int, int, int, int);
extern int g_ending_obj_update_tab[];
void ending_spawn_obj_t0b(char c)
{
    struct P4 *p;
    if ((p = obj_create(5, 1, 0, 0))) {
        p->a = 1;
        p->b = 11;
        p->c = c;
        p->v = g_ending_obj_update_tab[p->b];
    }
}
void ending_spawn_obj_t0e(char c)
{
    struct P4 *p;
    if ((p = obj_create(5, 1, 0, 0))) {
        p->a = 1;
        p->b = 14;
        p->c = c;
        p->v = g_ending_obj_update_tab[p->b];
    }
}
