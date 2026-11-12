/* @unit 0c014d54-0c014dc8 */
struct P4 { char a; char pad[2]; char b; char c; char pad2[11]; int v; };
extern struct P4 *FUN_0c059132(int, int, int, int);
extern int tab17e888[];
void FUN_0c014d54(char c)
{
    struct P4 *p;
    if ((p = FUN_0c059132(5, 1, 0, 0))) {
        p->a = 1;
        p->b = 11;
        p->c = c;
        p->v = tab17e888[p->b];
    }
}
void FUN_0c014d8a(char c)
{
    struct P4 *p;
    if ((p = FUN_0c059132(5, 1, 0, 0))) {
        p->a = 1;
        p->b = 14;
        p->c = c;
        p->v = tab17e888[p->b];
    }
}
