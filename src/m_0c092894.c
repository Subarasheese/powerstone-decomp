/* @unit 0c092894-0c092908 */
struct P { char pad[10]; char st; };
void FUN_0c09a808(struct P *p, int a, int b);
char FUN_0c09a910(struct P *p);
void FUN_0c0a2080(struct P *p);
void FUN_0c0928ba(struct P *p);
void FUN_0c0928d8(struct P *p);
void FUN_0c092894(struct P *p)
{
    switch (p->st) {
    case 0: FUN_0c0928ba(p); break;
    case 1: case 2: case 3: case 4: FUN_0c0928d8(p); break;
    }
}
void FUN_0c0928ba(struct P *p)
{
    FUN_0c09a808(p, 2, 0);
    p->st++;
}
void FUN_0c0928d8(struct P *p)
{
    if (FUN_0c09a910(p)) FUN_0c0a2080(p);
}
