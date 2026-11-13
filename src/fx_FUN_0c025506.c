/* Walks a linked list (next at +0x18) of entries and, for each idle one, runs the update routine picked by its kind byte at +0x248. */
int FUN_0c020468(int);
int FUN_0c023bf4(int, int);
int FUN_0c024764(int, int, int, int);
int FUN_0c0247d0(int, int);
int FUN_0c0247d6(int, int, int);
int FUN_0c024992(int, int, int);
int FUN_0c024b5e(int, int, int);

struct Ent {
    char p0[0x18];
    struct Ent *next;       /* 0x18 */
    char p1c[0x107 - 0x1C];
    signed char busy;       /* 0x107 */
    char p108[0x248 - 0x108];
    signed char kind;       /* 0x248 */
    char p249[3];
    char extra[1];          /* 0x24C */
};

void FUN_0c025506(char *a, int b, struct Ent *p)
{
    int r;
    int go;

    for (; p != 0; p = p->next) {
        if (p->busy != 0) {
            continue;
        }
        go = 0;
        switch (p->kind) {
        case 0:
            r = FUN_0c024b5e(b, (int)p, (int)p->extra);
            go = r != 0;
            break;
        case 1:
            r = FUN_0c024992(b, (int)p, (int)p->extra);
            go = r != 0;
            break;
        case 2:
            r = FUN_0c0247d6(b, (int)p, (int)p->extra);
            go = r != 0;
            break;
        }
        if (go) {
            FUN_0c020468((int)p);
            FUN_0c024764((int)p, (int)a, 2, b);
        }
        FUN_0c023bf4((int)p, b);
        if (r == 2) {
            FUN_0c0247d0((int)p, a[1]);
        }
    }
}
