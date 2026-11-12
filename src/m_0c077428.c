/* @unit 0c077428-0c07746c */
struct S { char p[0x71ba]; char k; char q[0x10b]; };
struct T { char p[13]; char f; };
struct S;
void FUN_0c07a1e4(int);
void FUN_0c0a3914(struct S *, int);
int FUN_0c077428(int a);
void FUN_0c07743e(struct S *s);
int FUN_0c077428(int a)
{
    FUN_0c07a1e4(a);
    FUN_0c07743e((struct S *)a);
    return 0;
}
void FUN_0c07743e(struct S *s)
{
    struct T *t;
    t = (struct T *)((char *)s + 0x72bc);
    if (t->f) {
        if (s->k != 11) {
            t->f = 0;
            FUN_0c0a3914(s, 49);
        }
    }
}
